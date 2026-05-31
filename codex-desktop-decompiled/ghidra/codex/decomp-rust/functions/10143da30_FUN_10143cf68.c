
void FUN_10143cf68(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  byte *in_x12;
  byte *extraout_x12;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *unaff_x21;
  byte *pbVar14;
  byte *pbVar15;
  byte *unaff_x22;
  undefined *puVar16;
  byte *unaff_x23;
  byte *pbVar17;
  long lVar18;
  byte *unaff_x24;
  undefined *puVar19;
  byte *unaff_x25;
  byte *unaff_x26;
  undefined *puVar20;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  byte *pbStack_128;
  byte bStack_118;
  byte bStack_117;
  undefined6 uStack_116;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined *puStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined *puStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      uVar7 = FUN_108855b04(param_2,auStack_69,&UNK_10b20b580);
      goto LAB_10143d7e0;
    }
    uStack_a0 = *(undefined8 *)(param_2 + 8);
    pbStack_b0 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar6 = pbStack_b0 + lVar8;
    pbStack_d0 = (byte *)CONCAT71(pbStack_d0._1_7_,0x16);
    puStack_90 = (undefined *)0x0;
    pbStack_98 = pbVar6;
    if (*(long *)(param_2 + 0x18) == 0) {
      puStack_138 = (undefined *)0x8000000000000002;
      pbStack_128 = (undefined *)0x8000000000000002;
      puStack_130 = (undefined *)0x8000000000000002;
      pbStack_148 = (byte *)0x0;
      unaff_x24 = pbVar6;
      pbVar15 = pbStack_b0;
      puVar19 = puStack_90;
    }
    else {
      puVar20 = (undefined *)0x0;
      puVar13 = (undefined8 *)((ulong)&bStack_118 | 1);
      puVar12 = (undefined8 *)((ulong)&pbStack_d0 | 1);
      puStack_130 = (undefined *)0x8000000000000002;
      pbStack_128 = (undefined *)0x8000000000000002;
      puStack_138 = (undefined *)0x8000000000000002;
      pbVar14 = pbStack_b0;
      pbStack_a8 = pbStack_b0;
      do {
        pbVar17 = pbVar14 + 0x40;
        bStack_118 = *pbVar14;
        pbVar15 = pbVar17;
        unaff_x25 = pbStack_160;
        unaff_x26 = pbStack_168;
        puVar19 = puVar20;
        if (bStack_118 == 0x16) break;
        uVar7 = *(undefined8 *)(pbVar14 + 0x10);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar14 + 0x18);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar7;
        uVar7 = *(undefined8 *)(pbVar14 + 1);
        puVar13[1] = *(undefined8 *)(pbVar14 + 9);
        *puVar13 = uVar7;
        pbStack_c8 = *(byte **)(pbVar14 + 0x28);
        pbStack_d0 = *(byte **)(pbVar14 + 0x20);
        pbStack_b8 = *(byte **)(pbVar14 + 0x38);
        lStack_c0 = *(long *)(pbVar14 + 0x30);
        plVar1 = (long *)CONCAT71(uStack_10f,uStack_110);
        plVar4 = (long *)CONCAT71(uStack_107,uStack_108);
        if (bStack_118 < 0xd) {
          if (bStack_118 == 1) {
            bVar11 = bStack_117;
            if (2 < bStack_117) {
              bVar11 = 3;
            }
LAB_10143d268:
            uStack_88._1_7_ = CONCAT61(uStack_88._2_6_,bVar11);
            uStack_88 = (undefined *)((ulong)uStack_88._1_7_ << 8);
            goto LAB_10143d26c;
          }
          if (bStack_118 == 4) {
            if ((long *)0x2 < plVar1) {
              plVar1 = (long *)0x3;
            }
            bVar11 = (byte)plVar1;
            goto LAB_10143d268;
          }
          if (bStack_118 == 0xc) {
            if (puStack_100 == (undefined *)0x9) {
              if (*plVar4 != 0x72556e696769726f || (char)plVar4[1] != 'l') goto LAB_10143d1f4;
              uStack_88 = (undefined *)CONCAT62(uStack_88._2_6_,0x200);
            }
            else if (puStack_100 == (undefined *)0x6) {
              if ((int)*plVar4 != 0x6e617262 || *(short *)((long)plVar4 + 4) != 0x6863)
              goto LAB_10143d1f4;
              uStack_88 = (undefined *)CONCAT62(uStack_88._2_6_,0x100);
            }
            else if ((puStack_100 == (undefined *)0x3) &&
                    ((short)*plVar4 == 0x6873 && *(char *)((long)plVar4 + 2) == 'a')) {
              uStack_88 = (undefined *)((ulong)uStack_88._2_6_ << 0x10);
            }
            else {
LAB_10143d1f4:
              uStack_88 = (undefined *)CONCAT62(uStack_88._2_6_,0x300);
            }
joined_r0x00010143d1c4:
            if (plVar1 != (long *)0x0) {
              _free(plVar4);
            }
          }
          else {
LAB_10143d434:
            pbStack_80 = (byte *)FUN_108855b04(&bStack_118,auStack_69,&UNK_10b211860);
            uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,1);
          }
        }
        else {
          if (bStack_118 == 0xd) {
            if (plVar4 == (long *)0x9) {
              if (*plVar1 != 0x72556e696769726f || (char)plVar1[1] != 'l') goto LAB_10143d260;
              bVar11 = 2;
            }
            else if (plVar4 == (long *)0x6) {
              if ((int)*plVar1 != 0x6e617262 || *(short *)((long)plVar1 + 4) != 0x6863)
              goto LAB_10143d260;
              bVar11 = 1;
            }
            else if ((plVar4 == (long *)0x3) &&
                    ((short)*plVar1 == 0x6873 && *(char *)((long)plVar1 + 2) == 'a')) {
              bVar11 = 0;
            }
            else {
LAB_10143d260:
              bVar11 = 3;
            }
            goto LAB_10143d268;
          }
          if (bStack_118 == 0xe) {
            FUN_100bde5f8(&uStack_88,plVar4);
            goto joined_r0x00010143d1c4;
          }
          if (bStack_118 != 0xf) goto LAB_10143d434;
          FUN_100bde5f8(&uStack_88,plVar1,plVar4);
LAB_10143d26c:
          FUN_100e077ec(&bStack_118);
        }
        if (((ulong)uStack_88 & 1) != 0) {
          puStack_90 = puVar20 + 1;
          pbVar6 = pbStack_80;
          pbStack_a8 = pbVar17;
LAB_10143d60c:
          bStack_118 = 2;
          bStack_117 = 0;
          uStack_116 = 0x800000000000;
          uStack_110 = SUB81(pbVar6,0);
          uStack_10f = (undefined7)((ulong)pbVar6 >> 8);
          if ((-0x7ffffffffffffffe < (long)puStack_138) && (puStack_138 != (undefined *)0x0)) {
            _free(pbStack_160);
          }
LAB_10143d8e4:
          if ((-0x7ffffffffffffffe < (long)pbStack_128) && (pbStack_128 != (undefined *)0x0)) {
            _free(pbStack_168);
          }
          if ((-0x7ffffffffffffffe < (long)puStack_130) && (puStack_130 != (undefined *)0x0)) {
            _free(pbStack_148);
          }
          FUN_100d34830(&pbStack_b0);
          if ((byte)pbStack_d0 != '\x16') {
            FUN_100e077ec(&pbStack_d0);
          }
          goto LAB_10143d7b0;
        }
        bVar11 = (byte)pbStack_d0;
        pbVar15 = pbStack_168;
        if (uStack_88._1_1_ < 2) {
          if (uStack_88._1_1_ == 0) {
            if (puStack_130 == (undefined *)0x8000000000000002) {
              pbStack_d0 = (byte *)CONCAT71(pbStack_d0._1_7_,0x16);
              if (bVar11 == 0x16) {
                puStack_90 = puVar20 + 1;
                pbStack_a8 = pbVar17;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_10143dadc;
              }
              uVar7 = *puVar12;
              puVar13[1] = puVar12[1];
              *puVar13 = uVar7;
              uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
              *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
              *(undefined8 *)((long)puVar13 + 0xf) = uVar7;
              bStack_118 = bVar11;
              FUN_1004b60cc(&uStack_88,&bStack_118);
              if (uStack_88 != (undefined *)0x8000000000000001) {
                puStack_130 = uStack_88;
                pbStack_148 = pbStack_80;
                unaff_x22 = pbStack_78;
                goto LAB_10143d038;
              }
              puStack_90 = puVar20 + 1;
              puStack_130 = (undefined *)0x8000000000000002;
              pbVar6 = pbStack_80;
              pbStack_a8 = pbVar17;
            }
            else {
              puStack_90 = puVar20 + 1;
              uStack_88 = &UNK_108cafd21;
              pbStack_80 = (byte *)0x3;
              bStack_118 = (byte)&uStack_88;
              bStack_117 = (byte)((ulong)&uStack_88 >> 8);
              uStack_116 = (undefined6)((ulong)&uStack_88 >> 0x10);
              uStack_110 = 0xa0;
              uStack_10f = 0x100c7b3;
              pbStack_a8 = pbVar17;
              pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_118);
            }
          }
          else if (pbStack_128 == (undefined *)0x8000000000000002) {
            pbStack_d0 = (byte *)CONCAT71(pbStack_d0._1_7_,0x16);
            if (bVar11 == 0x16) {
              puStack_90 = puVar20 + 1;
              pbStack_a8 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10143dadc;
            }
            uVar7 = *puVar12;
            puVar13[1] = puVar12[1];
            *puVar13 = uVar7;
            uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
            *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
            *(undefined8 *)((long)puVar13 + 0xf) = uVar7;
            bStack_118 = bVar11;
            FUN_1004b60cc(&uStack_88,&bStack_118);
            pbStack_128 = uStack_88;
            unaff_x21 = pbStack_78;
            pbVar15 = pbStack_80;
            if (uStack_88 != (undefined *)0x8000000000000001) goto LAB_10143d038;
            puStack_90 = puVar20 + 1;
            pbStack_128 = (undefined *)0x8000000000000002;
            pbVar6 = pbStack_80;
            pbStack_a8 = pbVar17;
          }
          else {
            puStack_90 = puVar20 + 1;
            uStack_88 = &UNK_108caf1ca;
            pbStack_80 = (byte *)0x6;
            bStack_118 = (byte)&uStack_88;
            bStack_117 = (byte)((ulong)&uStack_88 >> 8);
            uStack_116 = (undefined6)((ulong)&uStack_88 >> 0x10);
            uStack_110 = 0xa0;
            uStack_10f = 0x100c7b3;
            pbStack_a8 = pbVar17;
            pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_118);
          }
          goto LAB_10143d60c;
        }
        if (uStack_88._1_1_ == 2) {
          if (puStack_138 != (undefined *)0x8000000000000002) {
            puStack_90 = puVar20 + 1;
            uStack_88 = &UNK_108cc0572;
            pbStack_80 = (byte *)0x9;
            bStack_118 = (byte)&uStack_88;
            bStack_117 = (byte)((ulong)&uStack_88 >> 8);
            uStack_116 = (undefined6)((ulong)&uStack_88 >> 0x10);
            uStack_110 = 0xa0;
            uStack_10f = 0x100c7b3;
            pbStack_a8 = pbVar17;
            pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_118);
            goto LAB_10143d60c;
          }
          pbStack_d0 = (byte *)CONCAT71(pbStack_d0._1_7_,0x16);
          if (bVar11 == 0x16) {
            puStack_90 = puVar20 + 1;
            pbStack_a8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10143dadc;
          }
          uVar7 = *puVar12;
          puVar13[1] = puVar12[1];
          *puVar13 = uVar7;
          uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar7;
          bStack_118 = bVar11;
          FUN_1004b60cc(&uStack_88,&bStack_118);
          puStack_138 = uStack_88;
          pbStack_160 = pbStack_80;
          unaff_x24 = pbStack_78;
          if (uStack_88 != (undefined *)0x8000000000000001) goto LAB_10143d038;
          puStack_90 = puVar20 + 1;
          bStack_118 = 2;
          bStack_117 = 0;
          uStack_116 = 0x800000000000;
          uStack_110 = SUB81(pbStack_80,0);
          uStack_10f = (undefined7)((ulong)pbStack_80 >> 8);
          pbStack_a8 = pbVar17;
          goto LAB_10143d8e4;
        }
        pbStack_d0 = (byte *)CONCAT71(pbStack_d0._1_7_,0x16);
        if (bVar11 == 0x16) {
          puStack_90 = puVar20 + 1;
          pbStack_a8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10143dadc:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10143dae0);
          (*pcVar5)();
        }
        uVar7 = *puVar12;
        puVar13[1] = puVar12[1];
        *puVar13 = uVar7;
        uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar7;
        bStack_118 = bVar11;
        FUN_100e077ec(&bStack_118);
LAB_10143d038:
        pbStack_168 = pbVar15;
        puVar20 = puVar20 + 1;
        pbVar15 = pbVar6;
        unaff_x25 = pbStack_160;
        unaff_x26 = pbStack_168;
        pbVar14 = pbVar17;
        puVar19 = (undefined *)((lVar8 - 0x40U >> 6) + 1);
      } while (pbVar17 != pbVar6);
    }
    puStack_90 = puVar19;
    puVar20 = puStack_90;
    puVar19 = (undefined *)0x8000000000000001;
    if (puStack_130 != (undefined *)0x8000000000000002) {
      puVar19 = puStack_130;
    }
    bStack_118 = (byte)puVar19;
    bStack_117 = (byte)((ulong)puVar19 >> 8);
    uStack_116 = (undefined6)((ulong)puVar19 >> 0x10);
    uStack_110 = SUB81(pbStack_148,0);
    uStack_10f = (undefined7)((ulong)pbStack_148 >> 8);
    puVar16 = (undefined *)0x8000000000000001;
    if (pbStack_128 != (undefined *)0x8000000000000002) {
      puVar16 = pbStack_128;
    }
    puVar2 = (undefined *)0x8000000000000001;
    if (puStack_138 != (undefined *)0x8000000000000002) {
      puVar2 = puStack_138;
    }
    uStack_108 = SUB81(unaff_x22,0);
    uStack_107 = (undefined7)((ulong)unaff_x22 >> 8);
    puStack_100 = puVar16;
    pbStack_f8 = unaff_x26;
    pbStack_f0 = unaff_x21;
    puStack_e8 = puVar2;
    pbStack_e0 = unaff_x25;
    pbStack_d8 = unaff_x24;
    pbStack_a8 = pbVar15;
    FUN_100d34830(&pbStack_b0);
    if (pbVar6 != pbVar15) {
      uStack_88 = puVar20;
      uVar7 = FUN_1087e422c(puVar20 + ((ulong)((long)pbVar6 - (long)pbVar15) >> 6),&uStack_88,
                            &UNK_10b23a190);
      bStack_118 = 2;
      bStack_117 = 0;
      uStack_116 = 0x800000000000;
      uStack_110 = (undefined1)uVar7;
      uStack_10f = (undefined7)((ulong)uVar7 >> 8);
      if ((-0x7fffffffffffffff < (long)puVar19) && (puVar19 != (undefined *)0x0)) {
        _free(pbStack_148);
      }
      if ((-0x7fffffffffffffff < (long)puVar16) && (puVar16 != (undefined *)0x0)) {
        _free(unaff_x26);
      }
      if ((-0x7fffffffffffffff < (long)puVar2) && (puVar2 != (undefined *)0x0)) {
        _free(unaff_x25);
      }
    }
    goto LAB_10143d7b0;
  }
  lVar8 = *(long *)(param_2 + 8);
  pbVar15 = *(byte **)(param_2 + 0x10);
  pbVar6 = pbVar15 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_b0 = (byte *)0x0;
  pbVar14 = pbVar15;
  pbStack_d0 = pbVar15;
  lStack_c0 = lVar8;
  pbStack_b8 = pbVar6;
  if (*(long *)(param_2 + 0x18) == 0) {
    pbVar17 = (byte *)0x0;
    puVar19 = (undefined *)0x8000000000000001;
    pbVar10 = pbVar15;
    pbVar9 = pbVar15;
    pbStack_c8 = pbVar15;
    if (pbVar15 == pbVar6) goto LAB_10143d49c;
LAB_10143d4c4:
    pbVar9 = pbVar10 + 0x20;
    bStack_118 = *pbVar10;
    pbStack_c8 = pbVar9;
    if (bStack_118 == 0x16) {
      puVar20 = (undefined *)0x8000000000000001;
joined_r0x00010143d6f4:
      if (pbVar9 != pbVar6) {
        pbVar9 = pbVar10 + 0x40;
        bStack_118 = pbVar10[0x20];
        pbStack_c8 = pbVar9;
        if (bStack_118 != 0x16) {
          uVar7 = *(undefined8 *)(pbVar10 + 0x21);
          uStack_10f = (undefined7)*(undefined8 *)(pbVar10 + 0x29);
          bStack_117 = (byte)uVar7;
          uStack_116 = (undefined6)((ulong)uVar7 >> 8);
          uStack_110 = (undefined1)((ulong)uVar7 >> 0x38);
          puStack_100 = *(undefined **)(pbVar10 + 0x38);
          uStack_108 = (undefined1)*(undefined8 *)(pbVar10 + 0x30);
          uStack_107 = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 0x30) >> 8);
          pbStack_b0 = pbVar17 + 1;
          FUN_1004b60cc(&uStack_88,&bStack_118);
          pbVar14 = pbStack_80;
          puVar16 = uStack_88;
          if (uStack_88 != (undefined *)0x8000000000000001) goto LAB_10143d71c;
          bStack_118 = 2;
          bStack_117 = 0;
          uStack_116 = 0x800000000000;
          uStack_110 = SUB81(pbStack_80,0);
          uStack_10f = (undefined7)((ulong)pbStack_80 >> 8);
          if ((-0x7fffffffffffffff < (long)puVar20) && (puVar20 != (undefined *)0x0)) {
            _free(pbStack_128);
          }
          goto LAB_10143d5ac;
        }
      }
      pbStack_78 = pbVar10;
      puVar16 = (undefined *)0x8000000000000002;
      goto LAB_10143d71c;
    }
    uVar7 = *(undefined8 *)(pbVar10 + 1);
    uStack_10f = (undefined7)*(undefined8 *)(pbVar10 + 9);
    bStack_117 = (byte)uVar7;
    uStack_116 = (undefined6)((ulong)uVar7 >> 8);
    uStack_110 = (undefined1)((ulong)uVar7 >> 0x38);
    puStack_100 = *(undefined **)(pbVar10 + 0x18);
    uStack_108 = (undefined1)*(undefined8 *)(pbVar10 + 0x10);
    uStack_107 = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 0x10) >> 8);
    pbVar17 = pbVar17 + 1;
    pbStack_b0 = pbVar17;
    FUN_1004b60cc(&uStack_88,&bStack_118);
    pbStack_128 = pbStack_80;
    puVar20 = uStack_88;
    in_x12 = pbStack_78;
    if (uStack_88 != (undefined *)0x8000000000000001) goto joined_r0x00010143d6f4;
    bStack_118 = 2;
    bStack_117 = 0;
    uStack_116 = 0x800000000000;
    uStack_110 = SUB81(pbStack_80,0);
    uStack_10f = (undefined7)((ulong)pbStack_80 >> 8);
LAB_10143d5ac:
    if ((-0x7fffffffffffffff < (long)puVar19) && (puVar19 != (undefined *)0x0)) {
      _free(unaff_x23);
    }
LAB_10143d5d0:
    lVar18 = ((ulong)((long)pbVar6 - (long)pbVar9) >> 5) + 1;
    while (lVar18 = lVar18 + -1, lVar18 != 0) {
      FUN_100e077ec(pbVar9);
      pbVar9 = pbVar9 + 0x20;
    }
    if (lVar8 != 0) {
LAB_10143d7a8:
      _free(pbVar15);
    }
  }
  else {
    pbVar9 = pbVar15 + 0x20;
    bStack_118 = *pbVar15;
    pbStack_c8 = pbVar9;
    if (bStack_118 != 0x16) {
      uVar7 = *(undefined8 *)(pbVar15 + 1);
      uStack_10f = (undefined7)*(undefined8 *)(pbVar15 + 9);
      bStack_117 = (byte)uVar7;
      uStack_116 = (undefined6)((ulong)uVar7 >> 8);
      uStack_110 = (undefined1)((ulong)uVar7 >> 0x38);
      puStack_100 = *(undefined **)(pbVar15 + 0x18);
      uStack_108 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
      uStack_107 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
      pbStack_b0 = (byte *)0x1;
      FUN_1004b60cc(&uStack_88,&bStack_118);
      if (uStack_88 != (undefined *)0x8000000000000001) {
        pbVar17 = (byte *)0x1;
        puVar19 = uStack_88;
        unaff_x26 = pbStack_78;
        unaff_x23 = pbStack_80;
        in_x12 = extraout_x12;
        goto joined_r0x00010143d498;
      }
      bStack_118 = 2;
      bStack_117 = 0;
      uStack_116 = 0x800000000000;
      uStack_110 = SUB81(pbStack_80,0);
      uStack_10f = (undefined7)((ulong)pbStack_80 >> 8);
      goto LAB_10143d5d0;
    }
    pbVar17 = (byte *)0x0;
    puVar19 = (undefined *)0x8000000000000001;
joined_r0x00010143d498:
    pbVar10 = pbVar9;
    if (pbVar9 != pbVar6) goto LAB_10143d4c4;
LAB_10143d49c:
    puVar20 = (undefined *)0x8000000000000001;
    pbStack_78 = pbVar9;
    pbStack_128 = pbVar6;
    puVar16 = (undefined *)0x8000000000000002;
LAB_10143d71c:
    puStack_e8 = (undefined *)0x8000000000000001;
    if (puVar16 != (undefined *)0x8000000000000002) {
      puStack_e8 = puVar16;
    }
    bStack_118 = (byte)puVar19;
    bStack_117 = (byte)((ulong)puVar19 >> 8);
    uStack_116 = (undefined6)((ulong)puVar19 >> 0x10);
    uStack_110 = SUB81(unaff_x23,0);
    uStack_10f = (undefined7)((ulong)unaff_x23 >> 8);
    uStack_108 = SUB81(unaff_x26,0);
    uStack_107 = (undefined7)((ulong)unaff_x26 >> 8);
    puStack_100 = puVar20;
    pbStack_f8 = pbStack_128;
    pbStack_f0 = in_x12;
    pbStack_e0 = pbVar14;
    pbStack_d8 = pbStack_78;
    lVar8 = FUN_100fbc738(&pbStack_d0);
    if (lVar8 != 0) {
      bStack_118 = 2;
      bStack_117 = 0;
      uStack_116 = 0x800000000000;
      uStack_110 = (undefined1)lVar8;
      uStack_10f = (undefined7)((ulong)lVar8 >> 8);
      if ((-0x7fffffffffffffff < (long)puVar19) && (puVar19 != (undefined *)0x0)) {
        _free(unaff_x23);
      }
      if ((-0x7fffffffffffffff < (long)puVar20) && (puVar20 != (undefined *)0x0)) {
        _free(pbStack_128);
      }
      if (((puVar16 == (undefined *)0x8000000000000000) ||
          (puVar16 == (undefined *)0x8000000000000002)) ||
         (pbVar15 = pbVar14, puVar16 == (undefined *)0x0)) goto LAB_10143d7b0;
      goto LAB_10143d7a8;
    }
  }
LAB_10143d7b0:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_116,CONCAT11(bStack_117,bStack_118)) != -0x7ffffffffffffffe) {
    param_1[5] = pbStack_f0;
    param_1[4] = pbStack_f8;
    param_1[7] = pbStack_e0;
    param_1[6] = puStack_e8;
    param_1[8] = pbStack_d8;
    param_1[1] = CONCAT71(uStack_10f,uStack_110);
    *param_1 = CONCAT62(uStack_116,CONCAT11(bStack_117,bStack_118));
    param_1[3] = puStack_100;
    param_1[2] = CONCAT71(uStack_107,uStack_108);
    return;
  }
  uVar7 = CONCAT71(uStack_10f,uStack_110);
LAB_10143d7e0:
  *param_1 = 0x8000000000000003;
  param_1[1] = uVar7;
  return;
}

