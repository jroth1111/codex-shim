
/* WARNING: Possible PIC construction at 0x000103959c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103959c88) */

void __ZN4core5slice4sort8unstable7ipnsort17h5e0362d4a14316ebE(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x19;
  long lVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 *unaff_x22;
  undefined8 *puVar21;
  ulong unaff_x23;
  ulong uVar22;
  undefined8 unaff_x24;
  ulong uVar23;
  ulong unaff_x25;
  ulong *puVar24;
  undefined8 *unaff_x26;
  undefined8 *puVar25;
  long unaff_x27;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  if (param_2 < 2) {
    return;
  }
  uVar10 = param_1[0xb];
  uVar23 = param_1[0xc];
  uVar14 = param_1[2];
  uVar22 = uVar23;
  if (uVar14 <= uVar23) {
    uVar22 = uVar14;
  }
  iVar8 = _memcmp(uVar10,param_1[1],uVar22);
  lVar19 = uVar23 - uVar14;
  if (iVar8 != 0) {
    lVar19 = (long)iVar8;
  }
  if (lVar19 < 0) {
    if (param_2 != 2) {
      puVar24 = param_1 + 0x16;
      uVar22 = 2;
      do {
        uVar2 = puVar24[-1];
        uVar13 = *puVar24;
        uVar14 = uVar13;
        if (uVar23 <= uVar13) {
          uVar14 = uVar23;
        }
        iVar8 = _memcmp(uVar2,uVar10,uVar14);
        lVar20 = uVar13 - uVar23;
        if (iVar8 != 0) {
          lVar20 = (long)iVar8;
        }
        if (-1 < lVar20) goto LAB_103957810;
        puVar24 = puVar24 + 10;
        uVar22 = uVar22 + 1;
        uVar10 = uVar2;
        uVar23 = uVar13;
      } while (param_2 != uVar22);
      goto LAB_103957818;
    }
  }
  else if (param_2 != 2) {
    puVar24 = param_1 + 0x16;
    uVar22 = 2;
    do {
      uVar2 = puVar24[-1];
      uVar13 = *puVar24;
      uVar14 = uVar13;
      if (uVar23 <= uVar13) {
        uVar14 = uVar23;
      }
      iVar8 = _memcmp(uVar2,uVar10,uVar14);
      lVar20 = uVar13 - uVar23;
      if (iVar8 != 0) {
        lVar20 = (long)iVar8;
      }
      if (lVar20 < 0) goto LAB_103957810;
      puVar24 = puVar24 + 10;
      uVar22 = uVar22 + 1;
      uVar10 = uVar2;
      uVar23 = uVar13;
    } while (param_2 != uVar22);
    goto LAB_103957818;
  }
  uVar22 = 2;
LAB_103957810:
  if (uVar22 != param_2) {
    uVar22 = (ulong)((int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e);
    uVar12 = 0;
    puVar6 = (undefined1 *)register0x00000008;
    do {
      *(undefined8 **)(puVar6 + -0x60) = unaff_x28;
      *(long *)(puVar6 + -0x58) = unaff_x27;
      *(undefined8 **)(puVar6 + -0x50) = unaff_x26;
      *(ulong *)(puVar6 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
      *(ulong *)(puVar6 + -0x38) = unaff_x23;
      *(undefined8 **)(puVar6 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
      *(long *)(puVar6 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar6 + -8) = unaff_x30;
      unaff_x29 = puVar6 + -0x10;
      uVar14 = param_2;
      while( true ) {
        if (uVar14 < 0x21) {
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
          *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
          *(undefined8 *)(puVar6 + -0x40) = *(undefined8 *)(puVar6 + -0x40);
          *(undefined8 *)(puVar6 + -0x38) = *(undefined8 *)(puVar6 + -0x38);
          *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
          *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
          *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
          *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
          *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
          *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
          *(undefined8 *)(puVar6 + -0xfb0) = 0;
          if (uVar14 < 2) {
            return;
          }
          uVar22 = uVar14 >> 1;
          puVar26 = param_1 + uVar22 * 10;
          puVar16 = (undefined8 *)(puVar6 + uVar22 * 0x50 + -0xf70);
          *(undefined8 **)(puVar6 + -4000) = puVar16;
          *(undefined8 **)(puVar6 + -0xf78) = param_1;
          *(undefined8 **)(puVar6 + -0xf88) = puVar26;
          if (uVar14 < 8) {
            uVar12 = param_1[4];
            uVar15 = param_1[7];
            uVar28 = param_1[6];
            *(undefined8 *)(puVar6 + -0xf48) = param_1[5];
            *(undefined8 *)(puVar6 + -0xf50) = uVar12;
            *(undefined8 *)(puVar6 + -0xf38) = uVar15;
            *(undefined8 *)(puVar6 + -0xf40) = uVar28;
            uVar12 = param_1[8];
            *(undefined8 *)(puVar6 + -0xf28) = param_1[9];
            *(undefined8 *)(puVar6 + -0xf30) = uVar12;
            uVar15 = *param_1;
            uVar28 = param_1[3];
            uVar12 = param_1[2];
            *(undefined8 *)(puVar6 + -0xf68) = param_1[1];
            *(undefined8 *)(puVar6 + -0xf70) = uVar15;
            *(undefined8 *)(puVar6 + -0xf58) = uVar28;
            *(undefined8 *)(puVar6 + -0xf60) = uVar12;
            uVar12 = puVar26[6];
            uVar15 = puVar26[9];
            uVar28 = puVar26[8];
            puVar16[7] = puVar26[7];
            puVar16[6] = uVar12;
            puVar16[9] = uVar15;
            puVar16[8] = uVar28;
            uVar12 = puVar26[2];
            uVar15 = puVar26[5];
            uVar28 = puVar26[4];
            puVar16[3] = puVar26[3];
            puVar16[2] = uVar12;
            puVar16[5] = uVar15;
            puVar16[4] = uVar28;
            uVar12 = *puVar26;
            uVar10 = 1;
            puVar16[1] = puVar26[1];
            *puVar16 = uVar12;
          }
          else {
            func_0x000103949774(param_1,puVar6 + -0xf70);
            func_0x000103949774(puVar26,puVar16);
            uVar10 = 4;
          }
          *(ulong *)(puVar6 + -0xfb0) = uVar14;
          *(ulong *)(puVar6 + -0xfa8) = uVar22;
          *(ulong *)(puVar6 + -0xf80) = uVar14 - uVar22;
          *(ulong *)(puVar6 + -0xf98) = uVar10 * 5;
          if (uVar22 <= uVar10) goto LAB_10394b68c;
          lVar19 = *(long *)(puVar6 + -0xf98) << 4;
          uVar14 = uVar10;
          goto LAB_10394b5d0;
        }
        iVar8 = (int)uVar22;
        if (iVar8 == 0) {
          lVar19 = uVar14 + (uVar14 >> 1);
          if (lVar19 == 0) {
            return;
          }
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
          *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
          *(undefined8 *)(puVar6 + -0x40) = *(undefined8 *)(puVar6 + -0x40);
          *(undefined8 *)(puVar6 + -0x38) = *(undefined8 *)(puVar6 + -0x38);
          *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
          *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
          *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
          *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
          *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
          *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
          *(ulong *)(puVar6 + -0xc0) = uVar14;
          goto LAB_103958394;
        }
        *(undefined8 **)(puVar6 + -200) = param_1;
        *(undefined8 *)(puVar6 + -0xc0) = uVar12;
        puVar26 = param_1 + (uVar14 >> 3) * 0x28;
        puVar16 = param_1 + (uVar14 >> 3) * 0x46;
        if (uVar14 < 0x40) {
          *(int *)(puVar6 + -0xb4) = iVar8;
          uVar12 = param_1[1];
          uVar10 = param_1[2];
          uVar28 = puVar26[1];
          uVar23 = puVar26[2];
          uVar22 = uVar10;
          if (uVar23 <= uVar10) {
            uVar22 = uVar23;
          }
          *(undefined8 *)(puVar6 + -0xd0) = uVar28;
          iVar8 = _memcmp(uVar12,uVar28,uVar22);
          uVar22 = uVar10 - uVar23;
          if (iVar8 != 0) {
            uVar22 = (long)iVar8;
          }
          uVar28 = puVar16[1];
          uVar13 = puVar16[2];
          uVar2 = uVar10;
          if (uVar13 <= uVar10) {
            uVar2 = uVar13;
          }
          iVar8 = *(int *)(puVar6 + -0xb4);
          iVar9 = _memcmp(uVar12,uVar28,uVar2);
          uVar10 = uVar10 - uVar13;
          if (iVar9 != 0) {
            uVar10 = (long)iVar9;
          }
          param_1 = *(undefined8 **)(puVar6 + -200);
          puVar11 = param_1;
          if (-1 < (long)(uVar10 ^ uVar22)) {
            uVar10 = uVar23;
            if (uVar13 <= uVar23) {
              uVar10 = uVar13;
            }
            iVar9 = _memcmp(*(undefined8 *)(puVar6 + -0xd0),uVar28,uVar10);
            uVar10 = uVar23 - uVar13;
            if (iVar9 != 0) {
              uVar10 = (long)iVar9;
            }
            puVar11 = puVar16;
            if (-1 < (long)(uVar10 ^ uVar22)) {
              puVar11 = puVar26;
            }
          }
        }
        else {
          puVar11 = (undefined8 *)func_0x000103948cf4(param_1,puVar26,puVar16);
        }
        *(int *)(puVar6 + -0xb4) = iVar8 + -1;
        *(ulong *)(puVar6 + -0xd0) = uVar14;
        lVar19 = *(long *)(puVar6 + -0xc0);
        if (lVar19 == 0) break;
        puVar26 = (undefined8 *)((long)param_1 + ((long)puVar11 - (long)param_1));
        uVar10 = *(ulong *)(lVar19 + 0x10);
        uVar23 = puVar26[2];
        uVar22 = uVar10;
        if (uVar23 <= uVar10) {
          uVar22 = uVar23;
        }
        iVar8 = _memcmp(*(undefined8 *)(lVar19 + 8),puVar26[1],uVar22);
        lVar19 = uVar10 - uVar23;
        if (iVar8 != 0) {
          lVar19 = (long)iVar8;
        }
        if (lVar19 < 0) break;
        uVar22 = 0;
        uVar28 = param_1[1];
        uVar12 = *param_1;
        uVar29 = param_1[3];
        uVar15 = param_1[2];
        uVar31 = param_1[5];
        uVar30 = param_1[4];
        uVar32 = param_1[6];
        uVar34 = param_1[9];
        uVar33 = param_1[8];
        *(undefined8 *)(puVar6 + -0x78) = param_1[7];
        *(undefined8 *)(puVar6 + -0x80) = uVar32;
        *(undefined8 *)(puVar6 + -0x68) = uVar34;
        *(undefined8 *)(puVar6 + -0x70) = uVar33;
        *(undefined8 *)(puVar6 + -0x98) = uVar29;
        *(undefined8 *)(puVar6 + -0xa0) = uVar15;
        *(undefined8 *)(puVar6 + -0x88) = uVar31;
        *(undefined8 *)(puVar6 + -0x90) = uVar30;
        *(undefined8 *)(puVar6 + -0xa8) = uVar28;
        *(undefined8 *)(puVar6 + -0xb0) = uVar12;
        uVar28 = puVar26[1];
        uVar12 = *puVar26;
        uVar29 = puVar26[3];
        uVar15 = puVar26[2];
        uVar31 = puVar26[5];
        uVar30 = puVar26[4];
        uVar32 = puVar26[6];
        uVar34 = puVar26[9];
        uVar33 = puVar26[8];
        param_1[7] = puVar26[7];
        param_1[6] = uVar32;
        param_1[9] = uVar34;
        param_1[8] = uVar33;
        param_1[3] = uVar29;
        param_1[2] = uVar15;
        param_1[5] = uVar31;
        param_1[4] = uVar30;
        param_1[1] = uVar28;
        *param_1 = uVar12;
        uVar28 = *(undefined8 *)(puVar6 + -0xa8);
        uVar12 = *(undefined8 *)(puVar6 + -0xb0);
        uVar29 = *(undefined8 *)(puVar6 + -0x98);
        uVar15 = *(undefined8 *)(puVar6 + -0xa0);
        uVar31 = *(undefined8 *)(puVar6 + -0x88);
        uVar30 = *(undefined8 *)(puVar6 + -0x90);
        uVar32 = *(undefined8 *)(puVar6 + -0x80);
        uVar34 = *(undefined8 *)(puVar6 + -0x68);
        uVar33 = *(undefined8 *)(puVar6 + -0x70);
        puVar26[7] = *(undefined8 *)(puVar6 + -0x78);
        puVar26[6] = uVar32;
        puVar26[9] = uVar34;
        puVar26[8] = uVar33;
        puVar26[3] = uVar29;
        puVar26[2] = uVar15;
        puVar26[5] = uVar31;
        puVar26[4] = uVar30;
        puVar26[1] = uVar28;
        *puVar26 = uVar12;
        uVar12 = param_1[0xe];
        uVar15 = param_1[0x11];
        uVar28 = param_1[0x10];
        *(undefined8 *)(puVar6 + -0x88) = param_1[0xf];
        *(undefined8 *)(puVar6 + -0x90) = uVar12;
        *(undefined8 *)(puVar6 + -0x78) = uVar15;
        *(undefined8 *)(puVar6 + -0x80) = uVar28;
        uVar12 = param_1[0x12];
        *(undefined8 *)(puVar6 + -0x68) = param_1[0x13];
        *(undefined8 *)(puVar6 + -0x70) = uVar12;
        uVar15 = param_1[10];
        uVar28 = param_1[0xd];
        uVar12 = param_1[0xc];
        *(undefined8 *)(puVar6 + -0xa8) = param_1[0xb];
        *(undefined8 *)(puVar6 + -0xb0) = uVar15;
        *(undefined8 *)(puVar6 + -0x98) = uVar28;
        *(undefined8 *)(puVar6 + -0xa0) = uVar12;
        uVar12 = param_1[1];
        uVar10 = param_1[2];
        lVar19 = uVar14 * 0x50 + -0xa0;
        puVar26 = param_1 + 0x14;
        lVar20 = uVar14 * 0x50 + -0xf0;
        do {
          lVar18 = lVar20;
          lVar17 = lVar19;
          uVar2 = puVar26[2];
          uVar23 = uVar10;
          if (uVar2 <= uVar10) {
            uVar23 = uVar2;
          }
          iVar8 = _memcmp(uVar12,puVar26[1],uVar23);
          uVar23 = uVar10 - uVar2;
          if (iVar8 != 0) {
            uVar23 = (long)iVar8;
          }
          puVar11 = param_1 + uVar22 * 10 + 10;
          uVar15 = puVar11[1];
          uVar28 = *puVar11;
          uVar30 = puVar11[3];
          uVar29 = puVar11[2];
          uVar32 = puVar11[5];
          uVar31 = puVar11[4];
          uVar33 = puVar11[6];
          uVar35 = puVar11[9];
          uVar34 = puVar11[8];
          puVar26[-3] = puVar11[7];
          puVar26[-4] = uVar33;
          puVar26[-1] = uVar35;
          puVar26[-2] = uVar34;
          puVar26[-7] = uVar30;
          puVar26[-8] = uVar29;
          puVar26[-5] = uVar32;
          puVar26[-6] = uVar31;
          puVar26[-9] = uVar15;
          puVar26[-10] = uVar28;
          uVar28 = puVar26[6];
          uVar29 = puVar26[9];
          uVar15 = puVar26[8];
          uVar33 = puVar26[3];
          uVar32 = puVar26[2];
          uVar31 = puVar26[5];
          uVar30 = puVar26[4];
          puVar11[7] = puVar26[7];
          puVar11[6] = uVar28;
          puVar11[9] = uVar29;
          puVar11[8] = uVar15;
          puVar11[3] = uVar33;
          puVar11[2] = uVar32;
          puVar11[5] = uVar31;
          puVar11[4] = uVar30;
          uVar22 = uVar22 - ((long)~uVar23 >> 0x3f);
          puVar16 = puVar26 + 10;
          uVar28 = *puVar26;
          puVar11[1] = puVar26[1];
          *puVar11 = uVar28;
          lVar19 = lVar17 + -0x50;
          puVar26 = puVar16;
          lVar20 = lVar18 + -0x50;
        } while (puVar16 < param_1 + uVar14 * 10);
        do {
          puVar26 = (undefined8 *)(puVar6 + -0xb0);
          if (lVar18 != 0) {
            puVar26 = puVar16;
          }
          uVar23 = puVar26[2];
          uVar14 = uVar10;
          if (uVar23 <= uVar10) {
            uVar14 = uVar23;
          }
          iVar8 = _memcmp(uVar12,puVar26[1],uVar14);
          uVar14 = uVar10 - uVar23;
          if (iVar8 != 0) {
            uVar14 = (long)iVar8;
          }
          puVar11 = param_1 + uVar22 * 10 + 10;
          uVar30 = puVar11[7];
          uVar29 = puVar11[6];
          uVar15 = puVar11[9];
          uVar28 = puVar11[8];
          uVar34 = puVar11[3];
          uVar33 = puVar11[2];
          uVar32 = puVar11[5];
          uVar31 = puVar11[4];
          uVar35 = *puVar11;
          puVar16[-9] = puVar11[1];
          puVar16[-10] = uVar35;
          puVar16[-7] = uVar34;
          puVar16[-8] = uVar33;
          puVar16[-5] = uVar32;
          puVar16[-6] = uVar31;
          puVar16[-3] = uVar30;
          puVar16[-4] = uVar29;
          puVar16[-1] = uVar15;
          puVar16[-2] = uVar28;
          uVar28 = *puVar26;
          puVar11[1] = puVar26[1];
          *puVar11 = uVar28;
          uVar28 = puVar26[6];
          uVar29 = puVar26[9];
          uVar15 = puVar26[8];
          uVar33 = puVar26[3];
          uVar32 = puVar26[2];
          uVar31 = puVar26[5];
          uVar30 = puVar26[4];
          puVar11[7] = puVar26[7];
          puVar11[6] = uVar28;
          puVar11[9] = uVar29;
          puVar11[8] = uVar15;
          puVar11[3] = uVar33;
          puVar11[2] = uVar32;
          puVar11[5] = uVar31;
          puVar11[4] = uVar30;
          uVar22 = uVar22 - ((long)~uVar14 >> 0x3f);
          puVar16 = puVar16 + 10;
          lVar18 = lVar18 + -0x50;
          lVar17 = lVar17 + -0x50;
        } while (lVar17 != 0);
        uVar14 = *(ulong *)(puVar6 + -0xd0);
        if (uVar14 <= uVar22) goto LAB_103959cb8;
        uVar12 = 0;
        puVar16 = *(undefined8 **)(puVar6 + -200);
        uVar40 = puVar16[7];
        uVar39 = puVar16[6];
        uVar15 = puVar16[9];
        uVar28 = puVar16[8];
        puVar26 = puVar16 + uVar22 * 10;
        uVar30 = puVar26[1];
        uVar29 = *puVar26;
        uVar32 = puVar26[3];
        uVar31 = puVar26[2];
        uVar34 = puVar26[5];
        uVar33 = puVar26[4];
        uVar35 = puVar26[6];
        uVar37 = puVar26[9];
        uVar36 = puVar26[8];
        puVar16[7] = puVar26[7];
        puVar16[6] = uVar35;
        puVar16[9] = uVar37;
        puVar16[8] = uVar36;
        uVar36 = puVar16[3];
        uVar35 = puVar16[2];
        uVar38 = puVar16[5];
        uVar37 = puVar16[4];
        puVar16[3] = uVar32;
        puVar16[2] = uVar31;
        puVar16[5] = uVar34;
        puVar16[4] = uVar33;
        uVar32 = puVar16[1];
        uVar31 = *puVar16;
        puVar16[1] = uVar30;
        *puVar16 = uVar29;
        *(undefined8 *)(puVar6 + -0x78) = uVar40;
        *(undefined8 *)(puVar6 + -0x80) = uVar39;
        *(undefined8 *)(puVar6 + -0x68) = uVar15;
        *(undefined8 *)(puVar6 + -0x70) = uVar28;
        *(undefined8 *)(puVar6 + -0x98) = uVar36;
        *(undefined8 *)(puVar6 + -0xa0) = uVar35;
        *(undefined8 *)(puVar6 + -0x88) = uVar38;
        *(undefined8 *)(puVar6 + -0x90) = uVar37;
        *(undefined8 *)(puVar6 + -0xa8) = uVar32;
        *(undefined8 *)(puVar6 + -0xb0) = uVar31;
        uVar15 = *(undefined8 *)(puVar6 + -0xa8);
        uVar28 = *(undefined8 *)(puVar6 + -0xb0);
        uVar30 = *(undefined8 *)(puVar6 + -0x98);
        uVar29 = *(undefined8 *)(puVar6 + -0xa0);
        uVar32 = *(undefined8 *)(puVar6 + -0x88);
        uVar31 = *(undefined8 *)(puVar6 + -0x90);
        uVar33 = *(undefined8 *)(puVar6 + -0x80);
        uVar35 = *(undefined8 *)(puVar6 + -0x68);
        uVar34 = *(undefined8 *)(puVar6 + -0x70);
        puVar26[7] = *(undefined8 *)(puVar6 + -0x78);
        puVar26[6] = uVar33;
        puVar26[9] = uVar35;
        puVar26[8] = uVar34;
        puVar26[3] = uVar30;
        puVar26[2] = uVar29;
        puVar26[5] = uVar32;
        puVar26[4] = uVar31;
        uVar14 = ~uVar22 + uVar14;
        param_1 = puVar26 + 10;
        puVar26[1] = uVar15;
        *puVar26 = uVar28;
        uVar22 = (ulong)*(uint *)(puVar6 + -0xb4);
      }
      param_2 = 0;
      puVar26 = (undefined8 *)((long)param_1 + ((long)puVar11 - (long)param_1));
      uVar28 = param_1[1];
      uVar12 = *param_1;
      uVar29 = param_1[3];
      uVar15 = param_1[2];
      uVar31 = param_1[5];
      uVar30 = param_1[4];
      uVar32 = param_1[6];
      uVar34 = param_1[9];
      uVar33 = param_1[8];
      *(undefined8 *)(puVar6 + -0x78) = param_1[7];
      *(undefined8 *)(puVar6 + -0x80) = uVar32;
      *(undefined8 *)(puVar6 + -0x68) = uVar34;
      *(undefined8 *)(puVar6 + -0x70) = uVar33;
      *(undefined8 *)(puVar6 + -0x98) = uVar29;
      *(undefined8 *)(puVar6 + -0xa0) = uVar15;
      *(undefined8 *)(puVar6 + -0x88) = uVar31;
      *(undefined8 *)(puVar6 + -0x90) = uVar30;
      *(undefined8 *)(puVar6 + -0xa8) = uVar28;
      *(undefined8 *)(puVar6 + -0xb0) = uVar12;
      uVar28 = puVar26[1];
      uVar12 = *puVar26;
      uVar29 = puVar26[3];
      uVar15 = puVar26[2];
      uVar31 = puVar26[5];
      uVar30 = puVar26[4];
      uVar32 = puVar26[6];
      uVar34 = puVar26[9];
      uVar33 = puVar26[8];
      param_1[7] = puVar26[7];
      param_1[6] = uVar32;
      param_1[9] = uVar34;
      param_1[8] = uVar33;
      param_1[3] = uVar29;
      param_1[2] = uVar15;
      param_1[5] = uVar31;
      param_1[4] = uVar30;
      param_1[1] = uVar28;
      *param_1 = uVar12;
      uVar28 = *(undefined8 *)(puVar6 + -0xa8);
      uVar12 = *(undefined8 *)(puVar6 + -0xb0);
      uVar29 = *(undefined8 *)(puVar6 + -0x98);
      uVar15 = *(undefined8 *)(puVar6 + -0xa0);
      uVar31 = *(undefined8 *)(puVar6 + -0x88);
      uVar30 = *(undefined8 *)(puVar6 + -0x90);
      uVar32 = *(undefined8 *)(puVar6 + -0x80);
      uVar34 = *(undefined8 *)(puVar6 + -0x68);
      uVar33 = *(undefined8 *)(puVar6 + -0x70);
      puVar26[7] = *(undefined8 *)(puVar6 + -0x78);
      puVar26[6] = uVar32;
      puVar26[9] = uVar34;
      puVar26[8] = uVar33;
      puVar26[3] = uVar29;
      puVar26[2] = uVar15;
      puVar26[5] = uVar31;
      puVar26[4] = uVar30;
      puVar26[1] = uVar28;
      *puVar26 = uVar12;
      uVar12 = param_1[0xe];
      uVar15 = param_1[0x11];
      uVar28 = param_1[0x10];
      *(undefined8 *)(puVar6 + -0x88) = param_1[0xf];
      *(undefined8 *)(puVar6 + -0x90) = uVar12;
      *(undefined8 *)(puVar6 + -0x78) = uVar15;
      *(undefined8 *)(puVar6 + -0x80) = uVar28;
      uVar12 = param_1[0x12];
      *(undefined8 *)(puVar6 + -0x68) = param_1[0x13];
      *(undefined8 *)(puVar6 + -0x70) = uVar12;
      uVar15 = param_1[10];
      uVar28 = param_1[0xd];
      uVar12 = param_1[0xc];
      *(undefined8 *)(puVar6 + -0xa8) = param_1[0xb];
      *(undefined8 *)(puVar6 + -0xb0) = uVar15;
      *(undefined8 *)(puVar6 + -0x98) = uVar28;
      *(undefined8 *)(puVar6 + -0xa0) = uVar12;
      unaff_x22 = param_1 + uVar14 * 10;
      unaff_x24 = param_1[1];
      uVar22 = param_1[2];
      lVar19 = uVar14 * 0x50 + -0xa0;
      lVar20 = uVar14 * 0x50 + -0xf0;
      puVar26 = param_1 + 0x14;
      do {
        lVar18 = lVar20;
        lVar17 = lVar19;
        uVar10 = puVar26[2];
        uVar14 = uVar10;
        if (uVar22 <= uVar10) {
          uVar14 = uVar22;
        }
        iVar8 = _memcmp(puVar26[1],unaff_x24,uVar14);
        lVar19 = uVar10 - uVar22;
        if (iVar8 != 0) {
          lVar19 = (long)iVar8;
        }
        puVar16 = param_1 + param_2 * 10 + 10;
        uVar28 = puVar16[1];
        uVar12 = *puVar16;
        uVar29 = puVar16[3];
        uVar15 = puVar16[2];
        uVar31 = puVar16[5];
        uVar30 = puVar16[4];
        uVar32 = puVar16[6];
        uVar34 = puVar16[9];
        uVar33 = puVar16[8];
        puVar26[-3] = puVar16[7];
        puVar26[-4] = uVar32;
        puVar26[-1] = uVar34;
        puVar26[-2] = uVar33;
        puVar26[-7] = uVar29;
        puVar26[-8] = uVar15;
        puVar26[-5] = uVar31;
        puVar26[-6] = uVar30;
        puVar26[-9] = uVar28;
        puVar26[-10] = uVar12;
        uVar12 = puVar26[6];
        uVar15 = puVar26[9];
        uVar28 = puVar26[8];
        uVar32 = puVar26[3];
        uVar31 = puVar26[2];
        uVar30 = puVar26[5];
        uVar29 = puVar26[4];
        puVar16[7] = puVar26[7];
        puVar16[6] = uVar12;
        puVar16[9] = uVar15;
        puVar16[8] = uVar28;
        puVar16[3] = uVar32;
        puVar16[2] = uVar31;
        puVar16[5] = uVar30;
        puVar16[4] = uVar29;
        param_2 = param_2 - (lVar19 >> 0x3f);
        unaff_x26 = puVar26 + 10;
        uVar12 = *puVar26;
        puVar16[1] = puVar26[1];
        *puVar16 = uVar12;
        lVar19 = lVar17 + -0x50;
        lVar20 = lVar18 + -0x50;
        puVar26 = unaff_x26;
      } while (unaff_x26 < unaff_x22);
      do {
        puVar26 = (undefined8 *)(puVar6 + -0xb0);
        if (lVar18 != 0) {
          puVar26 = unaff_x26;
        }
        uVar14 = puVar26[2];
        unaff_x20 = uVar14 - uVar22;
        if (uVar22 <= uVar14) {
          uVar14 = uVar22;
        }
        iVar8 = _memcmp(puVar26[1],unaff_x24,uVar14);
        lVar19 = unaff_x20;
        if (iVar8 != 0) {
          lVar19 = (long)iVar8;
        }
        puVar16 = param_1 + param_2 * 10 + 10;
        uVar29 = puVar16[7];
        uVar15 = puVar16[6];
        uVar28 = puVar16[9];
        uVar12 = puVar16[8];
        uVar33 = puVar16[3];
        uVar32 = puVar16[2];
        uVar31 = puVar16[5];
        uVar30 = puVar16[4];
        uVar34 = *puVar16;
        unaff_x26[-9] = puVar16[1];
        unaff_x26[-10] = uVar34;
        unaff_x26[-7] = uVar33;
        unaff_x26[-8] = uVar32;
        unaff_x26[-5] = uVar31;
        unaff_x26[-6] = uVar30;
        unaff_x26[-3] = uVar29;
        unaff_x26[-4] = uVar15;
        unaff_x26[-1] = uVar28;
        unaff_x26[-2] = uVar12;
        uVar12 = *puVar26;
        puVar16[1] = puVar26[1];
        *puVar16 = uVar12;
        uVar12 = puVar26[6];
        uVar15 = puVar26[9];
        uVar28 = puVar26[8];
        uVar32 = puVar26[3];
        uVar31 = puVar26[2];
        uVar30 = puVar26[5];
        uVar29 = puVar26[4];
        puVar16[7] = puVar26[7];
        puVar16[6] = uVar12;
        puVar16[9] = uVar15;
        puVar16[8] = uVar28;
        puVar16[3] = uVar32;
        puVar16[2] = uVar31;
        puVar16[5] = uVar30;
        puVar16[4] = uVar29;
        param_2 = param_2 - (lVar19 >> 0x3f);
        unaff_x26 = unaff_x26 + 10;
        lVar18 = lVar18 + -0x50;
        lVar17 = lVar17 + -0x50;
      } while (lVar17 != 0);
      uVar22 = *(ulong *)(puVar6 + -0xd0);
      if (uVar22 <= param_2) {
LAB_103959cb8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103959cbc);
        (*pcVar5)();
      }
      param_1 = *(undefined8 **)(puVar6 + -200);
      uVar28 = param_1[1];
      uVar12 = *param_1;
      uVar29 = param_1[3];
      uVar15 = param_1[2];
      unaff_x19 = param_1 + param_2 * 10;
      uVar31 = param_1[5];
      uVar30 = param_1[4];
      uVar32 = param_1[6];
      uVar34 = param_1[9];
      uVar33 = param_1[8];
      *(undefined8 *)(puVar6 + -0x78) = param_1[7];
      *(undefined8 *)(puVar6 + -0x80) = uVar32;
      *(undefined8 *)(puVar6 + -0x68) = uVar34;
      *(undefined8 *)(puVar6 + -0x70) = uVar33;
      *(undefined8 *)(puVar6 + -0x98) = uVar29;
      *(undefined8 *)(puVar6 + -0xa0) = uVar15;
      *(undefined8 *)(puVar6 + -0x88) = uVar31;
      *(undefined8 *)(puVar6 + -0x90) = uVar30;
      *(undefined8 *)(puVar6 + -0xa8) = uVar28;
      *(undefined8 *)(puVar6 + -0xb0) = uVar12;
      uVar28 = unaff_x19[1];
      uVar12 = *unaff_x19;
      uVar29 = unaff_x19[3];
      uVar15 = unaff_x19[2];
      uVar31 = unaff_x19[5];
      uVar30 = unaff_x19[4];
      uVar32 = unaff_x19[6];
      uVar34 = unaff_x19[9];
      uVar33 = unaff_x19[8];
      param_1[7] = unaff_x19[7];
      param_1[6] = uVar32;
      param_1[9] = uVar34;
      param_1[8] = uVar33;
      param_1[3] = uVar29;
      param_1[2] = uVar15;
      param_1[5] = uVar31;
      param_1[4] = uVar30;
      param_1[1] = uVar28;
      *param_1 = uVar12;
      uVar28 = *(undefined8 *)(puVar6 + -0xa8);
      uVar12 = *(undefined8 *)(puVar6 + -0xb0);
      uVar29 = *(undefined8 *)(puVar6 + -0x98);
      uVar15 = *(undefined8 *)(puVar6 + -0xa0);
      uVar31 = *(undefined8 *)(puVar6 + -0x88);
      uVar30 = *(undefined8 *)(puVar6 + -0x90);
      uVar32 = *(undefined8 *)(puVar6 + -0x80);
      uVar34 = *(undefined8 *)(puVar6 + -0x68);
      uVar33 = *(undefined8 *)(puVar6 + -0x70);
      unaff_x19[7] = *(undefined8 *)(puVar6 + -0x78);
      unaff_x19[6] = uVar32;
      unaff_x19[9] = uVar34;
      unaff_x19[8] = uVar33;
      unaff_x19[3] = uVar29;
      unaff_x19[2] = uVar15;
      unaff_x19[5] = uVar31;
      unaff_x19[4] = uVar30;
      unaff_x28 = unaff_x19 + 10;
      unaff_x27 = uVar22 + ~param_2;
      unaff_x19[1] = uVar28;
      *unaff_x19 = uVar12;
      uVar12 = *(undefined8 *)(puVar6 + -0xc0);
      uVar22 = (ulong)*(uint *)(puVar6 + -0xb4);
      unaff_x30 = 0x103959c88;
      unaff_x21 = 0;
      puVar6 = puVar6 + -0xd0;
      unaff_x23 = param_2;
      unaff_x25 = uVar22;
    } while( true );
  }
LAB_103957818:
  if (lVar19 < 0) {
    uVar22 = param_2 >> 1;
    puVar26 = param_1 + param_2 * 10 + -4;
    param_1 = param_1 + 4;
    do {
      uVar28 = param_1[-3];
      uVar12 = param_1[-4];
      uVar29 = param_1[-1];
      uVar15 = param_1[-2];
      uVar30 = puVar26[-6];
      uVar32 = puVar26[-3];
      uVar31 = puVar26[-4];
      param_1[-3] = puVar26[-5];
      param_1[-4] = uVar30;
      param_1[-1] = uVar32;
      param_1[-2] = uVar31;
      puVar26[-5] = uVar28;
      puVar26[-6] = uVar12;
      puVar26[-3] = uVar29;
      puVar26[-4] = uVar15;
      uVar12 = *param_1;
      uVar15 = param_1[3];
      uVar28 = param_1[2];
      uVar30 = puVar26[-1];
      uVar29 = puVar26[-2];
      uVar32 = puVar26[1];
      uVar31 = *puVar26;
      puVar26[-1] = param_1[1];
      puVar26[-2] = uVar12;
      puVar26[1] = uVar15;
      *puVar26 = uVar28;
      uVar12 = param_1[4];
      uVar15 = puVar26[3];
      uVar28 = puVar26[2];
      puVar26[3] = param_1[5];
      puVar26[2] = uVar12;
      puVar26 = puVar26 + -10;
      param_1[1] = uVar30;
      *param_1 = uVar29;
      param_1[3] = uVar32;
      param_1[2] = uVar31;
      param_1[5] = uVar15;
      param_1[4] = uVar28;
      param_1 = param_1 + 10;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
LAB_103958394:
  uVar10 = lVar19 - 1;
  uVar22 = uVar10 - uVar14;
  if (uVar10 < uVar14) {
    uVar22 = 0;
    uVar12 = param_1[4];
    uVar15 = param_1[7];
    uVar28 = param_1[6];
    puVar26 = param_1 + uVar10 * 10;
    *(undefined8 *)(puVar6 + -0x88) = param_1[5];
    *(undefined8 *)(puVar6 + -0x90) = uVar12;
    *(undefined8 *)(puVar6 + -0x78) = uVar15;
    *(undefined8 *)(puVar6 + -0x80) = uVar28;
    uVar12 = param_1[8];
    *(undefined8 *)(puVar6 + -0x68) = param_1[9];
    *(undefined8 *)(puVar6 + -0x70) = uVar12;
    uVar15 = *param_1;
    uVar28 = param_1[3];
    uVar12 = param_1[2];
    *(undefined8 *)(puVar6 + -0xa8) = param_1[1];
    *(undefined8 *)(puVar6 + -0xb0) = uVar15;
    *(undefined8 *)(puVar6 + -0x98) = uVar28;
    *(undefined8 *)(puVar6 + -0xa0) = uVar12;
    uVar29 = puVar26[7];
    uVar15 = puVar26[6];
    uVar28 = puVar26[9];
    uVar12 = puVar26[8];
    uVar33 = puVar26[3];
    uVar32 = puVar26[2];
    uVar31 = puVar26[5];
    uVar30 = puVar26[4];
    uVar34 = *puVar26;
    param_1[1] = puVar26[1];
    *param_1 = uVar34;
    param_1[3] = uVar33;
    param_1[2] = uVar32;
    param_1[5] = uVar31;
    param_1[4] = uVar30;
    param_1[7] = uVar29;
    param_1[6] = uVar15;
    param_1[9] = uVar28;
    param_1[8] = uVar12;
    uVar12 = *(undefined8 *)(puVar6 + -0x80);
    uVar15 = *(undefined8 *)(puVar6 + -0x68);
    uVar28 = *(undefined8 *)(puVar6 + -0x70);
    puVar26[7] = *(undefined8 *)(puVar6 + -0x78);
    puVar26[6] = uVar12;
    puVar26[9] = uVar15;
    puVar26[8] = uVar28;
    uVar12 = *(undefined8 *)(puVar6 + -0xa0);
    uVar15 = *(undefined8 *)(puVar6 + -0x88);
    uVar28 = *(undefined8 *)(puVar6 + -0x90);
    puVar26[3] = *(undefined8 *)(puVar6 + -0x98);
    puVar26[2] = uVar12;
    puVar26[5] = uVar15;
    puVar26[4] = uVar28;
    uVar12 = *(undefined8 *)(puVar6 + -0xb0);
    puVar26[1] = *(undefined8 *)(puVar6 + -0xa8);
    *puVar26 = uVar12;
  }
  *(ulong *)(puVar6 + -0xb8) = uVar10;
  if (uVar10 <= uVar14) {
    uVar14 = uVar10;
  }
  while (uVar10 = (uVar22 & 0x3fffffffffffffff) << 1 | 1, uVar10 < uVar14) {
    uVar23 = uVar22 * 2 + 2;
    if (uVar23 < uVar14) {
      uVar13 = param_1[uVar10 * 10 + 2];
      uVar3 = param_1[uVar23 * 10 + 2];
      uVar2 = uVar13;
      if (uVar3 <= uVar13) {
        uVar2 = uVar3;
      }
      iVar8 = _memcmp(param_1[uVar10 * 10 + 1],param_1[uVar23 * 10 + 1],uVar2);
      lVar19 = uVar13 - uVar3;
      if (iVar8 != 0) {
        lVar19 = (long)iVar8;
      }
      uVar10 = uVar10 - (lVar19 >> 0x3f);
    }
    puVar16 = param_1 + uVar22 * 10;
    puVar26 = param_1 + uVar10 * 10;
    uVar12 = puVar16[1];
    uVar23 = puVar16[2];
    uVar28 = puVar26[1];
    uVar2 = puVar26[2];
    uVar22 = uVar23;
    if (uVar2 <= uVar23) {
      uVar22 = uVar2;
    }
    iVar8 = _memcmp(uVar12,uVar28,uVar22);
    lVar19 = uVar23 - uVar2;
    if (iVar8 != 0) {
      lVar19 = (long)iVar8;
    }
    if (-1 < lVar19) break;
    uVar15 = *puVar16;
    *puVar16 = *puVar26;
    puVar16[1] = uVar28;
    *puVar26 = uVar15;
    puVar26[1] = uVar12;
    puVar16[2] = uVar2;
    puVar26[2] = uVar23;
    uVar28 = puVar16[4];
    uVar12 = puVar16[3];
    uVar15 = puVar26[3];
    puVar16[4] = puVar26[4];
    puVar16[3] = uVar15;
    puVar26[4] = uVar28;
    puVar26[3] = uVar12;
    uVar28 = puVar16[6];
    uVar12 = puVar16[5];
    uVar15 = puVar26[5];
    puVar16[6] = puVar26[6];
    puVar16[5] = uVar15;
    puVar26[6] = uVar28;
    puVar26[5] = uVar12;
    uVar28 = puVar16[8];
    uVar12 = puVar16[7];
    uVar15 = puVar26[7];
    puVar16[8] = puVar26[8];
    puVar16[7] = uVar15;
    puVar26[8] = uVar28;
    puVar26[7] = uVar12;
    uVar12 = puVar16[9];
    puVar16[9] = puVar26[9];
    puVar26[9] = uVar12;
    uVar22 = uVar10;
  }
  uVar14 = *(ulong *)(puVar6 + -0xc0);
  lVar19 = *(long *)(puVar6 + -0xb8);
  if (lVar19 == 0) {
    return;
  }
  goto LAB_103958394;
LAB_10394b5d0:
  do {
    uVar13 = uVar14 + 1;
    puVar26 = (undefined8 *)(*(long *)(puVar6 + -0xf78) + uVar14 * 0x50);
    puVar16 = (undefined8 *)(puVar6 + uVar14 * 0x50 + -0xf70);
    uVar12 = *puVar26;
    uVar15 = puVar26[3];
    uVar28 = puVar26[2];
    puVar16[1] = puVar26[1];
    *puVar16 = uVar12;
    puVar16[3] = uVar15;
    puVar16[2] = uVar28;
    uVar12 = puVar26[4];
    uVar15 = puVar26[7];
    uVar28 = puVar26[6];
    puVar16[5] = puVar26[5];
    puVar16[4] = uVar12;
    puVar16[7] = uVar15;
    puVar16[6] = uVar28;
    uVar12 = puVar26[8];
    puVar16[9] = puVar26[9];
    puVar16[8] = uVar12;
    uVar12 = puVar16[1];
    uVar23 = puVar16[2];
    uVar2 = puVar16[-8];
    uVar14 = uVar23;
    if (uVar2 <= uVar23) {
      uVar14 = uVar2;
    }
    iVar8 = _memcmp(uVar12,puVar16[-9],uVar14);
    lVar20 = uVar23 - uVar2;
    if (iVar8 != 0) {
      lVar20 = (long)iVar8;
    }
    if (lVar20 < 0) {
      *(undefined8 *)(puVar6 + -0xf90) = *puVar16;
      lVar20 = lVar19;
      do {
        lVar17 = lVar20;
        puVar16 = (undefined8 *)(puVar6 + -0xf70);
        puVar11 = (undefined8 *)((long)puVar16 + lVar17);
        puVar11[5] = puVar11[-5];
        puVar11[4] = puVar11[-6];
        puVar11[7] = puVar11[-3];
        puVar11[6] = puVar11[-4];
        puVar11[9] = puVar11[-1];
        puVar11[8] = puVar11[-2];
        puVar11[1] = puVar11[-9];
        *puVar11 = puVar11[-10];
        puVar11[3] = puVar11[-7];
        puVar11[2] = puVar11[-8];
        if (lVar17 + -0x50 == 0) goto LAB_10394b58c;
        uVar14 = *(ulong *)(puVar6 + lVar17 + -0x1000);
        uVar22 = uVar23;
        if (uVar14 <= uVar23) {
          uVar22 = uVar14;
        }
        iVar8 = _memcmp(uVar12,*(undefined8 *)(puVar6 + lVar17 + -0x1008),uVar22);
        lVar18 = uVar23 - uVar14;
        if (iVar8 != 0) {
          lVar18 = (long)iVar8;
        }
        lVar20 = lVar17 + -0x50;
      } while (lVar18 < 0);
      puVar16 = (undefined8 *)(puVar6 + lVar17 + -0xfc0);
LAB_10394b58c:
      uVar22 = *(ulong *)(puVar6 + -0xfa8);
      *puVar16 = *(undefined8 *)(puVar6 + -0xf90);
      *(undefined8 *)(puVar6 + lVar17 + -0xfb8) = uVar12;
      *(ulong *)(puVar6 + lVar17 + -0xfb0) = uVar23;
      uVar12 = puVar26[3];
      *(undefined8 *)(puVar6 + lVar17 + -4000) = puVar26[4];
      *(undefined8 *)(puVar6 + lVar17 + -0xfa8) = uVar12;
      uVar12 = puVar26[5];
      *(undefined8 *)(puVar6 + lVar17 + -0xf90) = puVar26[6];
      *(undefined8 *)(puVar6 + lVar17 + -0xf98) = uVar12;
      uVar12 = puVar26[7];
      *(undefined8 *)(puVar6 + lVar17 + -0xf80) = puVar26[8];
      *(undefined8 *)(puVar6 + lVar17 + -0xf88) = uVar12;
      *(undefined8 *)(puVar6 + lVar17 + -0xf78) = puVar26[9];
    }
    lVar19 = lVar19 + 0x50;
    uVar14 = uVar13;
  } while (uVar13 < uVar22);
LAB_10394b68c:
  puVar26 = *(undefined8 **)(puVar6 + -4000);
  puVar16 = puVar26;
  if (uVar10 < *(ulong *)(puVar6 + -0xf80)) {
    lVar19 = *(long *)(puVar6 + -0xf98);
    lVar20 = 0x50;
    do {
      uVar14 = uVar10 + 1;
      puVar11 = (undefined8 *)(*(long *)(puVar6 + -0xf88) + uVar10 * 0x50);
      puVar27 = puVar16 + uVar10 * 10;
      uVar12 = *puVar11;
      uVar15 = puVar11[3];
      uVar28 = puVar11[2];
      puVar27[1] = puVar11[1];
      *puVar27 = uVar12;
      puVar27[3] = uVar15;
      puVar27[2] = uVar28;
      uVar12 = puVar11[4];
      uVar15 = puVar11[7];
      uVar28 = puVar11[6];
      puVar27[5] = puVar11[5];
      puVar27[4] = uVar12;
      puVar27[7] = uVar15;
      puVar27[6] = uVar28;
      uVar12 = puVar11[8];
      puVar27[9] = puVar11[9];
      puVar27[8] = uVar12;
      uVar12 = puVar27[1];
      uVar10 = puVar27[2];
      uVar23 = puVar27[-8];
      uVar22 = uVar10;
      if (uVar23 <= uVar10) {
        uVar22 = uVar23;
      }
      iVar8 = _memcmp(uVar12,puVar27[-9],uVar22);
      lVar17 = uVar10 - uVar23;
      if (iVar8 != 0) {
        lVar17 = (long)iVar8;
      }
      if (lVar17 < 0) {
        *(undefined8 *)(puVar6 + -0xf98) = *puVar27;
        *(ulong *)(puVar6 + -0xf90) = uVar14;
        puVar27 = puVar26;
        lVar17 = lVar20;
        do {
          puVar25 = puVar27 + lVar19 * 2;
          puVar25[5] = puVar25[-5];
          puVar25[4] = puVar25[-6];
          puVar25[7] = puVar25[-3];
          puVar25[6] = puVar25[-4];
          puVar25[9] = puVar25[-1];
          puVar25[8] = puVar25[-2];
          puVar25[1] = puVar25[-9];
          *puVar25 = puVar25[-10];
          puVar25[3] = puVar25[-7];
          puVar25[2] = puVar25[-8];
          if (lVar19 * 0x10 - lVar17 == 0) {
            puVar27 = *(undefined8 **)(puVar6 + -4000);
            puVar16 = puVar27;
            goto LAB_10394b6bc;
          }
          uVar14 = puVar25[-0x12];
          uVar22 = uVar10;
          if (uVar14 <= uVar10) {
            uVar22 = uVar14;
          }
          iVar8 = _memcmp(uVar12,puVar25[-0x13],uVar22);
          lVar18 = uVar10 - uVar14;
          if (iVar8 != 0) {
            lVar18 = (long)iVar8;
          }
          lVar17 = lVar17 + 0x50;
          puVar27 = puVar27 + -10;
        } while (lVar18 < 0);
        puVar27 = puVar27 + lVar19 * 2;
        puVar16 = *(undefined8 **)(puVar6 + -4000);
LAB_10394b6bc:
        uVar14 = *(ulong *)(puVar6 + -0xf90);
        *puVar27 = *(undefined8 *)(puVar6 + -0xf98);
        puVar25[-9] = uVar12;
        puVar25[-8] = uVar10;
        uVar12 = puVar11[3];
        puVar25[-6] = puVar11[4];
        puVar25[-7] = uVar12;
        uVar12 = puVar11[5];
        puVar25[-4] = puVar11[6];
        puVar25[-5] = uVar12;
        uVar12 = puVar11[7];
        puVar25[-2] = puVar11[8];
        puVar25[-3] = uVar12;
        puVar25[-1] = puVar11[9];
      }
      lVar20 = lVar20 + -0x50;
      puVar26 = puVar26 + 10;
      uVar10 = uVar14;
    } while (uVar14 < *(ulong *)(puVar6 + -0xf80));
  }
  lVar19 = *(long *)(puVar6 + -0xfa8);
  lVar20 = *(long *)(puVar6 + -0xfb0) * 0x50;
  puVar26 = (undefined8 *)(puVar6 + -0xf70);
  puVar11 = puVar26 + *(long *)(puVar6 + -0xfb0) * 10 + -10;
  puVar25 = puVar16 + -10;
  puVar27 = *(undefined8 **)(puVar6 + -0xf78);
  do {
    puVar21 = puVar27;
    lVar20 = lVar20 + -0x50;
    puVar27 = (undefined8 *)(*(long *)(puVar6 + -0xf78) + lVar20);
    uVar14 = puVar16[2];
    uVar10 = puVar26[2];
    uVar22 = uVar14;
    if (uVar10 <= uVar14) {
      uVar22 = uVar10;
    }
    iVar8 = _memcmp(puVar16[1],puVar26[1],uVar22);
    uVar22 = uVar14 - uVar10;
    if (iVar8 != 0) {
      uVar22 = (long)iVar8;
    }
    puVar1 = puVar26;
    if (0x7fffffffffffffff < uVar22) {
      puVar1 = puVar16;
    }
    uVar12 = puVar1[4];
    uVar15 = puVar1[7];
    uVar28 = puVar1[6];
    puVar21[5] = puVar1[5];
    puVar21[4] = uVar12;
    puVar21[7] = uVar15;
    puVar21[6] = uVar28;
    uVar12 = puVar1[8];
    puVar21[9] = puVar1[9];
    puVar21[8] = uVar12;
    uVar15 = *puVar1;
    uVar28 = puVar1[3];
    uVar12 = puVar1[2];
    puVar21[1] = puVar1[1];
    *puVar21 = uVar15;
    puVar21[3] = uVar28;
    puVar21[2] = uVar12;
    puVar16 = puVar16 + ((long)uVar22 >> 0x3f) * -10;
    puVar26 = (undefined8 *)((long)puVar26 + ((ulong)~(uint)((long)uVar22 >> 0x3f) & 0x50));
    uVar14 = puVar11[2];
    uVar10 = puVar25[2];
    uVar22 = uVar14;
    if (uVar10 <= uVar14) {
      uVar22 = uVar10;
    }
    iVar8 = _memcmp(puVar11[1],puVar25[1],uVar22);
    uVar22 = uVar14 - uVar10;
    if (iVar8 != 0) {
      uVar22 = (long)iVar8;
    }
    puVar1 = puVar11;
    if (0x7fffffffffffffff < uVar22) {
      puVar1 = puVar25;
    }
    uVar12 = puVar1[4];
    uVar15 = puVar1[7];
    uVar28 = puVar1[6];
    puVar27[5] = puVar1[5];
    puVar27[4] = uVar12;
    puVar27[7] = uVar15;
    puVar27[6] = uVar28;
    uVar12 = puVar1[8];
    puVar27[9] = puVar1[9];
    puVar27[8] = uVar12;
    uVar15 = *puVar1;
    uVar28 = puVar1[3];
    uVar12 = puVar1[2];
    puVar27[1] = puVar1[1];
    *puVar27 = uVar15;
    puVar27[3] = uVar28;
    puVar27[2] = uVar12;
    uVar4 = (uint)((long)uVar22 >> 0x3f);
    puVar11 = puVar11 + (long)(int)~uVar4 * 10;
    puVar25 = puVar25 + (long)(int)uVar4 * 10;
    lVar19 = lVar19 + -1;
    puVar27 = puVar21 + 10;
  } while (lVar19 != 0);
  if ((*(ulong *)(puVar6 + -0xfb0) & 1) != 0) {
    bVar7 = puVar25 + 10 <= puVar26;
    puVar27 = puVar26;
    if (bVar7) {
      puVar27 = puVar16;
    }
    uVar12 = puVar27[4];
    uVar15 = puVar27[7];
    uVar28 = puVar27[6];
    puVar21[0xf] = puVar27[5];
    puVar21[0xe] = uVar12;
    puVar21[0x11] = uVar15;
    puVar21[0x10] = uVar28;
    uVar12 = puVar27[8];
    puVar21[0x13] = puVar27[9];
    puVar21[0x12] = uVar12;
    uVar15 = *puVar27;
    uVar28 = puVar27[3];
    uVar12 = puVar27[2];
    puVar21[0xb] = puVar27[1];
    puVar21[10] = uVar15;
    puVar21[0xd] = uVar28;
    puVar21[0xc] = uVar12;
    lVar19 = 0x50;
    if (bVar7) {
      lVar19 = 0;
    }
    puVar26 = (undefined8 *)((long)puVar26 + lVar19);
    lVar19 = 0;
    if (bVar7) {
      lVar19 = 0x50;
    }
    puVar16 = (undefined8 *)((long)puVar16 + lVar19);
  }
  if (puVar26 == puVar25 + 10 && puVar16 == puVar11 + 10) {
    return;
  }
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10394b920);
  (*pcVar5)();
}

