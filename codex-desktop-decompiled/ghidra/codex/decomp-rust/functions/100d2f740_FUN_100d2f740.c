
void FUN_100d2f740(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[1];
  lVar3 = param_1[2] + 1;
  plVar2 = plVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    if (*plVar2 != 0) {
      _free(plVar2[1]);
    }
    func_0x000100e301f0(plVar2 + 3);
    plVar2 = plVar2 + 0x1f;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar1);
    return;
  }
  return;
}

