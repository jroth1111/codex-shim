
undefined1  [16] FUN_1005ddc98(void)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined1 uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long *plVar13;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x27;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  long in_stack_00000138;
  undefined8 in_stack_000014a0;
  undefined8 in_stack_000032a0;
  undefined8 in_stack_000032a8;
  undefined8 in_stack_000032b0;
  undefined8 in_stack_000032b8;
  undefined8 in_stack_000032c0;
  undefined8 in_stack_000032c8;
  undefined8 in_stack_000032d0;
  undefined8 in_stack_000032d8;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar9 = *(undefined8 *)(unaff_x23 + 0x48);
  lVar12 = *(long *)(unaff_x23 + 0x90);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001490,&UNK_108ca6658,&stack0x00003280);
  *(undefined4 *)(unaff_x23 + 0x150) = 1;
  *(ulong *)(unaff_x23 + 0x15c) = CONCAT44((int)&stack0x00003280,1);
  *(undefined8 *)(unaff_x23 + 0x154) = 0x8ac18a800000001;
  *(undefined8 *)(unaff_x23 + 0x168) = in_stack_000014a0;
  *(undefined1 **)(unaff_x23 + 0x160) = &stack0x00003280;
  *(undefined8 *)(unaff_x23 + 0x328) = uVar9;
  *(long *)(unaff_x23 + 0x330) = lVar12 + 0x10;
  *(undefined1 *)(unaff_x23 + 0x6f8) = 0;
  iVar3 = FUN_10059e898(unaff_x23 + 0x150);
  if (iVar3 == 0) {
    FUN_100d1ddbc(unaff_x23 + 0x150);
    __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_28last_token_info_from_rollout17hf808cf9c3b1f7874E
              (&stack0x00003280,*(undefined8 *)(unaff_x23 + 0xe0),*(undefined8 *)(unaff_x23 + 0xe8))
    ;
    if (unaff_x20 != 2) {
      *(undefined8 *)(unaff_x23 + 0x1e0) = in_stack_000032a8;
      *(undefined8 *)(unaff_x23 + 0x1d8) = in_stack_000032a0;
      *(undefined8 *)(unaff_x23 + 0x1f0) = in_stack_000032b8;
      *(undefined8 *)(unaff_x23 + 0x1e8) = in_stack_000032b0;
      *(undefined8 *)(unaff_x23 + 0x200) = in_stack_000032c8;
      *(undefined8 *)(unaff_x23 + 0x1f8) = in_stack_000032c0;
      *(undefined8 *)(unaff_x23 + 0x210) = in_stack_000032d8;
      *(undefined8 *)(unaff_x23 + 0x208) = in_stack_000032d0;
      *(undefined **)(unaff_x23 + 0x1c0) = &DAT_100c7b3a0;
      *(long *)(unaff_x23 + 0x1b8) = unaff_x20;
      *(undefined **)(unaff_x23 + 0x1d0) = &DAT_100c7b3a0;
      *(undefined8 *)(unaff_x23 + 0x1c8) = unaff_x25;
      *(long *)(unaff_x23 + 0x140) = *(long *)(unaff_x23 + 0x48) + 0x790;
      *(undefined1 *)(unaff_x23 + 0x1b0) = 0;
      lVar12 = FUN_100fd3e50(unaff_x23 + 0x140);
      if (lVar12 == 0) {
        uVar5 = 9;
        goto LAB_1005de248;
      }
      if (((*(char *)(unaff_x23 + 0x1b0) == '\x03') && (*(char *)(unaff_x23 + 0x1a8) == '\x03')) &&
         (*(char *)(unaff_x23 + 0x160) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x23 + 0x168);
        if (*(long *)(unaff_x23 + 0x170) != 0) {
          (**(code **)(*(long *)(unaff_x23 + 0x170) + 0x18))(*(undefined8 *)(unaff_x23 + 0x178));
        }
      }
      uVar14 = *(undefined8 *)(unaff_x23 + 0x1c0);
      uVar9 = *(undefined8 *)(unaff_x23 + 0x1b8);
      uVar16 = *(undefined8 *)(unaff_x23 + 0x1d0);
      uVar15 = *(undefined8 *)(unaff_x23 + 0x1c8);
      uVar18 = *(undefined8 *)(unaff_x23 + 0x1e0);
      uVar17 = *(undefined8 *)(unaff_x23 + 0x1d8);
      uVar20 = *(undefined8 *)(unaff_x23 + 0x1f0);
      uVar19 = *(undefined8 *)(unaff_x23 + 0x1e8);
      uVar22 = *(undefined8 *)(unaff_x23 + 0x200);
      uVar21 = *(undefined8 *)(unaff_x23 + 0x1f8);
      uVar23 = *(undefined8 *)(unaff_x23 + 0x208);
      *(undefined8 *)(lVar12 + 0x548) = *(undefined8 *)(unaff_x23 + 0x210);
      *(undefined8 *)(lVar12 + 0x540) = uVar23;
      *(undefined8 *)(lVar12 + 0x538) = uVar22;
      *(undefined8 *)(lVar12 + 0x530) = uVar21;
      *(undefined8 *)(lVar12 + 0x528) = uVar20;
      *(undefined8 *)(lVar12 + 0x520) = uVar19;
      *(undefined8 *)(lVar12 + 0x518) = uVar18;
      *(undefined8 *)(lVar12 + 0x510) = uVar17;
      *(undefined8 *)(lVar12 + 0x508) = uVar16;
      *(undefined8 *)(lVar12 + 0x500) = uVar15;
      *(undefined8 *)(lVar12 + 0x4f8) = uVar14;
      *(undefined8 *)(lVar12 + 0x4f0) = uVar9;
      __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar12,1);
    }
    if ((*(byte *)(unaff_x23 + 0x139) & 1) == 0) {
      *(undefined8 *)(unaff_x23 + 0x140) = *(undefined8 *)(unaff_x23 + 0x48);
      *(undefined1 *)(unaff_x23 + 0x910) = 0;
      auVar24 = FUN_1005a38b4(unaff_x23 + 0x140);
      uVar6 = auVar24._8_8_;
      if ((auVar24._0_8_ & 1) != 0) {
        uVar5 = 10;
        goto LAB_1005de248;
      }
      if (*(char *)(unaff_x23 + 0x910) == '\x03') {
        FUN_100c97ff8(unaff_x23 + 0x148);
      }
      if ((uVar6 & 3) != 1) goto LAB_1005ddef0;
      uVar9 = *(undefined8 *)(uVar6 - 1);
      puVar10 = *(undefined8 **)(uVar6 + 7);
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar10[1] != 0) {
        _free(uVar9);
      }
      _free((undefined8 *)(uVar6 - 1));
      uVar6 = *(ulong *)(unaff_x23 + 0xf0);
    }
    else {
LAB_1005ddef0:
      uVar6 = *(ulong *)(unaff_x23 + 0xf0);
    }
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x23 + 0xf8));
    }
    FUN_100e4a6c8(unaff_x23 + 0xd8);
    if ((*(long *)(unaff_x23 + 0xb0) != -0x8000000000000000) && (*(long *)(unaff_x23 + 0xb0) != 0))
    {
      _free(*(undefined8 *)(unaff_x23 + 0xb8));
    }
    lVar12 = **(long **)(unaff_x23 + 0x90);
    **(long **)(unaff_x23 + 0x90) = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
    *(undefined2 *)(unaff_x23 + 0x13b) = 0;
    *(undefined1 *)(unaff_x23 + 0x138) = 1;
    uVar9 = *(undefined8 *)(in_stack_00000138 + 0x1710);
    FUN_100d46fc8(uVar9);
    _free(uVar9);
    *(long *)(in_stack_00000138 + 0x1710) = *(long *)(in_stack_00000138 + 0x15b8) + 0x7a0;
    *(undefined1 *)(unaff_x27 + 0x9f6) = 0;
    auVar24 = FUN_100fd3e50(in_stack_00000138 + 0x1710);
    uVar9 = auVar24._8_8_;
    pcVar4 = auVar24._0_8_;
    if (pcVar4 != (char *)0x0) {
      if (((*(char *)(unaff_x27 + 0x9f6) == '\x03') && (*(char *)(unaff_x27 + 0x9ee) == '\x03')) &&
         (*(char *)(unaff_x27 + 0x9a6) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (in_stack_00000138 + 0x1738);
        uVar9 = extraout_x1;
        if (*(long *)(in_stack_00000138 + 0x1740) != 0) {
          (**(code **)(*(long *)(in_stack_00000138 + 0x1740) + 0x18))
                    (*(undefined8 *)(in_stack_00000138 + 0x1748));
          uVar9 = extraout_x1_00;
        }
      }
      uVar5 = *(undefined1 *)(unaff_x27 + 0x95a);
      uVar8 = *(ulong *)(pcVar4 + 0x7b8);
      uVar6 = *(ulong *)(pcVar4 + 0x7a0);
      if (uVar8 == uVar6) {
        __ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17hbd594a431a664b88E
                  (pcVar4 + 0x7a0);
        uVar8 = *(ulong *)(pcVar4 + 0x7b8);
        uVar6 = *(ulong *)(pcVar4 + 0x7a0);
        uVar9 = extraout_x1_01;
      }
      *(ulong *)(pcVar4 + 0x7b8) = uVar8 + 1;
      uVar2 = 0;
      if (uVar6 <= *(long *)(pcVar4 + 0x7b0) + uVar8) {
        uVar2 = uVar6;
      }
      *(undefined1 *)(*(long *)(pcVar4 + 0x7a8) + ((*(long *)(pcVar4 + 0x7b0) + uVar8) - uVar2)) =
           uVar5;
      if (*pcVar4 == '\0') {
        *pcVar4 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar4,uVar9,1000000000);
      }
      FUN_1060fa678(pcVar4,1,pcVar4);
      *(undefined1 *)(unaff_x27 + 0x97d) = 0;
      unaff_x24 = *(undefined8 *)(in_stack_00000138 + 0x15b8);
      *(undefined2 *)(unaff_x27 + 0x96f) = 0;
      *(undefined1 *)(unaff_x27 + 0x979) = 0;
      *(undefined1 *)(unaff_x27 + 0x97a) = 0;
      *(undefined1 *)(unaff_x27 + 0x95b) = 0;
      lVar11 = *(long *)(in_stack_00000138 + 0x15c8);
      lVar12 = *(long *)(in_stack_00000138 + 0x15d0);
      uVar9 = extraout_x1_02;
      if (lVar12 != 0) {
        puVar10 = (undefined8 *)(lVar11 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
            uVar9 = extraout_x1_03;
          }
          puVar10 = puVar10 + 3;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (*(long *)(in_stack_00000138 + 0x15c0) != 0) {
        _free(lVar11);
        uVar9 = extraout_x1_04;
      }
      *(undefined2 *)(unaff_x27 + 0x97c) = 0;
      plVar13 = *(long **)(in_stack_00000138 + 0x15a8);
      lVar12 = plVar13[0x29];
      plVar13[0x29] = lVar12 + -1;
      if (lVar12 == 1) {
        plVar1 = plVar13 + 0x23;
        if ((char)*plVar1 == '\0') {
          *(char *)plVar1 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar1,uVar9,1000000000);
        }
        __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&stack0x00003280);
      }
      lVar12 = *plVar13;
      *plVar13 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE(in_stack_00000138 + 0x15a8);
      }
      *(undefined2 *)(unaff_x27 + 0x97e) = 0;
      *(undefined4 *)(in_stack_00000138 + 0x16fb) = 0;
      *(undefined4 *)(in_stack_00000138 + 0x16fe) = 0;
      plVar13 = *(long **)(in_stack_00000138 + 0xd78);
      if (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        *plVar13 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(in_stack_00000138 + 0xd78)
          ;
        }
      }
      plVar13 = *(long **)(in_stack_00000138 + 0xd68);
      if (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        *plVar13 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(in_stack_00000138 + 0xd68)
          ;
        }
      }
      *(undefined1 *)(unaff_x27 + 0x95c) = 0;
      lVar12 = **(long **)(in_stack_00000138 + 0xd58);
      **(long **)(in_stack_00000138 + 0xd58) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46be9d66d25cbb15E(in_stack_00000138 + 0xd58);
      }
      *(undefined1 *)(unaff_x27 + 0x95d) = 0;
      if ((*(long *)(in_stack_00000138 + 0x4d0) != -0x8000000000000000) &&
         (*(long *)(in_stack_00000138 + 0x4d0) != 0)) {
        _free(*(undefined8 *)(in_stack_00000138 + 0x4d8));
      }
      *(undefined4 *)(in_stack_00000138 + 0x16e8) = 0;
      *(undefined1 *)(in_stack_00000138 + 0x16ec) = 0;
      if ((*(ulong *)(in_stack_00000138 + 0x270) & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)(in_stack_00000138 + 0x278));
      }
      *(undefined1 *)(in_stack_00000138 + 0x170e) = 0;
      *(undefined4 *)(in_stack_00000138 + 0x170a) = 0;
      if (*(long *)(in_stack_00000138 + 0x1d8) != 0) {
        _free(*(undefined8 *)(in_stack_00000138 + 0x1e0));
      }
      *(undefined2 *)(unaff_x27 + 0x963) = 0;
      *(undefined1 *)(unaff_x27 + 0x985) = 0;
      if (*(long *)(in_stack_00000138 + 0x170) != 0) {
        _free(*(undefined8 *)(in_stack_00000138 + 0x178));
      }
      uVar9 = 0;
      *(undefined1 *)(unaff_x27 + 0x965) = 0;
      *(undefined1 *)(unaff_x27 + 0x956) = 1;
      goto LAB_1005dc118;
    }
    uVar5 = 0x15;
  }
  else {
    uVar5 = 8;
LAB_1005de248:
    *(undefined1 *)(unaff_x23 + 0x138) = uVar5;
    uVar5 = 0x14;
  }
  *(undefined1 *)(unaff_x27 + 0x956) = uVar5;
  uVar9 = 2;
LAB_1005dc118:
  auVar24._8_8_ = unaff_x24;
  auVar24._0_8_ = uVar9;
  return auVar24;
}

