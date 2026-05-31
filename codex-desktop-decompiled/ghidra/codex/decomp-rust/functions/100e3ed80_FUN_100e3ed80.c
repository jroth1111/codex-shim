
void FUN_100e3ed80(long *param_1)

{
  if (*param_1 != -0x8000000000000000) {
    FUN_100e502dc();
    if (param_1[0x10] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0x11]);
      return;
    }
  }
  return;
}

