
void FUN_1033b1528(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)(param_1 + 0x230) != 0) {
    _free(*(undefined8 *)(param_1 + 0x238));
  }
  if (*(long *)(param_1 + 0x480) != -0x8000000000000000 && *(long *)(param_1 + 0x480) != 0) {
    _free(*(undefined8 *)(param_1 + 0x488));
  }
  lVar2 = **(long **)(param_1 + 0x788);
  **(long **)(param_1 + 0x788) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_1 + 0x788);
  }
  plVar3 = *(long **)(param_1 + 0x7c8);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x7c8);
    }
  }
  FUN_1033a1f94(param_1);
  func_0x0001033c3760(param_1 + 0x248);
  lVar2 = **(long **)(param_1 + 0x790);
  **(long **)(param_1 + 0x790) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x790);
  }
  lVar2 = *(ulong *)(param_1 + 0x690) + 0x7ffffffffffffffa;
  if (*(ulong *)(param_1 + 0x690) < 0x8000000000000006) {
    lVar2 = 6;
  }
  if (lVar2 == 6) {
    FUN_1033a26cc(param_1 + 0x690);
  }
  else if ((lVar2 == 4) && (*(long *)(param_1 + 0x698) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x6a0));
  }
  lVar8 = *(long *)(param_1 + 0x380);
  lVar2 = *(long *)(param_1 + 0x388) + 1;
  lVar5 = lVar8;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_1033b9570(lVar5);
    lVar5 = lVar5 + 0x50;
  }
  if (*(long *)(param_1 + 0x378) != 0) {
    _free(lVar8);
  }
  if (*(long *)(param_1 + 0x390) != 0) {
    _free(*(undefined8 *)(param_1 + 0x398));
  }
  if (*(long *)(param_1 + 0x498) == -0x8000000000000000 || *(long *)(param_1 + 0x498) == 0) {
    lVar2 = *(long *)(param_1 + 0x4b0);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x4a0));
    lVar2 = *(long *)(param_1 + 0x4b0);
  }
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x4b8));
  }
  if ((*(long *)(param_1 + 0x4c8) != -0x8000000000000000) && (*(long *)(param_1 + 0x4c8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x4d0));
  }
  if ((*(long *)(param_1 + 0x4e0) != -0x8000000000000000) && (*(long *)(param_1 + 0x4e0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x4e8));
  }
  if ((*(long *)(param_1 + 0x4f8) != -0x8000000000000000) && (*(long *)(param_1 + 0x4f8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x500));
  }
  if ((*(long *)(param_1 + 0x510) != -0x8000000000000000) && (*(long *)(param_1 + 0x510) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x518));
  }
  if (*(long *)(param_1 + 0x3a8) != 0) {
    _free(*(undefined8 *)(param_1 + 0x3b0));
  }
  if ((*(long *)(param_1 + 0x3c0) != -0x8000000000000000) && (*(long *)(param_1 + 0x3c0) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x3c8));
  }
  lVar2 = **(long **)(param_1 + 0x760);
  **(long **)(param_1 + 0x760) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000102a3fc54(param_1 + 0x760);
  }
  plVar3 = *(long **)(param_1 + 0x770);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102a3fc54(param_1 + 0x770);
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x588);
  uVar4 = uVar9;
  if (uVar9 < 0x8000000000000001) {
    uVar4 = 0;
  }
  if (((uVar4 & 0x7fffffffffffffff) == 0) && (uVar9 != 0x8000000000000000)) {
    puVar7 = *(ulong **)(param_1 + 0x590);
    puVar1 = puVar7;
    for (lVar2 = *(long *)(param_1 + 0x598); lVar2 != 0; lVar2 = lVar2 + -1) {
      uVar4 = *puVar1;
      lVar5 = uVar4 + 0x7ffffffffffffffb;
      if (uVar4 < 0x8000000000000005) {
        lVar5 = 2;
      }
      if ((lVar5 == 0) || (lVar5 == 1)) {
        uVar4 = puVar1[1];
joined_r0x0001033b17d4:
        if (uVar4 != 0) {
          lVar5 = 0x10;
LAB_1033b17dc:
          _free(*(undefined8 *)((long)puVar1 + lVar5));
        }
      }
      else {
        uVar6 = uVar4 ^ 0x8000000000000000;
        if (-1 < (long)uVar4) {
          uVar6 = 5;
        }
        if (uVar6 < 5) {
          if (uVar6 == 2) {
            uVar4 = puVar1[1] & 0x7fffffffffffffff;
            goto joined_r0x0001033b17d4;
          }
        }
        else {
          if (uVar4 != 0) {
            _free(puVar1[1]);
          }
          if ((puVar1[3] & 0x7fffffffffffffff) != 0) {
            lVar5 = 0x20;
            goto LAB_1033b17dc;
          }
        }
      }
      puVar1 = puVar1 + 7;
    }
    if (uVar9 != 0) {
      _free(puVar7);
    }
  }
  if (*(short *)(param_1 + 0x6f0) != 2) {
    FUN_1033a1d50(param_1 + 0x6f0);
  }
  FUN_1033bef54(param_1 + 1000);
  lVar8 = *(long *)(param_1 + 0x458);
  lVar2 = lVar8;
  for (lVar5 = *(long *)(param_1 + 0x460); lVar5 != 0; lVar5 = lVar5 + -1) {
    FUN_1033a8778(lVar2);
    lVar2 = lVar2 + 0x1a0;
  }
  if (*(long *)(param_1 + 0x450) != 0) {
    _free(lVar8);
  }
  if (*(long *)(param_1 + 0x528) != -0x8000000000000000) {
    if (*(long *)(param_1 + 0x528) != 0) {
      _free(*(undefined8 *)(param_1 + 0x530));
    }
    if (*(long *)(param_1 + 0x540) != 0) {
      _free(*(undefined8 *)(param_1 + 0x548));
    }
  }
  FUN_1033dcb78(param_1 + 0x628);
  uVar4 = *(ulong *)(param_1 + 0x5f8);
  if (uVar4 != 0x8000000000000006) {
    uVar9 = uVar4 ^ 0x8000000000000000;
    if (-1 < (long)uVar4) {
      uVar9 = 1;
    }
    if (uVar9 == 1) {
      if (uVar4 != 0) {
        _free(*(undefined8 *)(param_1 + 0x600));
      }
      if (*(long *)(param_1 + 0x610) == 0) goto LAB_1033b1954;
      lVar2 = 0x20;
    }
    else {
      if (((uVar9 != 3) && (uVar9 != 4)) || (*(long *)(param_1 + 0x600) == 0)) goto LAB_1033b1954;
      lVar2 = 0x10;
    }
    _free(*(undefined8 *)(param_1 + 0x5f8 + lVar2));
  }
LAB_1033b1954:
  FUN_1033f2770(param_1 + 0x678);
  if (*(long *)(param_1 + 0x5b0) != -0x7ffffffffffffffb) {
    func_0x000103382b94(param_1 + 0x5b0);
  }
  if ((*(long *)(param_1 + 0x558) != -0x8000000000000000) && (*(long *)(param_1 + 0x558) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x560));
  }
  if ((*(long *)(param_1 + 0x570) != -0x8000000000000000) && (*(long *)(param_1 + 0x570) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x578));
  }
  FUN_1033dc674(param_1 + 0x468);
  lVar2 = **(long **)(param_1 + 0x7a0);
  **(long **)(param_1 + 0x7a0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hba634131488fc00fE(param_1 + 0x7a0);
  }
  lVar2 = **(long **)(param_1 + 0x7a8);
  **(long **)(param_1 + 0x7a8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(param_1 + 0x7a8);
  }
  lVar2 = **(long **)(param_1 + 0x7b0);
  **(long **)(param_1 + 0x7b0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4208ae9412cf0031E(param_1 + 0x7b0);
  }
  lVar2 = **(long **)(param_1 + 0x7b8);
  **(long **)(param_1 + 0x7b8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha1e621b382a177a8E(param_1 + 0x7b8);
  }
  lVar2 = **(long **)(param_1 + 0x7c0);
  **(long **)(param_1 + 0x7c0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    if (*(long *)(param_1 + 0x7c0) != -1) {
      plVar3 = (long *)(*(long *)(param_1 + 0x7c0) + 8);
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)();
        return;
      }
    }
    return;
  }
  return;
}

