
/* WARNING: Possible PIC construction at 0x0001039cfa28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039cfa2c) */
/* WARNING: Removing unreachable block (ram,0x0001039cfa34) */
/* WARNING: Removing unreachable block (ram,0x0001039cfa3c) */

void __ZN4core5slice4sort6stable14driftsort_main17hb3ad6b697d130672E
               (undefined8 param_1,ulong param_2,long *param_3,ulong param_4,uint param_5,
               long *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulong uStack_13b8;
  ulong auStack_1390 [66];
  byte abStack_117b [67];
  char *pcStack_1138;
  long lStack_1130;
  undefined1 uStack_1128;
  undefined2 uStack_1100;
  undefined1 uStack_10fe;
  char *pcStack_10f8;
  long lStack_10f0;
  undefined1 uStack_10e8;
  undefined2 uStack_10c0;
  undefined1 uStack_10be;
  long alStack_1050 [512];
  
  auVar39._8_8_ = param_2;
  auVar39._0_8_ = param_1;
  alStack_1050[0] = 0;
  uVar14 = param_2 - (param_2 >> 1);
  uVar10 = param_2;
  if (999999 < param_2) {
    uVar10 = 1000000;
  }
  if (uVar10 <= uVar14) {
    uVar10 = uVar14;
  }
  uVar12 = uVar10;
  if (uVar10 < 0x31) {
    uVar12 = 0x30;
  }
  if (uVar10 < 0x201) {
    uVar12 = 0x200;
    plVar7 = alStack_1050;
LAB_1039cfa18:
    plVar11 = plVar7;
    param_5 = (uint)(param_2 < 0x41);
  }
  else {
    uVar13 = 0;
    uVar23 = uVar12 * 8;
    plVar11 = param_3;
    if ((uVar14 >> 0x3d == 0) && (uVar23 < 0x7ffffffffffffff9)) {
      plVar7 = (long *)_malloc(uVar23);
      if (plVar7 != (long *)0x0) goto LAB_1039cfa18;
      uVar13 = 8;
    }
    param_3 = param_6;
    uVar12 = param_4;
    uVar13 = func_0x0001087c9084(uVar13,uVar23);
    if (0x200 < uVar10) {
      _free();
    }
    auVar39 = __Unwind_Resume(uVar13);
  }
  uVar10 = auVar39._8_8_;
  lVar8 = auVar39._0_8_;
  if (uVar10 < 2) {
    return;
  }
  uVar14 = 0;
  if (uVar10 != 0) {
    uVar14 = 0x4000000000000000 / uVar10;
  }
  if (uVar14 * uVar10 != 0x4000000000000000) {
    uVar14 = uVar14 + 1;
  }
  if (uVar10 < 0x1001) {
    uVar23 = uVar10 - (uVar10 >> 1);
    if (0x3f < uVar23) {
      uVar23 = 0x40;
    }
  }
  else {
    uVar1 = (uint)LZCOUNT(uVar10 | 1) ^ 0x3f;
    uVar23 = (ulong)((uVar1 & 1) + (uVar1 >> 1));
    uVar23 = (1L << (uVar23 & 0x3f)) + (uVar10 >> (uVar23 & 0x3f)) >> 1;
  }
  uVar21 = 0;
  uVar27 = 1;
  uStack_13b8 = 0;
  uVar19 = uVar10;
  if (uVar10 != 0) goto LAB_1039cfb7c;
LAB_1039cfb68:
  lVar16 = 0;
  uVar19 = 1;
  uVar28 = uVar27;
  do {
    uVar27 = uVar19;
    if (1 < uVar21) {
      do {
        while( true ) {
          uVar19 = uVar21 - 1;
          if ((uint)abStack_117b[uVar21] < (uint)lVar16) goto LAB_1039d0028;
          uVar24 = auStack_1390[uVar19];
          uVar31 = uVar24 >> 1;
          uVar35 = uVar28 >> 1;
          uVar9 = uVar31 + uVar35;
          uVar21 = uVar19;
          if (uVar9 <= uVar12 && (((uint)uVar24 | (uint)uVar28) & 1) == 0) break;
          plVar7 = (long *)(lVar8 + (uStack_13b8 - uVar9) * 8);
          if ((uVar24 & 1) == 0) {
            func_0x0001039d02a0(plVar7,uVar31,plVar11,uVar12,(int)LZCOUNT(uVar31 | 1) << 1 ^ 0x7e,0,
                                param_3);
          }
          if ((uVar28 & 1) == 0) {
            func_0x0001039d02a0(plVar7 + uVar31,uVar35,plVar11,uVar12,
                                (int)LZCOUNT(uVar35 | 1) << 1 ^ 0x7e,0,param_3);
          }
          if ((1 < uVar24) && (1 < uVar28)) {
            uVar28 = uVar35;
            if (uVar31 <= uVar35) {
              uVar28 = uVar31;
            }
            if (uVar28 <= uVar12) {
              plVar30 = plVar7 + uVar31;
              plVar25 = plVar30;
              if (uVar31 <= uVar35) {
                plVar25 = plVar7;
              }
              _memcpy(plVar11,plVar25,uVar28 * 8);
              plVar25 = plVar11 + uVar28;
              plVar33 = plVar11;
              plVar32 = (long *)(lVar8 + -8 + uStack_13b8 * 8);
              if (uVar35 < uVar31) {
                do {
                  plVar29 = plVar30 + -1;
                  lVar26 = *plVar29;
                  plVar25 = plVar25 + -1;
                  lVar22 = *plVar25;
                  uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
                  uVar1 = 0x1000203U >> (ulong)((*(byte *)(lVar26 + 0x140) & 3) << 3) & 0xff;
                  cVar5 = uVar1 < uVar2;
                  if (uVar2 < uVar1) {
                    cVar5 = -1;
                  }
                  if (uVar2 == uVar1) {
                    uVar24 = *(ulong *)(lVar22 + 0x10);
                    uVar31 = *(ulong *)(lVar26 + 0x10);
                    uVar28 = uVar24;
                    if (uVar31 <= uVar24) {
                      uVar28 = uVar31;
                    }
                    iVar6 = _memcmp(*(undefined8 *)(lVar22 + 8),*(undefined8 *)(lVar26 + 8),uVar28);
                    lVar3 = uVar24 - uVar31;
                    if (iVar6 != 0) {
                      lVar3 = (long)iVar6;
                    }
                    cVar5 = 0 < lVar3;
                    if (lVar3 < 0) {
                      cVar5 = -1;
                    }
                  }
                  if (cVar5 == '\0') {
                    pcStack_1138 = *(char **)(lVar22 + 0x38);
                    lStack_1130 = *(long *)(lVar22 + 0x40);
                    if (lStack_1130 == 0) {
                      uStack_10fe = false;
                    }
                    else {
                      uStack_10fe = *pcStack_1138 == '/';
                    }
                    pcStack_10f8 = *(char **)(lVar26 + 0x38);
                    lStack_10f0 = *(long *)(lVar26 + 0x40);
                    uStack_1128 = 6;
                    uStack_1100 = 0x201;
                    if (lStack_10f0 == 0) {
                      uStack_10be = false;
                    }
                    else {
                      uStack_10be = *pcStack_10f8 == '/';
                    }
                    uStack_10e8 = 6;
                    uStack_10c0 = 0x201;
                    cVar5 = func_0x00010603668c(&pcStack_1138,&pcStack_10f8);
                  }
                  bVar4 = cVar5 == -1;
                  plVar30 = plVar29;
                  if (!bVar4) {
                    plVar30 = plVar25;
                  }
                  *plVar32 = *plVar30;
                  plVar29 = plVar29 + !bVar4;
                  plVar25 = plVar25 + bVar4;
                  plVar30 = plVar29;
                  plVar32 = plVar32 + -1;
                } while (plVar29 != plVar7 && plVar25 != plVar11);
              }
              else {
                do {
                  lVar26 = *plVar30;
                  lVar22 = *plVar33;
                  uVar2 = 0x1000203U >> (ulong)((*(byte *)(lVar26 + 0x140) & 3) << 3) & 0xff;
                  uVar1 = 0x1000203U >> (ulong)((*(byte *)(lVar22 + 0x140) & 3) << 3) & 0xff;
                  cVar5 = uVar1 < uVar2;
                  if (uVar2 < uVar1) {
                    cVar5 = -1;
                  }
                  if (uVar2 == uVar1) {
                    uVar24 = *(ulong *)(lVar26 + 0x10);
                    uVar31 = *(ulong *)(lVar22 + 0x10);
                    uVar28 = uVar24;
                    if (uVar31 <= uVar24) {
                      uVar28 = uVar31;
                    }
                    iVar6 = _memcmp(*(undefined8 *)(lVar26 + 8),*(undefined8 *)(lVar22 + 8),uVar28);
                    lVar3 = uVar24 - uVar31;
                    if (iVar6 != 0) {
                      lVar3 = (long)iVar6;
                    }
                    cVar5 = 0 < lVar3;
                    if (lVar3 < 0) {
                      cVar5 = -1;
                    }
                  }
                  if (cVar5 == '\0') {
                    pcStack_1138 = *(char **)(lVar26 + 0x38);
                    lStack_1130 = *(long *)(lVar26 + 0x40);
                    if (lStack_1130 == 0) {
                      uStack_10fe = false;
                    }
                    else {
                      uStack_10fe = *pcStack_1138 == '/';
                    }
                    pcStack_10f8 = *(char **)(lVar22 + 0x38);
                    lStack_10f0 = *(long *)(lVar22 + 0x40);
                    uStack_1128 = 6;
                    uStack_1100 = 0x201;
                    if (lStack_10f0 == 0) {
                      uStack_10be = false;
                    }
                    else {
                      uStack_10be = *pcStack_10f8 == '/';
                    }
                    uStack_10e8 = 6;
                    uStack_10c0 = 0x201;
                    cVar5 = func_0x00010603668c(&pcStack_1138,&pcStack_10f8);
                  }
                  bVar4 = cVar5 == -1;
                  plVar32 = plVar30;
                  if (!bVar4) {
                    plVar32 = plVar33;
                  }
                  plVar29 = plVar7 + 1;
                  *plVar7 = *plVar32;
                  plVar33 = plVar33 + !bVar4;
                  plVar30 = plVar30 + bVar4;
                  plVar7 = plVar29;
                } while (plVar33 != plVar25 && plVar30 != (long *)(lVar8 + uStack_13b8 * 8));
              }
              _memcpy(plVar29,plVar33,(long)plVar25 - (long)plVar33);
            }
          }
          uVar28 = uVar9 * 2 | 1;
          if (uVar19 < 2) goto LAB_1039d001c;
        }
        uVar28 = uVar9 * 2;
      } while (1 < uVar19);
LAB_1039d001c:
      uVar21 = 1;
    }
LAB_1039d0028:
    auStack_1390[uVar21] = uVar28;
    abStack_117b[uVar21 + 1] = (byte)lVar16;
    if (uVar10 <= uStack_13b8) {
      if ((uVar28 & 1) != 0) {
        return;
      }
      func_0x0001039d02a0(lVar8,uVar10,plVar11,uVar12,(int)LZCOUNT(uVar10 | 1) << 1 ^ 0x7e,0,param_3
                         );
      return;
    }
    uVar21 = uVar21 + 1;
    uStack_13b8 = uStack_13b8 + (uVar27 >> 1);
    uVar19 = uVar10 - uStack_13b8;
    if (uVar10 < uStack_13b8 || uVar19 == 0) goto LAB_1039cfb68;
LAB_1039cfb7c:
    puVar15 = (undefined8 *)(lVar8 + uStack_13b8 * 8);
    if (uVar19 < uVar23) {
LAB_1039cfb94:
      if ((param_5 & 1) == 0) {
        if (uVar23 <= uVar19) {
          uVar19 = uVar23;
        }
        uVar19 = uVar19 << 1;
      }
      else {
        if (0x1f < uVar19) {
          uVar19 = 0x20;
        }
        func_0x0001039d02a0(puVar15,uVar19,plVar11,uVar12,0,0,param_3);
        uVar19 = uVar19 << 1 | 1;
      }
    }
    else {
      uVar28 = uVar19;
      if (1 < uVar19) {
        uVar13 = puVar15[1];
        uVar9 = func_0x0001039d29fc(uVar13,*puVar15);
        if ((uVar9 & 1) == 0) {
          if (uVar19 != 2) {
            uVar24 = 2;
            do {
              uVar34 = puVar15[uVar24];
              uVar31 = func_0x0001039d29fc(uVar34,uVar13);
              uVar28 = uVar24;
              if ((uVar31 & 1) != 0) goto joined_r0x0001039d0134;
              uVar24 = uVar24 + 1;
              uVar13 = uVar34;
              uVar28 = uVar19;
            } while (uVar19 != uVar24);
LAB_1039d011c:
            if (uVar23 <= uVar28) goto LAB_1039d0138;
            goto LAB_1039cfb94;
          }
        }
        else if (uVar19 != 2) {
          uVar24 = 2;
          do {
            uVar34 = puVar15[uVar24];
            iVar6 = func_0x0001039d29fc(uVar34,uVar13);
            uVar28 = uVar24;
            if (iVar6 == 0) goto LAB_1039d011c;
            uVar24 = uVar24 + 1;
            uVar13 = uVar34;
            uVar28 = uVar19;
          } while (uVar19 != uVar24);
joined_r0x0001039d0134:
          if (uVar28 < uVar23) goto LAB_1039cfb94;
LAB_1039d0138:
          if ((uVar9 & 1) != 0) {
            if (uVar28 < 2) {
              uVar28 = 1;
            }
            else {
              uVar19 = uVar28 >> 1;
              if (uVar19 < 4) goto LAB_1039d0098;
              uVar24 = uVar19 & 0x7ffffffffffffffc;
              pauVar17 = (undefined1 (*) [16])(lVar8 + 0x10 + uStack_13b8 * 8);
              pauVar20 = (undefined1 (*) [16])(lVar8 + -0x10 + uStack_13b8 * 8 + uVar28 * 8);
              uVar9 = uVar24;
              do {
                auVar39 = pauVar17[-1];
                auVar36 = *pauVar17;
                auVar37 = NEON_ext(*pauVar20,*pauVar20,8,1);
                auVar38 = NEON_ext(pauVar20[-1],pauVar20[-1],8,1);
                *(long *)(pauVar17[-1] + 8) = auVar37._8_8_;
                *(long *)pauVar17[-1] = auVar37._0_8_;
                *(long *)(*pauVar17 + 8) = auVar38._8_8_;
                *(long *)*pauVar17 = auVar38._0_8_;
                auVar39 = NEON_ext(auVar39,auVar39,8,1);
                auVar36 = NEON_ext(auVar36,auVar36,8,1);
                *(long *)(pauVar20[-1] + 8) = auVar36._8_8_;
                *(long *)pauVar20[-1] = auVar36._0_8_;
                *(long *)(*pauVar20 + 8) = auVar39._8_8_;
                *(long *)*pauVar20 = auVar39._0_8_;
                pauVar17 = pauVar17 + 2;
                pauVar20 = pauVar20 + -2;
                uVar9 = uVar9 - 4;
              } while (uVar9 != 0);
              if (uVar19 != uVar24) goto LAB_1039d01cc;
            }
          }
        }
        else {
          uVar19 = 1;
          uVar28 = 2;
LAB_1039d0098:
          uVar24 = 0;
LAB_1039d01cc:
          lVar16 = uVar19 - uVar24;
          puVar15 = (undefined8 *)(lVar8 + uStack_13b8 * 8 + uVar24 * 8);
          puVar18 = (undefined8 *)(lVar8 + -8 + uStack_13b8 * 8 + uVar28 * 8 + uVar24 * -8);
          do {
            uVar13 = *puVar15;
            *puVar15 = *puVar18;
            *puVar18 = uVar13;
            lVar16 = lVar16 + -1;
            puVar15 = puVar15 + 1;
            puVar18 = puVar18 + -1;
          } while (lVar16 != 0);
        }
      }
      uVar19 = uVar28 << 1 | 1;
    }
    lVar16 = LZCOUNT((uStack_13b8 * 2 + (uVar19 >> 1)) * uVar14 ^
                     (uStack_13b8 * 2 - (uVar27 >> 1)) * uVar14);
    uVar28 = uVar27;
  } while( true );
}

