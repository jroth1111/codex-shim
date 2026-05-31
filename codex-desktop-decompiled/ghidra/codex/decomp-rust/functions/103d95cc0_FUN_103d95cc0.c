
void FUN_103d95cc0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _free(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x58) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x58) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x60));
    uVar2 = *(ulong *)(param_1 + 0x28);
  }
  if ((uVar2 & 0x7fffffffffffffff) == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x30));
    lVar4 = *(long *)(param_1 + 0x40);
  }
  if (lVar4 != -0x8000000000000000) {
    lVar1 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

