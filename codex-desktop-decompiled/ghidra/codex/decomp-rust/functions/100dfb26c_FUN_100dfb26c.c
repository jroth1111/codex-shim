
void FUN_100dfb26c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1 + 1;
  if (*param_1 == 0) {
    lVar1 = *(long *)*plVar3;
    *(long *)*plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *plVar3;
      FUN_105af3ac4(lVar1 + 0x10);
      FUN_105af3814(lVar1 + 0x100);
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
  }
  else {
    lVar1 = *(long *)*plVar3;
    *(long *)*plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *plVar3;
      if (*(long *)(lVar1 + 0x10) != 0) {
        _free(*(undefined8 *)(lVar1 + 0x18));
      }
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
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

