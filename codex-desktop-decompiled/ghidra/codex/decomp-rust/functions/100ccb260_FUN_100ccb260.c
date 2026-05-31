
void FUN_100ccb260(ulong *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  cVar1 = *(char *)((long)param_1 + 0x291);
  if (cVar1 == '\x03') {
    FUN_100cc8520(param_1 + 0x53);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_100cc85fc(param_1 + 0x53);
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      func_0x000100d50dec(param_1 + 0x71);
      FUN_100e02a24(param_1 + 0x59);
      if (param_1[0x56] != 0) {
        _free(param_1[0x57]);
      }
      if (param_1[0x53] != 0) {
        _free(param_1[0x54]);
      }
    }
    if (param_1[0x39] != 0) {
      _free(param_1[0x3a]);
    }
  }
  uVar2 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar2 = 9;
  }
  switch(uVar2) {
  case 0:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar2 = param_1[5];
    uVar3 = uVar2;
    for (uVar4 = param_1[6]; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_100e06c08(uVar3);
      uVar3 = uVar3 + 0x38;
    }
    goto code_r0x000100df5d10;
  case 1:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(uVar2 + 0x20);
      do {
        if (puVar5[-4] != 0) {
          _free(puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 6;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
code_r0x000100df5d10:
    if (param_1[4] == 0) {
      return;
    }
    break;
  case 2:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[4] != 0) {
      _free(uVar2);
    }
    if (param_1[7] == 0x8000000000000000) {
      return;
    }
    uVar2 = param_1[8];
    uVar3 = param_1[9];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(uVar2 + 0x20);
      do {
        if (puVar5[-4] != 0) {
          _free(puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 7;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[7] != 0) {
      _free(uVar2);
    }
    uVar2 = param_1[0xb];
    uVar3 = param_1[0xc];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[10] == 0) {
      return;
    }
    break;
  case 3:
  case 6:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    uVar2 = param_1[5];
    break;
  case 4:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[4] != 0) {
      _free(uVar2);
    }
    uVar2 = param_1[8];
    uVar3 = param_1[9];
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(uVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    break;
  case 5:
    if (param_1[8] != 0) {
      _free(param_1[9]);
    }
    if (param_1[0xb] != 0) {
      _free(param_1[0xc]);
    }
    uVar2 = param_1[1];
    if ((long)uVar2 < 2) {
      if (uVar2 == 0) {
        if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
          uVar3 = param_1[5];
        }
        else {
          _free(param_1[3]);
          uVar3 = param_1[5];
        }
        if (uVar3 != 0x8000000000000000) {
          uVar2 = param_1[6];
          uVar4 = param_1[7];
          if (uVar4 != 0) {
            puVar5 = (undefined8 *)(uVar2 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (uVar3 != 0) break;
        }
      }
      else if ((param_1[2] & 0x7fffffffffffffff) != 0) {
        uVar2 = param_1[3];
        break;
      }
    }
    else if (uVar2 == 2) {
      if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
        uVar2 = param_1[5];
      }
      else {
        _free(param_1[3]);
        uVar2 = param_1[5];
      }
      if ((uVar2 & 0x7fffffffffffffff) != 0) {
        uVar2 = param_1[6];
        break;
      }
    }
    return;
  case 7:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[10] == 0x8000000000000000 || param_1[10] == 0) {
      uVar2 = param_1[7];
    }
    else {
      _free(param_1[0xb]);
      uVar2 = param_1[7];
    }
    if (uVar2 != 0) {
      _free(param_1[8]);
    }
    if ((param_1[0xd] & 0x7fffffffffffffff) == 0) {
      return;
    }
    uVar2 = param_1[0xe];
    break;
  case 8:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    FUN_100cdf624(param_1 + 10);
    if (param_1[4] == 0x8000000000000000 || param_1[4] == 0) {
      uVar2 = param_1[7];
    }
    else {
      _free(param_1[5]);
      uVar2 = param_1[7];
    }
    if (uVar2 == 0x8000000000000000) {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
    uVar2 = param_1[8];
    break;
  case 9:
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    FUN_100de6690(param_1 + 0x28);
    if ((param_1[9] != 0x8000000000000000) && (param_1[9] != 0)) {
      _free(param_1[10]);
    }
    if ((param_1[0xc] != 0x8000000000000000) && (param_1[0xc] != 0)) {
      _free(param_1[0xd]);
    }
    if (param_1[0xf] != 0x8000000000000000) {
      func_0x000100e00868();
    }
    if ((param_1[0x25] & 0x7fffffffffffffff) == 0) {
      return;
    }
    uVar2 = param_1[0x26];
    break;
  default:
    if (param_1[1] == 0) {
      return;
    }
    uVar2 = param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

