
void FUN_1039cde80(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar4 = param_1[1];
  lVar3 = lVar4;
  for (lVar9 = param_1[2]; lVar9 != 0; lVar9 = lVar9 + -1) {
    FUN_1039cd884(lVar3);
    lVar3 = lVar3 + 0x148;
  }
  if (*param_1 != 0) {
    _free(lVar4);
  }
  lVar3 = param_1[4];
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar3 + 0x20);
    do {
      if (puVar6[-4] != 0) {
        _free(puVar6[-3]);
      }
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (param_1[3] != 0) {
    _free(lVar3);
  }
  lVar3 = param_1[10];
  if (lVar3 != 0) {
    lVar4 = param_1[0xc];
    if (lVar4 != 0) {
      plVar5 = (long *)param_1[9];
      plVar7 = plVar5 + 1;
      lVar9 = *plVar5;
      uVar8 = CONCAT17(-(-1 < lVar9),
                       CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
              0x8080808080808080;
      do {
        while (uVar8 == 0) {
          lVar9 = *plVar7;
          plVar5 = plVar5 + -0x18;
          plVar7 = plVar7 + 1;
          uVar8 = CONCAT17(-(-1 < lVar9),
                           CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar9
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar5[(long)-iVar2 * 3 + -3] != 0) {
          _free(plVar5[(long)-iVar2 * 3 + -2]);
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x19 != -0x21) {
      _free(param_1[9] + lVar3 * -0x18 + -0x18);
    }
  }
  lVar3 = param_1[7];
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (param_1[6] != 0) {
    _free(lVar3);
  }
  lVar3 = *(long *)param_1[0xf];
  *(long *)param_1[0xf] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h516dbdaead00933fE();
  }
  lVar3 = *(long *)param_1[0x10];
  *(long *)param_1[0x10] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbcd0bfd41f3bc2f3E();
  }
  lVar3 = *(long *)param_1[0x11];
  *(long *)param_1[0x11] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he0920bb38ad281d7E();
  }
  plVar5 = (long *)param_1[0x12];
  lVar3 = *plVar5;
  *plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar3 = param_1[0x12];
  FUN_1039ccb28(lVar3 + 0x10);
  if (lVar3 != -1) {
    lVar4 = *(long *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  return;
}

