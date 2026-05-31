
void FUN_103da0d28(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[5];
  if (plVar4 != (long *)0x0) {
    uVar1 = plVar4[6];
    do {
      uVar3 = uVar1;
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_103da0d6c;
      uVar1 = plVar4[6];
    } while (uVar1 != uVar3);
    plVar4[6] = uVar3 | 2;
LAB_103da0d6c:
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar4[4] + 0x10))(plVar4[5]);
    }
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105ca7830(param_1 + 5);
    }
  }
  if (*param_1 != -0x7fffffffffffffff) {
    plVar4 = (long *)param_1[3];
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      *plVar4 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if (*param_1 != -0x8000000000000000 && *param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  return;
}

