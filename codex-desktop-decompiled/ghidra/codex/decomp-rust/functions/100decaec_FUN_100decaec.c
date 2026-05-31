
void FUN_100decaec(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    _free(lVar2);
  }
  lVar2 = param_1[3];
  if (lVar2 != -0x7ffffffffffffffc) {
    uVar1 = lVar2 + 0x8000000000000001U & lVar2 >> 0x3f;
    if ((long)uVar1 < 2) {
      if (uVar1 == 0) {
        if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
          _free(param_1[7]);
        }
        if (lVar2 != 0) {
          _free(param_1[4]);
        }
        if ((param_1[9] & 0x7fffffffffffffffU) == 0) {
          return;
        }
        lVar2 = 0x38;
        goto LAB_100e49360;
      }
      if (uVar1 == 1) {
        if (param_1[4] == 0) {
          return;
        }
        lVar2 = 0x10;
        goto LAB_100e49360;
      }
    }
    else if (uVar1 == 2) {
      if (param_1[4] == -0x8000000000000000 || param_1[4] == 0) {
        uVar1 = param_1[7];
      }
      else {
        _free(param_1[5]);
        uVar1 = param_1[7];
      }
      if ((uVar1 & 0x7fffffffffffffff) == 0) {
        return;
      }
      lVar2 = 0x28;
      goto LAB_100e49360;
    }
    if (param_1[6] != 0) {
      lVar2 = 0x20;
LAB_100e49360:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)(param_1 + 3) + lVar2));
      return;
    }
  }
  return;
}

