
void FUN_100cbaf28(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (param_1[3] != -0x7ffffffffffffffb) {
      FUN_100de6690();
    }
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  return;
}

