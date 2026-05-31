
void FUN_103cfbd74(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  FUN_103cfbbe4(param_1 + 8);
  lVar4 = param_1[0x34];
  if (lVar4 != -0x8000000000000000) {
    lVar1 = param_1[0x35];
    lVar5 = param_1[0x36];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    plVar2 = (long *)param_1[0x3e];
  }
  else {
    _free(param_1[4]);
    plVar2 = (long *)param_1[0x3e];
  }
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    *plVar2 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      lVar4 = param_1[0x3e];
      puVar6 = (undefined8 *)param_1[0x3f];
      uVar3 = puVar6[2];
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(lVar4 + (uVar3 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (lVar4 != -1) {
        lVar1 = *(long *)(lVar4 + 8);
        *(long *)(lVar4 + 8) = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          if ((uVar3 + puVar6[1] + 0xf & -uVar3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar4);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

