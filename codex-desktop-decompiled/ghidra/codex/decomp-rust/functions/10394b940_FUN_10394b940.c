
/* WARNING: Type propagation algorithm not settling */

void FUN_10394b940(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *****pppppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined ***pppuVar16;
  undefined *****pppppuVar17;
  undefined *****pppppuVar18;
  undefined *****pppppuVar19;
  undefined *****pppppuVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined *****pppppuVar25;
  undefined *****pppppuVar26;
  undefined ****ppppuVar27;
  undefined8 uVar28;
  undefined ****ppppuVar29;
  undefined8 uVar30;
  undefined ****ppppuVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined ****ppppuVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined ****appppuStack_a50 [2];
  ulong uStack_a40;
  undefined *****apppppuStack_a38 [8];
  undefined ****appppuStack_9f8 [10];
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined *****pppppuStack_f0;
  undefined ****ppppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined ****ppppuStack_d8;
  undefined ****ppppuStack_d0;
  undefined ****ppppuStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *****pppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined *puStack_80;
  undefined *****pppppuStack_78;
  undefined *puStack_70;
  
  if (param_2 < 2) {
    return;
  }
  pppuVar16 = (undefined ***)(param_2 >> 1);
  appppuStack_9f8[0] = (undefined ****)((long)pppuVar16 * 3);
  uStack_a40 = param_2;
  apppppuStack_a38[3] = (undefined *****)param_1;
  apppppuStack_a38[7] = (undefined *****)pppuVar16;
  if (param_2 < 8) {
    appppuStack_9f8[2] = (undefined ****)param_1[1];
    appppuStack_9f8[1] = (undefined ****)*param_1;
    appppuStack_9f8[4] = (undefined ****)param_1[3];
    appppuStack_9f8[3] = (undefined ****)param_1[2];
    appppuStack_9f8[6] = (undefined ****)param_1[5];
    appppuStack_9f8[5] = (undefined ****)param_1[4];
    param_1 = param_1 + (long)pppuVar16 * 6;
    ppppuVar27 = (undefined ****)param_1[2];
    uVar30 = param_1[5];
    uVar28 = param_1[4];
    appppuStack_9f8[(long)pppuVar16 * 6U + 4] = (undefined ****)param_1[3];
    appppuStack_9f8[(long)pppuVar16 * 6 + 3] = ppppuVar27;
    appppuStack_9f8[(long)pppuVar16 * 6 + 6] = (undefined ****)uVar30;
    appppuStack_9f8[(long)pppuVar16 * 6 + 5] = (undefined ****)uVar28;
    ppppuVar27 = (undefined ****)*param_1;
    appppuStack_9f8[(long)pppuVar16 * 6 + 2] = (undefined ****)param_1[1];
    appppuStack_9f8[(long)pppuVar16 * 6 + 1] = ppppuVar27;
    apppppuStack_a38[0] = (undefined *****)0x1;
    if (pppuVar16 < (undefined ***)0x2) goto LAB_10394bd80;
  }
  else {
    uVar13 = FUN_103947af8(param_1 + 6,param_1);
    iVar14 = FUN_103947af8(param_1 + 0x12,param_1 + 0xc);
    puVar23 = param_1 + (ulong)uVar13 * 6;
    puVar22 = param_1 + (ulong)(uVar13 ^ 1) * 6;
    lVar21 = 0x90;
    if (iVar14 == 0) {
      lVar21 = 0x60;
    }
    puVar1 = (undefined8 *)((long)param_1 + lVar21);
    lVar21 = 0x60;
    if (iVar14 == 0) {
      lVar21 = 0x90;
    }
    puVar2 = (undefined8 *)((long)param_1 + lVar21);
    iVar14 = FUN_103947af8(puVar1,puVar23);
    iVar15 = FUN_103947af8(puVar2,puVar22);
    puVar4 = puVar1;
    if (iVar15 == 0) {
      puVar4 = puVar22;
    }
    puVar5 = puVar22;
    puVar3 = puVar23;
    if (iVar14 == 0) {
      puVar5 = puVar1;
      puVar3 = puVar4;
      puVar1 = puVar23;
    }
    puVar23 = puVar2;
    if (iVar15 == 0) {
      puVar23 = puVar5;
      puVar22 = puVar2;
    }
    iVar14 = FUN_103947af8(puVar23,puVar3);
    puVar2 = puVar23;
    if (iVar14 == 0) {
      puVar2 = puVar3;
    }
    appppuStack_9f8[2] = (undefined ****)puVar1[1];
    appppuStack_9f8[1] = (undefined ****)*puVar1;
    appppuStack_9f8[4] = (undefined ****)puVar1[3];
    appppuStack_9f8[3] = (undefined ****)puVar1[2];
    if (iVar14 == 0) {
      puVar3 = puVar23;
    }
    appppuStack_9f8[6] = (undefined ****)puVar1[5];
    appppuStack_9f8[5] = (undefined ****)puVar1[4];
    appppuStack_9f8[8] = (undefined ****)puVar2[1];
    appppuStack_9f8[7] = (undefined ****)*puVar2;
    uStack_9a8 = puVar2[3];
    appppuStack_9f8[9] = (undefined ****)puVar2[2];
    uStack_998 = puVar2[5];
    uStack_9a0 = puVar2[4];
    uStack_978 = puVar3[3];
    uStack_980 = puVar3[2];
    uStack_968 = puVar3[5];
    uStack_970 = puVar3[4];
    uStack_988 = puVar3[1];
    uStack_990 = *puVar3;
    uStack_958 = puVar22[1];
    uStack_960 = *puVar22;
    uStack_948 = puVar22[3];
    uStack_950 = puVar22[2];
    uStack_938 = puVar22[5];
    uStack_940 = puVar22[4];
    param_1 = param_1 + (long)pppuVar16 * 6;
    uVar13 = FUN_103947af8(param_1 + 6,param_1);
    iVar14 = FUN_103947af8(param_1 + 0x12,param_1 + 0xc);
    puVar23 = param_1 + (ulong)uVar13 * 6;
    puVar22 = param_1 + (ulong)(uVar13 ^ 1) * 6;
    lVar21 = 0x90;
    if (iVar14 == 0) {
      lVar21 = 0x60;
    }
    puVar1 = (undefined8 *)((long)param_1 + lVar21);
    lVar21 = 0x60;
    if (iVar14 == 0) {
      lVar21 = 0x90;
    }
    param_1 = (undefined8 *)((long)param_1 + lVar21);
    iVar14 = FUN_103947af8(puVar1,puVar23);
    iVar15 = FUN_103947af8(param_1,puVar22);
    puVar2 = puVar1;
    if (iVar15 == 0) {
      puVar2 = puVar22;
    }
    puVar4 = puVar22;
    puVar5 = puVar23;
    if (iVar14 == 0) {
      puVar4 = puVar1;
      puVar5 = puVar2;
      puVar1 = puVar23;
    }
    puVar23 = param_1;
    if (iVar15 == 0) {
      puVar23 = puVar4;
      puVar22 = param_1;
    }
    iVar14 = FUN_103947af8(puVar23,puVar5);
    puVar2 = puVar23;
    if (iVar14 == 0) {
      puVar2 = puVar5;
    }
    ppppuVar27 = (undefined ****)*puVar1;
    uVar28 = puVar1[3];
    ppppuVar29 = (undefined ****)puVar1[2];
    if (iVar14 == 0) {
      puVar5 = puVar23;
    }
    appppuStack_9f8[(long)pppuVar16 * 6 + 2] = (undefined ****)puVar1[1];
    appppuStack_9f8[(long)pppuVar16 * 6 + 1] = ppppuVar27;
    appppuStack_9f8[(long)pppuVar16 * 6U + 4] = (undefined ****)uVar28;
    appppuStack_9f8[(long)pppuVar16 * 6 + 3] = ppppuVar29;
    uVar28 = puVar1[4];
    uVar32 = puVar2[1];
    uVar30 = *puVar2;
    uVar35 = puVar2[3];
    uVar33 = puVar2[2];
    appppuStack_9f8[(long)pppuVar16 * 6 + 6] = (undefined ****)puVar1[5];
    appppuStack_9f8[(long)pppuVar16 * 6 + 5] = (undefined ****)uVar28;
    appppuStack_9f8[(long)pppuVar16 * 6 + 8] = (undefined ****)uVar32;
    appppuStack_9f8[(long)pppuVar16 * 6 + 7] = (undefined ****)uVar30;
    uVar30 = puVar2[5];
    uVar28 = puVar2[4];
    appppuStack_9f8[(long)pppuVar16 * 6 + 10] = (undefined ****)uVar35;
    appppuStack_9f8[(long)pppuVar16 * 6 + 9] = (undefined ****)uVar33;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0xc] = (undefined ****)uVar30;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0xb] = (undefined ****)uVar28;
    uVar33 = puVar5[3];
    uVar32 = puVar5[2];
    uVar30 = puVar5[5];
    uVar28 = puVar5[4];
    uVar35 = *puVar5;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0xe] = (undefined ****)puVar5[1];
    appppuStack_9f8[(long)pppuVar16 * 6 + 0xd] = (undefined ****)uVar35;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x10] = (undefined ****)uVar33;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0xf] = (undefined ****)uVar32;
    uVar33 = puVar22[1];
    uVar32 = *puVar22;
    uVar36 = puVar22[3];
    uVar35 = puVar22[2];
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x12] = (undefined ****)uVar30;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x11] = (undefined ****)uVar28;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x14] = (undefined ****)uVar33;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x13] = (undefined ****)uVar32;
    uVar30 = puVar22[5];
    uVar28 = puVar22[4];
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x16] = (undefined ****)uVar36;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x15] = (undefined ****)uVar35;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x18] = (undefined ****)uVar30;
    appppuStack_9f8[(long)pppuVar16 * 6 + 0x17] = (undefined ****)uVar28;
    apppppuStack_a38[0] = (undefined *****)0x4;
    if (apppppuStack_a38[7] < (undefined ***)0x5) goto LAB_10394bd80;
  }
  lVar21 = (long)apppppuStack_a38[0] * 0x30;
  pppppuVar17 = apppppuStack_a38[0];
  do {
    pppuVar16 = (undefined ***)((long)pppppuVar17 + 1);
    puVar22 = apppppuStack_a38[3] + (long)pppppuVar17 * 6;
    pppppuVar26 = appppuStack_9f8 + (long)pppppuVar17 * 6 + 1;
    ppppuVar27 = (undefined ****)*puVar22;
    uVar28 = puVar22[3];
    ppppuVar29 = (undefined ****)puVar22[2];
    appppuStack_9f8[(long)pppppuVar17 * 6 + 2] = (undefined ****)puVar22[1];
    *pppppuVar26 = ppppuVar27;
    appppuStack_9f8[(long)pppppuVar17 * 6U + 4] = (undefined ****)uVar28;
    appppuStack_9f8[(long)pppppuVar17 * 6 + 3] = ppppuVar29;
    uVar28 = puVar22[4];
    appppuStack_9f8[(long)pppppuVar17 * 6 + 6] = (undefined ****)puVar22[5];
    appppuStack_9f8[(long)pppppuVar17 * 6 + 5] = (undefined ****)uVar28;
    pppppuStack_e0 = appppuStack_9f8 + (long)pppppuVar17 * 6U + 4;
    ppppuStack_e8 = (undefined ****)&DAT_1048e978c;
    ppppuStack_d8 = (undefined ****)&DAT_1048e978c;
    pppppuStack_f0 = pppppuVar26;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_a0,s___108b03abb,&pppppuStack_f0);
    pppppuStack_e0 = (undefined *****)(apppppuStack_a38 + (long)pppppuVar17 * 6U + 6);
    ppppuStack_e8 = (undefined ****)&DAT_1048e978c;
    ppppuStack_d8 = (undefined ****)&DAT_1048e978c;
    pppppuStack_f0 = (undefined *****)(apppppuStack_a38 + (long)pppppuVar17 * 6U + 3);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pppppuStack_88,s___108b03abb,&pppppuStack_f0);
    puVar10 = puStack_80;
    uVar28 = uStack_98;
    lVar8 = (long)pppppuStack_90 - (long)pppppuStack_78;
    pppppuVar25 = pppppuStack_90;
    if (pppppuStack_78 <= pppppuStack_90) {
      pppppuVar25 = pppppuStack_78;
    }
    iVar14 = _memcmp(uStack_98,puStack_80,pppppuVar25);
    if (pppppuStack_88 != (undefined *****)0x0) {
      _free(puVar10);
    }
    if (lStack_a0 != 0) {
      _free(uVar28);
    }
    if (iVar14 != 0) {
      lVar8 = (long)iVar14;
    }
    if (lVar8 < 0) {
      ppppuStack_e8 = appppuStack_9f8[(long)pppppuVar17 * 6 + 2];
      pppppuStack_f0 = (undefined *****)*pppppuVar26;
      ppppuStack_d8 = appppuStack_9f8[(long)pppppuVar17 * 6U + 4];
      pppppuStack_e0 = (undefined *****)appppuStack_9f8[(long)pppppuVar17 * 6 + 3];
      ppppuStack_c8 = appppuStack_9f8[(long)pppppuVar17 * 6 + 6];
      ppppuStack_d0 = appppuStack_9f8[(long)pppppuVar17 * 6 + 5];
      lVar8 = lVar21;
      do {
        lVar24 = lVar8;
        pppppuVar17 = appppuStack_9f8 + 1;
        uVar28 = *(undefined8 *)((long)apppppuStack_a38 + lVar24 + 0x18U);
        uVar32 = *(undefined8 *)((long)apppppuStack_a38 + lVar24 + 0x30U);
        uVar30 = *(undefined8 *)((long)apppppuStack_a38 + lVar24 + 0x28U);
        *(undefined8 *)((long)appppuStack_9f8 + lVar24 + 0x10) =
             *(undefined8 *)((long)apppppuStack_a38 + lVar24 + 0x20U);
        *(undefined8 *)((long)pppppuVar17 + lVar24) = uVar28;
        *(undefined8 *)((long)appppuStack_9f8 + lVar24 + 0x20U) = uVar32;
        *(undefined8 *)((long)appppuStack_9f8 + lVar24 + 0x18) = uVar30;
        *(undefined8 *)((long)appppuStack_9f8 + lVar24 + 0x30U) =
             *(undefined8 *)((long)appppuStack_9f8 + lVar24);
        *(undefined8 *)((long)appppuStack_9f8 + lVar24 + 0x28U) =
             *(undefined8 *)((long)appppuStack_9f8 + lVar24 + -8);
        if (lVar24 + -0x30 == 0) goto LAB_10394bbd0;
        pppppuStack_88 = (undefined *****)&pppppuStack_f0;
        puStack_80 = &DAT_1048e978c;
        puStack_70 = &DAT_1048e978c;
        pppppuStack_78 = &ppppuStack_d8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_b8,s___108b03abb,&pppppuStack_88);
        pppppuStack_88 = (undefined *****)((long)appppuStack_a50 + lVar24);
        pppppuStack_78 = (undefined *****)((long)appppuStack_a50 + lVar24 + 0x18);
        puStack_80 = &DAT_1048e978c;
        puStack_70 = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_a0,s___108b03abb,&pppppuStack_88);
        uVar30 = uStack_98;
        uVar28 = uStack_b0;
        lVar7 = (long)pppppuStack_a8 - (long)pppppuStack_90;
        pppppuVar17 = pppppuStack_a8;
        if (pppppuStack_90 <= pppppuStack_a8) {
          pppppuVar17 = pppppuStack_90;
        }
        iVar14 = _memcmp(uStack_b0,uStack_98,pppppuVar17);
        if (lStack_a0 != 0) {
          _free(uVar30);
        }
        if (lStack_b8 != 0) {
          _free(uVar28);
        }
        if (iVar14 != 0) {
          lVar7 = (long)iVar14;
        }
        lVar8 = lVar24 + -0x30;
      } while (lVar7 < 0);
      pppppuVar17 = (undefined *****)((long)apppppuStack_a38 + lVar24 + 0x18U);
LAB_10394bbd0:
      ppppuVar27 = ppppuStack_d8;
      pppppuVar25 = pppppuStack_e0;
      pppppuVar26 = pppppuStack_f0;
      pppppuVar17[1] = ppppuStack_e8;
      *pppppuVar17 = (undefined ****)pppppuVar26;
      pppppuVar17[3] = ppppuVar27;
      pppppuVar17[2] = (undefined ****)pppppuVar25;
      ppppuVar27 = ppppuStack_d0;
      pppppuVar17[5] = ppppuStack_c8;
      pppppuVar17[4] = ppppuVar27;
    }
    lVar21 = lVar21 + 0x30;
    pppppuVar17 = (undefined *****)pppuVar16;
  } while (pppuVar16 < apppppuStack_a38[7]);
LAB_10394bd80:
  ppppuVar27 = appppuStack_9f8[0];
  pppppuVar26 = apppppuStack_a38[0];
  pppppuVar17 = appppuStack_9f8 + (long)appppuStack_9f8[0] * 2 + 1;
  apppppuStack_a38[2] = (undefined *****)(uStack_a40 - (long)apppppuStack_a38[7]);
  if (apppppuStack_a38[0] < apppppuStack_a38[2]) {
    apppppuStack_a38[1] = apppppuStack_a38[3] + (long)appppuStack_9f8[0] * 2;
    appppuStack_9f8[0] = (undefined ****)&ppppuStack_d8;
    lVar21 = (long)apppppuStack_a38[0] * 0x30;
    apppppuStack_a38[6] = (undefined *****)0x30;
    apppppuStack_a38[5] = pppppuVar17;
    pppppuVar25 = apppppuStack_a38[0];
    do {
      apppppuStack_a38[4] = (undefined *****)((long)pppppuVar25 + 1);
      puVar22 = apppppuStack_a38[1] + (long)pppppuVar25 * 6;
      pppppuVar25 = pppppuVar17 + (long)pppppuVar25 * 6;
      ppppuVar29 = (undefined ****)*puVar22;
      ppppuVar34 = (undefined ****)puVar22[3];
      ppppuVar31 = (undefined ****)puVar22[2];
      pppppuVar25[1] = (undefined ****)puVar22[1];
      *pppppuVar25 = ppppuVar29;
      pppppuVar25[3] = ppppuVar34;
      pppppuVar25[2] = ppppuVar31;
      ppppuVar29 = (undefined ****)puVar22[4];
      pppppuVar25[5] = (undefined ****)puVar22[5];
      pppppuVar25[4] = ppppuVar29;
      pppppuStack_e0 = pppppuVar25 + 3;
      ppppuStack_e8 = (undefined ****)&DAT_1048e978c;
      ppppuStack_d8 = (undefined ****)&DAT_1048e978c;
      pppppuStack_f0 = pppppuVar25;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_a0,s___108b03abb,&pppppuStack_f0);
      pppppuStack_e0 = pppppuVar25 + -3;
      ppppuStack_e8 = (undefined ****)&DAT_1048e978c;
      ppppuStack_d8 = (undefined ****)&DAT_1048e978c;
      pppppuStack_f0 = pppppuVar25 + -6;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pppppuStack_88,s___108b03abb,&pppppuStack_f0);
      puVar10 = puStack_80;
      uVar28 = uStack_98;
      lVar8 = (long)pppppuStack_90 - (long)pppppuStack_78;
      pppppuVar20 = pppppuStack_90;
      if (pppppuStack_78 <= pppppuStack_90) {
        pppppuVar20 = pppppuStack_78;
      }
      iVar14 = _memcmp(uStack_98,puStack_80,pppppuVar20);
      if (pppppuStack_88 != (undefined *****)0x0) {
        _free(puVar10);
      }
      if (lStack_a0 != 0) {
        _free(uVar28);
      }
      if (iVar14 != 0) {
        lVar8 = (long)iVar14;
      }
      if (lVar8 < 0) {
        ppppuStack_e8 = pppppuVar25[1];
        pppppuStack_f0 = (undefined *****)*pppppuVar25;
        ppppuStack_d8 = pppppuVar25[3];
        pppppuStack_e0 = (undefined *****)pppppuVar25[2];
        ppppuStack_c8 = pppppuVar25[5];
        ppppuStack_d0 = pppppuVar25[4];
        pppppuVar20 = apppppuStack_a38[5];
        pppppuVar25 = apppppuStack_a38[6];
        do {
          pppppuVar6 = pppppuVar20 + (long)pppppuVar26 * 6;
          pppppuVar6[1] = pppppuVar6[-5];
          *pppppuVar6 = pppppuVar6[-6];
          pppppuVar6[3] = pppppuVar6[-3];
          pppppuVar6[2] = pppppuVar6[-4];
          pppppuVar6[5] = pppppuVar6[-1];
          pppppuVar6[4] = pppppuVar6[-2];
          pppppuVar18 = pppppuVar17;
          if (lVar21 - (long)pppppuVar25 == 0) goto LAB_10394bdf0;
          pppppuStack_88 = (undefined *****)&pppppuStack_f0;
          puStack_80 = &DAT_1048e978c;
          pppppuStack_78 = (undefined *****)appppuStack_9f8[0];
          puStack_70 = &DAT_1048e978c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_b8,s___108b03abb,&pppppuStack_88);
          pppppuStack_88 = pppppuVar6 + -0xc;
          pppppuStack_78 = pppppuVar20 + (long)pppppuVar26 * 6 + -9;
          puStack_80 = &DAT_1048e978c;
          puStack_70 = &DAT_1048e978c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_a0,s___108b03abb,&pppppuStack_88);
          uVar30 = uStack_98;
          uVar28 = uStack_b0;
          lVar8 = (long)pppppuStack_a8 - (long)pppppuStack_90;
          pppppuVar6 = pppppuStack_a8;
          if (pppppuStack_90 <= pppppuStack_a8) {
            pppppuVar6 = pppppuStack_90;
          }
          iVar14 = _memcmp(uStack_b0,uStack_98,pppppuVar6);
          if (lStack_a0 != 0) {
            _free(uVar30);
          }
          if (lStack_b8 != 0) {
            _free(uVar28);
          }
          if (iVar14 != 0) {
            lVar8 = (long)iVar14;
          }
          pppppuVar20 = pppppuVar20 + -6;
          pppppuVar25 = pppppuVar25 + 6;
        } while (lVar8 < 0);
        pppppuVar18 = pppppuVar20 + (long)pppppuVar26 * 6;
LAB_10394bdf0:
        ppppuVar29 = ppppuStack_d8;
        pppppuVar20 = pppppuStack_e0;
        pppppuVar25 = pppppuStack_f0;
        pppppuVar18[1] = ppppuStack_e8;
        *pppppuVar18 = (undefined ****)pppppuVar25;
        pppppuVar18[3] = ppppuVar29;
        pppppuVar18[2] = (undefined ****)pppppuVar20;
        ppppuVar29 = ppppuStack_d0;
        pppppuVar18[5] = ppppuStack_c8;
        pppppuVar18[4] = ppppuVar29;
      }
      apppppuStack_a38[6] = apppppuStack_a38[6] + 0xfffffffffffffffa;
      apppppuStack_a38[5] = apppppuStack_a38[5] + 6;
      pppppuVar25 = apppppuStack_a38[4];
    } while (apppppuStack_a38[4] < apppppuStack_a38[2]);
  }
  pppppuVar20 = apppppuStack_a38[3];
  uVar9 = uStack_a40;
  lVar21 = uStack_a40 * 0x30;
  pppppuVar25 = appppuStack_9f8 + 1;
  pppppuVar26 = pppppuVar25 + uStack_a40 * 6 + -6;
  pppppuVar18 = (undefined *****)(apppppuStack_a38 + (long)ppppuVar27 * 2U + 3);
  pppppuVar6 = apppppuStack_a38[3];
  do {
    puVar22 = pppppuVar6;
    lVar21 = lVar21 + -0x30;
    iVar14 = FUN_103947af8(pppppuVar17,pppppuVar25);
    pppppuVar6 = pppppuVar17;
    if (iVar14 == 0) {
      pppppuVar6 = pppppuVar25;
    }
    ppppuVar27 = *pppppuVar6;
    ppppuVar31 = pppppuVar6[3];
    ppppuVar29 = pppppuVar6[2];
    puVar22[1] = pppppuVar6[1];
    *puVar22 = ppppuVar27;
    puVar22[3] = ppppuVar31;
    puVar22[2] = ppppuVar29;
    ppppuVar27 = pppppuVar6[4];
    puVar22[5] = pppppuVar6[5];
    puVar22[4] = ppppuVar27;
    uVar13 = FUN_103947af8(pppppuVar26,pppppuVar18);
    puVar23 = (undefined8 *)((long)pppppuVar20 + lVar21);
    lVar8 = 0;
    if (iVar14 == 0) {
      lVar8 = 0x30;
    }
    pppppuVar25 = (undefined *****)((long)pppppuVar25 + lVar8);
    lVar8 = 0x30;
    if (iVar14 == 0) {
      lVar8 = 0;
    }
    pppppuVar17 = (undefined *****)((long)pppppuVar17 + lVar8);
    pppppuVar6 = pppppuVar18;
    if (uVar13 == 0) {
      pppppuVar6 = pppppuVar26;
    }
    ppppuVar27 = *pppppuVar6;
    ppppuVar31 = pppppuVar6[3];
    ppppuVar29 = pppppuVar6[2];
    puVar23[1] = pppppuVar6[1];
    *puVar23 = ppppuVar27;
    puVar23[3] = ppppuVar31;
    puVar23[2] = ppppuVar29;
    ppppuVar27 = pppppuVar6[4];
    puVar23[5] = pppppuVar6[5];
    puVar23[4] = ppppuVar27;
    pppppuVar19 = pppppuVar26 + (ulong)uVar13 * 6;
    pppppuVar26 = pppppuVar19 + -6;
    pppppuVar18 = pppppuVar18 + (long)(int)-(uVar13 & 1) * 6;
    apppppuStack_a38[7] = (undefined *****)((long)apppppuStack_a38[7] - 1);
    pppppuVar6 = (undefined *****)(puVar22 + 6);
  } while (apppppuStack_a38[7] != (undefined *****)0x0);
  if ((uVar9 & 1) != 0) {
    bVar12 = pppppuVar18 + 6 <= pppppuVar25;
    pppppuVar26 = pppppuVar25;
    if (bVar12) {
      pppppuVar26 = pppppuVar17;
    }
    ppppuVar27 = *pppppuVar26;
    ppppuVar31 = pppppuVar26[3];
    ppppuVar29 = pppppuVar26[2];
    puVar22[7] = pppppuVar26[1];
    puVar22[6] = ppppuVar27;
    puVar22[9] = ppppuVar31;
    puVar22[8] = ppppuVar29;
    ppppuVar27 = pppppuVar26[4];
    puVar22[0xb] = pppppuVar26[5];
    puVar22[10] = ppppuVar27;
    lVar21 = 0x30;
    if (bVar12) {
      lVar21 = 0;
    }
    pppppuVar25 = (undefined *****)((long)pppppuVar25 + lVar21);
    lVar21 = 0;
    if (bVar12) {
      lVar21 = 0x30;
    }
    pppppuVar17 = (undefined *****)((long)pppppuVar17 + lVar21);
  }
  if ((pppppuVar25 == pppppuVar18 + 6) && (pppppuVar17 == pppppuVar19)) {
    return;
  }
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10394c0e0);
  (*pcVar11)();
}

