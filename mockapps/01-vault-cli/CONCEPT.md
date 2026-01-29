# VAULT-CLI - Local Secrets Vault

## Executive Summary

VAULT-CLI is a self-hosted command-line secrets manager designed for teams who need secure credential storage without cloud dependency. Unlike HashiCorp Vault's enterprise complexity or cloud-based solutions that require internet connectivity, VAULT-CLI provides a lightweight, local-first approach to secrets management that works entirely offline.

Built on the simple_* Eiffel ecosystem, VAULT-CLI stores encrypted secrets in a local SQLite database protected by a master password using PBKDF2-SHA256 with 600,000 iterations. Secrets can be injected into environment variables, exported to CI/CD pipelines, or accessed programmatically through a simple API.

The tool targets small development teams, startups, and on-premise enterprises who want the security benefits of a secrets manager without the operational overhead of running HashiCorp Vault or the privacy concerns of cloud-based solutions.

## Problem Statement

**The problem:** Developers and small teams struggle with secure credential management. They resort to:
- Hardcoding secrets in source code (22% of cloud breaches)
- Storing credentials in plaintext .env files
- Sharing API keys via Slack or email
- Using personal password managers not designed for team/automation use

**Current solutions:**
- HashiCorp Vault: Powerful but complex to deploy and operate
- Cloud secrets managers (AWS/GCP/Azure): Require cloud dependency and internet
- 1Password/Bitwarden: Consumer-focused, weak CI/CD integration
- Chamber: AWS-only, requires cloud infrastructure

**Our approach:** A single-binary CLI tool that:
- Works entirely offline with local SQLite storage
- Uses industry-standard encryption (PBKDF2 + AES-256 equivalent security)
- Injects secrets directly into shell environment or CI/CD
- Requires no server, no Docker, no cloud account

## Target Users

| User Type | Description | Key Needs |
|-----------|-------------|-----------|
| Primary | Small dev team (2-10 people) | Share secrets securely, inject into CI/CD, no ops overhead |
| Secondary | Solo developer | Secure local credential storage, easy CLI access |
| Tertiary | On-premise enterprise | Air-gapped secrets management, compliance audit trail |

## Value Proposition

**For** small development teams and solo developers
**Who** need to manage API keys, database credentials, and sensitive configuration
**This app** provides encrypted local secrets storage with CLI injection
**Unlike** HashiCorp Vault (too complex) or cloud managers (require connectivity)
**We** offer single-binary simplicity with zero infrastructure requirements

## Revenue Model

| Model | Description | Price Point |
|-------|-------------|-------------|
| Free Personal | Single-user vault, unlimited secrets, CLI access | $0 |
| Team Edition | Multi-user access control, shared vaults | $15/user/month |
| Enterprise | Audit logging, key rotation, LDAP/SSO integration | $49/user/month |

## Success Metrics

| Metric | Target | Measurement |
|--------|--------|-------------|
| Time to first secret | < 2 minutes | CLI installation to first `vault set` |
| Secrets injected | 1000+/day | Usage telemetry (opt-in) |
| Team adoption | 100 teams in 6 months | License activations |
| Churn rate | < 5%/month | Subscription cancellations |
| Security incidents | 0 | Bug bounty program |
