
void FUN_100de394c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
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
  if (*param_1 != 0) {
    _free(lVar3);
  }
  uVar2 = param_1[3];
  uVar1 = uVar2 ^ 0x8000000000000000;
  if (-1 < (long)uVar2) {
    uVar1 = 2;
  }
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      if (uVar2 != 0) {
        _free(param_1[4]);
      }
      if (param_1[6] != -0x8000000000000000) {
        func_0x000100df5294();
      }
      if (param_1[0xc] == -0x8000000000000000) {
        return;
      }
      if (param_1[0xc] != 0) {
        _free(param_1[0xd]);
      }
      if ((param_1[0xf] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      lVar3 = param_1[0x10];
      goto LAB_100df0ed0;
    }
    if ((uVar1 != 3) && (uVar1 == 4)) {
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      lVar3 = param_1[8];
      lVar4 = param_1[9];
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
      if (param_1[7] == 0) {
        return;
      }
      goto LAB_100df0ed0;
    }
  }
  if (param_1[4] == 0) {
    return;
  }
  lVar3 = param_1[5];
LAB_100df0ed0:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

