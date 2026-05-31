
void FUN_100e84ee8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x79) == '\x03') {
    FUN_100d7130c(param_1 + 0x108);
    if (*(long *)(param_1 + 0xb0) != 0) {
      _free(*(undefined8 *)(param_1 + 0xb8));
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      _free(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  else {
    if (*(char *)(param_1 + 0x79) != '\x04') {
      return;
    }
    FUN_100d7130c(param_1 + 0x98);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _free(*(undefined8 *)(param_1 + 0x88));
  }
  lVar1 = *(long *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x68);
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
  if (*(long *)(param_1 + 0x58) != 0) {
    _free(lVar1);
  }
  FUN_100cf3ef4(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

