
void FUN_100cf55f4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((char)param_1[0x43] == '\0') {
    lVar1 = param_1[1];
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 6;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  else if ((char)param_1[0x43] == '\x03') {
    FUN_100ccb608(param_1 + 0x20);
    if (param_1[0x1c] != 0) {
      _free(param_1[0x1d]);
    }
    *(undefined1 *)((long)param_1 + 0x219) = 0;
    uVar2 = param_1[0x12] - param_1[0x10];
    if (uVar2 != 0) {
      uVar2 = uVar2 / 0x30;
      puVar3 = (undefined8 *)(param_1[0x10] + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 6;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[0x11] != 0) {
      _free(param_1[0xf]);
    }
    lVar1 = param_1[0xd];
    lVar4 = param_1[0xe];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 6;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (param_1[0xc] != 0) {
      _free(lVar1);
    }
    *(undefined1 *)((long)param_1 + 0x21a) = 0;
  }
  return;
}

