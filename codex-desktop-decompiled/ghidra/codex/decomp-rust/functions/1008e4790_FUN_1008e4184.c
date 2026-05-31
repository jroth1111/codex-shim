
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008e4184(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  char *pcVar12;
  ulong *puVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar14;
  undefined1 uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x19;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined1 auVar21 [16];
  undefined1 *in_stack_00000070;
  long *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  long *plStack0000000000000118;
  undefined *puStack0000000000000120;
  undefined8 *in_stack_00000130;
  undefined1 *in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  unaff_x28[0x674] = (long)s__failed_to_register_skills_watch_108ac9daf;
  unaff_x28[0x675] = (long)&stack0x00006710;
  plStack0000000000000118 = (long *)&stack0x0000cda0;
  puStack0000000000000120 = &UNK_10b208fd0;
  *unaff_x28 = 1;
  unaff_x28[1] = (long)&stack0x00000118;
  unaff_x28[2] = 1;
  unaff_x28[3] = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  in_stack_00000148 = 0xffffffffffffffff;
  in_stack_00000150 = 0;
  in_stack_00000138 = (undefined1 *)0x8;
  in_stack_00000140 = 0;
  *in_stack_00000070 = 1;
  *(undefined1 *)(unaff_x19 + 0x1ea) = 1;
  *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c8) = 8;
  *(undefined8 *)(unaff_x19 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1d8) = 0xffffffffffffffff;
  FUN_100ce9b00();
  *(long *)(unaff_x19 + 0x1f8) = *(long *)(unaff_x19 + 0x120) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x288) = 0;
  FUN_1004f1ca4(&stack0x00009a00,unaff_x19 + 0x1f8);
  if (*unaff_x28 == -0x8000000000000000) {
    *unaff_x27 = 0x8000000000000001;
    uVar15 = 7;
    goto LAB_1008e4c28;
  }
  _memcpy(&stack0x00006710,&stack0x00009a00,0x198);
  if ((((*(char *)(unaff_x19 + 0x288) == '\x03') && (*(char *)(unaff_x19 + 0x280) == '\x03')) &&
      (*(char *)(unaff_x19 + 0x278) == '\x03')) &&
     ((*(char *)(unaff_x19 + 0x270) == '\x03' && (*(char *)(unaff_x19 + 0x228) == '\x04')))) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x230);
    if (*(long *)(unaff_x19 + 0x238) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x238) + 0x18))(*(undefined8 *)(unaff_x19 + 0x240));
    }
  }
  __ZN16codex_app_server18request_processors14thread_summary36thread_settings_from_config_snapshot17h084e402a378ad34fE
            (unaff_x19 + 0x270,&stack0x00006710);
  *(undefined1 *)(unaff_x19 + 0x1e9) = 1;
  FUN_100e20dec(&stack0x00006710);
  *(long *)(unaff_x19 + 0x1f8) = *(long *)(unaff_x19 + 0x128) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x268) = 0;
  auVar21 = FUN_100fd3e50(unaff_x19 + 0x1f8);
  uVar14 = auVar21._8_8_;
  pcVar12 = auVar21._0_8_;
  if (pcVar12 == (char *)0x0) {
    *unaff_x27 = 0x8000000000000001;
    uVar15 = 8;
    goto LAB_1008e4c28;
  }
  if (((*(char *)(unaff_x19 + 0x268) == '\x03') && (*(char *)(unaff_x19 + 0x260) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x218) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x220);
    uVar14 = extraout_x1;
    if (*(long *)(unaff_x19 + 0x228) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x228) + 0x18))(*(undefined8 *)(unaff_x19 + 0x230));
      uVar14 = extraout_x1_00;
    }
  }
  plVar18 = *(long **)(pcVar12 + 0x310);
  if (1 < (long)plVar18 + 1U) {
    lVar9 = *plVar18;
    do {
      if (lVar9 == 0) goto LAB_1008e437c;
      if (lVar9 < 0) {
        *unaff_x28 = (long)&UNK_10b269140;
        unaff_x28[1] = (long)&DAT_10192d9a4;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__108add0bf,&stack0x00009a00,&UNK_10b269168);
        goto LAB_1008e5004;
      }
      lVar10 = lVar9 + 1;
      bVar1 = *plVar18 != lVar9;
      lVar9 = *plVar18;
    } while (bVar1);
    *plVar18 = lVar10;
    *unaff_x28 = (long)plVar18;
    plVar16 = *(long **)(unaff_x19 + 0x120);
    lVar9 = *plVar18;
    *plVar18 = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(&stack0x00009a00);
      uVar14 = extraout_x1_01;
    }
    if (plVar18 != plVar16) goto LAB_1008e437c;
    if (*pcVar12 == '\0') {
      *pcVar12 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar12,uVar14,1000000000);
    }
    FUN_1060fa678(pcVar12,1,pcVar12);
    FUN_100e52e08(unaff_x19 + 0x270);
    *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
    FUN_100e05e38(unaff_x19 + 0x1c0);
    *(undefined1 *)(unaff_x19 + 0x1ea) = 0;
    lVar9 = *(long *)(unaff_x19 + 0x1b0);
    lVar10 = *(long *)(unaff_x19 + 0x1b8);
    if (lVar10 != 0) {
      puVar19 = (undefined8 *)(lVar9 + 0x20);
      do {
        if (puVar19[-4] != 0) {
          _free(puVar19[-3]);
        }
        if (puVar19[-1] != 0) {
          _free(*puVar19);
        }
        puVar19 = puVar19 + 6;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (*(long *)(unaff_x19 + 0x1a8) != 0) {
      _free(lVar9);
    }
    lVar9 = **(long **)(unaff_x19 + 0x1a0);
    **(long **)(unaff_x19 + 0x1a0) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(unaff_x19 + 0x1a0);
    }
    FUN_100e6a018(unaff_x19 + 0x140);
    *(undefined1 *)(unaff_x19 + 0x1eb) = 0;
    lVar9 = *(long *)(unaff_x19 + 0x138);
    if (lVar9 != 0) {
      LOAcquire();
      uVar20 = *(ulong *)(lVar9 + 0x30);
      *(ulong *)(lVar9 + 0x30) = uVar20 | 4;
      if ((uVar20 & 10) == 8) {
        (**(code **)(*(long *)(lVar9 + 0x10) + 0x10))(*(undefined8 *)(lVar9 + 0x18));
      }
      if (((uint)uVar20 >> 1 & 1) != 0) {
        *(undefined1 *)(lVar9 + 0x38) = 0;
      }
      plVar18 = *(long **)(unaff_x19 + 0x138);
      if (plVar18 != (long *)0x0) {
        lVar9 = *plVar18;
        *plVar18 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(unaff_x19 + 0x138);
        }
      }
    }
    *(undefined1 *)(unaff_x19 + 0x1ec) = 0;
    plVar18 = *(long **)(unaff_x19 + 0x130);
    if (plVar18 != (long *)0x0) {
      uVar20 = plVar18[6];
      do {
        uVar17 = uVar20;
        if (((uint)uVar17 >> 2 & 1) != 0) goto LAB_1008e46ec;
        uVar20 = plVar18[6];
      } while (uVar20 != uVar17);
      plVar18[6] = uVar17 | 2;
LAB_1008e46ec:
      if ((uVar17 & 5) == 1) {
        (**(code **)(plVar18[4] + 0x10))(plVar18[5]);
      }
      lVar9 = *plVar18;
      *plVar18 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(unaff_x19 + 0x130);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x1ed) = 0;
    lVar9 = **(long **)(unaff_x19 + 0x128);
    **(long **)(unaff_x19 + 0x128) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x128);
    }
    *(undefined1 *)(unaff_x19 + 0x1ee) = 0;
    lVar9 = **(long **)(unaff_x19 + 0x120);
    **(long **)(unaff_x19 + 0x120) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x120);
    }
    *(undefined1 *)(unaff_x19 + 0x1ef) = 0;
    func_0x000100e7cd18(unaff_x19 + 0x98);
LAB_1008e4c00:
    *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
    *unaff_x27 = 0x8000000000000000;
    unaff_x27[2] = in_stack_000000f8;
    unaff_x27[1] = in_stack_000000f0;
    unaff_x27[3] = 0x8000000000000005;
    unaff_x27[0xc] = 0xffffffffffff80a8;
    uVar15 = 1;
LAB_1008e4c28:
    *(undefined1 *)(unaff_x19 + 0x1e8) = uVar15;
    return;
  }
LAB_1008e437c:
  *(undefined1 *)(unaff_x19 + 0x1ed) = 0;
  *(undefined1 *)(unaff_x19 + 0x1ea) = 0;
  plVar18 = *(long **)(unaff_x19 + 0x1c0);
  *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
  auVar21 = __ZN16codex_app_server12thread_state11ThreadState12set_listener17h004c6e27154b3490E
                      (pcVar12 + 0x28,*(undefined8 *)(unaff_x19 + 0x130),unaff_x19 + 0x120,
                       &stack0x00006710,&stack0x00009a00);
  if (*pcVar12 == '\0') {
    *pcVar12 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar12,auVar21._8_8_,1000000000);
  }
  FUN_1060fa678(pcVar12,1,pcVar12);
  uVar4 = *(undefined8 *)(unaff_x19 + 0xd0);
  in_stack_000000c8 = *(long **)(unaff_x19 + 0xd8);
  in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0xf0);
  in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0xe8);
  in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0xf8);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x19 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
  lVar9 = *in_stack_000000c8;
  *in_stack_000000c8 = lVar9 + 1;
  if (lVar9 < 0) goto LAB_1008e5004;
  *(undefined2 *)(unaff_x19 + 0x1eb) = 0;
  *(undefined2 *)(unaff_x19 + 0x1ee) = 0;
  in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0x120);
  in_stack_000001e8 = *(undefined8 *)(unaff_x19 + 0x128);
  lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar9;
    lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0);
  in_stack_00000100 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  in_stack_00000130 = &stack0x00000100;
  in_stack_00000138 = &stack0x0001007f;
  in_stack_00000198 = *(undefined8 *)(unaff_x19 + 0x168);
  in_stack_00000190 = *(undefined8 *)(unaff_x19 + 0x160);
  in_stack_000001a8 = *(undefined8 *)(unaff_x19 + 0x178);
  in_stack_000001a0 = *(undefined8 *)(unaff_x19 + 0x170);
  in_stack_000001b8 = *(undefined8 *)(unaff_x19 + 0x188);
  in_stack_000001b0 = *(undefined8 *)(unaff_x19 + 0x180);
  in_stack_000001c8 = *(undefined8 *)(unaff_x19 + 0x198);
  in_stack_000001c0 = *(undefined8 *)(unaff_x19 + 400);
  in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0x148);
  in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0x140);
  in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0x158);
  in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0x150);
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
       ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
  in_stack_00000140 = uVar6;
  in_stack_00000148 = uVar3;
  in_stack_00000150 = uVar7;
  in_stack_00000158 = uVar14;
  in_stack_00000160 = uVar5;
  in_stack_00000168 = uVar2;
  in_stack_000001d0 = auVar21._0_8_;
  in_stack_000001e0 = uVar4;
  puVar13 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)puVar13[9] == '\x01') {
LAB_1008e4848:
    _memcpy(&stack0x00003420,&stack0x00000130,0x32e8);
    if (0x7ffffffffffffffe < *puVar13) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1008e5004;
    }
    *puVar13 = *puVar13 + 1;
    uVar20 = puVar13[1];
    _memcpy(&stack0x00006710,&stack0x00000130,0x32e8);
    if (uVar20 != 2) {
      lVar9 = *plVar18;
      if ((uVar20 & 1) == 0) {
        plVar18 = (long *)puVar13[2];
        lVar10 = *plVar18;
        *plVar18 = lVar10 + 1;
        if ((lVar10 < 0) ||
           ((plVar16 = (long *)plVar18[0x5e], plVar16 != (long *)0x0 &&
            (lVar10 = *plVar16, *plVar16 = lVar10 + 1, lVar10 < 0)))) goto LAB_1008e5004;
        _memcpy(&stack0x0000cda4,&stack0x00003430,0x32d8);
        *unaff_x28 = 0xcc;
        unaff_x28[1] = 0;
        unaff_x28[2] = (long)&UNK_10b23eac0;
        unaff_x28[3] = 0;
        unaff_x28[4] = (long)plVar18;
        unaff_x28[5] = lVar9;
        *(undefined4 *)(unaff_x28 + 6) = 0;
        _memcpy((ulong)&stack0x00009a00 | 0x34,&stack0x0000cda0,0x32dc);
        unaff_x28[0x662] = 0;
        unaff_x28[0x664] = 0;
        unaff_x28[0x663] = 0;
        plStack0000000000000118 = (long *)0x0;
        iVar11 = _posix_memalign(&stack0x00000118,0x80,0x3380);
        plVar16 = plStack0000000000000118;
        if ((iVar11 != 0) || (plStack0000000000000118 == (long *)0x0)) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x3380);
          goto LAB_1008e5004;
        }
        _memcpy(plStack0000000000000118,&stack0x00009a00,0x3380);
        lVar10 = FUN_1010e2658(plVar18 + 0x2d,plVar16,plVar16);
        *unaff_x28 = lVar9;
        if (plVar18[0x5c] != 0) {
          (**(code **)(plVar18[0x5d] + 0x28))
                    (plVar18[0x5c] + (*(long *)(plVar18[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&stack0x00009a00);
        }
        if (lVar10 != 0) {
          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                    (puVar13 + 2,lVar10);
        }
      }
      else {
        plVar18 = (long *)puVar13[2];
        lVar10 = *plVar18;
        *plVar18 = lVar10 + 1;
        if ((lVar10 < 0) ||
           ((plVar16 = (long *)plVar18[0x4a], plVar16 != (long *)0x0 &&
            (lVar10 = *plVar16, *plVar16 = lVar10 + 1, lVar10 < 0)))) goto LAB_1008e5004;
        _memcpy(&stack0x0000cda4,&stack0x00003430,0x32d8);
        *unaff_x28 = 0xcc;
        unaff_x28[1] = 0;
        unaff_x28[2] = (long)&UNK_10b23f100;
        unaff_x28[3] = 0;
        unaff_x28[4] = (long)plVar18;
        unaff_x28[5] = lVar9;
        *(undefined4 *)(unaff_x28 + 6) = 0;
        _memcpy((ulong)&stack0x00009a00 | 0x34,&stack0x0000cda0,0x32dc);
        unaff_x28[0x662] = 0;
        unaff_x28[0x664] = 0;
        unaff_x28[0x663] = 0;
        plStack0000000000000118 = (long *)0x0;
        iVar11 = _posix_memalign(&stack0x00000118,0x80,0x3380);
        plVar16 = plStack0000000000000118;
        if ((iVar11 != 0) || (plStack0000000000000118 == (long *)0x0)) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x3380);
          goto LAB_1008e5004;
        }
        _memcpy(plStack0000000000000118,&stack0x00009a00,0x3380);
        lVar10 = FUN_1010e2658(plVar18 + 0x11,plVar16,plVar16);
        *unaff_x28 = lVar9;
        if (plVar18[0x48] != 0) {
          (**(code **)(plVar18[0x49] + 0x28))
                    (plVar18[0x48] + (*(long *)(plVar18[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10,&stack0x00009a00);
        }
        if (lVar10 != 0) {
          FUN_10610fa38(plVar18 + 2,lVar10,0);
        }
      }
      *puVar13 = *puVar13 - 1;
      if (*plVar16 == 0xcc) {
        *plVar16 = 0x84;
      }
      else {
        (**(code **)(plVar16[2] + 0x20))(plVar16);
      }
      lVar9 = *in_stack_000000c8;
      *in_stack_000000c8 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(&stack0x000000c8);
      }
      *(undefined2 *)(unaff_x19 + 0x1e9) = 0;
      lVar9 = *(long *)(unaff_x19 + 0x1b0);
      lVar10 = *(long *)(unaff_x19 + 0x1b8);
      if (lVar10 != 0) {
        puVar19 = (undefined8 *)(lVar9 + 0x20);
        do {
          if (puVar19[-4] != 0) {
            _free(puVar19[-3]);
          }
          if (puVar19[-1] != 0) {
            _free(*puVar19);
          }
          puVar19 = puVar19 + 6;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (*(long *)(unaff_x19 + 0x1a8) != 0) {
        _free(lVar9);
      }
      lVar9 = **(long **)(unaff_x19 + 0x1a0);
      **(long **)(unaff_x19 + 0x1a0) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(unaff_x19 + 0x1a0);
      }
      *(undefined1 *)(unaff_x19 + 0x1ef) = 0;
      *(undefined4 *)(unaff_x19 + 0x1eb) = 0;
      lVar9 = **(long **)(unaff_x19 + 0x108);
      **(long **)(unaff_x19 + 0x108) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000101991d80(unaff_x19 + 0x108);
      }
      goto LAB_1008e4c00;
    }
    FUN_100d6a100(&stack0x00006720);
    *puVar13 = *puVar13 - 1;
    unaff_x28 = (long *)&stack0x00009a00;
  }
  else {
    if ((char)puVar13[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar13,&DAT_100c35d48);
      *(undefined1 *)(puVar13 + 9) = 1;
      unaff_x28 = (long *)&stack0x00009a00;
      goto LAB_1008e4848;
    }
    FUN_100d6a100(&stack0x00000140);
  }
  *unaff_x28 = (long)&stack0x00006710;
  unaff_x28[1] = (long)&
                       __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00009a00,&UNK_10b225d00);
LAB_1008e5004:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1008e5008);
  (*pcVar8)();
}

