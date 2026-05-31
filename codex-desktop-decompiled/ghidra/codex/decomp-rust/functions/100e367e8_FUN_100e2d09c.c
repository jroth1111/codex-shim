
void FUN_100e2d09c(long param_1)

{
  long *plVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  FUN_100e1ccd8();
  if (*(long *)(param_1 + 0x1d8) != 0) {
    _free(*(undefined8 *)(param_1 + 0x1e0));
  }
  if (*(long *)(param_1 + 0x1f0) == -0x8000000000000000 || *(long *)(param_1 + 0x1f0) == 0) {
    if (*(long *)(param_1 + 0x2a8) == -0x8000000000000000 || *(long *)(param_1 + 0x2a8) == 0) {
LAB_100e2d0e8:
      lVar3 = *(long *)(param_1 + 0x2c0);
      goto joined_r0x000100e2d120;
    }
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x1f8));
    if (*(long *)(param_1 + 0x2a8) == -0x8000000000000000 || *(long *)(param_1 + 0x2a8) == 0)
    goto LAB_100e2d0e8;
  }
  _free(*(undefined8 *)(param_1 + 0x2b0));
  lVar3 = *(long *)(param_1 + 0x2c0);
joined_r0x000100e2d120:
  if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2c8));
  }
  if ((*(long *)(param_1 + 0x2d8) != -0x8000000000000000) && (*(long *)(param_1 + 0x2d8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2e0));
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    _free(*(undefined8 *)(param_1 + 0x220));
  }
  if ((*(long *)(param_1 + 0x2f0) != -0x8000000000000000) && (*(long *)(param_1 + 0x2f0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x2f8));
  }
  lVar3 = **(long **)(param_1 + 0x488);
  **(long **)(param_1 + 0x488) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000102a3fc54(param_1 + 0x488);
  }
  plVar4 = *(long **)(param_1 + 0x498);
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    *plVar4 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102a3fc54(param_1 + 0x498);
    }
  }
  FUN_100e6fcec(param_1 + 0x398);
  if (*(long *)(param_1 + 0x230) != 0) {
    _free(*(undefined8 *)(param_1 + 0x238));
  }
  lVar5 = *(long *)(param_1 + 0x250);
  lVar3 = *(long *)(param_1 + 600);
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar5 + 8);
    do {
      if (puVar7[-1] != 0) {
        _free(*puVar7);
      }
      puVar7 = puVar7 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    _free(lVar5);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    _free(*(undefined8 *)(param_1 + 0x268));
  }
  if ((*(long *)(param_1 + 0x308) != -0x8000000000000000) && (*(long *)(param_1 + 0x308) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x310));
  }
  lVar5 = *(long *)(param_1 + 0x280);
  lVar3 = *(long *)(param_1 + 0x288);
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar5 + 0x20);
    do {
      if (puVar7[-4] != 0) {
        _free(puVar7[-3]);
      }
      if (puVar7[-1] != 0) {
        _free(*puVar7);
      }
      puVar7 = puVar7 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    _free(lVar5);
  }
  lVar3 = **(long **)(param_1 + 0x4b0);
  **(long **)(param_1 + 0x4b0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_1 + 0x4b0);
  }
  if ((*(long *)(param_1 + 800) != -0x8000000000000000) && (*(long *)(param_1 + 800) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x328));
  }
  if ((*(long *)(param_1 + 0x338) != -0x8000000000000000) && (*(long *)(param_1 + 0x338) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x340));
  }
  if ((*(long *)(param_1 + 0x350) != -0x8000000000000000) && (*(long *)(param_1 + 0x350) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x358));
  }
  lVar3 = *(ulong *)(param_1 + 0x428) + 0x7ffffffffffffffa;
  if (*(ulong *)(param_1 + 0x428) < 0x8000000000000006) {
    lVar3 = 6;
  }
  if (lVar3 == 6) {
    FUN_100e0fca4(param_1 + 0x428);
  }
  else if ((lVar3 == 4) && (*(long *)(param_1 + 0x430) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x438));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x298);
  FUN_100e40160(uVar6,*(undefined8 *)(param_1 + 0x2a0));
  uVar2 = extraout_x1;
  if (*(long *)(param_1 + 0x290) != 0) {
    _free(uVar6);
    uVar2 = extraout_x1_00;
  }
  plVar4 = *(long **)(param_1 + 0x4b8);
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    *plVar4 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9e4825ff52dbcf0E(param_1 + 0x4b8);
      uVar2 = extraout_x1_01;
    }
  }
  if (*(long *)(param_1 + 0x368) != -0x8000000000000000) {
    if (*(long *)(param_1 + 0x368) != 0) {
      _free(*(undefined8 *)(param_1 + 0x370));
      uVar2 = extraout_x1_02;
    }
    plVar4 = *(long **)(param_1 + 0x380);
    lVar3 = plVar4[0x29];
    plVar4[0x29] = lVar3 + -1;
    if (lVar3 == 1) {
      plVar1 = plVar4 + 0x23;
      if ((char)*plVar1 == '\0') {
        *(char *)plVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar1,uVar2,1000000000);
      }
      plStack_48 = plVar4 + 0x22;
      lStack_38 = *plStack_48;
      plStack_40 = plVar1;
      __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_48);
    }
    lVar3 = *plVar4;
    *plVar4 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      lVar3 = *(long *)(param_1 + 0x380);
      plVar4 = *(long **)(lVar3 + 0x138);
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        *plVar4 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9e4825ff52dbcf0E(lVar3 + 0x138);
        }
      }
      if (lVar3 != -1) {
        lVar5 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 8) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar3);
          return;
        }
      }
      return;
    }
  }
  return;
}

