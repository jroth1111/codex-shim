
/* WARNING: Type propagation algorithm not settling */

void FUN_101462a14(float param_1,undefined8 *param_2,byte *param_3)

{
  byte *pbVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  byte bVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  long lVar27;
  undefined *puVar28;
  uint uVar29;
  float fVar30;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  float fStack_210;
  undefined *puStack_1e0;
  byte bStack_1c0;
  byte bStack_1bf;
  ushort uStack_1be;
  float fStack_1bc;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  float fStack_178;
  undefined4 uStack_174;
  byte *pbStack_170;
  byte *pbStack_168;
  long lStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  long lStack_130;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  bVar5 = *param_3;
  if (bVar5 != 0x14) {
    if (bVar5 == 0x15) {
      uStack_140 = *(undefined8 *)(param_3 + 8);
      pbStack_150 = *(byte **)(param_3 + 0x10);
      lVar19 = *(long *)(param_3 + 0x18) * 0x40;
      pbVar24 = pbStack_150 + lVar19;
      pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
      lStack_130 = 0;
      puStack_c8 = (undefined *)0x8000000000000000;
      pbStack_138 = pbVar24;
      if (*(long *)(param_3 + 0x18) == 0) {
        puStack_c8 = (undefined *)0x8000000000000000;
        puStack_1e0 = (undefined *)0x0;
        puVar28 = (undefined *)0x0;
        pbStack_148 = pbStack_150;
LAB_1014632f0:
        puStack_90 = &UNK_108c982e8;
        uStack_88 = 8;
        bStack_1c0 = (byte)&puStack_90;
        bStack_1bf = (byte)((ulong)&puStack_90 >> 8);
        uStack_1be = (ushort)((ulong)&puStack_90 >> 0x10);
        fStack_1bc = (float)((ulong)&puStack_90 >> 0x20);
        uStack_1b8 = 0xa0;
        uStack_1b7 = 0x100c7b3;
        uVar16 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_1c0);
        uStack_1b8 = (undefined1)uVar16;
        uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
        lStack_220 = lStack_b8;
        lStack_218 = lStack_c0;
joined_r0x000101463638:
        fStack_1bc = -0.0;
        uStack_1be = 0;
        bStack_1bf = 0;
        bStack_1c0 = 0;
        uVar17 = true;
        uVar12 = true;
        uVar13 = true;
        lStack_b8 = lStack_220;
        lStack_c0 = lStack_218;
joined_r0x000101463638:
        if ((((ulong)puVar28 & 0x7fffffffffffffff) != 0) && ((bool)uVar13)) {
          _free(lStack_230);
        }
joined_r0x0001014636a8:
        if ((((ulong)puStack_1e0 & 0x7fffffffffffffff) != 0) && ((bool)uVar12)) {
          _free(lStack_228);
        }
        lVar19 = lStack_c0;
        puVar28 = puStack_c8;
        bVar2 = false;
        if (puStack_c8 != (undefined *)0x8000000000000000) {
          bVar2 = (bool)uVar17;
        }
        if (bVar2) {
          if (lStack_b8 != 0) {
            puVar20 = (undefined8 *)(lStack_c0 + 0x20);
            lVar23 = lStack_b8;
            do {
              if (puVar20[-4] != 0) {
                _free(puVar20[-3]);
              }
              if (puVar20[-1] != 0) {
                _free(*puVar20);
              }
              if (puVar20[2] != 0) {
                _free(puVar20[3]);
              }
              puVar20 = puVar20 + 0xb;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if (puVar28 != (undefined *)0x0) {
            _free(lVar19);
          }
        }
LAB_1014633d0:
        FUN_100d34830(&pbStack_150);
        if ((byte)pbStack_170 != '\x16') {
          FUN_100e077ec(&pbStack_170);
        }
      }
      else {
        lVar23 = 0;
        bVar2 = false;
        puVar21 = (undefined8 *)((ulong)&bStack_1c0 | 1);
        puVar20 = (undefined8 *)((ulong)&pbStack_170 | 1);
        puStack_1e0 = (undefined *)0x8000000000000000;
        puVar28 = (undefined *)0x8000000000000000;
        puVar22 = (undefined *)0x8000000000000000;
        pbVar1 = pbStack_150;
        pbStack_148 = pbStack_150;
        fStack_210 = param_1;
        do {
          pbVar25 = pbVar1 + 0x40;
          bStack_1c0 = *pbVar1;
          lVar14 = lVar23;
          pbVar26 = pbVar25;
          if (bStack_1c0 == 0x16) break;
          uVar16 = *(undefined8 *)(pbVar1 + 0x10);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar16;
          uVar16 = *(undefined8 *)(pbVar1 + 1);
          puVar21[1] = *(undefined8 *)(pbVar1 + 9);
          *puVar21 = uVar16;
          pbStack_170 = *(byte **)(pbVar1 + 0x20);
          pbStack_168 = *(byte **)(pbVar1 + 0x28);
          pbStack_158 = SUB168(*(undefined1 (*) [16])(pbVar1 + 0x30),8);
          lStack_160 = SUB168(*(undefined1 (*) [16])(pbVar1 + 0x30),0);
          plVar3 = (long *)CONCAT71(uStack_1b7,uStack_1b8);
          plVar7 = (long *)CONCAT71(uStack_1af,uStack_1b0);
          if (0xc < bStack_1c0) {
            if (bStack_1c0 == 0xd) {
              if (plVar7 == (long *)0x18) {
                if ((*plVar3 == 0x5f6c6c617265766f && plVar3[1] == 0x6e656469666e6f63) &&
                    plVar3[2] == 0x65726f63735f6563) {
                  bVar18 = 3;
                }
                else {
LAB_101462df8:
                  bVar18 = 4;
                }
              }
              else if (plVar7 == (long *)0x13) {
                if ((*plVar3 == 0x5f6c6c617265766f && plVar3[1] == 0x6e74636572726f63) &&
                    *(long *)((long)plVar3 + 0xb) == 0x7373656e74636572) {
                  bVar18 = 1;
                }
                else {
                  if ((*plVar3 != 0x5f6c6c617265766f || plVar3[1] != 0x74616e616c707865) ||
                      *(long *)((long)plVar3 + 0xb) != 0x6e6f6974616e616c) goto LAB_101462df8;
                  bVar18 = 2;
                }
              }
              else {
                if ((plVar7 != (long *)0x8) || (*plVar3 != 0x73676e69646e6966)) goto LAB_101462df8;
                bVar18 = 0;
              }
              goto LAB_101462e00;
            }
            if (bStack_1c0 != 0xe) {
              if (bStack_1c0 != 0xf) goto LAB_1014630bc;
              FUN_100b21f6c(&uStack_b0,plVar3,plVar7);
              goto LAB_101462e04;
            }
            FUN_100b21f6c(&uStack_b0,plVar7);
            if (plVar3 != (long *)0x0) goto LAB_101462d14;
LAB_101462e0c:
            if (((ulong)uStack_b0 & 1) == 0) goto LAB_101462e14;
LAB_1014630e4:
            uStack_1b8 = (undefined1)lStack_a8;
            uStack_1b7 = (undefined7)((ulong)lStack_a8 >> 8);
            puStack_c8 = puVar22;
LAB_101463108:
            lStack_130 = lVar23 + 1;
            pbStack_148 = pbVar25;
            goto joined_r0x000101463638;
          }
          if (bStack_1c0 == 1) {
            bVar18 = bStack_1bf;
            if (3 < bStack_1bf) {
              bVar18 = 4;
            }
LAB_101462e00:
            uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar18);
            uStack_b0 = (undefined *)((ulong)uStack_b0._1_7_ << 8);
LAB_101462e04:
            FUN_100e077ec(&bStack_1c0);
            goto LAB_101462e0c;
          }
          if (bStack_1c0 == 4) {
            if ((long *)0x3 < plVar3) {
              plVar3 = (long *)0x4;
            }
            bVar18 = (byte)plVar3;
            goto LAB_101462e00;
          }
          if (bStack_1c0 != 0xc) {
LAB_1014630bc:
            lStack_a8 = FUN_108855b04(&bStack_1c0,&puStack_90,&UNK_10b20e160);
            uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,1);
            goto LAB_1014630e4;
          }
          if (puStack_1a8 == (undefined *)0x18) {
            if ((*plVar7 == 0x5f6c6c617265766f && plVar7[1] == 0x6e656469666e6f63) &&
                plVar7[2] == 0x65726f63735f6563) {
              uVar17 = 3;
            }
            else {
LAB_101462d04:
              uVar17 = 4;
            }
          }
          else if (puStack_1a8 == (undefined *)0x13) {
            if ((*plVar7 == 0x5f6c6c617265766f && plVar7[1] == 0x6e74636572726f63) &&
                *(long *)((long)plVar7 + 0xb) == 0x7373656e74636572) {
              uVar17 = 1;
            }
            else {
              if ((*plVar7 != 0x5f6c6c617265766f || plVar7[1] != 0x74616e616c707865) ||
                  *(long *)((long)plVar7 + 0xb) != 0x6e6f6974616e616c) goto LAB_101462d04;
              uVar17 = 2;
            }
          }
          else {
            if ((puStack_1a8 != (undefined *)0x8) || (*plVar7 != 0x73676e69646e6966))
            goto LAB_101462d04;
            uVar17 = 0;
          }
          uStack_b0 = (undefined *)((ulong)CONCAT61(uStack_b0._2_6_,uVar17) << 8);
          if (plVar3 == (long *)0x0) goto LAB_101462e0c;
LAB_101462d14:
          _free(plVar7);
          if (((ulong)uStack_b0 & 1) != 0) goto LAB_1014630e4;
LAB_101462e14:
          bVar18 = (byte)pbStack_170;
          if (uStack_b0._1_1_ < 2) {
            if (uStack_b0._1_1_ == 0) {
              if (puVar22 != (undefined *)0x8000000000000000) {
                lStack_130 = lVar23 + 1;
                lStack_c0 = lStack_218;
                lStack_b8 = lStack_220;
                uStack_b0 = &UNK_108c982e8;
                lStack_a8 = 8;
                bStack_1c0 = (byte)&uStack_b0;
                bStack_1bf = (byte)((ulong)&uStack_b0 >> 8);
                uStack_1be = (ushort)((ulong)&uStack_b0 >> 0x10);
                fStack_1bc = (float)((ulong)&uStack_b0 >> 0x20);
                uStack_1b8 = 0xa0;
                uStack_1b7 = 0x100c7b3;
                pbStack_148 = pbVar25;
                puStack_c8 = puVar22;
                uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1c0);
                goto LAB_101463a0c;
              }
              pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
              if (bVar18 == 0x16) {
                puVar22 = (undefined *)0x8000000000000000;
                goto LAB_101463a30;
              }
              uVar16 = *puVar20;
              puVar21[1] = puVar20[1];
              *puVar21 = uVar16;
              auVar6 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
              *(long *)((long)puVar21 + 0x17) = auVar6._8_8_;
              *(long *)((long)puVar21 + 0xf) = auVar6._0_8_;
              bStack_1c0 = bVar18;
              FUN_101249d5c(&uStack_b0,&bStack_1c0);
              if (uStack_b0 == (undefined *)0x8000000000000000) {
                puStack_c8 = (undefined *)0x8000000000000000;
                uStack_1b8 = (undefined1)lStack_a8;
                uStack_1b7 = (undefined7)((ulong)lStack_a8 >> 8);
                goto LAB_101463108;
              }
              lStack_220 = lStack_a0;
              lStack_218 = lStack_a8;
              puVar22 = uStack_b0;
            }
            else {
              if (puStack_1e0 != (undefined *)0x8000000000000000) {
                lStack_130 = lVar23 + 1;
                lStack_c0 = lStack_218;
                lStack_b8 = lStack_220;
                uStack_b0 = &UNK_108cae817;
                lStack_a8 = 0x13;
                bStack_1c0 = (byte)&uStack_b0;
                bStack_1bf = (byte)((ulong)&uStack_b0 >> 8);
                uStack_1be = (ushort)((ulong)&uStack_b0 >> 0x10);
                fStack_1bc = (float)((ulong)&uStack_b0 >> 0x20);
                uStack_1b8 = 0xa0;
                uStack_1b7 = 0x100c7b3;
                pbStack_148 = pbVar25;
                puStack_c8 = puVar22;
                uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1c0);
LAB_101463a0c:
                uStack_1b8 = (undefined1)uVar16;
                uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
                lStack_220 = lStack_b8;
                lStack_218 = lStack_c0;
                goto joined_r0x000101463638;
              }
              pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
              if (bVar18 == 0x16) {
                lStack_130 = lVar23 + 1;
                lStack_c0 = lStack_218;
                lStack_b8 = lStack_220;
                pbStack_148 = pbVar25;
                puStack_c8 = puVar22;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101463ad8;
              }
              uVar16 = *puVar20;
              puVar21[1] = puVar20[1];
              *puVar21 = uVar16;
              auVar6 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
              *(long *)((long)puVar21 + 0x17) = auVar6._8_8_;
              *(long *)((long)puVar21 + 0xf) = auVar6._0_8_;
              bStack_1c0 = bVar18;
              FUN_1004b62d4(&uStack_b0,&bStack_1c0);
              puStack_1e0 = uStack_b0;
              if (uStack_b0 == (undefined *)0x8000000000000000) {
                lStack_130 = lVar23 + 1;
                puStack_1e0 = (undefined *)0x0;
                uStack_1b8 = (undefined1)lStack_a8;
                uStack_1b7 = (undefined7)((ulong)lStack_a8 >> 8);
                puStack_c8 = puVar22;
                pbStack_148 = pbVar25;
                goto joined_r0x000101463638;
              }
              lStack_228 = lStack_a8;
              lStack_238 = lStack_a0;
            }
          }
          else if (uStack_b0._1_1_ == 2) {
            if (puVar28 != (undefined *)0x8000000000000000) {
              lStack_130 = lVar23 + 1;
              lStack_c0 = lStack_218;
              lStack_b8 = lStack_220;
              uStack_b0 = &UNK_108cae82a;
              lStack_a8 = 0x13;
              bStack_1c0 = (byte)&uStack_b0;
              bStack_1bf = (byte)((ulong)&uStack_b0 >> 8);
              uStack_1be = (ushort)((ulong)&uStack_b0 >> 0x10);
              fStack_1bc = (float)((ulong)&uStack_b0 >> 0x20);
              uStack_1b8 = 0xa0;
              uStack_1b7 = 0x100c7b3;
              pbStack_148 = pbVar25;
              puStack_c8 = puVar22;
              uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1c0);
              goto LAB_101463a0c;
            }
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar18 == 0x16) {
              lStack_130 = lVar23 + 1;
              lStack_c0 = lStack_218;
              lStack_b8 = lStack_220;
              pbStack_148 = pbVar25;
              puStack_c8 = puVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101463ad8;
            }
            uVar16 = *puVar20;
            puVar21[1] = puVar20[1];
            *puVar21 = uVar16;
            auVar6 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
            *(long *)((long)puVar21 + 0x17) = auVar6._8_8_;
            *(long *)((long)puVar21 + 0xf) = auVar6._0_8_;
            bStack_1c0 = bVar18;
            FUN_1004b62d4(&uStack_b0,&bStack_1c0);
            if (uStack_b0 == (undefined *)0x8000000000000000) {
              lStack_130 = lVar23 + 1;
              bStack_1c0 = 0;
              bStack_1bf = 0;
              uStack_1be = 0;
              fStack_1bc = -0.0;
              uStack_1b8 = (undefined1)lStack_a8;
              uStack_1b7 = (undefined7)((ulong)lStack_a8 >> 8);
              uVar17 = true;
              uVar12 = true;
              lStack_b8 = lStack_220;
              lStack_c0 = lStack_218;
              puStack_c8 = puVar22;
              pbStack_148 = pbVar25;
              goto joined_r0x0001014636a8;
            }
            lStack_230 = lStack_a8;
            lStack_240 = lStack_a0;
            puVar28 = uStack_b0;
          }
          else if (uStack_b0._1_1_ == 3) {
            if (bVar2) {
              lStack_130 = lVar23 + 1;
              lStack_c0 = lStack_218;
              lStack_b8 = lStack_220;
              uStack_b0 = &UNK_108cae83d;
              lStack_a8 = 0x18;
              bStack_1c0 = (byte)&uStack_b0;
              bStack_1bf = (byte)((ulong)&uStack_b0 >> 8);
              uStack_1be = (ushort)((ulong)&uStack_b0 >> 0x10);
              fStack_1bc = (float)((ulong)&uStack_b0 >> 0x20);
              uStack_1b8 = 0xa0;
              uStack_1b7 = 0x100c7b3;
              pbStack_148 = pbVar25;
              puStack_c8 = puVar22;
              uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1c0);
              goto LAB_101463a0c;
            }
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar18 == 0x16) goto LAB_101463a30;
            uVar16 = *puVar20;
            puVar21[1] = puVar20[1];
            *puVar21 = uVar16;
            auVar6 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
            *(long *)((long)puVar21 + 0x17) = auVar6._8_8_;
            *(long *)((long)puVar21 + 0xf) = auVar6._0_8_;
            bStack_1c0 = bVar18;
            switch(bVar18) {
            case 1:
              fStack_210 = (float)NEON_ucvtf((uint)bStack_1bf);
              break;
            case 2:
              fStack_210 = (float)NEON_ucvtf((uint)uStack_1be);
              break;
            case 3:
              fStack_210 = (float)NEON_ucvtf(fStack_1bc);
              break;
            case 4:
              fStack_210 = (float)CONCAT71(uStack_1b7,uStack_1b8);
              break;
            case 5:
              fStack_210 = (float)(int)(short)(char)bStack_1bf;
              break;
            case 6:
              fStack_210 = (float)(int)(short)uStack_1be;
              break;
            case 7:
              fStack_210 = (float)(int)fStack_1bc;
              break;
            case 8:
              fStack_210 = (float)CONCAT71(uStack_1b7,uStack_1b8);
              break;
            case 9:
              fStack_210 = fStack_1bc;
              break;
            case 10:
              uVar29 = 0x3f800000;
              if (0x7fffffffffffffff < CONCAT71(uStack_1b7,uStack_1b8)) {
                uVar29 = 0xbf800000;
              }
              fStack_210 = (float)(uVar29 ^ (uVar29 ^ (uint)(float)(double)CONCAT71(uStack_1b7,
                                                                                    uStack_1b8)) &
                                            0x7fffffff);
              break;
            default:
              lStack_130 = lVar23 + 1;
              lStack_c0 = lStack_218;
              lStack_b8 = lStack_220;
              pbStack_148 = pbVar25;
              puStack_c8 = puVar22;
              uVar16 = FUN_108855b04(&bStack_1c0,&puStack_90,&UNK_10b23a1d0);
              goto LAB_101463a0c;
            }
            FUN_100e077ec(&bStack_1c0);
            bVar2 = true;
          }
          else {
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar18 == 0x16) {
LAB_101463a30:
              pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
              lStack_130 = lVar23 + 1;
              lStack_c0 = lStack_218;
              lStack_b8 = lStack_220;
              pbStack_148 = pbVar25;
              puStack_c8 = puVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101463ad8:
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x101463adc);
              (*pcVar11)();
            }
            uVar16 = *puVar20;
            puVar21[1] = puVar20[1];
            *puVar21 = uVar16;
            auVar6 = *(undefined1 (*) [16])((long)puVar20 + 0xf);
            *(long *)((long)puVar21 + 0x17) = auVar6._8_8_;
            *(long *)((long)puVar21 + 0xf) = auVar6._0_8_;
            bStack_1c0 = bVar18;
            FUN_100e077ec(&bStack_1c0);
          }
          lVar23 = lVar23 + 1;
          lVar14 = (lVar19 - 0x40U >> 6) + 1;
          pbVar26 = pbVar24;
          pbVar1 = pbVar25;
        } while (pbVar25 != pbVar24);
        lStack_c0 = lStack_218;
        lStack_b8 = lStack_220;
        pbStack_148 = pbVar26;
        lStack_130 = lVar14;
        puStack_c8 = puVar22;
        if (puVar22 == (undefined *)0x8000000000000000) goto LAB_1014632f0;
        lStack_a8 = lStack_218;
        lStack_a0 = lStack_220;
        uVar12 = puStack_1e0 == (undefined *)0x8000000000000000;
        uStack_b0 = puVar22;
        if ((bool)uVar12) {
          puStack_90 = &UNK_108cae817;
          uStack_88 = 0x13;
          bStack_1c0 = (byte)&puStack_90;
          bStack_1bf = (byte)((ulong)&puStack_90 >> 8);
          uStack_1be = (ushort)((ulong)&puStack_90 >> 0x10);
          fStack_1bc = (float)((ulong)&puStack_90 >> 0x20);
          uStack_1b8 = 0xa0;
          uStack_1b7 = 0x100c7b3;
          uVar16 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_1c0);
          bStack_1c0 = 0;
          bStack_1bf = 0;
          uStack_1be = 0;
          fStack_1bc = -0.0;
          uStack_1b8 = (undefined1)uVar16;
          uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
          uVar13 = true;
LAB_101463700:
          lVar19 = lStack_a8;
          if (lStack_a0 != 0) {
            puVar20 = (undefined8 *)(lStack_a8 + 0x20);
            lVar23 = lStack_a0;
            do {
              if (puVar20[-4] != 0) {
                _free(puVar20[-3]);
              }
              if (puVar20[-1] != 0) {
                _free(*puVar20);
              }
              if (puVar20[2] != 0) {
                _free(puVar20[3]);
              }
              puVar20 = puVar20 + 0xb;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if (uStack_b0 != (undefined *)0x0) {
            _free(lVar19);
          }
          uVar17 = false;
          goto joined_r0x000101463638;
        }
        uVar13 = puVar28 == (undefined *)0x8000000000000000;
        if ((bool)uVar13) {
          puStack_90 = &UNK_108cae82a;
          uStack_88 = 0x13;
          bStack_1c0 = (byte)&puStack_90;
          bStack_1bf = (byte)((ulong)&puStack_90 >> 8);
          uStack_1be = (ushort)((ulong)&puStack_90 >> 0x10);
          fStack_1bc = (float)((ulong)&puStack_90 >> 0x20);
          uStack_1b8 = 0xa0;
          uStack_1b7 = 0x100c7b3;
          uVar16 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_1c0);
          bStack_1c0 = 0;
          bStack_1bf = 0;
          uStack_1be = 0;
          fStack_1bc = -0.0;
          uStack_1b8 = (undefined1)uVar16;
          uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
LAB_1014636f4:
          if (puStack_1e0 != (undefined *)0x0) {
            _free(lStack_228);
          }
          goto LAB_101463700;
        }
        if (!bVar2) {
          puStack_90 = &UNK_108cae83d;
          uStack_88 = 0x18;
          bStack_1c0 = (byte)&puStack_90;
          bStack_1bf = (byte)((ulong)&puStack_90 >> 8);
          uStack_1be = (ushort)((ulong)&puStack_90 >> 0x10);
          fStack_1bc = (float)((ulong)&puStack_90 >> 0x20);
          uStack_1b8 = 0xa0;
          uStack_1b7 = 0x100c7b3;
          uVar16 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_1c0);
          bStack_1c0 = 0;
          bStack_1bf = 0;
          uStack_1be = 0;
          fStack_1bc = -0.0;
          uStack_1b8 = (undefined1)uVar16;
          uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
          if (puVar28 != (undefined *)0x0) {
            _free(lStack_230);
          }
          goto LAB_1014636f4;
        }
        uStack_1b8 = (undefined1)lStack_218;
        uStack_1b7 = (undefined7)((ulong)lStack_218 >> 8);
        bStack_1c0 = (byte)puVar22;
        bStack_1bf = (byte)((ulong)puVar22 >> 8);
        uStack_1be = (ushort)((ulong)puVar22 >> 0x10);
        fStack_1bc = (float)((ulong)puVar22 >> 0x20);
        uStack_1b0 = (undefined1)lStack_220;
        uStack_1af = (undefined7)((ulong)lStack_220 >> 8);
        puStack_1a8 = puStack_1e0;
        lStack_188 = lStack_230;
        lStack_1a0 = lStack_228;
        lStack_198 = lStack_238;
        lStack_180 = lStack_240;
        fStack_178 = fStack_210;
        puStack_190 = puVar28;
        if (puVar22 == (undefined *)0x8000000000000000) goto LAB_1014633d0;
        lStack_f8 = lStack_238;
        lStack_100 = lStack_228;
        lStack_e8 = lStack_230;
        uStack_d8 = CONCAT44(uStack_174,fStack_210);
        lStack_e0 = lStack_240;
        lStack_118 = lStack_218;
        puStack_108 = puStack_1e0;
        lStack_110 = lStack_220;
        puStack_120 = puVar22;
        puStack_f0 = puVar28;
        lVar19 = FUN_100fbc67c(&pbStack_170);
        if (lVar19 != 0) {
          bStack_1c0 = 0;
          bStack_1bf = 0;
          uStack_1be = 0;
          fStack_1bc = -0.0;
          uStack_1b8 = (undefined1)lVar19;
          uStack_1b7 = (undefined7)((ulong)lVar19 >> 8);
          FUN_100e4e914(&puStack_120);
          if (puStack_108 != (undefined *)0x0) {
            _free(lStack_100);
          }
          if (puStack_f0 != (undefined *)0x0) {
            _free(lStack_e8);
          }
        }
      }
      goto LAB_1014633f0;
    }
    uVar16 = FUN_108855b04(param_3,&puStack_90,&UNK_10b20b080);
    goto LAB_101463418;
  }
  lVar19 = *(long *)(param_3 + 8);
  pbVar26 = *(byte **)(param_3 + 0x10);
  lVar23 = *(long *)(param_3 + 0x18);
  pbVar1 = pbVar26 + lVar23 * 0x20;
  pbStack_150 = (byte *)0x0;
  pbVar24 = pbVar26;
  pbStack_170 = pbVar26;
  lStack_160 = lVar19;
  pbStack_158 = pbVar1;
  if (lVar23 == 0) {
LAB_101463170:
    pbStack_168 = pbVar24;
    lVar14 = FUN_1087e422c(0,&UNK_10b22d670,&UNK_10b20a590);
LAB_10146318c:
    bStack_1c0 = 0;
    bStack_1bf = 0;
    uStack_1be = 0;
    fStack_1bc = -0.0;
    uStack_1b8 = (undefined1)lVar14;
    uStack_1b7 = (undefined7)((ulong)lVar14 >> 8);
    goto LAB_101463198;
  }
  pbVar24 = pbVar26 + 0x20;
  bStack_1c0 = *pbVar26;
  if (bStack_1c0 == 0x16) goto LAB_101463170;
  uVar16 = *(undefined8 *)(pbVar26 + 1);
  uStack_1b7 = (undefined7)*(undefined8 *)(pbVar26 + 9);
  bStack_1bf = (byte)uVar16;
  uStack_1be = (ushort)((ulong)uVar16 >> 8);
  fStack_1bc = (float)((ulong)uVar16 >> 0x18);
  uStack_1b8 = (undefined1)((ulong)uVar16 >> 0x38);
  auVar6 = *(undefined1 (*) [16])(pbVar26 + 0x10);
  puStack_1a8 = auVar6._8_8_;
  uStack_1b0 = auVar6[0];
  uStack_1af = auVar6._1_7_;
  pbStack_150 = (byte *)0x1;
  pbStack_168 = pbVar24;
  FUN_101249d5c(&uStack_b0,&bStack_1c0);
  lVar27 = lStack_a0;
  lVar14 = lStack_a8;
  puVar28 = uStack_b0;
  if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_10146318c;
  puStack_c8 = uStack_b0;
  lStack_c0 = lStack_a8;
  lStack_b8 = lStack_a0;
  if (lVar23 == 1) {
LAB_101463248:
    uVar16 = FUN_1087e422c(1,&UNK_10b22d670,&UNK_10b20a590);
    bStack_1c0 = 0;
    bStack_1bf = 0;
    uStack_1be = 0;
    fStack_1bc = -0.0;
    uStack_1b8 = (undefined1)uVar16;
    uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
joined_r0x0001014635f4:
    if (lVar27 != 0) {
      puVar20 = (undefined8 *)(lVar14 + 0x20);
      do {
        if (puVar20[-4] != 0) {
          _free(puVar20[-3]);
        }
        if (puVar20[-1] != 0) {
          _free(*puVar20);
        }
        if (puVar20[2] != 0) {
          _free(puVar20[3]);
        }
        puVar20 = puVar20 + 0xb;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if (puVar28 != (undefined *)0x0) {
      _free(lVar14);
    }
    goto LAB_101463198;
  }
  pbVar24 = pbVar26 + 0x40;
  pbStack_168 = pbVar24;
  if (pbVar26[0x20] == 0x16) goto LAB_101463248;
  uVar16 = *(undefined8 *)(pbVar26 + 0x21);
  uStack_1b7 = (undefined7)*(undefined8 *)(pbVar26 + 0x29);
  bStack_1bf = (byte)uVar16;
  uStack_1be = (ushort)((ulong)uVar16 >> 8);
  fStack_1bc = (float)((ulong)uVar16 >> 0x18);
  uStack_1b8 = (undefined1)((ulong)uVar16 >> 0x38);
  auVar6 = *(undefined1 (*) [16])(pbVar26 + 0x30);
  puStack_1a8 = auVar6._8_8_;
  uStack_1b0 = auVar6[0];
  uStack_1af = auVar6._1_7_;
  pbStack_150 = (byte *)0x2;
  bStack_1c0 = pbVar26[0x20];
  FUN_1004b62d4(&uStack_b0,&bStack_1c0);
  lVar9 = lStack_a0;
  lVar4 = lStack_a8;
  puVar22 = uStack_b0;
  if (uStack_b0 == (undefined *)0x8000000000000000) {
    bStack_1c0 = 0;
    bStack_1bf = 0;
    uStack_1be = 0;
    fStack_1bc = -0.0;
    uStack_1b8 = (undefined1)lStack_a8;
    uStack_1b7 = (undefined7)((ulong)lStack_a8 >> 8);
    goto joined_r0x0001014635f4;
  }
  if (lVar23 == 2) {
LAB_101463794:
    lVar15 = FUN_1087e422c(2,&UNK_10b22d670,&UNK_10b20a590);
LAB_1014637ac:
    bStack_1c0 = 0;
    bStack_1bf = 0;
    uStack_1be = 0;
    fStack_1bc = -0.0;
    uStack_1b8 = (undefined1)lVar15;
    uStack_1b7 = (undefined7)((ulong)lVar15 >> 8);
LAB_1014637b8:
    if (puVar22 != (undefined *)0x0) {
      _free(lVar4);
    }
    goto joined_r0x0001014635f4;
  }
  pbVar24 = pbVar26 + 0x60;
  pbStack_168 = pbVar24;
  if (pbVar26[0x40] == 0x16) goto LAB_101463794;
  uVar16 = *(undefined8 *)(pbVar26 + 0x41);
  uStack_1b7 = (undefined7)*(undefined8 *)(pbVar26 + 0x49);
  bStack_1bf = (byte)uVar16;
  uStack_1be = (ushort)((ulong)uVar16 >> 8);
  fStack_1bc = (float)((ulong)uVar16 >> 0x18);
  uStack_1b8 = (undefined1)((ulong)uVar16 >> 0x38);
  auVar6 = *(undefined1 (*) [16])(pbVar26 + 0x50);
  puStack_1a8 = auVar6._8_8_;
  uStack_1b0 = auVar6[0];
  uStack_1af = auVar6._1_7_;
  pbStack_150 = (byte *)0x3;
  bStack_1c0 = pbVar26[0x40];
  FUN_1004b62d4(&uStack_b0,&bStack_1c0);
  lVar10 = lStack_a0;
  lVar15 = lStack_a8;
  puVar8 = uStack_b0;
  if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_1014637ac;
  if (lVar23 == 3) {
LAB_101463844:
    uVar16 = FUN_1087e422c(3,&UNK_10b22d670,&UNK_10b20a590);
LAB_10146385c:
    bStack_1c0 = 0;
    bStack_1bf = 0;
    uStack_1be = 0;
    fStack_1bc = -0.0;
    uStack_1b8 = (undefined1)uVar16;
    uStack_1b7 = (undefined7)((ulong)uVar16 >> 8);
    if (puVar8 != (undefined *)0x0) {
      _free(lVar15);
    }
    goto LAB_1014637b8;
  }
  lVar23 = lStack_a0;
  pbVar24 = pbVar26 + 0x80;
  bVar18 = pbVar26[0x60];
  pbStack_168 = pbVar24;
  if (bVar18 == 0x16) goto LAB_101463844;
  uVar16 = *(undefined8 *)(pbVar26 + 0x61);
  uStack_1b7 = (undefined7)*(undefined8 *)(pbVar26 + 0x69);
  bStack_1bf = (byte)uVar16;
  uStack_1be = (ushort)((ulong)uVar16 >> 8);
  fStack_1bc = (float)((ulong)uVar16 >> 0x18);
  uStack_1b8 = (undefined1)((ulong)uVar16 >> 0x38);
  auVar6 = *(undefined1 (*) [16])(pbVar26 + 0x70);
  puStack_1a8 = auVar6._8_8_;
  uStack_1b0 = auVar6[0];
  uStack_1af = auVar6._1_7_;
  pbStack_150 = (byte *)0x4;
  bStack_1c0 = bVar18;
  switch(bVar18) {
  case 1:
    fVar30 = (float)(uint)bStack_1bf;
    goto code_r0x000101463b54;
  case 2:
    fVar30 = (float)(uint)uStack_1be;
    goto code_r0x000101463b54;
  case 3:
    fVar30 = fStack_1bc;
code_r0x000101463b54:
    fVar30 = (float)NEON_ucvtf(fVar30);
    break;
  case 4:
    fVar30 = (float)CONCAT71(uStack_1b7,uStack_1b8);
    break;
  case 5:
    fVar30 = (float)(int)(short)(char)bStack_1bf;
    break;
  case 6:
    fVar30 = (float)(int)(short)uStack_1be;
    break;
  case 7:
    fVar30 = (float)(int)fStack_1bc;
    break;
  case 8:
    fVar30 = (float)CONCAT71(uStack_1b7,uStack_1b8);
    break;
  case 9:
    fVar30 = fStack_1bc;
    break;
  case 10:
    uVar29 = 0x3f800000;
    if (0x7fffffffffffffff < CONCAT71(uStack_1b7,uStack_1b8)) {
      uVar29 = 0xbf800000;
    }
    fVar30 = (float)(uVar29 ^ (uVar29 ^ (uint)(float)(double)CONCAT71(uStack_1b7,uStack_1b8)) &
                              0x7fffffff);
    break;
  default:
    uVar16 = FUN_108855b04(&bStack_1c0,&puStack_90,&UNK_10b23a1d0);
    goto LAB_10146385c;
  }
  FUN_100e077ec(&bStack_1c0);
  uStack_1b8 = (undefined1)lStack_c0;
  uStack_1b7 = (undefined7)((ulong)lStack_c0 >> 8);
  bStack_1c0 = (byte)puStack_c8;
  bStack_1bf = (byte)((ulong)puStack_c8 >> 8);
  uStack_1be = (ushort)((ulong)puStack_c8 >> 0x10);
  fStack_1bc = (float)((ulong)puStack_c8 >> 0x20);
  uStack_1b0 = (undefined1)lStack_b8;
  uStack_1af = (undefined7)((ulong)lStack_b8 >> 8);
  puStack_1a8 = puVar22;
  lStack_198 = lVar9;
  lStack_1a0 = lVar4;
  puStack_190 = puVar8;
  lStack_188 = lVar15;
  lStack_180 = lVar10;
  fStack_178 = fVar30;
  if (puStack_c8 == (undefined *)0x8000000000000000) {
LAB_101463198:
    lVar23 = ((ulong)((long)pbVar1 - (long)pbVar24) >> 5) + 1;
    while (lVar23 = lVar23 + -1, lVar23 != 0) {
      FUN_100e077ec(pbVar24);
      pbVar24 = pbVar24 + 0x20;
    }
    if (lVar19 != 0) {
      _free(pbVar26);
    }
  }
  else {
    lStack_f8 = lVar9;
    lStack_100 = lVar4;
    lStack_e8 = lVar15;
    puStack_f0 = puVar8;
    uStack_d8 = CONCAT44(uStack_174,fVar30);
    lStack_e0 = lVar10;
    lStack_118 = lStack_c0;
    puStack_120 = puStack_c8;
    puStack_108 = puVar22;
    lStack_110 = lStack_b8;
    lVar19 = FUN_100fbc738(&pbStack_170);
    if (lVar19 != 0) {
      bStack_1c0 = 0;
      bStack_1bf = 0;
      uStack_1be = 0;
      fStack_1bc = -0.0;
      uStack_1b8 = (undefined1)lVar19;
      uStack_1b7 = (undefined7)((ulong)lVar19 >> 8);
      FUN_100e4e914(&puStack_120);
      if (puStack_108 != (undefined *)0x0) {
        _free(lStack_100);
      }
      if (puStack_f0 != (undefined *)0x0) {
        _free(lStack_e8);
      }
    }
  }
LAB_1014633f0:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_3);
  }
  if (CONCAT44(fStack_1bc,CONCAT22(uStack_1be,CONCAT11(bStack_1bf,bStack_1c0))) ==
      -0x8000000000000000) {
    uVar16 = CONCAT71(uStack_1b7,uStack_1b8);
LAB_101463418:
    *param_2 = 0x8000000000000001;
    param_2[1] = uVar16;
  }
  else {
    param_2[5] = lStack_198;
    param_2[4] = lStack_1a0;
    param_2[7] = lStack_188;
    param_2[6] = puStack_190;
    param_2[9] = CONCAT44(uStack_174,fStack_178);
    param_2[8] = lStack_180;
    param_2[1] = CONCAT71(uStack_1b7,uStack_1b8);
    *param_2 = CONCAT44(fStack_1bc,CONCAT22(uStack_1be,CONCAT11(bStack_1bf,bStack_1c0)));
    param_2[3] = puStack_1a8;
    param_2[2] = CONCAT71(uStack_1af,uStack_1b0);
  }
  return;
}

