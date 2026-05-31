
void FUN_100e491e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((-0x7fffffffffffffff < lVar1) && (FUN_100de6690(param_1 + 3), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[1]);
    return;
  }
  return;
}

