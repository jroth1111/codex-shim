
void FUN_100cf8934(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  if (lVar2 == -0x7ffffffffffffffe) {
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    plVar1 = (long *)param_1[10];
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      *plVar1 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    lVar2 = param_1[8];
    lVar3 = param_1[9];
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  if (lVar2 != -0x7fffffffffffffff) {
    if (lVar2 != -0x8000000000000000) {
      lVar3 = param_1[1];
      lVar4 = param_1[2];
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar2 != 0) {
        _free(lVar3);
      }
    }
    lVar2 = param_1[3];
    if (lVar2 != -0x7fffffffffffffff) {
      if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
        _free(param_1[4]);
      }
      if ((param_1[6] != -0x8000000000000000) && (param_1[6] != 0)) {
        _free(param_1[7]);
      }
      if ((param_1[9] != -0x8000000000000000) && (param_1[9] != 0)) {
        _free(param_1[10]);
      }
      if ((param_1[0xc] != -0x8000000000000000) && (param_1[0xc] != 0)) {
        lVar2 = param_1[0xd];
        goto code_r0x000108aa97c4;
      }
    }
  }
  return;
}

