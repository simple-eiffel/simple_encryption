# S01-PROJECT-INVENTORY.md
## simple_encryption - Project Inventory

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)
**Library:** simple_encryption
**Version:** 1.0

---

## 1. Project Overview

| Attribute | Value |
|-----------|-------|
| **Name** | simple_encryption |
| **Purpose** | Cryptographic wrapper for ISE EEL with safe defaults |
| **Facade Class** | SIMPLE_ENCRYPTION |
| **Author** | Larry Rix |
| **License** | MIT License |

## 2. Source Files

| File | Purpose |
|------|---------|
| `src/simple_encryption.e` | Main encryption/hashing facade |
| `src/simple_encryption_quick.e` | Quick-access utilities (if exists) |
| `testing/lib_tests.e` | Test suite |
| `testing/test_app.e` | Test application |
| `testing/encryption_test_app.e` | Encryption-specific tests |

## 3. Dependencies

### Internal (simple_* ecosystem)
- **simple_base64** - Base64 encoding for tokens
- **simple_datetime** - Timestamp for random seed

### External (ISE/Standard)
- **base** - STRING, SPECIAL, ARRAY, RANDOM
- **eel** - SHA256, HMAC_SHA256 from ISE Encryption Library

## 4. ECF Configuration

**Target:** simple_encryption
**Root Class:** SIMPLE_ENCRYPTION

## 5. Design Philosophy

Based on research findings:
- **Secure by Default** - PBKDF2 with 600,000 iterations
- **Simple API** - One-method operations for common cases
- **Hard to Misuse** - Automatic salt generation, timing-safe comparison
- **No Low-Level Exposure** - Complex crypto details hidden

## 6. Security Standards

| Standard | Implementation |
|----------|----------------|
| PBKDF2 | 600,000 iterations (OWASP 2025) |
| SHA-256 | FIPS 180-4 compliant |
| HMAC-SHA256 | RFC 2104 compliant |
| Salt | 128-bit random salt |
| Key Length | 256-bit (32 bytes) |

## 7. Compliance

- **Void Safety:** Full
- **SCOOP Ready:** Yes
- **Design by Contract:** Comprehensive
