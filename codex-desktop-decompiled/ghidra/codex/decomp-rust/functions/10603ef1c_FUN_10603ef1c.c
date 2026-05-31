
void FUN_10603ef1c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) {
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar1 + 0x10);
      do {
        if ((plVar3[-2] != 0) && (plVar3[-1] != 0)) {
          if (*plVar3 != 0) {
            _free();
          }
          if (plVar3[2] != 0) {
            _free(plVar3[1]);
          }
        }
        plVar3 = plVar3 + 9;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      _free(lVar1);
    }
    if (param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[3]);
      return;
    }
  }
  return;
}

