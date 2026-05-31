
void FUN_100e2d724(long *param_1)

{
  FUN_100df5b9c(param_1 + 10);
  if (*param_1 != -0x8000000000000000) {
    FUN_100e24ac8(param_1);
  }
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[7]);
  return;
}

