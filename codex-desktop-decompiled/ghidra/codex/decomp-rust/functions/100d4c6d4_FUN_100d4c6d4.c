
void FUN_100d4c6d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x778) != '\0') {
    if (*(char *)(param_1 + 0x778) == '\x03') {
      FUN_100dce01c(param_1 + 0xd0);
      *(undefined2 *)(param_1 + 0x779) = 0;
    }
    return;
  }
  FUN_100de6690(param_1 + 0x60);
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

