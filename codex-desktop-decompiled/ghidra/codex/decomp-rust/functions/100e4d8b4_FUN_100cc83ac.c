
void FUN_100cc83ac(long *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  cVar2 = (char)param_1[0x17];
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      FUN_100e82cc0(param_1 + 0x18);
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      FUN_100d1ddbc(param_1 + 0x18);
    }
    if (((*(byte *)((long)param_1 + 0xbb) & 1) != 0) && (param_1[0xe] != 0)) {
      _free(param_1[0xf]);
    }
    if ((*(byte *)((long)param_1 + 0xb9) & 1) != 0) {
      lVar1 = param_1[0x12];
      lVar3 = param_1[0x13];
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
      if (param_1[0x11] != 0) {
        _free(lVar1);
      }
    }
    if ((*(byte *)((long)param_1 + 0xba) & 1) != 0) {
      lVar1 = param_1[0x15];
      lVar3 = param_1[0x16];
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar1 + 8);
        do {
          if (((plVar5[-1] == 0) || (plVar5[-1] == 2)) && (*plVar5 != 0)) {
            _free(plVar5[1]);
          }
          plVar5 = plVar5 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (param_1[0x14] != 0) {
        _free(lVar1);
      }
    }
    *(undefined1 *)((long)param_1 + 0xbb) = 0;
    *(undefined2 *)((long)param_1 + 0xb9) = 0;
    return;
  }
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
  lVar1 = param_1[7];
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar1 + 8);
    do {
      if (((plVar5[-1] == 0) || (plVar5[-1] == 2)) && (*plVar5 != 0)) {
        _free(plVar5[1]);
      }
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[6] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar1);
  return;
}

