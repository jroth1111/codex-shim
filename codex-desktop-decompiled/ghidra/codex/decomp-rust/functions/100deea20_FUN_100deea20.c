
void FUN_100deea20(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    _free(lVar2);
  }
  uVar1 = param_1[3];
  uVar3 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar3 = 2;
  }
  if (uVar3 == 0) {
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] == -0x8000000000000000 || param_1[7] == 0) {
      return;
    }
  }
  else {
    if (uVar3 == 1) {
      if ((param_1[4] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      lVar2 = param_1[5];
      goto code_r0x000108aa97c4;
    }
    if (uVar3 == 2) {
      lVar2 = param_1[4];
      lVar4 = param_1[5];
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (param_1[3] != 0) {
        _free(lVar2);
      }
      lVar2 = param_1[6];
      uVar3 = lVar2 + 0x8000000000000001U & lVar2 >> 0x3f;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            uVar3 = param_1[7] & 0x7fffffffffffffff;
          }
          else {
            uVar3 = param_1[7];
          }
          if (uVar3 != 0) {
            lVar2 = param_1[8];
            goto code_r0x000108aa97c4;
          }
        }
        return;
      }
      if (lVar2 != 0) {
        _free(param_1[7]);
      }
      if ((param_1[0xc] != -0x8000000000000000) && (param_1[0xc] != 0)) {
        _free(param_1[0xd]);
      }
      lVar2 = param_1[10];
      lVar4 = param_1[0xb];
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (param_1[9] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] == -0x8000000000000000) {
      return;
    }
    if (param_1[7] == 0) {
      return;
    }
  }
  lVar2 = param_1[8];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar2);
  return;
}

