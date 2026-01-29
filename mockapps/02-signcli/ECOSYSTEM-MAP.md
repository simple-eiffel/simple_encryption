# SIGNCLI - Ecosystem Integration

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_encryption | HMAC-SHA256 signatures, constant-time compare | SIGN_HMAC class |
| simple_json | Payload parsing, history storage, config | SIGN_ENGINE, SIGN_HISTORY |
| simple_cli | Command-line argument parsing | SIGN_CLI class |
| simple_config | User configuration management | Key aliases, defaults |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_http | Test webhook endpoints | `signcli test` command |
| simple_csv | Batch verification from CSV | `--batch` flag |
| simple_file | Read payload from file | `-f` flag |
| simple_base64 | Base64 signature encoding | Shopify, AWS, Twilio providers |
| simple_datetime | Timestamp handling | Signature timestamps |
| simple_console | Colored output | Pass/fail highlighting |
| simple_clipboard | Copy signature | `--clip` flag |

## Integration Patterns

### simple_encryption Integration

**Purpose:** HMAC-SHA256 signature generation and constant-time verification

**Usage:**
```eiffel
class SIGN_HMAC

feature {NONE} -- Initialization

    encryption: SIMPLE_ENCRYPTION
        -- Encryption engine

    make
            -- Initialize HMAC handler.
        do
            create encryption.make
        end

feature -- Signing

    hmac_sha256 (a_key, a_payload: STRING): STRING
            -- Generate HMAC-SHA256 signature as hex string.
        require
            key_not_empty: not a_key.is_empty
            payload_exists: a_payload /= Void
        do
            Result := encryption.hmac_sha256 (a_key, a_payload)
        ensure
            result_64_chars: Result.count = 64
        end

    sign_with_timestamp (a_key, a_payload: STRING; a_timestamp: INTEGER_64): STRING
            -- Generate Stripe-style timestamped signature.
        local
            l_signed_payload: STRING
        do
            l_signed_payload := a_timestamp.out + "." + a_payload
            Result := hmac_sha256 (a_key, l_signed_payload)
        end

feature -- Verification

    verify (a_key, a_payload, a_expected_signature: STRING): BOOLEAN
            -- Verify signature matches payload using constant-time comparison.
        local
            l_computed: STRING
        do
            l_computed := hmac_sha256 (a_key, a_payload)
            Result := constant_time_compare (l_computed, a_expected_signature)
        end

    constant_time_compare (a, b: STRING): BOOLEAN
            -- Compare strings in constant time to prevent timing attacks.
        local
            i, l_diff: INTEGER
        do
            if a.count = b.count then
                from i := 1 until i > a.count loop
                    l_diff := l_diff.bit_or (a.item (i).code.bit_xor (b.item (i).code))
                    i := i + 1
                end
                Result := l_diff = 0
            end
        end

end
```

**Data flow:**
```
key + payload -> HMAC-SHA256 -> 64-char hex signature
                     |
              simple_encryption
              (hmac_sha256)
```

### simple_json Integration

**Purpose:** Parse webhook payloads, manage history and configuration

**Usage:**
```eiffel
class SIGN_HISTORY

feature {NONE} -- Initialization

    json: SIMPLE_JSON
        -- JSON handler

    history_file: STRING
        -- Path to history file

    make (a_history_file: STRING)
            -- Initialize history manager.
        do
            history_file := a_history_file
            create json.make
        end

feature -- History

    add_entry (a_operation: STRING; a_provider: STRING; a_payload: STRING; a_signature: STRING; a_key_preview: STRING)
            -- Add entry to history.
        local
            l_entry: SIMPLE_JSON
            l_timestamp: STRING
        do
            create l_entry.make_object
            l_entry.put_string ("id", generate_id)
            l_entry.put_string ("timestamp", current_iso_timestamp)
            l_entry.put_string ("operation", a_operation)
            l_entry.put_string ("provider", a_provider)
            l_entry.put_string ("payload_hash", hash_payload (a_payload))
            l_entry.put_string ("signature", a_signature)
            l_entry.put_string ("key_id", a_key_preview)

            load_history
            json.array_append ("history", l_entry)
            save_history
        end

    list_recent (a_count: INTEGER): LIST [TUPLE [id, timestamp, provider, operation: STRING]]
            -- List recent history entries.
        do
            create {ARRAYED_LIST [TUPLE [STRING, STRING, STRING, STRING]]} Result.make (a_count)
            load_history
            if attached json.array_at ("history") as arr then
                across arr.reversed.new_cursor.take (a_count) as entry loop
                    Result.extend ([
                        entry.item.string_at ("id"),
                        entry.item.string_at ("timestamp"),
                        entry.item.string_at ("provider"),
                        entry.item.string_at ("operation")
                    ])
                end
            end
        end

feature {NONE} -- Implementation

    hash_payload (a_payload: STRING): STRING
            -- Create hash preview of payload.
        local
            l_enc: SIMPLE_ENCRYPTION
        do
            create l_enc.make
            Result := "sha256:" + l_enc.sha256 (a_payload).substring (1, 12) + "..."
        end

end
```

### simple_http Integration

**Purpose:** Test webhook endpoints with signed payloads

**Usage:**
```eiffel
class SIGN_TESTER

feature -- Testing

    http: SIMPLE_HTTP
        -- HTTP client

    test_webhook (a_url: STRING; a_payload: STRING; a_signature: STRING; a_header_name: STRING): SIGN_TEST_RESULT
            -- Send signed request to webhook endpoint.
        local
            l_response: SIMPLE_HTTP_RESPONSE
            l_headers: HASH_TABLE [STRING, STRING]
        do
            create http.make

            create l_headers.make (3)
            l_headers.put (a_signature, a_header_name)
            l_headers.put ("application/json", "Content-Type")
            l_headers.put (generate_request_id, "X-Request-ID")

            l_response := http.post (a_url, a_payload, l_headers)

            create Result.make
            Result.set_status_code (l_response.status_code)
            Result.set_response_body (l_response.body)
            Result.set_success (l_response.status_code >= 200 and l_response.status_code < 300)
        end

end
```

### Provider Pattern

**Purpose:** Support multiple webhook signature formats

**Usage:**
```eiffel
deferred class SIGN_PROVIDER

feature -- Signing

    compute_signature (a_key, a_payload: STRING; a_timestamp: INTEGER_64): STRING
            -- Compute signature in provider-specific format.
        deferred
        end

    format_header (a_signature: STRING; a_timestamp: INTEGER_64): STRING
            -- Format signature as HTTP header value.
        deferred
        end

    header_name: STRING
            -- HTTP header name for this provider.
        deferred
        end

feature -- Verification

    extract_signature (a_header_value: STRING): detachable STRING
            -- Extract raw signature from header value.
        deferred
        end

    verify (a_key, a_payload, a_header_value: STRING): BOOLEAN
            -- Verify signature in provider-specific format.
        deferred
        end

end

class SIGN_PROVIDER_STRIPE inherit SIGN_PROVIDER

feature -- Constants

    header_name: STRING = "Stripe-Signature"

feature -- Signing

    compute_signature (a_key, a_payload: STRING; a_timestamp: INTEGER_64): STRING
            -- Compute Stripe v1 signature.
        local
            l_signed_payload: STRING
        do
            l_signed_payload := a_timestamp.out + "." + a_payload
            Result := hmac.hmac_sha256 (a_key, l_signed_payload)
        end

    format_header (a_signature: STRING; a_timestamp: INTEGER_64): STRING
            -- Format as Stripe header: t=timestamp,v1=signature
        do
            Result := "t=" + a_timestamp.out + ",v1=" + a_signature
        end

feature -- Verification

    extract_signature (a_header_value: STRING): detachable STRING
            -- Extract v1 signature from Stripe header.
        local
            l_parts: LIST [STRING]
        do
            across a_header_value.split (',') as part loop
                if part.item.starts_with ("v1=") then
                    Result := part.item.substring (4, part.item.count)
                end
            end
        end

    verify (a_key, a_payload, a_header_value: STRING): BOOLEAN
            -- Verify Stripe webhook signature.
        local
            l_timestamp: INTEGER_64
            l_signature: STRING
        do
            l_timestamp := extract_timestamp (a_header_value)
            if attached extract_signature (a_header_value) as sig then
                l_signature := compute_signature (a_key, a_payload, l_timestamp)
                Result := hmac.constant_time_compare (sig, l_signature)
            end
        end

end
```

## Dependency Graph

```
signcli
    |
    +-- simple_encryption (required)
    |       +-- simple_base64
    |       +-- simple_datetime
    |
    +-- simple_json (required)
    |
    +-- simple_cli (required)
    |
    +-- simple_config (required)
    |       +-- simple_json
    |       +-- simple_file
    |
    +-- simple_http (optional, for 'test' command)
    |       +-- simple_json
    |
    +-- simple_csv (optional, for batch mode)
    |
    +-- simple_file (optional, for file input)
    |
    +-- simple_base64 (optional, for some providers)
    |
    +-- simple_datetime (optional, for timestamps)
    |
    +-- simple_console (optional, for colored output)
    |
    +-- ISE base (required)
```

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system name="signcli" uuid="GENERATE-NEW-UUID" xmlns="http://www.eiffel.com/developers/xml/configuration-1-22-0">
    <description>SIGNCLI: API Request Signing and Verification Tool</description>

    <target name="signcli">
        <root class="SIGN_CLI" feature="make"/>

        <option warning="warning" syntax="standard" manifest_array_type="mismatch_warning">
            <assertions precondition="true" postcondition="true" check="true" invariant="true"/>
        </option>

        <setting name="console_application" value="true"/>
        <setting name="dead_code_removal" value="all"/>

        <capability>
            <void_safety support="all"/>
        </capability>

        <!-- simple_* ecosystem (required) -->
        <library name="simple_encryption" location="$SIMPLE_EIFFEL/simple_encryption/simple_encryption.ecf"/>
        <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>

        <!-- simple_* ecosystem (optional) -->
        <library name="simple_http" location="$SIMPLE_EIFFEL/simple_http/simple_http.ecf"/>
        <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
        <library name="simple_file" location="$SIMPLE_EIFFEL/simple_file/simple_file.ecf"/>
        <library name="simple_base64" location="$SIMPLE_EIFFEL/simple_base64/simple_base64.ecf"/>
        <library name="simple_datetime" location="$SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf"/>
        <library name="simple_console" location="$SIMPLE_EIFFEL/simple_console/simple_console.ecf"/>

        <!-- ISE libraries -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
        <library name="time" location="$ISE_LIBRARY/library/time/time.ecf"/>

        <!-- Application source -->
        <cluster name="src" location=".\src\" recursive="true"/>
        <cluster name="providers" location=".\src\providers\" recursive="true"/>
    </target>

    <target name="signcli_tests" extends="signcli">
        <root class="TEST_APP" feature="make"/>
        <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
        <cluster name="tests" location=".\tests\" recursive="true"/>
    </target>
</system>
```
