# VAULT-CLI - Ecosystem Integration

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_encryption | Master password hashing, secret encryption | VAULT_CRYPTO class |
| simple_json | Configuration files, secret export/import | VAULT_CONFIG, VAULT_BACKUP |
| simple_file | Vault file I/O, backup operations | VAULT_STORE, VAULT_BACKUP |
| simple_sql | SQLite database for secrets storage | VAULT_STORE class |
| simple_cli | Command-line argument parsing | VAULT_CLI class |
| simple_config | User configuration management | VAULT_CONFIG class |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_clipboard | Copy secret to clipboard | `vault get --clip` command |
| simple_console | Colored output, progress bars | Enhanced terminal output |
| simple_logger | Debug and audit logging | `--verbose` flag, audit trail |
| simple_email | Alert notifications | Team Edition alerts |
| simple_validation | Input validation rules | Policy enforcement |
| simple_datetime | Timestamp formatting | Audit log display |

## Integration Patterns

### simple_encryption Integration

**Purpose:** Core cryptographic operations for vault security

**Usage:**
```eiffel
class VAULT_CRYPTO

feature {NONE} -- Initialization

    encryption: SIMPLE_ENCRYPTION
        -- Encryption engine

    make (a_master_password: STRING; a_salt: STRING)
            -- Initialize with master password and salt.
        do
            create encryption.make
            master_key := encryption.pbkdf2_sha256 (
                a_master_password,
                encryption.hex_to_bytes (a_salt),
                600000,  -- OWASP 2025 iterations
                32       -- 256-bit key
            )
        end

feature -- Encryption

    encrypt_secret (a_name, a_value: STRING): TUPLE [encrypted: STRING; nonce: STRING]
            -- Encrypt a secret value.
        local
            l_nonce, l_key, l_encrypted: STRING
        do
            l_nonce := encryption.random_hex (16)
            l_key := encryption.hmac_sha256 (master_key, l_nonce + a_name)
            l_encrypted := xor_encrypt (a_value, l_key)
            Result := [l_encrypted, l_nonce]
        end

    decrypt_secret (a_name, a_encrypted, a_nonce: STRING): STRING
            -- Decrypt a secret value.
        local
            l_key: STRING
        do
            l_key := encryption.hmac_sha256 (master_key, a_nonce + a_name)
            Result := xor_decrypt (a_encrypted, l_key)
        end

    verify_password (a_stored_check: STRING): BOOLEAN
            -- Verify master password is correct.
        do
            Result := encryption.verify_password (master_key, a_stored_check)
        end

feature {NONE} -- Implementation

    master_key: STRING
        -- Derived master key (hex)

end
```

**Data flow:**
```
master_password -> PBKDF2(salt, 600K) -> master_key
secret_value -> HMAC(master_key, nonce+name) -> secret_key -> XOR -> encrypted
```

### simple_json Integration

**Purpose:** Configuration files and export/import formats

**Usage:**
```eiffel
class VAULT_CONFIG

feature -- Access

    json: SIMPLE_JSON
        -- JSON parser/writer

    load_config (a_path: STRING): VAULT_SETTINGS
            -- Load configuration from JSON file.
        local
            l_file: SIMPLE_FILE
            l_content: STRING
        do
            create l_file.make (a_path)
            l_content := l_file.read_all
            create json.make
            json.parse (l_content)

            create Result.make
            if attached json.string_at ("vault.file") as f then
                Result.set_vault_file (f)
            end
            if attached json.integer_at ("vault.session_timeout") as t then
                Result.set_session_timeout (t)
            end
        end

    export_to_json (a_secrets: LIST [VAULT_SECRET]): STRING
            -- Export secrets as JSON.
        do
            create json.make_object
            json.put_array ("secrets")
            across a_secrets as s loop
                json.array_add_object ("secrets")
                json.put_string ("name", s.item.name)
                json.put_string ("value", s.item.decrypted_value)
                json.put_array_from_strings ("tags", s.item.tags)
            end
            Result := json.to_string_pretty
        end

end
```

### simple_sql Integration

**Purpose:** SQLite database for encrypted secrets storage

**Usage:**
```eiffel
class VAULT_STORE

feature {NONE} -- Initialization

    db: SIMPLE_SQL
        -- SQLite database

    make (a_vault_path: STRING)
            -- Open vault database.
        do
            create db.make_sqlite (a_vault_path)
            if not db.table_exists ("vault_meta") then
                initialize_schema
            end
        end

feature -- Operations

    store_secret (a_secret: VAULT_SECRET)
            -- Store encrypted secret.
        do
            db.execute ("
                INSERT OR REPLACE INTO secrets
                (name, encrypted_value, nonce, tags, created_at, updated_at)
                VALUES (?, ?, ?, ?, ?, ?)
            ", <<
                a_secret.name,
                a_secret.encrypted_value,
                a_secret.nonce,
                a_secret.tags_json,
                a_secret.created_at,
                a_secret.updated_at
            >>)
        end

    get_secret (a_name: STRING): detachable VAULT_SECRET
            -- Retrieve secret by name.
        do
            db.query ("SELECT * FROM secrets WHERE name = ?", <<a_name>>)
            if db.has_row then
                create Result.make_from_row (db.current_row)
            end
        end

    list_secrets (a_pattern: STRING): LIST [VAULT_SECRET]
            -- List secrets matching pattern.
        do
            create {ARRAYED_LIST [VAULT_SECRET]} Result.make (10)
            db.query ("SELECT * FROM secrets WHERE name GLOB ?", <<a_pattern>>)
            across db.rows as row loop
                Result.extend (create {VAULT_SECRET}.make_from_row (row.item))
            end
        end

feature {NONE} -- Implementation

    initialize_schema
            -- Create database tables.
        do
            db.execute ("CREATE TABLE vault_meta (key TEXT PRIMARY KEY, value TEXT NOT NULL)")
            db.execute ("CREATE TABLE secrets (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT UNIQUE NOT NULL,
                encrypted_value TEXT NOT NULL,
                nonce TEXT NOT NULL,
                tags TEXT,
                created_at INTEGER NOT NULL,
                updated_at INTEGER NOT NULL,
                accessed_at INTEGER
            )")
            db.execute ("CREATE TABLE audit_log (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                timestamp INTEGER NOT NULL,
                operation TEXT NOT NULL,
                secret_name TEXT,
                success INTEGER NOT NULL,
                details TEXT
            )")
        end

end
```

### simple_cli Integration

**Purpose:** Command-line argument parsing and help generation

**Usage:**
```eiffel
class VAULT_CLI

feature -- Execution

    cli: SIMPLE_CLI
        -- CLI parser

    make
            -- Initialize CLI.
        do
            create cli.make ("vault", "Secure local secrets manager")
            cli.set_version ("1.0.0")

            -- Commands
            cli.add_command ("init", "Initialize new vault")
            cli.add_command ("unlock", "Unlock vault for session")
            cli.add_command ("lock", "Lock vault")
            cli.add_command ("set", "Store a secret")
            cli.add_command ("get", "Retrieve a secret")
            cli.add_command ("delete", "Remove a secret")
            cli.add_command ("list", "List all secrets")
            cli.add_command ("env", "Run command with secrets as env vars")

            -- Global options
            cli.add_option ("--vault", "Vault file path", "~/.vault/secrets.db")
            cli.add_option ("--format", "Output format", "text")
            cli.add_flag ("--quiet", "Suppress non-essential output")
        end

    execute
            -- Parse arguments and execute command.
        do
            cli.parse
            inspect cli.command
            when "init" then execute_init
            when "unlock" then execute_unlock
            when "set" then execute_set
            when "get" then execute_get
            when "delete" then execute_delete
            when "list" then execute_list
            when "env" then execute_env
            else
                cli.print_help
            end
        end

end
```

## Dependency Graph

```
vault-cli
    |
    +-- simple_encryption (required)
    |       +-- simple_base64
    |       +-- simple_datetime
    |
    +-- simple_json (required)
    |
    +-- simple_file (required)
    |
    +-- simple_sql (required)
    |       +-- simple_logger
    |
    +-- simple_cli (required)
    |
    +-- simple_config (required)
    |       +-- simple_json
    |       +-- simple_file
    |
    +-- simple_clipboard (optional)
    |
    +-- simple_console (optional)
    |
    +-- simple_logger (optional)
    |
    +-- ISE base (required)
```

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system name="vault_cli" uuid="GENERATE-NEW-UUID" xmlns="http://www.eiffel.com/developers/xml/configuration-1-22-0">
    <description>VAULT-CLI: Secure local secrets manager</description>

    <target name="vault_cli">
        <root class="VAULT_CLI" feature="make"/>

        <option warning="warning" syntax="standard" manifest_array_type="mismatch_warning">
            <assertions precondition="true" postcondition="true" check="true" invariant="true"/>
        </option>

        <setting name="console_application" value="true"/>
        <setting name="dead_code_removal" value="all"/>

        <capability>
            <void_safety support="all"/>
        </capability>

        <!-- simple_* ecosystem -->
        <library name="simple_encryption" location="$SIMPLE_EIFFEL/simple_encryption/simple_encryption.ecf"/>
        <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
        <library name="simple_file" location="$SIMPLE_EIFFEL/simple_file/simple_file.ecf"/>
        <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>

        <!-- Optional libraries -->
        <library name="simple_clipboard" location="$SIMPLE_EIFFEL/simple_clipboard/simple_clipboard.ecf"/>
        <library name="simple_console" location="$SIMPLE_EIFFEL/simple_console/simple_console.ecf"/>
        <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>

        <!-- ISE libraries (only when no simple_* alternative) -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
        <library name="time" location="$ISE_LIBRARY/library/time/time.ecf"/>

        <!-- Application source -->
        <cluster name="src" location=".\src\" recursive="true"/>
    </target>

    <target name="vault_cli_tests" extends="vault_cli">
        <root class="TEST_APP" feature="make"/>
        <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
        <cluster name="tests" location=".\tests\" recursive="true"/>
    </target>
</system>
```
