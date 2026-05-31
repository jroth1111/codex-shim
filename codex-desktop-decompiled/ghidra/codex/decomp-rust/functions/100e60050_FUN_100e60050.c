
void FUN_100e60050(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_2 - param_1 != 0) {
    uVar1 = (ulong)(param_2 - param_1) / 0x18;
    puVar2 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

