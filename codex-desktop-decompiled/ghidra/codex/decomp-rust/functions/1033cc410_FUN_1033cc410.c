
void FUN_1033cc410(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar1 = lVar2;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    if (*(long *)(lVar1 + 0x18) != -0x8000000000000000 && *(long *)(lVar1 + 0x18) != 0) {
      _free(*(undefined8 *)(lVar1 + 0x20));
    }
    func_0x0001033d63c0(lVar1);
    lVar1 = lVar1 + 0x30;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

