
void FUN_105596c30(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = param_1[3] - param_1[1];
    if (uVar2 != 0) {
      uVar2 = uVar2 >> 5;
      plVar3 = (long *)(param_1[1] + 8);
      do {
        if (((plVar3[-1] == 0) || (plVar3[-1] == 2)) && (*plVar3 != 0)) {
          _free(plVar3[1]);
        }
        plVar3 = plVar3 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[2] != 0) {
      _free(lVar1);
    }
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar2 = param_1[7] - param_1[5];
    if (uVar2 != 0) {
      uVar2 = uVar2 >> 5;
      plVar3 = (long *)(param_1[5] + 8);
      do {
        if (((plVar3[-1] == 0) || (plVar3[-1] == 2)) && (*plVar3 != 0)) {
          _free(plVar3[1]);
        }
        plVar3 = plVar3 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

