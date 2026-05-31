
void FUN_100cacfa8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 8);
    do {
      if (((plVar3[-1] == 0) || (plVar3[-1] == 2)) && (*plVar3 != 0)) {
        _free(plVar3[1]);
      }
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

