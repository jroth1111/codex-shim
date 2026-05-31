
void FUN_1012f9930(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  byte bVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong unaff_x21;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  undefined *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte bVar21;
  undefined *puVar22;
  undefined8 uVar23;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_188;
  undefined *puStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  long lStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  long lStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  byte bStack_98;
  byte bStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  bVar4 = *param_2;
  if (bVar4 != 0x14) {
    if (bVar4 != 0x15) {
      uVar10 = FUN_108855b04(param_2,auStack_71,&UNK_10b20b180);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      return;
    }
    uStack_140 = *(undefined8 *)(param_2 + 8);
    pbStack_150 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar16 = pbStack_150 + lVar12;
    pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
    lStack_130 = 0;
    puStack_c8 = (undefined *)0x8000000000000000;
    pbStack_138 = pbVar16;
    if (*(long *)(param_2 + 0x18) == 0) {
      puStack_c8 = (undefined *)0x8000000000000000;
      puStack_178 = (undefined *)0x8000000000000001;
      puVar18 = (undefined *)0x8000000000000001;
      uStack_1a0 = unaff_x21;
      pbStack_148 = pbStack_150;
    }
    else {
      lVar15 = 0;
      puVar13 = (undefined8 *)((ulong)&bStack_98 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_170 | 1);
      bVar5 = 2;
      puVar22 = (undefined *)0x8000000000000000;
      puStack_178 = (undefined *)0x8000000000000001;
      puVar18 = (undefined *)0x8000000000000001;
      puStack_188 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_150;
      pbStack_148 = pbStack_150;
      do {
        pbVar19 = pbVar1 + 0x40;
        bVar21 = *pbVar1;
        lVar17 = lVar15;
        pbVar20 = pbVar19;
        if (bVar21 == 0x16) break;
        uVar23 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
        uVar23 = *(undefined8 *)(pbVar1 + 1);
        puVar13[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar13 = uVar23;
        pbStack_168 = *(byte **)(pbVar1 + 0x28);
        pbStack_170 = *(byte **)(pbVar1 + 0x20);
        pbStack_158 = *(byte **)(pbVar1 + 0x38);
        lStack_160 = *(long *)(pbVar1 + 0x30);
        plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
        plVar6 = (long *)CONCAT71(uStack_87,uStack_88);
        bStack_98 = bVar21;
        if (bVar21 < 0xd) {
          if (bVar21 == 1) {
            bVar21 = bStack_97;
            if (3 < bStack_97) {
              bVar21 = 4;
            }
LAB_1012f9cdc:
            uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar21);
            uStack_b0 = (undefined *)((ulong)uStack_b0._1_7_ << 8);
            goto LAB_1012f9ce0;
          }
          if (bVar21 == 4) {
            if ((long *)0x3 < plVar2) {
              plVar2 = (long *)0x4;
            }
            bVar21 = (byte)plVar2;
            goto LAB_1012f9cdc;
          }
          if (bVar21 == 0xc) {
            if (lStack_80 < 0xf) {
              if (lStack_80 == 5) {
                if ((int)*plVar6 != 0x74696465 || *(char *)((long)plVar6 + 4) != 's')
                goto LAB_1012f9c5c;
                uStack_b0 = (undefined *)((ulong)uStack_b0._2_6_ << 0x10);
              }
              else if ((lStack_80 == 8) && (*plVar6 == 0x68746150656c6966)) {
                uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x100);
              }
              else {
LAB_1012f9c5c:
                uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x400);
              }
            }
            else if (lStack_80 == 0xf) {
              if (*plVar6 != 0x6465746365707865 || *(long *)((long)plVar6 + 7) != 0x6e6f697372655664
                 ) goto LAB_1012f9c5c;
              uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x200);
            }
            else {
              if ((lStack_80 != 0x10) ||
                 (*plVar6 != 0x735564616f6c6572 || plVar6[1] != 0x6769666e6f437265))
              goto LAB_1012f9c5c;
              uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x300);
            }
joined_r0x0001012f9ec8:
            if (plVar2 != (long *)0x0) {
              _free(plVar6);
            }
          }
          else {
LAB_1012f9ed8:
            uStack_a8 = FUN_108855b04(&bStack_98,auStack_71,&UNK_10b20eee0);
            uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,1);
          }
        }
        else {
          if (bVar21 == 0xd) {
            if ((long)plVar6 < 0xf) {
              if (plVar6 == (long *)0x5) {
                if ((int)*plVar2 != 0x74696465 || *(char *)((long)plVar2 + 4) != 's')
                goto LAB_1012f9cd4;
                bVar21 = 0;
              }
              else if ((plVar6 == (long *)0x8) && (*plVar2 == 0x68746150656c6966)) {
                bVar21 = 1;
              }
              else {
LAB_1012f9cd4:
                bVar21 = 4;
              }
            }
            else if (plVar6 == (long *)0xf) {
              if (*plVar2 != 0x6465746365707865 || *(long *)((long)plVar2 + 7) != 0x6e6f697372655664
                 ) goto LAB_1012f9cd4;
              bVar21 = 2;
            }
            else {
              if ((plVar6 != (long *)0x10) ||
                 (*plVar2 != 0x735564616f6c6572 || plVar2[1] != 0x6769666e6f437265))
              goto LAB_1012f9cd4;
              bVar21 = 3;
            }
            goto LAB_1012f9cdc;
          }
          if (bVar21 == 0xe) {
            func_0x000100bb379c(&uStack_b0,plVar6);
            goto joined_r0x0001012f9ec8;
          }
          if (bVar21 != 0xf) goto LAB_1012f9ed8;
          func_0x000100bb379c(&uStack_b0,plVar2,plVar6);
LAB_1012f9ce0:
          FUN_100e077ec(&bStack_98);
        }
        bVar21 = bStack_97;
        if (((ulong)uStack_b0 & 1) != 0) {
LAB_1012fa048:
          lStack_130 = lVar15 + 1;
          uStack_b8 = uStack_1b0;
          uStack_c0 = uStack_1a8;
          puStack_c8 = puStack_188;
          uVar10 = uStack_a8;
          pbStack_148 = pbVar19;
          goto LAB_1012fa0d0;
        }
        bVar7 = (byte)pbStack_170;
        if (uStack_b0._1_1_ < 2) {
          if (uStack_b0._1_1_ == 0) {
            if (puVar22 != (undefined *)0x8000000000000000) {
              lStack_130 = lVar15 + 1;
              uStack_c0 = uStack_1a8;
              uStack_b8 = uStack_1b0;
              puStack_c8 = puStack_188;
              uStack_b0 = &UNK_108cc1001;
              uStack_a8 = 5;
              bStack_98 = (byte)&uStack_b0;
              bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
              uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              pbStack_148 = pbVar19;
              uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
              goto LAB_1012fa0d0;
            }
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar7 == 0x16) {
              lStack_130 = lVar15 + 1;
              uStack_c0 = uStack_1a8;
              uStack_b8 = uStack_1b0;
              puStack_c8 = puStack_188;
              pbStack_148 = pbVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1012fa704;
            }
            uVar23 = *puVar14;
            puVar13[1] = puVar14[1];
            *puVar13 = uVar23;
            uVar23 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
            bStack_98 = bVar7;
            func_0x0001012640f0(&uStack_b0,&bStack_98);
            if (uStack_b0 == (undefined *)0x8000000000000000) {
              puVar22 = (undefined *)0x8000000000000000;
              goto LAB_1012fa048;
            }
            uStack_1b0 = uStack_a0;
            uStack_1a8 = uStack_a8;
            puStack_188 = uStack_b0;
            puVar22 = uStack_b0;
          }
          else {
            if (puStack_178 != (undefined *)0x8000000000000001) {
              lStack_130 = lVar15 + 1;
              uStack_c0 = uStack_1a8;
              uStack_b8 = uStack_1b0;
              puStack_c8 = puStack_188;
              uStack_b0 = &UNK_108c984e8;
              uStack_a8 = 8;
              bStack_98 = (byte)&uStack_b0;
              bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
              uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              pbStack_148 = pbVar19;
              uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
              goto LAB_1012fa0d0;
            }
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar7 == 0x16) {
              lStack_130 = lVar15 + 1;
              uStack_c0 = uStack_1a8;
              uStack_b8 = uStack_1b0;
              puStack_c8 = puStack_188;
              pbStack_148 = pbVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1012fa704;
            }
            uVar23 = *puVar14;
            puVar13[1] = puVar14[1];
            *puVar13 = uVar23;
            uVar23 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
            bStack_98 = bVar7;
            FUN_1004b60cc(&uStack_b0,&bStack_98);
            puStack_178 = uStack_b0;
            if (uStack_b0 == (undefined *)0x8000000000000001) {
              lStack_130 = lVar15 + 1;
              uStack_b8 = uStack_1b0;
              uStack_c0 = uStack_1a8;
              puStack_c8 = puStack_188;
              puStack_178 = (undefined *)0x8000000000000001;
              uVar10 = uStack_a8;
              pbStack_148 = pbVar19;
              goto LAB_1012fa0d0;
            }
            uStack_1a0 = uStack_a8;
            uStack_1c8 = uStack_a0;
          }
        }
        else if (uStack_b0._1_1_ == 2) {
          if (puVar18 != (undefined *)0x8000000000000001) {
            lStack_130 = lVar15 + 1;
            uStack_c0 = uStack_1a8;
            uStack_b8 = uStack_1b0;
            puStack_c8 = puStack_188;
            uStack_b0 = &UNK_108cc1006;
            uStack_a8 = 0xf;
            bStack_98 = (byte)&uStack_b0;
            bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
            uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_148 = pbVar19;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
            puVar18 = (undefined *)((ulong)puVar18 & 0x7fffffffffffffff);
            goto joined_r0x0001012fa50c;
          }
          pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
          if (bVar7 == 0x16) {
            lStack_130 = lVar15 + 1;
            uStack_c0 = uStack_1a8;
            uStack_b8 = uStack_1b0;
            puStack_c8 = puStack_188;
            pbStack_148 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012fa704;
          }
          uVar23 = *puVar14;
          puVar13[1] = puVar14[1];
          *puVar13 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
          bStack_98 = bVar7;
          FUN_1004b60cc(&uStack_b0,&bStack_98);
          if (uStack_b0 == (undefined *)0x8000000000000001) {
            lStack_130 = lVar15 + 1;
            uStack_b8 = uStack_1b0;
            uStack_c0 = uStack_1a8;
            puStack_c8 = puStack_188;
            *param_1 = 0x8000000000000000;
            param_1[1] = uStack_a8;
            pbStack_148 = pbVar19;
            goto LAB_1012fa0f8;
          }
          uStack_1b8 = uStack_a8;
          uStack_1d0 = uStack_a0;
          puVar18 = uStack_b0;
        }
        else if (uStack_b0._1_1_ == 3) {
          if (bVar5 != 2) {
            lStack_130 = lVar15 + 1;
            uStack_c0 = uStack_1a8;
            uStack_b8 = uStack_1b0;
            puStack_c8 = puStack_188;
            uStack_b0 = &UNK_108cdd170;
            uStack_a8 = 0x10;
            bStack_98 = (byte)&uStack_b0;
            bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
            uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_148 = pbVar19;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
            goto LAB_1012fa0d0;
          }
          pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
          if (bVar7 == 0x16) goto LAB_1012fa3b0;
          uVar23 = *puVar14;
          puVar13[1] = puVar14[1];
          *puVar13 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
          bStack_98 = bVar7;
          if (bVar7 != 0) {
            lStack_130 = lVar15 + 1;
            uStack_c0 = uStack_1a8;
            uStack_b8 = uStack_1b0;
            puStack_c8 = puStack_188;
            pbStack_148 = pbVar19;
            uVar10 = FUN_108855b04(&bStack_98,auStack_71,&UNK_10b20a560);
            goto LAB_1012fa0d0;
          }
          FUN_100e077ec(&bStack_98);
          bVar5 = bVar21;
        }
        else {
          pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
          if (bVar7 == 0x16) {
LAB_1012fa3b0:
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            lStack_130 = lVar15 + 1;
            uStack_c0 = uStack_1a8;
            uStack_b8 = uStack_1b0;
            puStack_c8 = puStack_188;
            pbStack_148 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012fa704:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1012fa708);
            (*pcVar9)();
          }
          uVar23 = *puVar14;
          puVar13[1] = puVar14[1];
          *puVar13 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
          bStack_98 = bVar7;
          FUN_100e077ec(&bStack_98);
        }
        lVar15 = lVar15 + 1;
        lVar17 = (lVar12 - 0x40U >> 6) + 1;
        pbVar20 = pbVar16;
        pbVar1 = pbVar19;
      } while (pbVar19 != pbVar16);
      uStack_c0 = uStack_1a8;
      uStack_b8 = uStack_1b0;
      puStack_c8 = puStack_188;
      pbStack_148 = pbVar20;
      lStack_130 = lVar17;
      if (puVar22 != (undefined *)0x8000000000000000) {
        puVar3 = (undefined *)0x8000000000000000;
        if (puStack_178 != (undefined *)0x8000000000000001) {
          puVar3 = puStack_178;
        }
        *param_1 = (ulong)puVar22;
        param_1[1] = uStack_1a8;
        puVar22 = (undefined *)0x8000000000000000;
        if (puVar18 != (undefined *)0x8000000000000001) {
          puVar22 = puVar18;
        }
        param_1[2] = uStack_1b0;
        param_1[3] = (ulong)puVar3;
        param_1[4] = uStack_1a0;
        param_1[5] = uStack_1c8;
        param_1[6] = (ulong)puVar22;
        param_1[7] = uStack_1b8;
        param_1[8] = uStack_1d0;
        *(byte *)(param_1 + 9) = bVar5 & 1;
        uStack_f8 = param_1[5];
        uStack_100 = param_1[4];
        uStack_e8 = param_1[7];
        uStack_f0 = param_1[6];
        uStack_d8 = param_1[9];
        uStack_e0 = param_1[8];
        uStack_118 = param_1[1];
        uStack_120 = *param_1;
        uStack_108 = param_1[3];
        uStack_110 = param_1[2];
        FUN_100d34830(&pbStack_150);
        if (pbVar16 != pbVar20) {
          bStack_98 = (byte)lVar17;
          bStack_97 = (byte)((ulong)lVar17 >> 8);
          uStack_96 = (undefined6)((ulong)lVar17 >> 0x10);
          uVar10 = FUN_1087e422c(((ulong)((long)pbVar16 - (long)pbVar20) >> 6) + lVar17,&bStack_98,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar10;
          FUN_100e6d9bc(&uStack_120);
        }
        goto LAB_1012fa1c4;
      }
    }
    uStack_b0 = &UNK_108cc1001;
    uStack_a8 = 5;
    bStack_98 = (byte)&uStack_b0;
    bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    puVar22 = (undefined *)0x8000000000000000;
    uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
LAB_1012fa0d0:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    if (-0x7fffffffffffffff < (long)puVar18) {
joined_r0x0001012fa50c:
      if (puVar18 != (undefined *)0x0) {
        _free(uStack_1b8);
      }
    }
LAB_1012fa0f8:
    if ((-0x7fffffffffffffff < (long)puStack_178) && (puStack_178 != (undefined *)0x0)) {
      _free(uStack_1a0);
    }
    if (puVar22 != (undefined *)0x8000000000000000) {
      FUN_100ca4b40(&puStack_c8);
    }
    FUN_100d34830(&pbStack_150);
    if ((byte)pbStack_170 != '\x16') {
      FUN_100e077ec(&pbStack_170);
    }
    goto LAB_1012fa1c4;
  }
  lVar12 = *(long *)(param_2 + 8);
  pbVar20 = *(byte **)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18);
  pbVar1 = pbVar20 + lVar15 * 0x20;
  pbStack_150 = (byte *)0x0;
  pbVar16 = pbVar20;
  pbStack_170 = pbVar20;
  lStack_160 = lVar12;
  pbStack_158 = pbVar1;
  if (lVar15 == 0) {
LAB_1012f9f30:
    pbStack_168 = pbVar16;
    uVar10 = FUN_1087e422c(0,&UNK_10b231fd8,&UNK_10b20a590);
LAB_1012f9f48:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
  }
  else {
    pbVar16 = pbVar20 + 0x20;
    if (*pbVar20 == 0x16) goto LAB_1012f9f30;
    uVar23 = *(undefined8 *)(pbVar20 + 1);
    uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 9);
    bStack_97 = (byte)uVar23;
    uStack_96 = (undefined6)((ulong)uVar23 >> 8);
    uStack_90 = (undefined1)((ulong)uVar23 >> 0x38);
    lStack_80 = *(long *)(pbVar20 + 0x18);
    uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x10);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x10) >> 8);
    pbStack_150 = (byte *)0x1;
    pbStack_168 = pbVar16;
    bStack_98 = *pbVar20;
    func_0x0001012640f0(&uStack_b0,&bStack_98);
    uVar10 = uStack_a8;
    if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_1012f9f48;
    puStack_c8 = uStack_b0;
    uStack_c0 = uStack_a8;
    uStack_b8 = uStack_a0;
    if (lVar15 == 1) {
LAB_1012f9ffc:
      uVar10 = FUN_1087e422c(1,&UNK_10b231fd8,&UNK_10b20a590);
LAB_1012fa018:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
LAB_1012fa020:
      FUN_100ca4b40(&puStack_c8);
    }
    else {
      pbVar16 = pbVar20 + 0x40;
      pbStack_168 = pbVar16;
      if (pbVar20[0x20] == 0x16) goto LAB_1012f9ffc;
      uVar23 = *(undefined8 *)(pbVar20 + 0x21);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 0x29);
      bStack_97 = (byte)uVar23;
      uStack_96 = (undefined6)((ulong)uVar23 >> 8);
      uStack_90 = (undefined1)((ulong)uVar23 >> 0x38);
      lStack_80 = *(long *)(pbVar20 + 0x38);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
      pbStack_150 = (byte *)0x2;
      bStack_98 = pbVar20[0x20];
      FUN_1004b60cc(&uStack_b0,&bStack_98);
      uVar11 = uStack_a0;
      uVar10 = uStack_a8;
      puVar18 = uStack_b0;
      if (uStack_b0 == (undefined *)0x8000000000000001) goto LAB_1012fa018;
      if (lVar15 == 2) {
LAB_1012fa254:
        uVar11 = FUN_1087e422c(2,&UNK_10b231fd8,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
joined_r0x0001012fa37c:
        if (((ulong)puVar18 & 0x7fffffffffffffff) != 0) {
          _free(uVar10);
        }
        goto LAB_1012fa020;
      }
      pbVar16 = pbVar20 + 0x60;
      pbStack_168 = pbVar16;
      if (pbVar20[0x40] == 0x16) goto LAB_1012fa254;
      uVar23 = *(undefined8 *)(pbVar20 + 0x41);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 0x49);
      bStack_97 = (byte)uVar23;
      uStack_96 = (undefined6)((ulong)uVar23 >> 8);
      uStack_90 = (undefined1)((ulong)uVar23 >> 0x38);
      lStack_80 = *(long *)(pbVar20 + 0x58);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x50);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x50) >> 8);
      pbStack_150 = (byte *)0x3;
      bStack_98 = pbVar20[0x40];
      FUN_1004b60cc(&uStack_b0,&bStack_98);
      uVar8 = uStack_a8;
      puVar22 = uStack_b0;
      if (uStack_b0 == (undefined *)0x8000000000000001) {
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_a8;
        goto joined_r0x0001012fa37c;
      }
      if (lVar15 == 3) {
LAB_1012fa3a4:
        bVar21 = 0;
      }
      else {
        pbVar16 = pbVar20 + 0x80;
        bVar5 = pbVar20[0x60];
        pbStack_168 = pbVar16;
        if (bVar5 == 0x16) goto LAB_1012fa3a4;
        uVar23 = *(undefined8 *)(pbVar20 + 0x61);
        uStack_8f = (undefined7)*(undefined8 *)(pbVar20 + 0x69);
        bStack_97 = (byte)uVar23;
        bVar21 = bStack_97;
        uStack_96 = (undefined6)((ulong)uVar23 >> 8);
        uStack_90 = (undefined1)((ulong)uVar23 >> 0x38);
        lStack_80 = *(long *)(pbVar20 + 0x78);
        uStack_88 = (undefined1)*(undefined8 *)(pbVar20 + 0x70);
        uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x70) >> 8);
        pbStack_150 = (byte *)0x4;
        bStack_98 = bVar5;
        if (bVar5 != 0) {
          uVar11 = FUN_108855b04(&bStack_98,auStack_71,&UNK_10b20a560);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar11;
          if (((ulong)puVar22 & 0x7fffffffffffffff) != 0) {
            _free(uVar8);
          }
          goto joined_r0x0001012fa37c;
        }
        FUN_100e077ec(&bStack_98);
      }
      param_1[1] = uStack_c0;
      *param_1 = (ulong)puStack_c8;
      param_1[2] = uStack_b8;
      param_1[3] = (ulong)puVar18;
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[6] = (ulong)puVar22;
      param_1[7] = uVar8;
      param_1[8] = uStack_a0;
      *(byte *)(param_1 + 9) = bVar21;
      if (*param_1 != 0x8000000000000000) {
        uStack_f8 = param_1[5];
        uStack_100 = param_1[4];
        uStack_e8 = param_1[7];
        uStack_f0 = param_1[6];
        uStack_d8 = param_1[9];
        uStack_e0 = param_1[8];
        uStack_118 = param_1[1];
        uStack_120 = *param_1;
        uStack_108 = param_1[3];
        uStack_110 = param_1[2];
        uVar10 = FUN_100fbc738(&pbStack_170);
        if (uVar10 != 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar10;
          FUN_100e6d9bc(&uStack_120);
        }
        goto LAB_1012fa1c4;
      }
    }
  }
  lVar15 = ((ulong)((long)pbVar1 - (long)pbVar16) >> 5) + 1;
  while (lVar15 = lVar15 + -1, lVar15 != 0) {
    FUN_100e077ec(pbVar16);
    pbVar16 = pbVar16 + 0x20;
  }
  if (lVar12 != 0) {
    _free(pbVar20);
  }
LAB_1012fa1c4:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

