
void FUN_103daf478(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  uVar6 = *param_1;
  uVar7 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar7 = 4;
  }
  if ((long)uVar7 < 2) {
    if (uVar7 == 0) {
      plVar4 = (long *)param_1[4];
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        *plVar4 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      if (param_1[1] != 0x8000000000000000 && param_1[1] != 0) {
        _free(param_1[2]);
      }
      plVar4 = (long *)param_1[6];
      goto SUB_103da4abc;
    }
    if (uVar7 == 1) {
      plVar4 = (long *)param_1[6];
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        *plVar4 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      if (param_1[3] != 0x8000000000000000 && param_1[3] != 0) {
        _free(param_1[4]);
      }
      plVar4 = (long *)param_1[9];
      goto SUB_103da4abc;
    }
  }
  else if ((uVar7 == 2) || (uVar7 == 3)) {
    plVar4 = (long *)param_1[1];
    goto SUB_103da4abc;
  }
  if (uVar6 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0x8000000000000005) {
    func_0x000103daac44();
  }
  plVar4 = (long *)param_1[0xc];
SUB_103da4abc:
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar3 = plVar4[1];
  if (lVar3 != 0) {
    lVar8 = plVar4[3];
    if (lVar8 != 0) {
      plVar9 = (long *)*plVar4;
      plVar10 = plVar9 + 1;
      lVar11 = *plVar9;
      uVar7 = CONCAT17(-(-1 < lVar11),
                       CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar11 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
              0x8080808080808080;
      do {
        while (uVar7 == 0) {
          lVar11 = *plVar10;
          plVar9 = plVar9 + -0x20;
          plVar10 = plVar10 + 1;
          uVar7 = CONCAT17(-(-1 < lVar11),
                           CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar11
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
                  0x8080808080808080;
        }
        uVar6 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) & 0x78;
        uVar1 = *(undefined8 *)((long)plVar9 + uVar6 * -4 + -0x10);
        puVar2 = *(undefined8 **)((long)plVar9 + uVar6 * -4 + -8);
        pcVar5 = (code *)*puVar2;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar1);
        }
        if (puVar2[1] != 0) {
          _free(uVar1);
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar3 * 0x21 != -0x29) {
      _free(*plVar4 + lVar3 * -0x20 + -0x20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar4);
  return;
}

