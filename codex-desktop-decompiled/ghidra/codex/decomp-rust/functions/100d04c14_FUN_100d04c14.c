
void FUN_100d04c14(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  cVar3 = (char)param_1[0xe];
  if (cVar3 != '\0') {
    if (cVar3 == '\x03') {
      func_0x000100d76e48(param_1 + 0x10);
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      func_0x000100cf9534(param_1 + 0xf);
    }
    if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
      func_0x000100cf9534(param_1 + 0xf);
    }
    *(undefined2 *)((long)param_1 + 0x71) = 0;
    *(undefined1 *)((long)param_1 + 0x73) = 0;
    return;
  }
  uVar7 = *param_1;
  uVar8 = uVar7 ^ 0x8000000000000000;
  if (-1 < (long)uVar7) {
    uVar8 = 4;
  }
  if ((long)uVar8 < 2) {
    if (uVar8 == 0) {
      plVar5 = (long *)param_1[4];
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        *plVar5 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      if (param_1[1] != 0x8000000000000000 && param_1[1] != 0) {
        _free(param_1[2]);
      }
      plVar5 = (long *)param_1[6];
      goto SUB_100dccb50;
    }
    if (uVar8 == 1) {
      plVar5 = (long *)param_1[6];
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        *plVar5 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      if (param_1[3] != 0x8000000000000000 && param_1[3] != 0) {
        _free(param_1[4]);
      }
      plVar5 = (long *)param_1[9];
      goto SUB_100dccb50;
    }
  }
  else if ((uVar8 == 2) || (uVar8 == 3)) {
    plVar5 = (long *)param_1[1];
    goto SUB_100dccb50;
  }
  if (uVar7 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0x8000000000000005) {
    FUN_100de6690();
  }
  plVar5 = (long *)param_1[0xc];
SUB_100dccb50:
  if (plVar5 != (long *)0x0) {
    lVar4 = plVar5[1];
    if (lVar4 != 0) {
      lVar9 = plVar5[3];
      if (lVar9 != 0) {
        plVar10 = (long *)*plVar5;
        plVar11 = plVar10 + 1;
        lVar12 = *plVar10;
        uVar8 = CONCAT17(-(-1 < lVar12),
                         CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                0x8080808080808080;
        do {
          while (uVar8 == 0) {
            lVar12 = *plVar11;
            plVar10 = plVar10 + -0x20;
            plVar11 = plVar11 + 1;
            uVar8 = CONCAT17(-(-1 < lVar12),
                             CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                    0x8080808080808080;
          }
          uVar7 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) & 0x78;
          uVar1 = *(undefined8 *)((long)plVar10 + uVar7 * -4 + -0x10);
          puVar2 = *(undefined8 **)((long)plVar10 + uVar7 * -4 + -8);
          pcVar6 = (code *)*puVar2;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar1);
          }
          if (puVar2[1] != 0) {
            _free(uVar1);
          }
          uVar8 = uVar8 - 1 & uVar8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (lVar4 * 0x21 != -0x29) {
        _free(*plVar5 + lVar4 * -0x20 + -0x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar5);
    return;
  }
  return;
}

