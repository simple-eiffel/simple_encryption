# SIGNCLI - Technical Design

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                       SIGNCLI                             |
+----------------------------------------------------------+
|  CLI Interface Layer                                      |
|    - SIGN_CLI: Command parsing, routing, help             |
|    - SIGN_OUTPUT: Formatted output (text/json/curl)       |
|    - SIGN_INPUT: Payload reading (stdin/file/arg)         |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - SIGN_ENGINE: Core signing/verification operations    |
|    - SIGN_PROVIDER: Provider-specific signature formats   |
|    - SIGN_HISTORY: Signature history tracking             |
|    - SIGN_BATCH: Bulk operations from CSV/JSON            |
+----------------------------------------------------------+
|  Provider Layer                                           |
|    - SIGN_PROVIDER_STRIPE: Stripe webhook format          |
|    - SIGN_PROVIDER_GITHUB: GitHub webhook format          |
|    - SIGN_PROVIDER_SHOPIFY: Shopify webhook format        |
|    - SIGN_PROVIDER_SLACK: Slack request signing           |
|    - SIGN_PROVIDER_CUSTOM: Custom HMAC format             |
+----------------------------------------------------------+
|  Crypto Layer                                             |
|    - SIGN_HMAC: HMAC wrapper (simple_encryption)          |
|    - SIGN_VERIFY: Constant-time verification              |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| SIGN_CLI | Main entry point, command routing | parse_args, execute, dispatch |
| SIGN_ENGINE | Core signing/verification logic | sign, verify, format_signature |
| SIGN_PROVIDER | Abstract provider interface | compute_signature, verify, format |
| SIGN_PROVIDER_STRIPE | Stripe signature format | v1 timestamp format, tolerance |
| SIGN_PROVIDER_GITHUB | GitHub signature format | sha256=xxx format |
| SIGN_PROVIDER_SLACK | Slack request signing | v0:timestamp:body format |
| SIGN_HMAC | HMAC wrapper | hmac_sha256, constant_time_compare |
| SIGN_HISTORY | Track signed requests | save, list, replay |
| SIGN_BATCH | Bulk operations | process_csv, process_json |
| SIGN_OUTPUT | Output formatting | text, json, curl, header |

### Command Structure

```bash
signcli <command> [options] [arguments]

Commands:
  sign <payload>        Generate HMAC signature
  verify <payload> <sig>  Verify signature against payload
  test <url>            Test webhook endpoint with signed payload
  providers             List supported webhook providers
  history               Show signature history

Signing Options:
  -k, --key KEY         Secret key for HMAC
  -p, --provider NAME   Provider format (stripe, github, shopify, slack, custom)
  -a, --algorithm ALG   Hash algorithm (sha256, sha512) [default: sha256]
  -t, --timestamp TS    Timestamp for signature (default: now)
  --header NAME         Custom header name for signature

Verification Options:
  -k, --key KEY         Secret key for HMAC
  -s, --signature SIG   Signature to verify
  -p, --provider NAME   Provider format
  --tolerance SECS      Timestamp tolerance for replay protection

Input Options:
  -d, --data DATA       Payload data (string)
  -f, --file FILE       Read payload from file
  --stdin               Read payload from stdin

Output Options:
  --format FORMAT       Output format: text, json, curl, header [default: text]
  -o, --output FILE     Write output to file
  -q, --quiet           Suppress non-essential output

Examples:
  # Generate Stripe webhook signature
  signcli sign -k whsec_xxx -p stripe -d '{"id":"evt_123"}'

  # Verify GitHub webhook
  signcli verify -k secret -p github -d @payload.json -s sha256=abc123

  # Test webhook endpoint
  signcli test https://api.example.com/webhook -k secret -p custom -d '{"event":"test"}'

  # Batch verify from CSV
  signcli verify --batch signatures.csv -k secret -p custom
```

### Data Flow

```
Input (payload) -> Provider Format -> HMAC-SHA256 -> Signature
                        |                 |
                        v                 v
                   Timestamp      simple_encryption
                   Header name    (hmac_sha256)

Verification:
Payload + Received Signature -> Provider Parse -> HMAC -> Compare
                                                    |
                                               Constant-time
```

### Provider Signature Formats

| Provider | Header Name | Signature Format | Signed Payload |
|----------|-------------|------------------|----------------|
| Stripe | Stripe-Signature | t=timestamp,v1=hmac | timestamp + "." + body |
| GitHub | X-Hub-Signature-256 | sha256=hmac | raw body |
| Shopify | X-Shopify-Hmac-Sha256 | base64(hmac) | raw body |
| Slack | X-Slack-Signature | v0=hmac | v0:timestamp:body |
| AWS SNS | X-Amz-Sns-Signature | base64(hmac) | canonical string |
| Twilio | X-Twilio-Signature | base64(hmac) | URL + params |
| Custom | X-Signature (configurable) | hex(hmac) | raw body |

### History Schema

```json
{
  "history": [
    {
      "id": "sig_20260124_001",
      "timestamp": "2026-01-24T10:30:00Z",
      "operation": "sign",
      "provider": "stripe",
      "payload_hash": "sha256:abc123...",
      "signature": "t=1706091000,v1=def456...",
      "key_id": "whsec_***xxx"
    }
  ]
}
```

### Configuration Schema

```json
{
  "signcli": {
    "default_provider": "custom",
    "default_algorithm": "sha256",
    "history_enabled": true,
    "history_max_entries": 1000,
    "keys": {
      "stripe-prod": "whsec_xxx",
      "github-main": "secret123"
    }
  }
}
```

### Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Missing key | Exit code 1 | "Error: Secret key required. Use -k or set SIGNCLI_KEY" |
| Invalid provider | Exit code 1 | "Error: Unknown provider 'xyz'. Run 'signcli providers' for list" |
| Signature mismatch | Exit code 2 | "FAILED: Signature does not match. Expected: xxx Got: yyy" |
| Timestamp expired | Exit code 2 | "FAILED: Timestamp outside tolerance (300s). Diff: 450s" |
| Invalid payload | Exit code 1 | "Error: Cannot parse payload. Check JSON syntax." |
| Network error | Exit code 3 | "Error: Cannot reach endpoint. Check URL and network." |

## GUI/TUI Future Path

**CLI foundation enables:**
- SIGN_ENGINE is UI-agnostic; same operations work from any interface
- Provider implementations are reusable
- History stored in JSON for easy GUI consumption

**TUI additions:**
- Interactive signature builder with live preview
- Payload editor with syntax highlighting
- Side-by-side expected vs actual signature comparison
- Real-time webhook listener mode

**GUI additions:**
- Web-based signature calculator
- Drag-and-drop payload upload
- Visual diff of signature components
- Integration with Postman collections

**Shared components:**
- SIGN_ENGINE (business logic)
- SIGN_PROVIDER_* (all provider implementations)
- SIGN_HMAC (cryptographic operations)
