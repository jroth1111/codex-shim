
void FUN_100e1d114(long *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] != 0) {
    _free(param_1[7]);
  }
  if (param_1[9] != 0) {
    _free(param_1[10]);
  }
  lVar4 = param_1[0xd];
  if (lVar4 != 0) {
    lVar5 = param_1[0xf];
    if (lVar5 != 0) {
      plVar6 = (long *)param_1[0xc];
      plVar7 = plVar6 + 1;
      lVar9 = *plVar6;
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
          plVar6 = plVar6 + -0x48;
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
        uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        iVar1 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
        if (plVar6[(long)-iVar1 * 9 + -9] != 0) {
          _free(plVar6[(long)-iVar1 * 9 + -8]);
        }
        uVar2 = plVar6[(long)-iVar1 * 9 + -6];
        uVar3 = uVar2 ^ 0x8000000000000000;
        if (-1 < (long)uVar2) {
          uVar3 = 2;
        }
        if ((uVar3 == 0) || (uVar3 == 1)) {
          if (plVar6[(long)-iVar1 * 9 + -5] != 0) {
            lVar9 = 0x10;
            goto LAB_100cdf684;
          }
        }
        else {
          if (uVar2 != 0) {
            _free(plVar6[(long)-iVar1 * 9 + -5]);
          }
          if ((plVar6[(long)-iVar1 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
            lVar9 = 0x20;
LAB_100cdf684:
            _free(*(undefined8 *)((long)(plVar6 + (long)-iVar1 * 9 + -6) + lVar9));
          }
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 * 0x49 != -0x51) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0xc] + lVar4 * -0x48 + -0x48);
      return;
    }
  }
  return;
}

