
void FUN_100d8e9c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      plVar10 = (long *)*param_1;
      plVar11 = plVar10 + 1;
      lVar20 = *plVar10;
      uVar12 = CONCAT17(-(-1 < lVar20),
                        CONCAT16(-(-1 < (char)((ulong)lVar20 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar20 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar20 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar20 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar20 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar20 >> 8)),-(-1 < (char)lVar20)))))))) &
               0x8080808080808080;
      do {
        while (uVar12 == 0) {
          lVar20 = *plVar11;
          plVar10 = plVar10 + -0x30;
          plVar11 = plVar11 + 1;
          uVar12 = CONCAT17(-(-1 < lVar20),
                            CONCAT16(-(-1 < (char)((ulong)lVar20 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar20 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar20 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar20 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar20 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar20 >> 8)),
                                                           -(-1 < (char)lVar20)))))))) &
                   0x8080808080808080;
        }
        uVar5 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        iVar6 = (int)((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3);
        if (plVar10[(long)-iVar6 * 6 + -6] != 0) {
          _free(plVar10[(long)-iVar6 * 6 + -5]);
        }
        lVar20 = plVar10[(long)-iVar6 * 6 + -2];
        lVar3 = plVar10[(long)-iVar6 * 6 + -1];
        if (lVar3 != 0) {
          lVar13 = 0;
          do {
            plVar14 = (long *)(lVar20 + lVar13 * 0xc0);
            if (*plVar14 != 0) {
              _free(plVar14[1]);
            }
            if (plVar14[3] != 0) {
              _free(plVar14[4]);
            }
            if (plVar14[6] == -0x8000000000000000 || plVar14[6] == 0) {
              if (plVar14[9] != -0x8000000000000000 && plVar14[9] != 0) goto LAB_100d8eb30;
LAB_100d8eaf8:
              if (plVar14[0xc] != -0x8000000000000000 && plVar14[0xc] != 0) goto LAB_100d8eb48;
LAB_100d8eb08:
              lVar8 = plVar14[0xf];
            }
            else {
              _free(plVar14[7]);
              if (plVar14[9] == -0x8000000000000000 || plVar14[9] == 0) goto LAB_100d8eaf8;
LAB_100d8eb30:
              _free(plVar14[10]);
              if (plVar14[0xc] == -0x8000000000000000 || plVar14[0xc] == 0) goto LAB_100d8eb08;
LAB_100d8eb48:
              _free(plVar14[0xd]);
              lVar8 = plVar14[0xf];
            }
            if (lVar8 != -0x8000000000000000) {
              lVar1 = plVar14[0x10];
              lVar4 = plVar14[0x11];
              if (lVar4 != 0) {
                lVar16 = 0;
                do {
                  plVar17 = (long *)(lVar1 + lVar16 * 0x48);
                  if (*plVar17 != 0) {
                    _free(plVar17[1]);
                  }
                  if (plVar17[3] == -0x8000000000000000 || plVar17[3] == 0) {
                    lVar15 = plVar17[6];
                  }
                  else {
                    _free(plVar17[4]);
                    lVar15 = plVar17[6];
                  }
                  if (lVar15 != -0x8000000000000000) {
                    lVar2 = plVar17[7];
                    lVar18 = plVar17[8];
                    if (lVar18 != 0) {
                      puVar19 = (undefined8 *)(lVar2 + 8);
                      do {
                        if (puVar19[-1] != 0) {
                          _free(*puVar19);
                        }
                        puVar19 = puVar19 + 3;
                        lVar18 = lVar18 + -1;
                      } while (lVar18 != 0);
                    }
                    if (lVar15 != 0) {
                      _free(lVar2);
                    }
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 != lVar4);
              }
              if (lVar8 != 0) {
                _free(lVar1);
              }
            }
            if ((-0x7fffffffffffffff < plVar14[0x12]) && (plVar14[0x12] != 0)) {
              _free(plVar14[0x13]);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != lVar3);
        }
        if (plVar10[(long)-iVar6 * 6 + -3] != 0) {
          _free(lVar20);
        }
        uVar12 = uVar12 - 1 & uVar12;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar7 * 0x31 != -0x39) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*param_1 + lVar7 * -0x30 + -0x30);
      return;
    }
  }
  return;
}

