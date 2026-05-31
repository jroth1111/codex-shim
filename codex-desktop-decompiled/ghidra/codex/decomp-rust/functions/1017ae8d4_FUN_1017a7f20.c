
void FUN_1017a7f20(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*param_1 == 6) {
    param_1 = param_1 + 1;
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar5 = plVar4[10];
    do {
      uVar3 = uVar5;
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_1017a7f68;
      uVar5 = plVar4[10];
    } while (uVar5 != uVar3);
    plVar4[10] = uVar3 | 2;
LAB_1017a7f68:
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar4[8] + 0x10))(plVar4[9]);
    }
  }
  else {
    if (*param_1 != 4 || (short)param_1[5] != 0x12) {
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
    param_1 = param_1 + 7;
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar5 = plVar4[10];
    do {
      uVar3 = uVar5;
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_1017a7fd8;
      uVar5 = plVar4[10];
    } while (uVar5 != uVar3);
    plVar4[10] = uVar3 | 2;
LAB_1017a7fd8:
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar4[8] + 0x10))(plVar4[9]);
    }
  }
  lVar1 = *plVar4;
  *plVar4 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar1 = *param_1;
  uVar5 = *(ulong *)(lVar1 + 0x50);
  if ((uVar5 & 1) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x40) + 0x18))(*(undefined8 *)(lVar1 + 0x48));
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0x18))(*(undefined8 *)(lVar1 + 0x38));
  }
  if (1 < *(long *)(lVar1 + 0x10) - 0x15U) {
    FUN_1017a49cc(lVar1 + 0x10);
  }
  if (lVar1 != -1) {
    lVar2 = *(long *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

