
/* WARNING: Possible PIC construction at 0x0001060422a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060422a8) */
/* WARNING: Removing unreachable block (ram,0x0001060422b0) */
/* WARNING: Removing unreachable block (ram,0x0001060422b8) */
/* WARNING: Type propagation algorithm not settling */

void __ZN4core5slice4sort6stable14driftsort_main17hb2d9da1781019d87E
               (undefined8 param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5,
               ulong *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  bool bVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  ulong auStack_33b0 [66];
  byte abStack_319b [75];
  ulong auStack_30f0 [512];
  undefined8 auStack_20a0 [512];
  undefined8 auStack_1050 [512];
  
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = param_1;
  puVar2 = auStack_1050;
  auStack_1050[0] = 0;
  uVar10 = param_2 - (param_2 >> 1);
  if (0x51614 < param_2) {
    param_2 = 0x51615;
  }
  if (param_2 <= uVar10) {
    param_2 = uVar10;
  }
  uVar8 = param_2;
  if (param_2 < 0x31) {
    uVar8 = 0x30;
  }
  if (param_2 < 0xab) {
    uVar8 = 0xaa;
LAB_106042078:
    FUN_106043ce0(auVar37._0_8_,auVar37._8_8_,puVar2,uVar8,auVar37._8_8_ < 0x41,param_3);
    if (0xaa < param_2) {
      _free(puVar2);
    }
    return;
  }
  lVar22 = uVar8 * 0x18;
  puVar6 = param_3;
  if (0x555555555555555 < uVar10) {
    auVar37 = func_0x0001087c9084(0,lVar22);
  }
  if (lVar22 == 0) {
    uVar8 = 0;
    puVar2 = (undefined8 *)0x8;
    goto LAB_106042078;
  }
  puVar2 = (undefined8 *)_malloc(lVar22);
  if (puVar2 != (undefined8 *)0x0) goto LAB_106042078;
  uVar3 = func_0x0001087c9084(8,lVar22);
  if (0xaa < param_2) {
    _free();
  }
  auVar37 = __Unwind_Resume(uVar3);
  uVar8 = auVar37._8_8_;
  puVar2 = auStack_20a0;
  auStack_20a0[0] = 0;
  uVar12 = uVar8 - (uVar8 >> 1);
  uVar10 = uVar8;
  if (249999 < uVar8) {
    uVar10 = 250000;
  }
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  uVar9 = uVar10;
  if (uVar10 < 0x31) {
    uVar9 = 0x30;
  }
  if (uVar10 < 0x81) {
    uVar9 = 0x80;
LAB_106042184:
    FUN_1060437f4(auVar37._0_8_,uVar8,puVar2,uVar9,uVar8 < 0x41,puVar6);
    if (0x80 < uVar10) {
      _free(puVar2);
    }
    return;
  }
  uVar3 = 0;
  uVar23 = uVar9 * 0x20;
  puVar7 = puVar6;
  if ((uVar12 >> 0x3b == 0) && (uVar23 < 0x7ffffffffffffff9)) {
    puVar2 = (undefined8 *)_malloc(uVar23);
    if (puVar2 != (undefined8 *)0x0) goto LAB_106042184;
    uVar3 = 8;
  }
  uVar3 = func_0x0001087c9084(uVar3,uVar23);
  if (0x80 < uVar10) {
    _free();
  }
  auVar37 = __Unwind_Resume(uVar3);
  uVar8 = auVar37._8_8_;
  auStack_30f0[0] = 0;
  uVar12 = uVar8 - (uVar8 >> 1);
  uVar10 = uVar8;
  if (249999 < uVar8) {
    uVar10 = 250000;
  }
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  uVar9 = uVar10;
  if (uVar10 < 0x31) {
    uVar9 = 0x30;
  }
  if (uVar10 < 0x81) {
    uVar9 = 0x80;
    puVar4 = auStack_30f0;
LAB_106042294:
    puVar6 = puVar4;
    param_5 = (uint)(uVar8 < 0x41);
  }
  else {
    uVar3 = 0;
    uVar23 = uVar9 * 0x20;
    puVar6 = puVar7;
    if ((uVar12 >> 0x3b == 0) && (uVar23 < 0x7ffffffffffffff9)) {
      puVar4 = (ulong *)_malloc(uVar23);
      if (puVar4 != (ulong *)0x0) goto LAB_106042294;
      uVar3 = 8;
    }
    puVar7 = param_6;
    uVar9 = param_4;
    uVar3 = func_0x0001087c9084(uVar3,uVar23);
    if (0x80 < uVar10) {
      _free();
    }
    auVar37 = __Unwind_Resume(uVar3);
  }
  uVar10 = auVar37._8_8_;
  lVar22 = auVar37._0_8_;
  if (uVar10 < 2) {
    return;
  }
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar8 = 0x4000000000000000 / uVar10;
  }
  if (uVar8 * uVar10 != 0x4000000000000000) {
    uVar8 = uVar8 + 1;
  }
  if (uVar10 < 0x1001) {
    uVar12 = uVar10 - (uVar10 >> 1);
    if (0x3f < uVar12) {
      uVar12 = 0x40;
    }
  }
  else {
    uVar1 = (uint)LZCOUNT(uVar10 | 1) ^ 0x3f;
    uVar12 = (ulong)((uVar1 & 1) + (uVar1 >> 1));
    uVar12 = (1L << (uVar12 & 0x3f)) + (uVar10 >> (uVar12 & 0x3f)) >> 1;
  }
  uVar24 = 0;
  uVar23 = 0;
  uVar29 = 1;
  uVar18 = uVar10;
  if (uVar10 == 0) goto LAB_1060423f0;
LAB_106042404:
  puVar4 = (ulong *)(lVar22 + uVar24 * 0x20);
  if (uVar18 < uVar12) {
LAB_106042418:
    if ((param_5 & 1) == 0) {
      if (uVar12 <= uVar18) {
        uVar18 = uVar12;
      }
      uVar18 = uVar18 << 1;
    }
    else {
      if (0x1f < uVar18) {
        uVar18 = 0x20;
      }
      __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E
                (puVar4,uVar18,puVar6,uVar9,0,0,puVar7);
      uVar18 = uVar18 << 1 | 1;
    }
  }
  else {
    if (1 < uVar18) {
      uVar30 = puVar4[6];
      if ((uVar30 < puVar4[2]) || (uVar30 <= puVar4[2] && puVar4[4] < *puVar4)) {
        if (uVar18 == 2) {
          bVar15 = true;
          goto joined_r0x0001060424d0;
        }
        puVar19 = (ulong *)(lVar22 + 0x40 + uVar24 * 0x20);
        uVar13 = 2;
        do {
          uVar26 = puVar19[2];
          if ((uVar30 <= uVar26) && (uVar27 = uVar13, uVar30 < uVar26 || puVar19[-4] <= *puVar19))
          break;
          uVar13 = uVar13 + 1;
          puVar19 = puVar19 + 4;
          uVar30 = uVar26;
          uVar27 = uVar18;
        } while (uVar18 != uVar13);
        bVar15 = true;
joined_r0x000106042528:
        if (uVar27 < uVar12) goto LAB_106042418;
      }
      else {
        if (uVar18 != 2) {
          puVar19 = (ulong *)(lVar22 + 0x50 + uVar24 * 0x20);
          uVar13 = 2;
          uVar26 = puVar4[4];
          do {
            uVar28 = *puVar19;
            uVar27 = uVar13;
            if ((uVar28 < uVar30) || (puVar11 = puVar19 + -2, uVar28 <= uVar30 && *puVar11 < uVar26)
               ) break;
            uVar13 = uVar13 + 1;
            puVar19 = puVar19 + 4;
            uVar30 = uVar28;
            uVar26 = *puVar11;
            uVar27 = uVar18;
          } while (uVar18 != uVar13);
          bVar15 = false;
          goto joined_r0x000106042528;
        }
        bVar15 = false;
joined_r0x0001060424d0:
        uVar27 = 2;
        if (2 < uVar12) goto LAB_106042418;
      }
      uVar18 = uVar27;
      if (bVar15) {
        if (uVar18 < 2) {
          uVar18 = 1;
        }
        else {
          uVar30 = uVar18 >> 1;
          puVar2 = (undefined8 *)(lVar22 + 0x10 + uVar24 * 0x20);
          puVar20 = (undefined8 *)(lVar22 + -0x10 + uVar24 * 0x20 + uVar18 * 0x20);
          do {
            uVar31 = puVar2[-1];
            uVar3 = puVar2[-2];
            uVar33 = puVar2[1];
            uVar32 = *puVar2;
            uVar34 = puVar20[-2];
            uVar36 = puVar20[1];
            uVar35 = *puVar20;
            puVar2[-1] = puVar20[-1];
            puVar2[-2] = uVar34;
            puVar2[1] = uVar36;
            *puVar2 = uVar35;
            puVar20[-1] = uVar31;
            puVar20[-2] = uVar3;
            puVar20[1] = uVar33;
            *puVar20 = uVar32;
            puVar2 = puVar2 + 4;
            puVar20 = puVar20 + -4;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
      }
    }
    uVar18 = uVar18 << 1 | 1;
  }
  lVar16 = LZCOUNT((uVar24 * 2 + (uVar18 >> 1)) * uVar8 ^ (uVar24 * 2 - (uVar29 >> 1)) * uVar8);
  uVar30 = uVar29;
  do {
    uVar29 = uVar18;
    if (1 < uVar23) {
      do {
        while( true ) {
          uVar18 = uVar23 - 1;
          if ((uint)abStack_319b[uVar23] < (uint)lVar16) goto LAB_106042898;
          uVar26 = auStack_33b0[uVar18];
          uVar27 = uVar26 >> 1;
          uVar28 = uVar30 >> 1;
          uVar13 = uVar27 + uVar28;
          uVar23 = uVar18;
          if (uVar13 <= uVar9 && (((uint)uVar26 | (uint)uVar30) & 1) == 0) break;
          puVar4 = (ulong *)(lVar22 + (uVar24 - uVar13) * 0x20);
          if ((uVar26 & 1) == 0) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E
                      (puVar4,uVar27,puVar6,uVar9,(int)LZCOUNT(uVar27 | 1) << 1 ^ 0x7e,0,puVar7);
          }
          if ((uVar30 & 1) == 0) {
            __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E
                      (puVar4 + uVar27 * 4,uVar28,puVar6,uVar9,(int)LZCOUNT(uVar28 | 1) << 1 ^ 0x7e,
                       0,puVar7);
          }
          if ((1 < uVar26) && (1 < uVar30)) {
            uVar30 = uVar28;
            if (uVar27 <= uVar28) {
              uVar30 = uVar27;
            }
            if (uVar30 <= uVar9) {
              puVar19 = puVar4 + uVar27 * 4;
              puVar11 = puVar19;
              if (uVar27 <= uVar28) {
                puVar11 = puVar4;
              }
              _memcpy(puVar6,puVar11,uVar30 * 0x20);
              puVar11 = puVar6 + uVar30 * 4;
              puVar5 = puVar6;
              puVar14 = (ulong *)(lVar22 + -0x20 + uVar24 * 0x20);
              if (uVar28 < uVar27) {
                do {
                  puVar25 = puVar19 + -4;
                  puVar17 = puVar11 + -4;
                  puVar21 = puVar25;
                  if (puVar11[-2] < puVar19[-2]) {
                    uVar30 = 1;
                  }
                  else {
                    uVar1 = (uint)(puVar11[-2] <= puVar19[-2] && *puVar17 < *puVar25);
                    uVar30 = (ulong)uVar1;
                    if (uVar1 == 0) {
                      puVar21 = puVar17;
                    }
                  }
                  uVar26 = *puVar21;
                  uVar28 = puVar21[3];
                  uVar27 = puVar21[2];
                  puVar14[1] = puVar21[1];
                  *puVar14 = uVar26;
                  puVar14[3] = uVar28;
                  puVar14[2] = uVar27;
                  puVar25 = puVar25 + ((ulong)~(uint)uVar30 & 1) * 4;
                  puVar11 = puVar17 + uVar30 * 4;
                  puVar14 = puVar14 + -4;
                  puVar19 = puVar25;
                } while (puVar25 != puVar4 && puVar11 != puVar6);
              }
              else {
                do {
                  if (puVar19[2] < puVar5[2]) {
                    uVar30 = 1;
                    uVar26 = *puVar19;
                    uVar28 = puVar19[3];
                    uVar27 = puVar19[2];
                    puVar4[1] = puVar19[1];
                    *puVar4 = uVar26;
                    puVar4[3] = uVar28;
                    puVar4[2] = uVar27;
                  }
                  else {
                    uVar1 = (uint)(puVar19[2] <= puVar5[2] && *puVar19 < *puVar5);
                    uVar30 = (ulong)uVar1;
                    puVar14 = puVar19;
                    if (uVar1 == 0) {
                      puVar14 = puVar5;
                    }
                    uVar26 = *puVar14;
                    uVar28 = puVar14[3];
                    uVar27 = puVar14[2];
                    puVar4[1] = puVar14[1];
                    *puVar4 = uVar26;
                    puVar4[3] = uVar28;
                    puVar4[2] = uVar27;
                    puVar5 = puVar5 + (ulong)(uVar1 ^ 1) * 4;
                  }
                  puVar25 = puVar4 + 4;
                  if (puVar5 == puVar11) break;
                  puVar25 = puVar4 + 4;
                  puVar19 = puVar19 + uVar30 * 4;
                  puVar4 = puVar25;
                } while (puVar19 != (ulong *)(lVar22 + uVar24 * 0x20));
              }
              _memcpy(puVar25,puVar5,(long)puVar11 - (long)puVar5);
            }
          }
          uVar30 = uVar13 * 2 | 1;
          if (uVar18 < 2) goto LAB_10604288c;
        }
        uVar30 = uVar13 * 2;
      } while (1 < uVar18);
LAB_10604288c:
      uVar23 = 1;
    }
LAB_106042898:
    auStack_33b0[uVar23] = uVar30;
    abStack_319b[uVar23 + 1] = (byte)lVar16;
    if (uVar10 <= uVar24) {
      if ((uVar30 & 1) != 0) {
        return;
      }
      __ZN4core5slice4sort6stable9quicksort9quicksort17h1a694c4312139070E(lVar22,uVar10,puVar6);
      return;
    }
    uVar23 = uVar23 + 1;
    uVar24 = uVar24 + (uVar29 >> 1);
    uVar18 = uVar10 - uVar24;
    if (uVar24 <= uVar10 && uVar10 - uVar24 != 0) goto LAB_106042404;
LAB_1060423f0:
    lVar16 = 0;
    uVar18 = 1;
    uVar30 = uVar29;
  } while( true );
}

