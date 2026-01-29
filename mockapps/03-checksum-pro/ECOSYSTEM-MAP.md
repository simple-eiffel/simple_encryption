# CHECKSUM-PRO - Ecosystem Integration

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_encryption | SHA-256 file hashing | CHECK_HASH class |
| simple_json | Manifest storage, diff output | CHECK_MANIFEST, CHECK_STORE |
| simple_file | File system operations | CHECK_SCANNER class |
| simple_cli | Command-line argument parsing | CHECK_CLI class |
| simple_config | User configuration | CHECK_CONFIG class |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_csv | CSV report export | --format=csv option |
| simple_watcher | Real-time file monitoring | --watch flag |
| simple_email | Alert notifications | --alert EMAIL option |
| simple_http | Webhook notifications | --webhook URL option |
| simple_datetime | Timestamp formatting | Report generation |
| simple_console | Progress bars, colors | Verbose output |
| simple_template | HTML report generation | --format=html option |

## Integration Patterns

### simple_encryption Integration

**Purpose:** SHA-256 file hashing for integrity verification

**Usage:**
```eiffel
class CHECK_HASH

feature {NONE} -- Initialization

    encryption: SIMPLE_ENCRYPTION
        -- Encryption engine

    make
            -- Initialize hash calculator.
        do
            create encryption.make
        end

feature -- Hashing

    hash_file (a_path: STRING): STRING
            -- Compute SHA-256 hash of file contents.
        require
            file_exists: (create {RAW_FILE}.make (a_path)).exists
        local
            l_file: RAW_FILE
            l_content: STRING
            l_buffer: MANAGED_POINTER
            l_size: INTEGER
        do
            -- Read file in chunks for large files
            create l_file.make_open_read (a_path)
            create l_content.make (l_file.count)

            from until l_file.end_of_file loop
                l_file.read_stream (8192)
                l_content.append (l_file.last_string)
            end
            l_file.close

            Result := encryption.sha256 (l_content)
        ensure
            result_64_chars: Result.count = 64
        end

    hash_string (a_data: STRING): STRING
            -- Compute SHA-256 hash of string.
        do
            Result := encryption.sha256 (a_data)
        ensure
            result_64_chars: Result.count = 64
        end

    verify_file (a_path: STRING; a_expected_hash: STRING): BOOLEAN
            -- Verify file hash matches expected.
        local
            l_actual: STRING
        do
            l_actual := hash_file (a_path)
            Result := l_actual.is_case_insensitive_equal (a_expected_hash)
        end

end
```

**Data flow:**
```
file_path -> read_file -> SHA-256 -> hex_string
                             |
                      simple_encryption
                       (sha256)
```

### simple_file Integration

**Purpose:** File system operations for directory scanning

**Usage:**
```eiffel
class CHECK_SCANNER

feature {NONE} -- Initialization

    file_ops: SIMPLE_FILE
        -- File operations

    hasher: CHECK_HASH
        -- Hash calculator

    make
            -- Initialize scanner.
        do
            create file_ops.make_empty
            create hasher.make
        end

feature -- Scanning

    scan_directory (a_path: STRING; a_options: CHECK_SCAN_OPTIONS): LIST [CHECK_FILE_ENTRY]
            -- Scan directory and compute checksums.
        local
            l_files: LIST [STRING]
            l_entry: CHECK_FILE_ENTRY
        do
            create {ARRAYED_LIST [CHECK_FILE_ENTRY]} Result.make (100)

            l_files := list_files_recursive (a_path, a_options)

            across l_files as f loop
                if should_include (f.item, a_options) then
                    create l_entry.make
                    l_entry.set_path (f.item)
                    l_entry.set_checksum (hasher.hash_file (f.item))
                    l_entry.set_size (file_ops.file_size (f.item))
                    l_entry.set_modified_at (file_ops.modification_time (f.item))
                    Result.extend (l_entry)
                end
            end
        end

    list_files_recursive (a_path: STRING; a_options: CHECK_SCAN_OPTIONS): LIST [STRING]
            -- List all files in directory recursively.
        local
            l_dir: DIRECTORY
            l_entries: ARRAYED_LIST [STRING]
        do
            create {ARRAYED_LIST [STRING]} Result.make (100)
            create l_dir.make_open_read (a_path)

            across l_dir.linear_representation as entry loop
                if entry.item /~ "." and entry.item /~ ".." then
                    if is_directory (a_path + "/" + entry.item) then
                        Result.append (list_files_recursive (a_path + "/" + entry.item, a_options))
                    else
                        Result.extend (a_path + "/" + entry.item)
                    end
                end
            end

            l_dir.close
        end

feature {NONE} -- Implementation

    should_include (a_path: STRING; a_options: CHECK_SCAN_OPTIONS): BOOLEAN
            -- Check if file matches include/exclude patterns.
        do
            Result := True
            -- Check exclude patterns
            across a_options.exclude_patterns as pattern loop
                if matches_glob (a_path, pattern.item) then
                    Result := False
                end
            end
            -- Check include patterns (if specified)
            if not a_options.include_patterns.is_empty then
                Result := False
                across a_options.include_patterns as pattern loop
                    if matches_glob (a_path, pattern.item) then
                        Result := True
                    end
                end
            end
        end

end
```

### simple_json Integration

**Purpose:** Manifest persistence and diff output

**Usage:**
```eiffel
class CHECK_MANIFEST

feature {NONE} -- Initialization

    json: SIMPLE_JSON
        -- JSON handler

feature -- Persistence

    save (a_path: STRING)
            -- Save manifest to JSON file.
        local
            l_file: SIMPLE_FILE
        do
            create json.make_object
            json.put_string ("manifest_version", "1.0")
            json.put_string ("created_at", created_at)
            json.put_string ("updated_at", updated_at)
            json.put_string ("root_path", root_path)
            json.put_string ("algorithm", algorithm)

            -- Options
            json.put_object ("options")
            json.put_array_from_strings ("options.include_patterns", include_patterns)
            json.put_array_from_strings ("options.exclude_patterns", exclude_patterns)
            json.put_boolean ("options.include_hidden", include_hidden)

            -- Files
            json.put_object ("files")
            across entries as e loop
                json.put_object ("files." + e.item.path)
                json.put_string ("files." + e.item.path + ".checksum", e.item.checksum)
                json.put_integer ("files." + e.item.path + ".size", e.item.size)
                json.put_string ("files." + e.item.path + ".modified_at", e.item.modified_at)
            end

            -- Statistics
            json.put_object ("statistics")
            json.put_integer ("statistics.total_files", entries.count)
            json.put_integer ("statistics.total_size", total_size)

            create l_file.make (a_path)
            l_file.write_all (json.to_string_pretty)
        end

    load (a_path: STRING)
            -- Load manifest from JSON file.
        local
            l_file: SIMPLE_FILE
        do
            create l_file.make (a_path)
            create json.make
            json.parse (l_file.read_all)

            manifest_version := json.string_at ("manifest_version")
            created_at := json.string_at ("created_at")
            updated_at := json.string_at ("updated_at")
            root_path := json.string_at ("root_path")
            algorithm := json.string_at ("algorithm")

            -- Load entries
            create {ARRAYED_LIST [CHECK_FILE_ENTRY]} entries.make (100)
            if attached json.object_at ("files") as files then
                across files.keys as key loop
                    create l_entry.make
                    l_entry.set_path (key.item)
                    l_entry.set_checksum (files.string_at (key.item + ".checksum"))
                    l_entry.set_size (files.integer_at (key.item + ".size"))
                    entries.extend (l_entry)
                end
            end
        end

end
```

### simple_watcher Integration

**Purpose:** Real-time file system monitoring

**Usage:**
```eiffel
class CHECK_WATCHER_INTEGRATION

feature -- Monitoring

    watcher: SIMPLE_WATCHER
        -- File system watcher

    engine: CHECK_ENGINE
        -- Integrity engine

    start_watching (a_path: STRING; a_manifest: CHECK_MANIFEST)
            -- Start real-time monitoring.
        do
            create watcher.make
            watcher.add_path (a_path)
            watcher.set_recursive (True)

            watcher.on_created (agent handle_file_created (?, a_manifest))
            watcher.on_modified (agent handle_file_modified (?, a_manifest))
            watcher.on_deleted (agent handle_file_deleted (?, a_manifest))

            watcher.start
        end

    handle_file_modified (a_path: STRING; a_manifest: CHECK_MANIFEST)
            -- Handle file modification event.
        local
            l_old_hash, l_new_hash: STRING
        do
            if attached a_manifest.entry_for (a_path) as entry then
                l_old_hash := entry.checksum
                l_new_hash := engine.hash_file (a_path)

                if not l_old_hash.is_equal (l_new_hash) then
                    alert_change ("MODIFIED", a_path, l_old_hash, l_new_hash)
                end
            end
        end

end
```

## Dependency Graph

```
checksum-pro
    |
    +-- simple_encryption (required)
    |       +-- simple_base64
    |       +-- simple_datetime
    |
    +-- simple_json (required)
    |
    +-- simple_file (required)
    |
    +-- simple_cli (required)
    |
    +-- simple_config (required)
    |       +-- simple_json
    |       +-- simple_file
    |
    +-- simple_csv (optional, for CSV reports)
    |
    +-- simple_watcher (optional, for --watch)
    |
    +-- simple_email (optional, for --alert)
    |       +-- simple_smtp
    |
    +-- simple_http (optional, for --webhook)
    |
    +-- simple_template (optional, for HTML reports)
    |
    +-- simple_console (optional, for progress bars)
    |
    +-- simple_datetime (optional, for timestamps)
    |
    +-- ISE base (required)
```

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system name="checksum_pro" uuid="GENERATE-NEW-UUID" xmlns="http://www.eiffel.com/developers/xml/configuration-1-22-0">
    <description>CHECKSUM-PRO: Enterprise File Integrity Monitor</description>

    <target name="checksum_pro">
        <root class="CHECK_CLI" feature="make"/>

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
        <library name="simple_file" location="$SIMPLE_EIFFEL/simple_file/simple_file.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>

        <!-- simple_* ecosystem (optional) -->
        <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
        <library name="simple_watcher" location="$SIMPLE_EIFFEL/simple_watcher/simple_watcher.ecf"/>
        <library name="simple_email" location="$SIMPLE_EIFFEL/simple_email/simple_email.ecf"/>
        <library name="simple_http" location="$SIMPLE_EIFFEL/simple_http/simple_http.ecf"/>
        <library name="simple_template" location="$SIMPLE_EIFFEL/simple_template/simple_template.ecf"/>
        <library name="simple_console" location="$SIMPLE_EIFFEL/simple_console/simple_console.ecf"/>
        <library name="simple_datetime" location="$SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf"/>

        <!-- ISE libraries -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
        <library name="time" location="$ISE_LIBRARY/library/time/time.ecf"/>

        <!-- Application source -->
        <cluster name="src" location=".\src\" recursive="true"/>
    </target>

    <target name="checksum_pro_tests" extends="checksum_pro">
        <root class="TEST_APP" feature="make"/>
        <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
        <cluster name="tests" location=".\tests\" recursive="true"/>
    </target>
</system>
```
