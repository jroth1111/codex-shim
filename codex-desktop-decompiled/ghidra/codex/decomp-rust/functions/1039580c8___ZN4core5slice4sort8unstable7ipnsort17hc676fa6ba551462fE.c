
/* WARNING: Possible PIC construction at 0x00010395ad10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010395ad14) */
/* WARNING: Removing unreachable block (ram,0x00010395ad20) */

void __ZN4core5slice4sort8unstable7ipnsort17hc676fa6ba551462fE(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar13;
  ulong unaff_x22;
  long lVar14;
  undefined8 *unaff_x23;
  ulong uVar15;
  ulong unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_2 < 2) {
    return;
  }
  uVar7 = func_0x000103947af8(param_1 + 6,param_1);
  if ((uVar7 & 1) == 0) {
    if (param_2 != 2) {
      puVar11 = param_1 + 6;
      uVar15 = 2;
      do {
        puVar11 = puVar11 + 6;
        uVar8 = func_0x000103947af8(puVar11);
        if ((uVar8 & 1) != 0) goto LAB_10395813c;
        uVar15 = uVar15 + 1;
      } while (param_2 != uVar15);
      goto LAB_10395819c;
    }
  }
  else if (param_2 != 2) {
    puVar11 = param_1 + 6;
    uVar15 = 2;
    do {
      puVar11 = puVar11 + 6;
      iVar5 = func_0x000103947af8(puVar11);
      if (iVar5 == 0) goto LAB_10395813c;
      uVar15 = uVar15 + 1;
    } while (param_2 != uVar15);
    goto LAB_10395819c;
  }
  uVar15 = 2;
LAB_10395813c:
  if (uVar15 != param_2) {
    uVar7 = (ulong)((int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e);
    lVar9 = 0;
    puVar4 = (undefined1 *)register0x00000008;
    do {
      *(undefined8 **)(puVar4 + -0x60) = unaff_x28;
      *(undefined8 **)(puVar4 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined **)(puVar4 + -0x48) = unaff_x25;
      *(ulong *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 **)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(long *)(puVar4 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar4 + -8) = unaff_x30;
      unaff_x29 = puVar4 + -0x10;
      uVar15 = param_2;
      while( true ) {
        if (uVar15 < 0x21) {
          func_0x00010394b940(param_1,uVar15);
          return;
        }
        if ((int)uVar7 == 0) {
          func_0x000103958c9c(param_1,uVar15);
          return;
        }
        puVar11 = param_1 + (uVar15 >> 3) * 0x18;
        puVar10 = param_1 + (uVar15 >> 3) * 0x2a;
        if (uVar15 < 0x40) {
          iVar5 = func_0x000103947af8(param_1,puVar11);
          iVar6 = func_0x000103947af8(param_1,puVar10);
          puVar12 = param_1;
          if ((iVar5 == iVar6) &&
             (iVar6 = func_0x000103947af8(puVar11,puVar10), puVar12 = puVar10, iVar5 == iVar6)) {
            puVar12 = puVar11;
          }
        }
        else {
          puVar12 = (undefined8 *)func_0x0001039483d0(param_1,puVar11,puVar10);
        }
        *(int *)(puVar4 + -0x11c) = (int)uVar7 + -1;
        *(ulong *)(puVar4 + -0x118) = uVar15;
        *(undefined8 **)(puVar4 + -0xf8) = param_1;
        if (lVar9 == 0) break;
        puVar11 = (undefined8 *)((long)param_1 + ((long)puVar12 - (long)param_1));
        uVar7 = func_0x000103947af8(lVar9,puVar11);
        if ((uVar7 & 1) != 0) break;
        uVar7 = 0;
        uVar17 = param_1[1];
        uVar16 = *param_1;
        uVar18 = param_1[2];
        uVar20 = param_1[5];
        uVar19 = param_1[4];
        *(undefined8 *)(puVar4 + -0xd8) = param_1[3];
        *(undefined8 *)(puVar4 + -0xe0) = uVar18;
        *(undefined8 *)(puVar4 + -200) = uVar20;
        *(undefined8 *)(puVar4 + -0xd0) = uVar19;
        *(undefined8 *)(puVar4 + -0xe8) = uVar17;
        *(undefined8 *)(puVar4 + -0xf0) = uVar16;
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        uVar18 = puVar11[2];
        uVar20 = puVar11[5];
        uVar19 = puVar11[4];
        param_1[3] = puVar11[3];
        param_1[2] = uVar18;
        param_1[5] = uVar20;
        param_1[4] = uVar19;
        param_1[1] = uVar17;
        *param_1 = uVar16;
        uVar17 = *(undefined8 *)(puVar4 + -0xe8);
        uVar16 = *(undefined8 *)(puVar4 + -0xf0);
        uVar18 = *(undefined8 *)(puVar4 + -0xe0);
        uVar20 = *(undefined8 *)(puVar4 + -200);
        uVar19 = *(undefined8 *)(puVar4 + -0xd0);
        puVar11[3] = *(undefined8 *)(puVar4 + -0xd8);
        puVar11[2] = uVar18;
        puVar11[5] = uVar20;
        puVar11[4] = uVar19;
        puVar11[1] = uVar17;
        *puVar11 = uVar16;
        uVar16 = param_1[6];
        uVar18 = param_1[9];
        uVar17 = param_1[8];
        *(undefined8 *)(puVar4 + -0xe8) = param_1[7];
        *(undefined8 *)(puVar4 + -0xf0) = uVar16;
        *(undefined8 *)(puVar4 + -0xd8) = uVar18;
        *(undefined8 *)(puVar4 + -0xe0) = uVar17;
        *(undefined8 **)(puVar4 + -0x110) = param_1 + uVar15 * 6;
        *(undefined8 **)(puVar4 + -0x108) = param_1 + 6;
        uVar16 = param_1[10];
        *(undefined8 *)(puVar4 + -200) = param_1[0xb];
        *(undefined8 *)(puVar4 + -0xd0) = uVar16;
        *(undefined8 **)(puVar4 + -0x100) = param_1 + 3;
        lVar9 = uVar15 * 0x30 + -0x90;
        puVar11 = param_1 + 0xc;
        lVar2 = uVar15 * 0x30 + -0x60;
        do {
          lVar13 = lVar2;
          lVar14 = lVar9;
          *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0xf8);
          *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
          *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x100);
          *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar4 + -0xb8,s___108b03abb,puVar4 + -0x88);
          *(undefined8 **)(puVar4 + -0x88) = puVar11;
          *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
          *(undefined8 **)(puVar4 + -0x78) = puVar11 + 3;
          *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar4 + -0xa0,s___108b03abb,puVar4 + -0x88);
          uVar16 = *(undefined8 *)(puVar4 + -0xb0);
          uVar8 = *(ulong *)(puVar4 + -0xa8);
          uVar17 = *(undefined8 *)(puVar4 + -0x98);
          uVar1 = *(ulong *)(puVar4 + -0x90);
          uVar15 = uVar8;
          if (uVar1 <= uVar8) {
            uVar15 = uVar1;
          }
          iVar5 = _memcmp(uVar16,uVar17,uVar15);
          if (*(long *)(puVar4 + -0xa0) != 0) {
            _free(uVar17);
          }
          if (*(long *)(puVar4 + -0xb8) != 0) {
            _free(uVar16);
          }
          uVar15 = uVar8 - uVar1;
          if (iVar5 != 0) {
            uVar15 = (long)iVar5;
          }
          puVar12 = (undefined8 *)(*(long *)(puVar4 + -0x108) + uVar7 * 0x30);
          uVar17 = puVar12[1];
          uVar16 = *puVar12;
          uVar18 = puVar12[2];
          uVar20 = puVar12[5];
          uVar19 = puVar12[4];
          puVar11[-3] = puVar12[3];
          puVar11[-4] = uVar18;
          puVar11[-1] = uVar20;
          puVar11[-2] = uVar19;
          puVar11[-5] = uVar17;
          puVar11[-6] = uVar16;
          uVar17 = puVar11[1];
          uVar16 = *puVar11;
          uVar18 = puVar11[2];
          uVar20 = puVar11[5];
          uVar19 = puVar11[4];
          uVar7 = uVar7 - ((long)~uVar15 >> 0x3f);
          puVar10 = puVar11 + 6;
          puVar12[3] = puVar11[3];
          puVar12[2] = uVar18;
          puVar12[5] = uVar20;
          puVar12[4] = uVar19;
          puVar12[1] = uVar17;
          *puVar12 = uVar16;
          lVar9 = lVar14 + -0x30;
          puVar12 = puVar11;
          puVar11 = puVar10;
          lVar2 = lVar13 + -0x30;
        } while (puVar10 < *(undefined8 **)(puVar4 + -0x110));
        do {
          puVar11 = (undefined8 *)(puVar4 + -0xf0);
          if (lVar14 != 0) {
            puVar11 = puVar12 + 6;
          }
          *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0xf8);
          *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
          *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x100);
          *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar4 + -0xb8,s___108b03abb,puVar4 + -0x88);
          puVar10 = (undefined8 *)(puVar4 + -0xf0);
          if (lVar14 != 0) {
            puVar10 = puVar12 + 6;
          }
          *(undefined8 **)(puVar4 + -0x88) = puVar11;
          *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
          *(undefined8 **)(puVar4 + -0x78) = puVar10 + 3;
          *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar4 + -0xa0,s___108b03abb,puVar4 + -0x88);
          uVar16 = *(undefined8 *)(puVar4 + -0xb0);
          uVar8 = *(ulong *)(puVar4 + -0xa8);
          uVar17 = *(undefined8 *)(puVar4 + -0x98);
          uVar1 = *(ulong *)(puVar4 + -0x90);
          uVar15 = uVar8;
          if (uVar1 <= uVar8) {
            uVar15 = uVar1;
          }
          iVar5 = _memcmp(uVar16,uVar17,uVar15);
          if (*(long *)(puVar4 + -0xa0) != 0) {
            _free(uVar17);
          }
          if (*(long *)(puVar4 + -0xb8) != 0) {
            _free(uVar16);
          }
          uVar15 = uVar8 - uVar1;
          if (iVar5 != 0) {
            uVar15 = (long)iVar5;
          }
          puVar10 = (undefined8 *)(*(long *)(puVar4 + -0x108) + uVar7 * 0x30);
          uVar17 = puVar10[1];
          uVar16 = *puVar10;
          uVar18 = puVar10[2];
          uVar20 = puVar10[5];
          uVar19 = puVar10[4];
          puVar12[3] = puVar10[3];
          puVar12[2] = uVar18;
          puVar12[5] = uVar20;
          puVar12[4] = uVar19;
          puVar12[1] = uVar17;
          *puVar12 = uVar16;
          uVar17 = puVar11[1];
          uVar16 = *puVar11;
          uVar18 = puVar11[2];
          uVar20 = puVar11[5];
          uVar19 = puVar11[4];
          puVar10[3] = puVar11[3];
          puVar10[2] = uVar18;
          puVar10[5] = uVar20;
          puVar10[4] = uVar19;
          puVar10[1] = uVar17;
          *puVar10 = uVar16;
          uVar7 = uVar7 - ((long)~uVar15 >> 0x3f);
          lVar14 = lVar14 + -0x30;
          lVar13 = lVar13 + -0x30;
          puVar12 = puVar12 + 6;
        } while (lVar13 != 0);
        uVar15 = *(ulong *)(puVar4 + -0x118);
        if (uVar15 <= uVar7) goto LAB_10395b014;
        lVar9 = 0;
        puVar11 = *(undefined8 **)(puVar4 + -0xf8);
        param_1 = puVar11 + uVar7 * 6;
        uVar24 = puVar11[3];
        uVar23 = puVar11[2];
        uVar17 = puVar11[5];
        uVar16 = puVar11[4];
        uVar19 = param_1[1];
        uVar18 = *param_1;
        uVar20 = param_1[2];
        uVar22 = param_1[5];
        uVar21 = param_1[4];
        puVar11[3] = param_1[3];
        puVar11[2] = uVar20;
        puVar11[5] = uVar22;
        puVar11[4] = uVar21;
        uVar21 = puVar11[1];
        uVar20 = *puVar11;
        puVar11[1] = uVar19;
        *puVar11 = uVar18;
        *(undefined8 *)(puVar4 + -0xd8) = uVar24;
        *(undefined8 *)(puVar4 + -0xe0) = uVar23;
        *(undefined8 *)(puVar4 + -200) = uVar17;
        *(undefined8 *)(puVar4 + -0xd0) = uVar16;
        *(undefined8 *)(puVar4 + -0xe8) = uVar21;
        *(undefined8 *)(puVar4 + -0xf0) = uVar20;
        uVar17 = *(undefined8 *)(puVar4 + -0xe8);
        uVar16 = *(undefined8 *)(puVar4 + -0xf0);
        uVar18 = *(undefined8 *)(puVar4 + -0xe0);
        uVar20 = *(undefined8 *)(puVar4 + -200);
        uVar19 = *(undefined8 *)(puVar4 + -0xd0);
        param_1[3] = *(undefined8 *)(puVar4 + -0xd8);
        param_1[2] = uVar18;
        param_1[5] = uVar20;
        param_1[4] = uVar19;
        param_1[1] = uVar17;
        *param_1 = uVar16;
        uVar15 = ~uVar7 + uVar15;
        param_1 = param_1 + 6;
        uVar7 = (ulong)*(uint *)(puVar4 + -0x11c);
      }
      *(long *)(puVar4 + -0x128) = lVar9;
      param_2 = 0;
      puVar11 = (undefined8 *)((long)param_1 + ((long)puVar12 - (long)param_1));
      uVar17 = param_1[1];
      uVar16 = *param_1;
      uVar18 = param_1[2];
      uVar20 = param_1[5];
      uVar19 = param_1[4];
      *(undefined8 *)(puVar4 + -0xd8) = param_1[3];
      *(undefined8 *)(puVar4 + -0xe0) = uVar18;
      *(undefined8 *)(puVar4 + -200) = uVar20;
      *(undefined8 *)(puVar4 + -0xd0) = uVar19;
      *(undefined8 *)(puVar4 + -0xe8) = uVar17;
      *(undefined8 *)(puVar4 + -0xf0) = uVar16;
      uVar17 = puVar11[1];
      uVar16 = *puVar11;
      uVar18 = puVar11[2];
      uVar20 = puVar11[5];
      uVar19 = puVar11[4];
      param_1[3] = puVar11[3];
      param_1[2] = uVar18;
      param_1[5] = uVar20;
      param_1[4] = uVar19;
      param_1[1] = uVar17;
      *param_1 = uVar16;
      uVar17 = *(undefined8 *)(puVar4 + -0xe8);
      uVar16 = *(undefined8 *)(puVar4 + -0xf0);
      uVar18 = *(undefined8 *)(puVar4 + -0xe0);
      uVar20 = *(undefined8 *)(puVar4 + -200);
      uVar19 = *(undefined8 *)(puVar4 + -0xd0);
      puVar11[3] = *(undefined8 *)(puVar4 + -0xd8);
      puVar11[2] = uVar18;
      puVar11[5] = uVar20;
      puVar11[4] = uVar19;
      puVar11[1] = uVar17;
      *puVar11 = uVar16;
      uVar16 = param_1[6];
      uVar18 = param_1[9];
      uVar17 = param_1[8];
      *(undefined8 *)(puVar4 + -0xe8) = param_1[7];
      *(undefined8 *)(puVar4 + -0xf0) = uVar16;
      *(undefined8 *)(puVar4 + -0xd8) = uVar18;
      *(undefined8 *)(puVar4 + -0xe0) = uVar17;
      *(undefined8 **)(puVar4 + -0x110) = param_1 + uVar15 * 6;
      *(undefined8 **)(puVar4 + -0x108) = param_1 + 6;
      uVar16 = param_1[10];
      *(undefined8 *)(puVar4 + -200) = param_1[0xb];
      *(undefined8 *)(puVar4 + -0xd0) = uVar16;
      *(undefined8 **)(puVar4 + -0x100) = param_1 + 3;
      lVar9 = uVar15 * 0x30 + -0x90;
      lVar2 = uVar15 * 0x30 + -0x60;
      puVar11 = param_1 + 0xc;
      do {
        lVar13 = lVar2;
        lVar14 = lVar9;
        *(undefined8 **)(puVar4 + -0x88) = puVar11;
        *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
        *(undefined8 **)(puVar4 + -0x78) = puVar11 + 3;
        *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (puVar4 + -0xb8,s___108b03abb,puVar4 + -0x88);
        *(undefined8 **)(puVar4 + -0x88) = param_1;
        *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
        *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x100);
        *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (puVar4 + -0xa0,s___108b03abb,puVar4 + -0x88);
        uVar16 = *(undefined8 *)(puVar4 + -0xb0);
        uVar15 = *(ulong *)(puVar4 + -0xa8);
        uVar17 = *(undefined8 *)(puVar4 + -0x98);
        uVar8 = *(ulong *)(puVar4 + -0x90);
        uVar7 = uVar15;
        if (uVar8 <= uVar15) {
          uVar7 = uVar8;
        }
        iVar5 = _memcmp(uVar16,uVar17,uVar7);
        if (*(long *)(puVar4 + -0xa0) != 0) {
          _free(uVar17);
        }
        if (*(long *)(puVar4 + -0xb8) != 0) {
          _free(uVar16);
        }
        lVar9 = uVar15 - uVar8;
        if (iVar5 != 0) {
          lVar9 = (long)iVar5;
        }
        puVar10 = (undefined8 *)(*(long *)(puVar4 + -0x108) + param_2 * 0x30);
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        uVar18 = puVar10[2];
        uVar20 = puVar10[5];
        uVar19 = puVar10[4];
        puVar11[-3] = puVar10[3];
        puVar11[-4] = uVar18;
        puVar11[-1] = uVar20;
        puVar11[-2] = uVar19;
        puVar11[-5] = uVar17;
        puVar11[-6] = uVar16;
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        uVar18 = puVar11[2];
        uVar20 = puVar11[5];
        uVar19 = puVar11[4];
        param_2 = param_2 - (lVar9 >> 0x3f);
        unaff_x28 = puVar11 + 6;
        puVar10[3] = puVar11[3];
        puVar10[2] = uVar18;
        puVar10[5] = uVar20;
        puVar10[4] = uVar19;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        param_1 = *(undefined8 **)(puVar4 + -0xf8);
        lVar9 = lVar14 + -0x30;
        lVar2 = lVar13 + -0x30;
        puVar10 = puVar11;
        puVar11 = unaff_x28;
      } while (unaff_x28 < *(undefined8 **)(puVar4 + -0x110));
      do {
        unaff_x19 = (undefined8 *)(puVar4 + -0xf0);
        if (lVar14 != 0) {
          unaff_x19 = puVar10 + 6;
        }
        *(undefined8 **)(puVar4 + -0x88) = unaff_x19;
        *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
        *(undefined8 **)(puVar4 + -0x78) = unaff_x19 + 3;
        *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (puVar4 + -0xb8,s___108b03abb,puVar4 + -0x88);
        *(undefined8 **)(puVar4 + -0x88) = param_1;
        *(undefined **)(puVar4 + -0x80) = &DAT_1048e978c;
        *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x100);
        *(undefined **)(puVar4 + -0x70) = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (puVar4 + -0xa0,s___108b03abb,puVar4 + -0x88);
        uVar16 = *(undefined8 *)(puVar4 + -0xb0);
        uVar15 = *(ulong *)(puVar4 + -0xa8);
        uVar17 = *(undefined8 *)(puVar4 + -0x98);
        uVar8 = *(ulong *)(puVar4 + -0x90);
        uVar7 = uVar15;
        if (uVar8 <= uVar15) {
          uVar7 = uVar8;
        }
        unaff_x26 = _memcmp(uVar16,uVar17,uVar7);
        if (*(long *)(puVar4 + -0xa0) != 0) {
          _free(uVar17);
        }
        if (*(long *)(puVar4 + -0xb8) != 0) {
          _free(uVar16);
        }
        lVar9 = uVar15 - uVar8;
        if ((int)unaff_x26 != 0) {
          lVar9 = (long)(int)unaff_x26;
        }
        puVar11 = (undefined8 *)(*(long *)(puVar4 + -0x108) + param_2 * 0x30);
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        uVar18 = puVar11[2];
        uVar20 = puVar11[5];
        uVar19 = puVar11[4];
        puVar10[3] = puVar11[3];
        puVar10[2] = uVar18;
        puVar10[5] = uVar20;
        puVar10[4] = uVar19;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        uVar17 = unaff_x19[1];
        uVar16 = *unaff_x19;
        uVar18 = unaff_x19[2];
        uVar20 = unaff_x19[5];
        uVar19 = unaff_x19[4];
        puVar11[3] = unaff_x19[3];
        puVar11[2] = uVar18;
        puVar11[5] = uVar20;
        puVar11[4] = uVar19;
        puVar11[1] = uVar17;
        *puVar11 = uVar16;
        param_2 = param_2 - (lVar9 >> 0x3f);
        lVar14 = lVar14 + -0x30;
        lVar13 = lVar13 + -0x30;
        unaff_x25 = &DAT_1048e978c;
        param_1 = *(undefined8 **)(puVar4 + -0xf8);
        puVar10 = puVar10 + 6;
      } while (lVar13 != 0);
      uVar7 = *(ulong *)(puVar4 + -0x118);
      if (uVar7 <= param_2) {
LAB_10395b014:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10395b018);
        (*pcVar3)();
      }
      unaff_x23 = param_1 + param_2 * 6;
      uVar17 = param_1[1];
      uVar16 = *param_1;
      uVar18 = param_1[2];
      uVar20 = param_1[5];
      uVar19 = param_1[4];
      *(undefined8 *)(puVar4 + -0xd8) = param_1[3];
      *(undefined8 *)(puVar4 + -0xe0) = uVar18;
      *(undefined8 *)(puVar4 + -200) = uVar20;
      *(undefined8 *)(puVar4 + -0xd0) = uVar19;
      *(undefined8 *)(puVar4 + -0xe8) = uVar17;
      *(undefined8 *)(puVar4 + -0xf0) = uVar16;
      uVar17 = unaff_x23[1];
      uVar16 = *unaff_x23;
      uVar18 = unaff_x23[2];
      uVar20 = unaff_x23[5];
      uVar19 = unaff_x23[4];
      param_1[3] = unaff_x23[3];
      param_1[2] = uVar18;
      param_1[5] = uVar20;
      param_1[4] = uVar19;
      param_1[1] = uVar17;
      *param_1 = uVar16;
      uVar17 = *(undefined8 *)(puVar4 + -0xe8);
      uVar16 = *(undefined8 *)(puVar4 + -0xf0);
      uVar18 = *(undefined8 *)(puVar4 + -0xe0);
      uVar20 = *(undefined8 *)(puVar4 + -200);
      uVar19 = *(undefined8 *)(puVar4 + -0xd0);
      unaff_x23[3] = *(undefined8 *)(puVar4 + -0xd8);
      unaff_x23[2] = uVar18;
      unaff_x23[5] = uVar20;
      unaff_x23[4] = uVar19;
      unaff_x23[1] = uVar17;
      *unaff_x23 = uVar16;
      unaff_x20 = unaff_x23 + 6;
      unaff_x21 = uVar7 + ~param_2;
      lVar9 = *(long *)(puVar4 + -0x128);
      uVar7 = (ulong)*(uint *)(puVar4 + -0x11c);
      unaff_x30 = 0x10395ad14;
      puVar4 = puVar4 + -0x130;
      unaff_x22 = uVar7;
      unaff_x24 = param_2;
      unaff_x27 = param_1;
    } while( true );
  }
LAB_10395819c:
  if ((uVar7 & 1) != 0) {
    uVar7 = param_2 >> 1;
    puVar11 = param_1 + 2;
    puVar10 = param_1 + param_2 * 6 + -2;
    do {
      uVar16 = puVar11[-2];
      uVar18 = puVar11[1];
      uVar17 = *puVar11;
      uVar20 = puVar10[-3];
      uVar19 = puVar10[-4];
      uVar22 = puVar10[-1];
      uVar21 = puVar10[-2];
      puVar10[-3] = puVar11[-1];
      puVar10[-4] = uVar16;
      puVar10[-1] = uVar18;
      puVar10[-2] = uVar17;
      uVar16 = puVar11[2];
      uVar18 = puVar10[1];
      uVar17 = *puVar10;
      puVar10[1] = puVar11[3];
      *puVar10 = uVar16;
      puVar11[-1] = uVar20;
      puVar11[-2] = uVar19;
      puVar11[1] = uVar22;
      *puVar11 = uVar21;
      puVar11[3] = uVar18;
      puVar11[2] = uVar17;
      puVar11 = puVar11 + 6;
      uVar7 = uVar7 - 1;
      puVar10 = puVar10 + -6;
    } while (uVar7 != 0);
  }
  return;
}

