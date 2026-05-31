
void FUN_1033d2278(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  LOAcquire();
  lVar1 = plVar4[100];
  plVar4[100] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    if (plVar4[0x10] == 0) {
      LOAcquire();
      uVar2 = plVar4[0x57];
      plVar4[0x57] = uVar2 | 4;
      LORelease();
      if (((uint)uVar2 >> 2 & 1) != 0) goto LAB_1033d2314;
    }
    else {
      if (plVar4[0x10] == 1) {
        LOAcquire();
        uVar2 = plVar4[0x30];
        plVar4[0x30] = uVar2 | plVar4[0x41];
        LORelease();
        uVar2 = plVar4[0x41] & uVar2;
      }
      else {
        LOAcquire();
        uVar2 = plVar4[0x30];
        plVar4[0x30] = uVar2 | 1;
        LORelease();
        uVar2 = uVar2 & 1;
      }
      if (uVar2 != 0) goto LAB_1033d2314;
    }
    FUN_108939398(plVar4 + 0x60);
    FUN_108939398(plVar4 + 0x61);
    FUN_108939398(plVar4 + 0x62);
    FUN_108939398(plVar4 + 99);
  }
LAB_1033d2314:
  lVar1 = *plVar4;
  *plVar4 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar1 = *param_1;
  FUN_1033d3ba0(lVar1 + 0x80);
  if (lVar1 != -1) {
    lVar3 = *(long *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

