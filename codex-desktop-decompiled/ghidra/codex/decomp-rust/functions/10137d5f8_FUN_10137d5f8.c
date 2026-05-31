
void FUN_10137d5f8(ulong *param_1,byte *param_2)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  char cVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulong unaff_x22;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  ulong uStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b0;
  byte *pbStack_a8;
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
  
  bVar3 = *param_2;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      uVar17 = FUN_108855b04(param_2,auStack_71,&UNK_10b20abc0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar17;
      return;
    }
    uStack_d0 = *(ulong *)(param_2 + 8);
    pbStack_e0 = *(byte **)(param_2 + 0x10);
    pbStack_c8 = pbStack_e0 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
    pbStack_c0 = (byte *)0x0;
    pbStack_b0 = (byte *)0x8000000000000001;
    if (*(long *)(param_2 + 0x18) == 0) {
      pbStack_b0 = (byte *)0x8000000000000001;
      pbStack_140 = (byte *)0x8000000000000001;
      uStack_138 = 0x8000000000000001;
      pbStack_150 = pbStack_c8;
      pbStack_d8 = pbStack_e0;
    }
    else {
      puVar14 = (undefined8 *)((ulong)&bStack_98 | 1);
      puVar13 = (undefined8 *)((ulong)&pbStack_100 | 1);
      puVar16 = (undefined8 *)((ulong)&uStack_130 | 1);
      uVar17 = 0x8000000000000000;
      pbStack_140 = (byte *)0x8000000000000001;
      uStack_138 = 0x8000000000000001;
      pbStack_148 = (byte *)0x8000000000000001;
      pbVar10 = pbStack_e0;
      pbVar15 = pbStack_c8;
      do {
        pbVar8 = pbVar15;
        pbVar20 = pbVar10 + 0x40;
        bVar12 = *pbVar10;
        pbStack_d8 = pbVar20;
        if (bVar12 == 0x16) break;
        pbStack_c0 = pbStack_c0 + 1;
        uVar21 = *(undefined8 *)(pbVar10 + 1);
        uVar23 = *(undefined8 *)(pbVar10 + 0x18);
        uVar22 = *(undefined8 *)(pbVar10 + 0x10);
        pbStack_128 = *(byte **)(pbVar10 + 0x28);
        uStack_130 = *(byte **)(pbVar10 + 0x20);
        puVar14[1] = *(undefined8 *)(pbVar10 + 9);
        *puVar14 = uVar21;
        *(undefined8 *)((long)puVar14 + 0x17) = uVar23;
        *(undefined8 *)((long)puVar14 + 0xf) = uVar22;
        pbStack_118 = *(byte **)(pbVar10 + 0x38);
        uStack_120 = *(ulong *)(pbVar10 + 0x30);
        bStack_98 = bVar12;
        if ((char)pbStack_100 != '\x16') {
          FUN_100e077ec(&pbStack_100);
        }
        pbStack_100 = uStack_130;
        pbStack_f8 = pbStack_128;
        pbStack_e8 = pbStack_118;
        uStack_f0 = uStack_120;
        plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
        plVar4 = (long *)CONCAT71(uStack_87,uStack_88);
        if (bVar12 < 0xd) {
          if (bVar12 == 1) {
            bVar12 = bStack_97;
            if (2 < bStack_97) {
              bVar12 = 3;
            }
LAB_10137d924:
            uStack_130._1_7_ = CONCAT61(uStack_130._2_6_,bVar12);
            uStack_130 = (byte *)((ulong)uStack_130._1_7_ << 8);
            goto LAB_10137d928;
          }
          if (bVar12 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bVar12 = (byte)plVar2;
            goto LAB_10137d924;
          }
          if (bVar12 == 0xc) {
            if (lStack_80 == 0xb) {
              if (*plVar4 != 0x6150657372617073 || *(long *)((long)plVar4 + 3) != 0x7368746150657372
                 ) goto LAB_10137d8a0;
              uStack_130 = (byte *)CONCAT62(uStack_130._2_6_,0x200);
            }
            else if (lStack_80 == 7) {
              if ((int)*plVar4 != 0x4e666572 || *(int *)((long)plVar4 + 3) != 0x656d614e)
              goto LAB_10137d8a0;
              uStack_130 = (byte *)CONCAT62(uStack_130._2_6_,0x100);
            }
            else if ((lStack_80 == 6) &&
                    ((int)*plVar4 == 0x72756f73 && *(short *)((long)plVar4 + 4) == 0x6563)) {
              uStack_130 = (byte *)((ulong)uStack_130._2_6_ << 0x10);
            }
            else {
LAB_10137d8a0:
              uStack_130 = (byte *)CONCAT62(uStack_130._2_6_,0x300);
            }
joined_r0x00010137d864:
            if (plVar2 != (long *)0x0) {
              _free(plVar4);
            }
          }
          else {
LAB_10137daac:
            pbStack_128 = (byte *)FUN_108855b04(&bStack_98,auStack_71,&UNK_10b20d600);
            uStack_130 = (byte *)CONCAT71(uStack_130._1_7_,1);
          }
        }
        else {
          if (bVar12 == 0xd) {
            if (plVar4 == (long *)0xb) {
              if (*plVar2 != 0x6150657372617073 || *(long *)((long)plVar2 + 3) != 0x7368746150657372
                 ) goto LAB_10137d91c;
              bVar12 = 2;
            }
            else if (plVar4 == (long *)0x7) {
              if ((int)*plVar2 != 0x4e666572 || *(int *)((long)plVar2 + 3) != 0x656d614e)
              goto LAB_10137d91c;
              bVar12 = 1;
            }
            else if ((plVar4 == (long *)0x6) &&
                    ((int)*plVar2 == 0x72756f73 && *(short *)((long)plVar2 + 4) == 0x6563)) {
              bVar12 = 0;
            }
            else {
LAB_10137d91c:
              bVar12 = 3;
            }
            goto LAB_10137d924;
          }
          if (bVar12 == 0xe) {
            func_0x000100bb2294(&uStack_130,plVar4);
            goto joined_r0x00010137d864;
          }
          if (bVar12 != 0xf) goto LAB_10137daac;
          func_0x000100bb2294(&uStack_130,plVar2,plVar4);
LAB_10137d928:
          FUN_100e077ec(&bStack_98);
        }
        pbVar10 = pbStack_128;
        if (((ulong)uStack_130 & 1) != 0) {
LAB_10137dde4:
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar10;
          uStack_a0 = unaff_x22;
          pbStack_a8 = pbStack_150;
          pbStack_b0 = pbStack_148;
          goto joined_r0x00010137de08;
        }
        bVar12 = uStack_130._1_1_;
        bVar1 = uStack_130._1_1_ < 2;
        cVar5 = (char)pbStack_100;
        pbVar15 = pbVar8;
        if (bVar1) {
          if (bVar12 == 0) {
            if (uVar17 != 0x8000000000000000) {
              pbStack_a8 = pbStack_150;
              pbStack_b0 = pbStack_148;
              bStack_98 = 0x8f;
              bStack_97 = 0x7b;
              uStack_96 = 0x108ca;
              uStack_90 = 6;
              uStack_8f = 0;
              uStack_130 = &bStack_98;
              pbStack_128 = &DAT_100c7b3a0;
              uStack_a0 = unaff_x22;
              uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_130);
              goto LAB_10137dc28;
            }
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
            if (cVar5 == '\x16') {
              pbStack_a8 = pbStack_150;
              pbStack_b0 = pbStack_148;
              uStack_a0 = unaff_x22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10137e150:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10137e154);
              (*pcVar7)();
            }
            uVar21 = *puVar13;
            puVar16[1] = puVar13[1];
            *puVar16 = uVar21;
            uVar21 = *(undefined8 *)((long)puVar13 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar21;
            uStack_130 = (byte *)CONCAT71(uStack_130._1_7_,cVar5);
            uVar9 = 0;
            FUN_1004b62d4(&bStack_98,&uStack_130);
            uVar17 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
            if (uVar17 == 0x8000000000000000) {
LAB_10137dde0:
              pbVar10 = (byte *)CONCAT71(uStack_8f,uStack_90);
              uVar17 = uVar9;
              goto LAB_10137dde4;
            }
            uStack_158 = CONCAT71(uStack_8f,uStack_90);
            uStack_168 = CONCAT71(uStack_87,uStack_88);
          }
          else {
            if (uStack_138 != 0x8000000000000001) {
              pbStack_a8 = pbStack_150;
              pbStack_b0 = pbStack_148;
              bStack_98 = 0x5f;
              bStack_97 = 0xc;
              uStack_96 = 0x108cc;
              uStack_90 = 7;
              uStack_8f = 0;
              uStack_130 = &bStack_98;
              pbStack_128 = &DAT_100c7b3a0;
              uStack_a0 = unaff_x22;
              uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_130);
              goto LAB_10137dc28;
            }
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
            if (cVar5 == '\x16') {
              pbStack_a8 = pbStack_150;
              pbStack_b0 = pbStack_148;
              uStack_a0 = unaff_x22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10137e150;
            }
            uVar21 = *puVar13;
            puVar16[1] = puVar13[1];
            *puVar16 = uVar21;
            uVar21 = *(undefined8 *)((long)puVar13 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar21;
            uStack_130 = (byte *)CONCAT71(uStack_130._1_7_,cVar5);
            FUN_1004b60cc(&bStack_98,&uStack_130);
            uStack_138 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
            if (uStack_138 == 0x8000000000000001) {
              uStack_138 = 0x8000000000000001;
              uVar9 = uVar17;
              goto LAB_10137dde0;
            }
            uStack_160 = CONCAT71(uStack_8f,uStack_90);
            uStack_170 = CONCAT71(uStack_87,uStack_88);
          }
        }
        else if (bVar12 == 2) {
          if (pbStack_140 != (byte *)0x8000000000000001) {
            pbStack_a8 = pbStack_150;
            pbStack_b0 = pbStack_148;
            bStack_98 = 0x66;
            bStack_97 = 0xc;
            uStack_96 = 0x108cc;
            uStack_90 = 0xb;
            uStack_8f = 0;
            uStack_130 = &bStack_98;
            pbStack_128 = &DAT_100c7b3a0;
            uStack_a0 = unaff_x22;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_130);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            if (pbStack_140 == (byte *)0x8000000000000000) goto LAB_10137de44;
            goto LAB_10137de0c;
          }
          FUN_100f21028(&uStack_130,&pbStack_100);
          if (uStack_130 == (byte *)0x8000000000000001) {
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)pbStack_128;
            goto LAB_10137de44;
          }
          pbStack_150 = pbStack_128;
          pbStack_148 = uStack_130;
          pbStack_140 = uStack_130;
          unaff_x22 = uStack_120;
          pbVar20 = pbStack_d8;
          pbVar15 = pbStack_c8;
        }
        else {
          pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
          if (cVar5 == '\x16') {
            pbStack_a8 = pbStack_150;
            pbStack_b0 = pbStack_148;
            uStack_a0 = unaff_x22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10137e150;
          }
          uVar21 = *puVar13;
          puVar16[1] = puVar13[1];
          *puVar16 = uVar21;
          uVar21 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar21;
          uStack_130 = (byte *)CONCAT71(uStack_130._1_7_,cVar5);
          FUN_100e077ec(&uStack_130);
        }
        pbVar8 = pbVar20;
        pbVar10 = pbVar8;
        pbVar20 = pbVar8;
      } while (pbVar8 != pbVar15);
      pbStack_a8 = pbStack_150;
      pbStack_b0 = pbStack_148;
      uStack_a0 = unaff_x22;
      if (uVar17 != 0x8000000000000000) {
        uVar9 = 0x8000000000000000;
        if (uStack_138 != 0x8000000000000001) {
          uVar9 = uStack_138;
        }
        *param_1 = uVar17;
        param_1[1] = uStack_158;
        pbVar10 = (byte *)0x8000000000000000;
        if (pbStack_140 != (byte *)0x8000000000000001) {
          pbVar10 = pbStack_140;
        }
        param_1[2] = uStack_168;
        param_1[3] = uVar9;
        param_1[4] = uStack_160;
        param_1[5] = uStack_170;
        param_1[6] = (ulong)pbVar10;
        param_1[7] = (ulong)pbStack_150;
        param_1[8] = unaff_x22;
        FUN_100d34830(&pbStack_e0);
        if (pbVar8 == pbVar20) {
          uVar19 = 0;
        }
        else {
          uStack_130 = pbStack_c0;
          uVar19 = FUN_1087e422c(pbStack_c0 + ((ulong)((long)pbVar8 - (long)pbVar20) >> 6),
                                 &uStack_130,&UNK_10b23a190);
        }
        if ((char)pbStack_100 != '\x16') {
          FUN_100e077ec(&pbStack_100);
        }
        if (uVar19 != 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar19;
          if (uVar17 != 0) {
            _free(uStack_158);
          }
          if ((uVar9 & 0x7fffffffffffffff) != 0) {
            _free(uStack_160);
          }
          if (pbVar10 != (byte *)0x8000000000000000) {
            if (unaff_x22 != 0) {
              pbVar15 = pbStack_150 + 8;
              do {
                if (*(long *)(pbVar15 + -8) != 0) {
                  _free(*(undefined8 *)pbVar15);
                }
                pbVar15 = pbVar15 + 0x18;
                unaff_x22 = unaff_x22 - 1;
              } while (unaff_x22 != 0);
            }
            if (pbVar10 != (byte *)0x0) {
              _free(pbStack_150);
            }
          }
        }
        goto LAB_10137de90;
      }
    }
    bStack_98 = 0x8f;
    bStack_97 = 0x7b;
    uStack_96 = 0x108ca;
    uStack_90 = 6;
    uStack_8f = 0;
    uStack_130 = &bStack_98;
    pbStack_128 = &DAT_100c7b3a0;
    uVar17 = 0;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_130);
LAB_10137dc28:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
joined_r0x00010137de08:
    if (-0x7fffffffffffffff < (long)pbStack_140) {
LAB_10137de0c:
      if (unaff_x22 != 0) {
        pbVar10 = pbStack_150 + 8;
        do {
          if (*(long *)(pbVar10 + -8) != 0) {
            _free(*(undefined8 *)pbVar10);
          }
          pbVar10 = pbVar10 + 0x18;
          unaff_x22 = unaff_x22 - 1;
        } while (unaff_x22 != 0);
      }
      if (pbStack_140 != (byte *)0x0) {
        _free(pbStack_150);
      }
    }
LAB_10137de44:
    if ((-0x7fffffffffffffff < (long)uStack_138) && (uStack_138 != 0)) {
      _free(uStack_160);
    }
    if ((uVar17 & 0x7fffffffffffffff) != 0) {
      _free(uStack_158);
    }
    FUN_100d34830(&pbStack_e0);
    if ((char)pbStack_100 != '\x16') {
      FUN_100e077ec(&pbStack_100);
    }
    goto LAB_10137de90;
  }
  uStack_120 = *(ulong *)(param_2 + 8);
  pbVar15 = *(byte **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18);
  pbVar10 = pbVar15 + lVar18 * 0x20;
  uStack_110 = 0;
  pbVar20 = pbVar15;
  uStack_130 = pbVar15;
  pbStack_118 = pbVar10;
  if (lVar18 == 0) {
LAB_10137db50:
    pbStack_128 = pbVar20;
    pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b231de8,&UNK_10b20a590);
LAB_10137db6c:
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)pbVar8;
  }
  else {
    pbVar20 = pbVar15 + 0x20;
    if (*pbVar15 == 0x16) goto LAB_10137db50;
    uVar21 = *(undefined8 *)(pbVar15 + 1);
    uStack_8f = (undefined7)*(undefined8 *)(pbVar15 + 9);
    bStack_97 = (byte)uVar21;
    uStack_96 = (undefined6)((ulong)uVar21 >> 8);
    uStack_90 = (undefined1)((ulong)uVar21 >> 0x38);
    lStack_80 = *(long *)(pbVar15 + 0x18);
    uStack_88 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
    uStack_110 = 1;
    pbStack_128 = pbVar20;
    bStack_98 = *pbVar15;
    FUN_1004b62d4(&pbStack_b0,&bStack_98);
    uVar17 = uStack_a0;
    pbVar8 = pbStack_a8;
    pbVar6 = pbStack_b0;
    if (pbStack_b0 == (byte *)0x8000000000000000) goto LAB_10137db6c;
    if (lVar18 == 1) {
LAB_10137dd54:
      pbVar10 = (byte *)FUN_1087e422c(1,&UNK_10b231de8,&UNK_10b20a590);
LAB_10137dd70:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbVar10;
    }
    else {
      pbStack_128 = pbVar15 + 0x40;
      if (pbVar15[0x20] == 0x16) goto LAB_10137dd54;
      uVar21 = *(undefined8 *)(pbVar15 + 0x21);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar15 + 0x29);
      bStack_97 = (byte)uVar21;
      uStack_96 = (undefined6)((ulong)uVar21 >> 8);
      uStack_90 = (undefined1)((ulong)uVar21 >> 0x38);
      lStack_80 = *(long *)(pbVar15 + 0x38);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar15 + 0x30);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x30) >> 8);
      uStack_110 = 2;
      bStack_98 = pbVar15[0x20];
      FUN_1004b60cc(&pbStack_b0,&bStack_98);
      uVar9 = uStack_a0;
      pbVar10 = pbStack_a8;
      pbVar15 = pbStack_b0;
      if (pbStack_b0 == (byte *)0x8000000000000001) goto LAB_10137dd70;
      FUN_100f26234(&bStack_98,&uStack_130);
      uVar19 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
      uVar11 = CONCAT71(uStack_8f,uStack_90);
      if (uVar19 != 0x8000000000000002) {
        if (uVar19 != 0x8000000000000001) {
          pbStack_c0 = (byte *)CONCAT71(uStack_87,uStack_88);
          *param_1 = (ulong)pbVar6;
          param_1[1] = (ulong)pbVar8;
          param_1[2] = uVar17;
          param_1[3] = (ulong)pbVar15;
          param_1[4] = (ulong)pbVar10;
          param_1[5] = uVar9;
          param_1[6] = uVar19;
          param_1[7] = uVar11;
          param_1[8] = (ulong)pbStack_c0;
          pbStack_d8 = (byte *)param_1[5];
          pbStack_e0 = (byte *)param_1[4];
          pbStack_c8 = (byte *)param_1[7];
          uStack_d0 = param_1[6];
          pbStack_f8 = (byte *)param_1[1];
          pbStack_100 = (byte *)*param_1;
          pbStack_e8 = (byte *)param_1[3];
          uStack_f0 = param_1[2];
          uVar17 = FUN_100fbc738(&uStack_130);
          if (uVar17 != 0) {
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar17;
            FUN_100dda168(&pbStack_100);
          }
          goto LAB_10137de90;
        }
        uVar11 = FUN_1087e422c(2,&UNK_10b231de8,&UNK_10b20a590);
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      if (((ulong)pbVar15 & 0x7fffffffffffffff) != 0) {
        _free(pbVar10);
      }
    }
    pbVar10 = pbStack_118;
    pbVar20 = pbStack_128;
    if (pbVar6 != (byte *)0x0) {
      _free(pbVar8);
      pbVar10 = pbStack_118;
      pbVar20 = pbStack_128;
    }
  }
  lVar18 = ((ulong)((long)pbVar10 - (long)pbVar20) >> 5) + 1;
  while (lVar18 = lVar18 + -1, lVar18 != 0) {
    FUN_100e077ec(pbVar20);
    pbVar20 = pbVar20 + 0x20;
  }
  if (uStack_120 != 0) {
    _free(uStack_130);
  }
LAB_10137de90:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

