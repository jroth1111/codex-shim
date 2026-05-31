
void FUN_100df0ef4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    _free(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    _free(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_100cb56bc();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    _free(*(undefined8 *)(param_1 + 0x48));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_100e7be48(uVar1,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x18) != 0) {
    _free(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x40) + 1;
  lVar3 = lVar2 + 0x38;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
              (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
    lVar3 = lVar3 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

