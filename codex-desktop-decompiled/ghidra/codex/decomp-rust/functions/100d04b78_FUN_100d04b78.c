
void FUN_100d04b78(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_100d7f170();
  plVar3 = (long *)(param_1 + 0x10);
  if (*plVar3 != 0) {
    __ZN102__LT_rama_http_core__h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h15da56b666546e37E
              (plVar3);
    lVar1 = *(long *)*plVar3;
    *(long *)*plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *plVar3;
      FUN_105aacc60(lVar1 + 0x10);
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
  }
  return;
}

