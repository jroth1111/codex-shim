
void FUN_100ddf394(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  code *pcVar7;
  long *plVar8;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  bVar4 = *(byte *)(param_1 + 0x168);
  if (bVar4 < 4) {
    if (bVar4 == 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      lVar5 = plVar8[0x29];
      plVar8[0x29] = lVar5 + -1;
      if (lVar5 == 1) {
        plVar1 = plVar8 + 0x23;
        if ((char)*plVar1 == '\0') {
          *(char *)plVar1 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar1,param_2,1000000000);
        }
        plStack_60 = plVar8 + 0x22;
        lStack_50 = *plStack_60;
        plStack_58 = plVar1;
        __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_60);
      }
      lVar5 = *plVar8;
      *plVar8 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE
                  ((undefined8 *)(param_1 + 0x10));
      }
      lVar5 = *(long *)(param_1 + 0x20);
      puVar3 = *(undefined8 **)(param_1 + 0x28);
      pcVar7 = (code *)*puVar3;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(lVar5);
      }
      if (puVar3[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (bVar4 != 3) {
      return;
    }
    if ((*(char *)(param_1 + 0x1f8) == '\x03') && (*(char *)(param_1 + 0x1b1) == '\x04')) {
      plStack_60 = *(long **)(param_1 + 0x1b8);
      plStack_58 = (long *)(param_1 + 0x1f0);
      lStack_50 = param_1 + 0x1c0;
      lStack_48 = param_1 + 0x1c8;
      FUN_1060fb5d4(&plStack_60);
      param_2 = extraout_x1_00;
      if (*(long *)(param_1 + 0x1d8) != 0) {
        (**(code **)(*(long *)(param_1 + 0x1d8) + 0x18))(*(undefined8 *)(param_1 + 0x1e0));
        param_2 = extraout_x1_01;
      }
      *(undefined1 *)(param_1 + 0x1b0) = 0;
    }
  }
  else if (bVar4 == 4) {
    FUN_100de8a5c(param_1 + 0x178);
    param_2 = extraout_x1_02;
  }
  else if (bVar4 == 5) {
    FUN_100ddb920(param_1 + 0x170);
    param_2 = extraout_x1_03;
  }
  else {
    if (bVar4 != 6) {
      return;
    }
    FUN_100de8a5c(param_1 + 0x178);
    param_2 = extraout_x1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  pcVar7 = (code *)*puVar3;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(uVar2);
    param_2 = extraout_x1_04;
  }
  if (puVar3[1] != 0) {
    _free(uVar2);
    param_2 = extraout_x1_05;
  }
  plVar8 = *(long **)(param_1 + 0x30);
  lVar5 = plVar8[0x29];
  plVar8[0x29] = lVar5 + -1;
  if (lVar5 == 1) {
    plVar1 = plVar8 + 0x23;
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,param_2,1000000000);
    }
    plStack_60 = plVar8 + 0x22;
    lStack_50 = *plStack_60;
    plStack_58 = plVar1;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_60);
  }
  lVar5 = *plVar8;
  *plVar8 = lVar5 + -1;
  LORelease();
  if (lVar5 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != -1) {
    lVar6 = *(long *)(lVar5 + 8);
    *(long *)(lVar5 + 8) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
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

