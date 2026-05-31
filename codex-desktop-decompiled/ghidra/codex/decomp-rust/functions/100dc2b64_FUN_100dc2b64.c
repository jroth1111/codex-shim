
void FUN_100dc2b64(long param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000100dd3b10();
  FUN_100deccb0(param_1 + 0x1f0);
  if (*(long *)(param_1 + 600) != 2) {
    FUN_100e3fdac(param_1 + 0x260);
    plVar2 = *(long **)(param_1 + 0x3d0);
    if (((ulong)plVar2 & 1) == 0) {
      lVar1 = plVar2[4];
      plVar2[4] = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        if (*plVar2 != 0) {
          _free(plVar2[1]);
        }
        goto LAB_100dc2bfc;
      }
    }
    else if (*(long *)(param_1 + 0x3c8) + ((ulong)plVar2 >> 5) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x3b8) - ((ulong)plVar2 >> 5));
LAB_100dc2bfc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar2);
      return;
    }
  }
  return;
}

