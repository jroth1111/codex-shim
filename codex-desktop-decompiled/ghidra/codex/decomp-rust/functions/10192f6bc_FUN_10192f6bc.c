
void FUN_10192f6bc(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    plVar4 = (long *)(param_1 + 0x10);
    lVar2 = *(long *)*plVar4;
    *(long *)*plVar4 = lVar2 + -1;
    LORelease();
  }
  else {
    if (cVar1 == '\x03') {
      FUN_10193b46c(param_1 + 0x30);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x3c18) == '\x03') {
        FUN_1019696b4(param_1 + 0x2590);
      }
      lVar2 = **(long **)(param_1 + 0x2578);
      **(long **)(param_1 + 0x2578) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb0e3e68687fe03b1E(param_1 + 0x2578);
      }
      FUN_10194e10c(param_1 + 0x30);
    }
    plVar4 = (long *)(param_1 + 0x20);
    lVar2 = *(long *)*plVar4;
    *(long *)*plVar4 = lVar2 + -1;
    LORelease();
  }
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *plVar4;
  FUN_103384ddc(lVar2 + 0x10);
  if (lVar2 != -1) {
    lVar3 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

