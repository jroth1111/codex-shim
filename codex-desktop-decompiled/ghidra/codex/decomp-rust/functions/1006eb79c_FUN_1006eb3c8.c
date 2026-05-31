
/* WARNING: Possible PIC construction at 0x0001006eccb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006ebc40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006eccb4) */
/* WARNING: Removing unreachable block (ram,0x0001006eccd0) */
/* WARNING: Removing unreachable block (ram,0x0001006ecd14) */
/* WARNING: Removing unreachable block (ram,0x0001006ecdec) */
/* WARNING: Removing unreachable block (ram,0x0001006ecdf8) */
/* WARNING: Removing unreachable block (ram,0x0001006ece00) */
/* WARNING: Removing unreachable block (ram,0x0001006ece08) */
/* WARNING: Removing unreachable block (ram,0x0001006ecd20) */
/* WARNING: Removing unreachable block (ram,0x0001006ecd24) */
/* WARNING: Removing unreachable block (ram,0x0001006eccc0) */
/* WARNING: Removing unreachable block (ram,0x0001006ebc44) */
/* WARNING: Removing unreachable block (ram,0x0001006ebd30) */
/* WARNING: Removing unreachable block (ram,0x0001006ebd74) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf64) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf70) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf78) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf80) */
/* WARNING: Removing unreachable block (ram,0x0001006ebd80) */
/* WARNING: Removing unreachable block (ram,0x0001006ebd84) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf88) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf90) */
/* WARNING: Removing unreachable block (ram,0x0001006ecf98) */
/* WARNING: Removing unreachable block (ram,0x0001006ecfa0) */
/* WARNING: Removing unreachable block (ram,0x0001006ecfac) */
/* WARNING: Removing unreachable block (ram,0x0001006ed008) */
/* WARNING: Removing unreachable block (ram,0x0001006ecfbc) */
/* WARNING: Removing unreachable block (ram,0x0001006ebc50) */

long FUN_1006eb3c8(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  int extraout_w8;
  int iVar13;
  code *pcVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  int *piVar17;
  long extraout_x8_01;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  uint uVar18;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  long lVar19;
  long extraout_x10;
  undefined8 uVar20;
  long extraout_x10_00;
  long lVar21;
  long extraout_x10_01;
  long unaff_x21;
  undefined8 *puVar22;
  long unaff_x23;
  long *unaff_x24;
  long lVar23;
  long lVar24;
  long unaff_x25;
  long lVar25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar26;
  ulong *puVar27;
  undefined1 *unaff_x28;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  long lStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar29 = &stack0xfffffffffffffff0;
  puVar22 = (undefined8 *)0x8000000000000002;
  bVar2 = *(byte *)((long)param_1 + 100);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      puVar8 = (undefined8 *)FUN_107c05cc0(&UNK_10b21e798);
      if (unaff_x26[1] != 0) {
        _free();
        *(undefined1 *)((long)param_1 + 100) = 2;
        puVar8 = (undefined8 *)__Unwind_Resume(puVar8);
        FUN_105e0eaf4(&uStack_f0);
        FUN_100d99140(&lStack_150);
      }
      *(undefined1 *)((long)param_1 + 100) = 2;
      __Unwind_Resume(puVar8);
      uVar30 = 0x1006eb79c;
      auVar34 = FUN_107c05ccc();
      plVar4 = &lStack_180;
      while( true ) {
        puVar12 = auVar34._8_8_;
        plVar9 = auVar34._0_8_;
        *(undefined1 **)((long)plVar4 + -0x60) = unaff_x28;
        *(undefined8 **)((long)plVar4 + -0x58) = unaff_x27;
        *(undefined8 **)((long)plVar4 + -0x50) = unaff_x26;
        *(long *)((long)plVar4 + -0x48) = unaff_x25;
        *(long **)((long)plVar4 + -0x40) = unaff_x24;
        *(long *)((long)plVar4 + -0x38) = unaff_x23;
        *(undefined8 **)((long)plVar4 + -0x30) = puVar22;
        *(long *)((long)plVar4 + -0x28) = unaff_x21;
        *(undefined8 **)((long)plVar4 + -0x20) = puVar8;
        *(long **)((long)plVar4 + -0x18) = param_1;
        *(undefined1 **)((long)plVar4 + -0x10) = puVar29;
        *(undefined8 *)((long)plVar4 + -8) = uVar30;
        puVar22 = (undefined8 *)((long)plVar4 + -0x108);
        unaff_x23 = -0x7ffffffffffffffe;
        bVar2 = *(byte *)(puVar12 + 0xf);
        if (1 < bVar2) break;
        if (bVar2 == 0) {
          unaff_x24 = (long *)*puVar12;
          puVar12[4] = puVar12[2];
          puVar12[3] = puVar12[1];
          *(undefined8 *)((long)plVar4 + -0xe8) = 0xd0;
          *(undefined8 *)((long)plVar4 + -0x108) = 0;
          *(undefined8 *)((long)plVar4 + -0x100) = 8;
          *(undefined8 *)((long)plVar4 + -0xf8) = 0;
          *(undefined **)((long)plVar4 + -0xf0) = &UNK_108ca867b;
          *(undefined1 *)((long)plVar4 + -0xe0) = 1;
          *(undefined8 *)((long)plVar4 + -0x120) = 0;
          *(undefined8 *)((long)plVar4 + -0x118) = 1;
          *(undefined8 *)((long)plVar4 + -0x110) = 0;
          FUN_10624142c((undefined1 *)((long)plVar4 + -0x88),puVar12 + 3,0);
          thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x120),0,0x24,1,1);
          lVar7 = *(long *)((long)plVar4 + -0x118);
          lVar23 = *(long *)((long)plVar4 + -0x110);
          lVar15 = *(long *)((long)plVar4 + -0x120);
          puVar8 = (undefined8 *)(lVar7 + lVar23);
          uVar30 = *(undefined8 *)((long)plVar4 + -0x88);
          uVar31 = *(undefined8 *)((long)plVar4 + -0x70);
          uVar20 = *(undefined8 *)((long)plVar4 + -0x78);
          puVar8[1] = *(undefined8 *)((long)plVar4 + -0x80);
          *puVar8 = uVar30;
          puVar8[3] = uVar31;
          puVar8[2] = uVar20;
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)((long)plVar4 + -0x68);
          lVar19 = *(long *)((long)plVar4 + -0x108);
          if (-0x7fffffffffffffff < lVar19) goto LAB_1006eb89c;
          *(undefined8 *)((long)plVar4 + -0x1f8) = *(undefined8 *)((long)plVar4 + -0x100);
          *(undefined8 *)((long)plVar4 + -0x200) = *puVar22;
          *(undefined8 *)((long)plVar4 + -0x1e8) = *(undefined8 *)((long)plVar4 + -0xf0);
          *(undefined8 *)((long)plVar4 + -0x1f0) = *(undefined8 *)((long)plVar4 + -0xf8);
          *(undefined8 *)((long)plVar4 + -0x1d8) = *(undefined8 *)((long)plVar4 + -0xe0);
          *(undefined8 *)((long)plVar4 + -0x1e0) = *(undefined8 *)((long)plVar4 + -0xe8);
          if (lVar15 != 0) {
            _free();
          }
          goto LAB_1006eb8ec;
        }
        unaff_x21 = param_3;
        uVar30 = FUN_107c05cc0(&UNK_10b21e7f8);
        if (unaff_x26[1] != 0) {
          _free(param_3);
          *(undefined1 *)(puVar12 + 0xf) = 2;
          uVar30 = __Unwind_Resume(uVar30);
          FUN_105e0eaf4((undefined1 *)((long)plVar4 + -0x88));
          FUN_100d99140((undefined1 *)((long)plVar4 + -0x108));
        }
        *(undefined1 *)(puVar12 + 0xf) = 2;
        __Unwind_Resume(uVar30);
        auVar34 = FUN_107c05ccc();
        param_1 = auVar34._8_8_;
        puVar8 = auVar34._0_8_;
        *(undefined1 **)((long)plVar4 + -0x2d0) = unaff_x28;
        *(undefined8 **)((long)plVar4 + -0x2c8) = unaff_x27;
        *(undefined8 **)((long)plVar4 + -0x2c0) = unaff_x26;
        *(long *)((long)plVar4 + -0x2b8) = unaff_x25;
        *(long **)((long)plVar4 + -0x2b0) = unaff_x24;
        *(undefined8 *)((long)plVar4 + -0x2a8) = 0x8000000000000002;
        *(undefined8 **)((long)plVar4 + -0x2a0) = puVar22;
        *(long *)((long)plVar4 + -0x298) = param_3;
        *(undefined8 *)((long)plVar4 + -0x290) = uVar30;
        *(undefined8 **)((long)plVar4 + -0x288) = puVar12;
        *(undefined1 **)((long)plVar4 + -0x280) = (undefined1 *)((long)plVar4 + -0x10);
        *(undefined8 *)((long)plVar4 + -0x278) = 0x1006ebb58;
        puVar29 = (undefined1 *)((long)plVar4 + -0x280);
        *(undefined8 *)((long)plVar4 + -0x830) = 0;
        puVar28 = (undefined1 *)((long)plVar4 + -0x360);
        bVar2 = *(byte *)(param_1 + 0x17);
        param_3 = unaff_x21;
        if (bVar2 < 5) {
          puVar1 = (undefined1 *)((long)plVar4 + -0x778);
          if (bVar2 < 3) {
            if (bVar2 != 0) {
              if (bVar2 == 1) {
                FUN_107c05cc0(&UNK_10b21e828);
              }
              uVar30 = FUN_107c05cc4();
              if (*(long *)((long)plVar4 + -0x770) != 0) {
                _free(unaff_x24);
              }
              if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
                _free(param_1[0x13]);
              }
              if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
                _free(param_1[0x10]);
              }
              *(undefined1 *)(param_1 + 0x17) = 2;
              __Unwind_Resume(uVar30);
              auVar34 = FUN_107c05ccc();
              puVar8 = auVar34._8_8_;
              plVar9 = auVar34._0_8_;
              *(undefined1 **)((long)plVar4 + -0x890) = puVar28;
              *(undefined1 **)((long)plVar4 + -0x888) = puVar1;
              *(undefined8 **)((long)plVar4 + -0x880) = unaff_x26;
              *(long *)((long)plVar4 + -0x878) = unaff_x25;
              *(long **)((long)plVar4 + -0x870) = unaff_x24;
              *(undefined8 *)((long)plVar4 + -0x868) = 0x8000000000000002;
              *(undefined8 **)((long)plVar4 + -0x860) = puVar22;
              *(undefined8 *)((long)plVar4 + -0x858) = 0x8000000000000000;
              *(undefined8 *)((long)plVar4 + -0x850) = uVar30;
              *(long **)((long)plVar4 + -0x848) = param_1;
              *(undefined1 **)((long)plVar4 + -0x840) = puVar29;
              *(code **)((long)plVar4 + -0x838) = FUN_1006ed49c;
              *(undefined8 *)((long)plVar4 + -0x1090) = 0;
              puVar22 = (undefined8 *)((long)plVar4 + -0x8b8);
              bVar2 = *(byte *)(puVar8 + 0xf);
              if (bVar2 < 2) {
                if (bVar2 != 0) {
                  lVar7 = unaff_x21;
                  uVar30 = FUN_107c05cc0(&UNK_10b21e858);
                  if (unaff_x26[1] != 0) {
                    _free(unaff_x21);
                    *(undefined1 *)(puVar8 + 0xf) = 2;
                    uVar30 = __Unwind_Resume(uVar30);
                    FUN_105e0eaf4((undefined1 *)((long)plVar4 + -0x8b8));
                    FUN_100d99140((undefined1 *)((long)plVar4 + -0xac0));
                  }
                  *(undefined1 *)(puVar8 + 0xf) = 2;
                  __Unwind_Resume(uVar30);
                  auVar34 = FUN_107c05ccc();
                  uVar20 = auVar34._8_8_;
                  puVar12 = auVar34._0_8_;
                  *(undefined1 **)((long)plVar4 + -0x10f0) = puVar28;
                  *(undefined1 **)((long)plVar4 + -0x10e8) = puVar1;
                  *(undefined8 **)((long)plVar4 + -0x10e0) = unaff_x26;
                  *(long *)((long)plVar4 + -0x10d8) = unaff_x25;
                  *(long **)((long)plVar4 + -0x10d0) = unaff_x24;
                  *(undefined8 *)((long)plVar4 + -0x10c8) = 0x8000000000000002;
                  *(undefined8 **)((long)plVar4 + -0x10c0) = puVar22;
                  *(long *)((long)plVar4 + -0x10b8) = unaff_x21;
                  *(undefined8 *)((long)plVar4 + -0x10b0) = uVar30;
                  *(undefined8 **)((long)plVar4 + -0x10a8) = puVar8;
                  *(undefined1 **)((long)plVar4 + -0x10a0) = (undefined1 *)((long)plVar4 + -0x840);
                  *(undefined8 *)((long)plVar4 + -0x1098) = 0x1006ed898;
                  puVar8 = (undefined8 *)0x8000000000000002;
                  bVar2 = *(byte *)((long)puVar12 + 0xaa);
                  if (bVar2 < 3) {
                    if (bVar2 != 0) {
                      if (bVar2 == 1) {
                        FUN_107c05cc0(&UNK_10b21e8b8);
                      }
                      lVar23 = FUN_107c05cc4();
                      *(undefined1 *)(puVar12 + 0x15) = 0;
                      if (puVar12[8] != 0) {
                        _free(puVar12[9]);
                      }
                      *(undefined1 *)((long)puVar12 + 0xaa) = 2;
                      __Unwind_Resume(lVar23);
                      auVar34 = FUN_107c05ccc();
                      plVar9 = auVar34._8_8_;
                      puVar29 = auVar34._0_8_;
                      *(undefined1 **)((long)plVar4 + -0x1460) = puVar28;
                      *(undefined1 **)((long)plVar4 + -0x1458) = puVar1;
                      *(undefined1 **)((long)plVar4 + -0x1450) =
                           (undefined1 *)((long)plVar4 + -0x1390);
                      *(long *)((long)plVar4 + -0x1448) = unaff_x25;
                      *(undefined8 *)((long)plVar4 + -0x1440) = 0x8000000000000002;
                      *(long *)((long)plVar4 + -0x1438) = lVar23;
                      *(undefined8 **)((long)plVar4 + -0x1430) = puVar22;
                      *(long *)((long)plVar4 + -0x1428) = unaff_x21;
                      *(undefined8 *)((long)plVar4 + -0x1420) = uVar20;
                      *(undefined8 **)((long)plVar4 + -0x1418) = puVar12;
                      *(undefined1 **)((long)plVar4 + -0x1410) =
                           (undefined1 *)((long)plVar4 + -0x10a0);
                      *(undefined8 *)((long)plVar4 + -0x1408) = 0x1006ee200;
                      bVar2 = *(byte *)(plVar9 + 0x11);
                      if (bVar2 < 2) {
                        if (bVar2 != 0) {
                          lVar15 = lVar7;
                          uVar30 = FUN_107c05cc0(&UNK_10b21e8d0);
                          if (*(long *)((long)plVar4 + -5000) != 0) {
                            _free(lVar7);
                            *(undefined1 *)(plVar9 + 0x11) = 2;
                            uVar30 = __Unwind_Resume(uVar30);
                            FUN_105e0eaf4((undefined1 *)((long)plVar4 + -0x14f0));
                            FUN_100d99140((undefined1 *)((long)plVar4 + -0x1520));
                          }
                          *(undefined1 *)(plVar9 + 0x11) = 2;
                          __Unwind_Resume(uVar30);
                          auVar34 = FUN_107c05ccc();
                          puVar22 = auVar34._8_8_;
                          plVar11 = auVar34._0_8_;
                          *(undefined1 **)((long)plVar4 + -0x15b0) = puVar28;
                          *(undefined1 **)((long)plVar4 + -0x15a8) = puVar1;
                          *(undefined1 **)((long)plVar4 + -0x15a0) =
                               (undefined1 *)((long)plVar4 + -0x1390);
                          *(long *)((long)plVar4 + -0x1598) = unaff_x25;
                          *(undefined8 *)((long)plVar4 + -0x1590) = 0x8000000000000002;
                          *(long *)((long)plVar4 + -0x1588) = lVar23;
                          *(undefined8 *)((long)plVar4 + -0x1580) = 0x8000000000000002;
                          *(long *)((long)plVar4 + -0x1578) = lVar7;
                          *(undefined8 *)((long)plVar4 + -0x1570) = uVar30;
                          *(long **)((long)plVar4 + -0x1568) = plVar9;
                          *(undefined1 **)((long)plVar4 + -0x1560) =
                               (undefined1 *)((long)plVar4 + -0x1410);
                          *(undefined8 *)((long)plVar4 + -0x1558) = 0x1006ee55c;
                          bVar2 = *(byte *)(puVar22 + 0x16);
                          if (bVar2 < 2) {
                            if (bVar2 == 0) {
                              lVar23 = puVar22[0x15];
                              puVar22[3] = puVar22[1];
                              puVar22[2] = *puVar22;
                              bVar2 = *(byte *)((long)puVar22 + 0xb1);
                              puVar12 = (undefined8 *)_malloc(0x2c);
                              if (puVar12 != (undefined8 *)0x0) {
                                puVar12[1] = 0x705f74756f6c6c6f;
                                *puVar12 = 0x72205443454c4553;
                                puVar12[3] = 0x7364616572687420;
                                puVar12[2] = 0x4d4f524620687461;
                                *(undefined8 *)((long)puVar12 + 0x24) = 0x203d206469204552;
                                *(undefined8 *)((long)puVar12 + 0x1c) = 0x4548572073646165;
                                puVar8 = puVar22 + 0x12;
                                *puVar8 = 8;
                                puVar22[0xe] = 0x2c;
                                puVar22[0xf] = puVar12;
                                puVar22[0x11] = 0;
                                puVar22[0x10] = 0x2c;
                                puVar22[0x14] = 0x2c;
                                puVar22[0x13] = 0;
                                *(undefined8 *)((long)plVar4 + -0x15f8) = 0;
                                *(undefined8 *)((long)plVar4 + -0x15f0) = 1;
                                *(undefined8 *)((long)plVar4 + -0x15e8) = 0;
                                FUN_10624142c((undefined1 *)((long)plVar4 + -0x15d8),puVar22 + 2,0);
                                thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x15f8),0,0x24,1,
                                                    1);
                                lVar7 = *(long *)((long)plVar4 + -0x15e8);
                                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x15f0) + lVar7);
                                uVar30 = *(undefined8 *)((long)plVar4 + -0x15d8);
                                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x15d0);
                                *puVar12 = uVar30;
                                uVar30 = *(undefined8 *)((long)plVar4 + -0x15c8);
                                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x15c0);
                                puVar12[2] = uVar30;
                                *(undefined4 *)(puVar12 + 4) =
                                     *(undefined4 *)((long)plVar4 + -0x15b8);
                                *(undefined8 *)((long)plVar4 + -0x1658) =
                                     *(undefined8 *)((long)plVar4 + -0x15f0);
                                *(undefined8 *)((long)plVar4 + -0x1660) =
                                     *(undefined8 *)((long)plVar4 + -0x15f8);
                                *(long *)((long)plVar4 + -0x1650) = lVar7 + 0x24;
                                func_0x0001016ee410(puVar22 + 0xe,
                                                    (undefined1 *)((long)plVar4 + -0x1660));
                                if (bVar2 != 2) {
                                  if ((bVar2 & 1) == 0) goto LAB_1006ee704;
                                  *(undefined **)((long)plVar4 + -0x15f8) = &UNK_108ca9333;
                                  *(undefined8 *)((long)plVar4 + -0x15f0) = 0x11;
                                  if (puVar22[0x11] == -0x8000000000000000) {
                                    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                              (&UNK_108cd9631,0x71,&UNK_10b252958);
                                    goto LAB_1006ee9f4;
                                  }
                                  *(undefined1 **)((long)plVar4 + -0x15d8) =
                                       (undefined1 *)((long)plVar4 + -0x15f8);
                                  *(undefined **)((long)plVar4 + -0x15d0) = &DAT_100c7b3a0;
                                  iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                                                    (puVar22 + 0xe,&UNK_10b209290,s__108b1bd74,
                                                     (undefined1 *)((long)plVar4 + -0x15d8));
                                  if (iVar6 != 0) {
                                    FUN_107c05cb4(&UNK_108cd9669,0x16,
                                                  (undefined1 *)((long)plVar4 + -0x1660),
                                                  &UNK_10b235000,&UNK_10b252970);
                                    goto LAB_1006ee9f4;
                                  }
                                }
                                goto LAB_1006ee754;
                              }
                            }
                            else {
                              FUN_107c05cc0(&UNK_10b21e8e8);
                            }
                            FUN_107c03c64(1,0x2c);
LAB_1006ee9f4:
                    /* WARNING: Does not return */
                            pcVar14 = (code *)SoftwareBreakpoint(1,0x1006ee9f8);
                            (*pcVar14)();
                          }
                          if (bVar2 != 3) {
                            FUN_107c05cc4(&UNK_10b21e8e8);
LAB_1006ee704:
                            *(undefined **)((long)plVar4 + -0x15f8) = &UNK_108ca9322;
                            *(undefined8 *)((long)plVar4 + -0x15f0) = 0x11;
                            if (puVar22[0x11] == -0x8000000000000000) {
                              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                        (&UNK_108cd9631,0x71,&UNK_10b252958);
                              goto LAB_1006ee9f4;
                            }
                            *(undefined1 **)((long)plVar4 + -0x15d8) =
                                 (undefined1 *)((long)plVar4 + -0x15f8);
                            *(undefined **)((long)plVar4 + -0x15d0) = &DAT_100c7b3a0;
                            iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                                              (puVar22 + 0xe,&UNK_10b209290,s__108b1bd74,
                                               (undefined1 *)((long)plVar4 + -0x15d8));
                            if (iVar6 != 0) {
                              FUN_107c05cb4(&UNK_108cd9669,0x16,
                                            (undefined1 *)((long)plVar4 + -0x1660),&UNK_10b235000,
                                            &UNK_10b252970);
                              goto LAB_1006ee9f4;
                            }
LAB_1006ee754:
                            lVar7 = puVar22[0x11];
                            if (lVar7 == -0x8000000000000000) {
                              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                        (&UNK_108cd9631,0x71,&UNK_10b252958);
                              goto LAB_1006ee9f4;
                            }
                            puVar22[0x11] = 0x8000000000000000;
                            lVar23 = *(long *)(lVar23 + 0x30);
                            puVar22[4] = lVar7;
                            uVar30 = *puVar8;
                            puVar22[6] = puVar8[1];
                            puVar22[5] = uVar30;
                            puVar22[7] = puVar22[0xf];
                            puVar22[8] = puVar22[0x10];
                            *(undefined1 *)(puVar22 + 9) = 1;
                            puVar22[10] = lVar23 + 0x10;
                            *(undefined1 *)(puVar22 + 0xd) = 0;
                          }
                          lVar7 = FUN_1016f99e8((undefined1 *)((long)plVar4 + -0x15d8),puVar22 + 4,
                                                lVar15);
                          lVar23 = *(long *)((long)plVar4 + -0x15d8);
                          if (lVar23 == -0x7fffffffffffffeb) {
                            *plVar11 = -0x7ffffffffffffffe;
                            uVar5 = 3;
                          }
                          else {
                            *(undefined8 *)((long)plVar4 + -0x1638) =
                                 *(undefined8 *)((long)plVar4 + -0x15c0);
                            *(undefined8 *)((long)plVar4 + -0x1640) =
                                 *(undefined8 *)((long)plVar4 + -0x15c8);
                            lVar19 = *(long *)((long)plVar4 + -0x15d0);
                            *(undefined8 *)((long)plVar4 + -0x1630) =
                                 *(undefined8 *)((long)plVar4 + -0x15b8);
                            if (*(char *)(puVar22 + 0xd) == '\x03') {
                              lVar15 = puVar22[0xb];
                              puVar8 = (undefined8 *)puVar22[0xc];
                              pcVar14 = (code *)*puVar8;
                              if (pcVar14 != (code *)0x0) {
                                lVar7 = (*pcVar14)(lVar15);
                              }
                              if (puVar8[1] != 0) {
                                lVar7 = _free(lVar15);
                              }
                            }
                            else if (*(char *)(puVar22 + 0xd) == '\0') {
                              lVar7 = FUN_100d99140(puVar22 + 4);
                            }
                            if (lVar23 == -0x7fffffffffffffec) {
                              if (lVar19 != 0) {
                                *(long *)((long)plVar4 + -0x15f8) = lVar19;
                                *(undefined8 *)((long)plVar4 + -0x15e8) =
                                     *(undefined8 *)((long)plVar4 + -0x1638);
                                *(undefined8 *)((long)plVar4 + -0x15f0) =
                                     *(undefined8 *)((long)plVar4 + -0x1640);
                                *(undefined8 *)((long)plVar4 + -0x15e0) =
                                     *(undefined8 *)((long)plVar4 + -0x1630);
                                FUN_1016ee770((undefined1 *)((long)plVar4 + -0x15d8),
                                              (undefined1 *)((long)plVar4 + -0x15f8),&UNK_108ca9344,
                                              0xc);
                                if (*(long *)((long)plVar4 + -0x15d8) == -0x7fffffffffffffec) {
                                  lVar19 = *(long *)((long)plVar4 + -0x15d0);
                                  lVar15 = *(long *)((long)plVar4 + -0x15c8);
                                  lVar23 = *(long *)((long)plVar4 + -0x15c0);
                                }
                                else {
                                  FUN_100de5844((undefined1 *)((long)plVar4 + -0x15d8));
                                  lVar19 = -0x8000000000000000;
                                }
                                lVar7 = FUN_100ded7a4((undefined1 *)((long)plVar4 + -0x15f8));
                                if (lVar19 != -0x8000000000000000) goto LAB_1006ee8bc;
                              }
                              lVar19 = -0x8000000000000000;
                            }
                            else {
                              *(long *)((long)plVar4 + -0x1620) = lVar23;
                              *(long *)((long)plVar4 + -0x1618) = lVar19;
                              *(undefined8 *)((long)plVar4 + -0x1608) =
                                   *(undefined8 *)((long)plVar4 + -0x1638);
                              *(undefined8 *)((long)plVar4 + -0x1610) =
                                   *(undefined8 *)((long)plVar4 + -0x1640);
                              *(undefined8 *)((long)plVar4 + -0x1600) =
                                   *(undefined8 *)((long)plVar4 + -0x1630);
                              lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x1620));
                              lVar19 = -0x7fffffffffffffff;
                              lVar15 = lVar7;
                            }
LAB_1006ee8bc:
                            if (puVar22[0xe] != 0) {
                              lVar7 = _free(puVar22[0xf]);
                            }
                            lVar25 = puVar22[0x11];
                            if (lVar25 != -0x8000000000000000) {
                              lVar21 = puVar22[0x12];
                              lVar24 = puVar22[0x13];
                              if (lVar24 != 0) {
                                puVar27 = (ulong *)(lVar21 + 8);
                                do {
                                  if ((((int)puVar27[-1] == 1) || ((int)puVar27[-1] == 2)) &&
                                     ((*puVar27 & 0x7fffffffffffffff) != 0)) {
                                    lVar7 = _free(puVar27[1]);
                                  }
                                  puVar27 = puVar27 + 4;
                                  lVar24 = lVar24 + -1;
                                } while (lVar24 != 0);
                              }
                              if (lVar25 != 0) {
                                lVar7 = _free(lVar21);
                              }
                            }
                            *plVar11 = lVar19;
                            plVar11[1] = lVar15;
                            uVar5 = 1;
                            plVar11[2] = lVar23;
                          }
                          *(undefined1 *)(puVar22 + 0x16) = uVar5;
                          return lVar7;
                        }
                        plVar9[6] = plVar9[4];
                        plVar9[5] = plVar9[3];
                        lVar23 = *plVar9;
                        lVar15 = plVar9[1];
                        lVar19 = plVar9[2];
                        *(undefined **)((long)plVar4 + -0x14d8) = &UNK_108ca92c7;
                        *(undefined8 *)((long)plVar4 + -0x14d0) = 0x2f;
                        *(undefined8 *)((long)plVar4 + -0x14f0) = 0;
                        *(undefined8 *)((long)plVar4 + -0x14e8) = 8;
                        *(undefined8 *)((long)plVar4 + -0x14e0) = 0;
                        *(undefined1 *)((long)plVar4 + -0x14c8) = 1;
                        *(undefined8 *)((long)plVar4 + -0x1478) = 0x8000000000000000;
                        *(long *)((long)plVar4 + -0x1470) = lVar15;
                        *(long *)((long)plVar4 + -0x1468) = lVar19;
                        *(undefined4 *)((long)plVar4 + -0x1480) = 1;
                        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                                  ((undefined1 *)((long)plVar4 + -0x14f0));
                        puVar22 = *(undefined8 **)((long)plVar4 + -0x14e8);
                        uVar31 = *(undefined8 *)((long)plVar4 + -0x1480);
                        uVar20 = *(undefined8 *)((long)plVar4 + -0x1468);
                        uVar30 = *(undefined8 *)((long)plVar4 + -0x1470);
                        puVar22[1] = *(undefined8 *)((long)plVar4 + -0x1478);
                        *puVar22 = uVar31;
                        puVar22[3] = uVar20;
                        puVar22[2] = uVar30;
                        *(undefined8 *)((long)plVar4 + -0x14e0) = 1;
                        *(undefined8 *)((long)plVar4 + -0x1508) =
                             *(undefined8 *)((long)plVar4 + -0x14d8);
                        *(undefined8 *)((long)plVar4 + -0x1510) =
                             *(undefined8 *)((long)plVar4 + -0x14e0);
                        *(undefined8 *)((long)plVar4 + -0x14f8) =
                             *(undefined8 *)((long)plVar4 + -0x14c8);
                        *(undefined8 *)((long)plVar4 + -0x1500) =
                             *(undefined8 *)((long)plVar4 + -0x14d0);
                        *(undefined8 *)((long)plVar4 + -0x1518) =
                             *(undefined8 *)((long)plVar4 + -0x14e8);
                        *(undefined8 *)((long)plVar4 + -0x1520) =
                             *(undefined8 *)((long)plVar4 + -0x14f0);
                        *(undefined8 *)((long)plVar4 + -0x1480) = 0;
                        *(undefined8 *)((long)plVar4 + -0x1478) = 1;
                        *(undefined8 *)((long)plVar4 + -0x1470) = 0;
                        FUN_10624142c((undefined1 *)((long)plVar4 + -0x14f0),plVar9 + 5,0);
                        thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x1480),0,0x24,1,1);
                        lVar15 = *(long *)((long)plVar4 + -0x1478);
                        lVar19 = *(long *)((long)plVar4 + -0x1470);
                        lVar25 = *(long *)((long)plVar4 + -0x1480);
                        puVar22 = (undefined8 *)(lVar15 + lVar19);
                        uVar30 = *(undefined8 *)((long)plVar4 + -0x14f0);
                        puVar22[1] = *(undefined8 *)((long)plVar4 + -0x14e8);
                        *puVar22 = uVar30;
                        uVar30 = *(undefined8 *)((long)plVar4 + -0x14e0);
                        puVar22[3] = *(undefined8 *)((long)plVar4 + -0x14d8);
                        puVar22[2] = uVar30;
                        *(undefined4 *)(puVar22 + 4) = *(undefined4 *)((long)plVar4 + -0x14d0);
                        lVar21 = *(long *)((long)plVar4 + -0x1520);
                        if (-0x7fffffffffffffff < lVar21) goto LAB_1006ee344;
                        *(undefined8 *)((long)plVar4 + -0x1548) =
                             *(undefined8 *)((long)plVar4 + -0x1518);
                        *(undefined8 *)((long)plVar4 + -0x1550) =
                             *(undefined8 *)((long)plVar4 + -0x1520);
                        *(undefined8 *)((long)plVar4 + -0x1538) =
                             *(undefined8 *)((long)plVar4 + -0x1508);
                        *(undefined8 *)((long)plVar4 + -0x1540) =
                             *(undefined8 *)((long)plVar4 + -0x1510);
                        *(undefined8 *)((long)plVar4 + -0x1528) =
                             *(undefined8 *)((long)plVar4 + -0x14f8);
                        *(undefined8 *)((long)plVar4 + -0x1530) =
                             *(undefined8 *)((long)plVar4 + -0x1500);
                        if (lVar25 != 0) {
                          _free();
                        }
                      }
                      else {
                        if (bVar2 == 3) goto LAB_1006ee3c0;
                        lVar15 = FUN_107c05cc4(&UNK_10b21e8d0);
                        lVar25 = extraout_x8_01;
                        lVar19 = extraout_x9_01;
                        lVar21 = extraout_x10_01;
LAB_1006ee344:
                        lVar24 = *(long *)((long)plVar4 + -0x1510);
                        *(long *)((long)plVar4 + -0x14e8) = lVar25;
                        *(long *)((long)plVar4 + -0x14e0) = lVar15;
                        *(long *)((long)plVar4 + -0x14d8) = lVar19 + 0x24;
                        *(undefined4 *)((long)plVar4 + -0x14f0) = 1;
                        if (lVar24 == lVar21) {
                          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                                    ((undefined1 *)((long)plVar4 + -0x1520));
                        }
                        puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x1518) + lVar24 * 0x20);
                        uVar30 = *(undefined8 *)((long)plVar4 + -0x14e0);
                        puVar22[3] = *(undefined8 *)((long)plVar4 + -0x14d8);
                        puVar22[2] = uVar30;
                        uVar30 = *(undefined8 *)((long)plVar4 + -0x14f0);
                        puVar22[1] = *(undefined8 *)((long)plVar4 + -0x14e8);
                        *puVar22 = uVar30;
                        *(long *)((long)plVar4 + -0x1510) = lVar24 + 1;
                        *(undefined8 *)((long)plVar4 + -0x1548) =
                             *(undefined8 *)((long)plVar4 + -0x1518);
                        *(undefined8 *)((long)plVar4 + -0x1550) =
                             *(undefined8 *)((long)plVar4 + -0x1520);
                        *(undefined8 *)((long)plVar4 + -0x1538) =
                             *(undefined8 *)((long)plVar4 + -0x1508);
                        *(undefined8 *)((long)plVar4 + -0x1540) =
                             *(undefined8 *)((long)plVar4 + -0x1510);
                        *(undefined8 *)((long)plVar4 + -0x1528) =
                             *(undefined8 *)((long)plVar4 + -0x14f8);
                        *(undefined8 *)((long)plVar4 + -0x1530) =
                             *(undefined8 *)((long)plVar4 + -0x1500);
                      }
                      lVar23 = *(long *)(lVar23 + 0x30);
                      lVar15 = *(long *)((long)plVar4 + -0x1550);
                      lVar25 = *(long *)((long)plVar4 + -0x1538);
                      lVar19 = *(long *)((long)plVar4 + -0x1540);
                      plVar9[8] = *(long *)((long)plVar4 + -0x1548);
                      plVar9[7] = lVar15;
                      plVar9[10] = lVar25;
                      plVar9[9] = lVar19;
                      lVar15 = *(long *)((long)plVar4 + -0x1530);
                      plVar9[0xc] = *(long *)((long)plVar4 + -0x1528);
                      plVar9[0xb] = lVar15;
                      plVar9[0xd] = lVar23 + 0x10;
                      *(undefined1 *)(plVar9 + 0x10) = 0;
LAB_1006ee3c0:
                      lVar7 = FUN_1016f9b88((undefined1 *)((long)plVar4 + -0x14f0),plVar9 + 7,lVar7)
                      ;
                      lVar23 = *(long *)((long)plVar4 + -0x14f0);
                      if (lVar23 == -0x7fffffffffffffeb) {
                        *puVar29 = 2;
                        uVar5 = 3;
                      }
                      else {
                        lVar15 = *(long *)((long)plVar4 + -0x14e8);
                        uVar30 = *(undefined8 *)((long)plVar4 + -0x14e0);
                        *(undefined8 *)((long)plVar4 + -0x14b8) =
                             *(undefined8 *)((long)plVar4 + -0x14d0);
                        *(undefined8 *)((long)plVar4 + -0x14c0) =
                             *(undefined8 *)((long)plVar4 + -0x14d8);
                        if ((char)plVar9[0x10] == '\x03') {
                          lVar19 = plVar9[0xe];
                          puVar22 = (undefined8 *)plVar9[0xf];
                          pcVar14 = (code *)*puVar22;
                          if (pcVar14 != (code *)0x0) {
                            lVar7 = (*pcVar14)(lVar19);
                          }
                          if (puVar22[1] != 0) {
                            lVar7 = _free(lVar19);
                          }
                        }
                        else if ((char)plVar9[0x10] == '\0') {
                          lVar7 = FUN_100d99140(plVar9 + 7);
                        }
                        if (lVar23 != -0x7fffffffffffffec) {
                          *(undefined8 *)((long)plVar4 + -0x1488) =
                               *(undefined8 *)((long)plVar4 + -0x14b8);
                          *(undefined8 *)((long)plVar4 + -0x1490) =
                               *(undefined8 *)((long)plVar4 + -0x14c0);
                          *(long *)((long)plVar4 + -0x14a8) = lVar23;
                          *(long *)((long)plVar4 + -0x14a0) = lVar15;
                          *(undefined8 *)((long)plVar4 + -0x1498) = uVar30;
                          lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x14a8));
                          uVar5 = extraout_w9;
                        }
                        else {
                          uVar5 = lVar15 != 0;
                        }
                        *puVar29 = lVar23 != -0x7fffffffffffffec;
                        puVar29[1] = uVar5;
                        uVar5 = 1;
                        *(long *)(puVar29 + 8) = lVar7;
                      }
                      *(undefined1 *)(plVar9 + 0x11) = uVar5;
                      return lVar7;
                    }
                    *(undefined2 *)(puVar12 + 0x15) = 0;
                    lVar7 = puVar12[0x14];
                    puVar12[5] = puVar12[1];
                    puVar12[4] = *puVar12;
                    if (puVar12[2] == 0) goto LAB_1006edfec;
                    puVar12[6] = puVar12[2];
                    puVar12[7] = puVar12[3];
                    if (puVar12[3] == 0) goto LAB_1006edfec;
                    *(undefined8 *)((long)plVar4 + -0x11e0) = 0;
                    *(undefined8 *)((long)plVar4 + -0x11d8) = 1;
                    *(undefined8 *)((long)plVar4 + -0x11d0) = 0;
                    FUN_10624142c((undefined1 *)((long)plVar4 + -0x13f8),puVar12 + 4,0);
                    thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x11e0),0,0x24,1,1);
                    lVar23 = *(long *)((long)plVar4 + -0x11d0);
                    puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x11d8) + lVar23);
                    uVar30 = *(undefined8 *)((long)plVar4 + -0x13f8);
                    puVar22[1] = *(undefined8 *)((long)plVar4 + -0x13f0);
                    *puVar22 = uVar30;
                    uVar30 = *(undefined8 *)((long)plVar4 + -0x13e8);
                    puVar22[3] = *(undefined8 *)((long)plVar4 + -0x13e0);
                    puVar22[2] = uVar30;
                    *(undefined4 *)(puVar22 + 4) = *(undefined4 *)((long)plVar4 + -0x13d8);
                    lVar23 = lVar23 + 0x24;
                    *(long *)((long)plVar4 + -0x11d0) = lVar23;
                    uVar30 = *(undefined8 *)((long)plVar4 + -0x11e0);
                    puVar12[9] = *(undefined8 *)((long)plVar4 + -0x11d8);
                    puVar12[8] = uVar30;
                    puVar12[10] = lVar23;
                    puVar12[0x16] = *(long *)(lVar7 + 0x30) + 0x10;
                    *(undefined1 *)(puVar12 + 0x17) = 0;
                  }
                  else if (bVar2 != 3) {
                    if (bVar2 == 4) goto LAB_1006edaa8;
                    goto LAB_1006edec4;
                  }
                  FUN_1016f0980((undefined1 *)((long)plVar4 + -0x13f8),puVar12 + 0x16,uVar20);
                  iVar6 = *(int *)((long)plVar4 + -0x13f8);
                  if (iVar6 == 6) {
                    uVar5 = 3;
                    goto LAB_1006edf1c;
                  }
                  *(undefined8 *)((long)plVar4 + -5000) = *(undefined8 *)((long)plVar4 + -0x13ec);
                  *(undefined8 *)((long)plVar4 + -0x1390) = *(undefined8 *)((long)plVar4 + -0x13f4);
                  *(undefined8 *)((long)plVar4 + -0x1378) = *(undefined8 *)((long)plVar4 + -0x13dc);
                  *(undefined8 *)((long)plVar4 + -0x1380) = *(undefined8 *)((long)plVar4 + -0x13e4);
                  *(undefined8 *)((long)plVar4 + -0x136c) = *(undefined8 *)((long)plVar4 + -0x13d0);
                  *(undefined8 *)((long)plVar4 + -0x1374) = *(undefined8 *)((long)plVar4 + -0x13d8);
                  *(undefined8 *)((long)plVar4 + -0x13a8) = *(undefined8 *)((long)plVar4 + -0x13c0);
                  *(undefined8 *)((long)plVar4 + -0x13b0) = *(undefined8 *)((long)plVar4 + -0x13c8);
                  *(undefined8 *)((long)plVar4 + -0x13a0) = *(undefined8 *)((long)plVar4 + -0x13b8);
                  FUN_100cd638c(puVar12 + 0x16);
                  if (iVar6 != 5) {
                    uVar30 = *(undefined8 *)((long)plVar4 + -0x1390);
                    uVar32 = *(undefined8 *)((long)plVar4 + -0x1378);
                    uVar31 = *(undefined8 *)((long)plVar4 + -0x1380);
                    *(undefined8 *)((long)puVar12 + 100) = *(undefined8 *)((long)plVar4 + -5000);
                    *(undefined8 *)((long)puVar12 + 0x5c) = uVar30;
                    *(undefined1 *)(puVar12 + 0x15) = 1;
                    *(int *)(puVar12 + 0xb) = iVar6;
                    *(undefined8 *)((long)puVar12 + 0x74) = uVar32;
                    *(undefined8 *)((long)puVar12 + 0x6c) = uVar31;
                    uVar30 = *(undefined8 *)((long)plVar4 + -0x1374);
                    puVar12[0x10] = *(undefined8 *)((long)plVar4 + -0x136c);
                    puVar12[0xf] = uVar30;
                    uVar30 = *(undefined8 *)((long)plVar4 + -0x13b0);
                    puVar12[0x12] = *(undefined8 *)((long)plVar4 + -0x13a8);
                    puVar12[0x11] = uVar30;
                    puVar12[0x13] = *(undefined8 *)((long)plVar4 + -0x13a0);
                    lVar7 = puVar12[6];
                    lVar23 = lVar7 + puVar12[7] * 0x98;
                    puVar12[0x16] = lVar7;
                    puVar12[0x17] = lVar23;
                    puVar12[0x18] = 0;
                    goto LAB_1006edb30;
                  }
                  *(undefined8 *)((long)plVar4 + -0x1358) = *(undefined8 *)((long)plVar4 + -0x1384);
                  *(undefined8 *)((long)plVar4 + -0x1360) = *(undefined8 *)((long)plVar4 + -0x138c);
                  *(undefined8 *)((long)plVar4 + -0x1348) = *(undefined8 *)((long)plVar4 + -0x1374);
                  *(undefined8 *)((long)plVar4 + -0x1350) = *(undefined8 *)((long)plVar4 + -0x137c);
                  *(undefined8 *)((long)plVar4 + -0x1340) = *(undefined8 *)((long)plVar4 + -0x136c);
                  thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x1360));
                  goto LAB_1006edfd8;
                }
                unaff_x24 = (long *)*puVar8;
                puVar8[4] = puVar8[2];
                puVar8[3] = puVar8[1];
                *(undefined8 *)((long)plVar4 + -0xaa0) = 0x29d;
                *(undefined8 *)((long)plVar4 + -0xac0) = 0;
                *(undefined8 *)((long)plVar4 + -0xab8) = 8;
                *(undefined **)((long)plVar4 + -0xaa8) = &UNK_108ca8e95;
                *(undefined8 *)((long)plVar4 + -0xab0) = 0;
                *(undefined1 *)((long)plVar4 + -0xa98) = 1;
                *(undefined8 *)((long)plVar4 + -0xcb8) = 0;
                *(undefined8 *)((long)plVar4 + -0xcb0) = 1;
                *(undefined8 *)((long)plVar4 + -0xca8) = 0;
                FUN_10624142c((undefined1 *)((long)plVar4 + -0x8b8),puVar8 + 3,0);
                thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0xcb8),0,0x24,1,1);
                lVar23 = *(long *)((long)plVar4 + -0xca8);
                lVar19 = *(long *)((long)plVar4 + -0xcb0);
                lVar7 = *(long *)((long)plVar4 + -0xcb8);
                puVar12 = (undefined8 *)(lVar19 + lVar23);
                uVar30 = *puVar22;
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x8b0);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x8a8);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x8a0);
                puVar12[2] = uVar30;
                *(undefined4 *)(puVar12 + 4) = *(undefined4 *)((long)plVar4 + -0x898);
                lVar15 = *(long *)((long)plVar4 + -0xac0);
                if (-0x7fffffffffffffff < lVar15) goto LAB_1006ed5bc;
                *(undefined8 *)((long)plVar4 + -0xc98) = *(undefined8 *)((long)plVar4 + -0xab8);
                *(undefined8 *)((long)plVar4 + -0xca0) = *(undefined8 *)((long)plVar4 + -0xac0);
                *(undefined8 *)((long)plVar4 + -0xc88) = *(undefined8 *)((long)plVar4 + -0xaa8);
                *(undefined8 *)((long)plVar4 + -0xc90) = *(undefined8 *)((long)plVar4 + -0xab0);
                *(undefined8 *)((long)plVar4 + -0xc78) = *(undefined8 *)((long)plVar4 + -0xa98);
                *(undefined8 *)((long)plVar4 + -0xc80) = *(undefined8 *)((long)plVar4 + -0xaa0);
                if (lVar7 != 0) {
                  _free();
                }
              }
              else {
                if (bVar2 == 3) goto LAB_1006ed644;
                lVar19 = FUN_107c05cc4(&UNK_10b21e858);
                lVar7 = extraout_x8_00;
                lVar23 = extraout_x9_00;
                lVar15 = extraout_x10_00;
LAB_1006ed5bc:
                lVar25 = *(long *)((long)plVar4 + -0xab0);
                *(long *)((long)plVar4 + -0x8b0) = lVar7;
                *(long *)((long)plVar4 + -0x8a8) = lVar19;
                *(long *)((long)plVar4 + -0x8a0) = lVar23 + 0x24;
                *(undefined4 *)((long)plVar4 + -0x8b8) = 1;
                if (lVar25 == lVar15) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0xac0));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0xab8) + lVar25 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x8a8);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x8a0);
                puVar12[2] = uVar30;
                uVar30 = *puVar22;
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x8b0);
                *puVar12 = uVar30;
                *(long *)((long)plVar4 + -0xab0) = lVar25 + 1;
                *(undefined8 *)((long)plVar4 + -0xc98) = *(undefined8 *)((long)plVar4 + -0xab8);
                *(undefined8 *)((long)plVar4 + -0xca0) = *(undefined8 *)((long)plVar4 + -0xac0);
                *(undefined8 *)((long)plVar4 + -0xc88) = *(undefined8 *)((long)plVar4 + -0xaa8);
                *(undefined8 *)((long)plVar4 + -0xc90) = *(undefined8 *)((long)plVar4 + -0xab0);
                *(undefined8 *)((long)plVar4 + -0xc78) = *(undefined8 *)((long)plVar4 + -0xa98);
                *(undefined8 *)((long)plVar4 + -0xc80) = *(undefined8 *)((long)plVar4 + -0xaa0);
              }
              lVar7 = unaff_x24[6];
              uVar30 = *(undefined8 *)((long)plVar4 + -0xca0);
              uVar31 = *(undefined8 *)((long)plVar4 + -0xc88);
              uVar20 = *(undefined8 *)((long)plVar4 + -0xc90);
              *(undefined8 *)((long)plVar4 + -0x1048) = *(undefined8 *)((long)plVar4 + -0xc98);
              *(undefined8 *)((long)plVar4 + -0x1050) = uVar30;
              *(undefined8 *)((long)plVar4 + -0x1038) = uVar31;
              *(undefined8 *)((long)plVar4 + -0x1040) = uVar20;
              uVar26 = *(undefined8 *)((long)plVar4 + -0xc78);
              uVar32 = *(undefined8 *)((long)plVar4 + -0xc80);
              *(undefined8 *)((long)plVar4 + -0x1028) = uVar26;
              *(undefined8 *)((long)plVar4 + -0x1030) = uVar32;
              puVar8[6] = *(undefined8 *)((long)plVar4 + -0xc98);
              puVar8[5] = uVar30;
              puVar8[8] = uVar31;
              puVar8[7] = uVar20;
              puVar8[10] = uVar26;
              puVar8[9] = uVar32;
              puVar8[0xb] = lVar7 + 0x10;
              *(undefined1 *)(puVar8 + 0xe) = 0;
LAB_1006ed644:
              lVar7 = FUN_1016f99e8((undefined1 *)((long)plVar4 + -0xac0),puVar8 + 5,unaff_x21);
              lVar23 = *(long *)((long)plVar4 + -0xac0);
              if (lVar23 == -0x7fffffffffffffeb) {
                *plVar9 = -0x7ffffffffffffffe;
                uVar5 = 3;
              }
              else {
                lVar7 = *(long *)((long)plVar4 + -0xab8);
                *(undefined8 *)((long)plVar4 + -0x1088) = *(undefined8 *)((long)plVar4 + -0xaa8);
                *(undefined8 *)((long)plVar4 + -0x1090) = *(undefined8 *)((long)plVar4 + -0xab0);
                *(undefined8 *)((long)plVar4 + -0x1080) = *(undefined8 *)((long)plVar4 + -0xaa0);
                if (*(char *)(puVar8 + 0xe) == '\x03') {
                  unaff_x21 = puVar8[0xc];
                  puVar22 = (undefined8 *)puVar8[0xd];
                  pcVar14 = (code *)*puVar22;
                  if (pcVar14 != (code *)0x0) {
                    (*pcVar14)(unaff_x21);
                  }
                  if (puVar22[1] != 0) {
                    _free(unaff_x21);
                  }
                }
                else if (*(char *)(puVar8 + 0xe) == '\0') {
                  FUN_100d99140(puVar8 + 5);
                }
                if (lVar23 == -0x7fffffffffffffec) {
                  if (lVar7 == 0) {
                    lVar7 = -0x8000000000000000;
                  }
                  else {
                    *(undefined8 *)((long)plVar4 + -0x8a8) = *(undefined8 *)((long)plVar4 + -0x1088)
                    ;
                    *(undefined8 *)((long)plVar4 + -0x8b0) = *(undefined8 *)((long)plVar4 + -0x1090)
                    ;
                    *(long *)((long)plVar4 + -0x8b8) = lVar7;
                    *(undefined8 *)((long)plVar4 + -0x8a0) = *(undefined8 *)((long)plVar4 + -0x1080)
                    ;
                    __ZN11codex_state5model15thread_metadata9ThreadRow12try_from_row17h121796e462150712E
                              ((undefined1 *)((long)plVar4 + -0xac0),
                               (undefined1 *)((long)plVar4 + -0x8b8));
                    if (*(long *)((long)plVar4 + -0xac0) == 2) {
                      *(undefined8 *)((long)plVar4 + -0xc98) =
                           *(undefined8 *)((long)plVar4 + -0xab8);
                      *(undefined8 *)((long)plVar4 + -0xca0) = 0x8000000000000000;
                    }
                    else {
                      __ZN148__LT_codex_state__model__thread_metadata__ThreadMetadata_u20_as_u20_core__convert__TryFrom_LT_codex_state__model__thread_metadata__ThreadRow_GT__GT_8try_from17h4b797c61a56dda71E
                                ((undefined1 *)((long)plVar4 + -0xca0),
                                 (undefined1 *)((long)plVar4 + -0xac0));
                    }
                    FUN_100ded7a4((undefined1 *)((long)plVar4 + -0x8b8));
                    lVar23 = *(long *)((long)plVar4 + -0xca0);
                    unaff_x21 = *(long *)((long)plVar4 + -0xc98);
                    _memcpy((undefined1 *)((long)plVar4 + -0x1050),
                            (undefined1 *)((long)plVar4 + -0xc90),0x1c8);
                    lVar7 = -0x8000000000000000;
                    if (lVar23 != -0x7fffffffffffffff) {
                      if (lVar23 == -0x8000000000000000) {
                        lVar7 = -0x7fffffffffffffff;
                      }
                      else {
                        _memcpy((undefined1 *)((long)plVar4 + -0xe80),
                                (undefined1 *)((long)plVar4 + -0x1050),0x1c8);
                        lVar7 = lVar23;
                      }
                    }
                  }
                }
                else {
                  *(long *)((long)plVar4 + -0x1078) = lVar23;
                  *(long *)((long)plVar4 + -0x1070) = lVar7;
                  *(undefined8 *)((long)plVar4 + -0x1060) = *(undefined8 *)((long)plVar4 + -0x1088);
                  *(undefined8 *)((long)plVar4 + -0x1068) = *(undefined8 *)((long)plVar4 + -0x1090);
                  *(undefined8 *)((long)plVar4 + -0x1058) = *(undefined8 *)((long)plVar4 + -0x1080);
                  unaff_x21 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x1078));
                  lVar7 = -0x7fffffffffffffff;
                }
                *plVar9 = lVar7;
                plVar9[1] = unaff_x21;
                lVar7 = _memcpy(plVar9 + 2,(undefined1 *)((long)plVar4 + -0xe80),0x1c8);
                uVar5 = 1;
              }
              *(undefined1 *)(puVar8 + 0xf) = uVar5;
              return lVar7;
            }
            param_1[0xc] = param_1[9];
            param_1[0xe] = param_1[0xb];
            param_1[0xd] = param_1[10];
            lVar7 = *param_1;
            unaff_x23 = param_1[1];
            bVar2 = *(byte *)(param_1 + 8);
            puVar22 = (undefined8 *)(ulong)bVar2;
            param_1[0x10] = param_1[3];
            param_1[0xf] = param_1[2];
            unaff_x25 = param_1[4];
            param_1[0x11] = unaff_x25;
            param_1[0x13] = param_1[6];
            param_1[0x12] = param_1[5];
            lVar23 = param_1[0xf];
            unaff_x27 = (undefined8 *)param_1[0x10];
            unaff_x26 = (undefined8 *)0x0;
            if (lVar23 != -0x8000000000000000) {
              unaff_x26 = unaff_x27;
            }
            lVar15 = 0;
            if (param_1[0x12] != -0x8000000000000000) {
              lVar15 = param_1[0x13];
            }
            param_1[0x14] = param_1[7];
            param_1[0x15] = lVar15;
            param_1[0x16] = param_1[7];
            __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E
                      ((undefined1 *)((long)plVar4 + -0x360));
            iVar6 = (int)*(uint *)((long)plVar4 + -0x360) >> 0xd;
            iVar13 = iVar6 + -1;
            if (iVar6 < 1) {
              iVar6 = (1U - iVar6) / 400 + 1;
              iVar13 = iVar13 + iVar6 * 400;
              iVar6 = iVar6 * -0x23ab1;
            }
            else {
              iVar6 = 0;
            }
            *(ulong *)((long)plVar4 + -0x828) =
                 ((ulong)*(uint *)((long)plVar4 + -0x35c) +
                 (long)(int)((((*(uint *)((long)plVar4 + -0x360) >> 4 & 0x1ff) + iVar6) -
                             iVar13 / 100) + (iVar13 * 0x5b5 >> 2) + (iVar13 / 100 >> 2) + -0xaf93b)
                 * 0x15180) * 1000 + (ulong)*(uint *)((long)plVar4 + -0x358) / 1000000;
            if (bVar2 == 6) {
              if (lVar7 != 2) {
                *(undefined8 *)((long)plVar4 + -0x340) = 0x12a;
                *(undefined8 *)((long)plVar4 + -0x360) = 0;
                *(undefined8 *)((long)plVar4 + -0x358) = 8;
                *(undefined8 *)((long)plVar4 + -0x350) = 0;
                *(undefined **)((long)plVar4 + -0x348) = &UNK_108ca8808;
                *(undefined1 *)((long)plVar4 + -0x338) = 1;
                func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x490),
                                    (undefined1 *)((long)plVar4 + -0x360),unaff_x26,unaff_x25);
                FUN_1016fa3f0((undefined1 *)((long)plVar4 + -0x4c0),
                              (undefined1 *)((long)plVar4 + -0x490),lVar7,unaff_x23);
                FUN_1016fa3f0((undefined1 *)((long)plVar4 + -0x4f0),
                              (undefined1 *)((long)plVar4 + -0x4c0),lVar7,unaff_x23);
                FUN_1016fa3f0((undefined1 *)((long)plVar4 + -0x520),
                              (undefined1 *)((long)plVar4 + -0x4f0),lVar7,unaff_x23);
                puVar22 = (undefined8 *)0x8000000000000002;
                if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x520)) {
                  lVar7 = *(long *)((long)plVar4 + -0x510);
                  *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                  *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8150;
                  *(undefined8 *)((long)plVar4 + -0x348) = 0xe;
                  *(undefined4 *)((long)plVar4 + -0x360) = 1;
                  if (lVar7 == *(long *)((long)plVar4 + -0x520)) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                              ((undefined1 *)((long)plVar4 + -0x520));
                  }
                  puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x518) + lVar7 * 0x20);
                  uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                  puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                  *puVar12 = uVar30;
                  uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                  puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                  puVar12[2] = uVar30;
                  *(long *)((long)plVar4 + -0x510) = lVar7 + 1;
                }
                *(undefined8 *)((long)plVar4 + -0x548) = *(undefined8 *)((long)plVar4 + -0x518);
                *(undefined8 *)((long)plVar4 + -0x550) = *(undefined8 *)((long)plVar4 + -0x520);
                *(undefined8 *)((long)plVar4 + -0x538) = *(undefined8 *)((long)plVar4 + -0x508);
                *(undefined8 *)((long)plVar4 + -0x540) = *(undefined8 *)((long)plVar4 + -0x510);
                *(undefined8 *)((long)plVar4 + -0x528) = *(undefined8 *)((long)plVar4 + -0x4f8);
                *(undefined8 *)((long)plVar4 + -0x530) = *(undefined8 *)((long)plVar4 + -0x500);
                if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x550)) {
                  lVar7 = *(long *)((long)plVar4 + -0x540);
                  *(undefined8 *)((long)plVar4 + -0x358) = *(undefined8 *)((long)plVar4 + -0x828);
                  *(undefined4 *)((long)plVar4 + -0x360) = 5;
                  if (lVar7 == *(long *)((long)plVar4 + -0x550)) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                              ((undefined1 *)((long)plVar4 + -0x550));
                  }
                  puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x548) + lVar7 * 0x20);
                  uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                  puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                  *puVar12 = uVar30;
                  uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                  puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                  puVar12[2] = uVar30;
                  *(long *)((long)plVar4 + -0x540) = lVar7 + 1;
                }
                *(undefined8 *)((long)plVar4 + -0x578) = *(undefined8 *)((long)plVar4 + -0x548);
                *(undefined8 *)((long)plVar4 + -0x580) = *(undefined8 *)((long)plVar4 + -0x550);
                *(undefined8 *)((long)plVar4 + -0x568) = *(undefined8 *)((long)plVar4 + -0x538);
                *(undefined8 *)((long)plVar4 + -0x570) = *(undefined8 *)((long)plVar4 + -0x540);
                *(undefined8 *)((long)plVar4 + -0x558) = *(undefined8 *)((long)plVar4 + -0x528);
                *(undefined8 *)((long)plVar4 + -0x560) = *(undefined8 *)((long)plVar4 + -0x530);
                *(undefined8 *)((long)plVar4 + -0x490) = 0;
                *(undefined8 *)((long)plVar4 + -0x488) = 1;
                *(undefined8 *)((long)plVar4 + -0x480) = 0;
                FUN_10624142c((undefined1 *)((long)plVar4 + -0x360),param_1 + 0xd,0);
                thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x490),0,0x24,1,1);
                lVar23 = *(long *)((long)plVar4 + -0x480);
                lVar7 = *(long *)((long)plVar4 + -0x488);
                puVar12 = (undefined8 *)(lVar7 + lVar23);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(undefined4 *)(puVar12 + 4) = *(undefined4 *)((long)plVar4 + -0x340);
                if ((long)*(undefined8 **)((long)plVar4 + -0x580) < -0x7ffffffffffffffe) {
                  *(undefined8 *)((long)plVar4 + -0x5e8) = *(undefined8 *)((long)plVar4 + -0x578);
                  *(undefined8 *)((long)plVar4 + -0x5f0) = *(undefined8 *)((long)plVar4 + -0x580);
                  *(undefined8 *)((long)plVar4 + -0x5d8) = *(undefined8 *)((long)plVar4 + -0x568);
                  *(undefined8 *)((long)plVar4 + -0x5e0) = *(undefined8 *)((long)plVar4 + -0x570);
                  *(undefined8 *)((long)plVar4 + -0x5c8) = *(undefined8 *)((long)plVar4 + -0x558);
                  *(undefined8 *)((long)plVar4 + -0x5d0) = *(undefined8 *)((long)plVar4 + -0x560);
                  if (*(long *)((long)plVar4 + -0x490) != 0) {
                    _free();
                  }
                }
                else {
                  puVar22 = *(undefined8 **)((long)plVar4 + -0x570);
                  *(long *)((long)plVar4 + -0x358) = *(long *)((long)plVar4 + -0x490);
                  *(long *)((long)plVar4 + -0x350) = lVar7;
                  *(long *)((long)plVar4 + -0x348) = lVar23 + 0x24;
                  *(undefined4 *)((long)plVar4 + -0x360) = 1;
                  if (puVar22 == *(undefined8 **)((long)plVar4 + -0x580)) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                              ((undefined1 *)((long)plVar4 + -0x580));
                  }
                  puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x578) + (long)puVar22 * 0x20);
                  uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                  puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                  puVar12[2] = uVar30;
                  uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                  puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                  *puVar12 = uVar30;
                  *(undefined1 **)((long)plVar4 + -0x570) = (undefined1 *)((long)puVar22 + 1);
                  *(undefined8 *)((long)plVar4 + -0x5e8) = *(undefined8 *)((long)plVar4 + -0x578);
                  *(undefined8 *)((long)plVar4 + -0x5f0) = *(undefined8 *)((long)plVar4 + -0x580);
                  *(undefined8 *)((long)plVar4 + -0x5d8) = *(undefined8 *)((long)plVar4 + -0x568);
                  *(undefined8 *)((long)plVar4 + -0x5e0) = *(undefined8 *)((long)plVar4 + -0x570);
                  *(undefined8 *)((long)plVar4 + -0x5c8) = *(undefined8 *)((long)plVar4 + -0x558);
                  *(undefined8 *)((long)plVar4 + -0x5d0) = *(undefined8 *)((long)plVar4 + -0x560);
                }
                func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x620),
                                    (undefined1 *)((long)plVar4 + -0x5f0),param_1[0x15],
                                    param_1[0x16]);
                func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x650),
                                    (undefined1 *)((long)plVar4 + -0x620),param_1[0x15],
                                    param_1[0x16]);
                lVar7 = *(long *)param_1[0xc];
                lVar23 = *(long *)((long)plVar4 + -0x650);
                lVar19 = *(long *)((long)plVar4 + -0x638);
                lVar15 = *(long *)((long)plVar4 + -0x640);
                *(long *)((long)plVar4 + -0x678) = *(long *)((long)plVar4 + -0x648);
                *(long *)((long)plVar4 + -0x680) = lVar23;
                *(long *)((long)plVar4 + -0x668) = lVar19;
                *(long *)((long)plVar4 + -0x670) = lVar15;
                lVar21 = *(long *)((long)plVar4 + -0x628);
                lVar25 = *(long *)((long)plVar4 + -0x630);
                *(long *)((long)plVar4 + -0x658) = lVar21;
                *(long *)((long)plVar4 + -0x660) = lVar25;
                param_1[0x19] = *(long *)((long)plVar4 + -0x648);
                param_1[0x18] = lVar23;
                param_1[0x1b] = lVar19;
                param_1[0x1a] = lVar15;
                param_1[0x1d] = lVar21;
                param_1[0x1c] = lVar25;
                param_1[0x1e] = lVar7 + 0x10;
                *(undefined1 *)(param_1 + 0x21) = 0;
                goto LAB_1006ebba8;
              }
              if (lVar23 != -0x8000000000000000) {
                *(undefined8 *)((long)plVar4 + -0x340) = 0x83;
                *(undefined8 *)((long)plVar4 + -0x360) = 0;
                *(undefined8 *)((long)plVar4 + -0x358) = 8;
                *(undefined8 *)((long)plVar4 + -0x350) = 0;
                *(undefined **)((long)plVar4 + -0x348) = &UNK_108ca8785;
                *(undefined1 *)((long)plVar4 + -0x338) = 1;
                FUN_1016fa574((undefined1 *)((long)plVar4 + -0x490),
                              (undefined1 *)((long)plVar4 + -0x360),unaff_x27,unaff_x25);
                FUN_1016fa4c8((undefined1 *)((long)plVar4 + -0x4c0),
                              (undefined1 *)((long)plVar4 + -0x490),
                              *(undefined8 *)((long)plVar4 + -0x828));
                *(undefined8 *)((long)plVar4 + -0x490) = 0;
                *(undefined8 *)((long)plVar4 + -0x488) = 1;
                *(undefined8 *)((long)plVar4 + -0x480) = 0;
                FUN_10624142c((undefined1 *)((long)plVar4 + -0x360),param_1 + 0xd,0);
                iVar6 = FUN_100f1c4e0((undefined1 *)((long)plVar4 + -0x490),
                                      (undefined1 *)((long)plVar4 + -0x360),0x24);
                if (iVar6 != 0) {
                  FUN_107c05cb4(&UNK_108cc3daa,0x37,(undefined1 *)((long)plVar4 + -0x360),
                                &UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x1006ed064);
                  (*pcVar14)();
                }
                *(undefined8 *)((long)plVar4 + -0x5e8) = *(undefined8 *)((long)plVar4 + -0x488);
                *(undefined8 *)((long)plVar4 + -0x5f0) = *(undefined8 *)((long)plVar4 + -0x490);
                *(undefined8 *)((long)plVar4 + -0x5e0) = *(undefined8 *)((long)plVar4 + -0x480);
                FUN_1016fa738((undefined1 *)((long)plVar4 + -0x4f0),
                              (undefined1 *)((long)plVar4 + -0x4c0),
                              (undefined1 *)((long)plVar4 + -0x5f0));
                func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x520),
                                    (undefined1 *)((long)plVar4 + -0x4f0),param_1[0x15],
                                    param_1[0x16]);
                func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x550),
                                    (undefined1 *)((long)plVar4 + -0x520),param_1[0x15],
                                    param_1[0x16]);
                lVar7 = *(long *)param_1[0xc];
                lVar23 = *(long *)((long)plVar4 + -0x550);
                lVar19 = *(long *)((long)plVar4 + -0x538);
                lVar15 = *(long *)((long)plVar4 + -0x540);
                *(long *)((long)plVar4 + -0x578) = *(long *)((long)plVar4 + -0x548);
                *(long *)((long)plVar4 + -0x580) = lVar23;
                *(long *)((long)plVar4 + -0x568) = lVar19;
                *(long *)((long)plVar4 + -0x570) = lVar15;
                lVar21 = *(long *)((long)plVar4 + -0x528);
                lVar25 = *(long *)((long)plVar4 + -0x530);
                *(long *)((long)plVar4 + -0x558) = lVar21;
                *(long *)((long)plVar4 + -0x560) = lVar25;
                param_1[0x19] = *(long *)((long)plVar4 + -0x548);
                param_1[0x18] = lVar23;
                param_1[0x1b] = lVar19;
                param_1[0x1a] = lVar15;
                param_1[0x1d] = lVar21;
                param_1[0x1c] = lVar25;
                param_1[0x1e] = lVar7 + 0x10;
                *(undefined1 *)(param_1 + 0x21) = 0;
                goto LAB_1006ecaa0;
              }
              param_1[0x18] = param_1[0xc];
              param_1[0x1a] = param_1[0xe];
              param_1[0x19] = param_1[0xd];
              *(undefined1 *)(param_1 + 0x27) = 0;
              unaff_x24 = (long *)0x2;
              goto LAB_1006ebc34;
            }
            if (lVar7 == 2) {
              *(undefined8 *)((long)plVar4 + -0x340) = 0x154;
              *(undefined8 *)((long)plVar4 + -0x360) = 0;
              *(undefined8 *)((long)plVar4 + -0x358) = 8;
              *(undefined8 *)((long)plVar4 + -0x350) = 0;
              *(undefined **)((long)plVar4 + -0x348) = &UNK_108ca8932;
              *(undefined1 *)((long)plVar4 + -0x338) = 1;
              func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x490),
                                  (undefined1 *)((long)plVar4 + -0x360),unaff_x26,unaff_x25);
              if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x490)) {
                lVar7 = *(long *)((long)plVar4 + -0x480);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8150;
                *(undefined8 *)((long)plVar4 + -0x348) = 0xe;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (lVar7 == *(long *)((long)plVar4 + -0x490)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x490));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x488) + lVar7 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(long *)((long)plVar4 + -0x480) = lVar7 + 1;
              }
              *(undefined8 *)((long)plVar4 + -0x4b8) = *(undefined8 *)((long)plVar4 + -0x488);
              *(undefined8 *)((long)plVar4 + -0x4c0) = *(undefined8 *)((long)plVar4 + -0x490);
              *(undefined8 *)((long)plVar4 + -0x4a8) = *(undefined8 *)((long)plVar4 + -0x478);
              *(undefined8 *)((long)plVar4 + -0x4b0) = *(undefined8 *)((long)plVar4 + -0x480);
              *(undefined8 *)((long)plVar4 + -0x498) = *(undefined8 *)((long)plVar4 + -0x468);
              *(undefined8 *)((long)plVar4 + -0x4a0) = *(undefined8 *)((long)plVar4 + -0x470);
              if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x4c0)) {
                uVar30 = *(undefined8 *)(&UNK_108cd9cb8 + (long)puVar22 * 8);
                uVar20 = *(undefined8 *)(&UNK_10b2532d0 + (long)puVar22 * 8);
                lVar7 = *(long *)((long)plVar4 + -0x4b0);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined8 *)((long)plVar4 + -0x350) = uVar20;
                *(undefined8 *)((long)plVar4 + -0x348) = uVar30;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (lVar7 == *(long *)((long)plVar4 + -0x4c0)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x4c0));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x4b8) + lVar7 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(long *)((long)plVar4 + -0x4b0) = lVar7 + 1;
              }
              *(undefined8 *)((long)plVar4 + -0x4e8) = *(undefined8 *)((long)plVar4 + -0x4b8);
              *(undefined8 *)((long)plVar4 + -0x4f0) = *(undefined8 *)((long)plVar4 + -0x4c0);
              *(undefined8 *)((long)plVar4 + -0x4d8) = *(undefined8 *)((long)plVar4 + -0x4a8);
              *(undefined8 *)((long)plVar4 + -0x4e0) = *(undefined8 *)((long)plVar4 + -0x4b0);
              *(undefined8 *)((long)plVar4 + -0x4c8) = *(undefined8 *)((long)plVar4 + -0x498);
              *(undefined8 *)((long)plVar4 + -0x4d0) = *(undefined8 *)((long)plVar4 + -0x4a0);
              if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x4f0)) {
                lVar7 = *(long *)((long)plVar4 + -0x4e0);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8136;
                *(undefined8 *)((long)plVar4 + -0x348) = 6;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (lVar7 == *(long *)((long)plVar4 + -0x4f0)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x4f0));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x4e8) + lVar7 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(long *)((long)plVar4 + -0x4e0) = lVar7 + 1;
              }
              *(undefined8 *)((long)plVar4 + -0x518) = *(undefined8 *)((long)plVar4 + -0x4e8);
              *(undefined8 *)((long)plVar4 + -0x520) = *(undefined8 *)((long)plVar4 + -0x4f0);
              *(undefined8 *)((long)plVar4 + -0x508) = *(undefined8 *)((long)plVar4 + -0x4d8);
              *(undefined8 *)((long)plVar4 + -0x510) = *(undefined8 *)((long)plVar4 + -0x4e0);
              *(undefined8 *)((long)plVar4 + -0x4f8) = *(undefined8 *)((long)plVar4 + -0x4c8);
              *(undefined8 *)((long)plVar4 + -0x500) = *(undefined8 *)((long)plVar4 + -0x4d0);
              if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x520)) {
                lVar7 = *(long *)((long)plVar4 + -0x510);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca813c;
                *(undefined8 *)((long)plVar4 + -0x348) = 7;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (lVar7 == *(long *)((long)plVar4 + -0x520)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x520));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x518) + lVar7 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(long *)((long)plVar4 + -0x510) = lVar7 + 1;
              }
              *(undefined8 *)((long)plVar4 + -0x548) = *(undefined8 *)((long)plVar4 + -0x518);
              *(undefined8 *)((long)plVar4 + -0x550) = *(undefined8 *)((long)plVar4 + -0x520);
              *(undefined8 *)((long)plVar4 + -0x538) = *(undefined8 *)((long)plVar4 + -0x508);
              *(undefined8 *)((long)plVar4 + -0x540) = *(undefined8 *)((long)plVar4 + -0x510);
              *(undefined8 *)((long)plVar4 + -0x528) = *(undefined8 *)((long)plVar4 + -0x4f8);
              *(undefined8 *)((long)plVar4 + -0x530) = *(undefined8 *)((long)plVar4 + -0x500);
              if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x550)) {
                uVar30 = *(undefined8 *)(&UNK_108cd9cb8 + (long)puVar22 * 8);
                uVar20 = *(undefined8 *)(&UNK_10b2532d0 + (long)puVar22 * 8);
                lVar7 = *(long *)((long)plVar4 + -0x540);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined8 *)((long)plVar4 + -0x350) = uVar20;
                *(undefined8 *)((long)plVar4 + -0x348) = uVar30;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (lVar7 == *(long *)((long)plVar4 + -0x550)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x550));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x548) + lVar7 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(long *)((long)plVar4 + -0x540) = lVar7 + 1;
              }
              *(undefined8 *)((long)plVar4 + -0x578) = *(undefined8 *)((long)plVar4 + -0x548);
              *(undefined8 *)((long)plVar4 + -0x580) = *(undefined8 *)((long)plVar4 + -0x550);
              *(undefined8 *)((long)plVar4 + -0x568) = *(undefined8 *)((long)plVar4 + -0x538);
              *(undefined8 *)((long)plVar4 + -0x570) = *(undefined8 *)((long)plVar4 + -0x540);
              *(undefined8 *)((long)plVar4 + -0x558) = *(undefined8 *)((long)plVar4 + -0x528);
              *(undefined8 *)((long)plVar4 + -0x560) = *(undefined8 *)((long)plVar4 + -0x530);
              if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x580)) {
                lVar7 = *(long *)((long)plVar4 + -0x570);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8150;
                *(undefined8 *)((long)plVar4 + -0x348) = 0xe;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (lVar7 == *(long *)((long)plVar4 + -0x580)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x580));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x578) + lVar7 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(long *)((long)plVar4 + -0x570) = lVar7 + 1;
              }
              *(undefined8 *)((long)plVar4 + -0x5e8) = *(undefined8 *)((long)plVar4 + -0x578);
              *(undefined8 *)((long)plVar4 + -0x5f0) = *(undefined8 *)((long)plVar4 + -0x580);
              *(undefined8 *)((long)plVar4 + -0x5d8) = *(undefined8 *)((long)plVar4 + -0x568);
              *(undefined8 *)((long)plVar4 + -0x5e0) = *(undefined8 *)((long)plVar4 + -0x570);
              *(undefined8 *)((long)plVar4 + -0x5c8) = *(undefined8 *)((long)plVar4 + -0x558);
              *(undefined8 *)((long)plVar4 + -0x5d0) = *(undefined8 *)((long)plVar4 + -0x560);
              if (-0x7fffffffffffffff < (long)*(undefined8 **)((long)plVar4 + -0x5f0)) {
                uVar30 = *(undefined8 *)(&UNK_108cd9cb8 + (long)puVar22 * 8);
                uVar20 = *(undefined8 *)(&UNK_10b2532d0 + (long)puVar22 * 8);
                puVar22 = *(undefined8 **)((long)plVar4 + -0x5e0);
                *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
                *(undefined8 *)((long)plVar4 + -0x350) = uVar20;
                *(undefined8 *)((long)plVar4 + -0x348) = uVar30;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (puVar22 == *(undefined8 **)((long)plVar4 + -0x5f0)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x5f0));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x5e8) + (long)puVar22 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(undefined1 **)((long)plVar4 + -0x5e0) = (undefined1 *)((long)puVar22 + 1);
              }
              *(undefined8 *)((long)plVar4 + -0x618) = *(undefined8 *)((long)plVar4 + -0x5e8);
              *(undefined8 *)((long)plVar4 + -0x620) = *(undefined8 *)((long)plVar4 + -0x5f0);
              *(undefined8 *)((long)plVar4 + -0x608) = *(undefined8 *)((long)plVar4 + -0x5d8);
              *(undefined8 *)((long)plVar4 + -0x610) = *(undefined8 *)((long)plVar4 + -0x5e0);
              *(undefined8 *)((long)plVar4 + -0x5f8) = *(undefined8 *)((long)plVar4 + -0x5c8);
              *(undefined8 *)((long)plVar4 + -0x600) = *(undefined8 *)((long)plVar4 + -0x5d0);
              if (-0x7fffffffffffffff < (long)*(undefined8 **)((long)plVar4 + -0x620)) {
                puVar22 = *(undefined8 **)((long)plVar4 + -0x610);
                *(undefined8 *)((long)plVar4 + -0x358) = *(undefined8 *)((long)plVar4 + -0x828);
                *(undefined4 *)((long)plVar4 + -0x360) = 5;
                if (puVar22 == *(undefined8 **)((long)plVar4 + -0x620)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x620));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x618) + (long)puVar22 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                *(undefined1 **)((long)plVar4 + -0x610) = (undefined1 *)((long)puVar22 + 1);
              }
              *(undefined8 *)((long)plVar4 + -0x648) = *(undefined8 *)((long)plVar4 + -0x618);
              *(undefined8 *)((long)plVar4 + -0x650) = *(undefined8 *)((long)plVar4 + -0x620);
              *(undefined8 *)((long)plVar4 + -0x638) = *(undefined8 *)((long)plVar4 + -0x608);
              *(undefined8 *)((long)plVar4 + -0x640) = *(undefined8 *)((long)plVar4 + -0x610);
              *(undefined8 *)((long)plVar4 + -0x628) = *(undefined8 *)((long)plVar4 + -0x5f8);
              *(undefined8 *)((long)plVar4 + -0x630) = *(undefined8 *)((long)plVar4 + -0x600);
              *(undefined8 *)((long)plVar4 + -0x490) = 0;
              *(undefined8 *)((long)plVar4 + -0x488) = 1;
              *(undefined8 *)((long)plVar4 + -0x480) = 0;
              FUN_10624142c((undefined1 *)((long)plVar4 + -0x360),param_1 + 0xd,0);
              thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x490),0,0x24,1,1);
              lVar23 = *(long *)((long)plVar4 + -0x480);
              lVar7 = *(long *)((long)plVar4 + -0x488);
              puVar12 = (undefined8 *)(lVar7 + lVar23);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(undefined4 *)(puVar12 + 4) = *(undefined4 *)((long)plVar4 + -0x340);
              if ((long)*(undefined8 **)((long)plVar4 + -0x650) < -0x7ffffffffffffffe) {
                *(undefined8 *)((long)plVar4 + -0x678) = *(undefined8 *)((long)plVar4 + -0x648);
                *(undefined8 *)((long)plVar4 + -0x680) = *(undefined8 *)((long)plVar4 + -0x650);
                *(undefined8 *)((long)plVar4 + -0x668) = *(undefined8 *)((long)plVar4 + -0x638);
                *(undefined8 *)((long)plVar4 + -0x670) = *(undefined8 *)((long)plVar4 + -0x640);
                *(undefined8 *)((long)plVar4 + -0x658) = *(undefined8 *)((long)plVar4 + -0x628);
                *(undefined8 *)((long)plVar4 + -0x660) = *(undefined8 *)((long)plVar4 + -0x630);
                if (*(long *)((long)plVar4 + -0x490) != 0) {
                  _free();
                }
              }
              else {
                puVar22 = *(undefined8 **)((long)plVar4 + -0x640);
                *(long *)((long)plVar4 + -0x358) = *(long *)((long)plVar4 + -0x490);
                *(long *)((long)plVar4 + -0x350) = lVar7;
                *(long *)((long)plVar4 + -0x348) = lVar23 + 0x24;
                *(undefined4 *)((long)plVar4 + -0x360) = 1;
                if (puVar22 == *(undefined8 **)((long)plVar4 + -0x650)) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                            ((undefined1 *)((long)plVar4 + -0x650));
                }
                puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x648) + (long)puVar22 * 0x20);
                uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
                puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
                puVar12[2] = uVar30;
                uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
                puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
                *puVar12 = uVar30;
                *(undefined1 **)((long)plVar4 + -0x640) = (undefined1 *)((long)puVar22 + 1);
                *(undefined8 *)((long)plVar4 + -0x678) = *(undefined8 *)((long)plVar4 + -0x648);
                *(undefined8 *)((long)plVar4 + -0x680) = *(undefined8 *)((long)plVar4 + -0x650);
                *(undefined8 *)((long)plVar4 + -0x668) = *(undefined8 *)((long)plVar4 + -0x638);
                *(undefined8 *)((long)plVar4 + -0x670) = *(undefined8 *)((long)plVar4 + -0x640);
                *(undefined8 *)((long)plVar4 + -0x658) = *(undefined8 *)((long)plVar4 + -0x628);
                *(undefined8 *)((long)plVar4 + -0x660) = *(undefined8 *)((long)plVar4 + -0x630);
              }
              func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x6f0),
                                  (undefined1 *)((long)plVar4 + -0x680),param_1[0x15],param_1[0x16])
              ;
              func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x720),
                                  (undefined1 *)((long)plVar4 + -0x6f0),param_1[0x15],param_1[0x16])
              ;
              lVar7 = *(long *)param_1[0xc];
              lVar23 = *(long *)((long)plVar4 + -0x720);
              lVar19 = *(long *)((long)plVar4 + -0x708);
              lVar15 = *(long *)((long)plVar4 + -0x710);
              *(long *)((long)plVar4 + -0x748) = *(long *)((long)plVar4 + -0x718);
              *(long *)((long)plVar4 + -0x750) = lVar23;
              *(long *)((long)plVar4 + -0x738) = lVar19;
              *(long *)((long)plVar4 + -0x740) = lVar15;
              lVar21 = *(long *)((long)plVar4 + -0x6f8);
              lVar25 = *(long *)((long)plVar4 + -0x700);
              *(long *)((long)plVar4 + -0x728) = lVar21;
              *(long *)((long)plVar4 + -0x730) = lVar25;
              param_1[0x19] = *(long *)((long)plVar4 + -0x718);
              param_1[0x18] = lVar23;
              param_1[0x1b] = lVar19;
              param_1[0x1a] = lVar15;
              param_1[0x1d] = lVar21;
              param_1[0x1c] = lVar25;
              param_1[0x1e] = lVar7 + 0x10;
              *(undefined1 *)(param_1 + 0x21) = 0;
              goto LAB_1006ecbf8;
            }
            *(undefined8 *)((long)plVar4 + -0x340) = 0x154;
            *(undefined8 *)((long)plVar4 + -0x360) = 0;
            *(undefined8 *)((long)plVar4 + -0x358) = 8;
            *(undefined8 *)((long)plVar4 + -0x350) = 0;
            *(undefined **)((long)plVar4 + -0x348) = &UNK_108ca8a86;
            *(undefined1 *)((long)plVar4 + -0x338) = 1;
            func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x490),
                                (undefined1 *)((long)plVar4 + -0x360),unaff_x26,unaff_x25);
            if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x490)) {
              lVar23 = *(long *)((long)plVar4 + -0x480);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8150;
              *(undefined8 *)((long)plVar4 + -0x348) = 0xe;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (lVar23 == *(long *)((long)plVar4 + -0x490)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x490));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x488) + lVar23 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(long *)((long)plVar4 + -0x480) = lVar23 + 1;
            }
            *(undefined8 *)((long)plVar4 + -0x4b8) = *(undefined8 *)((long)plVar4 + -0x488);
            *(undefined8 *)((long)plVar4 + -0x4c0) = *(undefined8 *)((long)plVar4 + -0x490);
            *(undefined8 *)((long)plVar4 + -0x4a8) = *(undefined8 *)((long)plVar4 + -0x478);
            *(undefined8 *)((long)plVar4 + -0x4b0) = *(undefined8 *)((long)plVar4 + -0x480);
            *(undefined8 *)((long)plVar4 + -0x498) = *(undefined8 *)((long)plVar4 + -0x468);
            *(undefined8 *)((long)plVar4 + -0x4a0) = *(undefined8 *)((long)plVar4 + -0x470);
            if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x4c0)) {
              uVar30 = *(undefined8 *)(&UNK_108cd9cb8 + (long)puVar22 * 8);
              uVar20 = *(undefined8 *)(&UNK_10b2532d0 + (long)puVar22 * 8);
              lVar23 = *(long *)((long)plVar4 + -0x4b0);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined8 *)((long)plVar4 + -0x350) = uVar20;
              *(undefined8 *)((long)plVar4 + -0x348) = uVar30;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (lVar23 == *(long *)((long)plVar4 + -0x4c0)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x4c0));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x4b8) + lVar23 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(long *)((long)plVar4 + -0x4b0) = lVar23 + 1;
            }
            *(undefined8 *)((long)plVar4 + -0x4e8) = *(undefined8 *)((long)plVar4 + -0x4b8);
            *(undefined8 *)((long)plVar4 + -0x4f0) = *(undefined8 *)((long)plVar4 + -0x4c0);
            *(undefined8 *)((long)plVar4 + -0x4d8) = *(undefined8 *)((long)plVar4 + -0x4a8);
            *(undefined8 *)((long)plVar4 + -0x4e0) = *(undefined8 *)((long)plVar4 + -0x4b0);
            *(undefined8 *)((long)plVar4 + -0x4c8) = *(undefined8 *)((long)plVar4 + -0x498);
            *(undefined8 *)((long)plVar4 + -0x4d0) = *(undefined8 *)((long)plVar4 + -0x4a0);
            if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x4f0)) {
              lVar23 = *(long *)((long)plVar4 + -0x4e0);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8136;
              *(undefined8 *)((long)plVar4 + -0x348) = 6;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (lVar23 == *(long *)((long)plVar4 + -0x4f0)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x4f0));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x4e8) + lVar23 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(long *)((long)plVar4 + -0x4e0) = lVar23 + 1;
            }
            *(undefined8 *)((long)plVar4 + -0x518) = *(undefined8 *)((long)plVar4 + -0x4e8);
            *(undefined8 *)((long)plVar4 + -0x520) = *(undefined8 *)((long)plVar4 + -0x4f0);
            *(undefined8 *)((long)plVar4 + -0x508) = *(undefined8 *)((long)plVar4 + -0x4d8);
            *(undefined8 *)((long)plVar4 + -0x510) = *(undefined8 *)((long)plVar4 + -0x4e0);
            *(undefined8 *)((long)plVar4 + -0x4f8) = *(undefined8 *)((long)plVar4 + -0x4c8);
            *(undefined8 *)((long)plVar4 + -0x500) = *(undefined8 *)((long)plVar4 + -0x4d0);
            if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x520)) {
              lVar23 = *(long *)((long)plVar4 + -0x510);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca813c;
              *(undefined8 *)((long)plVar4 + -0x348) = 7;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (lVar23 == *(long *)((long)plVar4 + -0x520)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x520));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x518) + lVar23 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(long *)((long)plVar4 + -0x510) = lVar23 + 1;
            }
            *(undefined8 *)((long)plVar4 + -0x548) = *(undefined8 *)((long)plVar4 + -0x518);
            *(undefined8 *)((long)plVar4 + -0x550) = *(undefined8 *)((long)plVar4 + -0x520);
            *(undefined8 *)((long)plVar4 + -0x538) = *(undefined8 *)((long)plVar4 + -0x508);
            *(undefined8 *)((long)plVar4 + -0x540) = *(undefined8 *)((long)plVar4 + -0x510);
            *(undefined8 *)((long)plVar4 + -0x528) = *(undefined8 *)((long)plVar4 + -0x4f8);
            *(undefined8 *)((long)plVar4 + -0x530) = *(undefined8 *)((long)plVar4 + -0x500);
            if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x550)) {
              uVar30 = *(undefined8 *)(&UNK_108cd9cb8 + (long)puVar22 * 8);
              uVar20 = *(undefined8 *)(&UNK_10b2532d0 + (long)puVar22 * 8);
              lVar23 = *(long *)((long)plVar4 + -0x540);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined8 *)((long)plVar4 + -0x350) = uVar20;
              *(undefined8 *)((long)plVar4 + -0x348) = uVar30;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (lVar23 == *(long *)((long)plVar4 + -0x550)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x550));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x548) + lVar23 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(long *)((long)plVar4 + -0x540) = lVar23 + 1;
            }
            *(undefined8 *)((long)plVar4 + -0x578) = *(undefined8 *)((long)plVar4 + -0x548);
            *(undefined8 *)((long)plVar4 + -0x580) = *(undefined8 *)((long)plVar4 + -0x550);
            *(undefined8 *)((long)plVar4 + -0x568) = *(undefined8 *)((long)plVar4 + -0x538);
            *(undefined8 *)((long)plVar4 + -0x570) = *(undefined8 *)((long)plVar4 + -0x540);
            *(undefined8 *)((long)plVar4 + -0x558) = *(undefined8 *)((long)plVar4 + -0x528);
            *(undefined8 *)((long)plVar4 + -0x560) = *(undefined8 *)((long)plVar4 + -0x530);
            FUN_1016fa3f0((undefined1 *)((long)plVar4 + -0x5f0),
                          (undefined1 *)((long)plVar4 + -0x580),lVar7,unaff_x23);
            FUN_1016fa3f0((undefined1 *)((long)plVar4 + -0x620),
                          (undefined1 *)((long)plVar4 + -0x5f0),lVar7,unaff_x23);
            if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x620)) {
              lVar23 = *(long *)((long)plVar4 + -0x610);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined **)((long)plVar4 + -0x350) = &UNK_108ca8150;
              *(undefined8 *)((long)plVar4 + -0x348) = 0xe;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (lVar23 == *(long *)((long)plVar4 + -0x620)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x620));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x618) + lVar23 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(long *)((long)plVar4 + -0x610) = lVar23 + 1;
            }
            *(undefined8 *)((long)plVar4 + -0x648) = *(undefined8 *)((long)plVar4 + -0x618);
            *(undefined8 *)((long)plVar4 + -0x650) = *(undefined8 *)((long)plVar4 + -0x620);
            *(undefined8 *)((long)plVar4 + -0x638) = *(undefined8 *)((long)plVar4 + -0x608);
            *(undefined8 *)((long)plVar4 + -0x640) = *(undefined8 *)((long)plVar4 + -0x610);
            *(undefined8 *)((long)plVar4 + -0x628) = *(undefined8 *)((long)plVar4 + -0x5f8);
            *(undefined8 *)((long)plVar4 + -0x630) = *(undefined8 *)((long)plVar4 + -0x600);
            if (-0x7fffffffffffffff < (long)*(undefined8 **)((long)plVar4 + -0x650)) {
              uVar30 = *(undefined8 *)(&UNK_108cd9cb8 + (long)puVar22 * 8);
              uVar20 = *(undefined8 *)(&UNK_10b2532d0 + (long)puVar22 * 8);
              puVar22 = *(undefined8 **)((long)plVar4 + -0x640);
              *(undefined8 *)((long)plVar4 + -0x358) = 0x8000000000000000;
              *(undefined8 *)((long)plVar4 + -0x350) = uVar20;
              *(undefined8 *)((long)plVar4 + -0x348) = uVar30;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (puVar22 == *(undefined8 **)((long)plVar4 + -0x650)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x650));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x648) + (long)puVar22 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(undefined1 **)((long)plVar4 + -0x640) = (undefined1 *)((long)puVar22 + 1);
            }
            *(undefined8 *)((long)plVar4 + -0x678) = *(undefined8 *)((long)plVar4 + -0x648);
            *(undefined8 *)((long)plVar4 + -0x680) = *(undefined8 *)((long)plVar4 + -0x650);
            *(undefined8 *)((long)plVar4 + -0x668) = *(undefined8 *)((long)plVar4 + -0x638);
            *(undefined8 *)((long)plVar4 + -0x670) = *(undefined8 *)((long)plVar4 + -0x640);
            *(undefined8 *)((long)plVar4 + -0x658) = *(undefined8 *)((long)plVar4 + -0x628);
            *(undefined8 *)((long)plVar4 + -0x660) = *(undefined8 *)((long)plVar4 + -0x630);
            FUN_1016fa3f0((undefined1 *)((long)plVar4 + -0x6f0),
                          (undefined1 *)((long)plVar4 + -0x680),lVar7,unaff_x23);
            if (-0x7fffffffffffffff < (long)*(undefined8 **)((long)plVar4 + -0x6f0)) {
              puVar22 = *(undefined8 **)((long)plVar4 + -0x6e0);
              *(undefined8 *)((long)plVar4 + -0x358) = *(undefined8 *)((long)plVar4 + -0x828);
              *(undefined4 *)((long)plVar4 + -0x360) = 5;
              if (puVar22 == *(undefined8 **)((long)plVar4 + -0x6f0)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x6f0));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x6e8) + (long)puVar22 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              *(undefined1 **)((long)plVar4 + -0x6e0) = (undefined1 *)((long)puVar22 + 1);
            }
            *(undefined8 *)((long)plVar4 + -0x718) = *(undefined8 *)((long)plVar4 + -0x6e8);
            *(undefined8 *)((long)plVar4 + -0x720) = *(undefined8 *)((long)plVar4 + -0x6f0);
            *(undefined8 *)((long)plVar4 + -0x708) = *(undefined8 *)((long)plVar4 + -0x6d8);
            *(undefined8 *)((long)plVar4 + -0x710) = *(undefined8 *)((long)plVar4 + -0x6e0);
            *(undefined8 *)((long)plVar4 + -0x6f8) = *(undefined8 *)((long)plVar4 + -0x6c8);
            *(undefined8 *)((long)plVar4 + -0x700) = *(undefined8 *)((long)plVar4 + -0x6d0);
            *(undefined8 *)((long)plVar4 + -0x490) = 0;
            *(undefined8 *)((long)plVar4 + -0x488) = 1;
            *(undefined8 *)((long)plVar4 + -0x480) = 0;
            FUN_10624142c((undefined1 *)((long)plVar4 + -0x360),param_1 + 0xd,0);
            thunk_FUN_108855060((undefined1 *)((long)plVar4 + -0x490),0,0x24,1,1);
            lVar23 = *(long *)((long)plVar4 + -0x480);
            lVar7 = *(long *)((long)plVar4 + -0x488);
            puVar12 = (undefined8 *)(lVar7 + lVar23);
            uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
            puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
            *puVar12 = uVar30;
            uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
            puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
            puVar12[2] = uVar30;
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)((long)plVar4 + -0x340);
            if ((long)*(undefined8 **)((long)plVar4 + -0x720) < -0x7ffffffffffffffe) {
              *(undefined8 *)((long)plVar4 + -0x748) = *(undefined8 *)((long)plVar4 + -0x718);
              *(undefined8 *)((long)plVar4 + -0x750) = *(undefined8 *)((long)plVar4 + -0x720);
              *(undefined8 *)((long)plVar4 + -0x738) = *(undefined8 *)((long)plVar4 + -0x708);
              *(undefined8 *)((long)plVar4 + -0x740) = *(undefined8 *)((long)plVar4 + -0x710);
              *(undefined8 *)((long)plVar4 + -0x728) = *(undefined8 *)((long)plVar4 + -0x6f8);
              *(undefined8 *)((long)plVar4 + -0x730) = *(undefined8 *)((long)plVar4 + -0x700);
              if (*(long *)((long)plVar4 + -0x490) != 0) {
                _free();
              }
            }
            else {
              puVar22 = *(undefined8 **)((long)plVar4 + -0x710);
              *(long *)((long)plVar4 + -0x358) = *(long *)((long)plVar4 + -0x490);
              *(long *)((long)plVar4 + -0x350) = lVar7;
              *(long *)((long)plVar4 + -0x348) = lVar23 + 0x24;
              *(undefined4 *)((long)plVar4 + -0x360) = 1;
              if (puVar22 == *(undefined8 **)((long)plVar4 + -0x720)) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                          ((undefined1 *)((long)plVar4 + -0x720));
              }
              puVar12 = (undefined8 *)(*(long *)((long)plVar4 + -0x718) + (long)puVar22 * 0x20);
              uVar30 = *(undefined8 *)((long)plVar4 + -0x350);
              puVar12[3] = *(undefined8 *)((long)plVar4 + -0x348);
              puVar12[2] = uVar30;
              uVar30 = *(undefined8 *)((long)plVar4 + -0x360);
              puVar12[1] = *(undefined8 *)((long)plVar4 + -0x358);
              *puVar12 = uVar30;
              *(undefined1 **)((long)plVar4 + -0x710) = (undefined1 *)((long)puVar22 + 1);
              *(undefined8 *)((long)plVar4 + -0x748) = *(undefined8 *)((long)plVar4 + -0x718);
              *(undefined8 *)((long)plVar4 + -0x750) = *(undefined8 *)((long)plVar4 + -0x720);
              *(undefined8 *)((long)plVar4 + -0x738) = *(undefined8 *)((long)plVar4 + -0x708);
              *(undefined8 *)((long)plVar4 + -0x740) = *(undefined8 *)((long)plVar4 + -0x710);
              *(undefined8 *)((long)plVar4 + -0x728) = *(undefined8 *)((long)plVar4 + -0x6f8);
              *(undefined8 *)((long)plVar4 + -0x730) = *(undefined8 *)((long)plVar4 + -0x700);
            }
            func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x7c0),
                                (undefined1 *)((long)plVar4 + -0x750),param_1[0x15],param_1[0x16]);
            func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x7f0),
                                (undefined1 *)((long)plVar4 + -0x7c0),param_1[0x15],param_1[0x16]);
            lVar7 = *(long *)param_1[0xc];
            lVar23 = *(long *)((long)plVar4 + -0x7f0);
            lVar19 = *(long *)((long)plVar4 + -0x7d8);
            lVar15 = *(long *)((long)plVar4 + -0x7e0);
            *(long *)((long)plVar4 + -0x818) = *(long *)((long)plVar4 + -0x7e8);
            *(long *)((long)plVar4 + -0x820) = lVar23;
            *(long *)((long)plVar4 + -0x808) = lVar19;
            *(long *)((long)plVar4 + -0x810) = lVar15;
            lVar21 = *(long *)((long)plVar4 + -0x7c8);
            lVar25 = *(long *)((long)plVar4 + -2000);
            *(long *)((long)plVar4 + -0x7f8) = lVar21;
            *(long *)((long)plVar4 + -0x800) = lVar25;
            param_1[0x19] = *(long *)((long)plVar4 + -0x7e8);
            param_1[0x18] = lVar23;
            param_1[0x1b] = lVar19;
            param_1[0x1a] = lVar15;
            param_1[0x1d] = lVar21;
            param_1[0x1c] = lVar25;
            param_1[0x1e] = lVar7 + 0x10;
            *(undefined1 *)(param_1 + 0x21) = 0;
          }
          else if (bVar2 != 3) {
LAB_1006ecbf8:
            lVar7 = FUN_1016f9b88((undefined1 *)((long)plVar4 + -0x360),param_1 + 0x18,unaff_x21);
            unaff_x24 = *(long **)((long)plVar4 + -0x360);
            if (unaff_x24 == (long *)0x8000000000000015) {
              uVar5 = 4;
              *puVar8 = 4;
              goto LAB_1006ecdc8;
            }
            unaff_x23 = *(long *)((long)plVar4 + -0x358);
            unaff_x25 = *(long *)((long)plVar4 + -0x350);
            *(undefined8 *)((long)plVar4 + -0x6b8) = *(undefined8 *)((long)plVar4 + -0x340);
            *(undefined8 *)((long)plVar4 + -0x6c0) = *(undefined8 *)((long)plVar4 + -0x348);
            if ((char)param_1[0x21] == '\x03') {
              puVar22 = (undefined8 *)param_1[0x1f];
              puVar12 = (undefined8 *)param_1[0x20];
              pcVar14 = (code *)*puVar12;
              if (pcVar14 != (code *)0x0) {
                lVar7 = (*pcVar14)(puVar22);
              }
              if (puVar12[1] != 0) {
                lVar7 = _free(puVar22);
              }
            }
            else if ((char)param_1[0x21] == '\0') {
              lVar7 = FUN_100d99140(param_1 + 0x18);
            }
            unaff_x27 = (undefined8 *)((long)plVar4 + -0x778);
            if (unaff_x24 == (long *)0x8000000000000014) goto LAB_1006ecc88;
            *(undefined8 *)((long)plVar4 + -0x688) = *(undefined8 *)((long)plVar4 + -0x6b8);
            *(undefined8 *)((long)plVar4 + -0x690) = *(undefined8 *)((long)plVar4 + -0x6c0);
            *(long **)((long)plVar4 + -0x6a8) = unaff_x24;
            *(long *)((long)plVar4 + -0x6a0) = unaff_x23;
            *(long *)((long)plVar4 + -0x698) = unaff_x25;
            lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x6a8));
            goto LAB_1006ecd50;
          }
          lVar7 = FUN_1016f9b88((undefined1 *)((long)plVar4 + -0x360),param_1 + 0x18,unaff_x21);
          unaff_x24 = *(long **)((long)plVar4 + -0x360);
          if (unaff_x24 == (long *)0x8000000000000015) {
            *puVar8 = 4;
            uVar5 = 3;
            goto LAB_1006ecdc8;
          }
          unaff_x23 = *(long *)((long)plVar4 + -0x358);
          unaff_x25 = *(long *)((long)plVar4 + -0x350);
          *(undefined8 *)((long)plVar4 + -0x788) = *(undefined8 *)((long)plVar4 + -0x340);
          *(undefined8 *)((long)plVar4 + -0x790) = *(undefined8 *)((long)plVar4 + -0x348);
          if ((char)param_1[0x21] == '\x03') {
            puVar22 = (undefined8 *)param_1[0x1f];
            puVar12 = (undefined8 *)param_1[0x20];
            pcVar14 = (code *)*puVar12;
            if (pcVar14 != (code *)0x0) {
              lVar7 = (*pcVar14)(puVar22);
            }
            if (puVar12[1] != 0) {
              lVar7 = _free(puVar22);
            }
          }
          else if ((char)param_1[0x21] == '\0') {
            lVar7 = FUN_100d99140(param_1 + 0x18);
          }
          unaff_x27 = (undefined8 *)((long)plVar4 + -0x778);
          if (unaff_x24 != (long *)0x8000000000000014) {
            *(undefined8 *)((long)plVar4 + -0x758) = *(undefined8 *)((long)plVar4 + -0x788);
            *(undefined8 *)((long)plVar4 + -0x760) = *(undefined8 *)((long)plVar4 + -0x790);
            *(long **)((long)plVar4 + -0x778) = unaff_x24;
            *(long *)((long)plVar4 + -0x770) = unaff_x23;
            *(long *)((long)plVar4 + -0x768) = unaff_x25;
            lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x778));
            goto LAB_1006ecd50;
          }
LAB_1006ecc88:
          unaff_x26 = (undefined8 *)0x8000000000000002;
          param_1[0x18] = unaff_x23;
          param_1[0x19] = unaff_x25;
          if (unaff_x23 != 0) {
            param_1[0x1a] = param_1[0xc];
            param_1[0x1c] = param_1[0xe];
            param_1[0x1b] = param_1[0xd];
            *(undefined1 *)(param_1 + 0x29) = 0;
            goto LAB_1006ecca4;
          }
          uVar30 = 2;
          unaff_x23 = 0;
LAB_1006ecd58:
          if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
            lVar7 = _free(param_1[0x13]);
          }
          if ((param_1[0xf] & 0x7fffffffffffffffU) != 0) {
            lVar7 = _free(param_1[0x10]);
          }
          uVar20 = *(undefined8 *)((long)plVar4 + -0x3a0);
          uVar32 = *(undefined8 *)((long)plVar4 + -0x388);
          uVar31 = *(undefined8 *)((long)plVar4 + -0x390);
          puVar8[10] = *(undefined8 *)((long)plVar4 + -0x398);
          puVar8[9] = uVar20;
          puVar8[0xc] = uVar32;
          puVar8[0xb] = uVar31;
          uVar20 = *(undefined8 *)((long)plVar4 + -0x380);
          puVar8[0xe] = *(undefined8 *)((long)plVar4 + -0x378);
          puVar8[0xd] = uVar20;
          uVar20 = *(undefined8 *)((long)plVar4 + -0x3c0);
          uVar32 = *(undefined8 *)((long)plVar4 + -0x3a8);
          uVar31 = *(undefined8 *)((long)plVar4 + -0x3b0);
          puVar8[6] = *(undefined8 *)((long)plVar4 + -0x3b8);
          puVar8[5] = uVar20;
          *puVar8 = uVar30;
          puVar8[1] = unaff_x21;
          puVar8[2] = 0x8000000000000002;
          puVar8[3] = puVar22;
          puVar8[4] = unaff_x23;
          puVar8[0xf] = *(undefined8 *)((long)plVar4 + -0x370);
          uVar5 = 1;
          puVar8[8] = uVar32;
          puVar8[7] = uVar31;
LAB_1006ecdc8:
          *(undefined1 *)(param_1 + 0x17) = uVar5;
          return lVar7;
        }
        if (bVar2 < 7) {
          if (bVar2 == 5) {
LAB_1006ebba8:
            lVar7 = FUN_1016f9b88((undefined1 *)((long)plVar4 + -0x360),param_1 + 0x18,unaff_x21);
            unaff_x24 = *(long **)((long)plVar4 + -0x360);
            if (unaff_x24 == (long *)0x8000000000000015) {
              *puVar8 = 4;
              uVar5 = 5;
              goto LAB_1006ecdc8;
            }
            unaff_x23 = *(long *)((long)plVar4 + -0x358);
            unaff_x25 = *(long *)((long)plVar4 + -0x350);
            *(undefined8 *)((long)plVar4 + -0x5b8) = *(undefined8 *)((long)plVar4 + -0x340);
            *(undefined8 *)((long)plVar4 + -0x5c0) = *(undefined8 *)((long)plVar4 + -0x348);
            if ((char)param_1[0x21] == '\x03') {
              puVar22 = (undefined8 *)param_1[0x1f];
              unaff_x27 = (undefined8 *)param_1[0x20];
              if ((code *)*unaff_x27 != (code *)0x0) {
                lVar7 = (*(code *)*unaff_x27)(puVar22);
              }
              if (unaff_x27[1] != 0) {
                lVar7 = _free(puVar22);
              }
            }
            else if ((char)param_1[0x21] == '\0') {
              lVar7 = FUN_100d99140(param_1 + 0x18);
            }
            if (unaff_x24 == (long *)0x8000000000000014) goto LAB_1006ecc88;
            *(undefined8 *)((long)plVar4 + -0x588) = *(undefined8 *)((long)plVar4 + -0x5b8);
            *(undefined8 *)((long)plVar4 + -0x590) = *(undefined8 *)((long)plVar4 + -0x5c0);
            *(long **)((long)plVar4 + -0x5a8) = unaff_x24;
            *(long *)((long)plVar4 + -0x5a0) = unaff_x23;
            *(long *)((long)plVar4 + -0x598) = unaff_x25;
            lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x5a8));
          }
          else {
LAB_1006ecaa0:
            lVar7 = FUN_1016f9b88((undefined1 *)((long)plVar4 + -0x360),param_1 + 0x18,unaff_x21);
            unaff_x24 = *(long **)((long)plVar4 + -0x360);
            if (unaff_x24 == (long *)0x8000000000000015) {
              *puVar8 = 4;
              uVar5 = 6;
              goto LAB_1006ecdc8;
            }
            unaff_x23 = *(long *)((long)plVar4 + -0x358);
            unaff_x25 = *(long *)((long)plVar4 + -0x350);
            *(undefined8 *)((long)plVar4 + -0x458) = *(undefined8 *)((long)plVar4 + -0x340);
            *(undefined8 *)((long)plVar4 + -0x460) = *(undefined8 *)((long)plVar4 + -0x348);
            if ((char)param_1[0x21] == '\x03') {
              puVar22 = (undefined8 *)param_1[0x1f];
              unaff_x27 = (undefined8 *)param_1[0x20];
              if ((code *)*unaff_x27 != (code *)0x0) {
                lVar7 = (*(code *)*unaff_x27)(puVar22);
              }
              if (unaff_x27[1] != 0) {
                lVar7 = _free(puVar22);
              }
            }
            else if ((char)param_1[0x21] == '\0') {
              lVar7 = FUN_100d99140(param_1 + 0x18);
            }
            if (unaff_x24 == (long *)0x8000000000000014) goto LAB_1006ecc88;
            *(undefined8 *)((long)plVar4 + -0x428) = *(undefined8 *)((long)plVar4 + -0x458);
            *(undefined8 *)((long)plVar4 + -0x430) = *(undefined8 *)((long)plVar4 + -0x460);
            *(long **)((long)plVar4 + -0x448) = unaff_x24;
            *(long *)((long)plVar4 + -0x440) = unaff_x23;
            *(long *)((long)plVar4 + -0x438) = unaff_x25;
            lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x448));
          }
LAB_1006ecd50:
          uVar30 = 3;
          unaff_x21 = lVar7;
          goto LAB_1006ecd58;
        }
        if (bVar2 == 7) {
LAB_1006ebc34:
          unaff_x28 = (undefined1 *)((long)plVar4 + -0x360);
          auVar34._8_8_ = param_1 + 0x18;
          auVar34._0_8_ = unaff_x28;
          uVar30 = 0x1006ebc44;
          plVar4 = (long *)((long)plVar4 + -0x830);
        }
        else {
LAB_1006ecca4:
          unaff_x28 = (undefined1 *)((long)plVar4 + -0x360);
          auVar34._8_8_ = param_1 + 0x1a;
          auVar34._0_8_ = unaff_x28;
          uVar30 = 0x1006eccb4;
          plVar4 = (long *)((long)plVar4 + -0x830);
        }
      }
      if (bVar2 != 3) {
        lVar7 = FUN_107c05cc4(&UNK_10b21e7f8);
        lVar15 = extraout_x8;
        lVar23 = extraout_x9;
        lVar19 = extraout_x10;
LAB_1006eb89c:
        lVar25 = *(long *)((long)plVar4 + -0xf8);
        *(long *)((long)plVar4 + -0x80) = lVar15;
        *(long *)((long)plVar4 + -0x78) = lVar7;
        *(long *)((long)plVar4 + -0x70) = lVar23 + 0x24;
        *(undefined4 *)((long)plVar4 + -0x88) = 1;
        if (lVar25 == lVar19) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                    ((undefined1 *)((long)plVar4 + -0x108));
        }
        puVar8 = (undefined8 *)(*(long *)((long)plVar4 + -0x100) + lVar25 * 0x20);
        uVar31 = *(undefined8 *)((long)plVar4 + -0x88);
        uVar20 = *(undefined8 *)((long)plVar4 + -0x70);
        uVar30 = *(undefined8 *)((long)plVar4 + -0x78);
        puVar8[1] = *(undefined8 *)((long)plVar4 + -0x80);
        *puVar8 = uVar31;
        puVar8[3] = uVar20;
        puVar8[2] = uVar30;
        *(long *)((long)plVar4 + -0xf8) = lVar25 + 1;
        *(undefined8 *)((long)plVar4 + -0x1f8) = *(undefined8 *)((long)plVar4 + -0x100);
        *(undefined8 *)((long)plVar4 + -0x200) = *puVar22;
        *(undefined8 *)((long)plVar4 + -0x1e8) = *(undefined8 *)((long)plVar4 + -0xf0);
        *(undefined8 *)((long)plVar4 + -0x1f0) = *(undefined8 *)((long)plVar4 + -0xf8);
        *(undefined8 *)((long)plVar4 + -0x1d8) = *(undefined8 *)((long)plVar4 + -0xe0);
        *(undefined8 *)((long)plVar4 + -0x1e0) = *(undefined8 *)((long)plVar4 + -0xe8);
LAB_1006eb8ec:
        lVar7 = *unaff_x24;
        uVar30 = *(undefined8 *)((long)plVar4 + -0x200);
        uVar31 = *(undefined8 *)((long)plVar4 + -0x1e8);
        uVar20 = *(undefined8 *)((long)plVar4 + -0x1f0);
        *(undefined8 *)((long)plVar4 + -0x268) = *(undefined8 *)((long)plVar4 + -0x1f8);
        *(undefined8 *)((long)plVar4 + -0x270) = uVar30;
        *(undefined8 *)((long)plVar4 + -600) = uVar31;
        *(undefined8 *)((long)plVar4 + -0x260) = uVar20;
        uVar26 = *(undefined8 *)((long)plVar4 + -0x1d8);
        uVar32 = *(undefined8 *)((long)plVar4 + -0x1e0);
        *(undefined8 *)((long)plVar4 + -0x248) = uVar26;
        *(undefined8 *)((long)plVar4 + -0x250) = uVar32;
        puVar12[6] = *(undefined8 *)((long)plVar4 + -0x1f8);
        puVar12[5] = uVar30;
        puVar12[8] = uVar31;
        puVar12[7] = uVar20;
        puVar12[10] = uVar26;
        puVar12[9] = uVar32;
        puVar12[0xb] = lVar7 + 0x10;
        *(undefined1 *)(puVar12 + 0xe) = 0;
      }
      lVar7 = FUN_1016f99e8((undefined1 *)((long)plVar4 + -0x108),puVar12 + 5,param_3);
      lVar23 = *(long *)((long)plVar4 + -0x108);
      if (lVar23 == -0x7fffffffffffffeb) {
        *plVar9 = 4;
        uVar5 = 3;
        goto LAB_1006eba7c;
      }
      *(undefined8 *)((long)plVar4 + -0x238) = *(undefined8 *)((long)plVar4 + -0xf0);
      *(undefined8 *)((long)plVar4 + -0x240) = *(undefined8 *)((long)plVar4 + -0xf8);
      lVar15 = *(long *)((long)plVar4 + -0x100);
      *(undefined8 *)((long)plVar4 + -0x230) = *(undefined8 *)((long)plVar4 + -0xe8);
      if (*(char *)(puVar12 + 0xe) == '\x03') {
        uVar30 = puVar12[0xc];
        puVar22 = (undefined8 *)puVar12[0xd];
        pcVar14 = (code *)*puVar22;
        if (pcVar14 != (code *)0x0) {
          lVar7 = (*pcVar14)(uVar30);
        }
        if (puVar22[1] != 0) {
          lVar7 = _free(uVar30);
        }
      }
      else if (*(char *)(puVar12 + 0xe) == '\0') {
        lVar7 = FUN_100d99140(puVar12 + 5);
      }
      if (lVar23 == -0x7fffffffffffffec) {
        if (lVar15 != 0) {
          *(long *)((long)plVar4 + -0x270) = lVar15;
          *(undefined8 *)((long)plVar4 + -0x260) = *(undefined8 *)((long)plVar4 + -0x238);
          *(undefined8 *)((long)plVar4 + -0x268) = *(undefined8 *)((long)plVar4 + -0x240);
          *(undefined8 *)((long)plVar4 + -600) = *(undefined8 *)((long)plVar4 + -0x230);
          __ZN11codex_state7runtime5goals20thread_goal_from_row17h530be3d53d30fb74E
                    ((undefined1 *)((long)plVar4 + -0x108),(undefined1 *)((long)plVar4 + -0x270));
          FUN_100ded7a4((undefined1 *)((long)plVar4 + -0x270));
          lVar23 = *(long *)((long)plVar4 + -0x108);
          lVar7 = *(long *)((long)plVar4 + -0x100);
          *(undefined8 *)((long)plVar4 + -0x1b8) = *(undefined8 *)((long)plVar4 + -0xb0);
          *(undefined8 *)((long)plVar4 + -0x1c0) = *(undefined8 *)((long)plVar4 + -0xb8);
          *(undefined8 *)((long)plVar4 + -0x1a8) = *(undefined8 *)((long)plVar4 + -0xa0);
          *(undefined8 *)((long)plVar4 + -0x1b0) = *(undefined8 *)((long)plVar4 + -0xa8);
          *(undefined8 *)((long)plVar4 + -0x198) = *(undefined8 *)((long)plVar4 + -0x90);
          *(undefined8 *)((long)plVar4 + -0x1a0) = *(undefined8 *)((long)plVar4 + -0x98);
          *(undefined8 *)((long)plVar4 + -0x1f8) = *(undefined8 *)((long)plVar4 + -0xf0);
          *(undefined8 *)((long)plVar4 + -0x200) = *(undefined8 *)((long)plVar4 + -0xf8);
          *(undefined8 *)((long)plVar4 + -0x1e8) = *(undefined8 *)((long)plVar4 + -0xe0);
          *(undefined8 *)((long)plVar4 + -0x1f0) = *(undefined8 *)((long)plVar4 + -0xe8);
          *(undefined8 *)((long)plVar4 + -0x1d8) = *(undefined8 *)((long)plVar4 + -0xd0);
          *(undefined8 *)((long)plVar4 + -0x1e0) = *(undefined8 *)((long)plVar4 + -0xd8);
          *(undefined8 *)((long)plVar4 + -0x1c8) = *(undefined8 *)((long)plVar4 + -0xc0);
          *(undefined8 *)((long)plVar4 + -0x1d0) = *(undefined8 *)((long)plVar4 + -200);
          if (lVar23 != 3) {
            if (lVar23 == 2) goto LAB_1006eba48;
            *(undefined8 *)((long)plVar4 + -0x148) = *(undefined8 *)((long)plVar4 + -0x1b8);
            *(undefined8 *)((long)plVar4 + -0x150) = *(undefined8 *)((long)plVar4 + -0x1c0);
            *(undefined8 *)((long)plVar4 + -0x138) = *(undefined8 *)((long)plVar4 + -0x1a8);
            *(undefined8 *)((long)plVar4 + -0x140) = *(undefined8 *)((long)plVar4 + -0x1b0);
            *(undefined8 *)((long)plVar4 + -0x128) = *(undefined8 *)((long)plVar4 + -0x198);
            *(undefined8 *)((long)plVar4 + -0x130) = *(undefined8 *)((long)plVar4 + -0x1a0);
            *(undefined8 *)((long)plVar4 + -0x188) = *(undefined8 *)((long)plVar4 + -0x1f8);
            *(undefined8 *)((long)plVar4 + -400) = *(undefined8 *)((long)plVar4 + -0x200);
            *(undefined8 *)((long)plVar4 + -0x178) = *(undefined8 *)((long)plVar4 + -0x1e8);
            *(undefined8 *)((long)plVar4 + -0x180) = *(undefined8 *)((long)plVar4 + -0x1f0);
            *(undefined8 *)((long)plVar4 + -0x168) = *(undefined8 *)((long)plVar4 + -0x1d8);
            *(undefined8 *)((long)plVar4 + -0x170) = *(undefined8 *)((long)plVar4 + -0x1e0);
            *(undefined8 *)((long)plVar4 + -0x158) = *(undefined8 *)((long)plVar4 + -0x1c8);
            *(undefined8 *)((long)plVar4 + -0x160) = *(undefined8 *)((long)plVar4 + -0x1d0);
            goto LAB_1006eba54;
          }
        }
        lVar23 = 2;
      }
      else {
        *(long *)((long)plVar4 + -0x228) = lVar23;
        *(long *)((long)plVar4 + -0x220) = lVar15;
        *(undefined8 *)((long)plVar4 + -0x210) = *(undefined8 *)((long)plVar4 + -0x238);
        *(undefined8 *)((long)plVar4 + -0x218) = *(undefined8 *)((long)plVar4 + -0x240);
        *(undefined8 *)((long)plVar4 + -0x208) = *(undefined8 *)((long)plVar4 + -0x230);
        lVar7 = thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x228));
LAB_1006eba48:
        lVar23 = 3;
      }
LAB_1006eba54:
      *plVar9 = lVar23;
      plVar9[1] = lVar7;
      lVar23 = *(long *)((long)plVar4 + -0x150);
      lVar19 = *(long *)((long)plVar4 + -0x138);
      lVar15 = *(long *)((long)plVar4 + -0x140);
      plVar9[0xb] = *(long *)((long)plVar4 + -0x148);
      plVar9[10] = lVar23;
      plVar9[0xd] = lVar19;
      plVar9[0xc] = lVar15;
      lVar23 = *(long *)((long)plVar4 + -0x130);
      plVar9[0xf] = *(long *)((long)plVar4 + -0x128);
      plVar9[0xe] = lVar23;
      lVar23 = *(long *)((long)plVar4 + -400);
      lVar19 = *(long *)((long)plVar4 + -0x178);
      lVar15 = *(long *)((long)plVar4 + -0x180);
      plVar9[3] = *(long *)((long)plVar4 + -0x188);
      plVar9[2] = lVar23;
      plVar9[5] = lVar19;
      plVar9[4] = lVar15;
      lVar19 = *(long *)((long)plVar4 + -0x170);
      lVar15 = *(long *)((long)plVar4 + -0x158);
      lVar23 = *(long *)((long)plVar4 + -0x160);
      uVar5 = 1;
      plVar9[7] = *(long *)((long)plVar4 + -0x168);
      plVar9[6] = lVar19;
      plVar9[9] = lVar15;
      plVar9[8] = lVar23;
LAB_1006eba7c:
      *(undefined1 *)(puVar12 + 0xf) = uVar5;
      return lVar7;
    }
    unaff_x21 = *param_1;
    puStack_d8 = &UNK_108ca85a3;
    lStack_d0 = 0x9a;
    uStack_f0 = 0;
    puStack_e8 = (undefined8 *)0x8;
    puStack_e0 = (undefined *)0x0;
    uStack_c8 = 1;
    uStack_78 = 1;
    uStack_80 = 5;
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(&uStack_f0);
    lVar7 = uStack_f0;
    puStack_e8[1] = uStack_78;
    *puStack_e8 = CONCAT44(uStack_7c,uStack_80);
    puStack_e8[3] = uStack_68;
    puStack_e8[2] = uStack_70;
    puStack_e0 = (undefined *)0x1;
    lStack_f8 = CONCAT71(uStack_c7,uStack_c8);
    puStack_108 = puStack_d8;
    lStack_110 = 1;
    lStack_100 = lStack_d0;
    puStack_118 = puStack_e8;
    lStack_120 = uStack_f0;
    if (-0x7fffffffffffffff < uStack_f0) {
      puStack_e8 = (undefined8 *)0x8000000000000000;
      puStack_e0 = &UNK_108ca815e;
      puStack_d8 = (undefined *)0x7;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
      if (lVar7 == 1) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(&lStack_120);
      }
      lStack_110 = 2;
      puStack_118[5] = puStack_e8;
      puStack_118[4] = uStack_f0;
      puStack_118[7] = puStack_d8;
      puStack_118[6] = puStack_e0;
    }
    puStack_148 = puStack_118;
    lStack_150 = lStack_120;
    puStack_138 = puStack_108;
    lStack_140 = lStack_110;
    lStack_128 = lStack_f8;
    lStack_130 = lStack_100;
    __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(param_1 + 0xb);
    uVar18 = *(uint *)(param_1 + 0xb);
    iVar6 = (int)uVar18 >> 0xd;
    iVar13 = iVar6 + -1;
    if (iVar6 < 1) goto LAB_1006eb518;
    iVar6 = 0;
    lVar7 = lStack_140;
  }
  else {
    if (bVar2 == 3) goto LAB_1006eb600;
    FUN_107c05cc4(&UNK_10b21e798);
    iVar6 = extraout_w10;
    iVar13 = extraout_w8;
    uVar18 = extraout_w9_00;
LAB_1006eb518:
    iVar6 = (1U - iVar6) / 400 + 1;
    iVar13 = iVar13 + iVar6 * 400;
    iVar6 = iVar6 * -0x23ab1;
    lVar7 = lStack_140;
  }
  lStack_140 = lVar7;
  if (-0x7fffffffffffffff < lStack_150) {
    puStack_e8 = (undefined8 *)
                 ((ulong)*(uint *)((long)param_1 + 0x5c) +
                 (long)(int)((((uVar18 >> 4 & 0x1ff) + iVar6) - iVar13 / 100) +
                             (iVar13 * 0x5b5 >> 2) + (iVar13 / 100 >> 2) + -0xaf93b) * 0x15180);
    uStack_f0._4_4_ = (undefined4)((ulong)uStack_f0 >> 0x20);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,5);
    if (lVar7 == lStack_150) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(&lStack_150);
    }
    plVar4 = puStack_148 + lVar7 * 4;
    plVar4[1] = (long)puStack_e8;
    *plVar4 = uStack_f0;
    plVar4[3] = (long)puStack_d8;
    plVar4[2] = (long)puStack_e0;
    lStack_140 = lVar7 + 1;
  }
  puStack_178 = puStack_148;
  lStack_180 = lStack_150;
  puStack_168 = puStack_138;
  lStack_170 = lStack_140;
  lStack_158 = lStack_128;
  lStack_160 = lStack_130;
  param_1[2] = (long)puStack_148;
  param_1[1] = lStack_150;
  param_1[4] = (long)puStack_138;
  param_1[3] = lStack_140;
  param_1[6] = lStack_128;
  param_1[5] = lStack_130;
  param_1[7] = unaff_x21;
  *(undefined1 *)(param_1 + 10) = 0;
LAB_1006eb600:
  FUN_1016f9b88(&uStack_f0,param_1 + 1,param_2);
  puVar3 = puStack_e0;
  puVar22 = puStack_e8;
  lVar7 = uStack_f0;
  if (uStack_f0 == -0x7fffffffffffffeb) {
    *(undefined1 *)((long)param_1 + 100) = 3;
    lVar7 = 1;
  }
  else {
    lStack_b8 = lStack_d0;
    puStack_c0 = puStack_d8;
    if ((char)param_1[10] == '\x03') {
      lVar23 = param_1[8];
      puVar8 = (undefined8 *)param_1[9];
      pcVar14 = (code *)*puVar8;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(lVar23);
      }
      if (puVar8[1] != 0) {
        _free(lVar23);
      }
    }
    else if ((char)param_1[10] == '\0') {
      FUN_100d99140(param_1 + 1);
    }
    if (lVar7 != -0x7fffffffffffffec) {
      lStack_88 = lStack_b8;
      puStack_90 = puStack_c0;
      lStack_a8 = lVar7;
      puStack_a0 = puVar22;
      puStack_98 = puVar3;
      thunk_FUN_108858e50(&lStack_a8);
    }
    lVar7 = 0;
    *(undefined1 *)((long)param_1 + 100) = 1;
  }
  return lVar7;
LAB_1006edb30:
  if (lVar7 == lVar23) {
    *(undefined1 *)(puVar12 + 0x15) = 0;
    puVar12[0x1b] = puVar12[0x10];
    puVar12[0x1a] = puVar12[0xf];
    puVar12[0x1d] = puVar12[0x12];
    puVar12[0x1c] = puVar12[0x11];
    puVar12[0x1e] = puVar12[0x13];
    puVar12[0x17] = puVar12[0xc];
    puVar12[0x16] = puVar12[0xb];
    puVar12[0x19] = puVar12[0xe];
    puVar12[0x18] = puVar12[0xd];
    *(undefined1 *)(puVar12 + 0x2a) = 0;
LAB_1006edec4:
    FUN_1016ee13c((undefined1 *)((long)plVar4 + -0x13f8),puVar12 + 0x16,uVar20);
    lVar7 = *(long *)((long)plVar4 + -0x13f8);
    if (lVar7 == -0x7fffffffffffffeb) {
      uVar5 = 5;
LAB_1006edf1c:
      *(undefined1 *)((long)puVar12 + 0xaa) = uVar5;
      lVar7 = 1;
    }
    else {
      *(undefined8 *)((long)plVar4 + -0x1168) = *(undefined8 *)((long)plVar4 + -0x13e8);
      *(undefined8 *)((long)plVar4 + -0x1170) = *(undefined8 *)((long)plVar4 + -0x13f0);
      *(undefined8 *)((long)plVar4 + -0x1158) = *(undefined8 *)((long)plVar4 + -0x13d8);
      *(undefined8 *)((long)plVar4 + -0x1160) = *(undefined8 *)((long)plVar4 + -0x13e0);
      FUN_100d07e80(puVar12 + 0x16);
      if (lVar7 != -0x7fffffffffffffec) {
        *(undefined8 *)((long)plVar4 + -0x1138) = *(undefined8 *)((long)plVar4 + -0x1168);
        *(undefined8 *)((long)plVar4 + -0x1140) = *(undefined8 *)((long)plVar4 + -0x1170);
        *(undefined8 *)((long)plVar4 + -0x1128) = *(undefined8 *)((long)plVar4 + -0x1158);
        *(undefined8 *)((long)plVar4 + -0x1130) = *(undefined8 *)((long)plVar4 + -0x1160);
        *(long *)((long)plVar4 + -0x1148) = lVar7;
        thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x1148));
        bVar2 = *(byte *)(puVar12 + 0x15);
joined_r0x0001006edf8c:
        if ((bVar2 & 1) != 0) {
          piVar17 = (int *)(puVar12 + 0xb);
          if (*(char *)(puVar12 + 0x13) == '\x01') {
            if (*piVar17 == 4) {
              piVar10 = (int *)puVar12[0xc];
            }
            else {
              piVar10 = piVar17;
              if (*piVar17 == 3) {
                FUN_107c05cac(&UNK_108ca1579,0x24,&UNK_10b209070);
LAB_1006ee060:
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1006ee064);
                (*pcVar14)();
              }
            }
            __ZN113__LT_sqlx_sqlite__transaction__SqliteTransactionManager_u20_as_u20_sqlx_core__transaction__TransactionManager_GT_14start_rollback17h281f626b15aff32dE
                      (piVar10);
          }
          if (*piVar17 != 4) {
            func_0x000100c9f240(piVar17);
          }
        }
      }
LAB_1006edfd8:
      *(undefined1 *)(puVar12 + 0x15) = 0;
      if (puVar12[8] != 0) {
        _free(puVar12[9]);
      }
LAB_1006edfec:
      lVar7 = 0;
      *(undefined1 *)((long)puVar12 + 0xaa) = 1;
    }
    return lVar7;
  }
  puVar12[0x16] = lVar7 + 0x98;
  uVar16 = puVar12[0x18];
  puVar12[0x18] = uVar16 + 1;
  if (0x7ffffffffffffffe < uVar16) {
    uVar16 = 0x7fffffffffffffff;
  }
  lVar23 = _malloc(0x80);
  if (lVar23 == 0) {
    FUN_107c03c64(1,0x80);
    goto LAB_1006ee060;
  }
  *(undefined8 *)((long)plVar4 + -0x13f8) = 0x80;
  *(long *)((long)plVar4 + -0x13f0) = lVar23;
  *(undefined8 *)((long)plVar4 + -0x13e8) = 0;
  *(undefined1 **)((long)plVar4 + -0x11e0) = (undefined1 *)((long)plVar4 + -0x13f8);
  FUN_100683ae4(lVar7 + 0x48,(undefined1 *)((long)plVar4 + -0x11e0));
  uVar30 = *(undefined8 *)((long)plVar4 + -0x13f0);
  *(long *)((long)plVar4 + -0x1400) = *(long *)((long)plVar4 + -0x13f8);
  if (*(long *)((long)plVar4 + -0x13f8) == -0x8000000000000000) {
    thunk_FUN_108858844(uVar30);
LAB_1006edf50:
    *(undefined1 *)((long)puVar12 + 0xa9) = 0;
    bVar2 = *(byte *)(puVar12 + 0x15);
    goto joined_r0x0001006edf8c;
  }
  uVar26 = *(undefined8 *)((long)plVar4 + -0x13e8);
  *(undefined1 *)((long)puVar12 + 0xa9) = 1;
  *(undefined **)((long)plVar4 + -0x13e0) = &UNK_108ca91dd;
  *(undefined8 *)((long)plVar4 + -0x13d8) = 0xea;
  *(undefined8 *)((long)plVar4 + -0x13f8) = 0;
  *(undefined8 *)((long)plVar4 + -0x13f0) = 8;
  *(undefined8 *)((long)plVar4 + -0x13e8) = 0;
  *(undefined1 *)((long)plVar4 + -0x13d0) = 1;
  uVar31 = puVar12[9];
  uVar32 = puVar12[10];
  *(undefined8 *)((long)plVar4 + -0x1118) = 0x8000000000000000;
  *(undefined8 *)((long)plVar4 + -0x1110) = uVar31;
  *(undefined8 *)((long)plVar4 + -0x1108) = uVar32;
  *(undefined4 *)((long)plVar4 + -0x1120) = 1;
  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
            ((undefined1 *)((long)plVar4 + -0x13f8));
  puVar22 = *(undefined8 **)((long)plVar4 + -0x13f0);
  uVar32 = *(undefined8 *)((long)plVar4 + -0x1108);
  uVar31 = *(undefined8 *)((long)plVar4 + -0x1110);
  uVar33 = *(undefined8 *)((long)plVar4 + -0x1120);
  puVar22[1] = *(undefined8 *)((long)plVar4 + -0x1118);
  *puVar22 = uVar33;
  puVar22[3] = uVar32;
  puVar22[2] = uVar31;
  *(undefined8 *)((long)plVar4 + -0x13e8) = 1;
  *(undefined8 *)((long)plVar4 + -0x11d8) = *(undefined8 *)((long)plVar4 + -0x13f0);
  *(undefined8 *)((long)plVar4 + -0x11e0) = *(undefined8 *)((long)plVar4 + -0x13f8);
  *(undefined8 *)((long)plVar4 + -0x11c8) = *(undefined8 *)((long)plVar4 + -0x13e0);
  *(undefined8 *)((long)plVar4 + -0x11d0) = *(undefined8 *)((long)plVar4 + -0x13e8);
  *(undefined8 *)((long)plVar4 + -0x11b8) = *(undefined8 *)((long)plVar4 + -0x13d0);
  *(undefined8 *)((long)plVar4 + -0x11c0) = *(undefined8 *)((long)plVar4 + -0x13d8);
  if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x11e0)) {
    lVar23 = *(long *)((long)plVar4 + -0x11d0);
    *(ulong *)((long)plVar4 + -0x13f0) = uVar16;
    *(undefined4 *)((long)plVar4 + -0x13f8) = 5;
    if (lVar23 == *(long *)((long)plVar4 + -0x11e0)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                ((undefined1 *)((long)plVar4 + -0x11e0));
    }
    puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x11d8) + lVar23 * 0x20);
    uVar31 = *(undefined8 *)((long)plVar4 + -0x13f8);
    puVar22[1] = *(undefined8 *)((long)plVar4 + -0x13f0);
    *puVar22 = uVar31;
    uVar31 = *(undefined8 *)((long)plVar4 + -0x13e8);
    puVar22[3] = *(undefined8 *)((long)plVar4 + -0x13e0);
    puVar22[2] = uVar31;
    *(long *)((long)plVar4 + -0x11d0) = lVar23 + 1;
  }
  *(undefined8 *)((long)plVar4 + -0x1208) = *(undefined8 *)((long)plVar4 + -0x11d8);
  *(undefined8 *)((long)plVar4 + -0x1210) = *(undefined8 *)((long)plVar4 + -0x11e0);
  *(undefined8 *)((long)plVar4 + -0x11f8) = *(undefined8 *)((long)plVar4 + -0x11c8);
  *(undefined8 *)((long)plVar4 + -0x1200) = *(undefined8 *)((long)plVar4 + -0x11d0);
  *(undefined8 *)((long)plVar4 + -0x11e8) = *(undefined8 *)((long)plVar4 + -0x11b8);
  *(undefined8 *)((long)plVar4 + -0x11f0) = *(undefined8 *)((long)plVar4 + -0x11c0);
  uVar31 = 0;
  if (*(long *)(lVar7 + 0x30) != -0x8000000000000000) {
    uVar31 = *(undefined8 *)(lVar7 + 0x38);
  }
  func_0x0001016fa310((undefined1 *)((long)plVar4 + -0x1240),(undefined1 *)((long)plVar4 + -0x1210),
                      uVar31,*(undefined8 *)(lVar7 + 0x40));
  if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x1240)) {
    uVar31 = *(undefined8 *)(lVar7 + 8);
    uVar32 = *(undefined8 *)(lVar7 + 0x10);
    lVar23 = *(long *)((long)plVar4 + -0x1230);
    *(undefined8 *)((long)plVar4 + -0x13f0) = 0x8000000000000000;
    *(undefined8 *)((long)plVar4 + -0x13e8) = uVar31;
    *(undefined8 *)((long)plVar4 + -0x13e0) = uVar32;
    *(undefined4 *)((long)plVar4 + -0x13f8) = 1;
    if (lVar23 == *(long *)((long)plVar4 + -0x1240)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                ((undefined1 *)((long)plVar4 + -0x1240));
    }
    puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x1238) + lVar23 * 0x20);
    uVar31 = *(undefined8 *)((long)plVar4 + -0x13f8);
    puVar22[1] = *(undefined8 *)((long)plVar4 + -0x13f0);
    *puVar22 = uVar31;
    uVar31 = *(undefined8 *)((long)plVar4 + -0x13e8);
    puVar22[3] = *(undefined8 *)((long)plVar4 + -0x13e0);
    puVar22[2] = uVar31;
    *(long *)((long)plVar4 + -0x1230) = lVar23 + 1;
  }
  *(undefined8 *)((long)plVar4 + -0x1268) = *(undefined8 *)((long)plVar4 + -0x1238);
  *(undefined8 *)((long)plVar4 + -0x1270) = *(undefined8 *)((long)plVar4 + -0x1240);
  *(undefined8 *)((long)plVar4 + -0x1258) = *(undefined8 *)((long)plVar4 + -0x1228);
  *(undefined8 *)((long)plVar4 + -0x1260) = *(undefined8 *)((long)plVar4 + -0x1230);
  *(undefined8 *)((long)plVar4 + -0x1248) = *(undefined8 *)((long)plVar4 + -0x1218);
  *(undefined8 *)((long)plVar4 + -0x1250) = *(undefined8 *)((long)plVar4 + -0x1220);
  if (-0x7fffffffffffffff < *(long *)((long)plVar4 + -0x1270)) {
    uVar31 = *(undefined8 *)(lVar7 + 0x20);
    uVar32 = *(undefined8 *)(lVar7 + 0x28);
    lVar23 = *(long *)((long)plVar4 + -0x1260);
    *(undefined8 *)((long)plVar4 + -0x13f0) = 0x8000000000000000;
    *(undefined8 *)((long)plVar4 + -0x13e8) = uVar31;
    *(undefined8 *)((long)plVar4 + -0x13e0) = uVar32;
    *(undefined4 *)((long)plVar4 + -0x13f8) = 1;
    if (lVar23 == *(long *)((long)plVar4 + -0x1270)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                ((undefined1 *)((long)plVar4 + -0x1270));
    }
    puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x1268) + lVar23 * 0x20);
    uVar31 = *(undefined8 *)((long)plVar4 + -0x13f8);
    puVar22[1] = *(undefined8 *)((long)plVar4 + -0x13f0);
    *puVar22 = uVar31;
    uVar31 = *(undefined8 *)((long)plVar4 + -0x13e8);
    puVar22[3] = *(undefined8 *)((long)plVar4 + -0x13e0);
    puVar22[2] = uVar31;
    *(long *)((long)plVar4 + -0x1260) = lVar23 + 1;
  }
  *(undefined8 *)((long)plVar4 + -0x1298) = *(undefined8 *)((long)plVar4 + -0x1268);
  *(undefined8 *)((long)plVar4 + -0x12a0) = *(undefined8 *)((long)plVar4 + -0x1270);
  *(undefined8 *)((long)plVar4 + -0x1288) = *(undefined8 *)((long)plVar4 + -0x1258);
  *(undefined8 *)((long)plVar4 + -0x1290) = *(undefined8 *)((long)plVar4 + -0x1260);
  *(undefined8 *)((long)plVar4 + -0x1278) = *(undefined8 *)((long)plVar4 + -0x1248);
  *(undefined8 *)((long)plVar4 + -0x1280) = *(undefined8 *)((long)plVar4 + -0x1250);
  *(undefined1 *)((long)puVar12 + 0xa9) = 0;
  if (*(long *)((long)plVar4 + -0x12a0) < -0x7ffffffffffffffe) {
    *(undefined8 *)((long)plVar4 + -0x12c8) = *(undefined8 *)((long)plVar4 + -0x1298);
    *(undefined8 *)((long)plVar4 + -0x12d0) = *(undefined8 *)((long)plVar4 + -0x12a0);
    *(undefined8 *)((long)plVar4 + -0x12b8) = *(undefined8 *)((long)plVar4 + -0x1288);
    *(undefined8 *)((long)plVar4 + -0x12c0) = *(undefined8 *)((long)plVar4 + -0x1290);
    *(undefined8 *)((long)plVar4 + -0x12a8) = *(undefined8 *)((long)plVar4 + -0x1278);
    *(undefined8 *)((long)plVar4 + -0x12b0) = *(undefined8 *)((long)plVar4 + -0x1280);
    if (*(long *)((long)plVar4 + -0x1400) != 0) {
      _free(uVar30);
    }
    lVar23 = *(long *)((long)plVar4 + -0x12d0);
  }
  else {
    lVar23 = *(long *)((long)plVar4 + -0x1290);
    *(undefined8 *)((long)plVar4 + -0x13f0) = *(undefined8 *)((long)plVar4 + -0x1400);
    *(undefined8 *)((long)plVar4 + -0x13e8) = uVar30;
    *(undefined8 *)((long)plVar4 + -0x13e0) = uVar26;
    *(undefined4 *)((long)plVar4 + -0x13f8) = 1;
    if (lVar23 == *(long *)((long)plVar4 + -0x12a0)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                ((undefined1 *)((long)plVar4 + -0x12a0));
    }
    puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x1298) + lVar23 * 0x20);
    uVar30 = *(undefined8 *)((long)plVar4 + -0x13e8);
    puVar22[3] = *(undefined8 *)((long)plVar4 + -0x13e0);
    puVar22[2] = uVar30;
    uVar30 = *(undefined8 *)((long)plVar4 + -0x13f8);
    puVar22[1] = *(undefined8 *)((long)plVar4 + -0x13f0);
    *puVar22 = uVar30;
    *(long *)((long)plVar4 + -0x1290) = lVar23 + 1;
    *(undefined8 *)((long)plVar4 + -0x12b8) = *(undefined8 *)((long)plVar4 + -0x1288);
    *(undefined8 *)((long)plVar4 + -0x12c0) = *(undefined8 *)((long)plVar4 + -0x1290);
    *(undefined8 *)((long)plVar4 + -0x12a8) = *(undefined8 *)((long)plVar4 + -0x1278);
    *(undefined8 *)((long)plVar4 + -0x12b0) = *(undefined8 *)((long)plVar4 + -0x1280);
    *(undefined8 *)((long)plVar4 + -0x12c8) = *(undefined8 *)((long)plVar4 + -0x1298);
    *(undefined8 *)((long)plVar4 + -0x12d0) = *(undefined8 *)((long)plVar4 + -0x12a0);
    lVar23 = *(long *)((long)plVar4 + -0x12d0);
  }
  if (-0x7fffffffffffffff < lVar23) {
    bVar2 = *(byte *)(lVar7 + 0x90);
    lVar7 = *(long *)((long)plVar4 + -0x12c0);
    *(undefined4 *)((long)plVar4 + -0x13f8) = 4;
    *(uint *)((long)plVar4 + -0x13f4) = (uint)bVar2;
    if (lVar7 == lVar23) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E
                ((undefined1 *)((long)plVar4 + -0x12d0));
    }
    puVar22 = (undefined8 *)(*(long *)((long)plVar4 + -0x12c8) + lVar7 * 0x20);
    uVar30 = *(undefined8 *)((long)plVar4 + -0x13f8);
    puVar22[1] = *(undefined8 *)((long)plVar4 + -0x13f0);
    *puVar22 = uVar30;
    uVar30 = *(undefined8 *)((long)plVar4 + -0x13e8);
    puVar22[3] = *(undefined8 *)((long)plVar4 + -0x13e0);
    puVar22[2] = uVar30;
    *(long *)((long)plVar4 + -0x12c0) = lVar7 + 1;
  }
  *(undefined8 *)((long)plVar4 + -0x12f8) = *(undefined8 *)((long)plVar4 + -0x12c8);
  *(undefined8 *)((long)plVar4 + -0x1300) = *(undefined8 *)((long)plVar4 + -0x12d0);
  *(undefined8 *)((long)plVar4 + -0x12e8) = *(undefined8 *)((long)plVar4 + -0x12b8);
  *(undefined8 *)((long)plVar4 + -0x12f0) = *(undefined8 *)((long)plVar4 + -0x12c0);
  *(undefined8 *)((long)plVar4 + -0x12d8) = *(undefined8 *)((long)plVar4 + -0x12a8);
  *(undefined8 *)((long)plVar4 + -0x12e0) = *(undefined8 *)((long)plVar4 + -0x12b0);
  piVar17 = (int *)(puVar12 + 0xb);
  if (*piVar17 == 4) {
    piVar17 = (int *)puVar12[0xc];
  }
  else if (*piVar17 == 3) {
    FUN_107c05cac(&UNK_108ca1579,0x24,&UNK_10b209070);
    goto LAB_1006ee060;
  }
  uVar30 = *(undefined8 *)((long)plVar4 + -0x1300);
  uVar32 = *(undefined8 *)((long)plVar4 + -0x12e8);
  uVar31 = *(undefined8 *)((long)plVar4 + -0x12f0);
  *(undefined8 *)((long)plVar4 + -0x1328) = *(undefined8 *)((long)plVar4 + -0x12f8);
  *(undefined8 *)((long)plVar4 + -0x1330) = uVar30;
  *(undefined8 *)((long)plVar4 + -0x1318) = uVar32;
  *(undefined8 *)((long)plVar4 + -0x1320) = uVar31;
  uVar33 = *(undefined8 *)((long)plVar4 + -0x12d8);
  uVar26 = *(undefined8 *)((long)plVar4 + -0x12e0);
  *(undefined8 *)((long)plVar4 + -0x1308) = uVar33;
  *(undefined8 *)((long)plVar4 + -0x1310) = uVar26;
  puVar12[0x1a] = *(undefined8 *)((long)plVar4 + -0x12f8);
  puVar12[0x19] = uVar30;
  puVar12[0x1c] = uVar32;
  puVar12[0x1b] = uVar31;
  puVar12[0x1e] = uVar33;
  puVar12[0x1d] = uVar26;
  puVar12[0x1f] = piVar17;
  *(undefined1 *)(puVar12 + 0x22) = 0;
LAB_1006edaa8:
  FUN_1016f9d64((undefined1 *)((long)plVar4 + -0x13f8),puVar12 + 0x19,uVar20);
  lVar7 = *(long *)((long)plVar4 + -0x13f8);
  if (lVar7 == -0x7fffffffffffffeb) {
    uVar5 = 4;
    goto LAB_1006edf1c;
  }
  uVar30 = *(undefined8 *)((long)plVar4 + -0x13f0);
  uVar31 = *(undefined8 *)((long)plVar4 + -0x13e8);
  *(undefined8 *)((long)plVar4 + -0x11a8) = *(undefined8 *)((long)plVar4 + -0x13d8);
  *(undefined8 *)((long)plVar4 + -0x11b0) = *(undefined8 *)((long)plVar4 + -0x13e0);
  if (*(char *)(puVar12 + 0x22) == '\x03') {
    uVar32 = puVar12[0x20];
    puVar22 = (undefined8 *)puVar12[0x21];
    pcVar14 = (code *)*puVar22;
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(uVar32);
    }
    if (puVar22[1] != 0) {
      _free(uVar32);
    }
  }
  else if (*(char *)(puVar12 + 0x22) == '\0') {
    FUN_100d99140(puVar12 + 0x19);
  }
  if (lVar7 != -0x7fffffffffffffec) {
    *(undefined8 *)((long)plVar4 + -0x1178) = *(undefined8 *)((long)plVar4 + -0x11a8);
    *(undefined8 *)((long)plVar4 + -0x1180) = *(undefined8 *)((long)plVar4 + -0x11b0);
    *(long *)((long)plVar4 + -0x1198) = lVar7;
    *(undefined8 *)((long)plVar4 + -0x1190) = uVar30;
    *(undefined8 *)((long)plVar4 + -0x1188) = uVar31;
    thunk_FUN_108858e50((undefined1 *)((long)plVar4 + -0x1198));
    goto LAB_1006edf50;
  }
  *(undefined1 *)((long)puVar12 + 0xa9) = 0;
  lVar7 = puVar12[0x16];
  lVar23 = puVar12[0x17];
  goto LAB_1006edb30;
}

