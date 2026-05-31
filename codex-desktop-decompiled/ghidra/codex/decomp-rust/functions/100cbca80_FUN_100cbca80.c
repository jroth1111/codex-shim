
void FUN_100cbca80(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  
  bVar2 = *(byte *)(param_1 + 0x26);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      if (*param_1 != 0) {
        _free(param_1[1]);
      }
      lVar1 = param_1[4];
      lVar3 = param_1[5];
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (param_1[3] != 0) {
        _free(lVar1);
      }
      if (param_1[6] == -0x8000000000000000) {
        return;
      }
      lVar1 = param_1[7];
      lVar3 = param_1[8];
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar1 + 0x20);
        do {
          if (puVar4[-4] != 0) {
            _free(puVar4[-3]);
          }
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 7;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (param_1[6] != 0) {
        _free(lVar1);
      }
      lVar1 = param_1[10];
      lVar3 = param_1[0xb];
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (param_1[9] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
    if (bVar2 != 3) {
      return;
    }
    if ((char)param_1[0x3b9] == '\x03') {
      if ((char)param_1[0x3b8] == '\x03') {
        FUN_100d1ddbc(param_1 + 0x9a);
      }
      FUN_100df5b9c(param_1 + 99);
    }
  }
  else if (bVar2 == 4) {
    if ((char)param_1[0x348] == '\x03') {
      FUN_100d1ddbc(param_1 + 0x2a);
    }
    FUN_100df5b9c(param_1 + 0x349);
  }
  else {
    if (bVar2 != 5) {
      return;
    }
    FUN_100d4e420(param_1 + 0x27);
  }
  if (param_1[0x23] != 0) {
    _free(param_1[0x24]);
  }
  if (param_1[0x20] != 0) {
    _free(param_1[0x21]);
  }
  if ((*(byte *)((long)param_1 + 0x131) & 1) != 0) {
    if (param_1[0x12] != 0) {
      _free(param_1[0x13]);
    }
    lVar1 = param_1[0x16];
    lVar3 = param_1[0x17];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[0x15] != 0) {
      _free(lVar1);
    }
    if (param_1[0x18] != -0x8000000000000000) {
      FUN_100e24ac8();
    }
  }
  *(undefined1 *)((long)param_1 + 0x131) = 0;
  return;
}

