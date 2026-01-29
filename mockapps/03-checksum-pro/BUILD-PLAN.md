# CHECKSUM-PRO - Build Plan

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI | 2 days | simple_encryption, simple_json, simple_file, simple_cli |
| Phase 2 | Full CLI | 3 days | Phase 1 complete, simple_watcher, simple_email |
| Phase 3 | Polish | 2 days | Phase 2 complete |

---

## Phase 1: MVP - Core Integrity Checking

### Objective

Demonstrate file integrity monitoring with baseline creation and verification. User can create a checksum manifest and detect file changes.

### Deliverables

1. **CHECK_CLI** - Command-line entry point
2. **CHECK_HASH** - SHA-256 file hashing using simple_encryption
3. **CHECK_SCANNER** - Directory scanning and file discovery
4. **CHECK_MANIFEST** - Manifest data model and persistence
5. **CHECK_DIFFER** - Change detection (added/modified/deleted)
6. **Basic commands:** baseline, verify, diff, status

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure and ECF | Compiles with `ec.sh -batch` |
| T1.2 | Implement CHECK_HASH | SHA-256 file hashing works |
| T1.3 | Implement CHECK_SCANNER | Directory traversal, file listing |
| T1.4 | Implement CHECK_MANIFEST | Load/save JSON manifest |
| T1.5 | Implement CHECK_DIFFER | Detect added, modified, deleted |
| T1.6 | Implement CHECK_CLI (basic) | Parse baseline, verify, diff, status |
| T1.7 | Implement `checksum baseline` | Create manifest for directory |
| T1.8 | Implement `checksum verify` | Verify files against manifest |
| T1.9 | Implement `checksum diff` | Show changes without updating |
| T1.10 | Implement `checksum status` | Show manifest statistics |
| T1.11 | Add include/exclude patterns | -i, -e options working |
| T1.12 | Write MVP tests | All commands tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Baseline dir | `checksum baseline /tmp/test` | Manifest created, file count shown |
| Verify clean | `checksum verify /tmp/test` | "OK: No changes detected" |
| Verify modified | Modify file, then `verify` | "MODIFIED: /path/file" |
| Verify added | Add file, then `verify` | "ADDED: /path/newfile" |
| Verify deleted | Delete file, then `verify` | "DELETED: /path/gone" |
| Diff mode | `checksum diff /tmp/test` | Shows changes, manifest unchanged |
| Status | `checksum status` | Shows file count, last scan time |
| Include pattern | `checksum baseline -i "*.conf"` | Only .conf files included |
| Exclude pattern | `checksum baseline -e "*.tmp"` | No .tmp files included |

### Phase 1 Success Criteria

- [x] `checksum baseline PATH` creates manifest
- [x] `checksum verify PATH` detects changes
- [x] `checksum diff PATH` shows changes without updating
- [x] `checksum status` shows manifest info
- [x] Include/exclude patterns work
- [x] All tests pass

---

## Phase 2: Full Implementation

### Objective

Add reporting, monitoring, alerts, and update capabilities. User can generate compliance reports, monitor in real-time, and receive alerts.

### Deliverables

1. **CHECK_REPORT** - Report generation (text, json, csv, html)
2. **Real-time monitoring** - watch command with simple_watcher
3. **Alert notifications** - email and webhook alerts
4. **CHECK_HISTORY** - Historical change tracking
5. **Update command** - Update manifest after review
6. **Output formats** - text, json, csv, html

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Implement CHECK_REPORT | Generate text, json, csv reports |
| T2.2 | Add HTML report template | Compliance-ready HTML report |
| T2.3 | Implement `checksum report` | Generate reports in all formats |
| T2.4 | Implement `checksum update` | Update manifest after review |
| T2.5 | Implement CHECK_HISTORY | Track historical changes |
| T2.6 | Implement `checksum history` | Show change history |
| T2.7 | Implement --watch mode | Real-time monitoring |
| T2.8 | Implement email alerts | --alert EMAIL option |
| T2.9 | Implement webhook alerts | --webhook URL option |
| T2.10 | Add --format option | text, json, csv, html |
| T2.11 | Add -o/--output option | Write to file |
| T2.12 | Add --quiet mode | Only output on changes |
| T2.13 | Add --verbose mode | Detailed progress |
| T2.14 | Implement exit codes | 0=ok, 1=changes, 2=error |
| T2.15 | Write Phase 2 tests | Reports, monitoring, alerts |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| JSON report | `checksum report --format=json` | Valid JSON with changes |
| CSV report | `checksum report --format=csv` | CSV with file,status,hash |
| HTML report | `checksum report --format=html` | Formatted HTML document |
| Update | `checksum update /tmp/test` | Manifest updated |
| History | `checksum history` | Recent changes listed |
| Watch mode | `checksum verify --watch` | Monitors continuously |
| Email alert | `checksum verify --alert admin@x.com` | Email sent on change |
| Webhook | `checksum verify --webhook http://x` | POST on change |
| Exit code 0 | `checksum verify` (no changes) | Exit 0 |
| Exit code 1 | `checksum verify` (changes) | Exit 1 |

---

## Phase 3: Production Polish

### Objective

Finalize documentation, improve performance, and prepare for release.

### Deliverables

1. **Performance optimization** - Handle large directories efficiently
2. **Error handling** - Graceful handling of all edge cases
3. **Documentation** - Complete --help, README, examples
4. **Configuration** - Global config file support
5. **Progress reporting** - Progress bars for large scans

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Optimize large directory scanning | 10K files < 30 seconds |
| T3.2 | Add progress bar | Visual progress for large scans |
| T3.3 | Implement CHECK_CONFIG | Global configuration support |
| T3.4 | Improve error messages | All errors have resolution |
| T3.5 | Add --help for all commands | Complete help text |
| T3.6 | Write README.md | Installation, usage, examples |
| T3.7 | Add compliance examples | SOC2, HIPAA use cases |
| T3.8 | Handle permissions gracefully | Skip unreadable files with warning |
| T3.9 | Handle symlinks | --follow-symlinks option |
| T3.10 | Add --max-size option | Skip very large files |
| T3.11 | Add color output | Green ok, red changed |
| T3.12 | Write comprehensive tests | Edge cases, large files |
| T3.13 | Package for distribution | Windows exe, release |

---

## ECF Target Structure

```xml
<!-- Core library (reusable) -->
<target name="checksum_core">
    <root all_classes="true" generate="none"/>
    <library name="simple_encryption" location="..."/>
    <library name="simple_json" location="..."/>
    <library name="simple_file" location="..."/>
    <cluster name="core" location=".\src\core\"/>
</target>

<!-- CLI executable -->
<target name="checksum_cli" extends="checksum_core">
    <root class="CHECK_CLI" feature="make"/>
    <setting name="console_application" value="true"/>
    <library name="simple_cli" location="..."/>
    <library name="simple_config" location="..."/>
    <library name="simple_watcher" location="..."/>
    <library name="simple_email" location="..."/>
    <cluster name="cli" location=".\src\cli\"/>
</target>

<!-- Tests -->
<target name="checksum_tests" extends="checksum_core">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="..."/>
    <cluster name="tests" location=".\tests\"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI (workbench)
/d/prod/ec.sh -batch -config checksum_pro.ecf -target checksum_cli -c_compile

# Compile CLI (finalized release)
/d/prod/ec.sh -batch -config checksum_pro.ecf -target checksum_cli -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config checksum_pro.ecf -target checksum_tests -c_compile
./EIFGENs/checksum_tests/W_code/checksum_pro.exe

# Performance test (10K files)
./EIFGENs/checksum_cli/F_code/checksum.exe baseline /large/directory --verbose

# Package for release
cp ./EIFGENs/checksum_cli/F_code/checksum.exe ./release/checksum.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors/warnings | 100% |
| Tests pass | All test cases | 100% |
| MVP functional | baseline/verify/diff/status | Working |
| Reports | text, json, csv, html | Working |
| Monitoring | --watch mode | Working |
| Alerts | email, webhook | Working |
| Performance | 10K files | < 30 seconds |
| Documentation | README complete | Yes |

---

## File Structure

```
checksum-pro/
+-- checksum_pro.ecf        # Project configuration
+-- README.md               # User documentation
+-- CHANGELOG.md            # Version history
+-- LICENSE                 # MIT license
+-- src/
|   +-- core/
|   |   +-- check_hash.e        # SHA-256 wrapper
|   |   +-- check_scanner.e     # File discovery
|   |   +-- check_manifest.e    # Manifest model
|   |   +-- check_differ.e      # Change detection
|   |   +-- check_engine.e      # Core operations
|   |   +-- check_file_entry.e  # File entry model
|   +-- report/
|   |   +-- check_report.e      # Report base
|   |   +-- check_report_text.e # Text report
|   |   +-- check_report_json.e # JSON report
|   |   +-- check_report_csv.e  # CSV report
|   |   +-- check_report_html.e # HTML report
|   +-- monitor/
|   |   +-- check_watcher.e     # Real-time monitoring
|   |   +-- check_alert.e       # Alert dispatch
|   |   +-- check_history.e     # Change history
|   +-- cli/
|       +-- check_cli.e         # CLI entry point
|       +-- check_output.e      # Output formatting
|       +-- check_progress.e    # Progress reporting
+-- tests/
|   +-- test_app.e              # Test runner
|   +-- test_check_hash.e       # Hash tests
|   +-- test_check_scanner.e    # Scanner tests
|   +-- test_check_manifest.e   # Manifest tests
|   +-- test_check_cli.e        # CLI integration tests
+-- templates/
|   +-- report.html             # HTML report template
+-- examples/
|   +-- monitor-etc.sh          # Monitor /etc example
|   +-- ci-verify.sh            # CI/CD verification
|   +-- compliance-report.sh    # Compliance report
+-- docs/
    +-- index.html              # API documentation
    +-- compliance.md           # Compliance guide
```

---

## Use Case Examples

### SOC2 Compliance Monitoring

```bash
# Create baseline of critical system files
checksum baseline /etc \
    --include "*.conf" \
    --include "passwd" \
    --include "shadow" \
    --manifest /var/lib/checksum/system-baseline.json

# Scheduled verification (cron job)
0 * * * * /usr/local/bin/checksum verify /etc \
    --manifest /var/lib/checksum/system-baseline.json \
    --alert security@company.com \
    --webhook https://siem.company.com/fim

# Monthly compliance report
checksum report /etc \
    --manifest /var/lib/checksum/system-baseline.json \
    --format=html \
    --output /var/reports/fim-$(date +%Y%m).html
```

### CI/CD Build Verification

```bash
# Generate manifest for release artifacts
checksum baseline ./dist --manifest release-manifest.json

# Commit manifest with release
git add release-manifest.json
git commit -m "Release v1.2.3 with integrity manifest"

# Verify before deployment
checksum verify ./dist --manifest release-manifest.json || exit 1
```

### Backup Integrity Verification

```bash
# Create manifest before backup
checksum baseline /data/important --manifest /backups/manifest-$(date +%F).json

# After restore, verify integrity
checksum verify /data/restored --manifest /backups/manifest-2026-01-24.json
```
