
void FUN_100da6ff8(long *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  bVar3 = *(byte *)(param_1 + 0xa3);
  if (bVar3 < 4) {
    if (bVar3 != 0) {
      if (bVar3 != 3) {
        return;
      }
      FUN_100c9749c(param_1 + 0xa4);
      goto LAB_100da7148;
    }
    lVar5 = param_1[1];
    lVar4 = lVar5;
    for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
      FUN_100e0f8ec(lVar4);
      lVar4 = lVar4 + 0x98;
    }
    if (*param_1 != 0) {
      _free(lVar5);
    }
    if ((char)param_1[0xa0] != '\x03') {
      if ((char)param_1[0xa0] != '\0') {
        return;
      }
      func_0x000100e3e028(param_1 + 5);
      if (param_1[0x1c] == -0x8000000000000000) {
        return;
      }
      if (param_1[0x1c] == 0) {
        return;
      }
      lVar4 = param_1[0x1d];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
    cVar2 = (char)param_1[0x48];
    if (cVar2 == '\0') {
      func_0x000100e3e028(param_1 + 0x20);
      if (param_1[0x37] != -0x8000000000000000 && param_1[0x37] != 0) {
        lVar4 = param_1[0x38];
        goto code_r0x000108aa97c4;
      }
    }
    else {
      if (cVar2 == '\x03') {
        func_0x000100e66b8c(param_1 + 0x49);
      }
      else {
        if (cVar2 != '\x04') {
          return;
        }
        if ((char)param_1[0x8a] == '\x03') {
          FUN_100ccec20(param_1 + 0x4f);
        }
        else if ((char)param_1[0x8a] == '\0') {
          lVar4 = param_1[0x4a];
          lVar5 = param_1[0x4b];
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)(lVar4 + 8);
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          if (param_1[0x49] != 0) {
            _free(lVar4);
          }
        }
        lVar5 = param_1[0x3f];
        lVar4 = lVar5;
        for (lVar1 = param_1[0x40]; lVar1 != 0; lVar1 = lVar1 + -1) {
          if (*(long *)(lVar4 + 0x98) != -0x8000000000000000 && *(long *)(lVar4 + 0x98) != 0) {
            _free(*(undefined8 *)(lVar4 + 0xa0));
          }
          FUN_100e0f8ec(lVar4);
          lVar4 = lVar4 + 0xb0;
        }
        if (param_1[0x3e] != 0) {
          _free(lVar5);
        }
        if ((param_1[0x44] != -0x8000000000000000) && (param_1[0x44] != 0)) {
          _free(param_1[0x45]);
        }
      }
      *(undefined2 *)((long)param_1 + 0x241) = 0;
    }
    return;
  }
  if (bVar3 == 4) {
    if ((char)param_1[0x13f] == '\x03') {
      FUN_100cb98e0(param_1 + 0xbf);
      goto LAB_100da7148;
    }
    if (((char)param_1[0x13f] != '\0') ||
       (func_0x000100e3e028(param_1 + 0xa4), (param_1[0xbb] & 0x7fffffffffffffffU) == 0))
    goto LAB_100da7148;
    lVar4 = param_1[0xbc];
  }
  else {
    if (bVar3 != 5) {
      return;
    }
    FUN_100ca19bc(param_1 + 0xab);
    lVar4 = param_1[0xa8];
    lVar5 = param_1[0xa9];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[0xa7] == 0) goto LAB_100da7148;
  }
  _free(lVar4);
LAB_100da7148:
  if ((*(byte *)((long)param_1 + 0x519) & 1) != 0) {
    if ((char)param_1[0x47c] == '\x03') {
      FUN_100cb98e0(param_1 + 0x3fc);
    }
    else if ((char)param_1[0x47c] == '\0') {
      func_0x000100e3e028(param_1 + 0x3e1);
      if ((param_1[0x3f8] != -0x8000000000000000) && (param_1[0x3f8] != 0)) {
        _free(param_1[0x3f9]);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x519) = 0;
  return;
}

