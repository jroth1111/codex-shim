
void FUN_103af8684(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - (long)param_1[1]) >> 3) * -0x5075075075075075 + 1;
  plVar1 = (long *)param_1[1];
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    if (*plVar1 != 0) {
      _free(plVar1[1]);
    }
    FUN_103b12408(plVar1 + 3);
    plVar1 = plVar1 + 0x23;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

