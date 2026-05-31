
void FUN_100cd2028(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0xa1) == '\x03') {
    if (*(char *)(param_1 + 0x1b88) == '\x03') {
      if (*(char *)(param_1 + 0x1b80) == '\x03') {
        FUN_100d1ddbc(param_1 + 0x290);
      }
      FUN_100df5b9c(param_1 + 0xd8);
    }
  }
  else {
    if (*(char *)(param_1 + 0xa1) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x1d30) == '\x03') {
      FUN_100d4e420(param_1 + 0xd8);
      *(undefined1 *)(param_1 + 0x1d31) = 0;
      lVar1 = *(long *)(param_1 + 0x70);
      lVar2 = *(long *)(param_1 + 0x78);
      goto joined_r0x000100cd20e8;
    }
    if ((*(char *)(param_1 + 0x1d30) == '\0') && (*(long *)(param_1 + 0xa8) != 0)) {
      _free(*(undefined8 *)(param_1 + 0xb0));
      lVar1 = *(long *)(param_1 + 0x70);
      lVar2 = *(long *)(param_1 + 0x78);
      goto joined_r0x000100cd20e8;
    }
  }
  lVar1 = *(long *)(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x78);
joined_r0x000100cd20e8:
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    _free(lVar1);
  }
  if (((*(byte *)(param_1 + 0xa0) & 1) != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
    _free(*(undefined8 *)(param_1 + 0xb0));
  }
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x28));
  return;
}

