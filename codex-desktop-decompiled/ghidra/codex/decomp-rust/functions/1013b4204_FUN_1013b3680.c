
void FUN_1013b3680(byte *param_1,byte *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined7 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 uVar13;
  byte bVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  uint uVar21;
  undefined *puVar22;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  undefined1 auVar23 [16];
  uint uStack_164;
  undefined8 uStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  byte *pbStack_149;
  undefined8 uStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined1 uStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  undefined *puStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  byte bStack_d0;
  byte bStack_cf;
  undefined6 uStack_ce;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *pbStack_78;
  
  puVar20 = *(undefined **)(param_2 + 0x20);
  if (*(undefined **)(param_2 + 0x28) < puVar20) {
    puVar18 = *(undefined **)(param_2 + 0x18);
    puVar17 = *(undefined **)(param_2 + 0x28) + 5;
    do {
      bVar14 = (puVar18 + (long)puVar17)[-5];
      if (0x20 < bVar14 || (1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) {
        uVar21 = (uint)bVar14;
        if (bVar14 < 0x5b) {
          if (bVar14 == 0x22) {
            *(undefined **)(param_2 + 0x28) = puVar17 + -4;
            param_2[0x10] = 0;
            param_2[0x11] = 0;
            param_2[0x12] = 0;
            param_2[0x13] = 0;
            param_2[0x14] = 0;
            param_2[0x15] = 0;
            param_2[0x16] = 0;
            param_2[0x17] = 0;
            __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                      (&puStack_f0,param_2 + 0x18,param_2);
            uVar8 = CONCAT17(uStack_e1,uStack_e8);
            if (puStack_f0 == (undefined *)0x2) goto LAB_1013b3cf4;
            bStack_d0 = 0x4c;
            bStack_cf = 0xe3;
            uStack_ce = 0x108cd;
            bStack_c8 = 4;
            uStack_c7 = 0;
            uStack_c0 = 0x98;
            uStack_bf = 0x108cb90;
            uStack_b8 = 0x2b;
            uStack_b7 = 0;
            bStack_138 = (byte)uStack_e8;
            uStack_137 = (undefined7)((ulong)uVar8 >> 8);
            uStack_130 = (undefined1)uStack_e0;
            uStack_12f = (undefined7)(CONCAT17(uStack_d9,uStack_e0) >> 8);
            uVar13 = 5;
            goto LAB_1013b40e0;
          }
          if (bVar14 != 0x2d) goto LAB_1013b3cc8;
          *(undefined **)(param_2 + 0x28) = puVar17 + -4;
          FUN_1006523cc(&puStack_f0,param_2,0);
          if (puStack_f0 != (undefined *)0x3) {
            puVar17 = (undefined *)CONCAT17(uStack_e1,uStack_e8);
            bStack_d0 = 0x4c;
            bStack_cf = 0xe3;
            uStack_ce = 0x108cd;
            bStack_c8 = 4;
            uStack_c7 = 0;
            if (puStack_f0 == (undefined *)0x0) goto LAB_1013b40cc;
            if (puStack_f0 == (undefined *)0x1) goto LAB_1013b40c0;
            goto LAB_1013b40d8;
          }
LAB_1013b3cf0:
          uVar8 = CONCAT17(uStack_e1,uStack_e8);
          goto LAB_1013b3cf4;
        }
        if (bVar14 < 0x6e) {
          if (uVar21 == 0x5b) {
            bVar14 = param_2[0x48];
            param_2[0x48] = bVar14 - 1;
            if ((byte)(bVar14 - 1) == 0) goto LAB_1013b41bc;
            *(undefined **)(param_2 + 0x28) = puVar17 + -4;
            uStack_100 = CONCAT71(uStack_100._1_7_,1);
            pbStack_108 = param_2;
            FUN_1011de3f0(&bStack_d0,&pbStack_108);
            pbVar11 = pbStack_108;
            if (bStack_d0 == 1) {
LAB_1013b3a78:
              pbVar10 = (byte *)CONCAT71(uStack_c7,bStack_c8);
            }
            else {
              if (bStack_cf == 1) {
                FUN_1013063c0(&bStack_d0,pbStack_108);
                if (bStack_d0 != 1) {
                  pbVar10 = (byte *)(ulong)bStack_cf;
                  FUN_1013f06d4(&bStack_d0,pbVar11,uStack_100 & 0xff);
                  bStack_138 = bStack_d0;
                  if (bStack_d0 == 0x16) {
                    pbVar10 = (byte *)CONCAT71(uStack_c7,bStack_c8);
                  }
                  else {
                    puStack_f0 = (undefined *)CONCAT17(bStack_c8,CONCAT61(uStack_ce,bStack_cf));
                    uStack_e8 = uStack_c7;
                    uStack_d9 = uStack_b8;
                    uStack_d8 = uStack_b7;
                    uStack_e1 = uStack_c0;
                    uStack_e0 = uStack_bf;
                  }
                  goto LAB_1013b3a80;
                }
                goto LAB_1013b3a78;
              }
              uStack_140 = &UNK_108cde34c;
              bStack_138 = 4;
              uStack_137 = 0;
              bStack_d0 = (byte)&uStack_140;
              bStack_cf = (byte)((ulong)&uStack_140 >> 8);
              uStack_ce = (undefined6)((ulong)&uStack_140 >> 0x10);
              bStack_c8 = 0xa0;
              uStack_c7 = 0x100c7b3;
              pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_d0);
            }
            bStack_138 = 0x16;
LAB_1013b3a80:
            param_2[0x48] = param_2[0x48] + 1;
            uStack_12f = uStack_e8;
            uStack_137 = SUB87(puStack_f0,0);
            uStack_130 = (undefined1)((ulong)puStack_f0 >> 0x38);
            pbStack_120 = (byte *)CONCAT71(uStack_d8,uStack_d9);
            uStack_128 = uStack_e1;
            uStack_127 = uStack_e0;
            uStack_140 = pbVar10;
            auVar23 = FUN_10065474c(param_2);
            pbVar10 = uStack_140;
            pbVar11 = auVar23._0_8_;
            bStack_c8 = bStack_138;
            uStack_c7 = uStack_137;
            bStack_d0 = (byte)uStack_140;
            bStack_cf = (byte)((ulong)uStack_140 >> 8);
            uStack_ce = (undefined6)((ulong)uStack_140 >> 0x10);
            uStack_b8 = uStack_128;
            uStack_b7 = uStack_127;
            uStack_c0 = uStack_130;
            uStack_bf = uStack_12f;
            pbStack_b0 = pbStack_120;
            uVar21 = extraout_w12;
            if (bStack_138 != 0x16) goto LAB_1013b3be4;
            pbStack_a8 = pbVar11;
            if (pbVar11 == (byte *)0x0) goto LAB_1013b3d98;
            lVar16 = *(long *)pbVar11;
            if (lVar16 != 1) goto LAB_1013b3bcc;
            FUN_100de21d4(pbVar11 + 8);
            goto LAB_1013b3d90;
          }
          if (uVar21 == 0x66) goto LAB_1013b4000;
LAB_1013b3cc8:
          if (9 < uVar21 - 0x30) {
            puVar17 = (undefined *)0xa;
code_r0x0001013b41c8:
            bStack_d0 = (byte)puVar17;
            bStack_cf = 0;
            uStack_ce = 0;
            pbVar10 = (byte *)FUN_108831e8c(param_2,&bStack_d0);
            goto LAB_1013b40fc;
          }
          FUN_1006523cc(&puStack_f0,param_2,1);
          puVar18 = puStack_f0;
          if (puStack_f0 == (undefined *)0x3) goto LAB_1013b3cf0;
LAB_1013b408c:
          puVar17 = (undefined *)CONCAT17(uStack_e1,uStack_e8);
          puVar19 = &UNK_108cde34c;
          bVar14 = 4;
code_r0x0001013b409c:
          bStack_c8 = bVar14;
          bStack_d0 = (byte)puVar19;
          bStack_cf = (byte)((ulong)puVar19 >> 8);
          uStack_ce = (undefined6)((ulong)puVar19 >> 0x10);
          uStack_c7 = 0;
code_r0x0001013b40a0:
          if (puVar18 == (undefined *)0x2) {
LAB_1013b40d8:
            uStack_b7 = 0;
            uStack_b8 = 0x2b;
            uStack_bf = 0x108cb90;
            uStack_c0 = 0x98;
            bStack_138 = (byte)puVar17;
            uStack_137 = (undefined7)((ulong)puVar17 >> 8);
            uVar13 = 2;
          }
          else if (puVar18 == (undefined *)0x1) {
LAB_1013b40c0:
            uStack_b7 = 0;
            uStack_b8 = 0x2b;
            uStack_bf = 0x108cb90;
            uStack_c0 = 0x98;
            bStack_138 = (byte)puVar17;
            uStack_137 = (undefined7)((ulong)puVar17 >> 8);
            uVar13 = 1;
          }
          else {
LAB_1013b40cc:
            uStack_b7 = 0;
            uStack_b8 = 0x2b;
            uStack_bf = 0x108cb90;
            uStack_c0 = 0x98;
            bStack_138 = (byte)puVar17;
            uStack_137 = (undefined7)((ulong)puVar17 >> 8);
code_r0x0001013b40d0:
            puVar17 = (undefined *)0x3;
code_r0x0001013b40d4:
            uVar13 = SUB81(puVar17,0);
          }
LAB_1013b40e0:
          uStack_140 = (byte *)CONCAT71(uStack_140._1_7_,uVar13);
        }
        else {
          if (uVar21 == 0x7b) {
            bVar14 = param_2[0x48];
            param_2[0x48] = bVar14 - 1;
            if ((byte)(bVar14 - 1) != 0) {
              *(undefined **)(param_2 + 0x28) = puVar17 + -4;
              uStack_110 = 1;
              pbStack_108 = (byte *)0x0;
              uStack_100 = 8;
              uStack_164 = 0x19;
              pbStack_f8 = (byte *)0x0;
              pbStack_118 = param_2;
              goto LAB_1013b37b4;
            }
LAB_1013b41bc:
            bStack_d0 = 0x18;
            goto LAB_1013b370c;
          }
          if (uVar21 == 0x6e) {
            puVar22 = puVar17 + -4;
            *(undefined **)(param_2 + 0x28) = puVar22;
            puVar19 = puVar22;
            if (puVar22 <= puVar20) {
              puVar19 = puVar20;
            }
            if (puVar22 < puVar20) {
              puVar22 = puVar18 + (long)puVar17;
code_r0x0001013b3f84:
              cVar2 = puVar22[-4];
              *(undefined **)(param_2 + 0x28) = puVar17 + -3;
              if (cVar2 == 'u') {
                if (puVar17 + -3 != puVar19) {
                  uVar21 = (uint)(byte)(puVar18 + (long)puVar17)[-3];
                  puVar22 = puVar17 + -2;
code_r0x0001013b3fac:
                  *(undefined **)(param_2 + 0x28) = puVar22;
                  bVar5 = uVar21 == 0x6c;
code_r0x0001013b3fb4:
                  if (!bVar5) goto LAB_1013b41dc;
                  if (puVar22 == puVar19) goto LAB_1013b4074;
code_r0x0001013b3fc0:
                  puVar18 = puVar18 + (long)puVar17;
code_r0x0001013b3fc4:
                  cVar2 = puVar18[-2];
                  *(undefined **)(param_2 + 0x28) = puVar17 + -1;
                  if (cVar2 != 'l') goto LAB_1013b41dc;
                  puVar17 = &UNK_108cde34c;
                  puVar18 = (undefined *)0x4;
code_r0x0001013b3fe4:
                  bStack_d0 = (byte)puVar17;
                  bStack_cf = (byte)((ulong)puVar17 >> 8);
                  uStack_ce = (undefined6)((ulong)puVar17 >> 0x10);
                  bStack_c8 = (byte)puVar18;
                  uStack_c7 = (undefined7)((ulong)puVar18 >> 8);
                  uStack_c0 = 0x98;
                  uStack_bf = 0x108cb90;
                  uStack_b8 = 0x2b;
                  uStack_b7 = 0;
code_r0x0001013b3ff8:
                  uVar13 = 7;
                  goto LAB_1013b40e0;
                }
                goto LAB_1013b4074;
              }
              goto LAB_1013b41dc;
            }
            goto LAB_1013b4074;
          }
          if (uVar21 != 0x74) goto LAB_1013b3cc8;
          puVar22 = puVar17 + -4;
          *(undefined **)(param_2 + 0x28) = puVar22;
          puVar19 = puVar22;
          if (puVar22 <= puVar20) {
            puVar19 = puVar20;
          }
          if (puVar20 <= puVar22) goto LAB_1013b4074;
          cVar2 = (puVar18 + (long)puVar17)[-4];
          *(undefined **)(param_2 + 0x28) = puVar17 + -3;
          if (cVar2 != 'r') goto LAB_1013b41dc;
          if (puVar17 + -3 == puVar19) goto LAB_1013b4074;
          cVar2 = (puVar18 + (long)puVar17)[-3];
          *(undefined **)(param_2 + 0x28) = puVar17 + -2;
          if (cVar2 != 'u') goto LAB_1013b41dc;
          if (puVar17 + -2 == puVar19) goto LAB_1013b4074;
          cVar2 = (puVar18 + (long)puVar17)[-2];
          *(undefined **)(param_2 + 0x28) = puVar17 + -1;
          if (cVar2 != 'e') goto LAB_1013b41dc;
          bStack_d0 = 0x4c;
          bStack_cf = 0xe3;
          uStack_ce = 0x108cd;
          bStack_c8 = 4;
          uStack_c7 = 0;
          uStack_c0 = 0x98;
          uStack_bf = 0x108cb90;
          uStack_b8 = 0x2b;
          uStack_b7 = 0;
          uStack_140 = (byte *)CONCAT62(uStack_140._2_6_,0x100);
        }
        goto code_r0x0001013b40ec;
      }
      *(undefined **)(param_2 + 0x28) = puVar17 + -4;
      puVar17 = puVar17 + 1;
    } while ((long)puVar17 - (long)puVar20 != 5);
  }
  bStack_d0 = 5;
LAB_1013b370c:
  bStack_cf = 0;
  uStack_ce = 0;
  uVar8 = FUN_108831e8c(param_2,&bStack_d0);
  goto LAB_1013b3cf4;
LAB_1013b37b4:
  FUN_1011ddbc4(&bStack_d0,&pbStack_118);
  pbVar10 = pbStack_118;
  if (bStack_d0 == 1) {
    pbVar11 = (byte *)CONCAT71(uStack_c7,bStack_c8);
    goto LAB_1013b3b60;
  }
  if (bStack_cf != 1) {
    if (uStack_164 != 0x19) {
      uStack_80 = (undefined1)uStack_100;
      uStack_7f = (undefined7)(uStack_100 >> 8);
      uStack_88 = SUB81(pbStack_108,0);
      uStack_87 = (undefined7)((ulong)pbStack_108 >> 8);
      pbStack_78 = pbStack_f8;
      pbVar11 = (byte *)(ulong)uStack_164;
      bStack_138 = 0x15;
      goto LAB_1013b3b6c;
    }
    uStack_140 = &UNK_108cde34c;
    bStack_138 = 4;
    uStack_137 = 0;
    bStack_d0 = (byte)&uStack_140;
    bStack_cf = (byte)((ulong)&uStack_140 >> 8);
    uStack_ce = (undefined6)((ulong)&uStack_140 >> 0x10);
    bStack_c8 = 0xa0;
    uStack_c7 = 0x100c7b3;
    pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_d0);
    goto code_r0x0001013b415c;
  }
  *(long *)(pbStack_118 + 0x28) = *(long *)(pbStack_118 + 0x28) + 1;
  pbStack_118[0x10] = 0;
  pbStack_118[0x11] = 0;
  pbStack_118[0x12] = 0;
  pbStack_118[0x13] = 0;
  pbStack_118[0x14] = 0;
  pbStack_118[0x15] = 0;
  pbStack_118[0x16] = 0;
  pbStack_118[0x17] = 0;
  __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
            (&bStack_d0,pbStack_118 + 0x18,pbStack_118);
  uVar3 = uStack_bf;
  pbVar11 = (byte *)CONCAT71(uStack_c7,bStack_c8);
  if (CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0)) == 2) goto LAB_1013b3b60;
  pbVar12 = (byte *)CONCAT71(uStack_bf,uStack_c0);
  if ((bStack_d0 & 1) == 0) {
    if ((pbVar12 == (byte *)0x4) && (*(int *)pbVar11 == 0x65707974)) {
LAB_1013b3924:
      if (uStack_164 != 0x19) {
        uStack_140 = &UNK_108cde34c;
        bStack_138 = 4;
        uStack_137 = 0;
        bStack_d0 = (byte)&uStack_140;
        bStack_cf = (byte)((ulong)&uStack_140 >> 8);
        uStack_ce = (undefined6)((ulong)&uStack_140 >> 0x10);
        bStack_c8 = 0xa0;
        uStack_c7 = 0x100c7b3;
        pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_d0);
        goto code_r0x0001013b415c;
      }
      uVar15 = *(ulong *)(pbVar10 + 0x28);
      if (*(ulong *)(pbVar10 + 0x20) <= uVar15) {
LAB_1013b4144:
        bStack_d0 = 3;
        bStack_cf = 0;
        uStack_ce = 0;
        auVar23._8_8_ = &bStack_d0;
        auVar23._0_8_ = pbVar10;
code_r0x0001013b4154:
        pbVar11 = (byte *)FUN_108831e8c(auVar23._0_8_,auVar23._8_8_);
code_r0x0001013b415c:
LAB_1013b3b60:
        do {
          FUN_100d03040(&pbStack_108);
          bStack_138 = 0x16;
LAB_1013b3b6c:
          param_2[0x48] = param_2[0x48] + 1;
          uStack_12f = uStack_87;
          uStack_137 = uStack_8f;
          uStack_130 = uStack_88;
          pbStack_120 = pbStack_78;
          uStack_128 = uStack_80;
          uStack_127 = uStack_7f;
          uStack_140 = pbVar11;
          auVar23 = FUN_100654604(param_2);
          pbVar10 = uStack_140;
          pbVar11 = auVar23._0_8_;
          bStack_c8 = bStack_138;
          uStack_c7 = uStack_137;
          bStack_d0 = (byte)uStack_140;
          bStack_cf = (byte)((ulong)uStack_140 >> 8);
          uStack_ce = (undefined6)((ulong)uStack_140 >> 0x10);
          uStack_b8 = uStack_128;
          uStack_b7 = uStack_127;
          uStack_c0 = uStack_130;
          uStack_bf = uStack_12f;
          pbStack_b0 = pbStack_120;
          uVar21 = extraout_w12_00;
          if (bStack_138 == 0x16) {
            pbStack_a8 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              lVar16 = *(long *)pbVar11;
              if (lVar16 == 1) {
                FUN_100de21d4(pbVar11 + 8);
              }
              else {
LAB_1013b3bcc:
                pbVar10 = uStack_140;
                bStack_c8 = bStack_138;
                uStack_c7 = uStack_137;
                uStack_c0 = uStack_130;
                uStack_bf = uStack_12f;
                uStack_b8 = uStack_128;
                uStack_b7 = uStack_127;
                pbStack_b0 = pbStack_120;
                pbStack_a8 = pbVar11;
                if ((lVar16 == 0) && (*(long *)(pbVar11 + 0x10) != 0)) {
                  _free(*(undefined8 *)(pbVar11 + 8));
                }
              }
LAB_1013b3d90:
              auVar23 = _free(pbVar11);
              uVar21 = extraout_w12_02;
            }
LAB_1013b3d98:
            bVar14 = 0x16;
          }
          else {
LAB_1013b3be4:
            pbVar11 = auVar23._0_8_;
            bStack_c8 = bStack_138;
            uStack_c7 = uStack_137;
            uStack_c0 = uStack_130;
            uStack_bf = uStack_12f;
            uStack_b8 = uStack_128;
            uStack_b7 = uStack_127;
            pbStack_b0 = pbStack_120;
            pbStack_a8 = pbVar11;
            if (pbVar11 == (byte *)0x0) {
              pbVar10 = (byte *)CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
              uStack_160 = CONCAT17(uStack_130,uStack_137);
              uStack_158 = uStack_12f;
              pbStack_149 = pbStack_120;
              uStack_151 = uStack_128;
              uStack_150 = uStack_127;
              bVar14 = bStack_138;
            }
            else {
              auVar23 = FUN_100e077ec((ulong)&bStack_d0 | 8);
              pbVar10 = pbVar11;
              uVar21 = extraout_w12_01;
              bVar14 = 0x16;
            }
          }
          pbVar12 = auVar23._8_8_;
          pbVar9 = auVar23._0_8_;
          if (bVar14 == 0x16) goto LAB_1013b40fc;
          uStack_c7 = uStack_158;
          bStack_cf = (byte)uStack_160;
          uStack_ce = (undefined6)((ulong)uStack_160 >> 8);
          bStack_c8 = (byte)((ulong)uStack_160 >> 0x38);
          uStack_b8 = SUB81(pbStack_149,0);
          uStack_b7 = (undefined7)((ulong)pbStack_149 >> 8);
          uStack_c0 = uStack_151;
          uStack_bf = uStack_150;
          puVar17 = (undefined *)((ulong)pbVar10 & 0xff);
          puVar18 = &UNK_108ca03de;
          puVar22 = (undefined *)(ulong)(byte)(&UNK_108ca03de)[(long)puVar17];
          puVar19 = &UNK_1013b3dd4 + (long)puVar22 * 4;
          bVar6 = false;
          bVar7 = false;
          bVar5 = false;
          puVar20 = puVar19;
          bStack_d0 = bVar14;
          bVar14 = (&UNK_108ca03de)[(long)puVar17];
          switch(puVar17) {
          default:
            pbVar12 = &bStack_d0;
          case (undefined *)0x41:
          case (undefined *)0x47:
          case (undefined *)0x5b:
          case (undefined *)0x5f:
          case (undefined *)0x65:
          case (undefined *)0x9d:
          case (undefined *)0xbb:
            pbVar9 = param_1;
code_r0x0001013b3ddc:
            func_0x00010049b9e4(pbVar9,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0x1:
            func_0x0001004805e8(param_1,&bStack_d0);
            return;
          case (undefined *)0x2:
            pbVar12 = &bStack_d0;
            pbVar9 = param_1;
          case (undefined *)0x70:
          case (undefined *)0xd3:
          case (undefined *)0xdf:
            func_0x0001004a98dc(pbVar9,pbVar12);
            return;
          case (undefined *)0x3:
            pbVar12 = &bStack_d0;
            pbVar9 = param_1;
          case (undefined *)0x7a:
          case (undefined *)0x90:
            func_0x000100465bb8(pbVar9,pbVar12);
            return;
          case (undefined *)0x4:
          case (undefined *)0x20:
          case (undefined *)0x2b:
          case (undefined *)0xce:
          case (undefined *)0xda:
            pbVar12 = &bStack_d0;
          case (undefined *)0x60:
            func_0x00010044181c(param_1,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0x5:
          case (undefined *)0x6a:
            pbVar12 = &bStack_d0;
          case (undefined *)0x38:
            func_0x0001004729e4(param_1,pbVar12);
            return;
          case (undefined *)0x6:
            pbVar12 = &bStack_d0;
          case (undefined *)0x7c:
          case (undefined *)0xa0:
          case (undefined *)0xc2:
            func_0x0001004884bc(param_1,pbVar12);
            return;
          case (undefined *)0x7:
          case (undefined *)0x42:
            pbVar12 = &bStack_d0;
          case (undefined *)0x6c:
          case (undefined *)0xc9:
            func_0x00010045bde4(param_1,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0x8:
            func_0x0001004321a0(param_1,&bStack_d0);
            return;
          case (undefined *)0x9:
            pbVar12 = &bStack_d0;
          case (undefined *)0x1f:
          case (undefined *)0x2a:
          case (undefined *)0xd0:
          case (undefined *)0xdc:
            pbVar9 = param_1;
code_r0x0001013b3e44:
            func_0x0001004ad050(pbVar9,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0xa:
            func_0x000100463ed4(param_1,&bStack_d0);
            return;
          case (undefined *)0xb:
            pbVar12 = &bStack_d0;
          case (undefined *)0x1c:
          case (undefined *)0x27:
          case (undefined *)0xcd:
          case (undefined *)0xd9:
            func_0x000100440c90(param_1,pbVar12);
            return;
          case (undefined *)0xc:
            pbVar12 = &bStack_d0;
          case (undefined *)0x88:
            pbVar9 = param_1;
code_r0x0001013b3e34:
            func_0x0001004a3938(pbVar9,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0xd:
            func_0x000100437c64(param_1,&bStack_d0);
            return;
          case (undefined *)0xe:
          case (undefined *)0x92:
            pbVar12 = &bStack_d0;
            pbVar9 = param_1;
          case (undefined *)0x1b:
          case (undefined *)0x26:
          case (undefined *)0x69:
          case (undefined *)0x6b:
          case (undefined *)0x6d:
          case (undefined *)0x6f:
          case (undefined *)0x71:
          case (undefined *)0x73:
          case (undefined *)0x75:
          case (undefined *)0x77:
          case (undefined *)0x79:
          case (undefined *)0x7b:
          case (undefined *)0x7d:
          case (undefined *)0x7f:
          case (undefined *)0x81:
          case (undefined *)0x83:
          case (undefined *)0x85:
          case (undefined *)0x87:
          case (undefined *)0x89:
          case (undefined *)0x8d:
          case (undefined *)0xd4:
          case (undefined *)0xe0:
            func_0x0001004a6a64(pbVar9,pbVar12);
            return;
          case (undefined *)0xf:
          case (undefined *)0x80:
            pbVar12 = &bStack_d0;
          case (undefined *)0x9e:
            func_0x000100459538(param_1,pbVar12);
            return;
          case (undefined *)0x10:
          case (undefined *)0x1d:
          case (undefined *)0x28:
          case (undefined *)0x43:
          case (undefined *)0x4f:
          case (undefined *)0x53:
          case (undefined *)0x57:
          case (undefined *)0x61:
          case (undefined *)0xa5:
          case (undefined *)0xa9:
          case (undefined *)0xd6:
          case (undefined *)0xe2:
            func_0x0001004ab534(param_1,&bStack_d0);
            return;
          case (undefined *)0x11:
          case (undefined *)0x6e:
            pbVar12 = &bStack_d0;
            pbVar9 = param_1;
          case (undefined *)0x76:
          case (undefined *)0xbc:
            func_0x00010042e768(pbVar9,pbVar12);
            return;
          case (undefined *)0x12:
          case (undefined *)0x34:
            pbVar12 = &bStack_d0;
          case (undefined *)0x78:
            func_0x00010044c018(param_1,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0x13:
            func_0x0001004497b4(param_1,&bStack_d0);
            return;
          case (undefined *)0x14:
          case (undefined *)0x3a:
          case (undefined *)0x68:
            pbVar12 = &bStack_d0;
            pbVar9 = param_1;
          case (undefined *)0xa8:
            func_0x00010044f2f0(pbVar9,pbVar12);
            return;
          case (undefined *)0x15:
          case (undefined *)0x72:
            pbVar12 = &bStack_d0;
            pbVar9 = param_1;
          case (undefined *)0x82:
            func_0x000100474e04(pbVar9,pbVar12);
            return;
          case (undefined *)0x16:
          case (undefined *)0x46:
          case (undefined *)0xae:
            pbVar12 = &bStack_d0;
          case (undefined *)0x32:
            func_0x0001004674f0(param_1,pbVar12);
            return;
          case (undefined *)0x17:
            pbVar12 = &bStack_d0;
          case (undefined *)0x56:
          case (undefined *)0xc3:
            func_0x00010047f9b0(param_1,pbVar12);
            return;
          case (undefined *)0x18:
          case (undefined *)0x23:
          case (undefined *)0x2e:
          case (undefined *)0xd1:
          case (undefined *)0xdd:
            pbVar12 = &bStack_d0;
          case (undefined *)0x7e:
            func_0x00010045f84c(param_1,pbVar12);
code_r0x0001013b3cfc:
            return;
          case (undefined *)0x1a:
          case (undefined *)0x25:
          case (undefined *)0xd2:
          case (undefined *)0xde:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x1e:
          case (undefined *)0x29:
          case (undefined *)0x5a:
          case (undefined *)0xcc:
          case (undefined *)0xd8:
            goto code_r0x0001013b3e34;
          case (undefined *)0x21:
          case (undefined *)0x2c:
          case (undefined *)0x8e:
          case (undefined *)0xd5:
          case (undefined *)0xe1:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x22:
          case (undefined *)0x2d:
          case (undefined *)0xba:
          case (undefined *)0xcf:
          case (undefined *)0xdb:
            return;
          case (undefined *)0x30:
            goto code_r0x0001013b3f84;
          case (undefined *)0x31:
          case (undefined *)0x33:
          case (undefined *)0x35:
          case (undefined *)0x59:
          case (undefined *)0x63:
          case (undefined *)0x67:
          case (undefined *)0x9f:
          case (undefined *)0xa1:
            goto code_r0x0001013b3de8;
          case (undefined *)0x3b:
          case (undefined *)0x55:
          case (undefined *)0x99:
          case (undefined *)0x9b:
          case (undefined *)0xa7:
          case (undefined *)0xe5:
          case (undefined *)0xe7:
          case (undefined *)0xe9:
          case (undefined *)0xeb:
          case (undefined *)0xed:
          case (undefined *)0xef:
          case (undefined *)0xf1:
          case (undefined *)0xf3:
          case (undefined *)0xf5:
          case (undefined *)0xf7:
          case (undefined *)0xf9:
          case (undefined *)0xfb:
          case (undefined *)0xfd:
          case (undefined *)0xff:
            goto code_r0x0001013b3ddc;
          case (undefined *)0x3c:
            goto code_r0x0001013b418c;
          case (undefined *)0x3e:
            goto code_r0x0001013b407c;
          case (undefined *)0x40:
            goto code_r0x0001013b40ec;
          case (undefined *)0x44:
            goto code_r0x0001013b417c;
          case (undefined *)0x45:
          case (undefined *)0x4b:
          case (undefined *)0x5d:
          case (undefined *)0x97:
LAB_1013b3de4:
            pbVar11 = (byte *)CONCAT71(uStack_137,bStack_138);
code_r0x0001013b3de8:
LAB_1013b3b58:
            FUN_100e077ec(&puStack_f0);
            break;
          case (undefined *)0x48:
          case (undefined *)0xb6:
            goto code_r0x0001013b4174;
          case (undefined *)0x49:
          case (undefined *)0x4d:
          case (undefined *)0x51:
          case (undefined *)0x96:
          case (undefined *)0xa3:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x4a:
            goto code_r0x0001013b4030;
          case (undefined *)0x4c:
          case (undefined *)0xfc:
            goto LAB_1013b4000;
          case (undefined *)0x4e:
            goto code_r0x0001013b4170;
          case (undefined *)0x50:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x52:
            goto code_r0x0001013b40d0;
          case (undefined *)0x54:
            goto code_r0x0001013b4194;
          case (undefined *)0x58:
            goto code_r0x0001013b3fb4;
          case (undefined *)0x5c:
            goto code_r0x0001013b3fc4;
          case (undefined *)0x5e:
          case (undefined *)0x64:
          case (undefined *)0x9c:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x62:
          case (undefined *)0xa4:
            goto code_r0x0001013b415c;
          case (undefined *)0x66:
          case (undefined *)0xc5:
            goto code_r0x0001013b4080;
          case (undefined *)0x74:
            return;
          case (undefined *)0x84:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x86:
            goto code_r0x0001013b3cfc;
          case (undefined *)0x8c:
            return;
          case (undefined *)0x98:
            goto code_r0x0001013b40d4;
          case (undefined *)0x9a:
            goto code_r0x0001013b4198;
          case (undefined *)0xa2:
            goto code_r0x0001013b4164;
          case (undefined *)0xa6:
          case (undefined *)0xfa:
            goto code_r0x0001013b3fe4;
          case (undefined *)0xac:
            goto code_r0x0001013b40a0;
          case (undefined *)0xb0:
            goto code_r0x0001013b3fac;
          case (undefined *)0xb2:
          case (undefined *)0xc4:
            goto code_r0x0001013b3e44;
          case (undefined *)0xb4:
            goto code_r0x0001013b4104;
          case (undefined *)0xb8:
            goto code_r0x0001013b4038;
          case (undefined *)0xbe:
            goto code_r0x0001013b41c8;
          case (undefined *)0xc1:
          case (undefined *)0xe8:
            goto code_r0x0001013b4024;
          case (undefined *)0xc6:
            goto LAB_1013b40fc;
          case (undefined *)0xc7:
            goto code_r0x0001013b3fc0;
          case (undefined *)0xc8:
            goto code_r0x0001013b4188;
          case (undefined *)0xca:
            goto code_r0x0001013b4154;
          case (undefined *)0xe4:
            goto code_r0x0001013b404c;
          case (undefined *)0xe6:
            goto code_r0x0001013b405c;
          case (undefined *)0xea:
            goto code_r0x0001013b403c;
          case (undefined *)0xec:
            goto code_r0x0001013b3ff8;
          case (undefined *)0xee:
            goto code_r0x0001013b406c;
          case (undefined *)0xf0:
            goto code_r0x0001013b4084;
          case (undefined *)0xf2:
            goto code_r0x0001013b4044;
          case (undefined *)0xf4:
            goto code_r0x0001013b409c;
          case (undefined *)0xf6:
            goto code_r0x0001013b4018;
          case (undefined *)0xf8:
            goto LAB_1013b408c;
          case (undefined *)0xfe:
            goto LAB_1013b4074;
          }
        } while( true );
      }
      while( true ) {
        bVar14 = *(byte *)(*(long *)(pbVar10 + 0x18) + uVar15);
        if (0x3a < bVar14) goto LAB_1013b424c;
        if ((1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) break;
        uVar15 = uVar15 + 1;
        *(ulong *)(pbVar10 + 0x28) = uVar15;
        if (*(ulong *)(pbVar10 + 0x20) == uVar15) goto LAB_1013b4144;
      }
      if ((ulong)bVar14 != 0x3a) {
LAB_1013b424c:
        bStack_d0 = 6;
        bStack_cf = 0;
        uStack_ce = 0;
        pbVar11 = (byte *)FUN_108831e8c(pbVar10,&bStack_d0);
        goto code_r0x0001013b415c;
      }
      *(ulong *)(pbVar10 + 0x28) = uVar15 + 1;
      FUN_1013063c0(&uStack_140,pbVar10);
      if ((char)uStack_140 == '\x01') {
        pbVar11 = (byte *)CONCAT71(uStack_137,bStack_138);
        goto LAB_1013b3b60;
      }
      uStack_164 = (uint)uStack_140._1_1_;
      goto LAB_1013b37b4;
    }
    uVar13 = 0xd;
    pbVar9 = pbVar12;
  }
  else {
    if (pbVar12 != (byte *)0x4) {
      if (pbVar12 != (byte *)0x0) goto LAB_1013b3858;
      pbVar9 = (byte *)0x1;
    }
    else {
      if (*(int *)pbVar11 == 0x65707974) goto LAB_1013b3924;
LAB_1013b3858:
      pbVar9 = (byte *)_malloc(pbVar12);
      if (pbVar9 == (byte *)0x0) {
        func_0x0001087c9084(1,pbVar12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013b4274);
        (*pcVar4)();
      }
    }
    _memcpy(pbVar9,pbVar11,pbVar12);
    uVar13 = 0xc;
    pbVar11 = pbVar12;
  }
  puStack_f0 = (undefined *)CONCAT71(puStack_f0._1_7_,uVar13);
  uStack_e8 = SUB87(pbVar11,0);
  uStack_e1 = (undefined1)((ulong)pbVar11 >> 0x38);
  uStack_e0 = SUB87(pbVar9,0);
  uStack_d9 = (undefined1)((ulong)pbVar9 >> 0x38);
  uStack_d8 = SUB87(pbVar12,0);
  uStack_d1 = (undefined1)((uint7)uVar3 >> 0x30);
  uVar15 = *(ulong *)(pbVar10 + 0x28);
  if (*(ulong *)(pbVar10 + 0x20) <= uVar15) {
LAB_1013b3b40:
    bStack_d0 = 3;
    bStack_cf = 0;
    uStack_ce = 0;
    pbVar11 = (byte *)FUN_108831e8c(pbVar10,&bStack_d0);
    goto LAB_1013b3b58;
  }
  while( true ) {
    bVar14 = *(byte *)(*(long *)(pbVar10 + 0x18) + uVar15);
    if (0x3a < bVar14) goto LAB_1013b419c;
    if ((1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) break;
    uVar15 = uVar15 + 1;
    *(ulong *)(pbVar10 + 0x28) = uVar15;
    if (*(ulong *)(pbVar10 + 0x20) == uVar15) goto LAB_1013b3b40;
  }
  if ((ulong)bVar14 != 0x3a) {
LAB_1013b419c:
    bStack_d0 = 6;
    bStack_cf = 0;
    uStack_ce = 0;
    pbVar11 = (byte *)FUN_108831e8c(pbVar10,&bStack_d0);
    goto LAB_1013b3b58;
  }
  *(ulong *)(pbVar10 + 0x28) = uVar15 + 1;
  func_0x0001016043b4(&uStack_140,pbVar10);
  pbVar11 = pbStack_f8;
  if ((char)uStack_140 == '\x16') goto LAB_1013b3de4;
  pbStack_a8 = (byte *)CONCAT71(uStack_137,bStack_138);
  pbStack_b0 = uStack_140;
  uStack_98 = CONCAT71(uStack_127,uStack_128);
  uStack_a0 = CONCAT71(uStack_12f,uStack_130);
  bStack_c8 = (byte)uStack_e8;
  uStack_c7 = (undefined7)(CONCAT17(uStack_e1,uStack_e8) >> 8);
  bStack_d0 = (byte)puStack_f0;
  bStack_cf = (byte)((ulong)puStack_f0 >> 8);
  uStack_ce = (undefined6)((ulong)puStack_f0 >> 0x10);
  uStack_b8 = (undefined1)uStack_d8;
  uStack_b7 = (undefined7)(CONCAT17(uStack_d1,uStack_d8) >> 8);
  uStack_c0 = (undefined1)uStack_e0;
  uStack_bf = (undefined7)(CONCAT17(uStack_d9,uStack_e0) >> 8);
  if (pbStack_f8 == pbStack_108) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&pbStack_108);
  }
  puVar1 = (undefined8 *)(uStack_100 + (long)pbVar11 * 0x40);
  puVar1[1] = CONCAT71(uStack_c7,bStack_c8);
  *puVar1 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
  puVar1[3] = CONCAT71(uStack_b7,uStack_b8);
  puVar1[2] = CONCAT71(uStack_bf,uStack_c0);
  puVar1[5] = pbStack_a8;
  puVar1[4] = pbStack_b0;
  puVar1[7] = uStack_98;
  puVar1[6] = uStack_a0;
  pbStack_f8 = pbVar11 + 1;
  goto LAB_1013b37b4;
LAB_1013b4000:
  puVar22 = puVar17 + -4;
  *(undefined **)(param_2 + 0x28) = puVar22;
  puVar19 = puVar22;
  if (puVar22 <= puVar20) {
    puVar19 = puVar20;
  }
  if (puVar22 < puVar20) {
    puVar22 = puVar18 + (long)puVar17;
code_r0x0001013b4018:
    uVar21 = (uint)(byte)puVar22[-4];
    puVar22 = puVar17 + -3;
    *(undefined **)(param_2 + 0x28) = puVar22;
code_r0x0001013b4024:
    if (uVar21 == 0x61) {
      bVar6 = puVar22 == puVar19;
code_r0x0001013b4030:
      if (bVar6) goto LAB_1013b4074;
      puVar22 = puVar18 + (long)puVar17;
code_r0x0001013b4038:
      uVar21 = (uint)(byte)puVar22[-3];
code_r0x0001013b403c:
      puVar22 = puVar17 + -2;
      *(undefined **)(param_2 + 0x28) = puVar22;
code_r0x0001013b4044:
      if (uVar21 == 0x6c) {
code_r0x0001013b404c:
        if (puVar22 == puVar19) goto LAB_1013b4074;
        uVar21 = (uint)(byte)(puVar18 + (long)puVar17)[-2];
code_r0x0001013b405c:
        puVar22 = puVar17 + -1;
        *(undefined **)(param_2 + 0x28) = puVar22;
        if (uVar21 == 0x73) {
code_r0x0001013b406c:
          if (puVar22 == puVar19) goto LAB_1013b4074;
          puVar18 = puVar18 + (long)puVar17;
code_r0x0001013b4164:
          cVar2 = puVar18[-1];
          *(undefined **)(param_2 + 0x28) = puVar17;
          bVar7 = cVar2 == 'e';
code_r0x0001013b4170:
          if (bVar7) {
code_r0x0001013b4174:
            puVar17 = &UNK_108cde34c;
code_r0x0001013b417c:
            bStack_d0 = (byte)puVar17;
            bStack_cf = (byte)((ulong)puVar17 >> 8);
            uStack_ce = (undefined6)((ulong)puVar17 >> 0x10);
            bStack_c8 = 4;
            uStack_c7 = 0;
            puVar17 = &UNK_108cb9000;
code_r0x0001013b4188:
            puVar17 = puVar17 + 0x98;
code_r0x0001013b418c:
            uStack_c0 = SUB81(puVar17,0);
            uStack_bf = (undefined7)((ulong)puVar17 >> 8);
            uStack_b8 = 0x2b;
            uStack_b7 = 0;
code_r0x0001013b4194:
            uStack_140 = (byte *)((ulong)uStack_140 & 0xffffffffffff0000);
code_r0x0001013b4198:
code_r0x0001013b40ec:
            pbVar10 = (byte *)func_0x000108a4a50c(&uStack_140,&bStack_d0);
LAB_1013b40fc:
            pbVar9 = pbVar10;
            pbVar12 = param_2;
code_r0x0001013b4104:
            uVar8 = FUN_108832da4(pbVar9,pbVar12);
            goto LAB_1013b3cf4;
          }
        }
      }
    }
LAB_1013b41dc:
    bStack_d0 = 9;
  }
  else {
LAB_1013b4074:
    bStack_d0 = 5;
  }
  bStack_cf = 0;
  uStack_ce = 0;
code_r0x0001013b407c:
  pbVar12 = &bStack_d0;
code_r0x0001013b4080:
  pbVar9 = param_2;
code_r0x0001013b4084:
  uVar8 = FUN_10883295c(pbVar9,pbVar12);
LAB_1013b3cf4:
  param_1[0] = 0x1d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 8) = uVar8;
  return;
}

