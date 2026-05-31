
void FUN_100e7d17c(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  lVar2 = 0;
  if (3 < uVar1) {
    lVar2 = uVar1 - 4;
  }
  if (1 < lVar2) {
    if (lVar2 == 2) {
      if (param_1[7] == 0x8000000000000000 || param_1[7] == 0) {
        uVar1 = param_1[10];
      }
      else {
        _free(param_1[8]);
        uVar1 = param_1[10];
      }
      if ((uVar1 & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar1 = param_1[0xb];
    }
    else {
      if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
        uVar1 = param_1[4];
      }
      else {
        _free(param_1[2]);
        uVar1 = param_1[4];
      }
      if ((uVar1 & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar1 = param_1[5];
    }
    goto LAB_100e7d620;
  }
  if (lVar2 == 0) {
    lVar2 = uVar1 - 2;
    if (uVar1 < 2) {
      lVar2 = 1;
    }
    if (lVar2 == 0) {
      if (param_1[1] == 0) {
        if ((param_1[5] != 0x8000000000000000) && (param_1[5] != 0)) {
          _free(param_1[6]);
        }
        if ((param_1[8] != 0x8000000000000000) && (param_1[8] != 0)) {
          _free(param_1[9]);
        }
        uVar1 = param_1[3];
        uVar4 = param_1[4];
        if (uVar4 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      else {
        if ((param_1[5] != 0x8000000000000000) && (param_1[5] != 0)) {
          _free(param_1[6]);
        }
        if ((param_1[8] != 0x8000000000000000) && (param_1[8] != 0)) {
          _free(param_1[9]);
        }
        uVar1 = param_1[3];
        uVar4 = param_1[4];
        if (uVar4 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 0x20);
          do {
            if (puVar5[-4] != 0) {
              _free(puVar5[-3]);
            }
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 6;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      if (param_1[2] != 0) {
        _free(uVar1);
      }
      if ((param_1[0xb] & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar1 = param_1[0xc];
    }
    else if (lVar2 == 1) {
      if (uVar1 == 0) {
        if ((param_1[8] != 0x8000000000000000) && (param_1[8] != 0)) {
          _free(param_1[9]);
        }
        if ((param_1[0xb] != 0x8000000000000000) && (param_1[0xb] != 0)) {
          _free(param_1[0xc]);
        }
        uVar1 = param_1[6];
        uVar4 = param_1[7];
        if (uVar4 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (param_1[5] != 0) {
          _free(uVar1);
        }
        uVar4 = param_1[0xe];
        if (uVar4 == 0x8000000000000000) {
          return;
        }
        uVar1 = param_1[0xf];
        uVar3 = param_1[0x10];
        if (uVar3 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      else {
        if ((param_1[8] != 0x8000000000000000) && (param_1[8] != 0)) {
          _free(param_1[9]);
        }
        if ((param_1[0xb] != 0x8000000000000000) && (param_1[0xb] != 0)) {
          _free(param_1[0xc]);
        }
        uVar1 = param_1[6];
        uVar4 = param_1[7];
        if (uVar4 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 0x20);
          do {
            if (puVar5[-4] != 0) {
              _free(puVar5[-3]);
            }
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 6;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (param_1[5] != 0) {
          _free(uVar1);
        }
        uVar4 = param_1[0xe];
        if (uVar4 == 0x8000000000000000) {
          return;
        }
        uVar1 = param_1[0xf];
        uVar3 = param_1[0x10];
        if (uVar3 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      if (uVar4 == 0) {
        return;
      }
    }
    else {
      if ((param_1[4] != 0x8000000000000000) && (param_1[4] != 0)) {
        _free(param_1[5]);
      }
      if ((param_1[7] != 0x8000000000000000) && (param_1[7] != 0)) {
        _free(param_1[8]);
      }
      uVar1 = param_1[2];
      uVar4 = param_1[3];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)(uVar1 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (param_1[1] != 0) {
        _free(uVar1);
      }
      uVar1 = param_1[10];
      if (uVar1 != 0x8000000000000000) {
        uVar4 = param_1[0xb];
        uVar3 = param_1[0xc];
        if (uVar3 != 0) {
          puVar5 = (undefined8 *)(uVar4 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (uVar1 != 0) {
          _free(uVar4);
        }
      }
      if ((param_1[0xd] & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar1 = param_1[0xe];
    }
    goto LAB_100e7d620;
  }
  if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
    if (param_1[4] != 0x8000000000000000 && param_1[4] != 0) goto LAB_100e7d424;
LAB_100e7d28c:
    uVar1 = param_1[7];
  }
  else {
    _free(param_1[2]);
    if (param_1[4] == 0x8000000000000000 || param_1[4] == 0) goto LAB_100e7d28c;
LAB_100e7d424:
    _free(param_1[5]);
    uVar1 = param_1[7];
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    return;
  }
  uVar1 = param_1[8];
LAB_100e7d620:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar1);
  return;
}

