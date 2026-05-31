
void FUN_100d6d9b4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  func_0x000100df6bcc();
  plVar3 = *(long **)(param_1 + 0x50);
  if (((ulong)plVar3 & 1) == 0) {
    lVar1 = plVar3[4];
    plVar3[4] = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      if (*plVar3 != 0) {
        _free(plVar3[1]);
      }
      goto LAB_100d6da24;
    }
  }
  else if (*(long *)(param_1 + 0x48) + ((ulong)plVar3 >> 5) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x38) - ((ulong)plVar3 >> 5));
LAB_100d6da24:
    _free(plVar3);
  }
  plVar3 = *(long **)(param_1 + 0x60);
  lVar1 = *plVar3;
  *plVar3 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar1 = *(long *)(param_1 + 0x60);
  if (*(long *)(lVar1 + 0x38) != 2) {
    FUN_105c9f2c4();
    plVar3 = *(long **)(lVar1 + 0x88);
    if (((ulong)plVar3 & 1) == 0) {
      lVar2 = plVar3[4];
      plVar3[4] = lVar2 + -1;
      LORelease();
      if (lVar2 != 1) goto LAB_105ca7c20;
      if (*plVar3 != 0) {
        _free(plVar3[1]);
      }
    }
    else {
      if (*(long *)(lVar1 + 0x80) + ((ulong)plVar3 >> 5) == 0) goto LAB_105ca7c20;
      plVar3 = (long *)(*(long *)(lVar1 + 0x70) - ((ulong)plVar3 >> 5));
    }
    _free(plVar3);
  }
LAB_105ca7c20:
  if (lVar1 != -1) {
    lVar2 = *(long *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

