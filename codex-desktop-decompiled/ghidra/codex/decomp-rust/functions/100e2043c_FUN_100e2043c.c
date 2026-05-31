
void FUN_100e2043c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar1 + 0x38);
    do {
      if (plVar4[-3] != 0) {
        _free(plVar4[-2]);
      }
      if (plVar4[3] == -0x8000000000000000 || plVar4[3] == 0) {
        lVar2 = *plVar4;
      }
      else {
        _free(plVar4[4]);
        lVar2 = *plVar4;
      }
      if (lVar2 != 0) {
        _free(plVar4[1]);
      }
      if (plVar4[6] != -0x8000000000000000 && plVar4[6] != 0) {
        _free(plVar4[7]);
      }
      plVar4 = plVar4 + 0x11;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

