# SIGNCLI - Build Plan

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI | 2 days | simple_encryption, simple_cli, simple_json |
| Phase 2 | Full CLI | 2 days | Phase 1 complete, simple_http |
| Phase 3 | Polish | 1 day | Phase 2 complete |

---

## Phase 1: MVP - Core Signing and Verification

### Objective

Demonstrate HMAC signature generation and verification with custom and Stripe formats. User can sign a payload and verify a received signature.

### Deliverables

1. **SIGN_CLI** - Command-line entry point
2. **SIGN_HMAC** - HMAC wrapper using simple_encryption
3. **SIGN_PROVIDER** - Abstract provider interface
4. **SIGN_PROVIDER_CUSTOM** - Basic HMAC format
5. **SIGN_PROVIDER_STRIPE** - Stripe webhook format
6. **Basic commands:** sign, verify, providers

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure and ECF | Compiles with `ec.sh -batch` |
| T1.2 | Implement SIGN_HMAC | HMAC-SHA256 works, constant-time compare |
| T1.3 | Define SIGN_PROVIDER interface | Abstract signing/verify methods |
| T1.4 | Implement SIGN_PROVIDER_CUSTOM | Basic hex HMAC signature |
| T1.5 | Implement SIGN_PROVIDER_STRIPE | Stripe t=,v1= format |
| T1.6 | Implement SIGN_CLI (basic) | Parse sign, verify, providers commands |
| T1.7 | Implement `signcli sign` | Generate signature with key and payload |
| T1.8 | Implement `signcli verify` | Verify signature matches |
| T1.9 | Implement `signcli providers` | List supported providers |
| T1.10 | Add stdin/file input | -f, --stdin options |
| T1.11 | Write MVP tests | Sign/verify roundtrip, provider tests |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Sign custom | `signcli sign -k secret -d "hello"` | 64-char hex signature |
| Verify custom | `signcli verify -k secret -d "hello" -s <sig>` | "OK: Signature valid" |
| Verify fail | `signcli verify -k wrong -d "hello" -s <sig>` | "FAILED: Signature mismatch" |
| Sign Stripe | `signcli sign -k whsec_x -p stripe -d "{}"` | "t=xxx,v1=yyy" format |
| Verify Stripe | `signcli verify -k whsec_x -p stripe -d "{}" -s "t=,v1="` | Validates timestamp format |
| List providers | `signcli providers` | "custom, stripe" |
| File input | `signcli sign -k secret -f payload.json` | Signature of file contents |
| Stdin input | `echo "data" \| signcli sign -k secret --stdin` | Signature of stdin |

### Phase 1 Success Criteria

- [x] `signcli sign -k KEY -d DATA` generates HMAC signature
- [x] `signcli verify -k KEY -d DATA -s SIG` verifies signature
- [x] Stripe provider format supported
- [x] Custom provider format supported
- [x] File and stdin input working
- [x] All tests pass

---

## Phase 2: Full Implementation

### Objective

Add more providers, webhook testing, history tracking, and batch operations. User can test live webhook endpoints and track signature history.

### Deliverables

1. **Additional providers** - GitHub, Shopify, Slack
2. **SIGN_HISTORY** - Signature history tracking
3. **Webhook testing** - `test` command with simple_http
4. **Batch operations** - CSV/JSON batch verification
5. **Output formats** - text, json, curl, header

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Implement SIGN_PROVIDER_GITHUB | sha256=xxx format |
| T2.2 | Implement SIGN_PROVIDER_SHOPIFY | Base64 format |
| T2.3 | Implement SIGN_PROVIDER_SLACK | v0:timestamp:body format |
| T2.4 | Implement SIGN_HISTORY | Save/load JSON history |
| T2.5 | Implement `signcli history` | List recent signatures |
| T2.6 | Implement `signcli test` | POST to webhook URL |
| T2.7 | Implement batch verification | --batch with CSV input |
| T2.8 | Add JSON output format | --format=json |
| T2.9 | Add curl output format | --format=curl (generate curl command) |
| T2.10 | Add header output format | --format=header (just header line) |
| T2.11 | Implement timestamp options | -t for custom timestamp |
| T2.12 | Implement tolerance option | --tolerance for replay protection |
| T2.13 | Add key aliases in config | Named keys in ~/.signcli/config.json |
| T2.14 | Write Phase 2 tests | All providers, test command |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Sign GitHub | `signcli sign -k secret -p github -d "{}"` | "sha256=xxx" |
| Sign Shopify | `signcli sign -k secret -p shopify -d "{}"` | Base64 signature |
| Sign Slack | `signcli sign -k secret -p slack -d "{}"` | "v0=xxx" |
| Test webhook | `signcli test http://localhost:8080/hook -k x -d "{}"` | HTTP status, response |
| History list | `signcli history` | Recent signatures |
| JSON output | `signcli sign -k x -d "{}" --format=json` | `{"signature":"..."}` |
| Curl output | `signcli sign -k x -d "{}" --format=curl` | `curl -H "X-Signature: ..."` |
| Batch verify | `signcli verify --batch sigs.csv -k x` | Pass/fail for each row |
| Timestamp | `signcli sign -k x -p stripe -d "{}" -t 1234567890` | Uses provided timestamp |

---

## Phase 3: Production Polish

### Objective

Finalize documentation, improve UX, and prepare for release.

### Deliverables

1. **Error handling** - Clear messages for all failure modes
2. **Documentation** - Complete --help, README, examples
3. **More providers** - AWS SNS, Twilio, Discord
4. **Performance** - Optimize batch operations

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Improve error messages | All errors have resolution guidance |
| T3.2 | Add --help for all commands | Complete help text |
| T3.3 | Write README.md | Installation, usage, provider list |
| T3.4 | Add AWS SNS provider | AWS signature format |
| T3.5 | Add Twilio provider | Twilio signature format |
| T3.6 | Add Discord provider | Discord webhook format |
| T3.7 | Optimize batch mode | Parallel verification |
| T3.8 | Add quiet mode | --quiet suppresses non-essential output |
| T3.9 | Add color output | Green pass, red fail |
| T3.10 | Create example scripts | Common use cases |
| T3.11 | Write comprehensive tests | All providers, edge cases |
| T3.12 | Package for distribution | Windows exe, release |

---

## ECF Target Structure

```xml
<!-- Core library (reusable) -->
<target name="signcli_core">
    <root all_classes="true" generate="none"/>
    <library name="simple_encryption" location="..."/>
    <library name="simple_json" location="..."/>
    <cluster name="core" location=".\src\core\"/>
    <cluster name="providers" location=".\src\providers\"/>
</target>

<!-- CLI executable -->
<target name="signcli" extends="signcli_core">
    <root class="SIGN_CLI" feature="make"/>
    <setting name="console_application" value="true"/>
    <library name="simple_cli" location="..."/>
    <library name="simple_http" location="..."/>
    <cluster name="cli" location=".\src\cli\"/>
</target>

<!-- Tests -->
<target name="signcli_tests" extends="signcli_core">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="..."/>
    <cluster name="tests" location=".\tests\"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI (workbench)
/d/prod/ec.sh -batch -config signcli.ecf -target signcli -c_compile

# Compile CLI (finalized release)
/d/prod/ec.sh -batch -config signcli.ecf -target signcli -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config signcli.ecf -target signcli_tests -c_compile
./EIFGENs/signcli_tests/W_code/signcli.exe

# Package for release
cp ./EIFGENs/signcli/F_code/signcli.exe ./release/signcli.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors/warnings | 100% |
| Tests pass | All test cases | 100% |
| MVP functional | sign/verify/providers | Working |
| Providers | Stripe, GitHub, Shopify, Slack | 4 minimum |
| Webhook test | test command | Working |
| History | history command | Working |
| Batch mode | CSV verification | Working |
| Documentation | README complete | Yes |

---

## File Structure

```
signcli/
+-- signcli.ecf             # Project configuration
+-- README.md               # User documentation
+-- CHANGELOG.md            # Version history
+-- LICENSE                 # MIT license
+-- src/
|   +-- core/
|   |   +-- sign_hmac.e         # HMAC wrapper
|   |   +-- sign_engine.e       # Core logic
|   |   +-- sign_history.e      # History tracking
|   |   +-- sign_batch.e        # Batch operations
|   +-- providers/
|   |   +-- sign_provider.e     # Abstract provider
|   |   +-- sign_provider_custom.e
|   |   +-- sign_provider_stripe.e
|   |   +-- sign_provider_github.e
|   |   +-- sign_provider_shopify.e
|   |   +-- sign_provider_slack.e
|   +-- cli/
|       +-- sign_cli.e          # CLI entry point
|       +-- sign_output.e       # Output formatting
|       +-- sign_input.e        # Input handling
+-- tests/
|   +-- test_app.e              # Test runner
|   +-- test_sign_hmac.e        # HMAC tests
|   +-- test_providers.e        # Provider tests
|   +-- test_sign_cli.e         # CLI integration tests
+-- examples/
|   +-- stripe_webhook.sh       # Stripe example
|   +-- github_webhook.sh       # GitHub example
+-- docs/
    +-- index.html              # API documentation
```
