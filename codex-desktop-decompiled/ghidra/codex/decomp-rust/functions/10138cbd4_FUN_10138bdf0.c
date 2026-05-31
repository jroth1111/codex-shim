
/* WARNING: Removing unreachable block (ram,0x00010138cb80) */

void FUN_10138bdf0(undefined1 *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  byte bVar21;
  long lVar22;
  byte bVar23;
  byte *unaff_x26;
  byte *pbVar24;
  byte bVar25;
  undefined8 *unaff_x27;
  byte bVar26;
  byte *pbStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  byte *pbStack_159;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
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
  long lStack_80;
  undefined1 auStack_71 [17];
  
  bVar25 = (byte)unaff_x27;
  cVar5 = *param_2;
  if ((cVar5 != '\f') && (cVar5 != '\r')) {
    if (cVar5 != '\x15') {
      FUN_1088556a8(&pbStack_f0,param_2);
      uVar11 = func_0x000108a4a50c(&pbStack_f0,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(param_1 + 8) = uVar11;
      *param_1 = 1;
      FUN_100e077ec(param_2);
      return;
    }
    pbStack_100 = *(byte **)(param_2 + 8);
    pbStack_110 = *(byte **)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18);
    pbStack_f8 = pbStack_110 + lVar17 * 0x40;
    pbStack_108 = pbStack_110;
    if (lVar17 != 0) {
      pbVar15 = pbStack_110 + 0x40;
      bVar4 = *pbStack_110;
      pbStack_108 = pbVar15;
      if (bVar4 != 0x16) {
        uVar11 = *(undefined8 *)(pbStack_110 + 1);
        uStack_9f = (undefined7)*(undefined8 *)(pbStack_110 + 9);
        bStack_a7 = (byte)uVar11;
        uStack_a6 = (undefined6)((ulong)uVar11 >> 8);
        bStack_a0 = (byte)((ulong)uVar11 >> 0x38);
        uStack_178 = *(undefined8 *)(pbStack_110 + 0x18);
        uStack_180 = *(undefined8 *)(pbStack_110 + 0x10);
        lStack_148 = *(long *)(pbStack_110 + 0x28);
        uStack_150 = *(undefined8 *)(pbStack_110 + 0x20);
        uStack_98 = (undefined1)uStack_180;
        uStack_97 = (undefined7)((ulong)uStack_180 >> 8);
        uStack_138 = *(undefined8 *)(pbStack_110 + 0x38);
        uStack_140 = *(undefined8 *)(pbStack_110 + 0x30);
        bStack_a8 = bVar4;
        uStack_90 = uStack_178;
        if (lVar17 != 1) {
          pbStack_108 = pbStack_110 + 0x80;
          pbStack_e8 = *(byte **)(pbStack_110 + 0x48);
          pbStack_f0 = *(byte **)pbVar15;
          pbStack_d8 = *(byte **)(pbStack_110 + 0x58);
          pbStack_e0 = *(byte **)(pbStack_110 + 0x50);
          pbStack_c8 = *(byte **)(pbStack_110 + 0x68);
          pbStack_d0 = *(byte **)(pbStack_110 + 0x60);
          pbStack_b8 = *(byte **)(pbStack_110 + 0x78);
          pbStack_c0 = *(byte **)(pbStack_110 + 0x70);
          if ((byte)pbStack_f0 != '\x16') {
            FUN_100e077ec(&pbStack_f0);
            FUN_100e077ec(&pbStack_d0);
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0xb);
            uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&pbStack_f0,&UNK_10b20a580,&UNK_10b20a590);
            *(undefined8 *)(param_1 + 8) = uVar11;
            *param_1 = 1;
            FUN_100e077ec(&uStack_150);
            FUN_100e077ec(&bStack_a8);
            goto LAB_10138c6b4;
          }
        }
        lStack_188 = CONCAT71(uStack_9f,bStack_a0);
        uStack_190 = CONCAT62(uStack_a6,CONCAT11(bStack_a7,bVar4));
        uVar18 = (byte)uStack_150;
        uStack_170 = *(undefined8 *)(pbStack_110 + 0x21);
        uStack_168 = (undefined7)*(undefined8 *)(pbStack_110 + 0x29);
        pbStack_159 = *(byte **)(pbStack_110 + 0x38);
        uStack_161 = (undefined1)*(undefined8 *)(pbStack_110 + 0x30);
        uStack_160 = (undefined7)((ulong)*(undefined8 *)(pbStack_110 + 0x30) >> 8);
        FUN_100d34830(&pbStack_110);
        bVar4 = 1;
        goto LAB_10138bef8;
      }
    }
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0xb);
    uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                       (&pbStack_f0,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(param_1 + 8) = uVar11;
    *param_1 = 1;
LAB_10138c6b4:
    FUN_100d34830(&pbStack_110);
    return;
  }
  bVar4 = 0;
  lStack_188 = *(long *)(param_2 + 8);
  uStack_190 = *(undefined8 *)param_2;
  uStack_178 = *(undefined8 *)(param_2 + 0x18);
  uStack_180 = *(undefined8 *)(param_2 + 0x10);
  uVar18 = 0x16;
LAB_10138bef8:
  lStack_148 = lStack_188;
  uStack_150 = uStack_190;
  uVar11 = uStack_150;
  uStack_138 = uStack_178;
  uStack_140 = uStack_180;
  uStack_127 = uStack_168;
  uStack_12f = (undefined7)uStack_170;
  uStack_128 = (undefined1)((ulong)uStack_170 >> 0x38);
  pbStack_118 = pbStack_159;
  uStack_120 = uStack_161;
  uStack_11f = uStack_160;
  pbStack_e8 = (byte *)CONCAT71(uStack_168,uStack_128);
  pbStack_f0 = (byte *)CONCAT71(uStack_12f,uVar18);
  pbStack_e0 = (byte *)CONCAT71(uStack_160,uStack_161);
  pbStack_d8 = pbStack_159;
  uStack_150._0_1_ = (byte)uStack_190;
  uStack_150 = uVar11;
  uStack_130 = uVar18;
  if ((byte)uStack_150 < 0xd) {
    if ((byte)uStack_150 == 1) {
      uStack_150._1_1_ = (byte)((ulong)uStack_190 >> 8);
      if (uStack_150._1_1_ < 2) {
        if (uStack_150._1_1_ == 0) {
LAB_10138c5e8:
          uVar18 = 0;
          uStack_88 = (undefined *)((ulong)uStack_88._2_6_ << 0x10);
          goto LAB_10138c608;
        }
        if (uStack_150._1_1_ != 1) {
LAB_10138ce6c:
          bStack_a0 = uStack_150._1_1_;
          uStack_9f = 0;
          bStack_a8 = 1;
          lStack_80 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                (&bStack_a8,&UNK_10b22b4b8,&UNK_10b20a590);
          goto LAB_10138ce90;
        }
LAB_10138c5dc:
        uVar13 = 1;
      }
      else if (uStack_150._1_1_ == 2) {
LAB_10138c5f0:
        uVar13 = 2;
      }
      else if (uStack_150._1_1_ == 3) {
LAB_10138c5fc:
        uVar13 = 3;
      }
      else {
        if (uStack_150._1_1_ != 4) goto LAB_10138ce6c;
LAB_10138c464:
        uVar13 = 4;
      }
      uVar18 = 0;
      uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,uVar13) << 8);
LAB_10138c608:
      uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,uVar18);
      goto LAB_10138c60c;
    }
    if ((byte)uStack_150 == 4) {
      if (lStack_188 < 2) {
        if (lStack_188 == 0) goto LAB_10138c5e8;
        if (lStack_188 == 1) goto LAB_10138c5dc;
      }
      else {
        if (lStack_188 == 2) goto LAB_10138c5f0;
        if (lStack_188 == 3) goto LAB_10138c5fc;
        if (lStack_188 == 4) goto LAB_10138c464;
      }
      bStack_a0 = (byte)lStack_188;
      uStack_9f = (undefined7)((ulong)lStack_188 >> 8);
      bStack_a8 = 1;
      lStack_80 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                            (&bStack_a8,&UNK_10b22b4b8,&UNK_10b20a590);
LAB_10138ce90:
      uVar18 = 1;
      goto LAB_10138c608;
    }
    if ((byte)uStack_150 == 0xc) {
      FUN_100ae9b20(&uStack_88,uStack_180,uStack_178);
      goto LAB_10138bfbc;
    }
LAB_10138cb54:
    lStack_80 = FUN_108855b04(&uStack_150,auStack_71,&UNK_10b20de00);
    uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,1);
    pbVar1 = pbStack_110;
LAB_10138c620:
    pbStack_110 = pbVar1;
    lVar17 = lStack_80;
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
LAB_10138c638:
    *(long *)(param_1 + 8) = lVar17;
  }
  else {
    if ((byte)uStack_150 == 0xd) {
      FUN_100ae9b20(&uStack_88,lStack_188,uStack_180);
LAB_10138c60c:
      FUN_100e077ec(&uStack_150);
LAB_10138c614:
      pbVar1 = pbStack_110;
      pbStack_110 = pbStack_f0;
      pbVar24 = pbStack_e8;
      pbVar15 = pbStack_e0;
      pbVar16 = pbStack_d8;
      puVar7 = uStack_88;
    }
    else {
      if ((byte)uStack_150 != 0xe) {
        if ((byte)uStack_150 != 0xf) goto LAB_10138cb54;
        FUN_100ae972c(&uStack_88,lStack_188,uStack_180);
        goto LAB_10138c60c;
      }
      FUN_100ae972c(&uStack_88,uStack_180,uStack_178);
LAB_10138bfbc:
      if (lStack_188 == 0) goto LAB_10138c614;
      _free(uStack_180);
      pbVar1 = pbStack_110;
      pbStack_110 = pbStack_f0;
      pbVar24 = pbStack_e8;
      pbVar15 = pbStack_e0;
      pbVar16 = pbStack_d8;
      puVar7 = uStack_88;
    }
    bVar10 = (char)uStack_88 == '\x01';
    pbStack_f0 = pbStack_110;
    pbStack_e8 = pbVar24;
    pbStack_e0 = pbVar15;
    pbStack_d8 = pbVar16;
    uStack_88 = puVar7;
    if (bVar10) goto LAB_10138c620;
    uStack_88._1_1_ = (byte)((ulong)puVar7 >> 8);
    uVar14 = (uint)pbStack_110;
    uVar2 = uVar14 & 0xff;
    pbStack_108 = pbVar24;
    pbStack_100 = pbVar15;
    pbStack_f8 = pbVar16;
    if (uStack_88._1_1_ < 2) {
      if (uStack_88._1_1_ != 0) {
        if (uVar2 != 0x16) {
          if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (pbVar16 != (byte *)0x0)))) {
            lVar17 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
            goto LAB_10138c638;
          }
          FUN_100e077ec(&pbStack_110);
        }
        param_1[1] = 3;
        *param_1 = 0;
        bVar10 = (bool)(bVar4 ^ 1);
        if (cVar5 == '\x15') {
          bVar10 = true;
        }
        if (bVar10) {
          return;
        }
        goto LAB_10138c658;
      }
      if (uVar2 == 0x16) {
LAB_10138c418:
        param_1[1] = 2;
        *param_1 = 0;
        bVar10 = (bool)(bVar4 ^ 1);
        if (cVar5 == '\x15') {
          bVar10 = true;
        }
        if (bVar10) {
          return;
        }
        goto LAB_10138c658;
      }
      if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (pbVar16 == (byte *)0x0)))) {
        FUN_100e077ec(&pbStack_110);
        goto LAB_10138c418;
      }
      lVar17 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
      goto LAB_10138c638;
    }
    if (uStack_88._1_1_ == 2) {
      if (uVar2 != 0x16) {
        if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (pbVar16 != (byte *)0x0)))) {
          lVar17 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
          goto LAB_10138c638;
        }
        FUN_100e077ec(&pbStack_110);
      }
      param_1[1] = 4;
      *param_1 = 0;
      bVar10 = (bool)(bVar4 ^ 1);
      if (cVar5 == '\x15') {
        bVar10 = true;
      }
      if (bVar10) {
        return;
      }
      goto LAB_10138c658;
    }
    if (uStack_88._1_1_ != 3) {
      if (uVar2 != 0x16) {
        if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (pbVar16 != (byte *)0x0)))) {
          lVar17 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20a5c0);
          goto LAB_10138c638;
        }
        FUN_100e077ec(&pbStack_110);
      }
      param_1[1] = 6;
      *param_1 = 0;
      bVar10 = (bool)(bVar4 ^ 1);
      if (cVar5 == '\x15') {
        bVar10 = true;
      }
      if (bVar10) {
        return;
      }
      goto LAB_10138c658;
    }
    pbStack_f0._1_7_ = (undefined7)((ulong)pbStack_110 >> 8);
    if (uVar2 == 0x16) {
      pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0xd);
      lVar17 = func_0x000108a4a50c(&pbStack_f0,&UNK_10b212c10,&UNK_10b20a590);
    }
    else {
      if (uVar2 == 0x14) {
        pbVar1 = pbVar15 + (long)pbVar16 * 0x20;
        pbStack_d0 = (byte *)0x0;
        pbStack_1a0 = pbVar15;
        pbStack_f0 = pbVar15;
        pbStack_e0 = pbVar24;
        pbStack_d8 = pbVar1;
        if (pbVar16 == (byte *)0x0) {
LAB_10138c718:
          pbStack_e8 = pbStack_1a0;
          lVar17 = FUN_1087e422c(0,&UNK_10b22e208,&UNK_10b20a590);
        }
        else {
          pbStack_1a0 = pbVar15 + 0x20;
          bVar12 = *pbVar15;
          if (bVar12 == 0x16) goto LAB_10138c718;
          uVar11 = *(undefined8 *)(pbVar15 + 1);
          uStack_9f = (undefined7)*(undefined8 *)(pbVar15 + 9);
          bStack_a7 = (byte)uVar11;
          bVar21 = bStack_a7;
          uStack_a6 = (undefined6)((ulong)uVar11 >> 8);
          bStack_a0 = (byte)((ulong)uVar11 >> 0x38);
          uStack_90 = *(undefined8 *)(pbVar15 + 0x18);
          uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 0x10);
          uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x10) >> 8);
          pbStack_d0 = (byte *)0x1;
          pbStack_e8 = pbStack_1a0;
          bStack_a8 = bVar12;
          if (bVar12 == 0) {
            FUN_100e077ec(&bStack_a8);
            if (pbVar16 != (byte *)0x1) {
              pbStack_1a0 = pbVar15 + 0x40;
              bVar12 = pbVar15[0x20];
              pbStack_e8 = pbStack_1a0;
              if (bVar12 != 0x16) {
                uVar11 = *(undefined8 *)(pbVar15 + 0x21);
                uStack_9f = (undefined7)*(undefined8 *)(pbVar15 + 0x29);
                bStack_a7 = (byte)uVar11;
                bVar26 = bStack_a7;
                uStack_a6 = (undefined6)((ulong)uVar11 >> 8);
                bStack_a0 = (byte)((ulong)uVar11 >> 0x38);
                uStack_90 = *(undefined8 *)(pbVar15 + 0x38);
                uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 0x30);
                uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x30) >> 8);
                pbStack_d0 = (byte *)0x2;
                bStack_a8 = bVar12;
                if (bVar12 != 0) {
                  lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                  goto LAB_10138c79c;
                }
                FUN_100e077ec(&bStack_a8);
                if (pbVar16 == (byte *)0x2) {
LAB_10138c984:
                  bVar23 = 0;
                  pbVar16 = (byte *)0x2;
                  pbVar20 = pbStack_1a0;
                }
                else {
                  pbStack_1a0 = pbVar15 + 0x60;
                  bVar12 = pbVar15[0x40];
                  pbStack_e8 = pbStack_1a0;
                  if (bVar12 == 0x16) goto LAB_10138c984;
                  uVar11 = *(undefined8 *)(pbVar15 + 0x41);
                  uStack_9f = (undefined7)*(undefined8 *)(pbVar15 + 0x49);
                  bStack_a7 = (byte)uVar11;
                  bVar23 = bStack_a7;
                  uStack_a6 = (undefined6)((ulong)uVar11 >> 8);
                  bStack_a0 = (byte)((ulong)uVar11 >> 0x38);
                  uStack_90 = *(undefined8 *)(pbVar15 + 0x58);
                  uStack_98 = (undefined1)*(undefined8 *)(pbVar15 + 0x50);
                  uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x50) >> 8);
                  pbStack_d0 = (byte *)0x3;
                  bStack_a8 = bVar12;
                  if (bVar12 != 0) {
                    lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                    goto LAB_10138c79c;
                  }
                  FUN_100e077ec(&bStack_a8);
                  pbVar16 = (byte *)0x3;
                  pbVar20 = pbStack_1a0;
                }
                pbStack_1a0 = pbVar1;
                if (pbVar20 != pbVar1) {
                  pbStack_1a0 = pbVar20 + 0x20;
                  bVar12 = *pbVar20;
                  pbStack_e8 = pbStack_1a0;
                  if (bVar12 == 0x16) {
                    bVar25 = 0;
                  }
                  else {
                    uVar11 = *(undefined8 *)(pbVar20 + 1);
                    uStack_9f = (undefined7)*(undefined8 *)(pbVar20 + 9);
                    bStack_a7 = (byte)uVar11;
                    bVar6 = bStack_a7;
                    uStack_a6 = (undefined6)((ulong)uVar11 >> 8);
                    bStack_a0 = (byte)((ulong)uVar11 >> 0x38);
                    uStack_90 = *(undefined8 *)(pbVar20 + 0x18);
                    uStack_98 = (undefined1)*(undefined8 *)(pbVar20 + 0x10);
                    uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x10) >> 8);
                    pbVar16 = pbVar16 + 1;
                    pbStack_d0 = pbVar16;
                    bStack_a8 = bVar12;
                    if (bVar12 != 0) {
                      lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                      goto LAB_10138c79c;
                    }
                    FUN_100e077ec(&bStack_a8);
                    bVar25 = bVar6;
                  }
                  bVar10 = pbStack_1a0 != pbVar1;
                  pbStack_1a0 = pbVar1;
                  if (bVar10) {
                    pbStack_1a0 = pbVar20 + 0x40;
                    bVar12 = pbVar20[0x20];
                    pbStack_e8 = pbStack_1a0;
                    if (bVar12 != 0x16) {
                      uVar11 = *(undefined8 *)(pbVar20 + 0x21);
                      uStack_9f = (undefined7)*(undefined8 *)(pbVar20 + 0x29);
                      bStack_a7 = (byte)uVar11;
                      bVar6 = bStack_a7;
                      uStack_a6 = (undefined6)((ulong)uVar11 >> 8);
                      bStack_a0 = (byte)((ulong)uVar11 >> 0x38);
                      uStack_90 = *(undefined8 *)(pbVar20 + 0x38);
                      uStack_98 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
                      uStack_97 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
                      pbStack_d0 = pbVar16 + 1;
                      bStack_a8 = bVar12;
                      if (bVar12 == 0) {
                        FUN_100e077ec(&bStack_a8);
                        lVar17 = FUN_100fbc738(&pbStack_f0);
                        goto LAB_10138cacc;
                      }
                      lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                      goto LAB_10138c79c;
                    }
                  }
                }
                lVar17 = FUN_1087e422c(4,&UNK_10b22e208,&UNK_10b20a590);
                goto LAB_10138c79c;
              }
            }
            lVar17 = FUN_1087e422c(1,&UNK_10b22e208,&UNK_10b20a590);
          }
          else {
            lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
          }
        }
LAB_10138c79c:
        lVar22 = ((ulong)((long)pbVar1 - (long)pbStack_1a0) >> 5) + 1;
        while (lVar22 = lVar22 + -1, lVar22 != 0) {
          FUN_100e077ec(pbStack_1a0);
          pbStack_1a0 = pbStack_1a0 + 0x20;
        }
        bVar23 = 0;
        if (pbVar24 != (byte *)0x0) {
          _free(pbVar15);
          bVar23 = 0;
        }
LAB_10138c858:
        bVar6 = 0;
        bVar26 = 0;
        bVar21 = 0;
        bVar10 = true;
      }
      else {
        if (uVar2 != 0x15) {
          lVar17 = FUN_108855b04(&pbStack_110,auStack_71,&UNK_10b20bac0);
          goto LAB_10138c87c;
        }
        pbVar1 = pbVar15 + (long)pbVar16 * 0x40;
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        lStack_b0 = 0;
        pbStack_d0 = pbVar15;
        pbStack_c8 = pbVar15;
        pbStack_c0 = pbVar24;
        pbStack_b8 = pbVar1;
        if (pbVar16 == (byte *)0x0) {
LAB_10138c800:
          uStack_88 = &UNK_108cdc7b0;
          lStack_80 = 0x10;
          bStack_a8 = (byte)&uStack_88;
          bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
          uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
          bStack_a0 = 0xa0;
          uStack_9f = 0x100c7b3;
          lVar17 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a8);
          pbVar24 = unaff_x26;
LAB_10138c834:
          bVar25 = (byte)unaff_x27;
          FUN_100d34830(&pbStack_d0);
          bVar23 = (byte)pbVar24;
          if ((byte)pbStack_f0 != '\x16') {
            FUN_100e077ec(&pbStack_f0);
          }
          goto LAB_10138c858;
        }
        lVar17 = 0;
        puVar19 = (undefined8 *)((ulong)&bStack_a8 | 1);
        unaff_x27 = (undefined8 *)((ulong)&pbStack_f0 | 1);
        bVar26 = 2;
        bVar21 = 2;
        bVar23 = 2;
        bVar25 = 2;
        bVar6 = 2;
        do {
          pbVar24 = pbVar15 + 0x40;
          bVar12 = *pbVar15;
          lVar22 = lVar17;
          unaff_x26 = pbVar24;
          if (bVar12 == 0x16) break;
          uVar11 = *(undefined8 *)(pbVar15 + 0x10);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar15 + 0x18);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
          uVar11 = *(undefined8 *)(pbVar15 + 1);
          puVar19[1] = *(undefined8 *)(pbVar15 + 9);
          *puVar19 = uVar11;
          pbStack_e8 = *(byte **)(pbVar15 + 0x28);
          pbStack_f0 = *(byte **)(pbVar15 + 0x20);
          pbStack_d8 = *(byte **)(pbVar15 + 0x38);
          pbStack_e0 = *(byte **)(pbVar15 + 0x30);
          uVar3 = CONCAT71(uStack_9f,bStack_a0);
          uVar11 = CONCAT71(uStack_97,uStack_98);
          bStack_a8 = bVar12;
          if (bVar12 < 0xd) {
            if (bVar12 == 1) {
              bVar12 = bStack_a7;
              if (4 < bStack_a7) {
                bVar12 = 5;
              }
              uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,bVar12) << 8);
LAB_10138c1b0:
              FUN_100e077ec(&bStack_a8);
              goto LAB_10138c1b8;
            }
            if (bVar12 == 4) {
              if (4 < uVar3) {
                uVar3 = 5;
              }
              uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,(char)uVar3) << 8);
              goto LAB_10138c1b0;
            }
            if (bVar12 == 0xc) {
              FUN_100b2f800(&uStack_88,uVar11);
              if (uVar3 == 0) goto LAB_10138c1b8;
LAB_10138c16c:
              _free(uVar11);
              pbVar15 = pbStack_f0;
              bVar12 = bStack_a7;
              puVar7 = uStack_88;
              goto joined_r0x00010138c17c;
            }
LAB_10138c3a4:
            lStack_80 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b212680);
            uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,1);
LAB_10138c3d0:
            lStack_b0 = lVar17 + 1;
            lVar17 = lStack_80;
            pbStack_c8 = pbVar24;
            goto LAB_10138c834;
          }
          if (bVar12 == 0xd) {
            FUN_100b2f800(&uStack_88,uVar3,uVar11);
            goto LAB_10138c1b0;
          }
          if (bVar12 != 0xe) {
            if (bVar12 != 0xf) goto LAB_10138c3a4;
            FUN_100b2f434(&uStack_88,uVar3,uVar11);
            goto LAB_10138c1b0;
          }
          FUN_100b2f434(&uStack_88,uVar11,uStack_90);
          if (uVar3 != 0) goto LAB_10138c16c;
LAB_10138c1b8:
          pbVar15 = pbStack_f0;
          bVar12 = bStack_a7;
          puVar7 = uStack_88;
joined_r0x00010138c17c:
          bVar10 = (char)uStack_88 == '\x01';
          pbStack_f0 = pbVar15;
          bStack_a7 = bVar12;
          uStack_88 = puVar7;
          if (bVar10) goto LAB_10138c3d0;
          uStack_88._1_1_ = (byte)((ulong)puVar7 >> 8);
          pbStack_f0._0_1_ = (byte)pbVar15;
          bVar8 = (byte)pbStack_f0;
          pbStack_f0._1_7_ = (undefined7)((ulong)pbVar15 >> 8);
          if (uStack_88._1_1_ < 3) {
            if (uStack_88._1_1_ == 0) {
              if (bVar21 != 2) {
                lStack_b0 = lVar17 + 1;
                uStack_88 = &UNK_108cdc7b0;
                lStack_80 = 0x10;
                bStack_a8 = (byte)&uStack_88;
                bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                bStack_a0 = 0xa0;
                uStack_9f = 0x100c7b3;
                pbStack_c8 = pbVar24;
                lVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                goto LAB_10138c834;
              }
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar8 == 0x16) goto LAB_10138cb28;
              uVar11 = *unaff_x27;
              puVar19[1] = unaff_x27[1];
              *puVar19 = uVar11;
              uVar11 = *(undefined8 *)((long)unaff_x27 + 0xf);
              *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
              *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
              bStack_a8 = bVar8;
              if (bVar8 != 0) {
                lStack_b0 = lVar17 + 1;
                pbStack_c8 = pbVar24;
                lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                goto LAB_10138c834;
              }
              FUN_100e077ec(&bStack_a8);
              bVar21 = bVar12;
            }
            else if (uStack_88._1_1_ == 1) {
              if (bVar26 != 2) {
                lStack_b0 = lVar17 + 1;
                uStack_88 = &UNK_108ca10cd;
                lStack_80 = 5;
                bStack_a8 = (byte)&uStack_88;
                bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                bStack_a0 = 0xa0;
                uStack_9f = 0x100c7b3;
                pbStack_c8 = pbVar24;
                lVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                goto LAB_10138c834;
              }
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar8 == 0x16) goto LAB_10138cb28;
              uVar11 = *unaff_x27;
              puVar19[1] = unaff_x27[1];
              *puVar19 = uVar11;
              uVar11 = *(undefined8 *)((long)unaff_x27 + 0xf);
              *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
              *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
              bStack_a8 = bVar8;
              if (bVar8 != 0) {
                lStack_b0 = lVar17 + 1;
                pbStack_c8 = pbVar24;
                lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                goto LAB_10138c834;
              }
              FUN_100e077ec(&bStack_a8);
              bVar26 = bVar12;
            }
            else {
              if (bVar23 != 2) {
                lStack_b0 = lVar17 + 1;
                uStack_88 = &UNK_108ca10d2;
                lStack_80 = 0xe;
                bStack_a8 = (byte)&uStack_88;
                bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
                uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
                bStack_a0 = 0xa0;
                uStack_9f = 0x100c7b3;
                pbStack_c8 = pbVar24;
                lVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
                goto LAB_10138c834;
              }
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar8 == 0x16) goto LAB_10138cb28;
              uVar11 = *unaff_x27;
              puVar19[1] = unaff_x27[1];
              *puVar19 = uVar11;
              uVar11 = *(undefined8 *)((long)unaff_x27 + 0xf);
              *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
              *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
              bStack_a8 = bVar8;
              if (bVar8 != 0) {
                lStack_b0 = lVar17 + 1;
                pbStack_c8 = pbVar24;
                lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
                goto LAB_10138c834;
              }
              FUN_100e077ec(&bStack_a8);
              bVar23 = bVar12;
            }
          }
          else if (uStack_88._1_1_ == 3) {
            if (bVar25 != 2) {
              lStack_b0 = lVar17 + 1;
              uStack_88 = &UNK_108ca10e0;
              lStack_80 = 0x13;
              bStack_a8 = (byte)&uStack_88;
              bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
              uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
              bStack_a0 = 0xa0;
              uStack_9f = 0x100c7b3;
              pbStack_c8 = pbVar24;
              lVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
              goto LAB_10138c834;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar8 == 0x16) goto LAB_10138cb28;
            uVar11 = *unaff_x27;
            puVar19[1] = unaff_x27[1];
            *puVar19 = uVar11;
            uVar11 = *(undefined8 *)((long)unaff_x27 + 0xf);
            *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
            *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
            bStack_a8 = bVar8;
            if (bVar8 != 0) {
              lStack_b0 = lVar17 + 1;
              pbStack_c8 = pbVar24;
              lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
              goto LAB_10138c834;
            }
            FUN_100e077ec(&bStack_a8);
            bVar25 = bVar12;
          }
          else if (uStack_88._1_1_ == 4) {
            if (bVar6 != 2) {
              lStack_b0 = lVar17 + 1;
              uStack_88 = &UNK_108cdc7c0;
              lStack_80 = 0x10;
              bStack_a8 = (byte)&uStack_88;
              bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
              uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
              bStack_a0 = 0xa0;
              uStack_9f = 0x100c7b3;
              pbStack_c8 = pbVar24;
              lVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a8);
              goto LAB_10138c834;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar8 == 0x16) goto LAB_10138cb28;
            uVar11 = *unaff_x27;
            puVar19[1] = unaff_x27[1];
            *puVar19 = uVar11;
            uVar11 = *(undefined8 *)((long)unaff_x27 + 0xf);
            *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
            *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
            bStack_a8 = bVar8;
            if (bVar8 != 0) {
              lStack_b0 = lVar17 + 1;
              pbStack_c8 = pbVar24;
              lVar17 = FUN_108855b04(&bStack_a8,auStack_71,&UNK_10b20a560);
              goto LAB_10138c834;
            }
            FUN_100e077ec(&bStack_a8);
            bVar6 = bVar12;
          }
          else {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar8 == 0x16) {
LAB_10138cb28:
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              lStack_b0 = lVar17 + 1;
              pbStack_c8 = pbVar24;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10138cb54);
              (*pcVar9)();
            }
            uVar11 = *unaff_x27;
            puVar19[1] = unaff_x27[1];
            *puVar19 = uVar11;
            uVar11 = *(undefined8 *)((long)unaff_x27 + 0xf);
            *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
            *(undefined8 *)((long)puVar19 + 0xf) = uVar11;
            bStack_a8 = bVar8;
            FUN_100e077ec(&bStack_a8);
          }
          lVar17 = lVar17 + 1;
          lVar22 = ((long)pbVar16 * 0x40 - 0x40U >> 6) + 1;
          unaff_x26 = pbVar1;
          pbVar15 = pbVar24;
        } while (pbVar24 != pbVar1);
        pbStack_c8 = unaff_x26;
        lStack_b0 = lVar22;
        if (bVar21 == 2) goto LAB_10138c800;
        pbVar24 = unaff_x26;
        if (bVar26 == 2) {
          uStack_88 = &UNK_108ca10cd;
          lStack_80 = 5;
          bStack_a8 = (byte)&uStack_88;
          bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
          uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
          bStack_a0 = 0xa0;
          uStack_9f = 0x100c7b3;
          lVar17 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a8);
          goto LAB_10138c834;
        }
        if (bVar6 == 2) {
          uStack_88 = &UNK_108cdc7c0;
          lStack_80 = 0x10;
          bStack_a8 = (byte)&uStack_88;
          bStack_a7 = (byte)((ulong)&uStack_88 >> 8);
          uStack_a6 = (undefined6)((ulong)&uStack_88 >> 0x10);
          bStack_a0 = 0xa0;
          uStack_9f = 0x100c7b3;
          lVar17 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a8);
          goto LAB_10138c834;
        }
        lVar17 = FUN_100fbc67c(&pbStack_f0);
        bVar23 = bVar23 & 1;
        bVar25 = bVar25 & 1;
LAB_10138cacc:
        bVar10 = lVar17 != 0;
      }
      if ((uVar14 & 0x1e) != 0x14) {
        FUN_100e077ec(&pbStack_110);
      }
      if (!bVar10) {
        param_1[1] = bVar21;
        param_1[2] = bVar26;
        param_1[3] = bVar23;
        param_1[4] = bVar25;
        param_1[5] = bVar6;
        *param_1 = 0;
        bVar10 = (bool)(bVar4 ^ 1);
        if (cVar5 == '\x15') {
          bVar10 = true;
        }
        if (bVar10) {
          return;
        }
        goto LAB_10138c658;
      }
    }
LAB_10138c87c:
    *(long *)(param_1 + 8) = lVar17;
  }
  *param_1 = 1;
  bVar10 = (bool)(bVar4 ^ 1);
  if (cVar5 == '\x15') {
    bVar10 = true;
  }
  if (bVar10) {
    return;
  }
LAB_10138c658:
  FUN_100e077ec(param_2);
  return;
}

