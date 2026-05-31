
void FUN_103943294(long *param_1)

{
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if ((char)param_1[5] != '\x02') {
    __ZN64__LT_tempfile__dir__TempDir_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3560df96776ed712E
              (param_1 + 3);
    if (param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[3]);
      return;
    }
  }
  return;
}

