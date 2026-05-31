
void FUN_100d6e8f0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  cVar1 = *(char *)(param_1 + 0x430);
  if (cVar1 == '\0') {
    FUN_100e1d37c(param_1);
    lVar3 = *(long *)(param_1 + 0x1b8);
    lVar5 = *(long *)(param_1 + 0x1c0) + 1;
    lVar2 = lVar3;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e4623c(lVar2);
      lVar2 = lVar2 + 0xa0;
    }
    if (*(long *)(param_1 + 0x1b0) != 0) {
      _free(lVar3);
    }
    if (*(long *)(param_1 + 0x1c8) != -0x8000000000000000) {
      if (*(long *)(param_1 + 0x1c8) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1d0));
      }
      lVar5 = *(long *)(param_1 + 0x1e8);
      lVar3 = *(long *)(param_1 + 0x1f0);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar5 + 0x20);
        do {
          if (puVar4[-4] != 0) {
            _free(puVar4[-3]);
          }
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 6;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (*(long *)(param_1 + 0x1e0) != 0) {
        _free(lVar5);
      }
      lVar5 = *(long *)(param_1 + 0x200);
      lVar3 = *(long *)(param_1 + 0x208);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar5 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (*(long *)(param_1 + 0x1f8) != 0) {
        _free(lVar5);
      }
      lVar5 = *(long *)(param_1 + 0x218);
      lVar3 = *(long *)(param_1 + 0x220);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar5 + 8);
        do {
          if ((puVar4[-1] & 0x7fffffffffffffff) != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 5;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (*(long *)(param_1 + 0x210) != 0) {
        _free(lVar5);
      }
      lVar5 = *(long *)(param_1 + 0x230);
      lVar3 = *(long *)(param_1 + 0x238);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar5 + 0x20);
        do {
          if (puVar4[-4] != 0) {
            _free(puVar4[-3]);
          }
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 6;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (*(long *)(param_1 + 0x228) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_100d4b2dc(param_1 + 0x438);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_100d59c78(param_1 + 0x438);
    }
    *(undefined2 *)(param_1 + 0x431) = 0;
    *(undefined1 *)(param_1 + 0x433) = 0;
  }
  return;
}

