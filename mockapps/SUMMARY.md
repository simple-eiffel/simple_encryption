# Mock Apps Summary: simple_encryption

## Generated: 2026-01-24

## Library Analyzed

- **Library:** simple_encryption
- **Core capability:** Cryptographic wrapper for ISE EEL providing SHA-256 hashing, HMAC-SHA256, PBKDF2 password hashing, and secure token generation
- **Ecosystem position:** Security foundation for authentication, integrity verification, and credential management across all simple_* applications

---

## Mock Apps Designed

### 1. VAULT-CLI - Local Secrets Vault

- **Purpose:** Self-hosted CLI secrets manager for teams without cloud dependency
- **Target:** Small teams, startups, on-premise enterprises wanting local-first secrets management
- **Ecosystem:** simple_encryption, simple_json, simple_file, simple_sql, simple_cli, simple_config
- **Revenue:** Free Personal / Team Edition $15/user/mo / Enterprise $49/user/mo
- **Status:** Design complete

**Key Features:**
- Encrypted SQLite storage with PBKDF2 master password
- Session-based unlock for convenience
- Environment variable injection for CI/CD
- Export/import for backup and migration

---

### 2. SIGNCLI - API Request Signing & Verification Tool

- **Purpose:** CLI tool for HMAC signing, webhook verification, and API authentication testing
- **Target:** API developers, integration teams, DevOps engineers testing webhook integrations
- **Ecosystem:** simple_encryption, simple_json, simple_http, simple_cli, simple_csv, simple_config
- **Revenue:** Free CLI / Pro $29 one-time / Team $99 one-time
- **Status:** Design complete

**Key Features:**
- Support for Stripe, GitHub, Shopify, Slack webhook formats
- Webhook endpoint testing with signed payloads
- Signature history for debugging
- Batch verification from CSV

---

### 3. CHECKSUM-PRO - Enterprise File Integrity Monitor

- **Purpose:** CLI tool for file checksums, integrity verification, and tamper detection
- **Target:** Security teams, compliance officers, archive managers, backup administrators
- **Ecosystem:** simple_encryption, simple_file, simple_json, simple_cli, simple_csv, simple_watcher, simple_email
- **Revenue:** Free Personal / Business $99/year / Enterprise $499/year
- **Status:** Design complete

**Key Features:**
- SHA-256 checksum manifests in JSON format
- Change detection: added/modified/deleted files
- Real-time monitoring with --watch mode
- Compliance-ready reports (HTML, CSV, JSON)
- Email and webhook alerts

---

## Ecosystem Coverage

| simple_* Library | Used In |
|------------------|---------|
| simple_encryption | VAULT-CLI, SIGNCLI, CHECKSUM-PRO |
| simple_json | VAULT-CLI, SIGNCLI, CHECKSUM-PRO |
| simple_cli | VAULT-CLI, SIGNCLI, CHECKSUM-PRO |
| simple_config | VAULT-CLI, SIGNCLI, CHECKSUM-PRO |
| simple_file | VAULT-CLI, CHECKSUM-PRO |
| simple_sql | VAULT-CLI |
| simple_http | SIGNCLI |
| simple_csv | SIGNCLI, CHECKSUM-PRO |
| simple_watcher | CHECKSUM-PRO |
| simple_email | CHECKSUM-PRO |
| simple_base64 | SIGNCLI (via simple_encryption) |
| simple_datetime | All (via simple_encryption) |
| simple_logger | VAULT-CLI |
| simple_clipboard | VAULT-CLI |
| simple_console | All (optional) |
| simple_template | CHECKSUM-PRO |
| simple_validation | VAULT-CLI |

**Total simple_* libraries leveraged: 17**

---

## Market Opportunity Summary

| App | Market Size | Competition | Differentiation |
|-----|-------------|-------------|-----------------|
| VAULT-CLI | $2B+ secrets management | HashiCorp Vault, Infisical | Local-first, zero infrastructure |
| SIGNCLI | Growing (65% of webhooks use HMAC) | Online tools, custom scripts | Portable CLI, provider support |
| CHECKSUM-PRO | $500M+ FIM market | Tripwire, OSSEC | Affordable, simple deployment |

---

## Development Estimates

| App | MVP Effort | Full Effort | Total |
|-----|------------|-------------|-------|
| VAULT-CLI | 3 days | 4 days | 7 days |
| SIGNCLI | 2 days | 3 days | 5 days |
| CHECKSUM-PRO | 2 days | 5 days | 7 days |

**Total estimated effort: 19 days**

---

## Recommended Implementation Order

1. **SIGNCLI** (5 days) - Smallest scope, immediate utility for webhook developers
2. **CHECKSUM-PRO** (7 days) - Strong compliance driver, clear monetization
3. **VAULT-CLI** (7 days) - Largest scope, highest potential value

**Rationale:** Start with SIGNCLI to prove the pattern with minimal investment, then build CHECKSUM-PRO for compliance market, finally tackle VAULT-CLI with learnings from the first two.

---

## Next Steps

1. **Select Mock App for implementation** - Recommend starting with SIGNCLI
2. **Add app target to simple_encryption.ecf** or create standalone ECF
3. **Implement Phase 1 (MVP)** following BUILD-PLAN.md
4. **Run /eiffel.verify** for contract validation
5. **Iterate through Phases 2-3** based on user feedback

---

## Files Generated

```
mockapps/
+-- 00-MARKETPLACE-RESEARCH.md
+-- 01-vault-cli/
|   +-- CONCEPT.md
|   +-- DESIGN.md
|   +-- BUILD-PLAN.md
|   +-- ECOSYSTEM-MAP.md
+-- 02-signcli/
|   +-- CONCEPT.md
|   +-- DESIGN.md
|   +-- BUILD-PLAN.md
|   +-- ECOSYSTEM-MAP.md
+-- 03-checksum-pro/
|   +-- CONCEPT.md
|   +-- DESIGN.md
|   +-- BUILD-PLAN.md
|   +-- ECOSYSTEM-MAP.md
+-- SUMMARY.md
```

---

## Research Sources

- [Pulumi Blog - Secrets Management Tools Guide](https://www.pulumi.com/blog/secrets-management-tools-guide/)
- [Infisical - Best Secret Management Tools](https://infisical.com/blog/best-secret-management-tools)
- [HashiCorp Vault](https://www.vaultproject.io/)
- [Authgear - HMAC API Security 2025](https://www.authgear.com/post/hmac-api-security)
- [Webhooks.fyi - HMAC Security](https://webhooks.fyi/security/hmac)
- [ScoreDetect - Tools for Data Integrity](https://www.scoredetect.com/blog/posts/10-tools-to-verify-data-integrity-in-digital-archives)
- [G2 - Best Encryption Software 2025](https://learn.g2.com/best-encryption-software)

---

*Generated by /eiffel.mockapp skill for simple_encryption library*
