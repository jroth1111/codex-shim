
void FUN_1033de780(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    LOAcquire();
    uVar3 = plVar6[0xc];
    plVar6[0xc] = uVar3 | 4;
    if ((uVar3 & 10) == 8) {
      (**(code **)(plVar6[8] + 0x10))(plVar6[9]);
    }
    if (((uint)uVar3 >> 1 & 1) != 0) {
      lVar4 = plVar6[2];
      lVar1 = plVar6[5];
      lVar2 = plVar6[6];
      lVar5 = plVar6[7];
      plVar6[2] = -0x8000000000000000;
      if (lVar4 != -0x8000000000000000) {
        if (lVar4 != 0) {
          _free(plVar6[3]);
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar2;
        while (lVar5 = lVar5 + -1, lVar5 != 0) {
          FUN_103396fdc(lVar4);
          lVar4 = lVar4 + 0xc0;
        }
        if (lVar1 != 0) {
          _free(lVar2);
        }
      }
    }
    lVar5 = *plVar6;
    *plVar6 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      lVar5 = *param_1;
      FUN_1033d8cbc(lVar5 + 0x10);
      if (lVar5 != -1) {
        lVar4 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar5);
          return;
        }
      }
      return;
    }
  }
  return;
}

