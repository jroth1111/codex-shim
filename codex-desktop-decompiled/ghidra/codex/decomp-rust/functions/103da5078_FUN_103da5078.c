
void FUN_103da5078(ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong in_xzr;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*param_1 != 2) {
    uVar4 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar4 = uVar4 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar4,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar4 = param_1[4], uVar4 != 0)) {
    uStack_60 = *(undefined8 *)(uVar4 + 0x10);
    uStack_58 = *(undefined8 *)(uVar4 + 0x18);
    puStack_48 = &DAT_103d8be04;
    puStack_50 = (undefined1 *)&uStack_60;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_50);
  }
  cVar2 = (char)param_1[0x59];
  if (cVar2 == '\0') {
    lVar3 = *(long *)param_1[0x48];
    *(long *)param_1[0x48] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x48);
    }
    func_0x000103dac8c8(param_1 + 0x18);
    func_0x000103dbfa38(param_1 + 5);
    plVar5 = (long *)param_1[0x4a];
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x4a);
      }
    }
    plVar5 = (long *)param_1[0x49];
    LOAcquire();
    lVar3 = plVar5[0x3e];
    plVar5[0x3e] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      LOAcquire();
      lVar3 = plVar5[0x11];
      plVar5[0x11] = lVar3 + 1;
      lVar3 = func_0x000103e337f0(plVar5 + 0x10,lVar3);
      *(ulong *)(lVar3 + 0x6910) = *(ulong *)(lVar3 + 0x6910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar5 + 0x22);
      LOAcquire();
      uVar4 = *puVar1;
      *puVar1 = uVar4 | 2;
      LORelease();
      if (uVar4 == 0) {
        lVar3 = plVar5[0x20];
        plVar5[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 8))(plVar5[0x21]);
        }
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      func_0x000103d9d720(param_1 + 0x5a);
    }
    else {
      if (cVar2 != '\x04') goto LAB_103da52d4;
      func_0x000103d9d80c(param_1 + 0x5a);
    }
    lVar3 = *(long *)param_1[0x48];
    *(long *)param_1[0x48] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x48);
    }
    if (((*(byte *)((long)param_1 + 0x2c9) & 1) != 0) &&
       (plVar5 = (long *)param_1[0x4a], plVar5 != (long *)0x0)) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x4a);
      }
    }
    plVar5 = (long *)param_1[0x49];
    LOAcquire();
    lVar3 = plVar5[0x3e];
    plVar5[0x3e] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      LOAcquire();
      lVar3 = plVar5[0x11];
      plVar5[0x11] = lVar3 + 1;
      lVar3 = func_0x000103e337f0(plVar5 + 0x10,lVar3);
      *(ulong *)(lVar3 + 0x6910) = *(ulong *)(lVar3 + 0x6910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar5 + 0x22);
      LOAcquire();
      uVar4 = *puVar1;
      *puVar1 = uVar4 | 2;
      LORelease();
      if (uVar4 == 0) {
        lVar3 = plVar5[0x20];
        plVar5[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 8))(plVar5[0x21]);
        }
      }
    }
  }
  lVar3 = *plVar5;
  *plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17habd5cadfed2cfecbE(param_1 + 0x49);
  }
LAB_103da52d4:
  if (*param_1 != 2) {
    uVar4 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar4 = uVar4 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar4,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar4 = param_1[4], uVar4 != 0)) {
    uStack_60 = *(undefined8 *)(uVar4 + 0x10);
    uStack_58 = *(undefined8 *)(uVar4 + 0x18);
    puStack_48 = &DAT_103d8be04;
    puStack_50 = (undefined1 *)&uStack_60;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_50);
  }
  func_0x000103da7b74(param_1);
  return;
}

