
void FUN_102c4a248(long param_1,ulong param_2,long param_3,ulong param_4,uint param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong auStack_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x4000000000000000 / param_2;
  }
  if (uVar1 * param_2 != 0x4000000000000000) {
    uVar1 = uVar1 + 1;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar4 = (uint)LZCOUNT(param_2 | 1) ^ 0x3f;
    uVar5 = (ulong)((uVar4 & 1) + (uVar4 >> 1));
    uVar5 = (1L << (uVar5 & 0x3f)) + (param_2 >> (uVar5 & 0x3f)) >> 1;
  }
  uVar10 = 0;
  uVar8 = 0;
  uVar20 = 1;
  uVar7 = param_2;
  if (param_2 != 0) goto LAB_102c4a320;
LAB_102c4a30c:
  lVar6 = 0;
  uVar7 = 1;
  uVar21 = uVar20;
  do {
    uVar20 = uVar7;
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar7 = uVar8 - 1;
          if ((uint)abStack_ab[uVar8] < (uint)lVar6) goto LAB_102c4a8c0;
          uVar13 = auStack_2c0[uVar7];
          uVar17 = uVar13 >> 1;
          uVar19 = uVar21 >> 1;
          uVar12 = uVar17 + uVar19;
          uVar8 = uVar7;
          if (uVar12 <= param_4 && (((uint)uVar13 | (uint)uVar21) & 1) == 0) break;
          lVar11 = param_1 + (uVar10 - uVar12) * 0x270;
          if ((uVar13 & 1) == 0) {
            func_0x000102c4b31c(lVar11,uVar17,param_3,param_4,(int)LZCOUNT(uVar17 | 1) << 1 ^ 0x7e,0
                                ,param_6);
          }
          if ((uVar21 & 1) == 0) {
            func_0x000102c4b31c(lVar11 + uVar17 * 0x270,uVar19,param_3,param_4,
                                (int)LZCOUNT(uVar19 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((1 < uVar13) && (1 < uVar21)) {
            uVar21 = uVar19;
            if (uVar17 <= uVar19) {
              uVar21 = uVar17;
            }
            if (uVar21 <= param_4) {
              lVar14 = lVar11 + uVar17 * 0x270;
              lVar15 = lVar14;
              if (uVar17 <= uVar19) {
                lVar15 = lVar11;
              }
              _memcpy(param_3,lVar15,uVar21 * 0x270);
              lVar22 = param_3 + uVar21 * 0x270;
              lVar9 = param_3;
              lVar15 = lVar11;
              lVar18 = param_1 + -0x270 + uVar10 * 0x270;
              if (uVar19 < uVar17) {
                do {
                  uVar13 = *(ulong *)(lVar22 + -0x248);
                  uVar17 = *(ulong *)(lVar14 + -0x248);
                  uVar21 = uVar13;
                  if (uVar17 <= uVar13) {
                    uVar21 = uVar17;
                  }
                  iVar2 = _memcmp(*(undefined8 *)(lVar22 + -0x250),*(undefined8 *)(lVar14 + -0x250),
                                  uVar21);
                  uVar21 = uVar13 - uVar17;
                  if (iVar2 != 0) {
                    uVar21 = (long)iVar2;
                  }
                  if (uVar21 == 0) {
                    uVar13 = *(ulong *)(lVar22 + -0x260);
                    uVar17 = *(ulong *)(lVar14 + -0x260);
                    uVar21 = uVar13;
                    if (uVar17 <= uVar13) {
                      uVar21 = uVar17;
                    }
                    iVar2 = _memcmp(*(undefined8 *)(lVar22 + -0x268),
                                    *(undefined8 *)(lVar14 + -0x268),uVar21);
                    uVar21 = uVar13 - uVar17;
                    if (iVar2 != 0) {
                      uVar21 = (long)iVar2;
                    }
                  }
                  lVar15 = lVar22 + -0x270;
                  if (0x7fffffffffffffff < uVar21) {
                    lVar15 = lVar14 + -0x270;
                  }
                  _memcpy(lVar18,lVar15,0x270);
                  uVar4 = (uint)(uVar21 >> 0x3f);
                  lVar15 = lVar14 + -0x270 + (ulong)(uVar4 ^ 1) * 0x270;
                  lVar22 = lVar22 + -0x270 + (ulong)uVar4 * 0x270;
                  lVar14 = lVar15;
                  lVar18 = lVar18 + -0x270;
                } while (lVar15 != lVar11 && lVar22 != param_3);
              }
              else {
                do {
                  uVar13 = *(ulong *)(lVar14 + 0x28);
                  uVar17 = *(ulong *)(lVar9 + 0x28);
                  uVar21 = uVar13;
                  if (uVar17 <= uVar13) {
                    uVar21 = uVar17;
                  }
                  iVar2 = _memcmp(*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)(lVar9 + 0x20),
                                  uVar21);
                  uVar21 = uVar13 - uVar17;
                  if (iVar2 != 0) {
                    uVar21 = (long)iVar2;
                  }
                  if (uVar21 == 0) {
                    uVar13 = *(ulong *)(lVar14 + 0x10);
                    uVar17 = *(ulong *)(lVar9 + 0x10);
                    uVar21 = uVar13;
                    if (uVar17 <= uVar13) {
                      uVar21 = uVar17;
                    }
                    iVar2 = _memcmp(*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar9 + 8),uVar21);
                    uVar21 = uVar13 - uVar17;
                    if (iVar2 != 0) {
                      uVar21 = (long)iVar2;
                    }
                  }
                  lVar11 = lVar9;
                  if (0x7fffffffffffffff < uVar21) {
                    lVar11 = lVar14;
                  }
                  _memcpy(lVar15,lVar11,0x270);
                  uVar4 = (uint)(uVar21 >> 0x3f);
                  lVar9 = lVar9 + (ulong)(uVar4 ^ 1) * 0x270;
                  lVar14 = lVar14 + (ulong)uVar4 * 0x270;
                  lVar15 = lVar15 + 0x270;
                } while (lVar9 != lVar22 && lVar14 != param_1 + uVar10 * 0x270);
              }
              _memcpy(lVar15,lVar9,lVar22 - lVar9);
            }
          }
          uVar21 = uVar12 * 2 | 1;
          if (uVar7 < 2) goto LAB_102c4a8b4;
        }
        uVar21 = uVar12 * 2;
      } while (1 < uVar7);
LAB_102c4a8b4:
      uVar8 = 1;
    }
LAB_102c4a8c0:
    auStack_2c0[uVar8] = uVar21;
    abStack_ab[uVar8 + 1] = (byte)lVar6;
    if (param_2 <= uVar10) {
      if ((uVar21 & 1) != 0) {
        return;
      }
      func_0x000102c4b31c(param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,
                          param_6);
      return;
    }
    uVar8 = uVar8 + 1;
    uVar10 = uVar10 + (uVar20 >> 1);
    uVar7 = param_2 - uVar10;
    if (param_2 < uVar10 || uVar7 == 0) goto LAB_102c4a30c;
LAB_102c4a320:
    lVar6 = param_1 + uVar10 * 0x270;
    if (uVar7 < uVar5) {
LAB_102c4a334:
      if ((param_5 & 1) == 0) {
        if (uVar5 <= uVar7) {
          uVar7 = uVar5;
        }
        uVar7 = uVar7 << 1;
      }
      else {
        if (0x1f < uVar7) {
          uVar7 = 0x20;
        }
        func_0x000102c4b31c(lVar6,uVar7,param_3,param_4,0,0,param_6);
        uVar7 = uVar7 << 1 | 1;
      }
    }
    else {
      uVar21 = uVar7;
      if (1 < uVar7) {
        uVar3 = *(undefined8 *)(lVar6 + 0x290);
        uVar17 = *(ulong *)(lVar6 + 0x298);
        uVar13 = *(ulong *)(lVar6 + 0x28);
        uVar12 = uVar17;
        if (uVar13 <= uVar17) {
          uVar12 = uVar13;
        }
        iVar2 = _memcmp(uVar3,*(undefined8 *)(lVar6 + 0x20),uVar12);
        lVar11 = uVar17 - uVar13;
        if (iVar2 != 0) {
          lVar11 = (long)iVar2;
        }
        if (lVar11 == 0) {
          uVar19 = *(ulong *)(lVar6 + 0x280);
          uVar13 = *(ulong *)(lVar6 + 0x10);
          uVar12 = uVar19;
          if (uVar13 <= uVar19) {
            uVar12 = uVar13;
          }
          iVar2 = _memcmp(*(undefined8 *)(lVar6 + 0x278),*(undefined8 *)(lVar6 + 8),uVar12);
          lVar11 = uVar19 - uVar13;
          if (iVar2 != 0) {
            lVar11 = (long)iVar2;
          }
          if (lVar11 < 0) goto LAB_102c4a418;
LAB_102c4a3c0:
          if (uVar7 != 2) {
            uVar12 = 2;
            lVar15 = lVar6;
            do {
              uVar16 = *(undefined8 *)(lVar15 + 0x500);
              uVar13 = *(ulong *)(lVar15 + 0x508);
              uVar21 = uVar13;
              if (uVar17 <= uVar13) {
                uVar21 = uVar17;
              }
              iVar2 = _memcmp(uVar16,uVar3,uVar21);
              lVar14 = uVar13 - uVar17;
              if (iVar2 != 0) {
                lVar14 = (long)iVar2;
              }
              if (lVar14 == 0) {
                uVar17 = *(ulong *)(lVar15 + 0x4f0);
                uVar19 = *(ulong *)(lVar15 + 0x280);
                uVar21 = uVar17;
                if (uVar19 <= uVar17) {
                  uVar21 = uVar19;
                }
                iVar2 = _memcmp(*(undefined8 *)(lVar15 + 0x4e8),*(undefined8 *)(lVar15 + 0x278),
                                uVar21);
                lVar14 = uVar17 - uVar19;
                if (iVar2 != 0) {
                  lVar14 = (long)iVar2;
                }
              }
              uVar21 = uVar12;
              if (lVar14 < 0) break;
              uVar12 = uVar12 + 1;
              lVar15 = lVar15 + 0x270;
              uVar3 = uVar16;
              uVar17 = uVar13;
              uVar21 = uVar7;
            } while (uVar7 != uVar12);
joined_r0x000102c4a5b8:
            if (uVar21 < uVar5) goto LAB_102c4a334;
            if (lVar11 < 0) {
              if (1 < uVar21) {
                uVar7 = uVar21 >> 1;
                goto LAB_102c4a434;
              }
              uVar21 = 1;
            }
          }
        }
        else {
          if (-1 < lVar11) goto LAB_102c4a3c0;
LAB_102c4a418:
          if (uVar7 != 2) {
            uVar12 = 2;
            lVar15 = lVar6;
            do {
              uVar16 = *(undefined8 *)(lVar15 + 0x500);
              uVar13 = *(ulong *)(lVar15 + 0x508);
              uVar21 = uVar13;
              if (uVar17 <= uVar13) {
                uVar21 = uVar17;
              }
              iVar2 = _memcmp(uVar16,uVar3,uVar21);
              lVar14 = uVar13 - uVar17;
              if (iVar2 != 0) {
                lVar14 = (long)iVar2;
              }
              if (lVar14 == 0) {
                uVar17 = *(ulong *)(lVar15 + 0x4f0);
                uVar19 = *(ulong *)(lVar15 + 0x280);
                uVar21 = uVar17;
                if (uVar19 <= uVar17) {
                  uVar21 = uVar19;
                }
                iVar2 = _memcmp(*(undefined8 *)(lVar15 + 0x4e8),*(undefined8 *)(lVar15 + 0x278),
                                uVar21);
                lVar14 = uVar17 - uVar19;
                if (iVar2 != 0) {
                  lVar14 = (long)iVar2;
                }
              }
              uVar21 = uVar12;
              if (-1 < lVar14) break;
              uVar12 = uVar12 + 1;
              lVar15 = lVar15 + 0x270;
              uVar3 = uVar16;
              uVar17 = uVar13;
              uVar21 = uVar7;
            } while (uVar7 != uVar12);
            goto joined_r0x000102c4a5b8;
          }
          uVar7 = 1;
          uVar21 = 2;
LAB_102c4a434:
          uVar12 = 0;
          lVar11 = param_1 + -0x270 + uVar21 * 0x270 + uVar10 * 0x270;
          do {
            lVar15 = 0;
            do {
              uVar3 = *(undefined8 *)(lVar6 + lVar15);
              *(undefined8 *)(lVar6 + lVar15) = *(undefined8 *)(lVar11 + lVar15);
              *(undefined8 *)(lVar11 + lVar15) = uVar3;
              lVar15 = lVar15 + 8;
            } while (lVar15 != 0x270);
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + -0x270;
            lVar6 = lVar6 + 0x270;
          } while (uVar12 != uVar7);
        }
      }
      uVar7 = uVar21 << 1 | 1;
    }
    lVar6 = LZCOUNT((uVar10 * 2 + (uVar7 >> 1)) * uVar1 ^ (uVar10 * 2 - (uVar20 >> 1)) * uVar1);
    uVar21 = uVar20;
  } while( true );
}

