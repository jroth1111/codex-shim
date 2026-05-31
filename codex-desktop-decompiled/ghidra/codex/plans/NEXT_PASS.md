# Next pass action list

Use this file as the execution contract for the next reconstruction pass.

## High-confidence renames to apply first

- none

## Focus areas

- `108aa8588 _CFPreferencesCopyAppValue` confidence=low role=query_registry_value strings=none
- `108aa8594 _CFPreferencesGetAppBooleanValue` confidence=low role=query_registry_value strings=none
- `108aa914c __ZNSt3__16chrono12system_clock11from_time_tEl` confidence=low role=launch_process strings=none
- `108aa9158 __ZNSt3__16chrono12system_clock3nowEv` confidence=low role=launch_process strings=none
- `108aa9f2c _posix_spawnattr_init` confidence=low role=launch_process strings=none
- `108aa9f38 _posix_spawnattr_setflags` confidence=low role=launch_process strings=none
- `108aa9f44 _posix_spawnattr_setpgroup` confidence=low role=launch_process strings=none
- `108aa9f50 _posix_spawnattr_setsigdefault` confidence=low role=launch_process strings=none
- `108aa9f5c _posix_spawnp` confidence=low role=launch_process strings=none
- `108aaa43c _sigemptyset` confidence=low role=launch_process strings=none
- `108aaa448 _signal` confidence=low role=launch_process strings=none
- `108aaa598 _strsignal` confidence=low role=launch_process strings=none
- `108aaa784 _waitpid` confidence=low role=launch_process strings=none
- `108aa830c _AudioDeviceStart` confidence=low role=subsystem_helper strings=none
- `108aa8390 _AudioOutputUnitStart` confidence=low role=subsystem_helper strings=none
- `108aa83c0 _AudioUnitRender` confidence=low role=subsystem_helper strings=none
- `108aa83e4 _BZ2_bzDecompress` confidence=low role=subsystem_helper strings=none
- `108aa83fc _BZ2_bzDecompressInit` confidence=low role=subsystem_helper strings=none
- `108aa8534 _CFErrorCreate` confidence=low role=subsystem_helper strings=none
- `108aa8540 _CFErrorGetCode` confidence=low role=subsystem_helper strings=none