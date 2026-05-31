
/* WARNING: Possible PIC construction at 0x000102c499d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c499d8) */
/* WARNING: Removing unreachable block (ram,0x000108aa97c4) */
/* WARNING: Type propagation algorithm not settling */

void __ZN4core5slice4sort6stable14driftsort_main17h8458875b6a724883E
               (undefined8 param_1,ulong param_2,long param_3,ulong param_4,uint param_5,
               long param_6)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  undefined1 auVar29 [16];
  ulong auStack_320 [66];
  byte abStack_10b [75];
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = param_1;
  uVar10 = param_2 - (param_2 >> 1);
  if (0x3213 < param_2) {
    param_2 = 0x3214;
  }
  if (param_2 <= uVar10) {
    param_2 = uVar10;
  }
  if (param_2 < 0x31) {
    param_2 = 0x30;
  }
  lVar17 = param_2 * 0x270;
  if (0x34834834834834 < uVar10) {
    auVar29 = func_0x0001087c9084(0,lVar17);
  }
  if (lVar17 == 0) {
    param_2 = 0;
    lVar5 = 8;
  }
  else {
    lVar8 = param_3;
    lVar5 = _malloc(lVar17);
    if (lVar5 == 0) {
      uVar6 = func_0x0001087c9084(8,lVar17);
      FUN_102c47d80(&uStack_58);
      auVar29 = __Unwind_Resume(uVar6);
      goto SUB_102c49a14;
    }
  }
  lVar8 = lVar5;
  param_4 = param_2;
  uStack_58 = param_4;
  lStack_50 = lVar8;
  uStack_48 = 0;
  param_5 = (uint)(auVar29._8_8_ < 0x41);
  param_6 = param_3;
SUB_102c49a14:
  uVar10 = auVar29._8_8_;
  lVar17 = auVar29._0_8_;
  if (uVar10 < 2) {
    return;
  }
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = 0x4000000000000000 / uVar10;
  }
  if (uVar3 * uVar10 != 0x4000000000000000) {
    uVar3 = uVar3 + 1;
  }
  if (uVar10 < 0x1001) {
    uVar11 = uVar10 - (uVar10 >> 1);
    if (0x3f < uVar11) {
      uVar11 = 0x40;
    }
  }
  else {
    uVar25 = (uint)LZCOUNT(uVar10 | 1) ^ 0x3f;
    uVar11 = (ulong)((uVar25 & 1) + (uVar25 >> 1));
    uVar11 = (1L << (uVar11 & 0x3f)) + (uVar10 >> (uVar11 & 0x3f)) >> 1;
  }
  uVar15 = 0;
  uVar18 = 0;
  uVar26 = 1;
  uVar12 = uVar10;
  if (uVar10 != 0) goto LAB_102c49afc;
LAB_102c49ae8:
  lVar5 = 0;
  uVar12 = 1;
  uVar27 = uVar26;
  do {
    uVar26 = uVar12;
    if (1 < uVar18) {
      do {
        while( true ) {
          uVar12 = uVar18 - 1;
          if ((uint)abStack_10b[uVar18] < (uint)lVar5) goto LAB_102c49efc;
          uVar13 = auStack_320[uVar12];
          uVar21 = uVar13 >> 1;
          uVar23 = uVar27 >> 1;
          uVar1 = uVar21 + uVar23;
          uVar18 = uVar12;
          if (uVar1 <= param_4 && (((uint)uVar13 | (uint)uVar27) & 1) == 0) break;
          lVar16 = lVar17 + (uVar15 - uVar1) * 0x270;
          if ((uVar13 & 1) == 0) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17ha6b6440dd28224f3E
                      (lVar16,uVar21,lVar8,param_4,(int)LZCOUNT(uVar21 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar27 & 1) == 0) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17ha6b6440dd28224f3E
                      (lVar16 + uVar21 * 0x270,uVar23,lVar8,param_4,
                       (int)LZCOUNT(uVar23 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((1 < uVar13) && (1 < uVar27)) {
            uVar27 = uVar23;
            if (uVar21 <= uVar23) {
              uVar27 = uVar21;
            }
            if (uVar27 <= param_4) {
              lVar19 = lVar16 + uVar21 * 0x270;
              lVar28 = lVar19;
              if (uVar21 <= uVar23) {
                lVar28 = lVar16;
              }
              _memcpy(lVar8,lVar28,uVar27 * 0x270);
              lVar28 = lVar8 + uVar27 * 0x270;
              lVar22 = lVar8;
              lVar7 = lVar17 + -0x270 + uVar15 * 0x270;
              if (uVar23 < uVar21) {
                do {
                  cVar14 = *(char *)(lVar19 + -8) - *(char *)(lVar28 + -8);
                  if (cVar14 == -1) {
LAB_102c49e1c:
                    uVar25 = 1;
                    lVar20 = lVar19 + -0x270;
                  }
                  else {
                    if (cVar14 != '\x01') {
                      uVar13 = *(ulong *)(lVar28 + -0x248);
                      uVar21 = *(ulong *)(lVar19 + -0x248);
                      uVar27 = uVar13;
                      if (uVar21 <= uVar13) {
                        uVar27 = uVar21;
                      }
                      iVar4 = _memcmp(*(undefined8 *)(lVar28 + -0x250),
                                      *(undefined8 *)(lVar19 + -0x250),uVar27);
                      lVar20 = uVar13 - uVar21;
                      if (iVar4 != 0) {
                        lVar20 = (long)iVar4;
                      }
                      if (lVar20 == 0) {
                        uVar13 = *(ulong *)(lVar28 + -0x260);
                        uVar21 = *(ulong *)(lVar19 + -0x260);
                        uVar27 = uVar13;
                        if (uVar21 <= uVar13) {
                          uVar27 = uVar21;
                        }
                        iVar4 = _memcmp(*(undefined8 *)(lVar28 + -0x268),
                                        *(undefined8 *)(lVar19 + -0x268),uVar27);
                        lVar20 = uVar13 - uVar21;
                        if (iVar4 != 0) {
                          lVar20 = (long)iVar4;
                        }
                      }
                      if (lVar20 < 0) goto LAB_102c49e1c;
                    }
                    uVar25 = 0;
                    lVar20 = lVar28 + -0x270;
                  }
                  _memcpy(lVar7,lVar20,0x270);
                  lVar20 = lVar19 + -0x270 + (ulong)(uVar25 ^ 1) * 0x270;
                  lVar28 = lVar28 + -0x270 + (ulong)uVar25 * 0x270;
                  lVar19 = lVar20;
                  lVar7 = lVar7 + -0x270;
                } while (lVar20 != lVar16 && lVar28 != lVar8);
              }
              else {
                do {
                  cVar14 = *(char *)(lVar22 + 0x268) - *(char *)(lVar19 + 0x268);
                  if (cVar14 == -1) {
LAB_102c49e34:
                    lVar24 = 0;
                    lVar20 = 1;
                    lVar7 = lVar19;
                  }
                  else {
                    lVar7 = lVar22;
                    if (cVar14 == '\x01') {
                      lVar20 = 0;
                      lVar24 = 1;
                    }
                    else {
                      uVar13 = *(ulong *)(lVar19 + 0x28);
                      uVar21 = *(ulong *)(lVar22 + 0x28);
                      uVar27 = uVar13;
                      if (uVar21 <= uVar13) {
                        uVar27 = uVar21;
                      }
                      iVar4 = _memcmp(*(undefined8 *)(lVar19 + 0x20),*(undefined8 *)(lVar22 + 0x20),
                                      uVar27);
                      lVar20 = uVar13 - uVar21;
                      if (iVar4 != 0) {
                        lVar20 = (long)iVar4;
                      }
                      if (lVar20 == 0) {
                        uVar13 = *(ulong *)(lVar19 + 0x10);
                        uVar21 = *(ulong *)(lVar22 + 0x10);
                        uVar27 = uVar13;
                        if (uVar21 <= uVar13) {
                          uVar27 = uVar21;
                        }
                        iVar4 = _memcmp(*(undefined8 *)(lVar19 + 8),*(undefined8 *)(lVar22 + 8),
                                        uVar27);
                        lVar20 = uVar13 - uVar21;
                        if (iVar4 != 0) {
                          lVar20 = (long)iVar4;
                        }
                      }
                      if (lVar20 < 0) goto LAB_102c49e34;
                      lVar20 = 0;
                      lVar24 = 1;
                    }
                  }
                  _memcpy(lVar16,lVar7,0x270);
                  lVar22 = lVar22 + lVar24 * 0x270;
                  lVar19 = lVar19 + lVar20 * 0x270;
                  lVar20 = lVar16 + 0x270;
                  lVar16 = lVar20;
                } while (lVar22 != lVar28 && lVar19 != lVar17 + uVar15 * 0x270);
              }
              _memcpy(lVar20,lVar22,lVar28 - lVar22);
            }
          }
          uVar27 = uVar1 * 2 | 1;
          if (uVar12 < 2) goto LAB_102c49ef4;
        }
        uVar27 = uVar1 * 2;
      } while (1 < uVar12);
LAB_102c49ef4:
      uVar18 = 1;
    }
LAB_102c49efc:
    auStack_320[uVar18] = uVar27;
    abStack_10b[uVar18 + 1] = (byte)lVar5;
    if (uVar10 <= uVar15) {
      if ((uVar27 & 1) != 0) {
        return;
      }
      __ZN4core5slice4sort6stable9quicksort9quicksort17ha6b6440dd28224f3E
                (lVar17,uVar10,lVar8,param_4,(int)LZCOUNT(uVar10 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar18 = uVar18 + 1;
    uVar15 = uVar15 + (uVar26 >> 1);
    uVar12 = uVar10 - uVar15;
    if (uVar10 < uVar15 || uVar12 == 0) goto LAB_102c49ae8;
LAB_102c49afc:
    lVar5 = lVar17 + uVar15 * 0x270;
    if (uVar12 < uVar11) {
LAB_102c49b18:
      if ((param_5 & 1) == 0) {
        if (uVar11 <= uVar12) {
          uVar12 = uVar11;
        }
        uVar12 = uVar12 << 1;
      }
      else {
        if (0x1f < uVar12) {
          uVar12 = 0x20;
        }
        __ZN4core5slice4sort6stable9quicksort9quicksort17ha6b6440dd28224f3E
                  (lVar5,uVar12,lVar8,param_4,0,0,param_6);
        uVar12 = uVar12 << 1 | 1;
      }
    }
    else {
      if (1 < uVar12) {
        cVar14 = *(char *)(lVar5 + 0x4d8);
        if (*(char *)(lVar5 + 0x268) == cVar14) {
          uVar13 = *(ulong *)(lVar5 + 0x298);
          uVar1 = *(ulong *)(lVar5 + 0x28);
          uVar27 = uVar13;
          if (uVar1 <= uVar13) {
            uVar27 = uVar1;
          }
          iVar4 = _memcmp(*(undefined8 *)(lVar5 + 0x290),*(undefined8 *)(lVar5 + 0x20),uVar27);
          lVar16 = uVar13 - uVar1;
          if (iVar4 != 0) {
            lVar16 = (long)iVar4;
          }
          if (lVar16 == 0) {
            uVar13 = *(ulong *)(lVar5 + 0x280);
            uVar1 = *(ulong *)(lVar5 + 0x10);
            uVar27 = uVar13;
            if (uVar1 <= uVar13) {
              uVar27 = uVar1;
            }
            iVar4 = _memcmp(*(undefined8 *)(lVar5 + 0x278),*(undefined8 *)(lVar5 + 8),uVar27);
            lVar16 = uVar13 - uVar1;
            if (iVar4 != 0) {
              lVar16 = (long)iVar4;
            }
          }
          if (-1 < lVar16) goto LAB_102c49fc8;
LAB_102c49f4c:
          if (uVar12 == 2) {
            bVar9 = true;
            goto joined_r0x000102c49f68;
          }
          uVar27 = 2;
          lVar16 = lVar5;
          do {
            cVar2 = *(char *)(lVar16 + 0x748);
            if (cVar14 == cVar2) {
              uVar13 = *(ulong *)(lVar16 + 0x508);
              uVar21 = *(ulong *)(lVar16 + 0x298);
              uVar1 = uVar13;
              if (uVar21 <= uVar13) {
                uVar1 = uVar21;
              }
              iVar4 = _memcmp(*(undefined8 *)(lVar16 + 0x500),*(undefined8 *)(lVar16 + 0x290),uVar1)
              ;
              lVar28 = uVar13 - uVar21;
              if (iVar4 != 0) {
                lVar28 = (long)iVar4;
              }
              if (lVar28 == 0) {
                uVar13 = *(ulong *)(lVar16 + 0x4f0);
                uVar21 = *(ulong *)(lVar16 + 0x280);
                uVar1 = uVar13;
                if (uVar21 <= uVar13) {
                  uVar1 = uVar21;
                }
                iVar4 = _memcmp(*(undefined8 *)(lVar16 + 0x4e8),*(undefined8 *)(lVar16 + 0x278),
                                uVar1);
                lVar28 = uVar13 - uVar21;
                if (iVar4 != 0) {
                  lVar28 = (long)iVar4;
                }
              }
              if (-1 < lVar28) goto LAB_102c4a144;
            }
            else if ((char)(cVar14 - cVar2) != -1) {
LAB_102c4a144:
              bVar9 = true;
              goto joined_r0x000102c4a09c;
            }
            uVar27 = uVar27 + 1;
            lVar16 = lVar16 + 0x270;
            cVar14 = cVar2;
          } while (uVar12 != uVar27);
          bVar9 = true;
          uVar27 = uVar12;
joined_r0x000102c4a09c:
          if (uVar27 < uVar11) goto LAB_102c49b18;
        }
        else {
          if ((char)(*(char *)(lVar5 + 0x268) - cVar14) != '\x01') goto LAB_102c49f4c;
LAB_102c49fc8:
          if (uVar12 != 2) {
            uVar27 = 2;
            lVar16 = lVar5;
            do {
              cVar2 = *(char *)(lVar16 + 0x748);
              if (cVar14 == cVar2) {
                uVar13 = *(ulong *)(lVar16 + 0x508);
                uVar21 = *(ulong *)(lVar16 + 0x298);
                uVar1 = uVar13;
                if (uVar21 <= uVar13) {
                  uVar1 = uVar21;
                }
                iVar4 = _memcmp(*(undefined8 *)(lVar16 + 0x500),*(undefined8 *)(lVar16 + 0x290),
                                uVar1);
                lVar28 = uVar13 - uVar21;
                if (iVar4 != 0) {
                  lVar28 = (long)iVar4;
                }
                if (lVar28 == 0) {
                  uVar13 = *(ulong *)(lVar16 + 0x4f0);
                  uVar21 = *(ulong *)(lVar16 + 0x280);
                  uVar1 = uVar13;
                  if (uVar21 <= uVar13) {
                    uVar1 = uVar21;
                  }
                  iVar4 = _memcmp(*(undefined8 *)(lVar16 + 0x4e8),*(undefined8 *)(lVar16 + 0x278),
                                  uVar1);
                  lVar28 = uVar13 - uVar21;
                  if (iVar4 != 0) {
                    lVar28 = (long)iVar4;
                  }
                }
                if (lVar28 < 0) goto LAB_102c4a08c;
              }
              else if ((char)(cVar14 - cVar2) != '\x01') {
LAB_102c4a08c:
                bVar9 = false;
                goto joined_r0x000102c4a09c;
              }
              uVar27 = uVar27 + 1;
              lVar16 = lVar16 + 0x270;
              cVar14 = cVar2;
            } while (uVar12 != uVar27);
            bVar9 = false;
            uVar27 = uVar12;
            goto joined_r0x000102c4a09c;
          }
          bVar9 = false;
joined_r0x000102c49f68:
          uVar27 = 2;
          if (2 < uVar11) goto LAB_102c49b18;
        }
        uVar12 = uVar27;
        if ((bVar9) && (1 < uVar12)) {
          uVar27 = 0;
          lVar16 = lVar17 + -0x270 + uVar15 * 0x270 + uVar12 * 0x270;
          do {
            lVar28 = 0;
            do {
              uVar6 = *(undefined8 *)(lVar5 + lVar28);
              *(undefined8 *)(lVar5 + lVar28) = *(undefined8 *)(lVar16 + lVar28);
              *(undefined8 *)(lVar16 + lVar28) = uVar6;
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x270);
            uVar27 = uVar27 + 1;
            lVar16 = lVar16 + -0x270;
            lVar5 = lVar5 + 0x270;
          } while (uVar27 != uVar12 >> 1);
        }
      }
      uVar12 = uVar12 << 1 | 1;
    }
    lVar5 = LZCOUNT((uVar15 * 2 + (uVar12 >> 1)) * uVar3 ^ (uVar15 * 2 - (uVar26 >> 1)) * uVar3);
    uVar27 = uVar26;
  } while( true );
}

