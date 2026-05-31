
void FUN_100deb504(long *param_1)

{
  if (((*param_1 == 2) || (*param_1 == 4)) && (param_1[2] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[3]);
    return;
  }
  return;
}

