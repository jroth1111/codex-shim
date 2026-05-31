
/* WARNING: Removing unreachable block (ram,0x0001014523d0) */

void FUN_1014516c0(undefined1 *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  byte bVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  undefined8 *unaff_x25;
  byte bVar24;
  long unaff_x26;
  byte bVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined8 uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  byte *pbStack_159;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  byte bStack_a8;
  byte bStack_a7;
  undefined6 uStack_a6;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 auStack_71 [17];
  
  bVar24 = (byte)unaff_x26;
  bVar23 = (byte)unaff_x25;
  cVar5 = *param_2;
  if ((cVar5 == '\f') || (cVar5 == '\r')) {
    bVar4 = 0;
    lStack_188 = *(long *)(param_2 + 8);
    uStack_190 = *(undefined8 *)param_2;
    uStack_178 = *(undefined8 *)(param_2 + 0x18);
    uStack_180 = *(ulong *)(param_2 + 0x10);
    uVar18 = 0x16;
LAB_1014517c8:
    lStack_148 = lStack_188;
    uStack_150 = uStack_190;
    uVar10 = uStack_150;
    uStack_138 = uStack_178;
    uStack_140 = uStack_180;
    uStack_130 = (undefined1)uVar18;
    uStack_127 = uStack_168;
    uStack_12f = (undefined7)uStack_170;
    uStack_128 = (undefined1)((ulong)uStack_170 >> 0x38);
    pbStack_118 = pbStack_159;
    uStack_120 = uStack_161;
    uStack_11f = uStack_160;
    pbStack_e8 = (byte *)CONCAT71(uStack_168,uStack_128);
    pbStack_f0 = (byte *)CONCAT71(uStack_12f,uStack_130);
    pbStack_e0 = (byte *)CONCAT71(uStack_160,uStack_161);
    pbStack_d8 = pbStack_159;
    uStack_150._0_1_ = (byte)uStack_190;
    uStack_150 = uVar10;
    if ((byte)uStack_150 < 0xd) {
      if ((byte)uStack_150 == 1) {
        uStack_150._1_1_ = (byte)((ulong)uStack_190 >> 8);
        if (uStack_150._1_1_ < 2) {
          if (uStack_150._1_1_ == 0) {
LAB_101451e68:
            uVar11 = 0;
            uStack_88 = (undefined *)((ulong)uStack_88._2_6_ << 0x10);
            goto LAB_101451e88;
          }
          if (uStack_150._1_1_ != 1) {
LAB_1014526cc:
            bStack_a0 = uStack_150._1_1_;
            uStack_9f = 0;
            bStack_a8 = 1;
            uStack_80 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&bStack_a8,&UNK_10b22b4b8,&UNK_10b20a590);
            goto LAB_1014526f0;
          }
LAB_101451e5c:
          uVar13 = 1;
        }
        else if (uStack_150._1_1_ == 2) {
LAB_101451e70:
          uVar13 = 2;
        }
        else if (uStack_150._1_1_ == 3) {
LAB_101451e7c:
          uVar13 = 3;
        }
        else {
          if (uStack_150._1_1_ != 4) goto LAB_1014526cc;
LAB_101451d28:
          uVar13 = 4;
        }
        uVar11 = 0;
        uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,uVar13) << 8);
LAB_101451e88:
        uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,uVar11);
        goto LAB_101451e8c;
      }
      if ((byte)uStack_150 == 4) {
        if (lStack_188 < 2) {
          if (lStack_188 == 0) goto LAB_101451e68;
          if (lStack_188 == 1) goto LAB_101451e5c;
        }
        else {
          if (lStack_188 == 2) goto LAB_101451e70;
          if (lStack_188 == 3) goto LAB_101451e7c;
          if (lStack_188 == 4) goto LAB_101451d28;
        }
        bStack_a0 = (byte)lStack_188;
        uStack_9f = (undefined7)((ulong)lStack_188 >> 8);
        bStack_a8 = 1;
        uStack_80 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&bStack_a8,&UNK_10b22b4b8,&UNK_10b20a590);
LAB_1014526f0:
        uVar11 = 1;
        goto LAB_101451e88;
      }
      if ((byte)uStack_150 == 0xc) {
        FUN_100ae9b20(&uStack_88,uStack_180,uStack_178);
        goto LAB_101451890;
      }
LAB_1014523a4:
      uStack_80 = FUN_108855b04(&uStack_150,auStack_71,&UNK_10b20d1e0);
      uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,1);
      pbVar1 = pbStack_110;
LAB_101451ea0:
      pbStack_110 = pbVar1;
      uStack_180 = uStack_80;
      if ((byte)pbStack_f0 != '\x16') {
        FUN_100e077ec(&pbStack_f0);
      }
LAB_101451eb8:
      bVar25 = 0;
      bVar20 = 0;
      bVar22 = 0;
      bVar9 = true;
    }
    else {
      if ((byte)uStack_150 == 0xd) {
        FUN_100ae9b20(&uStack_88,lStack_188,uStack_180);
LAB_101451e8c:
        FUN_100e077ec(&uStack_150);
LAB_101451e94:
        uStack_180 = uVar18;
        pbVar1 = pbStack_110;
        pbStack_110 = pbStack_f0;
        pbVar27 = pbStack_e8;
        pbVar15 = pbStack_e0;
        pbVar21 = pbStack_d8;
        puVar6 = uStack_88;
      }
      else {
        if ((byte)uStack_150 != 0xe) {
          if ((byte)uStack_150 != 0xf) goto LAB_1014523a4;
          FUN_100ae972c(&uStack_88,lStack_188,uStack_180);
          goto LAB_101451e8c;
        }
        FUN_100ae972c(&uStack_88,uStack_180,uStack_178);
LAB_101451890:
        uVar18 = uStack_180;
        if (lStack_188 == 0) goto LAB_101451e94;
        _free(uStack_180);
        pbVar1 = pbStack_110;
        pbStack_110 = pbStack_f0;
        pbVar27 = pbStack_e8;
        pbVar15 = pbStack_e0;
        pbVar21 = pbStack_d8;
        puVar6 = uStack_88;
      }
      bVar9 = (char)uStack_88 == '\x01';
      pbStack_f0 = pbStack_110;
      pbStack_e8 = pbVar27;
      pbStack_e0 = pbVar15;
      pbStack_d8 = pbVar21;
      uStack_88 = puVar6;
      if (bVar9) goto LAB_101451ea0;
      uStack_88._1_1_ = (byte)((ulong)puVar6 >> 8);
      uVar14 = (uint)pbStack_110;
      uVar2 = uVar14 & 0xff;
      pbStack_108 = pbVar27;
      pbStack_100 = pbVar15;
      pbStack_f8 = pbVar21;
      if (uStack_88._1_1_ < 2) {
        if (uStack_88._1_1_ != 0) {
          if (uVar2 != 0x16) {
            if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (pbVar21 != (byte *)0x0)))) {
              uStack_180 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
              goto LAB_101451eb8;
            }
            FUN_100e077ec(&pbStack_110);
          }
          bVar25 = 0;
          bVar20 = 0;
          bVar9 = false;
          bVar22 = 3;
          goto LAB_101451ec8;
        }
        if (uVar2 == 0x16) {
LAB_101451cf0:
          bVar25 = 0;
          bVar20 = 0;
          bVar9 = false;
          bVar22 = 2;
          goto LAB_101451ec8;
        }
        if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (pbVar21 == (byte *)0x0)))) {
          FUN_100e077ec(&pbStack_110);
          goto LAB_101451cf0;
        }
        uStack_180 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
        goto LAB_101451eb8;
      }
      if (uStack_88._1_1_ == 2) {
        if (uVar2 != 0x16) {
          if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (pbVar21 != (byte *)0x0)))) {
            uStack_180 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
            goto LAB_101451eb8;
          }
          FUN_100e077ec(&pbStack_110);
        }
        bVar25 = 0;
        bVar20 = 0;
        bVar9 = false;
        bVar22 = 4;
      }
      else if (uStack_88._1_1_ == 3) {
        if (uVar2 == 0x14) {
          pbVar1 = pbVar15 + (long)pbVar21 * 0x20;
          pbStack_d0 = (byte *)0x0;
          pbStack_f0 = pbVar15;
          pbStack_e0 = pbVar27;
          pbStack_d8 = pbVar1;
          if (pbVar21 == (byte *)0x0) {
            uVar10 = 0;
            pbVar26 = pbVar15;
            pbStack_e8 = pbVar15;
LAB_10145201c:
            uStack_180 = FUN_1087e422c(uVar10,&UNK_10b233dd0,&UNK_10b20a590);
          }
          else {
            pbVar26 = pbVar15 + 0x20;
            bVar23 = *pbVar15;
            pbStack_e8 = pbVar26;
            if (bVar23 == 0x16) {
              uVar10 = 0;
              goto LAB_10145201c;
            }
            uVar10 = *(undefined8 *)(pbVar15 + 1);
            uStack_9f = (undefined7)*(undefined8 *)(pbVar15 + 9);
            bStack_a7 = (byte)uVar10;
            bVar22 = bStack_a7;
            uStack_a6 = (undefined6)((ulong)uVar10 >> 8);
            bStack_a0 = (byte)((ulong)uVar10 >> 0x38);
            uStack_90 = *(undefined8 *)(pbVar15 + 0x18);
            uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
            uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
            pbStack_d0 = (byte *)0x1;
            bStack_a8 = bVar23;
            if (bVar23 != 0) {
              uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
              goto LAB_101452034;
            }
            FUN_100e077ec(&bStack_a8);
            if (pbVar21 == (byte *)0x1) {
LAB_101452018:
              uVar10 = 1;
              goto LAB_10145201c;
            }
            pbVar26 = pbVar15 + 0x40;
            bVar23 = pbVar15[0x20];
            pbStack_e8 = pbVar26;
            if (bVar23 == 0x16) goto LAB_101452018;
            uVar10 = *(undefined8 *)(pbVar15 + 0x21);
            uStack_9f = (undefined7)*(undefined8 *)(pbVar15 + 0x29);
            bStack_a7 = (byte)uVar10;
            bVar20 = bStack_a7;
            uStack_a6 = (undefined6)((ulong)uVar10 >> 8);
            bStack_a0 = (byte)((ulong)uVar10 >> 0x38);
            uStack_90 = *(undefined8 *)(pbVar15 + 0x38);
            uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 0x30);
            uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x30) >> 8);
            pbStack_d0 = (byte *)0x2;
            bStack_a8 = bVar23;
            if (bVar23 == 0) {
              FUN_100e077ec(&bStack_a8);
              if (pbVar21 == (byte *)0x2) {
                pbVar19 = (byte *)0x2;
                pbVar21 = pbVar26;
                bVar24 = 0;
              }
              else {
                pbVar26 = pbVar15 + 0x60;
                bVar23 = pbVar15[0x40];
                pbVar21 = pbVar26;
                pbStack_e8 = pbVar26;
                if (bVar23 == 0x16) {
                  pbVar19 = (byte *)0x2;
                  bVar24 = 0;
                }
                else {
                  uVar10 = *(undefined8 *)(pbVar15 + 0x41);
                  uStack_9f = (undefined7)*(undefined8 *)(pbVar15 + 0x49);
                  bStack_a7 = (byte)uVar10;
                  bVar25 = bStack_a7;
                  uStack_a6 = (undefined6)((ulong)uVar10 >> 8);
                  bStack_a0 = (byte)((ulong)uVar10 >> 0x38);
                  uStack_90 = *(undefined8 *)(pbVar15 + 0x58);
                  uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 0x50);
                  uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x50) >> 8);
                  pbStack_d0 = (byte *)0x3;
                  bStack_a8 = bVar23;
                  if (bVar23 != 0) {
                    uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                    goto LAB_101452034;
                  }
                  FUN_100e077ec(&bStack_a8);
                  pbVar19 = (byte *)0x3;
                  bVar24 = bVar25;
                }
              }
              if (pbVar21 != pbVar1) {
                pbVar26 = pbVar21 + 0x20;
                bVar25 = *pbVar21;
                pbStack_e8 = pbVar26;
                if (bVar25 == 0x16) {
                  bVar23 = 0;
                }
                else {
                  uVar10 = *(undefined8 *)(pbVar21 + 1);
                  uStack_9f = (undefined7)*(undefined8 *)(pbVar21 + 9);
                  bStack_a7 = (byte)uVar10;
                  bVar23 = bStack_a7;
                  uStack_a6 = (undefined6)((ulong)uVar10 >> 8);
                  bStack_a0 = (byte)((ulong)uVar10 >> 0x38);
                  uStack_90 = *(undefined8 *)(pbVar21 + 0x18);
                  uStack_98 = (undefined1)*(undefined8 *)(pbVar21 + 0x10);
                  uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x10) >> 8);
                  pbVar19 = pbVar19 + 1;
                  pbStack_d0 = pbVar19;
                  bStack_a8 = bVar25;
                  if (bVar25 != 0) {
                    uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                    goto LAB_101452034;
                  }
                  FUN_100e077ec(&bStack_a8);
                }
                if (pbVar26 != pbVar1) {
                  pbVar26 = pbVar21 + 0x40;
                  bVar12 = pbVar21[0x20];
                  pbStack_e8 = pbVar26;
                  if (bVar12 == 0x16) {
                    uVar10 = 4;
                    goto LAB_10145201c;
                  }
                  uVar10 = *(undefined8 *)(pbVar21 + 0x21);
                  uStack_9f = (undefined7)*(undefined8 *)(pbVar21 + 0x29);
                  bStack_a7 = (byte)uVar10;
                  bVar25 = bStack_a7;
                  uStack_a6 = (undefined6)((ulong)uVar10 >> 8);
                  bStack_a0 = (byte)((ulong)uVar10 >> 0x38);
                  uStack_90 = *(undefined8 *)(pbVar21 + 0x38);
                  uStack_98 = (undefined1)*(undefined8 *)(pbVar21 + 0x30);
                  uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x30) >> 8);
                  pbStack_d0 = pbVar19 + 1;
                  bStack_a8 = bVar12;
                  if (bVar12 == 0) {
                    FUN_100e077ec(&bStack_a8);
                    uStack_180 = FUN_100fbc738(&pbStack_f0);
                    goto LAB_10145232c;
                  }
                  uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                  goto LAB_101452034;
                }
              }
              uVar10 = 4;
              pbVar26 = pbVar1;
              goto LAB_10145201c;
            }
            uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
          }
LAB_101452034:
          lVar16 = ((ulong)((long)pbVar1 - (long)pbVar26) >> 5) + 1;
          while (lVar16 = lVar16 + -1, lVar16 != 0) {
            FUN_100e077ec(pbVar26);
            pbVar26 = pbVar26 + 0x20;
          }
          bVar23 = 0;
          if (pbVar27 != (byte *)0x0) {
            _free(pbVar15);
          }
LAB_1014520d4:
          bVar25 = 0;
          bVar20 = 0;
          bVar22 = 0;
          bVar9 = true;
joined_r0x0001014520ec:
          if (uVar2 == 0x16) goto LAB_101451ec8;
        }
        else {
          pbStack_f0._1_7_ = (undefined7)((ulong)pbStack_110 >> 8);
          if (uVar2 != 0x15) {
            if (uVar2 != 0x16) {
              FUN_1088556a8(&pbStack_f0,&pbStack_110);
              uStack_180 = func_0x000108a4a50c(&pbStack_f0,&UNK_10b212c00,&UNK_10b20a590);
              FUN_100e077ec(&pbStack_110);
              goto LAB_101451eb8;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0xd);
            bVar9 = true;
            uStack_180 = func_0x000108a4a50c(&pbStack_f0,&UNK_10b212c00,&UNK_10b20a590);
            bVar25 = 0;
            bVar20 = 0;
            bVar22 = 0;
            goto LAB_101451ec8;
          }
          pbVar1 = pbVar15 + (long)pbVar21 * 0x40;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = 0;
          pbStack_d0 = pbVar15;
          pbStack_c8 = pbVar15;
          pbStack_c0 = pbVar27;
          pbStack_b8 = pbVar1;
          if (pbVar21 != (byte *)0x0) {
            lVar16 = 0;
            unaff_x25 = (undefined8 *)((ulong)&bStack_a8 | 1);
            puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
            bVar22 = 2;
            bVar23 = 2;
            bVar20 = 2;
            bVar24 = 2;
            bVar25 = 2;
            do {
              pbVar26 = pbVar15 + 0x40;
              bVar12 = *pbVar15;
              unaff_x26 = lVar16;
              pbVar27 = pbVar26;
              if (bVar12 == 0x16) break;
              uVar10 = *(undefined8 *)(pbVar15 + 0x10);
              *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)(pbVar15 + 0x18);
              *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
              uVar10 = *(undefined8 *)(pbVar15 + 1);
              unaff_x25[1] = *(undefined8 *)(pbVar15 + 9);
              *unaff_x25 = uVar10;
              pbStack_e8 = *(byte **)(pbVar15 + 0x28);
              pbStack_f0 = *(byte **)(pbVar15 + 0x20);
              pbStack_d8 = *(byte **)(pbVar15 + 0x38);
              pbStack_e0 = *(byte **)(pbVar15 + 0x30);
              uVar18 = CONCAT71(uStack_9f,bStack_a0);
              uVar10 = CONCAT71(uStack_97,uStack_98);
              bStack_a8 = bVar12;
              if (0xc < bVar12) {
                if (bVar12 == 0xd) {
                  FUN_100b2f800(&uStack_88,uVar18,uVar10);
                  goto LAB_101451a84;
                }
                if (bVar12 == 0xe) {
                  FUN_100b2f434(&uStack_88,uVar10,uStack_90);
                  if (uVar18 != 0) goto LAB_101451a40;
                  goto LAB_101451a8c;
                }
                if (bVar12 == 0xf) {
                  FUN_100b2f434(&uStack_88,uVar18,uVar10);
                  goto LAB_101451a84;
                }
LAB_101451c80:
                uStack_80 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20fb60);
                uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,1);
LAB_101451cac:
                lStack_b0 = lVar16 + 1;
                uStack_180 = uStack_80;
                pbStack_c8 = pbVar26;
                goto LAB_1014520c0;
              }
              if (bVar12 == 1) {
                bVar12 = bStack_a7;
                if (4 < bStack_a7) {
                  bVar12 = 5;
                }
                uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,bVar12) << 8);
LAB_101451a84:
                FUN_100e077ec(&bStack_a8);
LAB_101451a8c:
                pbVar15 = pbStack_f0;
                bVar12 = bStack_a7;
                puVar6 = uStack_88;
              }
              else {
                if (bVar12 == 4) {
                  if (4 < uVar18) {
                    uVar18 = 5;
                  }
                  uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,(char)uVar18) << 8);
                  goto LAB_101451a84;
                }
                if (bVar12 != 0xc) goto LAB_101451c80;
                FUN_100b2f800(&uStack_88,uVar10);
                if (uVar18 == 0) goto LAB_101451a8c;
LAB_101451a40:
                _free(uVar10);
                pbVar15 = pbStack_f0;
                bVar12 = bStack_a7;
                puVar6 = uStack_88;
              }
              bVar9 = (char)uStack_88 == '\x01';
              pbStack_f0 = pbVar15;
              bStack_a7 = bVar12;
              uStack_88 = puVar6;
              if (bVar9) goto LAB_101451cac;
              uStack_88._1_1_ = (byte)((ulong)puVar6 >> 8);
              pbStack_f0._0_1_ = (byte)pbVar15;
              bVar7 = (byte)pbStack_f0;
              pbStack_f0._1_7_ = (undefined7)((ulong)pbVar15 >> 8);
              if (uStack_88._1_1_ < 3) {
                if (uStack_88._1_1_ == 0) {
                  if (bVar22 != 2) {
                    lStack_b0 = lVar16 + 1;
                    uStack_88 = &UNK_108cdc7b0;
                    uStack_80 = 0x10;
                    bStack_a8 = (byte)&uStack_88;
                    bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                    uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                    bStack_a0 = 0xa0;
                    uStack_9f = 0x100c7b3;
                    pbStack_c8 = pbVar26;
                    uStack_180 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                    goto LAB_1014520c0;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (bVar7 == 0x16) goto LAB_10145237c;
                  uVar10 = *puVar17;
                  unaff_x25[1] = puVar17[1];
                  *unaff_x25 = uVar10;
                  uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
                  bStack_a8 = bVar7;
                  if (bVar7 != 0) {
                    lStack_b0 = lVar16 + 1;
                    pbStack_c8 = pbVar26;
                    uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                    goto LAB_1014520c0;
                  }
                  FUN_100e077ec(&bStack_a8);
                  bVar22 = bVar12;
                }
                else if (uStack_88._1_1_ == 1) {
                  if (bVar20 != 2) {
                    lStack_b0 = lVar16 + 1;
                    uStack_88 = &UNK_108ca10cd;
                    uStack_80 = 5;
                    bStack_a8 = (byte)&uStack_88;
                    bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                    uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                    bStack_a0 = 0xa0;
                    uStack_9f = 0x100c7b3;
                    pbStack_c8 = pbVar26;
                    uStack_180 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                    goto LAB_1014520c0;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (bVar7 == 0x16) goto LAB_10145237c;
                  uVar10 = *puVar17;
                  unaff_x25[1] = puVar17[1];
                  *unaff_x25 = uVar10;
                  uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
                  bStack_a8 = bVar7;
                  if (bVar7 != 0) {
                    lStack_b0 = lVar16 + 1;
                    pbStack_c8 = pbVar26;
                    uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                    goto LAB_1014520c0;
                  }
                  FUN_100e077ec(&bStack_a8);
                  bVar20 = bVar12;
                }
                else {
                  if (bVar24 != 2) {
                    lStack_b0 = lVar16 + 1;
                    uStack_88 = &UNK_108ca10d2;
                    uStack_80 = 0xe;
                    bStack_a8 = (byte)&uStack_88;
                    bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                    uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                    bStack_a0 = 0xa0;
                    uStack_9f = 0x100c7b3;
                    pbStack_c8 = pbVar26;
                    uStack_180 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                    goto LAB_1014520c0;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (bVar7 == 0x16) goto LAB_10145237c;
                  uVar10 = *puVar17;
                  unaff_x25[1] = puVar17[1];
                  *unaff_x25 = uVar10;
                  uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
                  bStack_a8 = bVar7;
                  if (bVar7 != 0) {
                    lStack_b0 = lVar16 + 1;
                    pbStack_c8 = pbVar26;
                    uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                    goto LAB_1014520c0;
                  }
                  FUN_100e077ec(&bStack_a8);
                  bVar24 = bVar12;
                }
              }
              else if (uStack_88._1_1_ == 3) {
                if (bVar23 != 2) {
                  lStack_b0 = lVar16 + 1;
                  uStack_88 = &UNK_108ca10e0;
                  uStack_80 = 0x13;
                  bStack_a8 = (byte)&uStack_88;
                  bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                  uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                  bStack_a0 = 0xa0;
                  uStack_9f = 0x100c7b3;
                  pbStack_c8 = pbVar26;
                  uStack_180 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                  goto LAB_1014520c0;
                }
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (bVar7 == 0x16) goto LAB_10145237c;
                uVar10 = *puVar17;
                unaff_x25[1] = puVar17[1];
                *unaff_x25 = uVar10;
                uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
                *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
                bStack_a8 = bVar7;
                if (bVar7 != 0) {
                  lStack_b0 = lVar16 + 1;
                  pbStack_c8 = pbVar26;
                  uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                  goto LAB_1014520c0;
                }
                FUN_100e077ec(&bStack_a8);
                bVar23 = bVar12;
              }
              else if (uStack_88._1_1_ == 4) {
                if (bVar25 != 2) {
                  lStack_b0 = lVar16 + 1;
                  uStack_88 = &UNK_108cdc7c0;
                  uStack_80 = 0x10;
                  bStack_a8 = (byte)&uStack_88;
                  bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                  uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                  bStack_a0 = 0xa0;
                  uStack_9f = 0x100c7b3;
                  pbStack_c8 = pbVar26;
                  uStack_180 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                  goto LAB_1014520c0;
                }
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (bVar7 == 0x16) goto LAB_10145237c;
                uVar10 = *puVar17;
                unaff_x25[1] = puVar17[1];
                *unaff_x25 = uVar10;
                uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
                *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
                bStack_a8 = bVar7;
                if (bVar7 != 0) {
                  lStack_b0 = lVar16 + 1;
                  pbStack_c8 = pbVar26;
                  uStack_180 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                  goto LAB_1014520c0;
                }
                FUN_100e077ec(&bStack_a8);
                bVar25 = bVar12;
              }
              else {
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (bVar7 == 0x16) {
LAB_10145237c:
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  lStack_b0 = lVar16 + 1;
                  pbStack_c8 = pbVar26;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1014523a4);
                  (*pcVar8)();
                }
                uVar10 = *puVar17;
                unaff_x25[1] = puVar17[1];
                *unaff_x25 = uVar10;
                uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
                *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                *(undefined8 *)((long)unaff_x25 + 0xf) = uVar10;
                bStack_a8 = bVar7;
                FUN_100e077ec(&bStack_a8);
              }
              lVar16 = lVar16 + 1;
              unaff_x26 = ((long)pbVar21 * 0x40 - 0x40U >> 6) + 1;
              pbVar27 = pbVar1;
              pbVar15 = pbVar26;
            } while (pbVar26 != pbVar1);
            pbStack_c8 = pbVar27;
            lStack_b0 = unaff_x26;
            if (bVar22 == 2) goto LAB_10145208c;
            lVar16 = unaff_x26;
            if (bVar20 == 2) {
              uStack_88 = &UNK_108ca10cd;
              uStack_80 = 5;
              bStack_a8 = (byte)&uStack_88;
              bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
              uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
              bStack_a0 = 0xa0;
              uStack_9f = 0x100c7b3;
              uStack_180 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a8);
              goto LAB_1014520c0;
            }
            if (bVar25 == 2) {
              uStack_88 = &UNK_108cdc7c0;
              uStack_80 = 0x10;
              bStack_a8 = (byte)&uStack_88;
              bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
              uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
              bStack_a0 = 0xa0;
              uStack_9f = 0x100c7b3;
              uStack_180 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a8);
              goto LAB_1014520c0;
            }
            uStack_180 = FUN_100fbc67c(&pbStack_f0);
            bVar24 = bVar24 & 1;
            bVar23 = bVar23 & 1;
LAB_10145232c:
            bVar9 = uStack_180 != 0;
            goto joined_r0x0001014520ec;
          }
LAB_10145208c:
          uStack_88 = &UNK_108cdc7b0;
          uStack_80 = 0x10;
          bStack_a8 = (byte)&uStack_88;
          bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
          uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
          bStack_a0 = 0xa0;
          uStack_9f = 0x100c7b3;
          uStack_180 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a8);
          lVar16 = unaff_x26;
LAB_1014520c0:
          bVar23 = (byte)unaff_x25;
          bVar24 = (byte)lVar16;
          FUN_100d34830(&pbStack_d0);
          if ((byte)pbStack_f0 == '\x16') goto LAB_1014520d4;
          bVar9 = true;
          FUN_100e077ec(&pbStack_f0);
          bVar25 = 0;
          bVar20 = 0;
          bVar22 = 0;
        }
        if ((uVar14 & 0x1e) != 0x14) {
          FUN_100e077ec(&pbStack_110);
        }
      }
      else {
        if (uVar2 != 0x16) {
          if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (pbVar21 != (byte *)0x0)))) {
            uStack_180 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
            goto LAB_101451eb8;
          }
          FUN_100e077ec(&pbStack_110);
        }
        bVar25 = 0;
        bVar20 = 0;
        bVar9 = false;
        bVar22 = 6;
      }
    }
LAB_101451ec8:
    bVar3 = (bool)(bVar4 ^ 1);
    if (cVar5 == '\x15') {
      bVar3 = true;
    }
    if (!bVar3) {
      FUN_100e077ec(param_2);
    }
    if (!bVar9) {
      uVar11 = 0;
      param_1[1] = bVar22;
      param_1[2] = bVar20;
      param_1[3] = bVar24;
      param_1[4] = bVar23;
      param_1[5] = bVar25;
      goto LAB_101451f64;
    }
  }
  else if (cVar5 == '\x15') {
    pbStack_100 = *(byte **)(param_2 + 8);
    pbStack_110 = *(byte **)(param_2 + 0x10);
    lVar16 = *(long *)(param_2 + 0x18);
    pbStack_f8 = pbStack_110 + lVar16 * 0x40;
    pbStack_108 = pbStack_110;
    if (lVar16 == 0) {
LAB_101451d44:
      pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0xb);
      uStack_180 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                             (&pbStack_f0,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      pbVar15 = pbStack_110 + 0x40;
      bVar4 = *pbStack_110;
      pbStack_108 = pbVar15;
      if (bVar4 == 0x16) goto LAB_101451d44;
      uVar10 = *(undefined8 *)(pbStack_110 + 1);
      uStack_9f = (undefined7)*(undefined8 *)(pbStack_110 + 9);
      bStack_a7 = (byte)uVar10;
      uStack_a6 = (undefined6)((ulong)uVar10 >> 8);
      bStack_a0 = (byte)((ulong)uVar10 >> 0x38);
      uStack_178 = *(undefined8 *)(pbStack_110 + 0x18);
      uStack_180 = *(ulong *)(pbStack_110 + 0x10);
      lStack_148 = *(long *)(pbStack_110 + 0x28);
      uStack_150 = *(ulong *)(pbStack_110 + 0x20);
      uStack_98 = (undefined1)uStack_180;
      uStack_97 = (undefined7)(uStack_180 >> 8);
      uStack_138 = *(undefined8 *)(pbStack_110 + 0x38);
      uStack_140 = *(ulong *)(pbStack_110 + 0x30);
      bStack_a8 = bVar4;
      uStack_90 = uStack_178;
      if (lVar16 == 1) {
LAB_101451780:
        lStack_188 = CONCAT71(uStack_9f,bStack_a0);
        uStack_190 = CONCAT62(uStack_a6,CONCAT11(bStack_a7,bVar4));
        uVar18 = uStack_150 & 0xff;
        uStack_170 = *(undefined8 *)(pbStack_110 + 0x21);
        uStack_168 = (undefined7)*(undefined8 *)(pbStack_110 + 0x29);
        pbStack_159 = *(byte **)(pbStack_110 + 0x38);
        uStack_161 = (undefined1)*(undefined8 *)(pbStack_110 + 0x30);
        uStack_160 = (undefined7)((ulong)*(undefined8 *)(pbStack_110 + 0x30) >> 8);
        FUN_100d34830(&pbStack_110);
        bVar4 = 1;
        goto LAB_1014517c8;
      }
      pbStack_108 = pbStack_110 + 0x80;
      pbStack_e8 = *(byte **)(pbStack_110 + 0x48);
      pbStack_f0 = *(byte **)pbVar15;
      pbStack_d8 = *(byte **)(pbStack_110 + 0x58);
      pbStack_e0 = *(byte **)(pbStack_110 + 0x50);
      pbStack_c8 = *(byte **)(pbStack_110 + 0x68);
      pbStack_d0 = *(byte **)(pbStack_110 + 0x60);
      pbStack_b8 = *(byte **)(pbStack_110 + 0x78);
      pbStack_c0 = *(byte **)(pbStack_110 + 0x70);
      if ((byte)pbStack_f0 == '\x16') goto LAB_101451780;
      FUN_100e077ec(&pbStack_f0);
      FUN_100e077ec(&pbStack_d0);
      pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0xb);
      uStack_180 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                             (&pbStack_f0,&UNK_10b20a580,&UNK_10b20a590);
      FUN_100e077ec(&uStack_150);
      FUN_100e077ec(&bStack_a8);
    }
    FUN_100d34830(&pbStack_110);
  }
  else {
    FUN_1088556a8(&pbStack_f0,param_2);
    uStack_180 = func_0x000108a4a50c(&pbStack_f0,&UNK_10b20a5b0,&UNK_10b20a590);
    FUN_100e077ec(param_2);
  }
  *(ulong *)(param_1 + 8) = uStack_180;
  uVar11 = 1;
LAB_101451f64:
  *param_1 = uVar11;
  return;
}

