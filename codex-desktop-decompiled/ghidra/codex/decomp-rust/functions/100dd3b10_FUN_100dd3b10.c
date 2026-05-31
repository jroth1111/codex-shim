
void FUN_100dd3b10(long param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100deb62c();
  func_0x000100e3c8d4(param_1 + 0x20);
  FUN_100d6d870(param_1 + 0x38);
  plVar2 = *(long **)(param_1 + 0x1e0);
  if (((ulong)plVar2 & 1) == 0) {
    lVar1 = plVar2[4];
    plVar2[4] = lVar1 + -1;
    LORelease();
    if (lVar1 != 1) {
      return;
    }
    if (*plVar2 != 0) {
      _free(plVar2[1]);
    }
  }
  else {
    if (*(long *)(param_1 + 0x1d8) + ((ulong)plVar2 >> 5) == 0) {
      return;
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x1c8) - ((ulong)plVar2 >> 5));
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar2);
  return;
}

