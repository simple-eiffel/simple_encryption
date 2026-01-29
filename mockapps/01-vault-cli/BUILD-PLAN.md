# VAULT-CLI - Build Plan

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI | 3 days | simple_encryption, simple_sql, simple_cli |
| Phase 2 | Full CLI | 2 days | Phase 1 complete |
| Phase 3 | Polish | 2 days | Phase 2 complete |

---

## Phase 1: MVP - Core Vault Operations

### Objective

Demonstrate secure secret storage and retrieval with password protection. User can initialize a vault, store secrets, and retrieve them in the same session.

### Deliverables

1. **VAULT_CLI** - Command-line entry point
2. **VAULT_CRYPTO** - Encryption wrapper using simple_encryption
3. **VAULT_STORE** - SQLite persistence using simple_sql
4. **VAULT_SECRET** - Secret data model
5. **Basic commands:** init, set, get, list, delete

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure and ECF | Compiles with `ec.sh -batch` |
| T1.2 | Implement VAULT_CRYPTO | PBKDF2 derives key, encrypt/decrypt works |
| T1.3 | Implement VAULT_STORE | SQLite creates schema, CRUD operations work |
| T1.4 | Implement VAULT_SECRET | Secret model stores name, value, timestamps |
| T1.5 | Implement VAULT_CLI (basic) | Parse init, set, get, list, delete commands |
| T1.6 | Implement `vault init` | Creates new vault with master password |
| T1.7 | Implement `vault set` | Stores encrypted secret |
| T1.8 | Implement `vault get` | Retrieves and decrypts secret |
| T1.9 | Implement `vault list` | Lists all secret names |
| T1.10 | Implement `vault delete` | Removes secret from vault |
| T1.11 | Write MVP tests | All commands tested, edge cases covered |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Init vault | `vault init` + password "test123" | Vault created at ~/.vault/secrets.db |
| Set secret | `vault set API_KEY abc123` | Secret stored, exit code 0 |
| Get secret | `vault get API_KEY` | Output: "abc123", exit code 0 |
| Get missing | `vault get NONEXISTENT` | Error message, exit code 1 |
| List empty | `vault list` | Empty output, exit code 0 |
| List with secrets | `vault list` (after set) | "API_KEY", exit code 0 |
| Delete secret | `vault delete API_KEY` | Secret removed, exit code 0 |
| Wrong password | `vault get` with wrong pass | "Invalid password", exit code 2 |

### Phase 1 Success Criteria

- [x] `vault init` creates encrypted vault with master password
- [x] `vault set NAME VALUE` stores encrypted secret
- [x] `vault get NAME` retrieves and decrypts secret
- [x] `vault list` shows all secret names
- [x] `vault delete NAME` removes secret
- [x] Wrong password rejected with clear error
- [x] All tests pass

---

## Phase 2: Full Implementation

### Objective

Add session management, search, tags, export/import, and environment injection. User can unlock vault once and perform multiple operations without re-entering password.

### Deliverables

1. **Session management** - unlock, lock, status commands
2. **VAULT_CONFIG** - Configuration file support
3. **Tags and search** - tag, search commands
4. **Export/Import** - export, import, backup, restore commands
5. **Environment injection** - env, inject commands
6. **Output formatting** - text, json, env, table formats

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Implement session tokens | Unlock sets VAULT_SESSION env var |
| T2.2 | Implement `vault unlock` | Password prompts, session created |
| T2.3 | Implement `vault lock` | Clears session token |
| T2.4 | Implement `vault status` | Shows locked/unlocked, secret count |
| T2.5 | Implement VAULT_CONFIG | Load/save ~/.vault/config.json |
| T2.6 | Implement `vault tag` | Add/remove tags on secrets |
| T2.7 | Implement `vault search` | Full-text search in names and tags |
| T2.8 | Implement `vault export` | Export as JSON, env, shell |
| T2.9 | Implement `vault import` | Import from JSON file |
| T2.10 | Implement `vault backup` | Encrypted backup to file |
| T2.11 | Implement `vault restore` | Restore from encrypted backup |
| T2.12 | Implement `vault env` | Run command with secrets as env vars |
| T2.13 | Implement `vault inject` | Output shell export statements |
| T2.14 | Implement `vault rename` | Rename a secret |
| T2.15 | Add output format options | --format=text|json|env|table |
| T2.16 | Write Phase 2 tests | All new commands tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Unlock vault | `vault unlock` + password | Session active, exit code 0 |
| Session persists | `vault get` (unlocked) | No password prompt needed |
| Lock vault | `vault lock` | Session cleared |
| Export JSON | `vault export --format=json` | Valid JSON with secrets |
| Import JSON | `vault import secrets.json` | Secrets imported |
| Tag secret | `vault tag API_KEY prod aws` | Tags added |
| Search tag | `vault search prod` | Secrets with "prod" tag |
| Env injection | `vault env -- printenv` | Secrets in environment |
| Inject shell | `vault inject` | `export API_KEY=...` statements |

---

## Phase 3: Production Polish

### Objective

Harden security, improve UX, add audit logging, and prepare for release.

### Deliverables

1. **Audit logging** - Log all operations to audit_log table
2. **Error hardening** - Graceful handling of all edge cases
3. **Help documentation** - Complete --help for all commands
4. **Configuration validation** - Validate config file syntax
5. **Performance optimization** - Profile and optimize hot paths
6. **Security hardening** - Memory zeroing, timing attack prevention

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Implement VAULT_AUDIT | Log operations with timestamps |
| T3.2 | Add audit command | `vault audit` shows recent operations |
| T3.3 | Password attempt limiting | Lock after 5 wrong attempts |
| T3.4 | Session timeout | Auto-lock after configured timeout |
| T3.5 | Memory security | Zero sensitive strings after use |
| T3.6 | Improve error messages | All errors have clear resolution |
| T3.7 | Add --help for all commands | Help text for every command |
| T3.8 | Write README.md | Installation, usage, examples |
| T3.9 | Create man page | vault(1) man page |
| T3.10 | Profile performance | Identify and fix slow paths |
| T3.11 | Security audit | Review crypto usage, timing |
| T3.12 | Write comprehensive tests | 90%+ code coverage |
| T3.13 | Package for distribution | Windows exe, release artifacts |

---

## ECF Target Structure

```xml
<!-- Library target (reusable core logic) -->
<target name="vault_core">
    <root all_classes="true" generate="none"/>
    <library name="simple_encryption" location="..."/>
    <library name="simple_sql" location="..."/>
    <library name="simple_json" location="..."/>
    <cluster name="core" location=".\src\core\"/>
</target>

<!-- CLI executable target -->
<target name="vault_cli" extends="vault_core">
    <root class="VAULT_CLI" feature="make"/>
    <setting name="console_application" value="true"/>
    <library name="simple_cli" location="..."/>
    <cluster name="cli" location=".\src\cli\"/>
</target>

<!-- Test target -->
<target name="vault_tests" extends="vault_core">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="..."/>
    <cluster name="tests" location=".\tests\"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI (workbench)
/d/prod/ec.sh -batch -config vault_cli.ecf -target vault_cli -c_compile

# Compile CLI (finalized release)
/d/prod/ec.sh -batch -config vault_cli.ecf -target vault_cli -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config vault_cli.ecf -target vault_tests -c_compile
./EIFGENs/vault_tests/W_code/vault_cli.exe

# Package for release
cp ./EIFGENs/vault_cli/F_code/vault_cli.exe ./release/vault.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors/warnings | 100% |
| Tests pass | All test cases | 100% |
| MVP functional | init/set/get/list/delete | Working |
| Session management | unlock/lock/status | Working |
| Export/Import | JSON, env formats | Working |
| Env injection | vault env command | Working |
| Documentation | README complete | Yes |
| Security | PBKDF2 600K, constant-time compare | Yes |

---

## File Structure

```
vault-cli/
+-- vault_cli.ecf           # Project configuration
+-- README.md               # User documentation
+-- CHANGELOG.md            # Version history
+-- LICENSE                 # MIT license
+-- src/
|   +-- core/
|   |   +-- vault_crypto.e      # Encryption wrapper
|   |   +-- vault_store.e       # SQLite persistence
|   |   +-- vault_secret.e      # Secret data model
|   |   +-- vault_config.e      # Configuration
|   |   +-- vault_audit.e       # Audit logging
|   |   +-- vault_engine.e      # Business logic
|   +-- cli/
|       +-- vault_cli.e         # CLI entry point
|       +-- vault_output.e      # Output formatting
|       +-- vault_prompt.e      # Password input
+-- tests/
|   +-- test_app.e              # Test runner
|   +-- test_vault_crypto.e     # Crypto tests
|   +-- test_vault_store.e      # Storage tests
|   +-- test_vault_cli.e        # CLI integration tests
+-- docs/
    +-- index.html              # API documentation
```
