
/* WARNING: Type propagation algorithm not settling */

void FUN_10143aa6c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *unaff_x21;
  byte *pbVar19;
  byte *pbVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  long *plStack_1b8;
  long *plStack_190;
  long *plStack_188;
  long *plStack_170;
  long *plStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  long *plStack_110;
  long *plStack_100;
  long *plStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *pbStack_78;
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    plVar3 = *(long **)(param_2 + 8);
    plVar22 = *(long **)(param_2 + 0x10);
    plVar18 = *(long **)(param_2 + 0x18);
    plVar2 = plVar22 + (long)plVar18 * 4;
    pbStack_a0 = (byte *)0x0;
    plVar21 = plVar22;
    uStack_c0 = plVar22;
    plStack_b0 = plVar3;
    plStack_a8 = plVar2;
    if (plVar18 == (long *)0x0) {
LAB_10143b020:
      plStack_b8 = plVar21;
      plVar14 = (long *)FUN_1087e422c(0,&UNK_10b22d260,&UNK_10b20a590);
    }
    else {
      plVar21 = plVar22 + 4;
      if ((char)*plVar22 == '\x16') goto LAB_10143b020;
      plVar15 = &uStack_90;
      uVar13 = *(undefined8 *)((long)plVar22 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)plVar22 + 9);
      uStack_90._1_1_ = (byte)uVar13;
      uStack_90._2_6_ = (undefined6)((ulong)uVar13 >> 8);
      uStack_88 = (undefined1)((ulong)uVar13 >> 0x38);
      pbStack_78 = (byte *)plVar22[3];
      uStack_80 = (undefined1)plVar22[2];
      uStack_7f = (undefined7)((ulong)plVar22[2] >> 8);
      pbStack_a0 = (byte *)0x1;
      plStack_b8 = plVar21;
      uStack_90._0_1_ = (char)*plVar22;
      FUN_1012ac184(&uStack_150,&uStack_90);
      plStack_190 = plStack_148;
      plVar14 = plStack_148;
      if ((int)uStack_150 != 1) {
        plStack_f8 = plStack_138;
        plStack_100 = plStack_140;
        pbStack_e8 = pbStack_128;
        pbStack_f0 = pbStack_130;
        if (plVar18 != (long *)0x1) {
          plVar21 = plVar22 + 8;
          plStack_b8 = plVar21;
          if ((char)plVar22[4] != '\x16') {
            uVar13 = *(undefined8 *)((long)plVar22 + 0x21);
            uStack_87 = (undefined7)*(undefined8 *)((long)plVar22 + 0x29);
            uStack_90._1_1_ = (byte)uVar13;
            uStack_90._2_6_ = (undefined6)((ulong)uVar13 >> 8);
            uStack_88 = (undefined1)((ulong)uVar13 >> 0x38);
            pbStack_78 = (byte *)plVar22[7];
            uStack_80 = (undefined1)plVar22[6];
            uStack_7f = (undefined7)((ulong)plVar22[6] >> 8);
            pbStack_a0 = (byte *)0x2;
            uStack_90._0_1_ = (char)plVar22[4];
            FUN_1012ac184(&uStack_150,&uStack_90);
            unaff_x21 = plStack_148;
            plVar14 = plStack_148;
            if ((uStack_150 & 1) != 0) goto LAB_10143b03c;
            plStack_d8 = plStack_138;
            plStack_e0 = plStack_140;
            pbStack_c8 = pbStack_128;
            pbStack_d0 = pbStack_130;
            if (plVar18 != (long *)0x2) {
              plVar21 = plVar22 + 0xc;
              cVar6 = (char)plVar22[8];
              plStack_b8 = plVar21;
              if (cVar6 != '\x16') {
                uVar13 = *(undefined8 *)((long)plVar22 + 0x41);
                uStack_87 = (undefined7)*(undefined8 *)((long)plVar22 + 0x49);
                uStack_90._1_1_ = (byte)uVar13;
                uStack_90._2_6_ = (undefined6)((ulong)uVar13 >> 8);
                uStack_88 = (undefined1)((ulong)uVar13 >> 0x38);
                pbStack_78 = (byte *)plVar22[0xb];
                uStack_80 = (undefined1)plVar22[10];
                uStack_7f = (undefined7)((ulong)plVar22[10] >> 8);
                pbStack_a0 = (byte *)0x3;
                uStack_90._0_1_ = cVar6;
                if (cVar6 == '\x10') {
LAB_10143b38c:
                  FUN_100e077ec(&uStack_90);
                  plVar18 = (long *)0x0;
                }
                else {
                  if (cVar6 == '\x11') {
                    puVar9 = (ulong *)CONCAT71(uStack_87,uStack_88);
                    plStack_148 = (long *)puVar9[1];
                    uStack_150 = *puVar9;
                    plStack_138 = (long *)puVar9[3];
                    plStack_140 = (long *)puVar9[2];
                    auVar25 = FUN_100614fd8(&uStack_150);
                    _free(puVar9);
                  }
                  else {
                    if (cVar6 == '\x12') goto LAB_10143b38c;
                    auVar25 = FUN_100614fd8(&uStack_90);
                  }
                  plVar15 = auVar25._8_8_;
                  plVar18 = (long *)(auVar25._0_8_ + 1);
                  plVar14 = plVar15;
                  if (plVar18 == (long *)0x2) goto LAB_10143b03c;
                }
                uStack_88 = SUB81(plStack_f8,0);
                uStack_87 = (undefined7)((ulong)plStack_f8 >> 8);
                uStack_90._0_1_ = (char)plStack_100;
                uStack_90._1_1_ = (byte)((ulong)plStack_100 >> 8);
                uStack_90._2_6_ = (undefined6)((ulong)plStack_100 >> 0x10);
                pbStack_78 = pbStack_e8;
                uStack_80 = SUB81(pbStack_f0,0);
                uStack_7f = (undefined7)((ulong)pbStack_f0 >> 8);
                plStack_168 = plStack_d8;
                plStack_170 = plStack_e0;
                pbStack_158 = pbStack_c8;
                pbStack_160 = pbStack_d0;
                plVar21 = (long *)FUN_100fbc738(&uStack_c0);
                if (plVar21 != (long *)0x0) {
                  plVar18 = (long *)0x2;
                  plVar15 = plVar21;
                }
                goto LAB_10143b1b4;
              }
            }
            plVar14 = (long *)FUN_1087e422c(2,&UNK_10b22d260,&UNK_10b20a590);
            goto LAB_10143b03c;
          }
        }
        plVar14 = (long *)FUN_1087e422c(1,&UNK_10b22d260,&UNK_10b20a590);
      }
    }
LAB_10143b03c:
    lVar16 = ((ulong)((long)plVar2 - (long)plVar21) >> 5) + 1;
    unaff_x21 = plVar18;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      unaff_x21 = plVar21 + 4;
      FUN_100e077ec(plVar21);
      plVar21 = unaff_x21;
    }
    if (plVar3 != (long *)0x0) {
      _free(plVar22);
    }
    plVar18 = (long *)0x2;
    plStack_190 = plVar2;
    plVar15 = plVar14;
  }
  else {
    if (bVar5 != 0x15) {
      plVar15 = (long *)FUN_108855b04(param_2,&plStack_170,&UNK_10b20b540);
      goto LAB_10143b1d0;
    }
    uStack_120 = *(undefined8 *)(param_2 + 8);
    pbStack_130 = *(byte **)(param_2 + 0x10);
    lVar16 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_130 + lVar16;
    uStack_150 = CONCAT71(uStack_150._1_7_,0x16);
    plStack_110 = (long *)0x0;
    pbStack_128 = pbStack_130;
    pbStack_118 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10143b15c:
      uStack_90._0_1_ = '\f';
      uStack_90._1_1_ = 2;
      uStack_90._2_6_ = 0x108cb;
      uStack_88 = 0x11;
      uStack_87 = 0;
      uStack_c0 = &uStack_90;
      plStack_b8 = (long *)&DAT_100c7b3a0;
      plVar15 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
LAB_10143b190:
      FUN_100d34830(&pbStack_130);
      if ((char)uStack_150 != '\x16') {
        FUN_100e077ec(&uStack_150);
      }
      plVar18 = (long *)0x2;
      plStack_190 = plVar15;
    }
    else {
      plVar21 = (long *)0x0;
      bVar11 = false;
      bVar10 = false;
      puVar24 = (undefined8 *)((ulong)&uStack_c0 | 1);
      puVar23 = (undefined8 *)((ulong)&uStack_150 | 1);
      puVar17 = (undefined8 *)((ulong)&uStack_90 | 1);
      unaff_x21 = (long *)0x2;
      pbVar7 = pbStack_130;
      pbStack_128 = pbStack_130;
      do {
        plVar3 = plStack_b0;
        plVar2 = plStack_b8;
        plVar18 = uStack_c0;
        pbVar19 = pbVar7 + 0x40;
        bVar4 = *pbVar7;
        pbVar20 = pbVar19;
        plVar22 = plVar21;
        if (bVar4 == 0x16) break;
        uStack_c0 = (long *)CONCAT71(uStack_c0._1_7_,bVar4);
        plVar22 = uStack_c0;
        uVar13 = *(undefined8 *)(pbVar7 + 0x10);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
        uVar13 = *(undefined8 *)(pbVar7 + 1);
        puVar24[1] = *(undefined8 *)(pbVar7 + 9);
        *puVar24 = uVar13;
        plStack_148 = *(long **)(pbVar7 + 0x28);
        uStack_150 = *(ulong *)(pbVar7 + 0x20);
        plStack_138 = *(long **)(pbVar7 + 0x38);
        plStack_140 = *(long **)(pbVar7 + 0x30);
        if (bVar4 < 0xd) {
          if (bVar4 == 1) {
            uStack_c0._1_1_ = SUB81(plVar18,1);
            uStack_90._1_1_ = uStack_c0._1_1_;
            if (2 < uStack_c0._1_1_) {
              uStack_90._1_1_ = 3;
            }
LAB_10143adc8:
            uStack_90._0_1_ = '\0';
            uStack_c0 = plVar22;
            goto LAB_10143adcc;
          }
          if (bVar4 == 4) {
            plVar18 = plStack_b8;
            if ((long *)0x2 < plStack_b8) {
              plVar18 = (long *)0x3;
            }
            uStack_90._1_1_ = (byte)plVar18;
            goto LAB_10143adc8;
          }
          if (bVar4 == 0xc) {
            if (plStack_a8 == (long *)0x10) {
              if (*plStack_b0 != 0x6b6f745f7473616c || plStack_b0[1] != 0x65676173755f6e65)
              goto LAB_10143ad2c;
              uStack_90._1_1_ = 1;
joined_r0x00010143afb8:
              uStack_90._0_1_ = '\0';
            }
            else if (plStack_a8 == (long *)0x14) {
              if ((*plStack_b0 != 0x6f635f6c65646f6d || plStack_b0[1] != 0x69775f747865746e) ||
                  (int)plStack_b0[2] != 0x776f646e) goto LAB_10143ad2c;
              uStack_90._1_1_ = 2;
              uStack_90._0_1_ = '\0';
            }
            else {
              if ((plStack_a8 != (long *)0x11) ||
                 ((*plStack_b0 != 0x6f745f6c61746f74 || plStack_b0[1] != 0x676173755f6e656b) ||
                  (char)plStack_b0[2] != 'e')) {
LAB_10143ad2c:
                uStack_90._1_1_ = 3;
                goto joined_r0x00010143afb8;
              }
              uStack_90._1_1_ = 0;
              uStack_90._0_1_ = '\0';
            }
joined_r0x00010143acf4:
            if (plVar2 != (long *)0x0) {
              _free(plVar3);
            }
          }
          else {
LAB_10143afc8:
            uVar13 = FUN_108855b04(&uStack_c0,&plStack_170,&UNK_10b20d360);
            uStack_88 = (undefined1)uVar13;
            uStack_87 = (undefined7)((ulong)uVar13 >> 8);
            uStack_90._0_1_ = '\x01';
          }
        }
        else {
          if (bVar4 == 0xd) {
            if (plStack_b0 == (long *)0x10) {
              if (*plStack_b8 != 0x6b6f745f7473616c || plStack_b8[1] != 0x65676173755f6e65)
              goto LAB_10143adc0;
              uStack_90._1_1_ = 1;
            }
            else if (plStack_b0 == (long *)0x14) {
              if ((*plStack_b8 != 0x6f635f6c65646f6d || plStack_b8[1] != 0x69775f747865746e) ||
                  (int)plStack_b8[2] != 0x776f646e) goto LAB_10143adc0;
              uStack_90._1_1_ = 2;
            }
            else if ((plStack_b0 == (long *)0x11) &&
                    ((*plStack_b8 == 0x6f745f6c61746f74 && plStack_b8[1] == 0x676173755f6e656b) &&
                     (char)plStack_b8[2] == 'e')) {
              uStack_90._1_1_ = 0;
            }
            else {
LAB_10143adc0:
              uStack_90._1_1_ = 3;
            }
            goto LAB_10143adc8;
          }
          if (bVar4 == 0xe) {
            FUN_100aecc38(&uStack_90,plStack_b0);
            goto joined_r0x00010143acf4;
          }
          if (bVar4 != 0xf) goto LAB_10143afc8;
          FUN_100aecc38(&uStack_90,plStack_b8,plStack_b0);
LAB_10143adcc:
          FUN_100e077ec(&uStack_c0);
        }
        if ((char)uStack_90 == '\x01') {
          plVar15 = (long *)CONCAT71(uStack_87,uStack_88);
LAB_10143b0cc:
          plStack_110 = (long *)((long)plVar21 + 1);
          pbStack_128 = pbVar19;
          goto LAB_10143b190;
        }
        cVar6 = (char)uStack_150;
        if (uStack_90._1_1_ < 2) {
          if (uStack_90._1_1_ == 0) {
            if (bVar10) {
              plStack_110 = (long *)((long)plVar21 + 1);
              uStack_90._0_1_ = '\f';
              uStack_90._1_1_ = 2;
              uStack_90._2_6_ = 0x108cb;
              uStack_88 = 0x11;
              uStack_87 = 0;
              uStack_c0 = &uStack_90;
              plStack_b8 = (long *)&DAT_100c7b3a0;
              pbStack_128 = pbVar19;
              plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
              goto LAB_10143b190;
            }
            uStack_150 = CONCAT71(uStack_150._1_7_,0x16);
            if (cVar6 == '\x16') goto LAB_10143b39c;
            uVar13 = *puVar23;
            puVar17[1] = puVar23[1];
            *puVar17 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar13;
            uStack_90._0_1_ = cVar6;
            FUN_1012ac184(&uStack_c0,&uStack_90);
            plStack_190 = plStack_b8;
            if (((ulong)uStack_c0 & 1) != 0) {
              plStack_110 = (long *)((long)plVar21 + 1);
              plVar15 = plStack_b8;
              pbStack_128 = pbVar19;
              goto LAB_10143b190;
            }
            plStack_f8 = plStack_a8;
            plStack_100 = plStack_b0;
            pbStack_e8 = pbStack_98;
            pbStack_f0 = pbStack_a0;
            bVar10 = true;
          }
          else {
            if (bVar11) {
              plStack_110 = (long *)((long)plVar21 + 1);
              uStack_90._0_1_ = -0x60;
              uStack_90._1_1_ = 0xcd;
              uStack_90._2_6_ = 0x108cd;
              uStack_88 = 0x10;
              uStack_87 = 0;
              uStack_c0 = &uStack_90;
              plStack_b8 = (long *)&DAT_100c7b3a0;
              pbStack_128 = pbVar19;
              plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
              goto LAB_10143b190;
            }
            uStack_150 = CONCAT71(uStack_150._1_7_,0x16);
            if (cVar6 == '\x16') goto LAB_10143b39c;
            uVar13 = *puVar23;
            puVar17[1] = puVar23[1];
            *puVar17 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar13;
            uStack_90._0_1_ = cVar6;
            FUN_1012ac184(&uStack_c0,&uStack_90);
            plStack_188 = plStack_b8;
            plVar15 = plStack_b8;
            if (((ulong)uStack_c0 & 1) != 0) goto LAB_10143b0cc;
            plStack_d8 = plStack_a8;
            plStack_e0 = plStack_b0;
            pbStack_c8 = pbStack_98;
            pbStack_d0 = pbStack_a0;
            bVar11 = true;
          }
        }
        else if (uStack_90._1_1_ == 2) {
          if (unaff_x21 != (long *)0x2) {
            plStack_110 = (long *)((long)plVar21 + 1);
            uStack_90._0_1_ = -0x6c;
            uStack_90._1_1_ = 0xb8;
            uStack_90._2_6_ = 0x108ca;
            uStack_88 = 0x14;
            uStack_87 = 0;
            uStack_c0 = &uStack_90;
            plStack_b8 = (long *)&DAT_100c7b3a0;
            pbStack_128 = pbVar19;
            plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
            goto LAB_10143b190;
          }
          uStack_150 = CONCAT71(uStack_150._1_7_,0x16);
          if (cVar6 == '\x16') goto LAB_10143b39c;
          uVar13 = *puVar23;
          puVar17[1] = puVar23[1];
          *puVar17 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar13;
          uStack_90._0_1_ = cVar6;
          if (cVar6 == '\x10') {
LAB_10143aea8:
            FUN_100e077ec(&uStack_90);
            unaff_x21 = (long *)0x0;
          }
          else {
            if (cVar6 == '\x11') {
              puVar8 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
              plStack_b8 = (long *)puVar8[1];
              uStack_c0 = (long *)*puVar8;
              plStack_a8 = (long *)puVar8[3];
              plStack_b0 = (long *)puVar8[2];
              auVar25 = FUN_100614fd8(&uStack_c0);
              _free(puVar8);
            }
            else {
              if (cVar6 == '\x12') goto LAB_10143aea8;
              auVar25 = FUN_100614fd8(&uStack_90);
            }
            plStack_1b8 = auVar25._8_8_;
            unaff_x21 = (long *)(auVar25._0_8_ + 1);
            plVar15 = plStack_1b8;
            if (unaff_x21 == (long *)0x2) goto LAB_10143b0cc;
          }
        }
        else {
          uStack_150 = CONCAT71(uStack_150._1_7_,0x16);
          if (cVar6 == '\x16') {
LAB_10143b39c:
            uStack_150 = CONCAT71(uStack_150._1_7_,0x16);
            plStack_110 = (long *)((long)plVar21 + 1);
            pbStack_128 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10143b3cc);
            (*pcVar12)();
          }
          uVar13 = *puVar23;
          puVar24[1] = puVar23[1];
          *puVar24 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar23 + 0xf);
          *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar23 + 0x17);
          *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
          uStack_c0 = (long *)CONCAT71(uStack_c0._1_7_,cVar6);
          FUN_100e077ec(&uStack_c0);
        }
        plVar21 = (long *)((long)plVar21 + 1);
        pbVar20 = pbVar1;
        plVar22 = (long *)((lVar16 - 0x40U >> 6) + 1);
        pbVar7 = pbVar19;
      } while (pbVar19 != pbVar1);
      pbStack_128 = pbVar20;
      plStack_110 = plVar22;
      if (!bVar10) goto LAB_10143b15c;
      if (!bVar11) {
        uStack_90._0_1_ = -0x60;
        uStack_90._1_1_ = 0xcd;
        uStack_90._2_6_ = 0x108cd;
        uStack_88 = 0x10;
        uStack_87 = 0;
        uStack_c0 = &uStack_90;
        plStack_b8 = (long *)&DAT_100c7b3a0;
        plVar15 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
        goto LAB_10143b190;
      }
      plStack_168 = plStack_d8;
      plStack_170 = plStack_e0;
      pbStack_158 = pbStack_c8;
      pbStack_160 = pbStack_d0;
      uStack_88 = SUB81(plStack_f8,0);
      uStack_87 = (undefined7)((ulong)plStack_f8 >> 8);
      uStack_90._0_1_ = (char)plStack_100;
      uStack_90._1_1_ = (byte)((ulong)plStack_100 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)plStack_100 >> 0x10);
      pbStack_78 = pbStack_e8;
      uStack_80 = SUB81(pbStack_f0,0);
      uStack_7f = (undefined7)((ulong)pbStack_f0 >> 8);
      FUN_100d34830(&pbStack_130);
      if (pbVar1 == pbVar20) {
        plVar21 = (long *)0x0;
      }
      else {
        uStack_c0 = plVar22;
        plVar21 = (long *)FUN_1087e422c((undefined *)
                                        (((ulong)((long)pbVar1 - (long)pbVar20) >> 6) +
                                        (long)plVar22),&uStack_c0,&UNK_10b23a190);
      }
      plVar18 = (long *)0x0;
      if (unaff_x21 != (long *)0x2) {
        plVar18 = unaff_x21;
      }
      unaff_x21 = plStack_188;
      plVar15 = plStack_1b8;
      if (plVar21 != (long *)0x0) {
        plVar18 = (long *)0x2;
        plVar15 = plVar21;
      }
    }
  }
LAB_10143b1b4:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (plVar18 != (long *)0x2) {
    param_1[4] = CONCAT71(uStack_87,uStack_88);
    param_1[3] = CONCAT62(uStack_90._2_6_,CONCAT11(uStack_90._1_1_,(char)uStack_90));
    param_1[6] = pbStack_78;
    param_1[5] = CONCAT71(uStack_7f,uStack_80);
    param_1[9] = plStack_168;
    param_1[8] = plStack_170;
    param_1[0xb] = pbStack_158;
    param_1[10] = pbStack_160;
    *param_1 = plVar18;
    param_1[1] = plVar15;
    param_1[2] = plStack_190;
    param_1[7] = unaff_x21;
    return;
  }
LAB_10143b1d0:
  *param_1 = 3;
  param_1[1] = plVar15;
  return;
}

