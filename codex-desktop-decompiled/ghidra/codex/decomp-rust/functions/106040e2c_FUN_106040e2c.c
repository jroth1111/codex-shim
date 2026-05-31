
/* WARNING: Type propagation algorithm not settling */

void FUN_106040e2c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 **ppuVar17;
  ulong uVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  long lVar21;
  undefined8 **ppuVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 **ppuVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  undefined1 auVar34 [16];
  undefined8 *apuStack_f4238 [124833];
  undefined8 *puStack_530;
  ulong uStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  ulong uStack_510;
  undefined8 *apuStack_508 [147];
  
  puVar3 = param_1 + (ulong)(*param_1 > param_1[2]) * 2;
  puVar10 = param_1 + (ulong)(*param_1 <= param_1[2]) * 2;
  lVar21 = 0x30;
  if (param_1[4] <= param_1[6]) {
    lVar21 = 0x20;
  }
  puVar15 = (ulong *)((long)param_1 + lVar21);
  lVar21 = 0x20;
  if (param_1[4] <= param_1[6]) {
    lVar21 = 0x30;
  }
  puVar1 = (ulong *)((long)param_1 + lVar21);
  puVar4 = puVar15;
  if (*puVar10 <= *puVar1) {
    puVar4 = puVar10;
  }
  puVar2 = puVar10;
  puVar9 = puVar3;
  if (*puVar3 <= *puVar15) {
    puVar2 = puVar15;
    puVar9 = puVar4;
    puVar15 = puVar3;
  }
  puVar3 = puVar1;
  if (*puVar10 <= *puVar1) {
    puVar3 = puVar2;
    puVar10 = puVar1;
  }
  puVar1 = puVar9;
  if (*puVar9 <= *puVar3) {
    puVar1 = puVar3;
    puVar3 = puVar9;
  }
  uVar25 = *puVar15;
  param_3[1] = puVar15[1];
  *param_3 = uVar25;
  uVar25 = *puVar3;
  param_3[3] = puVar3[1];
  param_3[2] = uVar25;
  uVar25 = *puVar1;
  param_3[5] = puVar1[1];
  param_3[4] = uVar25;
  uVar25 = *puVar10;
  param_3[7] = puVar10[1];
  param_3[6] = uVar25;
  puVar15 = param_1 + 8;
  puVar3 = puVar15 + (ulong)(*puVar15 > param_1[10]) * 2;
  puVar10 = puVar15 + (ulong)(*puVar15 <= param_1[10]) * 2;
  lVar21 = 0x30;
  if (param_1[0xc] <= param_1[0xe]) {
    lVar21 = 0x20;
  }
  puVar1 = (ulong *)((long)puVar15 + lVar21);
  lVar21 = 0x20;
  if (param_1[0xc] <= param_1[0xe]) {
    lVar21 = 0x30;
  }
  puVar15 = (ulong *)((long)puVar15 + lVar21);
  puVar4 = puVar1;
  if (*puVar10 <= *puVar15) {
    puVar4 = puVar10;
  }
  puVar2 = puVar10;
  puVar9 = puVar3;
  if (*puVar3 <= *puVar1) {
    puVar2 = puVar1;
    puVar9 = puVar4;
    puVar1 = puVar3;
  }
  puVar3 = puVar15;
  if (*puVar10 <= *puVar15) {
    puVar3 = puVar2;
    puVar10 = puVar15;
  }
  puVar15 = puVar9;
  if (*puVar9 <= *puVar3) {
    puVar15 = puVar3;
    puVar3 = puVar9;
  }
  uVar25 = *puVar1;
  param_3[9] = puVar1[1];
  param_3[8] = uVar25;
  uVar25 = *puVar3;
  param_3[0xb] = puVar3[1];
  param_3[10] = uVar25;
  uVar25 = *puVar15;
  param_3[0xd] = puVar15[1];
  param_3[0xc] = uVar25;
  uVar25 = *puVar10;
  param_3[0xf] = puVar10[1];
  param_3[0xe] = uVar25;
  bVar12 = *param_3 <= param_3[8];
  puVar3 = param_3 + 8;
  if (bVar12) {
    puVar3 = param_3;
  }
  uVar25 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar25;
  puVar3 = param_3 + 8 + (ulong)!bVar12 * 2;
  puVar10 = param_3 + (ulong)bVar12 * 2;
  bVar12 = param_3[6] <= param_3[0xe];
  puVar15 = param_3 + 6;
  if (bVar12) {
    puVar15 = param_3 + 0xe;
  }
  uVar25 = *puVar15;
  param_2[0xf] = puVar15[1];
  param_2[0xe] = uVar25;
  puVar15 = param_3 + 0xe + (ulong)bVar12 * -2;
  puVar1 = param_3 + 6 + (ulong)!bVar12 * -2;
  bVar12 = *puVar10 <= *puVar3;
  puVar4 = puVar3;
  if (bVar12) {
    puVar4 = puVar10;
  }
  uVar25 = *puVar4;
  param_2[3] = puVar4[1];
  param_2[2] = uVar25;
  puVar3 = puVar3 + (ulong)!bVar12 * 2;
  puVar10 = puVar10 + (ulong)bVar12 * 2;
  bVar12 = *puVar1 <= *puVar15;
  puVar4 = puVar1;
  if (bVar12) {
    puVar4 = puVar15;
  }
  uVar25 = *puVar4;
  param_2[0xd] = puVar4[1];
  param_2[0xc] = uVar25;
  puVar15 = puVar15 + (ulong)bVar12 * -2;
  puVar1 = puVar1 + (ulong)!bVar12 * -2;
  bVar12 = *puVar10 <= *puVar3;
  puVar4 = puVar3;
  if (bVar12) {
    puVar4 = puVar10;
  }
  uVar25 = *puVar4;
  param_2[5] = puVar4[1];
  param_2[4] = uVar25;
  puVar3 = puVar3 + (ulong)!bVar12 * 2;
  puVar10 = puVar10 + (ulong)bVar12 * 2;
  bVar12 = *puVar1 <= *puVar15;
  puVar4 = puVar1;
  if (bVar12) {
    puVar4 = puVar15;
  }
  uVar25 = *puVar4;
  param_2[0xb] = puVar4[1];
  param_2[10] = uVar25;
  puVar15 = puVar15 + (ulong)bVar12 * -2;
  puVar1 = puVar1 + (ulong)!bVar12 * -2;
  bVar12 = *puVar10 <= *puVar3;
  puVar4 = puVar3;
  if (bVar12) {
    puVar4 = puVar10;
  }
  uVar25 = *puVar4;
  param_2[7] = puVar4[1];
  param_2[6] = uVar25;
  bVar13 = *puVar1 <= *puVar15;
  puVar4 = puVar1;
  if (bVar13) {
    puVar4 = puVar15;
  }
  uVar25 = *puVar4;
  param_2[9] = puVar4[1];
  param_2[8] = uVar25;
  if (puVar10 + (ulong)bVar12 * 2 == puVar1 + (ulong)!bVar13 * -2 + 2 &&
      puVar3 + (ulong)!bVar12 * 2 == puVar15 + (ulong)bVar13 * -2 + 2) {
    return;
  }
  auVar34 = __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
  puVar33 = auVar34._8_8_;
  puVar27 = auVar34._0_8_;
  puStack_530 = (undefined8 *)0x0;
  if ((undefined8 *)0x1 < puVar33) {
    uVar25 = (ulong)puVar33 >> 1;
    puVar6 = puVar27 + uVar25 * 3;
    ppuVar20 = apuStack_f4238 + uVar25 * 3 + 0x1e7a7;
    puStack_518 = puVar6;
    if (puVar33 < (undefined8 *)0x8) {
      apuStack_508[2] = (undefined8 *)puVar27[1];
      apuStack_508[1] = (undefined8 *)*puVar27;
      apuStack_508[3] = (undefined8 *)puVar27[2];
      puVar31 = (undefined8 *)*puVar6;
      apuStack_f4238[uVar25 * 3 + 0x1e7a8] = (undefined8 *)puVar6[1];
      *ppuVar20 = puVar31;
      apuStack_f4238[uVar25 * 3 + 0x1e7a9] = (undefined8 *)puVar6[2];
      uVar23 = 1;
    }
    else {
      FUN_106040b18(puVar27,apuStack_508 + 1);
      FUN_106040b18(puVar6,ppuVar20);
      uVar23 = 4;
    }
    puStack_530 = puVar33;
    uStack_528 = uVar25;
    uStack_510 = (long)puVar33 - uVar25;
    apuStack_508[0] = puVar27;
    puStack_520 = (undefined8 *)(uVar23 * 3);
    if (uVar23 < uVar25) {
      lVar21 = uVar23 * 0x18;
      uVar18 = uVar23;
      uVar26 = uVar25;
      do {
        uVar16 = uVar18 + 1;
        puVar27 = apuStack_508[0] + uVar18 * 3;
        uVar32 = *puVar27;
        apuStack_f4238[uVar18 * 3 + 0x1e7a8] = (undefined8 *)puVar27[1];
        apuStack_f4238[uVar18 * 3 + 0x1e7a7] = (undefined8 *)uVar32;
        apuStack_f4238[uVar18 * 3 + 0x1e7a9] = (undefined8 *)puVar27[2];
        puVar33 = apuStack_f4238[uVar18 * 3 + 0x1e7a7];
        puVar6 = apuStack_f4238[uVar18 * 3 + 0x1e7a8];
        puVar31 = apuStack_f4238[uVar18 * 3 + 0x1e7a5];
        puVar27 = puVar6;
        if (puVar31 <= puVar6) {
          puVar27 = puVar31;
        }
        iVar14 = _memcmp(puVar33,apuStack_f4238[uVar18 * 3 + 0x1e7a4],puVar27);
        lVar28 = (long)puVar6 - (long)puVar31;
        if (iVar14 != 0) {
          lVar28 = (long)iVar14;
        }
        if (lVar28 < 0) {
          puVar27 = apuStack_f4238[uVar18 * 3 + 0x1e7a9];
          lVar28 = lVar21;
          do {
            lVar30 = lVar28;
            ppuVar17 = apuStack_508 + 1;
            uVar32 = *(undefined8 *)((long)&puStack_518 + lVar30);
            *(undefined8 *)((long)apuStack_508 + lVar30 + 0x10U) =
                 *(undefined8 *)((long)apuStack_508 + lVar30 + 0xfffffffffffffff8U);
            *(undefined8 *)((long)ppuVar17 + lVar30) = uVar32;
            *(undefined8 *)((long)apuStack_508 + lVar30 + 0x18U) =
                 *(undefined8 *)((long)apuStack_508 + lVar30);
            if (lVar30 + -0x18 == 0) goto LAB_1060411bc;
            puVar24 = *(undefined8 **)((long)&uStack_528 + lVar30);
            puVar31 = puVar6;
            if (puVar24 <= puVar6) {
              puVar31 = puVar24;
            }
            iVar14 = _memcmp(puVar33,*(undefined8 *)((long)&puStack_530 + lVar30),puVar31);
            lVar5 = (long)puVar6 - (long)puVar24;
            if (iVar14 != 0) {
              lVar5 = (long)iVar14;
            }
            lVar28 = lVar30 + -0x18;
          } while (lVar5 < 0);
          ppuVar17 = (undefined8 **)((long)&puStack_518 + lVar30);
LAB_1060411bc:
          *ppuVar17 = puVar33;
          ppuVar17[1] = puVar6;
          ppuVar17[2] = puVar27;
          uVar26 = uStack_528;
        }
        lVar21 = lVar21 + 0x18;
        uVar18 = uVar16;
      } while (uVar16 < uVar26);
    }
    puVar27 = puStack_520;
    puVar33 = apuStack_508[0];
    if (uVar23 < uStack_510) {
      lVar28 = (long)puStack_520 * 8;
      lVar21 = 0x18;
      ppuVar17 = ppuVar20;
      do {
        uVar18 = uVar23 + 1;
        puVar6 = puStack_518 + uVar23 * 3;
        ppuVar22 = ppuVar20 + uVar23 * 3;
        puVar31 = (undefined8 *)*puVar6;
        ppuVar22[1] = (undefined8 *)puVar6[1];
        *ppuVar22 = puVar31;
        ppuVar22[2] = (undefined8 *)puVar6[2];
        puVar31 = *ppuVar22;
        puVar24 = ppuVar22[1];
        puVar7 = ppuVar22[-2];
        puVar6 = puVar24;
        if (puVar7 <= puVar24) {
          puVar6 = puVar7;
        }
        iVar14 = _memcmp(puVar31,ppuVar22[-3],puVar6);
        lVar30 = (long)puVar24 - (long)puVar7;
        if (iVar14 != 0) {
          lVar30 = (long)iVar14;
        }
        if (lVar30 < 0) {
          puStack_520 = ppuVar22[2];
          ppuVar22 = ppuVar17;
          lVar30 = lVar21;
          do {
            ppuVar29 = ppuVar22 + (long)puVar27;
            ppuVar29[1] = ppuVar29[-2];
            *ppuVar29 = ppuVar29[-3];
            ppuVar29[2] = ppuVar29[-1];
            ppuVar19 = ppuVar20;
            if (lVar28 - lVar30 == 0) goto LAB_1060412a8;
            puVar6 = ppuVar29[-5];
            puVar33 = puVar24;
            if (puVar6 <= puVar24) {
              puVar33 = puVar6;
            }
            iVar14 = _memcmp(puVar31,ppuVar29[-6],puVar33);
            lVar5 = (long)puVar24 - (long)puVar6;
            if (iVar14 != 0) {
              lVar5 = (long)iVar14;
            }
            lVar30 = lVar30 + 0x18;
            ppuVar22 = ppuVar22 + -3;
          } while (lVar5 < 0);
          ppuVar19 = ppuVar22 + (long)puVar27;
LAB_1060412a8:
          puVar33 = apuStack_508[0];
          *ppuVar19 = puVar31;
          ppuVar19[1] = puVar24;
          ppuVar19[2] = puStack_520;
        }
        lVar21 = lVar21 + -0x18;
        ppuVar17 = ppuVar17 + 3;
        uVar23 = uVar18;
      } while (uVar18 < uStack_510);
    }
    lVar21 = (long)puStack_530 * 0x18;
    ppuVar22 = apuStack_508 + 1;
    ppuVar17 = ppuVar22 + (long)puStack_530 * 3 + -3;
    ppuVar29 = apuStack_f4238 + uVar25 * 3 + 0x1e7a4;
    uVar25 = uStack_528;
    do {
      puVar24 = puVar33;
      lVar21 = lVar21 + -0x18;
      puVar27 = (undefined8 *)((long)apuStack_508[0] + lVar21);
      puVar6 = ppuVar20[1];
      puVar31 = ppuVar22[1];
      puVar33 = puVar6;
      if (puVar31 <= puVar6) {
        puVar33 = puVar31;
      }
      iVar14 = _memcmp(*ppuVar20,*ppuVar22,puVar33);
      uVar23 = (long)puVar6 - (long)puVar31;
      if (iVar14 != 0) {
        uVar23 = (long)iVar14;
      }
      ppuVar19 = ppuVar22;
      if (0x7fffffffffffffff < uVar23) {
        ppuVar19 = ppuVar20;
      }
      puVar33 = *ppuVar19;
      puVar24[1] = ppuVar19[1];
      *puVar24 = puVar33;
      puVar24[2] = ppuVar19[2];
      ppuVar20 = ppuVar20 + ((long)uVar23 >> 0x3f) * -3;
      ppuVar22 = (undefined8 **)((long)ppuVar22 + ((ulong)~(uint)((long)uVar23 >> 0x3f) & 0x18));
      puVar6 = ppuVar17[1];
      puVar31 = ppuVar29[1];
      puVar33 = puVar6;
      if (puVar31 <= puVar6) {
        puVar33 = puVar31;
      }
      iVar14 = _memcmp(*ppuVar17,*ppuVar29,puVar33);
      uVar23 = (long)puVar6 - (long)puVar31;
      if (iVar14 != 0) {
        uVar23 = (long)iVar14;
      }
      ppuVar19 = ppuVar17;
      if (0x7fffffffffffffff < uVar23) {
        ppuVar19 = ppuVar29;
      }
      puVar33 = *ppuVar19;
      puVar27[1] = ppuVar19[1];
      *puVar27 = puVar33;
      puVar27[2] = ppuVar19[2];
      uVar8 = (uint)((long)uVar23 >> 0x3f);
      ppuVar17 = ppuVar17 + (long)(int)~uVar8 * 3;
      ppuVar29 = ppuVar29 + (long)(int)uVar8 * 3;
      uVar25 = uVar25 - 1;
      puVar33 = puVar24 + 3;
    } while (uVar25 != 0);
    if (((ulong)puStack_530 & 1) != 0) {
      bVar12 = ppuVar29 + 3 <= ppuVar22;
      ppuVar19 = ppuVar22;
      if (bVar12) {
        ppuVar19 = ppuVar20;
      }
      puVar27 = *ppuVar19;
      puVar24[4] = ppuVar19[1];
      puVar24[3] = puVar27;
      puVar24[5] = ppuVar19[2];
      lVar21 = 0x18;
      if (bVar12) {
        lVar21 = 0;
      }
      ppuVar22 = (undefined8 **)((long)ppuVar22 + lVar21);
      lVar21 = 0;
      if (bVar12) {
        lVar21 = 0x18;
      }
      ppuVar20 = (undefined8 **)((long)ppuVar20 + lVar21);
    }
    if (ppuVar22 != ppuVar29 + 3 || ppuVar20 != ppuVar17 + 3) {
      __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1060414cc);
      (*pcVar11)();
    }
  }
  return;
}

