
void FUN_100cc69d0(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  
  cVar2 = *(char *)(param_1 + 0x141);
  if (cVar2 == '\x03') {
    FUN_100e03d7c(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150));
  }
  else if (cVar2 == '\x04') {
    if (*(char *)(param_1 + 0x508) == '\x03') {
      FUN_100cbe7c8(param_1 + 0x1d8);
    }
    else if (*(char *)(param_1 + 0x508) == '\0') {
      FUN_100e0d524(param_1 + 0x150);
    }
  }
  else {
    if (cVar2 != '\x05') {
      return;
    }
    FUN_100cfddd4(param_1 + 0x148);
  }
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    _free(*(undefined8 *)(param_1 + 0x40));
  }
  lVar1 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x60);
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
  if (*(long *)(param_1 + 0x50) != 0) {
    _free(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
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
  if (*(long *)(param_1 + 0x68) != 0) {
    _free(lVar1);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _free(*(undefined8 *)(param_1 + 0x88));
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  lVar3 = *(long *)(param_1 + 0xa8);
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
  if (*(long *)(param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

