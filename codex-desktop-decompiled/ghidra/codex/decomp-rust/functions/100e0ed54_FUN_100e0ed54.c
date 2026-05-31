
void FUN_100e0ed54(ulong *param_1)

{
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    if (param_1[3] != 0x8000000000000000 && param_1[3] != 0) {
LAB_100e0edb4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[4]);
      return;
    }
  }
  else {
    _free(param_1[1]);
    if (param_1[3] != 0x8000000000000000 && param_1[3] != 0) goto LAB_100e0edb4;
  }
  return;
}

