
void FUN_1039fd918(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      if (*(long *)(lVar1 + lVar2) != 0) {
        _free(*(undefined8 *)(lVar1 + lVar2 + 8));
      }
      if (*(char *)(lVar1 + lVar2 + 0x18) != '\a') {
        func_0x0001039fbf1c();
      }
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

