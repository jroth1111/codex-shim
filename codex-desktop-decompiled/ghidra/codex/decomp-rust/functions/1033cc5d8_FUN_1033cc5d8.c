
void FUN_1033cc5d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2] + 1;
  lVar2 = lVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    func_0x00010339ed3c(lVar2);
    lVar2 = lVar2 + 0x208;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

