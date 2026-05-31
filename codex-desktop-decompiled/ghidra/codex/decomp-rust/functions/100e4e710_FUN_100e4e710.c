
void FUN_100e4e710(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  FUN_100e28b64(lVar1,param_1[2]);
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

