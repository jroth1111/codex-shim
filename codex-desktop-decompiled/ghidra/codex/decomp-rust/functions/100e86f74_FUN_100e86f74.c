
void FUN_100e86f74(long *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  cVar2 = (char)param_1[0x2f];
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      FUN_100e48b38(param_1 + 0x30);
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      if ((char)param_1[0x7a] == '\x03') {
        FUN_100cf55f4(param_1 + 0x36);
      }
      else if ((char)param_1[0x7a] == '\0') {
        lVar3 = param_1[0x31];
        lVar4 = param_1[0x32];
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)(lVar3 + 0x20);
          do {
            if (puVar5[-4] != 0) {
              _free(puVar5[-3]);
            }
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 6;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        if (param_1[0x30] != 0) {
          _free(lVar3);
        }
      }
      lVar4 = param_1[0x23];
      lVar3 = lVar4;
      for (lVar1 = param_1[0x24]; lVar1 != 0; lVar1 = lVar1 + -1) {
        if (*(long *)(lVar3 + 0x98) != -0x8000000000000000 && *(long *)(lVar3 + 0x98) != 0) {
          _free(*(undefined8 *)(lVar3 + 0xa0));
        }
        FUN_100e0f8ec(lVar3);
        lVar3 = lVar3 + 0xb0;
      }
      if (param_1[0x22] != 0) {
        _free(lVar4);
      }
      if ((param_1[0x28] != -0x8000000000000000) && (param_1[0x28] != 0)) {
        _free(param_1[0x29]);
      }
      if ((param_1[0x2b] != -0x8000000000000000) && (param_1[0x2b] != 0)) {
        _free(param_1[0x2c]);
      }
    }
    *(undefined1 *)((long)param_1 + 0x179) = 0;
    return;
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) {
    lVar3 = param_1[6];
  }
  else {
    _free(param_1[0xd]);
    lVar3 = param_1[6];
  }
  if (lVar3 != 0) {
    _free(param_1[7]);
  }
  if (param_1[9] != 0) {
    _free(param_1[10]);
  }
  if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
    _free(param_1[0x10]);
  }
  if (param_1[0x12] != -0x8000000000000000) {
    if (param_1[0x12] != 0) {
      _free(param_1[0x13]);
    }
    if (param_1[0x15] != 0) {
      _free(param_1[0x16]);
    }
    if ((param_1[0x18] != -0x8000000000000000) && (param_1[0x18] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0x19]);
      return;
    }
  }
  return;
}

