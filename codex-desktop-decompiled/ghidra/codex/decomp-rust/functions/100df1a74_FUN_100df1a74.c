
void FUN_100df1a74(byte *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 != 0x1a && 0x18 < *param_1) {
    plVar2 = *(long **)(param_1 + 8);
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 8);
      if (lVar1 != -1) {
        lVar3 = *(long *)(param_1 + 0x10);
        plVar2 = (long *)(lVar1 + 8);
        lVar1 = *plVar2;
        *plVar2 = lVar1 + -1;
        LORelease();
        if ((lVar1 == 1) && (DataMemoryBarrier(2,1), 7 < lVar3 + 0x17U)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)();
          return;
        }
      }
      return;
    }
  }
  return;
}

