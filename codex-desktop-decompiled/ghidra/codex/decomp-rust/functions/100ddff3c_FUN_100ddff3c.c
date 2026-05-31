
void FUN_100ddff3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_100e368e0(param_1 + 0x110);
  FUN_100e2b8a8(param_1);
  if (*(long *)(param_1 + 200) == -0x8000000000000000 || *(long *)(param_1 + 200) == 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(param_1 + 0xc0);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0xd0));
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(param_1 + 0xc0);
  }
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
  if (*(long *)(param_1 + 0xb0) != 0) {
    _free(lVar1);
  }
  if (*(long *)(param_1 + 0xe0) == -0x8000000000000000 || *(long *)(param_1 + 0xe0) == 0) {
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0xe8));
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x100));
    return;
  }
  return;
}

