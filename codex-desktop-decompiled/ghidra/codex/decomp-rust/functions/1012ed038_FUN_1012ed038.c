
/* WARNING: Type propagation algorithm not settling */

void FUN_1012ed038(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  code *pcVar9;
  undefined1 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 uVar25;
  byte *pbVar26;
  byte *unaff_x23;
  undefined8 *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  long lVar30;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_248;
  byte *pbStack_230;
  byte *pbStack_220;
  byte *pbStack_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    pbVar16 = *(byte **)(param_2 + 8);
    pbVar22 = *(byte **)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18);
    pbVar28 = pbVar22 + lVar17 * 0x20;
    pbStack_108 = (byte *)0x0;
    pbVar26 = pbVar22;
    pbStack_128 = pbVar22;
    pbStack_118 = pbVar16;
    pbStack_110 = pbVar28;
    if (lVar17 == 0) {
LAB_1012ed134:
      pbStack_120 = pbVar26;
      pbVar11 = (byte *)FUN_1087e422c(0,&UNK_10b230818,&UNK_10b20a590);
LAB_1012ed150:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar11;
    }
    else {
      pbVar26 = pbVar22 + 0x20;
      if (*pbVar22 == 0x16) goto LAB_1012ed134;
      uVar12 = *(undefined8 *)(pbVar22 + 1);
      uStack_207 = (undefined7)*(undefined8 *)(pbVar22 + 9);
      uStack_210._1_3_ = (undefined3)uVar12;
      uStack_20c = (undefined4)((ulong)uVar12 >> 0x18);
      uStack_208 = (undefined1)((ulong)uVar12 >> 0x38);
      pbStack_1f8 = *(byte **)(pbVar22 + 0x18);
      uStack_200 = (undefined1)*(long *)(pbVar22 + 0x10);
      uStack_1ff = (undefined7)((ulong)*(long *)(pbVar22 + 0x10) >> 8);
      pbStack_108 = (byte *)0x1;
      uStack_210 = CONCAT31(uStack_210._1_3_,*pbVar22);
      pbStack_120 = pbVar26;
      FUN_1004b62d4(&uStack_f0,&uStack_210);
      pbVar8 = pbStack_e0;
      pbVar11 = pbStack_e8;
      pbVar7 = uStack_f0;
      if (uStack_f0 == (byte *)0x8000000000000000) goto LAB_1012ed150;
      if (lVar17 == 1) {
LAB_1012ed7e4:
        uVar12 = FUN_1087e422c(1,&UNK_10b230818,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar12;
      }
      else {
        pbVar26 = pbVar22 + 0x40;
        pbStack_120 = pbVar26;
        if (pbVar22[0x20] == 0x16) goto LAB_1012ed7e4;
        uVar12 = *(undefined8 *)(pbVar22 + 0x21);
        uStack_207 = (undefined7)*(undefined8 *)(pbVar22 + 0x29);
        uStack_210._1_3_ = (undefined3)uVar12;
        uStack_20c = (undefined4)((ulong)uVar12 >> 0x18);
        uStack_208 = (undefined1)((ulong)uVar12 >> 0x38);
        pbStack_1f8 = *(byte **)(pbVar22 + 0x38);
        uStack_200 = (undefined1)*(long *)(pbVar22 + 0x30);
        uStack_1ff = (undefined7)((ulong)*(long *)(pbVar22 + 0x30) >> 8);
        pbStack_108 = (byte *)0x2;
        uStack_210 = CONCAT31(uStack_210._1_3_,pbVar22[0x20]);
        func_0x000101383024(&uStack_f0,&uStack_210);
        pbVar24 = pbStack_e0;
        pbVar23 = pbStack_e8;
        pbVar29 = uStack_f0;
        if (uStack_f0 == (byte *)0x8000000000000000) {
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_e8;
        }
        else {
          pbStack_140 = uStack_f0;
          pbStack_138 = pbStack_e8;
          pbStack_130 = pbStack_e0;
          pbVar6 = pbVar23;
          if (lVar17 == 2) {
LAB_1012edd4c:
            pbVar13 = (byte *)FUN_1087e422c(2,&UNK_10b230818,&UNK_10b20a590);
LAB_1012edd64:
            *param_1 = 0x8000000000000000;
            param_1[1] = pbVar13;
          }
          else {
            pbVar26 = pbVar22 + 0x60;
            bVar2 = pbVar22[0x40];
            pbStack_120 = pbVar26;
            if (bVar2 == 0x16) goto LAB_1012edd4c;
            uStack_a7 = (undefined7)*(undefined8 *)(pbVar22 + 0x49);
            uStack_af = (undefined7)*(undefined8 *)(pbVar22 + 0x41);
            uStack_a8 = (undefined1)((ulong)*(undefined8 *)(pbVar22 + 0x41) >> 0x38);
            lStack_98 = *(long *)(pbVar22 + 0x58);
            uStack_a0 = (undefined1)*(long *)(pbVar22 + 0x50);
            uStack_9f = (undefined7)((ulong)*(long *)(pbVar22 + 0x50) >> 8);
            pbStack_108 = (byte *)0x3;
            bStack_b0 = bVar2;
            if (bVar2 == 0x10) {
LAB_1012edddc:
              uStack_210 = 0;
              uStack_20c = 0;
              uStack_208 = 0;
              uStack_207 = 0;
              FUN_100e077ec(&bStack_b0);
            }
            else if (bVar2 == 0x11) {
              puVar18 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
              pbStack_88 = (byte *)puVar18[1];
              uStack_90 = (byte *)*puVar18;
              uStack_78 = puVar18[3];
              pbStack_80 = (byte *)puVar18[2];
              FUN_10144fde0(&uStack_210,&uStack_90);
              _free(puVar18);
            }
            else {
              if (bVar2 == 0x12) goto LAB_1012edddc;
              FUN_10144fde0(&uStack_210,&bStack_b0);
            }
            pbVar13 = (byte *)CONCAT71(uStack_207,uStack_208);
            if ((uStack_210 & 1) != 0) goto LAB_1012edd64;
            pbStack_e8 = (byte *)CONCAT71(uStack_1ff,uStack_200);
            pbStack_e0 = pbStack_1f8;
            pbStack_d0 = pbStack_1e8;
            pbStack_d8 = pbStack_1f0;
            pbStack_c8 = pbStack_1e0;
            pbVar26 = pbVar28;
            uStack_f0 = pbVar13;
            if (lVar17 == 3) {
LAB_1012ede74:
              pbVar14 = (byte *)FUN_1087e422c(3,&UNK_10b230818,&UNK_10b20a590);
            }
            else {
              pbVar26 = pbVar22 + 0x80;
              pbStack_120 = pbVar26;
              if (pbVar22[0x60] == 0x16) goto LAB_1012ede74;
              uVar12 = *(undefined8 *)(pbVar22 + 0x61);
              uStack_207 = (undefined7)*(undefined8 *)(pbVar22 + 0x69);
              uStack_210._1_3_ = (undefined3)uVar12;
              uStack_20c = (undefined4)((ulong)uVar12 >> 0x18);
              uStack_208 = (undefined1)((ulong)uVar12 >> 0x38);
              pbStack_1f8 = *(byte **)(pbVar22 + 0x78);
              uStack_200 = (undefined1)*(long *)(pbVar22 + 0x70);
              uStack_1ff = (undefined7)((ulong)*(long *)(pbVar22 + 0x70) >> 8);
              pbStack_108 = (byte *)0x4;
              uStack_210 = CONCAT31(uStack_210._1_3_,pbVar22[0x60]);
              FUN_1004b62d4(&uStack_90,&uStack_210);
              pbVar14 = pbStack_88;
              if (uStack_90 != (byte *)0x8000000000000000) {
                param_1[4] = pbStack_138;
                param_1[3] = pbStack_140;
                param_1[10] = pbStack_e8;
                param_1[9] = uStack_f0;
                param_1[0xc] = pbStack_d8;
                param_1[0xb] = pbStack_e0;
                param_1[0xe] = pbStack_c8;
                param_1[0xd] = pbStack_d0;
                *param_1 = pbVar7;
                param_1[1] = pbVar11;
                param_1[2] = pbVar8;
                param_1[5] = pbStack_130;
                param_1[6] = uStack_90;
                param_1[7] = pbStack_88;
                param_1[8] = pbStack_80;
                uStack_1b8 = param_1[1];
                uStack_1c0 = *param_1;
                uStack_1a8 = param_1[3];
                uStack_1b0 = param_1[2];
                uStack_198 = param_1[5];
                uStack_1a0 = param_1[4];
                uStack_188 = param_1[7];
                uStack_190 = param_1[6];
                uStack_178 = param_1[9];
                uStack_180 = param_1[8];
                uStack_168 = param_1[0xb];
                uStack_170 = param_1[10];
                uStack_158 = param_1[0xd];
                uStack_160 = param_1[0xc];
                uStack_150 = param_1[0xe];
                lVar17 = FUN_100fbc738(&pbStack_128);
                if (lVar17 != 0) {
                  *param_1 = 0x8000000000000000;
                  param_1[1] = lVar17;
                  FUN_100e4f560(&uStack_1c0);
                }
                goto LAB_1012ed9bc;
              }
            }
            *param_1 = 0x8000000000000000;
            param_1[1] = pbVar14;
            if (pbVar13 != (byte *)0x0) {
              FUN_100cb56bc(&uStack_f0);
            }
          }
          for (; pbVar24 != (byte *)0x0; pbVar24 = pbVar24 + -1) {
            FUN_100e06c08(pbVar6);
            pbVar6 = pbVar6 + 0x38;
          }
          if (pbVar29 != (byte *)0x0) {
            _free(pbVar23);
          }
        }
      }
      if (pbVar7 != (byte *)0x0) {
        _free(pbVar11);
      }
    }
    lVar17 = ((ulong)((long)pbVar28 - (long)pbVar26) >> 5) + 1;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      FUN_100e077ec(pbVar26);
      pbVar26 = pbVar26 + 0x20;
    }
    if (pbVar16 != (byte *)0x0) {
      _free(pbVar22);
    }
    goto LAB_1012ed9bc;
  }
  if (bVar3 != 0x15) {
    uVar12 = FUN_108855b04(param_2,&bStack_b0,&UNK_10b20cc00);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar12;
    return;
  }
  pbStack_1e0 = *(byte **)(param_2 + 8);
  pbStack_1f0 = *(byte **)(param_2 + 0x10);
  lVar17 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar26 = pbStack_1f0 + lVar17;
  uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
  pbStack_1d0 = (byte *)0x0;
  pbStack_140 = (byte *)0x8000000000000000;
  pbStack_128 = (byte *)0x0;
  pbStack_1d8 = pbVar26;
  if (*(long *)(param_2 + 0x18) == 0) {
    pbStack_128 = (byte *)0x0;
    pbStack_140 = (byte *)0x8000000000000000;
    uVar5 = false;
    pbStack_220 = (byte *)0x8000000000000000;
    pbStack_1e8 = pbStack_1f0;
LAB_1012ed8b4:
    uStack_90 = &UNK_108c982f8;
    pbStack_88 = (byte *)0x8;
    uStack_f0 = (byte *)&uStack_90;
    pbStack_e8 = &DAT_100c7b3a0;
    uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_f0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar12;
    pbStack_218 = (byte *)0x0;
    unaff_x23 = pbStack_130;
joined_r0x0001012ed86c:
    uVar25 = true;
    uVar21 = true;
    uVar20 = true;
    uVar10 = true;
    pbStack_130 = unaff_x23;
  }
  else {
    pbVar28 = (byte *)0x0;
    pbStack_230 = (byte *)0x0;
    uVar5 = false;
    puVar19 = (undefined8 *)((ulong)&uStack_f0 | 1);
    puVar27 = (undefined8 *)((ulong)&uStack_210 | 1);
    puVar18 = (undefined8 *)((ulong)&bStack_b0 | 1);
    pbStack_220 = (byte *)0x8000000000000000;
    pbStack_218 = (byte *)0x8000000000000000;
    pbVar22 = (byte *)0x8000000000000000;
    pbVar16 = pbStack_1f0;
    pbStack_1e8 = pbStack_1f0;
    do {
      pbVar8 = pbStack_e0;
      pbVar7 = pbStack_e8;
      pbVar11 = uStack_f0;
      pbVar23 = pbVar16 + 0x40;
      bVar2 = *pbVar16;
      pbVar24 = pbVar23;
      pbVar29 = pbVar28;
      if (bVar2 == 0x16) break;
      uStack_f0 = (byte *)CONCAT71(uStack_f0._1_7_,bVar2);
      pbVar24 = uStack_f0;
      lVar30 = *(long *)(pbVar16 + 0x10);
      *(long *)((long)puVar19 + 0x17) = *(long *)(pbVar16 + 0x18);
      *(long *)((long)puVar19 + 0xf) = lVar30;
      uVar12 = *(undefined8 *)(pbVar16 + 1);
      puVar19[1] = *(undefined8 *)(pbVar16 + 9);
      *puVar19 = uVar12;
      pbStack_1f8 = *(byte **)(pbVar16 + 0x38);
      uStack_208 = (undefined1)*(long *)(pbVar16 + 0x28);
      uStack_207 = (undefined7)((ulong)*(long *)(pbVar16 + 0x28) >> 8);
      uStack_210 = (uint)*(long *)(pbVar16 + 0x20);
      uStack_20c = (undefined4)((ulong)*(long *)(pbVar16 + 0x20) >> 0x20);
      uStack_200 = (undefined1)*(long *)(pbVar16 + 0x30);
      uStack_1ff = (undefined7)((ulong)*(long *)(pbVar16 + 0x30) >> 8);
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          uStack_f0._1_1_ = SUB81(pbVar11,1);
          if (3 < uStack_f0._1_1_) {
            uStack_f0._1_1_ = 4;
          }
LAB_1012ed4fc:
          uStack_90._1_7_ = CONCAT61(uStack_90._2_6_,uStack_f0._1_1_);
          uStack_90 = (byte *)((ulong)uStack_90._1_7_ << 8);
          uStack_f0 = pbVar24;
          goto LAB_1012ed500;
        }
        if (bVar2 == 4) {
          pbVar16 = pbStack_e8;
          if ((byte *)0x3 < pbStack_e8) {
            pbVar16 = (byte *)0x4;
          }
          uStack_f0._1_1_ = (byte)pbVar16;
          goto LAB_1012ed4fc;
        }
        if (bVar2 == 0xc) {
          if ((long)pbStack_d8 < 0xe) {
            if (pbStack_d8 == (byte *)0x5) {
              if (*(int *)pbStack_e0 != 0x75706e69 || pbStack_e0[4] != 0x74) goto LAB_1012ed47c;
              uStack_90 = (byte *)CONCAT62(uStack_90._2_6_,0x100);
            }
            else if ((pbStack_d8 == (byte *)0x8) && (*(long *)pbStack_e0 == 0x6449646165726874)) {
              uStack_90 = (byte *)((ulong)uStack_90._2_6_ << 0x10);
            }
            else {
LAB_1012ed47c:
              uStack_90 = (byte *)CONCAT62(uStack_90._2_6_,0x400);
            }
          }
          else if (pbStack_d8 == (byte *)0xe) {
            if (*(long *)pbStack_e0 != 0x6465746365707865 ||
                *(long *)(pbStack_e0 + 6) != 0x64496e7275546465) goto LAB_1012ed47c;
            uStack_90 = (byte *)CONCAT62(uStack_90._2_6_,0x300);
          }
          else {
            if ((pbStack_d8 != (byte *)0x1a) ||
               (((*(long *)pbStack_e0 != 0x65736e6f70736572 ||
                 *(long *)(pbStack_e0 + 8) != 0x65696c4369706173) ||
                *(long *)(pbStack_e0 + 0x10) != 0x61646174654d746e) ||
                *(short *)(pbStack_e0 + 0x18) != 0x6174)) goto LAB_1012ed47c;
            uStack_90 = (byte *)CONCAT62(uStack_90._2_6_,0x200);
          }
joined_r0x0001012ed744:
          if (pbVar7 != (byte *)0x0) {
            _free(pbVar8);
          }
        }
        else {
LAB_1012ed754:
          pbStack_88 = (byte *)FUN_108855b04(&uStack_f0,&bStack_b0,&UNK_10b20d140);
          uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,1);
        }
      }
      else {
        if (bVar2 == 0xd) {
          if ((long)pbStack_e0 < 0xe) {
            if (pbStack_e0 == (byte *)0x5) {
              if (*(int *)pbStack_e8 != 0x75706e69 || pbStack_e8[4] != 0x74) goto LAB_1012ed4f4;
              uStack_f0._1_1_ = 1;
            }
            else if ((pbStack_e0 == (byte *)0x8) && (*(long *)pbStack_e8 == 0x6449646165726874)) {
              uStack_f0._1_1_ = 0;
            }
            else {
LAB_1012ed4f4:
              uStack_f0._1_1_ = 4;
            }
          }
          else if (pbStack_e0 == (byte *)0xe) {
            if (*(long *)pbStack_e8 != 0x6465746365707865 ||
                *(long *)(pbStack_e8 + 6) != 0x64496e7275546465) goto LAB_1012ed4f4;
            uStack_f0._1_1_ = 3;
          }
          else {
            if ((pbStack_e0 != (byte *)0x1a) ||
               (((*(long *)pbStack_e8 != 0x65736e6f70736572 ||
                 *(long *)(pbStack_e8 + 8) != 0x65696c4369706173) ||
                *(long *)(pbStack_e8 + 0x10) != 0x61646174654d746e) ||
                *(short *)(pbStack_e8 + 0x18) != 0x6174)) goto LAB_1012ed4f4;
            uStack_f0._1_1_ = 2;
          }
          goto LAB_1012ed4fc;
        }
        if (bVar2 == 0xe) {
          FUN_100ba8854(&uStack_90,pbStack_e0);
          goto joined_r0x0001012ed744;
        }
        if (bVar2 != 0xf) goto LAB_1012ed754;
        FUN_100ba8854(&uStack_90,pbStack_e8,pbStack_e0);
LAB_1012ed500:
        FUN_100e077ec(&uStack_f0);
      }
      uVar15 = uStack_210;
      pbVar16 = pbStack_88;
      if (((ulong)uStack_90 & 1) != 0) {
LAB_1012ed83c:
        param_1[1] = pbVar16;
        pbStack_138 = pbStack_248;
        pbStack_128 = pbStack_230;
        pbStack_120 = pbStack_258;
LAB_1012ed848:
        *param_1 = 0x8000000000000000;
        pbStack_140 = pbVar22;
LAB_1012ed84c:
        pbStack_1d0 = pbVar28 + 1;
        pbStack_1e8 = pbVar23;
        goto joined_r0x0001012ed86c;
      }
      bVar2 = (byte)uStack_210;
      pbStack_130 = unaff_x23;
      if (uStack_90._1_1_ < 2) {
        if (uStack_90._1_1_ != 0) {
          if (pbVar22 != (byte *)0x8000000000000000) {
            pbStack_1d0 = pbVar28 + 1;
            pbStack_120 = pbStack_258;
            pbStack_128 = pbStack_230;
            pbStack_138 = pbStack_248;
            uStack_90 = &UNK_108ca1048;
            pbStack_88 = (byte *)0x5;
            uStack_f0 = (byte *)&uStack_90;
            pbStack_e8 = &DAT_100c7b3a0;
            pbStack_1e8 = pbVar23;
            pbStack_140 = pbVar22;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_f0);
            goto LAB_1012ee0b0;
          }
          uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
          if (bVar2 == 0x16) {
            pbVar22 = (byte *)0x8000000000000000;
            goto LAB_1012ee13c;
          }
          uVar12 = *puVar27;
          puVar19[1] = puVar27[1];
          *puVar19 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
          uStack_f0 = (byte *)CONCAT71(uStack_f0._1_7_,bVar2);
          func_0x000101383024(&uStack_90,&uStack_f0);
          if (uStack_90 != (byte *)0x8000000000000000) {
            pbStack_248 = pbStack_88;
            pbVar22 = uStack_90;
            unaff_x23 = pbStack_80;
            goto LAB_1012ed1dc;
          }
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          pbStack_140 = (byte *)0x8000000000000000;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_88;
          goto LAB_1012ed84c;
        }
        if (pbStack_218 == (byte *)0x8000000000000000) {
          uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
          if (bVar2 == 0x16) {
            pbStack_1d0 = pbVar28 + 1;
            pbStack_120 = pbStack_258;
            pbStack_128 = pbStack_230;
            pbStack_138 = pbStack_248;
            pbStack_1e8 = pbVar23;
            pbStack_140 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012ee264;
          }
          uVar12 = *puVar27;
          puVar19[1] = puVar27[1];
          *puVar19 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
          uStack_f0 = (byte *)CONCAT71(uStack_f0._1_7_,bVar2);
          FUN_1004b62d4(&uStack_90,&uStack_f0);
          pbStack_218 = uStack_90;
          if (uStack_90 != (byte *)0x8000000000000000) {
            pbStack_260 = pbStack_88;
            pbStack_278 = pbStack_80;
            goto LAB_1012ed1dc;
          }
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          param_1[1] = pbStack_88;
          pbStack_218 = (byte *)0x0;
          goto LAB_1012ed848;
        }
        pbStack_1d0 = pbVar28 + 1;
        pbStack_120 = pbStack_258;
        pbStack_128 = pbStack_230;
        pbStack_138 = pbStack_248;
        uStack_90 = &UNK_108c982f8;
        pbStack_88 = (byte *)0x8;
        uStack_f0 = (byte *)&uStack_90;
        pbStack_e8 = &DAT_100c7b3a0;
        pbStack_1e8 = pbVar23;
        pbStack_140 = pbVar22;
        uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_f0);
LAB_1012ee0b0:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar12;
        unaff_x23 = pbStack_130;
        goto joined_r0x0001012ed86c;
      }
      if (uStack_90._1_1_ == 2) {
        if ((bool)uVar5) {
          pbStack_1d0 = pbVar28 + 1;
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          uStack_90 = &UNK_108cbf08d;
          pbStack_88 = (byte *)0x1a;
          uStack_f0 = (byte *)&uStack_90;
          pbStack_e8 = &DAT_100c7b3a0;
          pbStack_1e8 = pbVar23;
          pbStack_140 = pbVar22;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_f0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          uVar5 = true;
          unaff_x23 = pbStack_130;
          goto joined_r0x0001012ed86c;
        }
        uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
        if (bVar2 == 0x16) {
          pbStack_1d0 = pbVar28 + 1;
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          pbStack_1e8 = pbVar23;
          pbStack_140 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1012ee264;
        }
        uVar12 = *puVar27;
        puVar18[1] = puVar27[1];
        *puVar18 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar27 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
        bStack_b0 = bVar2;
        uVar15 = uVar15 & 0xff;
        if (uVar15 == 0x10) {
LAB_1012ed190:
          uStack_f0 = (byte *)0x0;
          pbStack_e8 = (byte *)0x0;
          bStack_b0 = bVar2;
          FUN_100e077ec(&bStack_b0);
LAB_1012ed1a0:
          pbStack_100 = pbStack_c8;
          pbStack_f8 = pbStack_c0;
        }
        else {
          if (uVar15 != 0x11) {
            if (uVar15 == 0x12) goto LAB_1012ed190;
            FUN_10144fde0(&uStack_f0,&bStack_b0);
            goto LAB_1012ed1a0;
          }
          puVar4 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          pbStack_88 = (byte *)puVar4[1];
          uStack_90 = (byte *)*puVar4;
          uStack_78 = puVar4[3];
          pbStack_80 = (byte *)puVar4[2];
          FUN_10144fde0(&uStack_f0,&uStack_90);
          _free(puVar4);
          pbStack_100 = pbStack_c8;
          pbStack_f8 = pbStack_c0;
        }
        pbStack_c8 = pbStack_100;
        if ((int)uStack_f0 == 1) {
          uVar5 = false;
          pbVar16 = pbStack_e8;
          goto LAB_1012ed83c;
        }
        pbStack_230 = (byte *)0x1;
        uVar5 = true;
        pbStack_258 = pbStack_e8;
        pbStack_118 = pbStack_e0;
        pbStack_110 = pbStack_d8;
        pbStack_108 = pbStack_d0;
        pbStack_c0 = pbStack_f8;
      }
      else if (uStack_90._1_1_ == 3) {
        if (pbStack_220 != (byte *)0x8000000000000000) {
          pbStack_1d0 = pbVar28 + 1;
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          uStack_90 = &UNK_108cbf137;
          pbStack_88 = (byte *)0xe;
          uStack_f0 = (byte *)&uStack_90;
          pbStack_e8 = &DAT_100c7b3a0;
          pbStack_1e8 = pbVar23;
          pbStack_140 = pbVar22;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_f0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          uVar10 = true;
          uVar25 = true;
          uVar21 = true;
          goto joined_r0x0001012edfe4;
        }
        uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
        if (bVar2 == 0x16) {
          pbStack_1d0 = pbVar28 + 1;
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          pbStack_1e8 = pbVar23;
          pbStack_140 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1012ee264;
        }
        uVar12 = *puVar27;
        puVar19[1] = puVar27[1];
        *puVar19 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar27 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
        uStack_f0 = (byte *)CONCAT71(uStack_f0._1_7_,bVar2);
        FUN_1004b62d4(&uStack_90,&uStack_f0);
        pbStack_220 = uStack_90;
        if (uStack_90 == (byte *)0x8000000000000000) {
          pbStack_1d0 = pbVar28 + 1;
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_88;
          uVar20 = true;
          uVar10 = true;
          uVar25 = true;
          pbStack_1e8 = pbVar23;
          pbStack_140 = pbVar22;
          goto LAB_1012ed924;
        }
        pbStack_268 = pbStack_88;
        pbStack_270 = pbStack_80;
      }
      else {
        uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
        if (bVar2 == 0x16) {
LAB_1012ee13c:
          uStack_210 = CONCAT31(uStack_210._1_3_,0x16);
          pbStack_1d0 = pbVar28 + 1;
          pbStack_120 = pbStack_258;
          pbStack_128 = pbStack_230;
          pbStack_138 = pbStack_248;
          pbStack_1e8 = pbVar23;
          pbStack_140 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012ee264:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1012ee268);
          (*pcVar9)();
        }
        uVar12 = *puVar27;
        puVar19[1] = puVar27[1];
        *puVar19 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar27 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
        uStack_f0 = (byte *)CONCAT71(uStack_f0._1_7_,bVar2);
        FUN_100e077ec(&uStack_f0);
      }
LAB_1012ed1dc:
      pbVar28 = pbVar28 + 1;
      pbVar24 = pbVar26;
      pbVar29 = (byte *)((lVar17 - 0x40U >> 6) + 1);
      pbVar16 = pbVar23;
    } while (pbVar23 != pbVar26);
    pbStack_120 = pbStack_258;
    pbStack_128 = pbStack_230;
    pbStack_138 = pbStack_248;
    pbStack_1e8 = pbVar24;
    pbStack_1d0 = pbVar29;
    pbStack_140 = pbVar22;
    pbStack_130 = unaff_x23;
    if (pbStack_218 == (byte *)0x8000000000000000) goto LAB_1012ed8b4;
    uVar10 = pbVar22 == (byte *)0x8000000000000000;
    if ((bool)uVar10) {
      uStack_90 = &UNK_108ca1048;
      pbStack_88 = (byte *)0x5;
      uStack_f0 = (byte *)&uStack_90;
      pbStack_e8 = &DAT_100c7b3a0;
      uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_f0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      uVar25 = true;
    }
    else {
      uStack_f0 = pbStack_258;
      pbVar28 = pbStack_118;
      pbVar16 = pbStack_110;
      pbVar11 = pbStack_108;
      pbVar7 = pbStack_100;
      pbVar8 = pbStack_f8;
      if (!(bool)uVar5) {
        uStack_f0 = (byte *)0x0;
        pbVar28 = pbStack_e8;
        pbVar16 = pbStack_e0;
        pbVar11 = pbStack_d8;
        pbVar7 = pbStack_d0;
        pbVar8 = pbStack_c8;
      }
      pbStack_c8 = pbVar8;
      pbStack_d0 = pbVar7;
      pbStack_d8 = pbVar11;
      pbStack_e0 = pbVar16;
      pbStack_e8 = pbVar28;
      if (pbStack_220 != (byte *)0x8000000000000000) {
        param_1[4] = pbStack_248;
        param_1[3] = pbVar22;
        param_1[10] = pbStack_e8;
        param_1[9] = uStack_f0;
        param_1[0xc] = pbStack_d8;
        param_1[0xb] = pbStack_e0;
        param_1[0xe] = pbStack_c8;
        param_1[0xd] = pbStack_d0;
        *param_1 = pbStack_218;
        param_1[1] = pbStack_260;
        param_1[2] = pbStack_278;
        param_1[5] = unaff_x23;
        param_1[6] = pbStack_220;
        param_1[7] = pbStack_268;
        param_1[8] = pbStack_270;
        uStack_1b8 = param_1[1];
        uStack_1c0 = *param_1;
        uStack_1a8 = param_1[3];
        uStack_1b0 = param_1[2];
        uStack_198 = param_1[5];
        uStack_1a0 = param_1[4];
        uStack_188 = param_1[7];
        uStack_190 = param_1[6];
        uStack_178 = param_1[9];
        uStack_180 = param_1[8];
        uStack_168 = param_1[0xb];
        uStack_170 = param_1[10];
        uStack_158 = param_1[0xd];
        uStack_160 = param_1[0xc];
        uStack_150 = param_1[0xe];
        FUN_100d34830(&pbStack_1f0);
        if (pbVar26 != pbVar24) {
          uStack_f0 = pbVar29;
          uVar12 = FUN_1087e422c(pbVar29 + ((ulong)((long)pbVar26 - (long)pbVar24) >> 6),&uStack_f0,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          FUN_100e4f560(&uStack_1c0);
        }
        goto LAB_1012ed9bc;
      }
      uVar25 = uVar5 ^ 1;
      bStack_b0 = 0x37;
      uStack_af = 0x108cbf1;
      uStack_a8 = 0xe;
      uStack_a7 = 0;
      uStack_90 = &bStack_b0;
      pbStack_88 = &DAT_100c7b3a0;
      uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      pbVar26 = pbStack_248;
      if (uStack_f0 != (byte *)0x0) {
        FUN_100cb56bc(&uStack_f0);
      }
      for (; unaff_x23 != (byte *)0x0; unaff_x23 = unaff_x23 + -1) {
        FUN_100e06c08(pbVar26);
        pbVar26 = pbVar26 + 0x38;
      }
      if (pbVar22 != (byte *)0x0) {
        _free(pbStack_248);
      }
    }
    if (pbStack_218 == (byte *)0x0) {
      pbStack_218 = (byte *)0x0;
      uVar21 = false;
      uVar20 = false;
    }
    else {
      _free(pbStack_260);
      uVar21 = false;
      uVar20 = false;
    }
  }
  if (pbStack_220 != (byte *)0x8000000000000000) {
joined_r0x0001012edfe4:
    uVar20 = uVar21;
    if (pbStack_220 != (byte *)0x0) {
      _free(pbStack_268);
    }
  }
LAB_1012ed924:
  if ((((bool)uVar25) && ((bool)uVar5)) && (pbStack_120 != (byte *)0x0)) {
    FUN_100cb56bc(&pbStack_120);
  }
  pbVar28 = pbStack_138;
  pbVar26 = pbStack_140;
  bVar1 = false;
  if (pbStack_140 != (byte *)0x8000000000000000) {
    bVar1 = (bool)uVar10;
  }
  pbVar16 = pbStack_138;
  pbVar22 = pbStack_130;
  if (bVar1) {
    for (; pbVar22 != (byte *)0x0; pbVar22 = pbVar22 + -1) {
      FUN_100e06c08(pbVar16);
      pbVar16 = pbVar16 + 0x38;
    }
    if (pbVar26 != (byte *)0x0) {
      _free(pbVar28);
    }
  }
  bVar1 = false;
  if (((ulong)pbStack_218 & 0x7fffffffffffffff) != 0) {
    bVar1 = (bool)uVar20;
  }
  if (bVar1) {
    _free(pbStack_260);
  }
  FUN_100d34830(&pbStack_1f0);
  if ((byte)uStack_210 != '\x16') {
    FUN_100e077ec(&uStack_210);
  }
LAB_1012ed9bc:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

