# Project Map

This tree groups recovered source-equivalent functions by evidence-backed namespaces, repeated prefixes, subsystem tags, and callgraph propagation.

## Binary profile

- Name: `codex`
- Format: `Mac OS X Mach-O`
- Language mode: `objc`
- Language signals: Objective-C selectors / Cocoa frameworks
- Function count: `797`
- Auto-named functions: `0`
- Packed / obfuscated suspected: `yes`

## Clusters

### misc

- Reason: `callgraph-propagated`
- Functions: `396`
- Top tags: `none`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `1016fa824` `entry` (missing, low)
  - `108aa8294` `_AudioComponentFindNext` (missing, low)
  - `108aa82a0` `_AudioComponentInstanceDispose` (missing, low)
  - `108aa82ac` `_AudioComponentInstanceNew` (missing, low)
  - `108aa82b8` `_AudioConvertHostTimeToNanos` (missing, low)
  - `108aa82c4` `_AudioConverterConvertComplexBuffer` (missing, low)
  - `108aa82d0` `_AudioConverterDispose` (missing, low)
  - `108aa82dc` `_AudioConverterFillComplexBuffer` (missing, low)
  - `108aa82e8` `_AudioConverterNew` (missing, low)
  - `108aa82f4` `_AudioDeviceCreateIOProcID` (missing, low)

### subsystems/auth

- Reason: `subsystem`
- Functions: `13`
- Top tags: `auth, compression, tls, fileio, parser`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8a8c` `_CVPixelBufferGetBaseAddressOfPlane` (ok, medium)
  - `108aa8cfc` `_SSLGetSessionState` (ok, medium)
  - `108aa8d74` `_SSLSetSessionOption` (ok, medium)
  - `108aa8de0` `_SecKeychainAddGenericPassword` (ok, medium)
  - `108aa8df8` `_SecKeychainFindGenericPassword` (ok, medium)
  - `108aa8e94` `_VTCompressionSessionCompleteFrames` (ok, medium)
  - `108aa8ea0` `_VTCompressionSessionCreate` (ok, medium)
  - `108aa8eb8` `_VTCompressionSessionGetPixelBufferPool` (ok, medium)
  - `108aa8ec4` `_VTCompressionSessionInvalidate` (ok, medium)
  - `108aa8f0c` `_VTSessionCopyProperty` (ok, medium)

### subsystems/compression

- Reason: `subsystem`
- Functions: `27`
- Top tags: `compression, auth, parser, network, ui`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa830c` `_AudioDeviceStart` (missing, low)
  - `108aa8390` `_AudioOutputUnitStart` (missing, low)
  - `108aa83e4` `_BZ2_bzDecompress` (missing, low)
  - `108aa83f0` `_BZ2_bzDecompressEnd` (ok, medium)
  - `108aa83fc` `_BZ2_bzDecompressInit` (missing, low)
  - `108aa87bc` `_CGDisplayStreamStart` (missing, low)
  - `108aa8b70` `_FSEventStreamStart` (missing, low)
  - `108aa8edc` `_VTDecompressionSessionCreate` (ok, medium)
  - `108aa8ee8` `_VTDecompressionSessionDecodeFrame` (ok, medium)
  - `108aa8ef4` `_VTDecompressionSessionInvalidate` (ok, medium)

### subsystems/crypto

- Reason: `subsystem`
- Functions: `28`
- Top tags: `crypto, tls, process, threading, fileio`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8300` `_AudioDeviceDestroyIOProcID` (ok, medium)
  - `108aa8414` `_CCRandomGenerateBytes` (ok, medium)
  - `108aa8528` `_CFErrorCopyDescription` (ok, medium)
  - `108aa8894` `_CGWindowListCreateDescriptionFromArray` (ok, medium)
  - `108aa890c` `_CMFormatDescriptionEqual` (ok, medium)
  - `108aa8918` `_CMFormatDescriptionGetMediaSubType` (ok, medium)
  - `108aa896c` `_CMSampleBufferGetFormatDescription` (ok, medium)
  - `108aa89d8` `_CMVideoFormatDescriptionCreate` (ok, medium)
  - `108aa89e4` `_CMVideoFormatDescriptionCreateFromH264ParameterSets` (ok, medium)
  - `108aa89f0` `_CMVideoFormatDescriptionCreateFromHEVCParameterSets` (ok, medium)

### subsystems/database

- Reason: `subsystem`
- Functions: `2`
- Top tags: `database, network`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa917c` `__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv` (missing, low)
  - `108aa93c8` `_bind` (ok, medium)

### subsystems/fileio

- Reason: `subsystem`
- Functions: `76`
- Top tags: `fileio, http, process, threading, tls`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa86a8` `_CFURLCopyFileSystemPath` (ok, medium)
  - `108aa86b4` `_CFURLCopyLastPathComponent` (ok, medium)
  - `108aa86c0` `_CFURLCreateCopyAppendingPathComponent` (ok, medium)
  - `108aa86cc` `_CFURLCreateCopyDeletingLastPathComponent` (ok, medium)
  - `108aa86d8` `_CFURLCreateFilePathURL` (ok, medium)
  - `108aa86e4` `_CFURLCreateFileReferenceURL` (ok, medium)
  - `108aa86f0` `_CFURLCreateFromFileSystemRepresentation` (ok, medium)
  - `108aa8708` `_CFURLGetFileSystemRepresentation` (ok, medium)
  - `108aa87f8` `_CGEventSourceKeyState` (missing, low)
  - `108aa8954` `_CMSampleBufferDataIsReady` (missing, low)

### subsystems/http

- Reason: `subsystem`
- Functions: `8`
- Top tags: `http, parser`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa869c` `_CFURLCopyAbsoluteURL` (ok, medium)
  - `108aa86fc` `_CFURLCreateWithBytes` (ok, medium)
  - `108aa8714` `_CFURLGetString` (ok, medium)
  - `108aa8720` `_CFURLResourceIsReachable` (ok, medium)
  - `108aa8c30` `_LSCopyDefaultApplicationURLForURL` (ok, medium)
  - `108aa8e04` `_SecKeychainItemDelete` (missing, low)
  - `108aa92cc` `__dyld_get_image_header` (ok, medium)
  - `108aa9e48` `_objc_storeStrong` (missing, low)

### subsystems/logging

- Reason: `subsystem`
- Functions: `31`
- Top tags: `logging, memory, parser`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8534` `_CFErrorCreate` (missing, low)
  - `108aa8540` `_CFErrorGetCode` (missing, low)
  - `108aa8c60` `_NSLog` (missing, low)
  - `108aa8db0` `_SecCopyErrorMessageString` (ok, medium)
  - `108aa8f6c` `__Unwind_Backtrace` (missing, low)
  - `108aa902c` `__ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE` (missing, low)
  - `108aa920c` `___error` (missing, low)
  - `108aa9368` `_asprintf_l` (missing, low)
  - `108aa93a4` `_backtrace` (missing, low)
  - `108aa93b0` `_backtrace_symbols` (missing, low)

### subsystems/memory

- Reason: `subsystem`
- Functions: `38`
- Top tags: `memory`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8930` `_CMMemoryPoolGetAllocator` (missing, low)
  - `108aa8bc4` `_IOSurfaceGetAllocSize` (ok, medium)
  - `108aa8e10` `_SecKeychainItemFreeContent` (ok, medium)
  - `108aa9008` `__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc` (missing, low)
  - `108aa9044` `__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm` (missing, low)
  - `108aa9050` `__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc` (missing, low)
  - `108aa905c` `__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm` (missing, low)
  - `108aa9068` `__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm` (missing, low)
  - `108aa9074` `__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc` (missing, low)
  - `108aa9080` `__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev` (missing, low)

### subsystems/network

- Reason: `subsystem`
- Functions: `21`
- Top tags: `network, tls, ui, threading`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa833c` `_AudioObjectAddPropertyListener` (ok, medium)
  - `108aa8378` `_AudioObjectRemovePropertyListener` (ok, medium)
  - `108aa8cd8` `_SSLGetConnection` (ok, medium)
  - `108aa8d2c` `_SSLSetConnection` (ok, medium)
  - `108aa9320` `_accept` (ok, medium)
  - `108aa94b8` `_connect` (ok, medium)
  - `108aa99e0` `_inet_ntop` (ok, medium)
  - `108aa99ec` `_inet_pton` (ok, medium)
  - `108aa9a64` `_kqueue` (ok, medium)
  - `108aa9aa0` `_listen` (ok, medium)

### subsystems/parser

- Reason: `subsystem`
- Functions: `4`
- Top tags: `parser, auth, compression`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8eac` `_VTCompressionSessionEncodeFrame` (ok, medium)
  - `108aa8ed0` `_VTCompressionSessionPrepareToEncodeFrames` (ok, medium)
  - `108aa9800` `_fscanf` (ok, medium)
  - `108aaa4b4` `_sscanf` (missing, low)

### subsystems/process

- Reason: `subsystem`
- Functions: `22`
- Top tags: `process, threading`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8678` `_CFTimeZoneCopySystem` (ok, medium)
  - `108aa8690` `_CFTimeZoneResetSystem` (ok, medium)
  - `108aa8870` `_CGRectIsEmpty` (ok, medium)
  - `108aa8c54` `_MTLCreateSystemDefaultDevice` (ok, medium)
  - `108aa914c` `__ZNSt3__16chrono12system_clock11from_time_tEl` (missing, low)
  - `108aa9158` `__ZNSt3__16chrono12system_clock3nowEv` (missing, low)
  - `108aa965c` `_execv` (ok, medium)
  - `108aa9668` `_execvp` (ok, medium)
  - `108aa977c` `_fork` (ok, medium)
  - `108aa9a4c` `_kill` (ok, medium)

### subsystems/registry

- Reason: `subsystem`
- Functions: `2`
- Top tags: `registry`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8588` `_CFPreferencesCopyAppValue` (missing, low)
  - `108aa8594` `_CFPreferencesGetAppBooleanValue` (missing, low)

### subsystems/serialization

- Reason: `subsystem`
- Functions: `2`
- Top tags: `serialization, tls`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8d5c` `_SSLSetProtocolVersionMax` (ok, medium)
  - `108aa8d68` `_SSLSetProtocolVersionMin` (ok, medium)

### subsystems/threading

- Reason: `subsystem`
- Functions: `93`
- Top tags: `threading, fileio, crypto, process, compression`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa88b8` `_CMBlockBufferCreateContiguous` (missing, low)
  - `108aa88c4` `_CMBlockBufferCreateWithMemoryBlock` (missing, low)
  - `108aa88d0` `_CMBlockBufferGetDataLength` (missing, low)
  - `108aa88dc` `_CMBlockBufferGetDataPointer` (missing, low)
  - `108aa88e8` `_CMBlockBufferIsRangeContiguous` (missing, low)
  - `108aa88f4` `_CMBlockBufferReplaceDataBytes` (missing, low)
  - `108aa89c0` `_CMTimeGetSeconds` (missing, low)
  - `108aa8af8` `_CVPixelBufferLockBaseAddress` (missing, low)
  - `108aa8b28` `_CVPixelBufferUnlockBaseAddress` (missing, low)
  - `108aa8c18` `_IOSurfaceLock` (missing, low)

### subsystems/tls

- Reason: `subsystem`
- Functions: `18`
- Top tags: `tls, crypto`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa8cb4` `_SSLCopyPeerTrust` (ok, medium)
  - `108aa8cc0` `_SSLCreateContext` (ok, medium)
  - `108aa8d08` `_SSLHandshake` (ok, medium)
  - `108aa8d20` `_SSLSetCertificate` (ok, medium)
  - `108aa8d44` `_SSLSetIOFuncs` (ok, medium)
  - `108aa8d50` `_SSLSetPeerDomainName` (ok, medium)
  - `108aa8d8c` `_SecCertificateCopyData` (ok, medium)
  - `108aa8d98` `_SecCertificateCreateWithData` (ok, medium)
  - `108aa8da4` `_SecCertificateGetTypeID` (ok, medium)
  - `108aa8e28` `_SecPolicyCreateSSL` (ok, medium)

### subsystems/ui

- Reason: `subsystem`
- Functions: `16`
- Top tags: `ui`
- Top imports: `none`
- Top strings: `none`
- Representative functions:
  - `108aa83c0` `_AudioUnitRender` (missing, low)
  - `108aa8750` `_CGContextDrawImage` (missing, low)
  - `108aa87e0` `_CGEventCreate` (missing, low)
  - `108aa87ec` `_CGEventGetLocation` (missing, low)
  - `108aa8888` `_CGWindowListCopyWindowInfo` (missing, low)
  - `108aa88a0` `_CGWindowListCreateImage` (missing, low)
  - `108aa88ac` `_CGWindowListCreateImageFromArray` (missing, low)
  - `108aa8b34` `_FSEventStreamCreate` (missing, low)
  - `108aa8b40` `_FSEventStreamGetDeviceBeingWatched` (missing, low)
  - `108aa8b4c` `_FSEventStreamInvalidate` (missing, low)
