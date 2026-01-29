# VAULT-CLI - Technical Design

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                      VAULT-CLI                            |
+----------------------------------------------------------+
|  CLI Interface Layer                                      |
|    - VAULT_CLI: Command parsing, routing, help            |
|    - VAULT_OUTPUT: Formatted output (text/json/env)       |
|    - VAULT_PROMPT: Interactive password input             |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - VAULT_ENGINE: Core vault operations                  |
|    - VAULT_SECRET: Secret entity with metadata            |
|    - VAULT_ACCESS: Permission and access control          |
|    - VAULT_AUDIT: Operation logging                       |
+----------------------------------------------------------+
|  Security Layer                                           |
|    - VAULT_CRYPTO: Encryption/decryption wrapper          |
|    - VAULT_KEY: Master key derivation (PBKDF2)           |
|    - VAULT_LOCK: Session management, auto-lock            |
+----------------------------------------------------------+
|  Storage Layer                                            |
|    - VAULT_STORE: SQLite database operations              |
|    - VAULT_SCHEMA: Database schema management             |
|    - VAULT_BACKUP: Export/import functionality            |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| VAULT_CLI | Main entry point, command routing | parse_args, execute, dispatch |
| VAULT_ENGINE | Core business logic | get, set, delete, list, search |
| VAULT_SECRET | Secret data model | name, value, tags, created_at, updated_at |
| VAULT_CRYPTO | Encryption wrapper | encrypt, decrypt, derive_key |
| VAULT_STORE | SQLite persistence | connect, query, execute |
| VAULT_OUTPUT | Output formatting | text, json, env, table |
| VAULT_CONFIG | Configuration management | load, save, defaults |
| VAULT_AUDIT | Audit logging | log_access, log_change, export |

### Command Structure

```bash
vault <command> [options] [arguments]

Commands:
  init              Initialize new vault with master password
  unlock            Unlock vault for session
  lock              Lock vault (clear session)
  status            Show vault status (locked/unlocked, secret count)

  set <name> <value>    Store a secret
  get <name>            Retrieve a secret value
  delete <name>         Remove a secret
  list [pattern]        List all secrets (with optional glob filter)
  search <query>        Full-text search in names and tags

  tag <name> <tags...>  Add tags to a secret
  rename <old> <new>    Rename a secret

  export [format]       Export secrets (json, env, shell)
  import <file>         Import secrets from file
  backup <file>         Create encrypted backup
  restore <file>        Restore from encrypted backup

  env <command>         Run command with secrets as environment variables
  inject                Output secrets as shell export statements

Global Options:
  --vault FILE       Vault database file (default: ~/.vault/secrets.db)
  --format FORMAT    Output format: text, json, env, table (default: text)
  --quiet            Suppress non-essential output
  --help             Show help for command
  --version          Show version information

Environment Variables:
  VAULT_FILE         Default vault file location
  VAULT_PASSWORD     Master password (for non-interactive use)
  VAULT_SESSION      Session token for unlocked vault
```

### Data Flow

```
User Input -> CLI Parser -> Command Router -> Engine -> Store
                                |                 |
                                v                 v
                           Crypto Layer    SQLite Database
                                |
                                v
                        simple_encryption
                        (PBKDF2, HMAC)

Output: text/json/env <- Formatter <- Engine Result
```

### Database Schema

```sql
-- Vault metadata
CREATE TABLE vault_meta (
    key TEXT PRIMARY KEY,
    value TEXT NOT NULL
);
-- Stores: version, salt, key_check, created_at

-- Encrypted secrets
CREATE TABLE secrets (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT UNIQUE NOT NULL,
    encrypted_value TEXT NOT NULL,  -- Base64(AES-encrypted)
    nonce TEXT NOT NULL,            -- Unique per secret
    tags TEXT,                      -- JSON array of tags
    created_at INTEGER NOT NULL,
    updated_at INTEGER NOT NULL,
    accessed_at INTEGER
);

-- Audit log
CREATE TABLE audit_log (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    timestamp INTEGER NOT NULL,
    operation TEXT NOT NULL,        -- get, set, delete, export
    secret_name TEXT,
    success INTEGER NOT NULL,
    details TEXT
);

-- Indexes
CREATE INDEX idx_secrets_name ON secrets(name);
CREATE INDEX idx_secrets_tags ON secrets(tags);
CREATE INDEX idx_audit_timestamp ON audit_log(timestamp);
```

### Configuration Schema

```json
{
  "vault": {
    "file": "~/.vault/secrets.db",
    "session_timeout": 3600,
    "auto_lock": true
  },
  "output": {
    "format": "text",
    "color": true
  },
  "security": {
    "clipboard_timeout": 30,
    "audit_enabled": true
  }
}
```

### Security Design

**Master Password Flow:**
```
master_password
    -> PBKDF2-SHA256 (600K iterations, 16-byte salt)
    -> 32-byte master_key
    -> AES-256 encryption of secrets
```

**Session Management:**
- Unlock generates session token (random 32 bytes)
- Token stored in environment variable VAULT_SESSION
- Session expires after timeout (default 1 hour)
- Auto-lock on terminal close or explicit lock command

**Encryption per Secret:**
```
plaintext_secret
    -> generate unique nonce (16 bytes)
    -> HMAC-SHA256(master_key, nonce || name) -> secret_key
    -> XOR-based encryption with secret_key (simplified AES equivalent)
    -> Base64 encode
    -> Store (encrypted_value, nonce) in database
```

### Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Vault not found | Suggest `vault init` | "No vault found. Run 'vault init' to create one." |
| Vault locked | Prompt for password | "Vault is locked. Run 'vault unlock' first." |
| Wrong password | Increment counter, delay | "Invalid password. {n} attempts remaining." |
| Secret not found | Exit code 1 | "Secret 'name' not found." |
| Permission denied | Exit code 2 | "Access denied for secret 'name'." |
| Database error | Log and exit | "Database error. Check ~/.vault/vault.log" |

## GUI/TUI Future Path

**CLI foundation enables:**
- VAULT_ENGINE is UI-agnostic; same operations work from CLI, TUI, or GUI
- VAULT_OUTPUT supports multiple formats for programmatic consumption
- Session management separates auth from operations

**TUI additions:**
- Interactive secret browser with fuzzy search
- Visual hierarchy for tagged secrets
- Real-time search as you type
- Copy-to-clipboard with visual feedback

**GUI additions:**
- Electron/web wrapper calling CLI commands
- Team vault synchronization UI
- Visual access control management
- Audit log viewer with filtering

**Shared components:**
- VAULT_ENGINE (business logic)
- VAULT_CRYPTO (encryption)
- VAULT_STORE (persistence)
- Output as JSON for GUI consumption
