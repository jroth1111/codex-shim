
/* WARNING: Removing unreachable block (ram,0x0001012ac9b8) */
/* WARNING: Removing unreachable block (ram,0x0001012ac2c8) */
/* WARNING: Removing unreachable block (ram,0x0001012ac774) */

void FUN_1012ac184(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  ulong unaff_x21;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  byte bStack_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined1 auStack_69 [9];
  
  if (*param_2 == '\x14') {
    lVar10 = *(long *)(param_2 + 8);
    pbVar13 = *(byte **)(param_2 + 0x10);
    lVar16 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar13 + lVar16 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar12 = pbVar13;
    pbStack_f0 = pbVar13;
    lStack_e0 = lVar10;
    pbStack_d8 = pbVar1;
    if (lVar16 != 0) {
      pbVar12 = pbVar13 + 0x20;
      if (*pbVar13 != 0x16) {
        uVar18 = *(undefined8 *)(pbVar13 + 1);
        uStack_97 = (undefined7)*(undefined8 *)(pbVar13 + 9);
        bStack_9f = (byte)uVar18;
        uStack_9e = (undefined6)((ulong)uVar18 >> 8);
        uStack_98 = (undefined1)((ulong)uVar18 >> 0x38);
        uStack_88 = *(undefined8 *)(pbVar13 + 0x18);
        uStack_90 = (undefined1)*(undefined8 *)(pbVar13 + 0x10);
        uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x10) >> 8);
        pbStack_d0 = (byte *)0x1;
        pbStack_e8 = pbVar12;
        bStack_a0 = *pbVar13;
        auVar19 = FUN_100614fd8(&bStack_a0);
        uVar8 = auVar19._8_8_;
        if (auVar19._0_8_ == 1) goto LAB_1012ac27c;
        if (lVar16 != 1) {
          pbVar12 = pbVar13 + 0x40;
          pbStack_e8 = pbVar12;
          if (pbVar13[0x20] != 0x16) {
            uVar18 = *(undefined8 *)(pbVar13 + 0x21);
            uStack_97 = (undefined7)*(undefined8 *)(pbVar13 + 0x29);
            bStack_9f = (byte)uVar18;
            uStack_9e = (undefined6)((ulong)uVar18 >> 8);
            uStack_98 = (undefined1)((ulong)uVar18 >> 0x38);
            uStack_88 = *(undefined8 *)(pbVar13 + 0x38);
            uStack_90 = (undefined1)*(undefined8 *)(pbVar13 + 0x30);
            uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x30) >> 8);
            pbStack_d0 = (byte *)0x2;
            bStack_a0 = pbVar13[0x20];
            auVar20 = FUN_100614fd8(&bStack_a0);
            uVar8 = auVar20._8_8_;
            if (auVar20._0_8_ == 1) goto LAB_1012ac27c;
            if (lVar16 != 2) {
              pbVar12 = pbVar13 + 0x60;
              pbStack_e8 = pbVar12;
              if (pbVar13[0x40] != 0x16) {
                uVar18 = *(undefined8 *)(pbVar13 + 0x41);
                uStack_97 = (undefined7)*(undefined8 *)(pbVar13 + 0x49);
                bStack_9f = (byte)uVar18;
                uStack_9e = (undefined6)((ulong)uVar18 >> 8);
                uStack_98 = (undefined1)((ulong)uVar18 >> 0x38);
                uStack_88 = *(undefined8 *)(pbVar13 + 0x58);
                uStack_90 = (undefined1)*(undefined8 *)(pbVar13 + 0x50);
                uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x50) >> 8);
                pbStack_d0 = (byte *)0x3;
                bStack_a0 = pbVar13[0x40];
                auVar21 = FUN_100614fd8(&bStack_a0);
                uVar8 = auVar21._8_8_;
                if (auVar21._0_8_ == 1) goto LAB_1012ac27c;
                if (lVar16 != 3) {
                  pbVar12 = pbVar13 + 0x80;
                  pbStack_e8 = pbVar12;
                  if (pbVar13[0x60] != 0x16) {
                    uVar18 = *(undefined8 *)(pbVar13 + 0x61);
                    uStack_97 = (undefined7)*(undefined8 *)(pbVar13 + 0x69);
                    bStack_9f = (byte)uVar18;
                    uStack_9e = (undefined6)((ulong)uVar18 >> 8);
                    uStack_98 = (undefined1)((ulong)uVar18 >> 0x38);
                    uStack_88 = *(undefined8 *)(pbVar13 + 0x78);
                    uStack_90 = (undefined1)*(undefined8 *)(pbVar13 + 0x70);
                    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x70) >> 8);
                    pbStack_d0 = (byte *)0x4;
                    bStack_a0 = pbVar13[0x60];
                    auVar22 = FUN_100614fd8(&bStack_a0);
                    uVar8 = auVar22._8_8_;
                    if (auVar22._0_8_ != 1) {
                      if (lVar16 != 4) {
                        pbVar12 = pbVar13 + 0xa0;
                        pbStack_e8 = pbVar12;
                        if (pbVar13[0x80] != 0x16) {
                          uVar18 = *(undefined8 *)(pbVar13 + 0x81);
                          uStack_97 = (undefined7)*(undefined8 *)(pbVar13 + 0x89);
                          bStack_9f = (byte)uVar18;
                          uStack_9e = (undefined6)((ulong)uVar18 >> 8);
                          uStack_98 = (undefined1)((ulong)uVar18 >> 0x38);
                          uStack_88 = *(undefined8 *)(pbVar13 + 0x98);
                          uStack_90 = (undefined1)*(undefined8 *)(pbVar13 + 0x90);
                          uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x90) >> 8);
                          pbStack_d0 = (byte *)0x5;
                          bStack_a0 = pbVar13[0x80];
                          auVar23 = FUN_100614fd8(&bStack_a0);
                          uVar8 = auVar23._8_8_;
                          if (auVar23._0_8_ != 1) {
                            param_1[1] = auVar19._8_8_;
                            param_1[2] = auVar20._8_8_;
                            param_1[3] = auVar21._8_8_;
                            param_1[4] = auVar22._8_8_;
                            param_1[5] = uVar8;
                            uVar8 = FUN_100fbc738(&pbStack_f0);
                            if (uVar8 != 0) {
                              *param_1 = 1;
                              param_1[1] = uVar8;
                              return;
                            }
                            *param_1 = 0;
                            return;
                          }
                          goto LAB_1012ac27c;
                        }
                      }
                      uVar8 = FUN_1087e422c(4,&UNK_10b22c9b8,&UNK_10b20a590);
                    }
                    goto LAB_1012ac27c;
                  }
                }
                uVar8 = FUN_1087e422c(3,&UNK_10b22c9b8,&UNK_10b20a590);
                goto LAB_1012ac27c;
              }
            }
            uVar8 = FUN_1087e422c(2,&UNK_10b22c9b8,&UNK_10b20a590);
            goto LAB_1012ac27c;
          }
        }
        uVar8 = FUN_1087e422c(1,&UNK_10b22c9b8,&UNK_10b20a590);
        goto LAB_1012ac27c;
      }
    }
    pbStack_e8 = pbVar12;
    uVar8 = FUN_1087e422c(0,&UNK_10b22c9b8,&UNK_10b20a590);
LAB_1012ac27c:
    *param_1 = 1;
    param_1[1] = uVar8;
    lVar16 = ((ulong)((long)pbVar1 - (long)pbVar12) >> 5) + 1;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      FUN_100e077ec(pbVar12);
      pbVar12 = pbVar12 + 0x20;
    }
    if (lVar10 != 0) {
      _free(pbVar13);
    }
    return;
  }
  if (*param_2 != '\x15') {
    uVar8 = FUN_108855b04(param_2,auStack_69,&UNK_10b20be20);
    *param_1 = 1;
    param_1[1] = uVar8;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar12 = pbStack_d0 + lVar10;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_c8 = pbStack_d0;
  pbStack_b8 = pbVar12;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar16 = 0;
    bVar2 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    bVar3 = false;
    puVar15 = (undefined8 *)((ulong)&bStack_a0 | 1);
    puVar14 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
LAB_1012ac2e8:
    pbVar11 = pbVar1 + 0x40;
    bVar9 = *pbVar1;
    pbVar13 = pbVar11;
    lVar17 = lVar16;
    if (bVar9 == 0x16) goto LAB_1012ac6a8;
    uVar18 = *(undefined8 *)(pbVar1 + 0x10);
    *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
    *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
    uVar18 = *(undefined8 *)(pbVar1 + 1);
    puVar15[1] = *(undefined8 *)(pbVar1 + 9);
    *puVar15 = uVar18;
    pbStack_e8 = *(byte **)(pbVar1 + 0x28);
    pbStack_f0 = *(byte **)(pbVar1 + 0x20);
    pbStack_d8 = *(byte **)(pbVar1 + 0x38);
    lStack_e0 = *(long *)(pbVar1 + 0x30);
    uVar8 = CONCAT71(uStack_97,uStack_98);
    uVar18 = CONCAT71(uStack_8f,uStack_90);
    bStack_a0 = bVar9;
    if (bVar9 < 0xd) {
      if (bVar9 == 1) {
        bVar9 = bStack_9f;
        if (4 < bStack_9f) {
          bVar9 = 5;
        }
        uStack_80 = (undefined *)((ulong)CONCAT61(uStack_80._2_6_,bVar9) << 8);
LAB_1012ac3f0:
        FUN_100e077ec(&bStack_a0);
LAB_1012ac3f8:
        uVar8 = uStack_78;
        if ((char)uStack_80 != '\x01') goto LAB_1012ac404;
      }
      else {
        if (bVar9 == 4) {
          if (4 < uVar8) {
            uVar8 = 5;
          }
          uStack_80 = (undefined *)((ulong)CONCAT61(uStack_80._2_6_,(char)uVar8) << 8);
          goto LAB_1012ac3f0;
        }
        if (bVar9 == 0xc) {
          func_0x000100ad9844(&uStack_80,uVar18);
          if (uVar8 != 0) goto LAB_1012ac3ac;
          goto LAB_1012ac3f8;
        }
LAB_1012ac5e8:
        uStack_78 = FUN_108855b04(&bStack_a0,auStack_69,&UNK_10b2129c0);
        uStack_80 = (undefined *)CONCAT71(uStack_80._1_7_,1);
        uVar8 = uStack_78;
      }
    }
    else {
      if (bVar9 == 0xd) {
        func_0x000100ad9844(&uStack_80,uVar8,uVar18);
        goto LAB_1012ac3f0;
      }
      if (bVar9 != 0xe) {
        if (bVar9 != 0xf) goto LAB_1012ac5e8;
        func_0x000100ad940c(&uStack_80,uVar8,uVar18);
        goto LAB_1012ac3f0;
      }
      func_0x000100ad940c(&uStack_80,uVar18,uStack_88);
      if (uVar8 == 0) goto LAB_1012ac3f8;
LAB_1012ac3ac:
      _free(uVar18);
      uVar8 = uStack_78;
      if ((char)uStack_80 == '\x01') goto LAB_1012ac624;
LAB_1012ac404:
      bVar9 = (byte)pbStack_f0;
      if (2 < uStack_80._1_1_) {
        if (uStack_80._1_1_ == 3) {
          if (bVar5) {
            lStack_b0 = lVar16 + 1;
            uStack_80 = &UNK_108cafc48;
            uStack_78 = 0x17;
            bStack_a0 = (byte)&uStack_80;
            bStack_9f = (byte)((ulong)&uStack_80 >> 8);
            uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_c8 = pbVar11;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_1012ac744;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar9 == 0x16) goto LAB_1012ac9bc;
          uVar18 = *puVar14;
          puVar15[1] = puVar14[1];
          *puVar15 = uVar18;
          uVar18 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
          bStack_a0 = bVar9;
          auVar19 = FUN_100614fd8(&bStack_a0);
          uStack_140 = auVar19._8_8_;
          uVar8 = uStack_140;
          if ((auVar19._0_8_ & 1) != 0) goto LAB_1012ac624;
          bVar5 = true;
        }
        else if (uStack_80._1_1_ == 4) {
          if (bVar3) {
            lStack_b0 = lVar16 + 1;
            uStack_80 = &UNK_108cafc5f;
            uStack_78 = 0xc;
            bStack_a0 = (byte)&uStack_80;
            bStack_9f = (byte)((ulong)&uStack_80 >> 8);
            uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_c8 = pbVar11;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_1012ac744;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar9 == 0x16) goto LAB_1012ac9bc;
          uVar18 = *puVar14;
          puVar15[1] = puVar14[1];
          *puVar15 = uVar18;
          uVar18 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
          bStack_a0 = bVar9;
          auVar19 = FUN_100614fd8(&bStack_a0);
          uStack_148 = auVar19._8_8_;
          uVar8 = uStack_148;
          if ((auVar19._0_8_ & 1) != 0) goto LAB_1012ac624;
          bVar3 = true;
        }
        else {
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar9 == 0x16) goto LAB_1012ac9bc;
          uVar18 = *puVar14;
          puVar15[1] = puVar14[1];
          *puVar15 = uVar18;
          uVar18 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
          bStack_a0 = bVar9;
          FUN_100e077ec(&bStack_a0);
        }
LAB_1012ac2d4:
        lVar16 = lVar16 + 1;
        pbVar13 = pbVar12;
        lVar17 = (lVar10 - 0x40U >> 6) + 1;
        pbVar1 = pbVar11;
        if (pbVar11 == pbVar12) goto LAB_1012ac6a8;
        goto LAB_1012ac2e8;
      }
      if (uStack_80._1_1_ == 0) {
        if (bVar4) {
          lStack_b0 = lVar16 + 1;
          uStack_80 = &UNK_108cafc1c;
          uStack_78 = 0xc;
          bStack_a0 = (byte)&uStack_80;
          bStack_9f = (byte)((ulong)&uStack_80 >> 8);
          uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_c8 = pbVar11;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_1012ac744;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar9 == 0x16) goto LAB_1012ac9bc;
        uVar18 = *puVar14;
        puVar15[1] = puVar14[1];
        *puVar15 = uVar18;
        uVar18 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
        bStack_a0 = bVar9;
        auVar19 = FUN_100614fd8(&bStack_a0);
        unaff_x21 = auVar19._8_8_;
        uVar8 = unaff_x21;
        if ((auVar19._0_8_ & 1) == 0) {
          bVar4 = true;
          goto LAB_1012ac2d4;
        }
      }
      else {
        if (uStack_80._1_1_ != 1) {
          if (!bVar6) {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar9 == 0x16) goto LAB_1012ac9bc;
            uVar18 = *puVar14;
            puVar15[1] = puVar14[1];
            *puVar15 = uVar18;
            uVar18 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
            bStack_a0 = bVar9;
            auVar19 = FUN_100614fd8(&bStack_a0);
            uStack_138 = auVar19._8_8_;
            uVar8 = uStack_138;
            if ((auVar19._0_8_ & 1) == 0) {
              bVar6 = true;
              goto LAB_1012ac2d4;
            }
            goto LAB_1012ac624;
          }
          lStack_b0 = lVar16 + 1;
          uStack_80 = &UNK_108cafc3b;
          uStack_78 = 0xd;
          bStack_a0 = (byte)&uStack_80;
          bStack_9f = (byte)((ulong)&uStack_80 >> 8);
          uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_c8 = pbVar11;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_1012ac744;
        }
        if (bVar2) {
          lStack_b0 = lVar16 + 1;
          uStack_80 = &UNK_108cafc28;
          uStack_78 = 0x13;
          bStack_a0 = (byte)&uStack_80;
          bStack_9f = (byte)((ulong)&uStack_80 >> 8);
          uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_c8 = pbVar11;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_1012ac744;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar9 == 0x16) {
LAB_1012ac9bc:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar16 + 1;
          pbStack_c8 = pbVar11;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1012ac9e8);
          (*pcVar7)();
        }
        uVar18 = *puVar14;
        puVar15[1] = puVar14[1];
        *puVar15 = uVar18;
        uVar18 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar18;
        bStack_a0 = bVar9;
        auVar19 = FUN_100614fd8(&bStack_a0);
        uStack_130 = auVar19._8_8_;
        uVar8 = uStack_130;
        if ((auVar19._0_8_ & 1) == 0) {
          bVar2 = true;
          goto LAB_1012ac2d4;
        }
      }
    }
LAB_1012ac624:
    lStack_b0 = lVar16 + 1;
    pbStack_c8 = pbVar11;
    goto LAB_1012ac744;
  }
  goto LAB_1012ac710;
LAB_1012ac6a8:
  pbStack_c8 = pbVar13;
  lStack_b0 = lVar17;
  if (bVar4) {
    if (bVar2) {
      if (bVar6) {
        if (bVar5) {
          if (bVar3) {
            param_1[2] = uStack_130;
            param_1[3] = uStack_138;
            param_1[4] = uStack_140;
            param_1[5] = uStack_148;
            *param_1 = 0;
            param_1[1] = unaff_x21;
            uVar8 = FUN_100fbc67c(&pbStack_f0);
            if (uVar8 != 0) {
              param_1[1] = uVar8;
            }
            *param_1 = (ulong)(uVar8 != 0);
            return;
          }
          uStack_80 = &UNK_108cafc5f;
          uStack_78 = 0xc;
          bStack_a0 = (byte)&uStack_80;
          bStack_9f = (byte)((ulong)&uStack_80 >> 8);
          uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
        }
        else {
          uStack_80 = &UNK_108cafc48;
          uStack_78 = 0x17;
          bStack_a0 = (byte)&uStack_80;
          bStack_9f = (byte)((ulong)&uStack_80 >> 8);
          uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
        }
      }
      else {
        uStack_80 = &UNK_108cafc3b;
        uStack_78 = 0xd;
        bStack_a0 = (byte)&uStack_80;
        bStack_9f = (byte)((ulong)&uStack_80 >> 8);
        uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
        uStack_98 = 0xa0;
        uStack_97 = 0x100c7b3;
        uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
      }
    }
    else {
      uStack_80 = &UNK_108cafc28;
      uStack_78 = 0x13;
      bStack_a0 = (byte)&uStack_80;
      bStack_9f = (byte)((ulong)&uStack_80 >> 8);
      uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
      uStack_98 = 0xa0;
      uStack_97 = 0x100c7b3;
      uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
    }
    goto LAB_1012ac744;
  }
LAB_1012ac710:
  uStack_80 = &UNK_108cafc1c;
  uStack_78 = 0xc;
  bStack_a0 = (byte)&uStack_80;
  bStack_9f = (byte)((ulong)&uStack_80 >> 8);
  uStack_9e = (undefined6)((ulong)&uStack_80 >> 0x10);
  uStack_98 = 0xa0;
  uStack_97 = 0x100c7b3;
  uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
LAB_1012ac744:
  *param_1 = 1;
  param_1[1] = uVar8;
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 == '\x16') {
    return;
  }
  FUN_100e077ec(&pbStack_f0);
  return;
}

