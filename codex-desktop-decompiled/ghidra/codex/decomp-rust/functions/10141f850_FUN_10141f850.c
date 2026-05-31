
/* WARNING: Removing unreachable block (ram,0x00010142013c) */

void FUN_10141f850(long *param_1,char *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long unaff_x27;
  byte *pbVar15;
  byte *pbVar16;
  long unaff_x28;
  long lVar17;
  ulong uVar18;
  undefined1 extraout_q0 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined1 extraout_q0_02 [16];
  undefined1 extraout_q0_03 [16];
  undefined1 extraout_q0_04 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lStack_158;
  long lStack_150;
  long lStack_140;
  double dStack_120;
  byte *pbStack_110;
  byte *pbStack_108;
  long lStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte bStack_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  ushort uStack_9e;
  float fStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  undefined1 auStack_79 [9];
  
  if (*param_2 == '\x14') {
    lVar9 = *(long *)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar16 + lVar17 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar13 = pbVar16;
    pbStack_110 = pbVar16;
    lStack_100 = lVar9;
    pbStack_f8 = pbVar1;
    if (lVar17 == 0) {
LAB_10141f948:
      pbStack_108 = pbVar13;
      lStack_158 = FUN_1087e422c(0,&UNK_10b22d330,&UNK_10b20a590);
      auVar19 = extraout_q0;
    }
    else {
      pbVar13 = pbVar16 + 0x20;
      bVar3 = *pbVar16;
      if (bVar3 == 0x16) goto LAB_10141f948;
      uVar18 = *(ulong *)(pbVar16 + 1);
      uStack_97 = (undefined7)*(undefined8 *)(pbVar16 + 9);
      bStack_9f = (byte)uVar18;
      uStack_9e = (ushort)(uVar18 >> 8);
      fStack_9c = (float)(uVar18 >> 0x18);
      uStack_98 = (undefined1)(uVar18 >> 0x38);
      auVar19 = *(undefined1 (*) [16])(pbVar16 + 0x10);
      lStack_88 = auVar19._8_8_;
      uStack_90 = auVar19[0];
      uStack_8f = auVar19._1_7_;
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar13;
      bStack_a0 = bVar3;
      switch(bVar3) {
      case 1:
        dStack_120 = (double)NEON_ucvtf(uVar18 & 0xff);
        break;
      case 2:
        dStack_120 = (double)NEON_ucvtf((ulong)uStack_9e);
        break;
      case 3:
        dStack_120 = (double)NEON_ucvtf((ulong)(uint)fStack_9c);
        break;
      case 4:
        dStack_120 = (double)NEON_ucvtf(CONCAT71(uStack_97,uStack_98));
        break;
      case 5:
        dStack_120 = (double)bStack_9f;
        break;
      case 6:
        dStack_120 = (double)(long)(int)(short)uStack_9e;
        break;
      case 7:
        dStack_120 = (double)(long)(int)fStack_9c;
        break;
      case 8:
        dStack_120 = (double)CONCAT71(uStack_97,uStack_98);
        break;
      case 9:
        uVar18 = 0x3ff0000000000000;
        if (0x7fffffff < (uint)fStack_9c) {
          uVar18 = 0xbff0000000000000;
        }
        dStack_120 = (double)(uVar18 ^ (uVar18 ^ (ulong)(double)fStack_9c) & 0x7ff8000000000000);
        break;
      case 10:
        dStack_120 = (double)CONCAT71(uStack_97,uStack_98);
        break;
      default:
        lStack_158 = FUN_108855b04(&bStack_a0,auStack_79,&UNK_10b21c390);
        auVar19 = extraout_q0_04;
        goto code_r0x0001014200ec;
      }
      FUN_100e077ec(&bStack_a0);
      if (lVar17 != 1) {
        pbVar13 = pbVar16 + 0x40;
        bVar3 = pbVar16[0x20];
        pbStack_108 = pbVar13;
        if (bVar3 != 0x16) {
          uVar8 = *(undefined8 *)(pbVar16 + 0x21);
          uStack_b7 = (undefined7)*(undefined8 *)(pbVar16 + 0x29);
          bStack_bf = (byte)uVar8;
          uStack_be = (undefined6)((ulong)uVar8 >> 8);
          uStack_b8 = (undefined1)((ulong)uVar8 >> 0x38);
          auVar19 = *(undefined1 (*) [16])(pbVar16 + 0x30);
          uStack_a8 = auVar19._8_8_;
          uStack_b0 = auVar19[0];
          uStack_af = auVar19._1_7_;
          pbStack_f0 = (byte *)0x2;
          bStack_c0 = bVar3;
          if (bVar3 == 0x10) {
code_r0x0001014201c8:
            FUN_100e077ec(&bStack_c0);
            lVar10 = 0;
            lStack_158 = unaff_x28;
          }
          else {
            if (bVar3 == 0x11) {
              puVar12 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
              uVar8 = *puVar12;
              uStack_98 = (undefined1)puVar12[1];
              uStack_97 = (undefined7)((ulong)puVar12[1] >> 8);
              bStack_a0 = (byte)uVar8;
              bStack_9f = (byte)((ulong)uVar8 >> 8);
              uStack_9e = (ushort)((ulong)uVar8 >> 0x10);
              fStack_9c = (float)((ulong)uVar8 >> 0x20);
              auVar19 = *(undefined1 (*) [16])(puVar12 + 2);
              lStack_88 = auVar19._8_8_;
              uStack_90 = auVar19[0];
              uStack_8f = auVar19._1_7_;
              auVar20 = FUN_100614fd8(&bStack_a0);
              auVar19 = _free(puVar12);
            }
            else {
              if (bVar3 == 0x12) goto code_r0x0001014201c8;
              uVar8 = FUN_100614fd8(&bStack_c0);
              auVar20._8_8_ = extraout_x1;
              auVar20._0_8_ = uVar8;
              auVar19 = extraout_q0_01;
            }
            unaff_x27 = auVar20._8_8_;
            lVar10 = auVar20._0_8_ + 1;
            lStack_158 = unaff_x27;
            if (lVar10 == 2) goto code_r0x0001014200ec;
          }
          if (lVar17 != 2) {
            pbVar13 = pbVar16 + 0x60;
            bVar3 = pbVar16[0x40];
            pbStack_108 = pbVar13;
            if (bVar3 != 0x16) {
              uVar8 = *(undefined8 *)(pbVar16 + 0x41);
              uStack_b7 = (undefined7)*(undefined8 *)(pbVar16 + 0x49);
              bStack_bf = (byte)uVar8;
              uStack_be = (undefined6)((ulong)uVar8 >> 8);
              uStack_b8 = (undefined1)((ulong)uVar8 >> 0x38);
              auVar19 = *(undefined1 (*) [16])(pbVar16 + 0x50);
              uStack_a8 = auVar19._8_8_;
              uStack_b0 = auVar19[0];
              uStack_af = auVar19._1_7_;
              pbStack_f0 = (byte *)0x3;
              bStack_c0 = bVar3;
              if (bVar3 == 0x10) {
code_r0x0001014202c4:
                FUN_100e077ec(&bStack_c0);
                unaff_x21 = (undefined8 *)0x0;
              }
              else {
                if (bVar3 == 0x11) {
                  puVar12 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
                  uVar8 = *puVar12;
                  uStack_98 = (undefined1)puVar12[1];
                  uStack_97 = (undefined7)((ulong)puVar12[1] >> 8);
                  bStack_a0 = (byte)uVar8;
                  bStack_9f = (byte)((ulong)uVar8 >> 8);
                  uStack_9e = (ushort)((ulong)uVar8 >> 0x10);
                  fStack_9c = (float)((ulong)uVar8 >> 0x20);
                  auVar19 = *(undefined1 (*) [16])(puVar12 + 2);
                  lStack_88 = auVar19._8_8_;
                  uStack_90 = auVar19[0];
                  uStack_8f = auVar19._1_7_;
                  auVar21 = FUN_100614fd8(&bStack_a0);
                  auVar19 = _free(puVar12);
                }
                else {
                  if (bVar3 == 0x12) goto code_r0x0001014202c4;
                  uVar8 = FUN_100614fd8(&bStack_c0);
                  auVar21._8_8_ = extraout_x1_00;
                  auVar21._0_8_ = uVar8;
                  auVar19 = extraout_q0_03;
                }
                lStack_158 = auVar21._8_8_;
                unaff_x21 = (undefined8 *)(auVar21._0_8_ + 1);
                if (unaff_x21 == (undefined8 *)0x2) goto code_r0x0001014200ec;
              }
              lVar9 = FUN_100fbc738(&pbStack_110);
              if (lVar9 != 0) {
                lVar10 = 2;
                unaff_x27 = lVar9;
              }
              goto LAB_101420144;
            }
          }
          lStack_158 = FUN_1087e422c(2,&UNK_10b22d330,&UNK_10b20a590);
          auVar19 = extraout_q0_02;
          goto code_r0x0001014200ec;
        }
      }
      lStack_158 = FUN_1087e422c(1,&UNK_10b22d330,&UNK_10b20a590);
      auVar19 = extraout_q0_00;
    }
code_r0x0001014200ec:
    lVar17 = ((ulong)((long)pbVar1 - (long)pbVar13) >> 5) + 1;
    while( true ) {
      dStack_120 = auVar19._0_8_;
      lVar17 = lVar17 + -1;
      if (lVar17 == 0) break;
      auVar19 = FUN_100e077ec(pbVar13);
      pbVar13 = pbVar13 + 0x20;
    }
    if (lVar9 != 0) {
      auVar19 = _free(pbVar16);
      dStack_120 = auVar19._0_8_;
    }
    lVar10 = 2;
    unaff_x21 = (undefined8 *)0x0;
    unaff_x27 = lStack_158;
  }
  else {
    if (*param_2 != '\x15') {
      unaff_x27 = FUN_108855b04(param_2,auStack_79,&UNK_10b20b7c0);
      goto LAB_101420150;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbStack_f0 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar13 = pbStack_f0 + lVar9;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_e8 = pbStack_f0;
    pbStack_d8 = pbVar13;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10141ffac:
      bStack_c0 = 0x65;
      bStack_bf = 2;
      uStack_be = 0x108cb;
      uStack_b8 = 0xc;
      uStack_b7 = 0;
      bStack_a0 = (byte)&bStack_c0;
      bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
      uStack_9e = (ushort)((ulong)&bStack_c0 >> 0x10);
      fStack_9c = (float)((ulong)&bStack_c0 >> 0x20);
      uStack_98 = 0xa0;
      uStack_97 = 0x100c7b3;
      unaff_x27 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
      lStack_158 = unaff_x28;
LAB_10141ffe0:
      auVar19 = FUN_100d34830(&pbStack_f0);
      dStack_120 = auVar19._0_8_;
      if ((byte)pbStack_110 != '\x16') {
        auVar19 = FUN_100e077ec(&pbStack_110);
        dStack_120 = auVar19._0_8_;
      }
      lVar10 = 2;
    }
    else {
      lVar17 = 0;
      unaff_x21 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar11 = (undefined8 *)((ulong)&bStack_c0 | 1);
      lStack_140 = 2;
      bVar6 = false;
      dStack_120 = NAN;
      puVar12 = (undefined8 *)0x2;
      pbVar1 = pbStack_f0;
      pbStack_e8 = pbStack_f0;
      do {
        pbVar15 = pbVar1 + 0x40;
        bVar3 = *pbVar1;
        pbVar16 = pbVar15;
        unaff_x28 = lVar17;
        if (bVar3 == 0x16) break;
        uVar8 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)unaff_x21 + 0xf) = uVar8;
        uVar8 = *(undefined8 *)(pbVar1 + 1);
        unaff_x21[1] = *(undefined8 *)(pbVar1 + 9);
        *unaff_x21 = uVar8;
        pbStack_110 = *(byte **)(pbVar1 + 0x20);
        pbStack_108 = *(byte **)(pbVar1 + 0x28);
        pbStack_f8 = SUB168(*(undefined1 (*) [16])(pbVar1 + 0x30),8);
        lStack_100 = SUB168(*(undefined1 (*) [16])(pbVar1 + 0x30),0);
        plVar2 = (long *)CONCAT71(uStack_97,uStack_98);
        plVar5 = (long *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 == 1) {
            bStack_bf = bStack_9f;
            if (2 < bStack_9f) {
              bStack_bf = 3;
            }
LAB_10141fbe8:
            bStack_c0 = 0;
            goto LAB_10141fbec;
          }
          if (bVar3 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bStack_bf = (byte)plVar2;
            goto LAB_10141fbe8;
          }
          if (bVar3 == 0xc) {
            if (lStack_88 == 9) {
              if (*plVar5 != 0x615f737465736572 || (char)plVar5[1] != 't') goto LAB_10141fb60;
              bStack_bf = 2;
joined_r0x00010141fea4:
              bStack_c0 = 0;
            }
            else if (lStack_88 == 0xe) {
              if (*plVar5 != 0x6d5f776f646e6977 || *(long *)((long)plVar5 + 6) != 0x736574756e696d5f
                 ) goto LAB_10141fb60;
              bStack_bf = 1;
              bStack_c0 = 0;
            }
            else {
              if ((lStack_88 != 0xc) ||
                 (*plVar5 != 0x7265705f64657375 || (int)plVar5[1] != 0x746e6563)) {
LAB_10141fb60:
                bStack_bf = 3;
                goto joined_r0x00010141fea4;
              }
              bStack_bf = 0;
              bStack_c0 = 0;
            }
joined_r0x00010141fa88:
            if (plVar2 != (long *)0x0) {
              _free(plVar5);
            }
          }
          else {
LAB_10141feb4:
            uVar8 = FUN_108855b04(&bStack_a0,auStack_79,&UNK_10b20ee20);
            uStack_b8 = (undefined1)uVar8;
            uStack_b7 = (undefined7)((ulong)uVar8 >> 8);
            bStack_c0 = 1;
          }
        }
        else {
          if (bVar3 == 0xd) {
            if (plVar5 == (long *)0x9) {
              if (*plVar2 != 0x615f737465736572 || (char)plVar2[1] != 't') goto LAB_10141fbe0;
              bStack_bf = 2;
            }
            else if (plVar5 == (long *)0xe) {
              if (*plVar2 != 0x6d5f776f646e6977 || *(long *)((long)plVar2 + 6) != 0x736574756e696d5f
                 ) goto LAB_10141fbe0;
              bStack_bf = 1;
            }
            else if ((plVar5 == (long *)0xc) &&
                    (*plVar2 == 0x7265705f64657375 && (int)plVar2[1] == 0x746e6563)) {
              bStack_bf = 0;
            }
            else {
LAB_10141fbe0:
              bStack_bf = 3;
            }
            goto LAB_10141fbe8;
          }
          if (bVar3 == 0xe) {
            func_0x000100b1ac9c(&bStack_c0,plVar5);
            goto joined_r0x00010141fa88;
          }
          if (bVar3 != 0xf) goto LAB_10141feb4;
          func_0x000100b1ac9c(&bStack_c0,plVar2,plVar5);
LAB_10141fbec:
          FUN_100e077ec(&bStack_a0);
        }
        if ((bStack_c0 & 1) != 0) {
          lStack_d0 = lVar17 + 1;
          unaff_x27 = CONCAT71(uStack_b7,uStack_b8);
          lStack_158 = lVar17;
          pbStack_e8 = pbVar15;
          goto LAB_10141ffe0;
        }
        bVar3 = (byte)pbStack_110;
        if (bStack_bf < 2) {
          if (bStack_bf == 0) {
            if (bVar6) {
              lStack_d0 = lVar17 + 1;
              bStack_c0 = 0x65;
              bStack_bf = 2;
              uStack_be = 0x108cb;
              uStack_b8 = 0xc;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (ushort)((ulong)&bStack_c0 >> 0x10);
              fStack_9c = (float)((ulong)&bStack_c0 >> 0x20);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_e8 = pbVar15;
              unaff_x27 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              lStack_158 = lVar17;
              goto LAB_10141ffe0;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar3 == 0x16) goto LAB_10142034c;
            uVar8 = *puVar14;
            unaff_x21[1] = puVar14[1];
            *unaff_x21 = uVar8;
            auVar19 = *(undefined1 (*) [16])((long)puVar14 + 0xf);
            *(long *)((long)unaff_x21 + 0x17) = auVar19._8_8_;
            *(long *)((long)unaff_x21 + 0xf) = auVar19._0_8_;
            bStack_a0 = bVar3;
            switch(bVar3) {
            case 1:
              dStack_120 = (double)NEON_ucvtf((ulong)bStack_9f);
              break;
            case 2:
              dStack_120 = (double)NEON_ucvtf((ulong)uStack_9e);
              break;
            case 3:
              dStack_120 = (double)NEON_ucvtf((ulong)(uint)fStack_9c);
              break;
            case 4:
              dStack_120 = (double)NEON_ucvtf(CONCAT71(uStack_97,uStack_98));
              break;
            case 5:
              dStack_120 = (double)bStack_9f;
              break;
            case 6:
              dStack_120 = (double)(long)(int)(short)uStack_9e;
              break;
            case 7:
              dStack_120 = (double)(long)(int)fStack_9c;
              break;
            case 8:
              dStack_120 = (double)CONCAT71(uStack_97,uStack_98);
              break;
            case 9:
              uVar18 = 0x3ff0000000000000;
              if (0x7fffffff < (uint)fStack_9c) {
                uVar18 = 0xbff0000000000000;
              }
              dStack_120 = (double)(uVar18 ^ (uVar18 ^ (ulong)(double)fStack_9c) &
                                             0x7ff8000000000000);
              break;
            case 10:
              dStack_120 = (double)CONCAT71(uStack_97,uStack_98);
              break;
            default:
              lStack_d0 = lVar17 + 1;
              pbStack_e8 = pbVar15;
              unaff_x27 = FUN_108855b04(&bStack_a0,auStack_79,&UNK_10b21c390);
              lStack_158 = lVar17;
              goto LAB_10141ffe0;
            }
            FUN_100e077ec(&bStack_a0);
            bVar6 = true;
          }
          else {
            if (lStack_140 != 2) {
              lStack_d0 = lVar17 + 1;
              bStack_c0 = 0x71;
              bStack_bf = 2;
              uStack_be = 0x108cb;
              uStack_b8 = 0xe;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (ushort)((ulong)&bStack_c0 >> 0x10);
              fStack_9c = (float)((ulong)&bStack_c0 >> 0x20);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_e8 = pbVar15;
              unaff_x27 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              lStack_158 = lVar17;
              goto LAB_10141ffe0;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar3 == 0x16) goto LAB_10142034c;
            uVar8 = *puVar14;
            puVar11[1] = puVar14[1];
            *puVar11 = uVar8;
            auVar19 = *(undefined1 (*) [16])((long)puVar14 + 0xf);
            *(long *)((long)puVar11 + 0x17) = auVar19._8_8_;
            *(long *)((long)puVar11 + 0xf) = auVar19._0_8_;
            bStack_c0 = bVar3;
            if (bVar3 == 0x10) {
LAB_10141fd1c:
              FUN_100e077ec(&bStack_c0);
              lStack_140 = 0;
            }
            else {
              if (bVar3 == 0x11) {
                puVar4 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
                uVar8 = *puVar4;
                uStack_98 = (undefined1)puVar4[1];
                uStack_97 = (undefined7)((ulong)puVar4[1] >> 8);
                bStack_a0 = (byte)uVar8;
                bStack_9f = (byte)((ulong)uVar8 >> 8);
                uStack_9e = (ushort)((ulong)uVar8 >> 0x10);
                fStack_9c = (float)((ulong)uVar8 >> 0x20);
                auVar19 = *(undefined1 (*) [16])(puVar4 + 2);
                lStack_88 = auVar19._8_8_;
                uStack_90 = auVar19[0];
                uStack_8f = auVar19._1_7_;
                auVar19 = FUN_100614fd8(&bStack_a0);
                _free(puVar4);
              }
              else {
                if (bVar3 == 0x12) goto LAB_10141fd1c;
                auVar19 = FUN_100614fd8(&bStack_c0);
              }
              lStack_150 = auVar19._8_8_;
              lStack_140 = auVar19._0_8_ + 1;
              if (lStack_140 == 2) {
                lStack_d0 = lVar17 + 1;
                unaff_x27 = lStack_150;
                lStack_158 = lVar17;
                pbStack_e8 = pbVar15;
                goto LAB_10141ffe0;
              }
            }
          }
        }
        else if (bStack_bf == 2) {
          if (puVar12 != (undefined8 *)0x2) {
            lStack_d0 = lVar17 + 1;
            bStack_c0 = 0x7f;
            bStack_bf = 2;
            uStack_be = 0x108cb;
            uStack_b8 = 9;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (ushort)((ulong)&bStack_c0 >> 0x10);
            fStack_9c = (float)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar15;
            unaff_x27 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            lStack_158 = lVar17;
            goto LAB_10141ffe0;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) goto LAB_10142034c;
          uVar8 = *puVar14;
          puVar11[1] = puVar14[1];
          *puVar11 = uVar8;
          auVar19 = *(undefined1 (*) [16])((long)puVar14 + 0xf);
          *(long *)((long)puVar11 + 0x17) = auVar19._8_8_;
          *(long *)((long)puVar11 + 0xf) = auVar19._0_8_;
          bStack_c0 = bVar3;
          if (bVar3 == 0x10) {
LAB_10141fcc0:
            FUN_100e077ec(&bStack_c0);
            puVar12 = (undefined8 *)0x0;
          }
          else {
            if (bVar3 == 0x11) {
              puVar12 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
              uVar8 = *puVar12;
              uStack_98 = (undefined1)puVar12[1];
              uStack_97 = (undefined7)((ulong)puVar12[1] >> 8);
              bStack_a0 = (byte)uVar8;
              bStack_9f = (byte)((ulong)uVar8 >> 8);
              uStack_9e = (ushort)((ulong)uVar8 >> 0x10);
              fStack_9c = (float)((ulong)uVar8 >> 0x20);
              auVar19 = *(undefined1 (*) [16])(puVar12 + 2);
              lStack_88 = auVar19._8_8_;
              uStack_90 = auVar19[0];
              uStack_8f = auVar19._1_7_;
              auVar19 = FUN_100614fd8(&bStack_a0);
              _free(puVar12);
            }
            else {
              if (bVar3 == 0x12) goto LAB_10141fcc0;
              auVar19 = FUN_100614fd8(&bStack_c0);
            }
            unaff_x27 = auVar19._8_8_;
            puVar12 = (undefined8 *)(auVar19._0_8_ + 1);
            lStack_158 = unaff_x27;
            if (puVar12 == (undefined8 *)0x2) {
              lStack_d0 = lVar17 + 1;
              lStack_158 = lVar17;
              pbStack_e8 = pbVar15;
              goto LAB_10141ffe0;
            }
          }
        }
        else {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) {
LAB_10142034c:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            lStack_d0 = lVar17 + 1;
            pbStack_e8 = pbVar15;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101420374);
            (*pcVar7)();
          }
          uVar8 = *puVar14;
          unaff_x21[1] = puVar14[1];
          *unaff_x21 = uVar8;
          auVar19 = *(undefined1 (*) [16])((long)puVar14 + 0xf);
          *(long *)((long)unaff_x21 + 0x17) = auVar19._8_8_;
          *(long *)((long)unaff_x21 + 0xf) = auVar19._0_8_;
          bStack_a0 = bVar3;
          FUN_100e077ec(&bStack_a0);
        }
        lVar17 = lVar17 + 1;
        pbVar16 = pbVar13;
        unaff_x28 = (lVar9 - 0x40U >> 6) + 1;
        pbVar1 = pbVar15;
      } while (pbVar15 != pbVar13);
      pbStack_e8 = pbVar16;
      lStack_d0 = unaff_x28;
      if (!bVar6) goto LAB_10141ffac;
      FUN_100d34830(&pbStack_f0);
      if (pbVar13 == pbVar16) {
        lVar9 = 0;
      }
      else {
        bStack_a0 = (byte)unaff_x28;
        bStack_9f = (byte)((ulong)unaff_x28 >> 8);
        uStack_9e = (ushort)((ulong)unaff_x28 >> 0x10);
        fStack_9c = (float)((ulong)unaff_x28 >> 0x20);
        lVar9 = FUN_1087e422c(((ulong)((long)pbVar13 - (long)pbVar16) >> 6) + unaff_x28,&bStack_a0,
                              &UNK_10b23a190);
      }
      unaff_x21 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x2) {
        unaff_x21 = puVar12;
      }
      lVar10 = 0;
      if (lStack_140 != 2) {
        lVar10 = lStack_140;
      }
      unaff_x27 = lStack_150;
      if (lVar9 != 0) {
        lVar10 = 2;
        unaff_x27 = lVar9;
      }
    }
  }
LAB_101420144:
  if (lVar10 != 2) {
    *param_1 = lVar10;
    param_1[1] = unaff_x27;
    param_1[2] = (long)unaff_x21;
    param_1[3] = lStack_158;
    param_1[4] = (long)dStack_120;
    return;
  }
LAB_101420150:
  *param_1 = 3;
  param_1[1] = unaff_x27;
  return;
}

