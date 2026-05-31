# Metadata plan

This plan contains evidence-backed rename/comment suggestions for the next reconstruction pass.

## Summary

- Suggestions: `250`
- High confidence: `0`
- Medium or better: `0`

## Top suggestions

- `108aa8588 _CFPreferencesCopyAppValue -> candidate_query_registry_value` confidence=low role=query_registry_value tags=none imports=none
- `108aa8594 _CFPreferencesGetAppBooleanValue -> candidate_query_registry_value` confidence=low role=query_registry_value tags=none imports=none
- `108aa914c __ZNSt3__16chrono12system_clock11from_time_tEl -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa9158 __ZNSt3__16chrono12system_clock3nowEv -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa9f2c _posix_spawnattr_init -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa9f38 _posix_spawnattr_setflags -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa9f44 _posix_spawnattr_setpgroup -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa9f50 _posix_spawnattr_setsigdefault -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa9f5c _posix_spawnp -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aaa43c _sigemptyset -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aaa448 _signal -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aaa598 _strsignal -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aaa784 _waitpid -> candidate_launch_process` confidence=low role=launch_process tags=none imports=none
- `108aa830c _AudioDeviceStart -> candidate_compression_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8390 _AudioOutputUnitStart -> candidate_compression_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa83c0 _AudioUnitRender -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa83e4 _BZ2_bzDecompress -> candidate_compression_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa83fc _BZ2_bzDecompressInit -> candidate_compression_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8534 _CFErrorCreate -> candidate_logging_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8540 _CFErrorGetCode -> candidate_logging_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8750 _CGContextDrawImage -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa87bc _CGDisplayStreamStart -> candidate_compression_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa87e0 _CGEventCreate -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa87ec _CGEventGetLocation -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa87f8 _CGEventSourceKeyState -> candidate_fileio_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8888 _CGWindowListCopyWindowInfo -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88a0 _CGWindowListCreateImage -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88ac _CGWindowListCreateImageFromArray -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88b8 _CMBlockBufferCreateContiguous -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88c4 _CMBlockBufferCreateWithMemoryBlock -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88d0 _CMBlockBufferGetDataLength -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88dc _CMBlockBufferGetDataPointer -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88e8 _CMBlockBufferIsRangeContiguous -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa88f4 _CMBlockBufferReplaceDataBytes -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8930 _CMMemoryPoolGetAllocator -> candidate_memory_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8954 _CMSampleBufferDataIsReady -> candidate_fileio_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa89c0 _CMTimeGetSeconds -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8af8 _CVPixelBufferLockBaseAddress -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b28 _CVPixelBufferUnlockBaseAddress -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b34 _FSEventStreamCreate -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b40 _FSEventStreamGetDeviceBeingWatched -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b4c _FSEventStreamInvalidate -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b58 _FSEventStreamRelease -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b64 _FSEventStreamScheduleWithRunLoop -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b70 _FSEventStreamStart -> candidate_compression_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b7c _FSEventStreamStop -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b88 _FSEventsGetCurrentEventId -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8b94 _FSEventsPurgeEventsForDeviceUpToEventId -> candidate_ui_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8c18 _IOSurfaceLock -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none
- `108aa8c24 _IOSurfaceUnlock -> candidate_threading_subsystem_helper` confidence=low role=subsystem_helper tags=none imports=none

## How to use it

1. Read the high-confidence suggestions first.
2. Reject anything that conflicts with stronger evidence already known.
3. Apply only the subset you trust to the next pass.
4. Re-run the reconstruction and compare score / cluster clarity / unknown count.