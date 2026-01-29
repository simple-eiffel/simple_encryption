# CHECKSUM-PRO - Technical Design

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                    CHECKSUM-PRO                           |
+----------------------------------------------------------+
|  CLI Interface Layer                                      |
|    - CHECK_CLI: Command parsing, routing, help            |
|    - CHECK_OUTPUT: Formatted output (text/json/csv/html)  |
|    - CHECK_PROGRESS: Progress bar, file counting          |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - CHECK_ENGINE: Core integrity checking operations     |
|    - CHECK_MANIFEST: Checksum manifest management         |
|    - CHECK_SCANNER: File discovery and hashing            |
|    - CHECK_DIFFER: Change detection (add/mod/del)         |
|    - CHECK_REPORT: Report generation                      |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - CHECK_WATCHER: File system monitoring                |
|    - CHECK_ALERT: Email/webhook notifications             |
|    - CHECK_SCHEDULE: Scheduled verification               |
+----------------------------------------------------------+
|  Storage Layer                                            |
|    - CHECK_STORE: Manifest persistence (JSON)             |
|    - CHECK_HISTORY: Historical change tracking            |
+----------------------------------------------------------+
|  Crypto Layer                                             |
|    - CHECK_HASH: SHA-256 hashing (simple_encryption)      |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| CHECK_CLI | Main entry point, command routing | parse_args, execute, dispatch |
| CHECK_ENGINE | Core integrity operations | baseline, verify, diff |
| CHECK_MANIFEST | Manifest data model | load, save, merge, entries |
| CHECK_SCANNER | File discovery and hashing | scan_directory, hash_file |
| CHECK_DIFFER | Change detection | compare, added, modified, deleted |
| CHECK_REPORT | Report generation | text, json, csv, html |
| CHECK_HASH | SHA-256 wrapper | hash_file, hash_string |
| CHECK_WATCHER | Real-time monitoring | watch, on_change |
| CHECK_ALERT | Notification dispatch | email, webhook |
| CHECK_STORE | JSON persistence | load, save, backup |

### Command Structure

```bash
checksum <command> [options] [arguments]

Commands:
  baseline <path>       Create checksum manifest for directory
  verify <path>         Verify files against manifest
  diff <path>           Show differences without updating
  update <path>         Update manifest with current state
  status                Show monitoring status
  history               Show change history
  report <path>         Generate compliance report

File Selection:
  -i, --include GLOB    Include files matching pattern
  -e, --exclude GLOB    Exclude files matching pattern
  --hidden              Include hidden files (default: exclude)
  --follow-symlinks     Follow symbolic links (default: no)
  --max-size SIZE       Skip files larger than SIZE (e.g., 100M)

Manifest Options:
  -m, --manifest FILE   Manifest file location (default: .checksum-manifest.json)
  --algorithm ALG       Hash algorithm: sha256 (default), sha512, md5
  --store-content       Store file content hashes, not just checksums

Output Options:
  --format FORMAT       Output format: text, json, csv, html (default: text)
  -o, --output FILE     Write output to file
  -q, --quiet           Only output on changes
  -v, --verbose         Show detailed progress

Monitoring Options:
  --watch               Watch for changes in real-time
  --interval SECS       Check interval for scheduled monitoring
  --alert EMAIL         Send alerts to email address
  --webhook URL         POST alerts to webhook URL

Examples:
  # Create baseline for config directory
  checksum baseline /etc --include "*.conf" -m /var/lib/checksum/etc.json

  # Verify system files against baseline
  checksum verify /etc -m /var/lib/checksum/etc.json

  # Show what changed without updating
  checksum diff /var/www --format=json

  # Generate compliance report
  checksum report /etc --format=html -o compliance-report.html

  # Watch directory for changes
  checksum verify /etc --watch --alert admin@example.com

  # CI/CD artifact verification
  checksum verify ./dist -m release-manifest.json || exit 1
```

### Data Flow

```
Directory
    |
    v
Scanner (discover files)
    |
    v
Hash (SHA-256 each file) --> simple_encryption
    |
    v
Manifest (store/compare)
    |
    +-> Baseline: Save new manifest
    |
    +-> Verify: Compare to stored manifest
            |
            v
        Differ (detect changes)
            |
            v
        Report (format output)
```

### Manifest Schema

```json
{
  "manifest_version": "1.0",
  "created_at": "2026-01-24T10:00:00Z",
  "updated_at": "2026-01-24T12:30:00Z",
  "root_path": "/etc",
  "algorithm": "sha256",
  "options": {
    "include_patterns": ["*.conf"],
    "exclude_patterns": ["*.bak", "*.tmp"],
    "include_hidden": false
  },
  "files": {
    "/etc/nginx/nginx.conf": {
      "checksum": "abc123...",
      "size": 4096,
      "modified_at": "2026-01-20T08:00:00Z",
      "permissions": "644"
    },
    "/etc/ssh/sshd_config": {
      "checksum": "def456...",
      "size": 2048,
      "modified_at": "2026-01-15T14:30:00Z",
      "permissions": "600"
    }
  },
  "statistics": {
    "total_files": 150,
    "total_size": 1048576,
    "scan_duration_ms": 450
  }
}
```

### Diff Output Schema

```json
{
  "scan_time": "2026-01-24T14:00:00Z",
  "manifest_time": "2026-01-24T12:30:00Z",
  "status": "CHANGED",
  "summary": {
    "added": 2,
    "modified": 1,
    "deleted": 0,
    "unchanged": 147
  },
  "changes": {
    "added": [
      {
        "path": "/etc/nginx/sites-enabled/new-site.conf",
        "checksum": "new123...",
        "size": 512
      }
    ],
    "modified": [
      {
        "path": "/etc/nginx/nginx.conf",
        "old_checksum": "abc123...",
        "new_checksum": "xyz789...",
        "old_size": 4096,
        "new_size": 4200
      }
    ],
    "deleted": []
  }
}
```

### Configuration Schema

```json
{
  "checksum_pro": {
    "default_algorithm": "sha256",
    "default_manifest_path": ".checksum-manifest.json",
    "exclude_patterns": [
      "*.tmp", "*.bak", "*.swp",
      ".git/**", "node_modules/**"
    ],
    "alerts": {
      "email": {
        "enabled": false,
        "smtp_server": "smtp.example.com",
        "from": "checksum@example.com",
        "to": ["admin@example.com"]
      },
      "webhook": {
        "enabled": false,
        "url": "https://hooks.example.com/checksum"
      }
    },
    "history": {
      "enabled": true,
      "max_entries": 1000,
      "retention_days": 90
    }
  }
}
```

### Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Manifest not found | Exit code 1 | "No manifest found. Run 'checksum baseline' first." |
| Permission denied | Skip file, warn | "Warning: Cannot read /path/file (permission denied)" |
| File disappeared | Mark as deleted | Listed in diff output |
| Hash mismatch | Report as modified | "MODIFIED: /path/file" |
| Invalid manifest | Exit code 1 | "Error: Invalid manifest file. Check JSON syntax." |
| Disk full | Exit code 2 | "Error: Cannot write manifest. Disk full." |

## GUI/TUI Future Path

**CLI foundation enables:**
- CHECK_ENGINE is UI-agnostic; same operations work from any interface
- Manifest JSON format easily consumed by GUI
- Diff output as JSON for visual diff display

**TUI additions:**
- Interactive file browser with checksum status
- Real-time change monitoring display
- Visual diff with color-coded changes
- Tree view of monitored directories

**GUI additions:**
- Dashboard showing all monitored paths
- Historical change graphs
- Drag-and-drop directory monitoring setup
- Report viewer with filtering

**Shared components:**
- CHECK_ENGINE (all business logic)
- CHECK_MANIFEST (manifest handling)
- CHECK_SCANNER (file discovery)
- CHECK_HASH (cryptographic hashing)
