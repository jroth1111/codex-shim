
/* WARNING: Possible PIC construction at 0x000100d2ffbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d2ffc0) */
/* WARNING: Removing unreachable block (ram,0x000100d2ffc8) */

void FUN_100d5557c(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 uVar7;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  long *plVar8;
  long lVar9;
  long *unaff_x19;
  char *pcVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_xzr;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  if ((char)param_1[0x7ad] == '\0') {
    if (param_1[2] != 0) {
      _free(param_1[3]);
    }
    if (param_1[5] != 0) {
      _free(param_1[6]);
    }
    if (param_1[0xb] != -0x8000000000000000) {
      if (param_1[0xb] != 0) {
        _free(param_1[0xc]);
      }
      if (param_1[0xe] != 0) {
        _free(param_1[0xf]);
      }
    }
    if (param_1[8] != 0) {
      _free(param_1[9]);
    }
    plVar8 = (long *)param_1[0x17];
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      *plVar8 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E();
      }
    }
    lVar5 = *(long *)param_1[0x11];
    *(long *)param_1[0x11] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
    plVar8 = param_1 + 0x12;
    lVar9 = *plVar8;
    LOAcquire();
    lVar5 = *(long *)(lVar9 + 0x1f0);
    *(long *)(lVar9 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar9 + 0x88);
      *(long *)(lVar9 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcb05c(lVar9 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x1610) = *(ulong *)(lVar5 + 0x1610) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(lVar9 + 0x110);
      LOAcquire();
      uVar6 = *puVar2;
      *puVar2 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar5 = *(long *)(lVar9 + 0x100);
        *(undefined8 *)(lVar9 + 0x100) = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar9 + 0x108));
        }
      }
    }
    lVar5 = *(long *)*plVar8;
    *(long *)*plVar8 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar8);
    }
    plVar8 = param_1 + 0x13;
    lVar9 = *plVar8;
    LOAcquire();
    lVar5 = *(long *)(lVar9 + 0x198);
    *(long *)(lVar9 + 0x198) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      *(ulong *)(lVar9 + 0x188) = *(ulong *)(lVar9 + 0x188) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar9 + 0x10);
    }
    lVar5 = *(long *)*plVar8;
    *(long *)*plVar8 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he78bce4b07d6d527E(plVar8);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x14);
    lVar5 = *(long *)param_1[0x14];
    *(long *)param_1[0x14] = lVar5 + -1;
    LORelease();
    uVar7 = extraout_x1_14;
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x14);
      uVar7 = extraout_x1_15;
    }
    plVar8 = (long *)param_1[0x15];
    lVar5 = plVar8[0x29];
    plVar8[0x29] = lVar5 + -1;
    if (lVar5 == 1) {
      plVar1 = plVar8 + 0x23;
      if ((char)*plVar1 == '\0') {
        *(char *)plVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar7,1000000000);
      }
      plStack_48 = plVar8 + 0x22;
      lStack_38 = *plStack_48;
      plStack_40 = plVar1;
      __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_48);
    }
    lVar5 = *plVar8;
    *plVar8 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE(param_1 + 0x15);
    }
    if (*param_1 == 0) {
      return;
    }
    param_1 = param_1 + 1;
    lVar5 = *param_1;
    if (lVar5 == 0) {
      return;
    }
    LOAcquire();
    uVar6 = *(ulong *)(lVar5 + 0x30);
    *(ulong *)(lVar5 + 0x30) = uVar6 | 4;
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) == 0) {
LAB_100e49958:
      plVar8 = (long *)*param_1;
    }
    else {
      uVar6 = *(ulong *)(lVar5 + 0x38);
      *(undefined8 *)(lVar5 + 0x38) = 0x8000000000000000;
      if ((uVar6 & 0x7fffffffffffffff) == 0) goto LAB_100e49958;
      _free(*(undefined8 *)(lVar5 + 0x40));
      plVar8 = (long *)*param_1;
    }
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar5 = *plVar8;
    *plVar8 = lVar5 + -1;
    LORelease();
    if (lVar5 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    lVar5 = *param_1;
    uVar6 = *(ulong *)(lVar5 + 0x30);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))(*(undefined8 *)(lVar5 + 0x28));
    }
    if (((uint)uVar6 >> 3 & 1) != 0) {
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x18))(*(undefined8 *)(lVar5 + 0x18));
    }
    if ((*(ulong *)(lVar5 + 0x38) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(lVar5 + 0x40));
    }
    if (lVar5 == -1) {
      return;
    }
    lVar9 = *(long *)(lVar5 + 8);
    *(long *)(lVar5 + 8) = lVar9 + -1;
    LORelease();
    if (lVar9 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    goto code_r0x000108aa97c4;
  }
  if ((char)param_1[0x7ad] != '\x03') {
    return;
  }
  plVar8 = param_1 + 0x18;
  puVar4 = &stack0xffffffffffffffe0;
  puVar11 = &stack0xfffffffffffffff0;
  bVar3 = *(byte *)(param_1 + 0x7b);
  if (bVar3 < 6) {
    if (3 < bVar3) {
      if (bVar3 == 4) {
        if ((((char)param_1[0x8a] == '\x03') && ((char)param_1[0x89] == '\x03')) &&
           ((char)param_1[0x80] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x81);
          if (param_1[0x82] != 0) {
            (**(code **)(param_1[0x82] + 0x18))(param_1[0x83]);
          }
        }
      }
      else {
        if (bVar3 != 5) {
          return;
        }
        FUN_100d3347c(param_1 + 0x7c);
        pcVar10 = (char *)param_1[0x78];
        if (*pcVar10 == '\0') {
          *pcVar10 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar10,extraout_x1_13,1000000000);
        }
        FUN_1060fa678(pcVar10,1,pcVar10);
      }
      goto LAB_100d300e4;
    }
    if (bVar3 != 0) {
      if (bVar3 != 3) {
        return;
      }
      FUN_100d78efc(param_1 + 0x7c);
      goto LAB_100d300e4;
    }
    param_1 = param_1 + 0x1a;
    unaff_x30 = 0x100d2ffc0;
  }
  else {
    if (bVar3 < 8) {
      if (bVar3 != 6) {
        if (bVar3 != 7) {
          return;
        }
        FUN_100d3dedc(param_1 + 0x7c);
        goto LAB_100d30030;
      }
      if (*(char *)((long)param_1 + 0x4d1) == '\x03') {
        FUN_100dd0f00(param_1 + 0x7e);
      }
    }
    else if (bVar3 == 8) {
      FUN_100d55938(param_1 + 0x7c);
LAB_100d30030:
      *(undefined1 *)((long)param_1 + 0x3da) = 0;
      if ((*(byte *)((long)param_1 + 0x3d9) & 1) != 0) {
        plVar8 = param_1 + 0x79;
        __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                  (plVar8);
        lVar5 = *(long *)*plVar8;
        *(long *)*plVar8 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar8);
        }
      }
      *(undefined1 *)((long)param_1 + 0x3d9) = 0;
    }
    else if (bVar3 == 9) {
      if ((((char)param_1[0x8a] == '\x03') && ((char)param_1[0x89] == '\x03')) &&
         ((char)param_1[0x80] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x81);
        if (param_1[0x82] != 0) {
          (**(code **)(param_1[0x82] + 0x18))(param_1[0x83]);
        }
      }
    }
    else {
      if (bVar3 != 10) {
        return;
      }
      FUN_100d3347c(param_1 + 0x7c);
      pcVar10 = (char *)param_1[0x7a];
      if (*pcVar10 == '\0') {
        *pcVar10 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar10,extraout_x1_12,1000000000);
      }
      FUN_1060fa678(pcVar10,1,pcVar10);
    }
    if ((param_1[0x72] != -0x8000000000000000) && (param_1[0x72] != 0)) {
      _free(param_1[0x73]);
    }
LAB_100d300e4:
    param_1 = param_1 + 0x46;
    puVar4 = (undefined1 *)register0x00000008;
    plVar8 = unaff_x19;
    puVar11 = unaff_x29;
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = plVar8;
  *(undefined1 **)(puVar4 + -0x10) = puVar11;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] != 0) {
    _free(param_1[7]);
  }
  if (param_1[9] != -0x8000000000000000) {
    if (param_1[9] != 0) {
      _free(param_1[10]);
    }
    if (param_1[0xc] != 0) {
      _free(param_1[0xd]);
    }
  }
  plVar8 = (long *)param_1[0x2a];
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    *plVar8 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(param_1 + 0x2a);
    }
  }
  lVar5 = *(long *)param_1[0x20];
  *(long *)param_1[0x20] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x20);
  }
  lVar9 = param_1[0x21];
  LOAcquire();
  lVar5 = *(long *)(lVar9 + 0x198);
  *(long *)(lVar9 + 0x198) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    *(ulong *)(lVar9 + 0x188) = *(ulong *)(lVar9 + 0x188) | 1;
    LORelease();
    __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar9 + 0x10);
  }
  lVar5 = *(long *)param_1[0x21];
  *(long *)param_1[0x21] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he78bce4b07d6d527E(param_1 + 0x21);
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x22);
  lVar5 = *(long *)param_1[0x22];
  *(long *)param_1[0x22] = lVar5 + -1;
  LORelease();
  uVar7 = extraout_x1;
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x22);
    uVar7 = extraout_x1_00;
  }
  if (param_1[0xf] != -0x8000000000000000) {
    if (param_1[0xf] != 0) {
      _free(param_1[0x10]);
      uVar7 = extraout_x1_01;
    }
    if (param_1[0x12] != 0) {
      _free(param_1[0x13]);
      uVar7 = extraout_x1_02;
    }
    if (param_1[0x15] != 0) {
      _free(param_1[0x16]);
      uVar7 = extraout_x1_03;
    }
    if (param_1[0x18] != 0) {
      _free(param_1[0x19]);
      uVar7 = extraout_x1_04;
    }
  }
  lVar5 = *(long *)param_1[0x1e];
  *(long *)param_1[0x1e] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    uVar7 = extraout_x1_05;
  }
  if ((param_1[0x1b] != -0x8000000000000000) && (param_1[0x1b] != 0)) {
    _free(param_1[0x1c]);
    uVar7 = extraout_x1_06;
  }
  lVar5 = *(long *)param_1[0x23];
  *(long *)param_1[0x23] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h02ce01b9d7472824E(param_1 + 0x23);
    uVar7 = extraout_x1_07;
  }
  lVar5 = *(long *)param_1[0x24];
  *(long *)param_1[0x24] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h184b28c15061d2e4E(param_1 + 0x24);
    uVar7 = extraout_x1_08;
  }
  lVar5 = *(long *)param_1[0x25];
  *(long *)param_1[0x25] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10fb3acfb5fd7734E(param_1 + 0x25);
    uVar7 = extraout_x1_09;
  }
  plVar8 = (long *)param_1[0x26];
  lVar5 = plVar8[0x29];
  plVar8[0x29] = lVar5 + -1;
  if (lVar5 == 1) {
    plVar1 = plVar8 + 0x23;
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar7,1000000000);
    }
    lVar5 = plVar8[0x22];
    *(long **)(puVar4 + -0x48) = plVar8 + 0x22;
    *(long **)(puVar4 + -0x40) = plVar1;
    *(long *)(puVar4 + -0x38) = lVar5;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(puVar4 + -0x48);
    uVar7 = extraout_x1_10;
  }
  lVar5 = *plVar8;
  *plVar8 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001034c60ec(param_1 + 0x26);
    uVar7 = extraout_x1_11;
  }
  plVar8 = (long *)param_1[0x28];
  lVar5 = plVar8[0x29];
  plVar8[0x29] = lVar5 + -1;
  if (lVar5 == 1) {
    plVar1 = plVar8 + 0x23;
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar7,1000000000);
    }
    lVar5 = plVar8[0x22];
    *(long **)(puVar4 + -0x48) = plVar8 + 0x22;
    *(long **)(puVar4 + -0x40) = plVar1;
    *(long *)(puVar4 + -0x38) = lVar5;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(puVar4 + -0x48);
  }
  lVar5 = *plVar8;
  *plVar8 = lVar5 + -1;
  LORelease();
  if (lVar5 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar5 = param_1[0x28];
  if (lVar5 != -1) {
    lVar9 = *(long *)(lVar5 + 8);
    *(long *)(lVar5 + 8) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
  }
  return;
}

