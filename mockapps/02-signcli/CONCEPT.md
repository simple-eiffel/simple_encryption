# SIGNCLI - API Request Signing & Verification Tool

## Executive Summary

SIGNCLI is a command-line tool for generating and verifying HMAC signatures, testing webhook integrations, and debugging API authentication. With 65% of webhooks using HMAC authentication, developers need reliable tools to test signatures without writing throwaway code.

The tool supports common webhook formats from Stripe, GitHub, Shopify, Slack, and custom HMAC implementations. It can generate signatures for outbound requests, verify incoming webhook payloads, and maintain a history of signed requests for debugging integration issues.

Built on the simple_* Eiffel ecosystem, SIGNCLI leverages simple_encryption's HMAC-SHA256 implementation for cryptographic operations, providing a portable single-binary solution for API developers and DevOps engineers.

## Problem Statement

**The problem:** API developers waste hours debugging webhook authentication:
- Writing one-off scripts to generate/verify HMAC signatures
- Mismatched signature formats between documentation and reality
- No easy way to test webhook endpoints locally
- Debugging "signature mismatch" errors without proper tooling

**Current solutions:**
- Online HMAC generators (security risk: exposing secrets to web)
- Language-specific libraries (must write code for each test)
- curl + manual signature calculation (error-prone)
- Postman (requires GUI, complex setup)

**Our approach:** A CLI tool that:
- Generates HMAC signatures matching real webhook formats
- Verifies signatures against known provider formats (Stripe, GitHub, etc.)
- Tests webhook endpoints with properly signed payloads
- Maintains signature history for debugging

## Target Users

| User Type | Description | Key Needs |
|-----------|-------------|-----------|
| Primary | Backend developer building webhook integrations | Verify signatures, test endpoints, debug auth failures |
| Secondary | DevOps engineer managing integrations | Audit signature verification, test CI/CD webhooks |
| Tertiary | Security auditor reviewing API implementations | Verify HMAC usage, check timing-safe comparison |

## Value Proposition

**For** API developers and DevOps engineers
**Who** need to test and debug webhook integrations
**This app** provides CLI tools for HMAC signature generation and verification
**Unlike** online generators (security risk) or custom scripts (time-consuming)
**We** offer a single portable binary with support for major webhook providers

## Revenue Model

| Model | Description | Price Point |
|-------|-------------|-------------|
| Free CLI | Core signing/verification, 3 provider formats | $0 |
| Pro License | All provider formats, signature history, batch mode | $29 one-time |
| Team License | Shared key management, audit logging | $99 one-time |

## Success Metrics

| Metric | Target | Measurement |
|--------|--------|-------------|
| Downloads | 5,000 in 6 months | GitHub releases + website |
| Pro conversions | 10% of active users | License activations |
| Provider coverage | 20+ webhook formats | Supported provider count |
| Verification accuracy | 100% | Test suite against real providers |
| Time saved | 30 min/integration | User survey |
