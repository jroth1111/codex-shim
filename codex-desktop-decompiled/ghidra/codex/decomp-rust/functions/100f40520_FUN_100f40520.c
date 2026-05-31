
void FUN_100f40520(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}

