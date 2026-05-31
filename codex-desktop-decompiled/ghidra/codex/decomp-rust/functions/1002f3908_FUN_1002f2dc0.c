
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002f2dc0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  long lVar25;
  code *pcVar26;
  bool bVar27;
  long lVar28;
  char cVar29;
  byte bVar30;
  int iVar31;
  uint uVar32;
  uint *puVar33;
  long *plVar34;
  undefined8 extraout_x1;
  undefined8 uVar35;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 *puVar36;
  undefined1 uVar37;
  long *plVar38;
  long *plVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  ulong uVar45;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  char *unaff_x25;
  long *unaff_x26;
  double *pdVar46;
  double *unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double unaff_d8;
  undefined1 auVar54 [12];
  undefined8 in_stack_00000010;
  double *in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  ulong in_stack_00000040;
  uint in_stack_00000048;
  char in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  char *in_stack_000000d8;
  code *in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  long *in_stack_00000108;
  long *in_stack_00000110;
  long *in_stack_00000118;
  undefined *in_stack_00000120;
  long *in_stack_00000128;
  undefined *in_stack_00000130;
  double *in_stack_00000138;
  undefined *in_stack_00000140;
  undefined8 in_stack_00000148;
  ulong in_stack_00000150;
  uint in_stack_00000158;
  char *in_stack_00000160;
  undefined8 *in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000178;
  undefined4 in_stack_00000180;
  undefined8 *puStack0000000000000188;
  undefined *puStack0000000000000190;
  undefined8 in_stack_00000198;
  undefined4 uStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined8 *puStack00000000000001a8;
  long in_stack_000001b0;
  ulong in_stack_000001b8;
  uint in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
code_r0x0001002f2dc0:
  puStack00000000000001a8 = &stack0x000000d8;
  uStack00000000000001a0 = 0x8abafb4;
  uStack00000000000001a4 = 1;
  puStack0000000000000188 = (undefined8 *)&stack0x000001a0;
  puStack0000000000000190 = &UNK_10b1f8a98;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined8 ***)(unaff_x29 + -0xd8) = &stack0x00000188;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long **)(unaff_x29 + -200) = param_1;
  plVar34 = in_stack_00000020;
  do {
    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
              (unaff_x19,unaff_x26,plVar34,&stack0x000000f8,unaff_x29 + -0xe0);
    uVar40 = extraout_x1_02;
    plVar38 = unaff_x19;
    plVar34 = unaff_x20;
    uVar44 = unaff_w28;
    _uStack00000000000001a0 = (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
LAB_1002f2f20:
    do {
      do {
        unaff_w28 = uVar44;
        if (*unaff_x25 == '\0') {
          *unaff_x25 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (unaff_x25,uVar40,1000000000);
        }
        FUN_1060fa678(unaff_x25,1,unaff_x25);
        do {
          do {
            puVar33 = (uint *)FUN_1002f8440();
            if (puVar33 != (uint *)0x0) {
              in_stack_00000058._4_4_ = *puVar33;
              if (uStack000000000000003c < uStack0000000000000038) {
                if (in_stack_00000058._4_4_ < *(uint *)(in_stack_00000030 + 4)) {
                  in_stack_00000090._7_1_ = (undefined1)((ulong)in_stack_00000028 >> 0x20);
                  lVar28 = 0x10;
                  if (in_stack_00000028._4_4_ != 0) {
                    lVar28 = 0x14;
                  }
                  uVar44 = *(uint *)((long)unaff_x24 + lVar28);
                  plVar38 = (long *)*unaff_x24;
                  lVar28 = *plVar38;
                  *plVar38 = lVar28 + 1;
                  if (lVar28 < 0) goto LAB_1002f4608;
                  *(long **)(unaff_x29 + -0xe0) = plVar38;
                  uVar40 = plVar38[6];
                  do {
                    if (((uVar40 & 1) != 0) ||
                       (uVar42 = uVar40 + (ulong)uVar44 * -2, uVar40 < (ulong)uVar44 * 2)) {
                      lVar28 = *plVar38;
                      *plVar38 = lVar28 + -1;
                      LORelease();
                      if (lVar28 == 1) {
                        DataMemoryBarrier(2,1);
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE
                                  (unaff_x29 + -0xe0);
                      }
                      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                        bVar30 = bRam000000010b6259b8;
                        if (bRam000000010b6259b8 - 1 < 2) {
LAB_1002f3364:
                          iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                             (lRam000000010b6259a8,bVar30);
                          if (iVar31 != 0) {
                            in_stack_00000110 = (long *)(lRam000000010b6259a8 + 0x30);
                            *(long *)(unaff_x29 + -0xe0) = (long)&stack0x00000058 + 4;
                            *(undefined **)(unaff_x29 + -0xd8) =
                                 &
                                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                            ;
                            *(long *)(unaff_x29 + -0xd0) = (long)&stack0x00000090 + 7;
                            *(undefined8 *)(unaff_x29 + -200) = 0x100322d08;
                            in_stack_000000e0 = (code *)(unaff_x29 + -0xe0);
                            in_stack_000000d8 = s_attempt___failed_with_a__However_108abab9f;
                            _uStack00000000000001a0 = &stack0x000000d8;
                            puStack00000000000001a8 = (undefined8 *)&UNK_10b1f8a98;
                            _uStack0000000000000100 = (code *)&stack0x000001a0;
                            in_stack_000000f8 = (long *)0x1;
                            in_stack_00000108 = (long *)0x1;
                            FUN_1002f4890(&stack0x000000f8);
                            goto LAB_1002f3a64;
                          }
                        }
                        else if (bRam000000010b6259b8 != 0) {
                          bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                             (0x10b6259a8);
                          if (bVar30 != 0) goto LAB_1002f3364;
                        }
                      }
                      lVar28 = lRam000000010b6259a8;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
                         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 4))
                      goto LAB_1002f3a64;
                      in_stack_000000a0 = *(undefined8 *)(lRam000000010b6259a8 + 0x20);
                      in_stack_000000a8 = *(undefined8 *)(lRam000000010b6259a8 + 0x28);
                      in_stack_00000098 = 4;
                      plVar34 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar34 = (long *)&UNK_10b3c24c8;
                      }
                      plVar38 = plRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        plVar38 = (long *)&UNK_109adfc03;
                      }
                      iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x00000098);
                      if (iVar31 == 0) goto LAB_1002f3a64;
                      in_stack_00000110 = (long *)(lRam000000010b6259a8 + 0x30);
                      *(long *)(unaff_x29 + -0xe0) = (long)&stack0x00000058 + 4;
                      *(undefined **)(unaff_x29 + -0xd8) =
                           &
                           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                      ;
                      *(long *)(unaff_x29 + -0xd0) = (long)&stack0x00000090 + 7;
                      *(undefined8 *)(unaff_x29 + -200) = 0x100322d08;
                      in_stack_000000e0 = (code *)(unaff_x29 + -0xe0);
                      in_stack_000000d8 = s_attempt___failed_with_a__However_108abab9f;
                      _uStack00000000000001a0 = &stack0x000000d8;
                      puStack00000000000001a8 = (undefined8 *)&UNK_10b1f8a98;
                      _uStack0000000000000100 = (code *)&stack0x000001a0;
                      in_stack_000000f8 = (long *)0x1;
                      in_stack_00000108 = (long *)0x1;
                      puVar36 = &stack0x00000098;
                      goto LAB_1002f394c;
                    }
                    uVar43 = plVar38[6];
                    bVar27 = uVar43 != uVar40;
                    uVar40 = uVar43;
                  } while (bVar27);
                  plVar38[6] = uVar42;
                  _uStack0000000000000100 = (code *)CONCAT44(uStack0000000000000104,uVar44);
                  in_stack_000000f8 = plVar38;
                  if (*unaff_x22 == 0) {
                    thunk_FUN_1087d74e8();
                  }
                  iVar31 = _pthread_mutex_lock();
                  if (iVar31 != 0) {
                    thunk_FUN_108a81ad4();
                    goto LAB_1002f4608;
                  }
                  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                      0x7fffffffffffffff) == 0) {
                    plVar38 = (long *)0x0;
                    cVar29 = (char)unaff_x22[1];
                  }
                  else {
                    uVar44 = FUN_107c05e34();
                    plVar38 = (long *)(ulong)(uVar44 ^ 1);
                    cVar29 = (char)unaff_x22[1];
                  }
                  if (cVar29 != '\0') {
                    /* WARNING: Read-only address (ram,0x000108c78f50) is written */
                    *(long **)(unaff_x29 + -0xe0) = unaff_x22;
                    *(char *)(unaff_x29 + -0xd8) = (char)plVar38;
                    FUN_107c05cb4(&UNK_108c80274,0x2b,unaff_x29 + -0xe0,&UNK_10b1ff7a0,
                                  &UNK_10b1fea50);
                    goto LAB_1002f4608;
                  }
                    /* WARNING: Read-only address (ram,0x000108c78f50) is written */
                  plVar39 = (long *)unaff_x22[2];
                  unaff_x22[2] = (long)in_stack_000000f8;
                  *(undefined4 *)(unaff_x22 + 3) = uStack0000000000000100;
                  if (plVar39 != (long *)0x0) {
                    *(long **)(unaff_x29 + -0xe0) = plVar39;
                    *(undefined4 *)(unaff_x29 + -0xd8) = 0;
                    lVar28 = *plVar39;
                    *plVar39 = lVar28 + -1;
                    LORelease();
                    if (lVar28 == 1) {
                      DataMemoryBarrier(2,1);
                      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE
                                (unaff_x29 + -0xe0);
                    }
                  }
                  if ((((ulong)plVar38 & 1) == 0) &&
                     ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                      0x7fffffffffffffff) != 0)) {
                    uVar40 = FUN_107c05e34();
                    if ((uVar40 & 1) == 0) {
                      *(undefined1 *)(unaff_x22 + 1) = 1;
                    }
                  }
                  _pthread_mutex_unlock(*unaff_x22);
                  puVar33 = (uint *)FUN_1002f8440();
                  cVar29 = in_stack_00000050;
                  if (puVar33 == (uint *)0x0) {
                    FUN_107c05cac(&UNK_108c7a6b0,0x42,&UNK_10b1febd0);
                    pdVar46 = unaff_x27;
                    goto LAB_1002f4624;
                  }
                  in_stack_00000148._4_4_ = *puVar33;
                  if (unaff_w28 + 1 <= in_stack_00000048) {
                    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                      bVar30 = bRam000000010b625c58;
                      if (bRam000000010b625c58 - 1 < 2) {
LAB_1002f3560:
                        iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                           (lRam000000010b625c48,bVar30);
                        lVar28 = lRam000000010b625c48;
                        if (iVar31 != 0) {
                          in_stack_00000110 = (long *)(lRam000000010b625c48 + 0x30);
                          *(undefined **)(unaff_x29 + -0xf0) = &UNK_108c7f9ec;
                          *(undefined8 *)(unaff_x29 + -0xe8) = 0x3d;
                          *(undefined4 *)(unaff_x29 + -0x100) =
                               *(undefined4 *)(in_stack_00000030 + 4);
                          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xf0;
                          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f8a98;
                          *(long *)(unaff_x29 + -0xd0) = (long)&stack0x00000148 + 4;
                          *(undefined **)(unaff_x29 + -200) = &UNK_10b1f9660;
                          *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x100;
                          *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b1f9660;
                          _uStack0000000000000100 = (code *)(unaff_x29 + -0xe0);
                          in_stack_000000f8 = (long *)0x1;
                          in_stack_00000108 = (long *)0x3;
                          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                    (lVar28,&stack0x000000f8);
                          lVar28 = lRam000000010b625c48;
                          goto joined_r0x0001002f35e4;
                        }
                      }
                      else if (bRam000000010b625c58 != 0) {
                        bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (0x10b625c48);
                        if (bVar30 != 0) goto LAB_1002f3560;
                      }
                    }
                    lVar28 = lRam000000010b625c48;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      puStack00000000000001a8 = *(undefined8 **)(lRam000000010b625c48 + 0x20);
                      in_stack_000001b0 = *(long *)(lRam000000010b625c48 + 0x28);
                      uStack00000000000001a0 = 4;
                      uStack00000000000001a4 = 0;
                      plVar34 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar34 = (long *)&UNK_10b3c24c8;
                      }
                      plVar38 = plRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        plVar38 = (long *)&UNK_109adfc03;
                      }
                      iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000001a0);
                      lVar1 = lRam000000010b625c48;
                      if (iVar31 != 0) {
                        in_stack_000000d8 =
                             "encountered un-retryable errorthe present takes place after the UNIX_EPOCHtime source required for retriesevent /Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/aws-smithy-runtime-1.9.5/src/client/retries/strategy/standard.rs:329retry_partition_name is requiredAn async sleep implementation is required for retry to work. Please provide a `sleep_impl` on the config, or disable timeouts.The default retry config was removed, and no other config was put in its place.An async sleep implementation is required for timeouts to work. Please provide a `sleep_impl` on the config, or disable timeouts.The default timeout config was removed, and no other config was put in its place.default_sleep_impl_plugindefault_time_source_plugindefault_retry_config_plugindefault_retry_configdefault_http_client_plugindefault_identity_cache_plugindefault_timeout_config_plugindefault_timeout_configA time source is required for stalled stream protection to work.Please provide a `time_source` on the config, or disable stalled stream protection.An async sleep implementation is required for stalled stream protection to work. Please provide a `sleep_impl` on the config, or disable stalled stream protection.The default stalled stream protection config was removed, and no other config was put in its place.default_stalled_stream_protection_config_plugindefault_stalled_stream_protection_configinserted above if not presentdefault_expiration must be at least 15 minutesevent /Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/aws-smithy-runtime-1.9.5/src/client/http/body/minimum_throughput/http_body_0_4_x.rs:50event /Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/aws-smithy-runtime-1.9.5/src/client/http/body/minimum_throughput/http_body_0_4_x.rs:37event /Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/aws-smithy-runtime-1.9.5/src/client/http/body/minimum_throughput/http_body_0_4_x.rs:29size overflows MAX_SIZEPUTfailed to write whole buffer"
                        ;
                        in_stack_000000e0 = (code *)0x3d;
                        *(undefined4 *)(unaff_x29 + -0xf0) = *(undefined4 *)(in_stack_00000030 + 4);
                        *(char ***)(unaff_x29 + -0xe0) = &stack0x000000d8;
                        *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f8a98;
                        *(long *)(unaff_x29 + -0xd0) = (long)&stack0x00000148 + 4;
                        *(undefined **)(unaff_x29 + -200) = &UNK_10b1f9660;
                        *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xf0;
                        *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b1f9660;
                        puVar36 = (undefined8 *)&stack0x000001a0;
                        goto LAB_1002f36f4;
                      }
                    }
                    goto LAB_1002f3a64;
                  }
                  if (in_stack_00000048 == unaff_w28) {
                    plVar34 = (long *)FUN_100305038();
                    if (plVar34 != (long *)0x0) {
                      *(long **)(unaff_x29 + -0xe0) = plVar34;
                      FUN_1003057f0();
                      auVar54 = FUN_1003045e4(unaff_x29 + -0xe0,cVar29 == '\x01');
                      if (auVar54._8_4_ != unaff_w28) {
                        lVar28 = *plVar34;
                        *plVar34 = lVar28 + -1;
                        LORelease();
                        if (lVar28 == 1) {
                          DataMemoryBarrier(2,1);
                          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7008b6a95001b270E
                                    (unaff_x29 + -0xe0);
                        }
                        uVar40 = *(ulong *)*(undefined1 (*) [12])(in_stack_00000030 + 2);
                        bVar27 = *(uint *)(in_stack_00000030 + 3) < auVar54._8_4_;
                        if (uVar40 != auVar54._0_8_) {
                          bVar27 = uVar40 < auVar54._0_8_;
                        }
                        _in_stack_00000178 = *(undefined1 (*) [12])(in_stack_00000030 + 2);
                        if (!bVar27) {
                          _in_stack_00000178 = auVar54;
                        }
                        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                          bVar30 = bRam000000010b625c88;
                          if (bRam000000010b625c88 - 1 < 2) {
LAB_1002f3b1c:
                            iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                               (lRam000000010b625c78,bVar30);
                            if (iVar31 != 0) {
                              lVar28 = lRam000000010b625c78 + 0x30;
                              in_stack_000000f8 = &stack0x00000178;
                              _uStack0000000000000100 =
                                   __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                              ;
                              in_stack_000000e0 = (code *)&stack0x000000f8;
                              in_stack_000000d8 = s_rate_limiter_has_requested_a_del_108abb094;
                              *(char ***)(unaff_x29 + -0xf0) = &stack0x000000d8;
                              *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
                              *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                              *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xf0;
                              *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                              *(long *)(unaff_x29 + -200) = lVar28;
                              FUN_100304f00(unaff_x29 + -0xe0);
                              auVar20 = _in_stack_00000178;
                              goto LAB_1002f4070;
                            }
                          }
                          else if (bRam000000010b625c88 != 0) {
                            bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                               (0x10b625c78);
                            if (bVar30 != 0) goto LAB_1002f3b1c;
                          }
                        }
                        lVar28 = lRam000000010b625c78;
                        auVar20 = _in_stack_00000178;
                        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                          puStack0000000000000190 = *(undefined **)(lRam000000010b625c78 + 0x20);
                          in_stack_00000198 = *(undefined8 *)(lRam000000010b625c78 + 0x28);
                          puStack0000000000000188 = (undefined8 *)0x4;
                          plVar34 = plRam000000010b634c20;
                          if (lRam000000010b66fd20 != 2) {
                            plVar34 = (long *)&UNK_10b3c24c8;
                          }
                          plVar38 = plRam000000010b634c18;
                          if (lRam000000010b66fd20 != 2) {
                            plVar38 = (long *)&UNK_109adfc03;
                          }
                          iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x00000188);
                          auVar20 = _in_stack_00000178;
                          if (iVar31 != 0) {
                            lVar1 = lRam000000010b625c78 + 0x30;
                            in_stack_000000f8 = &stack0x00000178;
                            _uStack0000000000000100 =
                                 __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                            ;
                            in_stack_000000e0 = (code *)&stack0x000000f8;
                            in_stack_000000d8 = s_rate_limiter_has_requested_a_del_108abb094;
                            *(char ***)(unaff_x29 + -0xf0) = &stack0x000000d8;
                            *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
                            *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                            *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xf0;
                            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                            *(long *)(unaff_x29 + -200) = lVar1;
                            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                      (lVar28,plVar38,plVar34,&stack0x00000188,unaff_x29 + -0xe0);
                            auVar20 = _in_stack_00000178;
                          }
                        }
                        goto LAB_1002f4070;
                      }
                      lVar28 = *plVar34;
                      *plVar34 = lVar28 + -1;
                      LORelease();
                      if (lVar28 == 1) {
                        DataMemoryBarrier(2,1);
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7008b6a95001b270E
                                  (unaff_x29 + -0xe0);
                      }
                    }
                    dVar48 = 1.0;
                    if ((*(byte *)((long)in_stack_00000030 + 0x26) & 1) == 0) {
                      auVar52 = __ZN8fastrand10global_rng3f6417hd4edc3c6aef7e476E();
                      dVar48 = auVar52._0_8_;
                    }
                    in_stack_000001b8 = in_stack_00000030[2];
                    in_stack_000001c0 = *(uint *)(in_stack_00000030 + 3);
                    uVar32 = in_stack_00000148._4_4_ - 1;
                    uVar44 = in_stack_00000148._4_4_;
                    uVar40 = in_stack_000001b8;
                    uVar41 = in_stack_000001c0;
                    if (uVar32 != 0) {
                      if ((uVar32 & 1) == 0) {
                        uVar44 = 1;
                      }
                      else {
                        uVar44 = 2;
                        if (uVar32 == 1) goto LAB_1002f3bdc;
                      }
                      if (((((uVar32 >> 1 & 1) != 0) &&
                           (uVar44 = uVar44 << 2, (uVar32 & 0xfffffffe) == 2)) ||
                          (((uVar32 >> 2 & 1) != 0 &&
                           (uVar44 = uVar44 << 4, (uVar32 & 0xfffffffc) == 4)))) ||
                         (((uVar32 >> 3 & 1) != 0 &&
                          (uVar44 = uVar44 << 8, (uVar32 & 0xfffffff8) == 8)))) goto LAB_1002f3bdc;
                      if (((uVar32 >> 4 & 1) != 0) && ((uVar32 & 0xfffffff0) == 0x10)) {
                        uVar44 = uVar44 << 0x10;
                        goto LAB_1002f3bdc;
                      }
                      goto LAB_1002f3e34;
                    }
LAB_1002f3bdc:
                    dVar53 = (double)NEON_ucvtf(*in_stack_00000030);
                    dVar47 = (double)NEON_ucvtf((ulong)*(uint *)(in_stack_00000030 + 1));
                    dVar47 = (dVar47 / 1000000000.0 + dVar53) * (double)uVar44;
                    uVar44 = (uint)((ulong)dVar47 >> 0x34) & 0x7ff;
                    if (uVar44 < 0x3e0) {
                      uVar42 = 0;
                      uVar32 = 0;
LAB_1002f3e14:
                      bVar27 = in_stack_000001c0 < uVar32;
                      if (in_stack_000001b8 != uVar42) {
                        bVar27 = in_stack_000001b8 < uVar42;
                      }
                      if (!bVar27) {
                        uVar40 = uVar42;
                        uVar41 = uVar32;
                      }
                    }
                    else {
                      uVar42 = (ulong)dVar47 & 0xfffffffffffff | 0x10000000000000;
                      if (uVar44 < 0x3ff) {
                        uVar44 = uVar44 - 0x3d3;
                        uVar45 = uVar42 << ((ulong)uVar44 & 0x3f);
                        bVar27 = (uVar44 & 0x40) == 0;
                        uVar43 = uVar45;
                        if (bVar27) {
                          uVar43 = (uVar42 >> 1) >> ((ulong)~uVar44 & 0x3f);
                        }
                        uVar42 = 0;
                        if (bVar27) {
                          uVar42 = uVar45;
                        }
                        auVar52._8_8_ = 0;
                        auVar52._0_8_ = uVar42;
                        uVar43 = SUB168(auVar52 * ZEXT816(1000000000),8) + uVar43 * 1000000000;
                        uVar32 = (uint)(uVar43 >> 0x20);
                        uVar44 = 0;
                        if ((uVar43 & 0x80000000) != 0) {
                          uVar44 = (uint)(uVar42 * 1000000000 != 0 ||
                                         (uVar43 & 0xffffffff) != 0x80000000) | uVar32 & 1;
                        }
                        uVar44 = uVar44 + uVar32;
                        uVar42 = (ulong)(uVar44 == unaff_w28);
                        uVar32 = 0;
                        if (uVar44 != unaff_w28) {
                          uVar32 = uVar44;
                        }
                        goto LAB_1002f3e14;
                      }
                      if (uVar44 < 0x433) {
                        uVar42 = uVar42 >> ((ulong)(0x433 - uVar44) & 0x3f);
                        uVar43 = (long)dVar47 << ((ulong)(uVar44 - 0x3ff) & 0x3f) & 0xfffffffffffff;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = uVar43;
                        uVar43 = uVar43 * 1000000000;
                        uVar32 = (uint)(uVar43 >> 0x34);
                        uVar44 = 0;
                        if ((uVar43 & 0x8000000000000) != 0) {
                          uVar44 = (uint)((uVar43 & 0xffffffffffe00) != 0x8000000000000) |
                                   uVar32 & 1;
                        }
                        uVar44 = uVar44 + (uVar32 | (uint)(SUB168(auVar11 * ZEXT816(1000000000),8)
                                                          << 0xc));
                        if (uVar44 == unaff_w28) {
                          uVar42 = uVar42 + 1;
                        }
                        uVar32 = 0;
                        if (uVar44 != unaff_w28) {
                          uVar32 = uVar44;
                        }
                        goto LAB_1002f3e14;
                      }
                      if (uVar44 < 0x43f) {
                        uVar42 = uVar42 << ((ulong)(uVar44 - 0x433) & 0x3f);
                        uVar32 = 0;
                        goto LAB_1002f3e14;
                      }
                      in_stack_000001c8._7_1_ = 1;
                      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                        bVar30 = bRam000000010b625ca0;
                        if (1 < bRam000000010b625ca0 - 1) {
                          if (bRam000000010b625ca0 != 0) {
                            bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                               (0x10b625c90);
                            if (bVar30 != 0) goto LAB_1002f426c;
                          }
                          goto LAB_1002f446c;
                        }
LAB_1002f426c:
                        iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                           (lRam000000010b625c90,bVar30);
                        lVar28 = lRam000000010b625c90;
                        if (iVar31 == 0) goto LAB_1002f446c;
                        in_stack_00000110 = (long *)(lRam000000010b625c90 + 0x30);
                        *(ulong **)(unaff_x29 + -0xe0) = &stack0x000001b8;
                        *(code **)(unaff_x29 + -0xd8) =
                             __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                        ;
                        *(long *)(unaff_x29 + -0xd0) = (long)&stack0x000001c8 + 7;
                        *(undefined **)(unaff_x29 + -200) =
                             &
                             __ZN72__LT_core__time__TryFromFloatSecsError_u20_as_u20_core__fmt__Display_GT_3fmt17h78eb458d1049d120E
                        ;
                        *(char **)(unaff_x29 + -0xf0) =
                             s_falling_back_to___as__Duration__c_108abb0cb;
                        *(long *)(unaff_x29 + -0xe8) = unaff_x29 + -0xe0;
                        *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
                        *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b1f8a98;
                        _uStack0000000000000100 = (code *)(unaff_x29 + -0x100);
                        in_stack_000000f8 = (long *)0x1;
                        in_stack_00000108 = (long *)0x1;
                        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                  (lVar28,&stack0x000000f8);
                        lVar28 = lRam000000010b625c90;
                        uVar40 = in_stack_000001b8;
                        uVar41 = in_stack_000001c0;
                        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                          in_stack_000000e0 = *(code **)(lRam000000010b625c90 + 0x20);
                          in_stack_000000e8 = *(long *)(lRam000000010b625c90 + 0x28);
                          in_stack_000000d8 = (char *)0x2;
                          plVar34 = plRam000000010b634c20;
                          if (lRam000000010b66fd20 != 2) {
                            plVar34 = (long *)&UNK_10b3c24c8;
                          }
                          plVar38 = plRam000000010b634c18;
                          if (lRam000000010b66fd20 != 2) {
                            plVar38 = (long *)&UNK_109adfc03;
                          }
                          iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000d8);
                          uVar40 = in_stack_000001b8;
                          uVar41 = in_stack_000001c0;
                          if (iVar31 == 0) goto LAB_1002f3e34;
                          goto LAB_1002f4554;
                        }
                      }
                      else {
LAB_1002f446c:
                        lVar28 = lRam000000010b625c90;
                        uVar40 = in_stack_000001b8;
                        uVar41 = in_stack_000001c0;
                        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                          in_stack_000000e0 = *(code **)(lRam000000010b625c90 + 0x20);
                          in_stack_000000e8 = *(long *)(lRam000000010b625c90 + 0x28);
                          in_stack_000000d8 = (char *)0x2;
                          plVar34 = plRam000000010b634c20;
                          if (lRam000000010b66fd20 != 2) {
                            plVar34 = (long *)&UNK_10b3c24c8;
                          }
                          plVar38 = plRam000000010b634c18;
                          if (lRam000000010b66fd20 != 2) {
                            plVar38 = (long *)&UNK_109adfc03;
                          }
                          iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000d8);
                          uVar40 = in_stack_000001b8;
                          uVar41 = in_stack_000001c0;
                          if (iVar31 != 0) {
                            in_stack_00000110 = (long *)(lRam000000010b625c90 + 0x30);
                            *(ulong **)(unaff_x29 + -0xe0) = &stack0x000001b8;
                            *(code **)(unaff_x29 + -0xd8) =
                                 __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                            ;
                            *(long *)(unaff_x29 + -0xd0) = (long)&stack0x000001c8 + 7;
                            *(undefined **)(unaff_x29 + -200) =
                                 &
                                 __ZN72__LT_core__time__TryFromFloatSecsError_u20_as_u20_core__fmt__Display_GT_3fmt17h78eb458d1049d120E
                            ;
                            *(char **)(unaff_x29 + -0xf0) =
                                 s_falling_back_to___as__Duration__c_108abb0cb;
                            *(long *)(unaff_x29 + -0xe8) = unaff_x29 + -0xe0;
                            *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
                            *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b1f8a98;
                            _uStack0000000000000100 = (code *)(unaff_x29 + -0x100);
                            in_stack_000000f8 = (long *)0x1;
                            in_stack_00000108 = (long *)0x1;
LAB_1002f4554:
                            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                      (lVar28,plVar38,plVar34,&stack0x000000d8,&stack0x000000f8);
                            uVar40 = in_stack_000001b8;
                            uVar41 = in_stack_000001c0;
                          }
                        }
                      }
                    }
LAB_1002f3e34:
                    auVar19._8_4_ = in_stack_00000180;
                    auVar19._0_8_ = in_stack_00000178;
                    auVar18._8_4_ = in_stack_00000180;
                    auVar18._0_8_ = in_stack_00000178;
                    auVar17._8_4_ = in_stack_00000180;
                    auVar17._0_8_ = in_stack_00000178;
                    auVar16._8_4_ = in_stack_00000180;
                    auVar16._0_8_ = in_stack_00000178;
                    auVar14._8_4_ = in_stack_00000180;
                    auVar14._0_8_ = in_stack_00000178;
                    dVar48 = dVar48 * ((double)uVar41 / 1000000000.0 + (double)uVar40);
                    if (dVar48 < 0.0) {
                      uVar37 = 0;
                      goto LAB_1002f4760;
                    }
                    uVar44 = (uint)((ulong)dVar48 >> 0x34) & 0x7ff;
                    if (uVar44 < 0x3e0) {
                      _in_stack_00000178 = auVar14;
                      auVar20 = ZEXT812(0);
                    }
                    else {
                      uVar40 = (ulong)dVar48 & 0xfffffffffffff | 0x10000000000000;
                      if (uVar44 < 0x3ff) {
                        uVar44 = uVar44 - 0x3d3;
                        uVar43 = uVar40 << ((ulong)uVar44 & 0x3f);
                        bVar27 = (uVar44 & 0x40) == 0;
                        uVar42 = uVar43;
                        if (bVar27) {
                          uVar42 = (uVar40 >> 1) >> ((ulong)~uVar44 & 0x3f);
                        }
                        uVar40 = 0;
                        if (bVar27) {
                          uVar40 = uVar43;
                        }
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar40;
                        uVar42 = SUB168(auVar12 * ZEXT816(1000000000),8) + uVar42 * 1000000000;
                        uVar32 = (uint)(uVar42 >> 0x20);
                        uVar44 = 0;
                        if ((uVar42 & 0x80000000) != 0) {
                          uVar44 = (uint)(uVar40 * 1000000000 != 0 ||
                                         (uVar42 & 0xffffffff) != 0x80000000) | uVar32 & 1;
                        }
                        uVar44 = uVar44 + uVar32;
                        uVar40 = CONCAT71(0,uVar44 == unaff_w28);
                        auVar24._8_4_ = uVar44;
                        auVar24._0_8_ = uVar40;
                        auVar20._8_4_ = 0;
                        auVar20._0_8_ = uVar40;
                        _in_stack_00000178 = auVar18;
                        if (uVar44 != unaff_w28) {
                          _in_stack_00000178 = auVar19;
                          auVar20 = auVar24;
                        }
                      }
                      else if (uVar44 < 0x433) {
                        uVar40 = uVar40 >> ((ulong)(0x433 - uVar44) & 0x3f);
                        uVar42 = (long)dVar48 << ((ulong)(uVar44 - 0x3ff) & 0x3f) & 0xfffffffffffff;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = uVar42;
                        uVar42 = uVar42 * 1000000000;
                        uVar32 = (uint)(uVar42 >> 0x34);
                        uVar44 = 0;
                        if ((uVar42 & 0x8000000000000) != 0) {
                          uVar44 = (uint)((uVar42 & 0xffffffffffe00) != 0x8000000000000) |
                                   uVar32 & 1;
                        }
                        uVar44 = uVar44 + (uVar32 | (uint)(SUB168(auVar13 * ZEXT816(1000000000),8)
                                                          << 0xc));
                        if (uVar44 == unaff_w28) {
                          uVar40 = uVar40 + 1;
                        }
                        auVar23._8_4_ = uVar44;
                        auVar23._0_8_ = uVar40;
                        auVar20._8_4_ = 0;
                        auVar20._0_8_ = uVar40;
                        _in_stack_00000178 = auVar16;
                        if (uVar44 != unaff_w28) {
                          _in_stack_00000178 = auVar17;
                          auVar20 = auVar23;
                        }
                      }
                      else {
                        if (0x43e < uVar44) {
                          do {
                            uVar37 = 1;
LAB_1002f4760:
                            in_stack_000000f8 = (long *)CONCAT71(in_stack_000000f8._1_7_,uVar37);
                            *(long ***)(unaff_x29 + -0xe0) = &stack0x000000f8;
                            *(undefined **)(unaff_x29 + -0xd8) =
                                 &
                                 __ZN72__LT_core__time__TryFromFloatSecsError_u20_as_u20_core__fmt__Display_GT_3fmt17h78eb458d1049d120E
                            ;
                            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                      (s__108b1bd74,unaff_x29 + -0xe0,&UNK_10b1ff5f8);
                          } while( true );
                        }
                        auVar20._8_4_ = 0;
                        auVar20._0_8_ = uVar40 << ((ulong)(uVar44 - 0x433) & 0x3f);
                      }
                    }
                  }
                  else {
                    in_stack_00000150 = in_stack_00000030[2];
                    bVar27 = *(uint *)(in_stack_00000030 + 3) < in_stack_00000048;
                    if (in_stack_00000150 != in_stack_00000040) {
                      bVar27 = in_stack_00000150 < in_stack_00000040;
                    }
                    in_stack_00000158 = *(uint *)(in_stack_00000030 + 3);
                    if (!bVar27) {
                      in_stack_00000150 = in_stack_00000040;
                      in_stack_00000158 = in_stack_00000048;
                    }
                    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                      bVar30 = bRam000000010b625c70;
                      if (1 < bRam000000010b625c70 - 1) {
                        if (bRam000000010b625c70 != 0) {
                          bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                             (0x10b625c60);
                          if (bVar30 != 0) goto LAB_1002f3768;
                        }
                        goto LAB_1002f3ca8;
                      }
LAB_1002f3768:
                      iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (lRam000000010b625c60,bVar30);
                      lVar28 = lRam000000010b625c60;
                      if (iVar31 == 0) goto LAB_1002f3ca8;
                      lVar1 = lRam000000010b625c60 + 0x30;
                      in_stack_000000d8 = (char *)&stack0x00000150;
                      in_stack_000000e0 =
                           __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                      ;
                      *(char **)(unaff_x29 + -0xf0) = s__explicit_request_from_server_to_108abb05a;
                      *(char ***)(unaff_x29 + -0xe8) = &stack0x000000d8;
                      *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
                      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b1f8a98;
                      *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                      *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x100;
                      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                      *(long *)(unaff_x29 + -200) = lVar1;
                      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                (lVar28,unaff_x29 + -0xe0);
                      lVar28 = lRam000000010b625c60;
                      auVar21._8_4_ = in_stack_00000158;
                      auVar21._0_8_ = in_stack_00000150;
                      auVar20._8_4_ = in_stack_00000158;
                      auVar20._0_8_ = in_stack_00000150;
                      auVar15._8_4_ = in_stack_00000180;
                      auVar15._0_8_ = in_stack_00000178;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (_in_stack_00000178 = auVar15, auVar20 = auVar21,
                         3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        _uStack0000000000000100 = *(code **)(lRam000000010b625c60 + 0x20);
                        in_stack_00000108 = *(long **)(lRam000000010b625c60 + 0x28);
                        in_stack_000000f8 = (long *)0x4;
                        plVar34 = plRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          plVar34 = (long *)&UNK_10b3c24c8;
                        }
                        plVar38 = plRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          plVar38 = (long *)&UNK_109adfc03;
                        }
                        iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000f8);
                        auVar20._8_4_ = in_stack_00000158;
                        auVar20._0_8_ = in_stack_00000150;
                        if (iVar31 == 0) goto LAB_1002f4070;
                        puVar36 = &stack0x000000f8;
                        goto LAB_1002f3d7c;
                      }
                    }
                    else {
LAB_1002f3ca8:
                      lVar28 = lRam000000010b625c60;
                      auVar22._8_4_ = in_stack_00000158;
                      auVar22._0_8_ = in_stack_00000150;
                      auVar20._8_4_ = in_stack_00000158;
                      auVar20._0_8_ = in_stack_00000150;
                      auVar54._8_4_ = in_stack_00000180;
                      auVar54._0_8_ = in_stack_00000178;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (_in_stack_00000178 = auVar54, auVar20 = auVar22,
                         3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        in_stack_00000168 = *(undefined8 **)(lRam000000010b625c60 + 0x20);
                        in_stack_00000170 = *(undefined8 *)(lRam000000010b625c60 + 0x28);
                        in_stack_00000160 = (char *)0x4;
                        plVar34 = plRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          plVar34 = (long *)&UNK_10b3c24c8;
                        }
                        plVar38 = plRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          plVar38 = (long *)&UNK_109adfc03;
                        }
                        iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x00000160);
                        auVar20._8_4_ = in_stack_00000158;
                        auVar20._0_8_ = in_stack_00000150;
                        if (iVar31 != 0) {
                          lVar1 = lRam000000010b625c60 + 0x30;
                          in_stack_000000f8 = (long *)&stack0x00000150;
                          _uStack0000000000000100 =
                               __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                          ;
                          in_stack_000000e0 = (code *)&stack0x000000f8;
                          in_stack_000000d8 = s__explicit_request_from_server_to_108abb05a;
                          *(char ***)(unaff_x29 + -0xf0) = &stack0x000000d8;
                          *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
                          *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xf0;
                          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                          *(long *)(unaff_x29 + -200) = lVar1;
                          puVar36 = &stack0x00000160;
LAB_1002f3d7c:
                          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                    (lVar28,plVar38,plVar34,puVar36,unaff_x29 + -0xe0);
                          auVar20._8_4_ = in_stack_00000158;
                          auVar20._0_8_ = in_stack_00000150;
                        }
                      }
                    }
                  }
LAB_1002f4070:
                  _in_stack_000000b0 = auVar20;
                  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                    bVar30 = bRam000000010b6259d0;
                    if (1 < bRam000000010b6259d0 - 1) {
                      if (bRam000000010b6259d0 != 0) {
                        bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (0x10b6259c0);
                        if (bVar30 != 0) goto LAB_1002f40a0;
                      }
                      goto LAB_1002f4128;
                    }
LAB_1002f40a0:
                    iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (lRam000000010b6259c0,bVar30);
                    if (iVar31 == 0) goto LAB_1002f4128;
                    in_stack_00000110 = (long *)(lRam000000010b6259c0 + 0x30);
                    *(long *)(unaff_x29 + -0xe0) = (long)&stack0x00000058 + 4;
                    *(undefined **)(unaff_x29 + -0xd8) =
                         &
                         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                    ;
                    *(ulong **)(unaff_x29 + -0xd0) = &stack0x00000040;
                    *(undefined **)(unaff_x29 + -200) = &DAT_1002e9968;
                    *(undefined8 **)(unaff_x29 + -0xc0) = &stack0x000000b0;
                    *(code **)(unaff_x29 + -0xb8) =
                         __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                    ;
                    in_stack_000000e0 = (code *)(unaff_x29 + -0xe0);
                    in_stack_000000d8 = s_attempt___failed_with___retrying_108abac1c;
                    _uStack00000000000001a0 = &stack0x000000d8;
                    puStack00000000000001a8 = (undefined8 *)&UNK_10b1f8a98;
                    _uStack0000000000000100 = (code *)&stack0x000001a0;
                    in_stack_000000f8 = (long *)0x1;
                    in_stack_00000108 = (long *)0x1;
                    FUN_1002f49c8(&stack0x000000f8);
                  }
                  else {
LAB_1002f4128:
                    lVar28 = lRam000000010b6259c0;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      in_stack_000000c8 = *(undefined8 *)(lRam000000010b6259c0 + 0x20);
                      in_stack_000000d0 = *(undefined8 *)(lRam000000010b6259c0 + 0x28);
                      in_stack_000000c0 = 4;
                      plVar34 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar34 = (long *)&UNK_10b3c24c8;
                      }
                      plVar38 = plRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        plVar38 = (long *)&UNK_109adfc03;
                      }
                      iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000c0);
                      if (iVar31 != 0) {
                        in_stack_00000110 = (long *)(lRam000000010b6259c0 + 0x30);
                        *(long *)(unaff_x29 + -0xe0) = (long)&stack0x00000058 + 4;
                        *(undefined **)(unaff_x29 + -0xd8) =
                             &
                             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                        ;
                        *(ulong **)(unaff_x29 + -0xd0) = &stack0x00000040;
                        *(undefined **)(unaff_x29 + -200) = &DAT_1002e9968;
                        *(undefined8 **)(unaff_x29 + -0xc0) = &stack0x000000b0;
                        *(code **)(unaff_x29 + -0xb8) =
                             __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE
                        ;
                        in_stack_000000e0 = (code *)(unaff_x29 + -0xe0);
                        in_stack_000000d8 = s_attempt___failed_with___retrying_108abac1c;
                        _uStack00000000000001a0 = &stack0x000000d8;
                        puStack00000000000001a8 = (undefined8 *)&UNK_10b1f8a98;
                        _uStack0000000000000100 = (code *)&stack0x000001a0;
                        in_stack_000000f8 = (long *)0x1;
                        in_stack_00000108 = (long *)0x1;
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar28,plVar38,plVar34,&stack0x000000c0,&stack0x000000f8);
                      }
                    }
                  }
                  *(undefined1 (*) [12])(unaff_x27 + 1) = auVar20;
                  goto LAB_1002f3a6c;
                }
                if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                  bVar30 = bRam000000010b6259e8;
                  if (bRam000000010b6259e8 - 1 < 2) {
LAB_1002f321c:
                    iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (lRam000000010b6259d8,bVar30);
                    lVar28 = lRam000000010b6259d8;
                    if (iVar31 != 0) {
                      in_stack_00000110 = (long *)(lRam000000010b6259d8 + 0x30);
                      uStack00000000000001a0 = 0x8c7a6f2;
                      uStack00000000000001a4 = 1;
                      puStack00000000000001a8 = (undefined8 *)0x57;
                      puStack0000000000000188 =
                           (undefined8 *)
                           CONCAT44(puStack0000000000000188._4_4_,
                                    *(undefined4 *)(in_stack_00000030 + 4));
                      *(undefined4 **)(unaff_x29 + -0xe0) = &stack0x000001a0;
                      *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f8a98;
                      *(long *)(unaff_x29 + -0xd0) = (long)&stack0x00000058 + 4;
                      *(undefined **)(unaff_x29 + -200) = &UNK_10b1f9660;
                      *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000188;
                      *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b1f9660;
                      _uStack0000000000000100 = (code *)(unaff_x29 + -0xe0);
                      in_stack_000000f8 = (long *)0x1;
                      in_stack_00000108 = (long *)0x3;
                      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                (lVar28,&stack0x000000f8);
                      lVar28 = lRam000000010b6259d8;
                      goto joined_r0x0001002f35e4;
                    }
                  }
                  else if (bRam000000010b6259e8 != 0) {
                    bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (0x10b6259d8);
                    if (bVar30 != 0) goto LAB_1002f321c;
                  }
                }
                lVar28 = lRam000000010b6259d8;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00000080 = *(undefined8 *)(lRam000000010b6259d8 + 0x20);
                  in_stack_00000088 = *(undefined8 *)(lRam000000010b6259d8 + 0x28);
                  in_stack_00000078 = 4;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  plVar38 = plRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    plVar38 = (long *)&UNK_109adfc03;
                  }
                  iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x00000078);
                  lVar1 = lRam000000010b6259d8;
                  if (iVar31 != 0) {
                    in_stack_000000d8 = &UNK_108c7a6f2;
                    in_stack_000000e0 = (code *)0x57;
                    uStack00000000000001a0 = *(undefined4 *)(in_stack_00000030 + 4);
                    *(char ***)(unaff_x29 + -0xe0) = &stack0x000000d8;
                    *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f8a98;
                    *(long *)(unaff_x29 + -0xd0) = (long)&stack0x00000058 + 4;
                    *(undefined **)(unaff_x29 + -200) = &UNK_10b1f9660;
                    *(undefined4 **)(unaff_x29 + -0xc0) = &stack0x000001a0;
                    *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b1f9660;
                    puVar36 = &stack0x00000078;
LAB_1002f36f4:
                    in_stack_00000110 = (long *)(lVar1 + 0x30);
                    _uStack0000000000000100 = (code *)(unaff_x29 + -0xe0);
                    in_stack_00000108 = (long *)0x3;
                    in_stack_000000f8 = (long *)0x1;
LAB_1002f394c:
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar28,plVar38,plVar34,puVar36,&stack0x000000f8);
                  }
                }
              }
              else {
                if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                  bVar30 = bRam000000010b625a00;
                  if (bRam000000010b625a00 - 1 < 2) {
LAB_1002f3158:
                    iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (lRam000000010b6259f0,bVar30);
                    lVar28 = lRam000000010b6259f0;
                    if (iVar31 != 0) {
                      in_stack_00000110 = (long *)(lRam000000010b6259f0 + 0x30);
                      *(long *)(unaff_x29 + -0xe0) = (long)&stack0x00000058 + 4;
                      *(undefined **)(unaff_x29 + -0xd8) =
                           &
                           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                      ;
                      *(ulong **)(unaff_x29 + -0xd0) = &stack0x00000040;
                      *(undefined **)(unaff_x29 + -200) = &DAT_1002e9968;
                      puStack00000000000001a8 = (undefined8 *)(unaff_x29 + -0xe0);
                      uStack00000000000001a0 = 0x8abac4a;
                      uStack00000000000001a4 = 1;
                      puStack0000000000000188 = (undefined8 *)&stack0x000001a0;
                      puStack0000000000000190 = &UNK_10b1f8a98;
                      _uStack0000000000000100 = (code *)&stack0x00000188;
                      in_stack_000000f8 = (long *)0x1;
                      in_stack_00000108 = (long *)0x1;
                      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                (lVar28,&stack0x000000f8);
                      lVar28 = lRam000000010b6259f0;
joined_r0x0001002f35e4:
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        in_stack_000000e0 = *(code **)(lVar28 + 0x20);
                        in_stack_000000e8 = *(long *)(lVar28 + 0x28);
                        in_stack_000000d8 = (char *)0x4;
                        plVar34 = plRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          plVar34 = (long *)&UNK_10b3c24c8;
                        }
                        plVar38 = plRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          plVar38 = (long *)&UNK_109adfc03;
                        }
                        iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000d8);
                        if (iVar31 != 0) {
                          puVar36 = &stack0x000000d8;
                          goto LAB_1002f394c;
                        }
                      }
                      goto LAB_1002f3a64;
                    }
                  }
                  else if (bRam000000010b625a00 != 0) {
                    bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (0x10b6259f0);
                    if (bVar30 != 0) goto LAB_1002f3158;
                  }
                }
                lVar28 = lRam000000010b6259f0;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00000068 = *(undefined8 *)(lRam000000010b6259f0 + 0x20);
                  in_stack_00000070 = *(undefined8 *)(lRam000000010b6259f0 + 0x28);
                  in_stack_00000060 = 4;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  plVar38 = plRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    plVar38 = (long *)&UNK_109adfc03;
                  }
                  iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x00000060);
                  if (iVar31 != 0) {
                    in_stack_000000f0 = (long *)(lRam000000010b6259f0 + 0x30);
                    in_stack_000000f8 = (long *)((long)&stack0x00000058 + 4);
                    _uStack0000000000000100 =
                         (code *)&
                                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                    ;
                    in_stack_00000108 = (long *)&stack0x00000040;
                    in_stack_00000110 = (long *)&DAT_1002e9968;
                    in_stack_00000168 = &stack0x000000f8;
                    in_stack_00000160 = s_attempt___classified_as___not_re_108abac4a;
                    *(char ***)(unaff_x29 + -0xf0) = &stack0x00000160;
                    *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
                    in_stack_000000e0 = (code *)(unaff_x29 + -0xf0);
                    in_stack_000000d8 = (char *)0x1;
                    in_stack_000000e8 = 1;
                    lVar1 = *(long *)(lVar28 + 0x60);
                    uVar2 = *(undefined8 *)(lVar28 + 0x68);
                    lVar8 = *(long *)(lVar28 + 0x50);
                    uVar10 = *(undefined8 *)(lVar28 + 0x58);
                    uVar35 = 1;
                    if (lVar8 == 0) {
                      uVar35 = 2;
                    }
                    uVar6 = *(undefined4 *)(lVar28 + 8);
                    uVar7 = *(undefined4 *)(lVar28 + 0xc);
                    puStack0000000000000188 = &stack0x000000d8;
                    puStack0000000000000190 = (undefined *)CONCAT71(puStack0000000000000190._1_7_,1)
                    ;
                    _uStack00000000000001a0 = &stack0x00000188;
                    puStack00000000000001a8 = (undefined8 *)&DAT_1061c2098;
                    uVar3 = 1;
                    if (lVar1 == 0) {
                      uVar3 = 2;
                    }
                    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000068;
                    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000060;
                    *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000070;
                    *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
                    *(undefined4 **)(unaff_x29 + -0x88) = &stack0x000001a0;
                    *(undefined8 *)(unaff_x29 + -0xe0) = uVar35;
                    *(long *)(unaff_x29 + -0xd8) = lVar8;
                    *(undefined8 *)(unaff_x29 + -0xd0) = uVar10;
                    *(undefined8 *)(unaff_x29 + -200) = uVar3;
                    *(long *)(unaff_x29 + -0xc0) = lVar1;
                    *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
                    *(undefined4 *)(unaff_x29 + -0x98) = uVar6;
                    *(undefined4 *)(unaff_x29 + -0x94) = uVar7;
                    (*(code *)plVar34[4])(plVar38,unaff_x29 + -0xe0);
                  }
                }
              }
LAB_1002f3a64:
              *(uint *)(unaff_x27 + 2) = unaff_w28 + 1;
LAB_1002f3a6c:
              *unaff_x27 = 0.0;
              return;
            }
            FUN_107c05cac(&UNK_108c7a6b0,0x42,&UNK_10b1f9648);
            thunk_FUN_1087d74e8(in_stack_00000010);
            iVar31 = _pthread_mutex_lock();
            if (iVar31 != 0) {
              thunk_FUN_108a81ad4();
              goto LAB_1002f4608;
            }
            if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                0x7fffffffffffffff) == 0) {
              in_stack_00000020 = (long *)0x0;
              cVar29 = (char)unaff_x26[3];
            }
            else {
              uVar44 = FUN_107c05e34();
              in_stack_00000020 = (long *)((ulong)uVar44 ^ 1);
              cVar29 = (char)unaff_x26[3];
            }
            if (cVar29 != '\0') {
                    /* WARNING: Read-only address (ram,0x000108c78f50) is written */
              *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000010;
              *(char *)(unaff_x29 + -0xd8) = (char)in_stack_00000020;
              FUN_107c05cb4(&UNK_108c80274,0x2b,unaff_x29 + -0xe0,&UNK_10b1ff6e0,&UNK_10b1fe740);
              goto LAB_1002f4608;
            }
                    /* WARNING: Read-only address (ram,0x000108c78f50) is written */
            dVar48 = (double)(long)(unaff_d8 + unaff_d8) * 0.5;
            lVar28 = unaff_x26[0xb];
            unaff_x26[0xb] = lVar28 + 1U;
            if ((double)unaff_x26[10] < dVar48) {
              unaff_x26[0xb] = 0;
              unaff_x26[9] = (long)(((double)(lVar28 + 1U) / (dVar48 - (double)unaff_x26[10])) * 0.8
                                   + (double)unaff_x26[9] * 0.19999999999999996);
              unaff_x26[10] = (long)dVar48;
            }
            if (((ulong)plVar38 & 1) == 0) {
              dVar53 = (double)unaff_x26[0xc];
              dVar48 = (double)unaff_x26[0xd];
              auVar49._0_8_ = (dVar53 * 0.30000000000000004) / 0.4;
              auVar49._8_8_ = 0;
              dVar47 = (double)_pow(0x3fd5555555555555,auVar49,0x55555555);
              dVar47 = (unaff_d8 - dVar48) - dVar47;
              dVar53 = dVar53 + dVar47 * dVar47 * dVar47 * 0.4;
            }
            else {
              dVar53 = (double)unaff_x26[9];
              if ((*(byte *)(unaff_x26 + 0xe) & 1) == 0) {
                unaff_x26[0xc] = (long)dVar53;
                unaff_x26[0xd] = (long)unaff_d8;
                if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                  if (bRam000000010b625c28 - 1 < 2) {
LAB_1002f271c:
                    iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (lRam000000010b625c18);
                    lVar28 = lRam000000010b625c18;
                    if (iVar31 != 0) {
                      lVar1 = lRam000000010b625c18 + 0x30;
                      uStack00000000000001a0 = 0x8c7f683;
                      uStack00000000000001a4 = 1;
                      puStack00000000000001a8 = (undefined8 *)0x4b;
                      puStack0000000000000188 = (undefined8 *)&stack0x000001a0;
                      puStack0000000000000190 = &UNK_10b1f8a98;
                      *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                      *(undefined8 ***)(unaff_x29 + -0xd8) = &stack0x00000188;
                      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                      *(long *)(unaff_x29 + -200) = lVar1;
                      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                (lVar28,unaff_x29 + -0xe0);
                      lVar28 = lRam000000010b625c18;
                      _uStack00000000000001a0 =
                           (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (_uStack00000000000001a0 =
                               (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0)
                         , 3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        _uStack0000000000000100 = *(code **)(lRam000000010b625c18 + 0x20);
                        in_stack_00000108 = *(long **)(lRam000000010b625c18 + 0x28);
                        in_stack_000000f8 = (long *)0x4;
                        plVar34 = plRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          plVar34 = (long *)&UNK_10b3c24c8;
                        }
                        plVar38 = plRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          plVar38 = (long *)&UNK_109adfc03;
                        }
                        iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000f8);
                        if (iVar31 != 0) {
                          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                    (lVar28,plVar38,plVar34,&stack0x000000f8,unaff_x29 + -0xe0);
                        }
                      }
                      goto LAB_1002f28e8;
                    }
                  }
                  else if (bRam000000010b625c28 != 0) {
                    cVar29 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (0x10b625c18);
                    if (cVar29 != '\0') goto LAB_1002f271c;
                  }
                }
                lVar28 = lRam000000010b625c18;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_000000e0 = *(code **)(lRam000000010b625c18 + 0x20);
                  in_stack_000000e8 = *(long *)(lRam000000010b625c18 + 0x28);
                  in_stack_000000d8 = (char *)0x4;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  plVar38 = plRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    plVar38 = (long *)&UNK_109adfc03;
                  }
                  iVar31 = (*(code *)plVar34[3])(plVar38,&stack0x000000d8);
                  if (iVar31 != 0) {
                    lVar1 = lRam000000010b625c18 + 0x30;
                    in_stack_000000f8 = (long *)&UNK_108c7f683;
                    _uStack0000000000000100 = (code *)0x4b;
                    _uStack00000000000001a0 = &stack0x000000f8;
                    puStack00000000000001a8 = (undefined8 *)&UNK_10b1f8a98;
                    *(undefined8 *)(unaff_x29 + -0xe0) = 1;
                    *(undefined4 **)(unaff_x29 + -0xd8) = &stack0x000001a0;
                    *(undefined8 *)(unaff_x29 + -0xd0) = 1;
                    *(long *)(unaff_x29 + -200) = lVar1;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar28,plVar38,plVar34,&stack0x000000d8,unaff_x29 + -0xe0);
                  }
                }
              }
              else {
                dVar53 = (double)NEON_fminnm(dVar53,unaff_x26[6]);
                unaff_x26[0xc] = (long)dVar53;
                unaff_x26[0xd] = (long)unaff_d8;
              }
LAB_1002f28e8:
              dVar53 = dVar53 * 0.7;
              *(char *)(unaff_x26 + 0xe) = '\x01';
            }
            pdVar46 = (double *)(unaff_x26 + 9);
            dVar48 = *pdVar46;
            auVar50._8_8_ = 0;
            auVar50._0_8_ = unaff_d8;
            FUN_100304b84(auVar50,unaff_x26 + 4);
            auVar51._0_8_ = NEON_fminnm(dVar53,dVar48 + dVar48);
            auVar51._8_8_ = auVar51._0_8_;
            auVar52 = NEON_fmaxnm(auVar51,_UNK_108c78f50,8);
            plVar34 = unaff_x26 + 6;
            unaff_x26[7] = auVar52._8_8_;
            *plVar34 = auVar52._0_8_;
            plVar38 = unaff_x26 + 7;
            in_stack_00000018 = unaff_x27;
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
              if (1 < bRam000000010b625c40 - 1) {
                if (bRam000000010b625c40 != 0) {
LAB_1002f4624:
                  cVar29 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (0x10b625c30);
                  if (cVar29 != '\0') goto LAB_1002f2960;
                }
                goto LAB_1002f2a74;
              }
LAB_1002f2960:
              iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (plRam000000010b625c30);
              plVar39 = plRam000000010b625c30;
              if (iVar31 == 0) goto LAB_1002f2a74;
              in_stack_00000110 = plRam000000010b625c30 + 6;
              uStack00000000000001a0 = 0x8c7f737;
              uStack00000000000001a4 = 1;
              puStack00000000000001a8 = (undefined8 *)0x55;
              *(undefined4 **)(unaff_x29 + -0xe0) = &stack0x000001a0;
              *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f8a98;
              *(long **)(unaff_x29 + -0xd0) = plVar34;
              *(undefined **)(unaff_x29 + -200) = &UNK_10b1fe838;
              *(long **)(unaff_x29 + -0xc0) = plVar38;
              *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b1fe838;
              *(long **)(unaff_x29 + -0xb0) = unaff_x26 + 8;
              *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b1fe838;
              *(double **)(unaff_x29 + -0xa0) = pdVar46;
              *(undefined **)(unaff_x29 + -0x98) = &UNK_10b1fe838;
              _uStack0000000000000100 = (code *)(unaff_x29 + -0xe0);
              in_stack_000000f8 = (long *)0x1;
              in_stack_00000108 = (long *)0x5;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(plVar39,&stack0x000000f8);
              plVar39 = plRam000000010b625c30;
              _uStack00000000000001a0 =
                   (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (_uStack00000000000001a0 =
                       (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0),
                 3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_000000e0 = (code *)plRam000000010b625c30[4];
                in_stack_000000e8 = plRam000000010b625c30[5];
                in_stack_000000d8 = (char *)0x4;
                plVar34 = plRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  plVar34 = (long *)&UNK_10b3c24c8;
                }
                plVar4 = plRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  plVar4 = (long *)&UNK_109adfc03;
                }
                iVar31 = (*(code *)plVar34[3])(plVar4,&stack0x000000d8);
                plVar38 = plVar39;
                if (iVar31 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (plVar39,plVar4,plVar34,&stack0x000000d8,&stack0x000000f8);
                }
              }
            }
            else {
LAB_1002f2a74:
              plVar39 = plRam000000010b625c30;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puStack00000000000001a8 = (undefined8 *)plRam000000010b625c30[4];
                in_stack_000001b0 = plRam000000010b625c30[5];
                uStack00000000000001a0 = 4;
                uStack00000000000001a4 = 0;
                plVar4 = plRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  plVar4 = (long *)&UNK_10b3c24c8;
                }
                plVar5 = plRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  plVar5 = (long *)&UNK_109adfc03;
                }
                iVar31 = (*(code *)plVar4[3])(plVar5,&stack0x000001a0);
                _uStack00000000000001a0 =
                     (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
                if (iVar31 != 0) {
                  in_stack_000000f0 = plRam000000010b625c30 + 6;
                  *(undefined **)(unaff_x29 + -0xf0) = &UNK_108c7f737;
                  *(undefined8 *)(unaff_x29 + -0xe8) = 0x55;
                  in_stack_00000128 = unaff_x26 + 8;
                  in_stack_000000f8 = (long *)(unaff_x29 + -0xf0);
                  _uStack0000000000000100 = (code *)&UNK_10b1f8a98;
                  in_stack_00000110 = (long *)&UNK_10b1fe838;
                  in_stack_00000120 = &UNK_10b1fe838;
                  in_stack_00000130 = &UNK_10b1fe838;
                  in_stack_00000140 = &UNK_10b1fe838;
                  in_stack_000000e0 = (code *)&stack0x000000f8;
                  in_stack_000000d8 = (char *)0x1;
                  in_stack_000000e8 = 5;
                  lVar28 = plVar39[0xc];
                  lVar8 = plVar39[0xd];
                  lVar1 = plVar39[10];
                  lVar9 = plVar39[0xb];
                  uVar35 = 1;
                  if (lVar1 == 0) {
                    uVar35 = 2;
                  }
                  lVar25 = plVar39[1];
                  uVar6 = *(undefined4 *)((long)plVar39 + 0xc);
                  in_stack_00000160 = (char *)&stack0x000000d8;
                  in_stack_00000168 = (undefined8 *)CONCAT71(in_stack_00000168._1_7_,1);
                  puStack0000000000000188 = &stack0x00000160;
                  puStack0000000000000190 = &DAT_1061c2098;
                  uVar2 = 1;
                  if (lVar28 == 0) {
                    uVar2 = 2;
                  }
                  *(undefined8 **)(unaff_x29 + -0xa8) = puStack00000000000001a8;
                  *(ulong *)(unaff_x29 + -0xb0) =
                       CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
                  *(long *)(unaff_x29 + -0xa0) = in_stack_000001b0;
                  *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
                  *(undefined8 ***)(unaff_x29 + -0x88) = &stack0x00000188;
                  *(undefined8 *)(unaff_x29 + -0xe0) = uVar35;
                  *(long *)(unaff_x29 + -0xd8) = lVar1;
                  *(long *)(unaff_x29 + -0xd0) = lVar9;
                  *(undefined8 *)(unaff_x29 + -200) = uVar2;
                  *(long *)(unaff_x29 + -0xc0) = lVar28;
                  *(long *)(unaff_x29 + -0xb8) = lVar8;
                  *(int *)(unaff_x29 + -0x98) = (int)lVar25;
                  *(undefined4 *)(unaff_x29 + -0x94) = uVar6;
                  in_stack_00000108 = plVar34;
                  in_stack_00000118 = plVar38;
                  in_stack_00000138 = pdVar46;
                  (*(code *)plVar4[4])(plVar5,unaff_x29 + -0xe0);
                  _uStack00000000000001a0 =
                       (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
                }
              }
            }
            lVar28 = NEON_fminnm(unaff_x26[8],unaff_x26[7]);
            unaff_x26[8] = lVar28;
            unaff_w28 = 1000000000;
            uVar44 = 1000000000;
            if ((((ulong)in_stack_00000020 & 1) == 0) &&
               ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                0x7fffffffffffffff) != 0)) {
              uVar40 = FUN_107c05e34();
              if ((uVar40 & 1) == 0) {
                *(char *)(unaff_x26 + 3) = '\x01';
              }
            }
            _pthread_mutex_unlock(unaff_x26[2]);
            lVar28 = *unaff_x26;
            *unaff_x26 = lVar28 + -1;
            LORelease();
            if (lVar28 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7008b6a95001b270E(unaff_x29 + -0x100);
            }
            unaff_x27 = in_stack_00000018;
          } while (1 < *(ushort *)(unaff_x25 + 0x3e0) - 0xb);
          if (*unaff_x22 == 0) {
            thunk_FUN_1087d74e8();
            iVar31 = _pthread_mutex_lock();
            uVar35 = extraout_x1_06;
            if (iVar31 != 0) goto LAB_1002f4424;
LAB_1002f2c48:
            if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                0x7fffffffffffffff) != 0) goto LAB_1002f4428;
            unaff_x25 = (char *)0x0;
            cVar29 = (char)unaff_x22[1];
          }
          else {
            iVar31 = _pthread_mutex_lock();
            uVar35 = extraout_x1;
            if (iVar31 == 0) goto LAB_1002f2c48;
LAB_1002f4424:
            thunk_FUN_108a81ad4();
LAB_1002f4428:
            uVar32 = FUN_107c05e34();
            unaff_x25 = (char *)(ulong)(uVar32 ^ 1);
            cVar29 = (char)unaff_x22[1];
            uVar35 = extraout_x1_07;
          }
          if (cVar29 != '\0') {
                    /* WARNING: Read-only address (ram,0x000108c78f50) is written */
            *(long **)(unaff_x29 + -0xe0) = unaff_x22;
            *(char *)(unaff_x29 + -0xd8) = (char)unaff_x25;
            FUN_107c05cb4(&UNK_108c80274,0x2b,unaff_x29 + -0xe0,&UNK_10b1ff7a0,&UNK_10b1febe8);
LAB_1002f4608:
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x1002f460c);
            (*pcVar26)();
          }
                    /* WARNING: Read-only address (ram,0x000108c78f50) is written */
          plVar34 = (long *)unaff_x22[2];
          uVar32 = *(uint *)(unaff_x22 + 3);
          plVar38 = (long *)(ulong)uVar32;
          unaff_x22[2] = 0;
          if (plVar34 != (long *)0x0) {
            *(long **)(unaff_x29 + -0xe0) = plVar34;
            *(uint *)(unaff_x29 + -0xd8) = uVar32;
            plVar39 = plVar34;
            if (uVar32 != 0) {
              unaff_x26 = plVar34 + 2;
              if ((char)*unaff_x26 == '\0') {
                *(char *)unaff_x26 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (unaff_x26,uVar35,1000000000);
              }
              FUN_1060fa678(unaff_x26,plVar38,unaff_x26);
              plVar39 = *(long **)(unaff_x29 + -0xe0);
            }
            lVar28 = *plVar39;
            *plVar39 = lVar28 + -1;
            LORelease();
            if (lVar28 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x29 + -0xe0);
            }
          }
          if ((((ulong)unaff_x25 & 1) == 0) &&
             ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
              0x7fffffffffffffff) != 0)) {
            uVar40 = FUN_107c05e34();
            if ((uVar40 & 1) == 0) {
              *(undefined1 *)(unaff_x22 + 1) = 1;
            }
          }
          _pthread_mutex_unlock(*unaff_x22);
        } while ((plVar34 != (long *)0x0) ||
                ((ulong)unaff_x24[1] <= *(ulong *)(*unaff_x24 + 0x30) >> 1));
        unaff_x25 = (char *)(*unaff_x24 + 0x10);
        uVar40 = extraout_x1_00;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) {
LAB_1002f2d18:
          unaff_x19 = plRam000000010b625c00;
          uVar44 = unaff_w28;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            plVar34 = (long *)&
                              __ZN18aws_smithy_runtime6client12interceptors21Interceptors_LT_I_GT_26read_after_deserialization10__CALLSITE17h5fcc531f0e83a412E
            ;
            _uStack0000000000000100 = (code *)plRam000000010b625c00[4];
            in_stack_00000108 = (long *)plRam000000010b625c00[5];
            in_stack_000000f8 = (long *)0x5;
            in_stack_00000020 = plRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              in_stack_00000020 = (long *)&UNK_10b3c24c8;
            }
            unaff_x26 = plRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              unaff_x26 = (long *)&UNK_109adfc03;
            }
            iVar31 = (*(code *)in_stack_00000020[3])(unaff_x26,&stack0x000000f8);
            uVar40 = extraout_x1_01;
            plVar38 = unaff_x19;
            if (iVar31 != 0) {
              param_1 = plRam000000010b625c00 + 6;
              in_stack_000000d8 = "\x01";
              in_stack_000000e0 =
                   (code *)&
                           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              unaff_x20 = plVar34;
              goto code_r0x0001002f2dc0;
            }
          }
          goto LAB_1002f2f20;
        }
        uVar40 = (ulong)bRam000000010b625c10;
        if (1 < bRam000000010b625c10 - 1) {
          if (bRam000000010b625c10 != 0) {
            bVar30 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b625c00);
            uVar40 = (ulong)bVar30;
            if (bVar30 != 0) goto LAB_1002f2e20;
          }
          goto LAB_1002f2d18;
        }
LAB_1002f2e20:
        plVar38 = (long *)0x0;
        iVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (plRam000000010b625c00);
        plVar39 = plRam000000010b625c00;
        uVar40 = extraout_x1_03;
        if (iVar31 == 0) goto LAB_1002f2d18;
        plVar4 = plRam000000010b625c00 + 6;
        in_stack_000000d8 = "\x01";
        in_stack_000000e0 =
             (code *)&
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        puStack00000000000001a8 = &stack0x000000d8;
        uStack00000000000001a0 = 0x8abafb4;
        uStack00000000000001a4 = 1;
        puStack0000000000000188 = (undefined8 *)&stack0x000001a0;
        puStack0000000000000190 = &UNK_10b1f8a98;
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        *(undefined8 ***)(unaff_x29 + -0xd8) = &stack0x00000188;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long **)(unaff_x29 + -200) = plVar4;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(plVar39,unaff_x29 + -0xe0);
        unaff_x19 = plRam000000010b625c00;
        uVar40 = extraout_x1_04;
        _uStack00000000000001a0 =
             (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0);
      } while ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
              (_uStack00000000000001a0 =
                    (undefined8 *)CONCAT44(uStack00000000000001a4,uStack00000000000001a0),
              ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5));
      _uStack0000000000000100 = (code *)plRam000000010b625c00[4];
      in_stack_00000108 = (long *)plRam000000010b625c00[5];
      in_stack_000000f8 = (long *)0x5;
      plVar34 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar34 = (long *)&UNK_10b3c24c8;
      }
      unaff_x26 = plRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x26 = (long *)&UNK_109adfc03;
      }
      iVar31 = (*(code *)plVar34[3])(unaff_x26,&stack0x000000f8);
      uVar40 = extraout_x1_05;
      plVar38 = unaff_x19;
      unaff_x20 = plVar34;
    } while (iVar31 == 0);
  } while( true );
}

