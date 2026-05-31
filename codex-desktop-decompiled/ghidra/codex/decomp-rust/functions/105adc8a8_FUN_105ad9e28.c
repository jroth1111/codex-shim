
void FUN_105ad9e28(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  short *psVar5;
  ulong uVar6;
  
  uVar4 = *param_1;
  uVar2 = uVar4;
  if (uVar4 < 0x8000000000000001) {
    uVar2 = 0;
  }
  if ((uVar2 & 0x7fffffffffffffff) == 0) {
    if (uVar4 != 0x8000000000000000) {
      uVar2 = param_1[1];
      uVar6 = param_1[2];
      if (uVar6 != 0) {
        psVar5 = (short *)(uVar2 + 0x40);
        do {
          if (((*(uint *)(psVar5 + -0x20) < 2) && (*psVar5 != 2)) && (8 < *(ulong *)(psVar5 + 0x14))
             ) {
            _free(*(undefined8 *)(psVar5 + 8));
          }
          psVar5 = psVar5 + 0x40;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar4 != 0) {
        _free(uVar2);
      }
    }
    plVar3 = (long *)param_1[3];
    if (plVar3 != (long *)0x0) {
      lVar1 = *plVar3;
      *plVar3 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        uVar2 = param_1[3];
        uVar4 = param_1[4];
        if (uVar4 != 0) {
          psVar5 = (short *)(uVar2 + 0x50);
          do {
            if (((*(uint *)(psVar5 + -0x20) < 2) && (*psVar5 != 2)) &&
               (8 < *(ulong *)(psVar5 + 0x14))) {
              _free(*(undefined8 *)(psVar5 + 8));
            }
            psVar5 = psVar5 + 0x40;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (uVar2 != 0xffffffffffffffff) {
          lVar1 = *(long *)(uVar2 + 8);
          *(long *)(uVar2 + 8) = lVar1 + -1;
          LORelease();
          if (lVar1 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x000108aa97c4;
          }
        }
        return;
      }
    }
  }
  else if ((uVar2 & 0x7fffffffffffffff) == 1) {
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      psVar5 = (short *)(uVar2 + 0x40);
      do {
        if (((*(uint *)(psVar5 + -0x20) < 2) && (*psVar5 != 2)) && (8 < *(ulong *)(psVar5 + 0x14)))
        {
          _free(*(undefined8 *)(psVar5 + 8));
        }
        psVar5 = psVar5 + 0x40;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[1] != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar2);
      return;
    }
  }
  return;
}

