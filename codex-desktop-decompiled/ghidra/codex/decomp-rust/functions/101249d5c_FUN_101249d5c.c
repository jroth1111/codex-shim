
void FUN_101249d5c(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  bool bVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined *puVar12;
  undefined4 uVar13;
  byte *pbVar14;
  code *pcVar15;
  bool bVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined *puVar29;
  long lVar30;
  bool bVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  uint uVar38;
  float fVar39;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_29c;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  ulong uStack_280;
  undefined *puStack_248;
  undefined *puStack_240;
  byte *pbStack_230;
  byte *pbStack_228;
  ulong uStack_220;
  byte *pbStack_218;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined *puStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  undefined4 uStack_144;
  byte abStack_140 [8];
  long lStack_138;
  byte *pbStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_79 [9];
  
  if (*param_2 == '\x14') {
    uVar26 = *(ulong *)(param_2 + 8);
    pbVar4 = *(byte **)(param_2 + 0x10);
    uVar20 = *(ulong *)(param_2 + 0x18);
    pbVar28 = pbVar4 + uVar20 * 0x20;
    lStack_210 = 0;
    uVar25 = uVar20;
    if (0x2e8a < uVar20) {
      uVar25 = 0x2e8b;
    }
    pbStack_230 = pbVar4;
    pbStack_228 = pbVar4;
    uStack_220 = uVar26;
    pbStack_218 = pbVar28;
    if (uVar20 == 0) {
      uStack_208 = 0;
      uStack_200 = 8;
      uStack_1f8 = 0;
      pbVar17 = pbVar4;
    }
    else {
      uVar20 = _malloc(uVar25 * 0x58);
      if (uVar20 == 0) {
        func_0x0001087c9084(8,uVar25 * 0x58);
LAB_10124afe8:
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10124afec);
        (*pcVar15)();
      }
      lVar32 = 0;
      puVar21 = (undefined8 *)((ulong)abStack_140 | 1);
      puVar24 = (undefined8 *)((ulong)&uStack_a0 | 1);
      uStack_1f8 = 0;
      puVar22 = (undefined8 *)((ulong)&pbStack_120 | 1);
      pbVar19 = pbVar4;
      uStack_208 = uVar25;
      uStack_200 = uVar20;
      do {
        lVar30 = lStack_128;
        pbVar37 = pbStack_130;
        lVar23 = lStack_138;
        pbVar27 = pbVar19 + 0x20;
        bVar5 = *pbVar19;
        pbVar17 = pbVar27;
        pbStack_228 = pbVar27;
        if (bVar5 == 0x16) break;
        uVar18 = *(undefined8 *)(pbVar19 + 1);
        puVar21[1] = *(undefined8 *)(pbVar19 + 9);
        *puVar21 = uVar18;
        auVar7 = *(undefined1 (*) [16])(pbVar19 + 0x10);
        *(long *)((long)puVar21 + 0x17) = auVar7._8_8_;
        uStack_280 = auVar7._0_8_;
        *(ulong *)((long)puVar21 + 0xf) = uStack_280;
        lVar32 = lVar32 + 1;
        lStack_210 = lVar32;
        abStack_140[0] = bVar5;
        if (bVar5 != 0x14) {
          if (bVar5 == 0x15) {
            lVar23 = lStack_128 * 0x40;
            pbVar17 = pbStack_130 + lVar23;
            pbStack_100 = pbStack_130;
            pbStack_f8 = pbStack_130;
            lStack_f0 = lStack_138;
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            puStack_e0 = (undefined8 *)0x0;
            pbStack_e8 = pbVar17;
            if (lStack_128 != 0) {
              puVar33 = (undefined8 *)0x0;
              bVar31 = false;
              bVar2 = false;
              puVar29 = (undefined *)0x8000000000000000;
              puStack_248 = (undefined *)0x8000000000000000;
              puStack_240 = (undefined *)0x8000000000000000;
              pbVar19 = pbStack_130;
              do {
                uVar18 = uStack_90;
                puVar3 = puStack_98;
                puVar10 = uStack_a0;
                pbVar36 = pbVar19 + 0x40;
                bVar6 = *pbVar19;
                puVar34 = puVar33;
                pbVar37 = pbVar36;
                if (bVar6 == 0x16) break;
                uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,bVar6);
                puVar34 = uStack_a0;
                uVar8 = *(undefined8 *)(pbVar19 + 0x10);
                *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar19 + 0x18);
                *(undefined8 *)((long)puVar24 + 0xf) = uVar8;
                uVar8 = *(undefined8 *)(pbVar19 + 1);
                puVar24[1] = *(undefined8 *)(pbVar19 + 9);
                *puVar24 = uVar8;
                pbStack_118 = *(byte **)(pbVar19 + 0x28);
                pbStack_120 = *(byte **)(pbVar19 + 0x20);
                pbStack_108 = SUB168(*(undefined1 (*) [16])(pbVar19 + 0x30),8);
                lStack_110 = SUB168(*(undefined1 (*) [16])(pbVar19 + 0x30),0);
                if (0xc < bVar6) {
                  if (bVar6 == 0xd) {
                    func_0x000100ae7360(&uStack_c0,puStack_98,uStack_90);
                    goto LAB_10124a00c;
                  }
                  if (bVar6 == 0xe) {
                    func_0x000100ae70a8(&uStack_c0,uStack_90,uStack_88);
joined_r0x000101249f70:
                    puVar10 = uStack_a0;
                    if (puVar3 != (undefined *)0x0) {
                      _free(uVar18);
                      puVar10 = uStack_a0;
                    }
                    goto joined_r0x000101249fd8;
                  }
                  if (bVar6 == 0xf) {
                    func_0x000100ae70a8(&uStack_c0,puStack_98,uStack_90);
                    goto LAB_10124a00c;
                  }
LAB_10124a33c:
                  pbStack_b8 = (byte *)FUN_108855b04(&uStack_a0,auStack_79,&UNK_10b20e200);
                  uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,1);
LAB_10124a374:
                  puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                  puStack_198 = (undefined *)0x8000000000000000;
                  pbStack_190 = pbStack_b8;
                  bVar16 = true;
                  bVar31 = true;
                  pbVar17 = pbStack_b8;
                  pbStack_f8 = pbVar36;
                  goto LAB_10124a768;
                }
                if (bVar6 == 1) {
                  uStack_a0._1_1_ = SUB81(puVar10,1);
                  if (4 < uStack_a0._1_1_) {
                    uStack_a0._1_1_ = 5;
                  }
                  uStack_c0 = (undefined *)((ulong)CONCAT61(uStack_c0._2_6_,uStack_a0._1_1_) << 8);
                  uStack_a0 = puVar34;
                }
                else {
                  if (bVar6 != 4) {
                    if (bVar6 != 0xc) goto LAB_10124a33c;
                    func_0x000100ae7360(&uStack_c0,uStack_90);
                    goto joined_r0x000101249f70;
                  }
                  if ((undefined *)0x4 < puStack_98) {
                    puVar3 = (undefined *)0x5;
                  }
                  uStack_c0 = (undefined *)((ulong)CONCAT61(uStack_c0._2_6_,(char)puVar3) << 8);
                  uStack_a0 = puVar34;
                }
LAB_10124a00c:
                FUN_100e077ec(&uStack_a0);
                puVar10 = uStack_a0;
joined_r0x000101249fd8:
                uStack_a0 = puVar10;
                if (((ulong)uStack_c0 & 1) != 0) goto LAB_10124a374;
                uStack_c0._1_1_ = (byte)((ulong)uStack_c0 >> 8);
                cVar11 = (char)pbStack_120;
                pbStack_120._1_7_ = (undefined7)((ulong)pbStack_120 >> 8);
                uStack_a0._1_7_ = (undefined7)((ulong)puVar10 >> 8);
                if (uStack_c0._1_1_ < 3) {
                  if (uStack_c0._1_1_ == 0) {
                    if (puVar29 != (undefined *)0x8000000000000000) {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      uStack_c0 = &UNK_108ca1558;
                      pbStack_b8 = (byte *)0x5;
                      uStack_a0 = &uStack_c0;
                      puStack_98 = &DAT_100c7b3a0;
                      pbStack_f8 = pbVar36;
                      pbStack_190 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0
                                                         );
                      goto LAB_10124a53c;
                    }
                    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                    if (cVar11 == '\x16') {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      pbStack_f8 = pbVar36;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_10124afe8;
                    }
                    uVar18 = *puVar22;
                    puVar24[1] = puVar22[1];
                    *puVar24 = uVar18;
                    auVar7 = *(undefined1 (*) [16])((long)puVar22 + 0xf);
                    *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
                    *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
                    uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,cVar11);
                    FUN_1004b62d4(&uStack_c0,&uStack_a0);
                    if (uStack_c0 == (undefined *)0x8000000000000000) {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      puVar29 = (undefined *)0x0;
                      puStack_198 = (undefined *)0x8000000000000000;
                      pbStack_190 = pbStack_b8;
                      bVar16 = true;
                      bVar31 = true;
                      pbVar17 = pbStack_b8;
                      pbStack_f8 = pbVar36;
                      goto LAB_10124a768;
                    }
                    pbStack_288 = pbStack_b8;
                    uStack_2b0 = uStack_b0;
                    puVar29 = uStack_c0;
                  }
                  else if (uStack_c0._1_1_ == 1) {
                    if (puStack_248 != (undefined *)0x8000000000000000) {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      uStack_c0 = &UNK_108c6104c;
                      pbStack_b8 = (byte *)0x4;
                      uStack_a0 = &uStack_c0;
                      puStack_98 = &DAT_100c7b3a0;
                      pbStack_f8 = pbVar36;
                      pbStack_190 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0
                                                         );
                      goto LAB_10124a53c;
                    }
                    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                    if (cVar11 == '\x16') {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      pbStack_f8 = pbVar36;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_10124afe8;
                    }
                    uVar18 = *puVar22;
                    puVar24[1] = puVar22[1];
                    *puVar24 = uVar18;
                    auVar7 = *(undefined1 (*) [16])((long)puVar22 + 0xf);
                    *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
                    *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
                    uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,cVar11);
                    FUN_1004b62d4(&uStack_c0,&uStack_a0);
                    puStack_248 = uStack_c0;
                    if (uStack_c0 == (undefined *)0x8000000000000000) {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      puStack_248 = (undefined *)0x0;
                      puStack_198 = (undefined *)0x8000000000000000;
                      pbStack_190 = pbStack_b8;
                      bVar16 = true;
                      bVar31 = true;
                      pbVar17 = pbStack_b8;
                      pbStack_f8 = pbVar36;
                      goto LAB_10124a768;
                    }
                    uStack_2a8 = uStack_b0;
                    pbStack_290 = pbStack_b8;
                  }
                  else {
                    if (bVar31) {
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      uStack_c0 = &UNK_108cdcd70;
                      pbStack_b8 = (byte *)0x10;
                      uStack_a0 = &uStack_c0;
                      puStack_98 = &DAT_100c7b3a0;
                      pbStack_f8 = pbVar36;
                      pbStack_190 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0
                                                         );
                      goto LAB_10124a53c;
                    }
                    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                    if (cVar11 == '\x16') goto LAB_10124ae18;
                    uVar18 = *puVar22;
                    puVar24[1] = puVar22[1];
                    *puVar24 = uVar18;
                    auVar7 = *(undefined1 (*) [16])((long)puVar22 + 0xf);
                    *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
                    *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
                    uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,cVar11);
                    puVar34 = uStack_a0;
                    uStack_a0._1_1_ = (byte)((ulong)puVar10 >> 8);
                    uStack_a0._2_2_ = (ushort)((ulong)puVar10 >> 0x10);
                    uStack_a0._4_4_ = (float)((ulong)puVar10 >> 0x20);
                    uStack_a0 = puVar34;
                    switch(cVar11) {
                    case '\x01':
                      uVar38 = NEON_ucvtf((uint)uStack_a0._1_1_);
                      uStack_280 = (ulong)uVar38;
                      break;
                    case '\x02':
                      uVar38 = NEON_ucvtf((uint)uStack_a0._2_2_);
                      uStack_280 = (ulong)uVar38;
                      break;
                    case '\x03':
                      uVar38 = NEON_ucvtf(uStack_a0._4_4_);
                      uStack_280 = (ulong)uVar38;
                      break;
                    case '\x04':
                      uStack_280 = (ulong)(uint)(float)puStack_98;
                      break;
                    case '\x05':
                      uStack_280 = (ulong)(uint)(float)(int)(short)(char)uStack_a0._1_1_;
                      break;
                    case '\x06':
                      uStack_280 = (ulong)(uint)(float)(int)(short)uStack_a0._2_2_;
                      break;
                    case '\a':
                      uStack_280 = (ulong)(uint)(float)(int)uStack_a0._4_4_;
                      break;
                    case '\b':
                      uStack_280 = (ulong)(uint)(float)(long)puStack_98;
                      break;
                    case '\t':
                      uStack_280 = (ulong)(uint)uStack_a0._4_4_;
                      break;
                    case '\n':
                      uStack_280 = SUB168(ZEXT416(0x3f800000),0);
                      if ((undefined *)0x7fffffffffffffff < puStack_98) {
                        uStack_280 = 0xbf800000;
                      }
                      uStack_280 = uStack_280 ^
                                   (uStack_280 ^ (uint)(float)(double)puStack_98) &
                                   0x7fffffff7fffffff;
                      break;
                    default:
                      puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                      pbStack_f8 = pbVar36;
                      pbStack_190 = (byte *)FUN_108855b04(&uStack_a0,auStack_79,&UNK_10b23a1d0);
                      goto LAB_10124a53c;
                    }
                    FUN_100e077ec(&uStack_a0);
                    bVar31 = true;
                  }
                }
                else if (uStack_c0._1_1_ == 3) {
                  if (bVar2) {
                    puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                    uStack_c0 = &UNK_108c98148;
                    pbStack_b8 = (byte *)0x8;
                    uStack_a0 = &uStack_c0;
                    puStack_98 = &DAT_100c7b3a0;
                    pbStack_f8 = pbVar36;
                    pbStack_190 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0);
                    goto LAB_10124a53c;
                  }
                  pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                  if (cVar11 == '\x16') goto LAB_10124ae18;
                  uVar18 = *puVar22;
                  puVar24[1] = puVar22[1];
                  *puVar24 = uVar18;
                  auVar7 = *(undefined1 (*) [16])((long)puVar22 + 0xf);
                  *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
                  *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
                  uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,cVar11);
                  FUN_100614584(&uStack_c0,&uStack_a0);
                  if ((int)uStack_c0 == 1) goto LAB_10124a374;
                  uStack_29c = uStack_c0._4_4_;
                  bVar2 = true;
                }
                else if (uStack_c0._1_1_ == 4) {
                  if (puStack_240 != (undefined *)0x8000000000000000) {
                    puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                    uStack_c0 = &UNK_108caff5e;
                    pbStack_b8 = (byte *)0xd;
                    uStack_a0 = &uStack_c0;
                    puStack_98 = &DAT_100c7b3a0;
                    pbStack_f8 = pbVar36;
                    pbVar17 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0);
                    puStack_198 = (undefined *)0x8000000000000000;
                    bVar31 = true;
                    bVar16 = true;
                    pbStack_190 = pbVar17;
                    goto joined_r0x00010124aaa8;
                  }
                  pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                  if (cVar11 == '\x16') {
                    puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                    pbStack_f8 = pbVar36;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10124afe8;
                  }
                  uVar18 = *puVar22;
                  puVar24[1] = puVar22[1];
                  *puVar24 = uVar18;
                  auVar7 = *(undefined1 (*) [16])((long)puVar22 + 0xf);
                  *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
                  *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
                  uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,cVar11);
                  func_0x0001013833b8(&uStack_c0,&uStack_a0);
                  puStack_240 = uStack_c0;
                  if (uStack_c0 == (undefined *)0x8000000000000000) {
                    puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                    puStack_198 = (undefined *)0x8000000000000000;
                    pbStack_190 = pbStack_b8;
                    bVar31 = true;
                    bVar16 = true;
                    pbVar17 = pbStack_b8;
                    pbStack_f8 = pbVar36;
                    goto LAB_10124a780;
                  }
                  pbStack_298 = pbStack_b8;
                  uStack_c8 = uStack_a8;
                  uStack_d0 = uStack_b0;
                }
                else {
                  pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                  if (cVar11 == '\x16') {
LAB_10124ae18:
                    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
                    puStack_e0 = (undefined8 *)((long)puVar33 + 1);
                    pbStack_f8 = pbVar36;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10124afe8;
                  }
                  uVar18 = *puVar22;
                  puVar24[1] = puVar22[1];
                  *puVar24 = uVar18;
                  auVar7 = *(undefined1 (*) [16])((long)puVar22 + 0xf);
                  *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
                  *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
                  uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,cVar11);
                  FUN_100e077ec(&uStack_a0);
                }
                puVar33 = (undefined8 *)((long)puVar33 + 1);
                puVar34 = (undefined8 *)((lVar23 - 0x40U >> 6) + 1);
                pbVar37 = pbVar17;
                pbVar19 = pbVar36;
              } while (pbVar36 != pbVar17);
              pbStack_f8 = pbVar37;
              puStack_e0 = puVar34;
              if (puVar29 == (undefined *)0x8000000000000000) goto LAB_10124a4f8;
              bVar16 = puStack_248 == (undefined *)0x8000000000000000;
              if (bVar16) {
                uStack_c0 = &UNK_108c6104c;
                pbStack_b8 = (byte *)0x4;
                uStack_a0 = &uStack_c0;
                puStack_98 = &DAT_100c7b3a0;
                pbVar17 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_a0);
                puStack_198 = (undefined *)0x8000000000000000;
                pbStack_190 = pbVar17;
LAB_10124a758:
                if (puVar29 != (undefined *)0x0) {
                  _free(pbStack_288);
                }
                bVar31 = false;
                goto LAB_10124a768;
              }
              if (!bVar31) {
                uStack_c0 = &UNK_108cdcd70;
                pbStack_b8 = (byte *)0x10;
                uStack_a0 = &uStack_c0;
                puStack_98 = &DAT_100c7b3a0;
                pbVar17 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_a0);
LAB_10124a740:
                puStack_198 = (undefined *)0x8000000000000000;
                pbStack_190 = pbVar17;
                if (puStack_248 != (undefined *)0x0) {
                  _free(pbStack_290);
                }
                goto LAB_10124a758;
              }
              if (!bVar2) {
                uStack_c0 = &UNK_108c98148;
                pbStack_b8 = (byte *)0x8;
                uStack_a0 = &uStack_c0;
                puStack_98 = &DAT_100c7b3a0;
                pbVar17 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_a0);
                goto LAB_10124a740;
              }
              if (puStack_240 == (undefined *)0x8000000000000000) {
                uStack_c0 = &UNK_108caff5e;
                pbStack_b8 = (byte *)0xd;
                uStack_a0 = &uStack_c0;
                puStack_98 = &DAT_100c7b3a0;
                pbVar17 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_a0);
                goto LAB_10124a740;
              }
              uStack_150 = uStack_c8;
              uStack_158 = uStack_d0;
              pbStack_190 = pbStack_288;
              uStack_188 = uStack_2b0;
              puStack_180 = puStack_248;
              pbStack_178 = pbStack_290;
              uStack_170 = uStack_2a8;
              puStack_168 = puStack_240;
              pbStack_160 = pbStack_298;
              fStack_148 = (float)uStack_280;
              uStack_144 = uStack_29c;
              puStack_198 = puVar29;
              FUN_100d34830(&pbStack_100);
              pbVar19 = pbStack_288;
              if (pbVar17 != pbVar37) {
                uStack_a0 = puVar34;
                pbVar19 = (byte *)FUN_1087e422c(((ulong)((long)pbVar17 - (long)pbVar37) >> 6) +
                                                (long)puVar34,&uStack_a0,&UNK_10b23a190);
                puStack_198 = (undefined *)0x8000000000000000;
                pbStack_190 = pbVar19;
                if (puVar29 != (undefined *)0x0) {
                  _free(pbStack_288);
                }
                if (puStack_248 != (undefined *)0x0) {
                  _free(pbStack_290);
                }
                if (puStack_240 != (undefined *)0x0) {
                  _free(pbStack_298);
                }
                puVar29 = (undefined *)0x8000000000000000;
              }
              goto LAB_10124a7d0;
            }
            puStack_248 = (undefined *)0x0;
            puStack_240 = (undefined *)0x8000000000000000;
LAB_10124a4f8:
            uStack_c0 = &UNK_108ca1558;
            pbStack_b8 = (byte *)0x5;
            puVar29 = (undefined *)0x0;
            uStack_a0 = &uStack_c0;
            puStack_98 = &DAT_100c7b3a0;
            pbStack_190 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_a0);
LAB_10124a53c:
            puStack_198 = (undefined *)0x8000000000000000;
            bVar16 = true;
            bVar31 = true;
            pbVar17 = pbStack_190;
LAB_10124a768:
            if (puStack_240 != (undefined *)0x8000000000000000) {
joined_r0x00010124aaa8:
              if (puStack_240 != (undefined *)0x0) {
                _free(pbStack_298);
              }
            }
LAB_10124a780:
            if ((((ulong)puStack_248 & 0x7fffffffffffffff) != 0) && (bVar16)) {
              _free(pbStack_290);
            }
            bVar2 = false;
            if (((ulong)puVar29 & 0x7fffffffffffffff) != 0) {
              bVar2 = bVar31;
            }
            if (bVar2) {
              _free(pbStack_288);
            }
            FUN_100d34830(&pbStack_100);
            if ((char)pbStack_120 != '\x16') {
              FUN_100e077ec(&pbStack_120);
            }
LAB_10124a7cc:
            puVar29 = (undefined *)0x8000000000000000;
            pbVar19 = pbVar17;
            goto LAB_10124a7d0;
          }
          pbVar19 = (byte *)FUN_108855b04(abStack_140,auStack_79,&UNK_10b20c8e0);
LAB_10124ae5c:
          uVar25 = uStack_200;
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar19;
          if (uStack_1f8 != 0) {
            puVar21 = (undefined8 *)(uStack_200 + 0x20);
            uVar20 = uStack_1f8;
            do {
              if (puVar21[-4] != 0) {
                _free(puVar21[-3]);
              }
              if (puVar21[-1] != 0) {
                _free(*puVar21);
              }
              if (puVar21[2] != 0) {
                _free(puVar21[3]);
              }
              puVar21 = puVar21 + 0xb;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          if (uStack_208 != 0) {
            _free(uVar25);
          }
          goto LAB_10124aec8;
        }
        pbVar1 = pbStack_130 + lStack_128 * 0x20;
        pbStack_120 = pbStack_130;
        lStack_110 = lStack_138;
        pbStack_100 = (byte *)0x0;
        pbVar36 = pbStack_130;
        pbStack_108 = pbVar1;
        if (lStack_128 == 0) {
LAB_10124a3c0:
          pbStack_118 = pbVar36;
          pbVar17 = (byte *)FUN_1087e422c(0,&UNK_10b22d140,&UNK_10b20a590);
LAB_10124a3dc:
          puStack_198 = (undefined *)0x8000000000000000;
          pbStack_190 = pbVar17;
LAB_10124a3e8:
          lVar30 = ((ulong)((long)pbVar1 - (long)pbVar36) >> 5) + 1;
          while (lVar30 = lVar30 + -1, lVar30 != 0) {
            FUN_100e077ec(pbVar36);
            pbVar36 = pbVar36 + 0x20;
          }
          pbVar35 = pbVar37;
          if (lVar23 != 0) {
code_r0x00010124a418:
            _free(pbVar35);
            goto LAB_10124a7cc;
          }
          puVar29 = (undefined *)0x8000000000000000;
          pbVar19 = pbVar17;
        }
        else {
          pbVar36 = pbStack_130 + 0x20;
          bVar6 = *pbStack_130;
          if (bVar6 == 0x16) goto LAB_10124a3c0;
          uVar18 = *(undefined8 *)(pbStack_130 + 1);
          puVar24[1] = *(undefined8 *)(pbStack_130 + 9);
          *puVar24 = uVar18;
          auVar7 = *(undefined1 (*) [16])(pbStack_130 + 0x10);
          *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
          *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
          pbStack_100 = (byte *)0x1;
          uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,bVar6);
          pbStack_118 = pbVar36;
          FUN_1004b62d4(&uStack_c0,&uStack_a0);
          uVar18 = uStack_b0;
          pbVar19 = pbStack_b8;
          puVar29 = uStack_c0;
          pbVar17 = pbStack_b8;
          if (uStack_c0 == (undefined *)0x8000000000000000) goto LAB_10124a3dc;
          if (lVar30 == 1) {
LAB_10124a4a4:
            pbVar17 = (byte *)FUN_1087e422c(1,&UNK_10b22d140,&UNK_10b20a590);
LAB_10124a4c0:
            puStack_198 = (undefined *)0x8000000000000000;
            pbStack_190 = pbVar17;
LAB_10124a4c8:
            if (puVar29 != (undefined *)0x0) {
              _free(pbVar19);
            }
            goto LAB_10124a3e8;
          }
          pbVar36 = pbVar37 + 0x40;
          bVar6 = pbVar37[0x20];
          pbStack_118 = pbVar36;
          if (bVar6 == 0x16) goto LAB_10124a4a4;
          uVar8 = *(undefined8 *)(pbVar37 + 0x21);
          puVar24[1] = *(undefined8 *)(pbVar37 + 0x29);
          *puVar24 = uVar8;
          auVar7 = *(undefined1 (*) [16])(pbVar37 + 0x30);
          *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
          *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
          pbStack_100 = (byte *)0x2;
          uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,bVar6);
          FUN_1004b62d4(&uStack_c0,&uStack_a0);
          puVar33 = uStack_a0;
          uVar8 = uStack_b0;
          pbVar14 = pbStack_b8;
          puVar3 = uStack_c0;
          pbVar17 = pbStack_b8;
          if (uStack_c0 == (undefined *)0x8000000000000000) goto LAB_10124a4c0;
          if (lVar30 == 2) {
LAB_10124a850:
            uVar18 = 2;
code_r0x00010124a854:
            pbVar17 = (byte *)FUN_1087e422c(uVar18,&UNK_10b22d140,&UNK_10b20a590);
code_r0x00010124a86c:
            puStack_198 = (undefined *)0x8000000000000000;
            pbStack_190 = pbVar17;
            if (puVar3 != (undefined *)0x0) {
              _free(pbVar14);
            }
            goto LAB_10124a4c8;
          }
          pbVar36 = pbVar37 + 0x60;
          bVar6 = pbVar37[0x40];
          pbStack_118 = pbVar36;
          if (bVar6 == 0x16) goto LAB_10124a850;
          uVar9 = *(undefined8 *)(pbVar37 + 0x41);
          puVar24[1] = *(undefined8 *)(pbVar37 + 0x49);
          *puVar24 = uVar9;
          auVar7 = *(undefined1 (*) [16])(pbVar37 + 0x50);
          *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
          *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
          pbStack_100 = (byte *)0x3;
          uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,bVar6);
          puVar10 = uStack_a0;
          uStack_a0._1_1_ = SUB81(puVar33,1);
          uStack_a0._2_2_ = SUB82(puVar33,2);
          uStack_a0._4_4_ = SUB84(puVar33,4);
          uStack_a0 = puVar10;
          switch(bVar6) {
          case 1:
            fVar39 = (float)NEON_ucvtf((uint)uStack_a0._1_1_);
            break;
          case 2:
            fVar39 = (float)NEON_ucvtf((uint)uStack_a0._2_2_);
            break;
          case 3:
            fVar39 = (float)NEON_ucvtf(uStack_a0._4_4_);
            break;
          case 4:
            fVar39 = (float)puStack_98;
            break;
          case 5:
            fVar39 = (float)(int)(short)(char)uStack_a0._1_1_;
            break;
          case 6:
            fVar39 = (float)(int)(short)uStack_a0._2_2_;
            break;
          case 7:
            fVar39 = (float)(int)uStack_a0._4_4_;
            break;
          case 8:
            fVar39 = (float)(long)puStack_98;
            break;
          case 9:
            fVar39 = uStack_a0._4_4_;
            break;
          case 10:
            uVar38 = 0x3f800000;
            if ((undefined *)0x7fffffffffffffff < puStack_98) {
              uVar38 = 0xbf800000;
            }
            fVar39 = (float)(uVar38 ^ (uVar38 ^ (uint)(float)(double)puStack_98) & 0x7fffffff);
            break;
          default:
            pbVar17 = (byte *)FUN_108855b04(&uStack_a0,auStack_79,&UNK_10b23a1d0);
            goto code_r0x00010124a86c;
          }
          FUN_100e077ec(&uStack_a0);
          if (lVar30 == 3) {
code_r0x00010124a9e0:
            uVar18 = 3;
            goto code_r0x00010124a854;
          }
          pbVar36 = pbVar37 + 0x80;
          bVar6 = pbVar37[0x60];
          pbStack_118 = pbVar36;
          if (bVar6 == 0x16) goto code_r0x00010124a9e0;
          uVar9 = *(undefined8 *)(pbVar37 + 0x61);
          puVar24[1] = *(undefined8 *)(pbVar37 + 0x69);
          *puVar24 = uVar9;
          auVar7 = *(undefined1 (*) [16])(pbVar37 + 0x70);
          *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
          *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
          pbStack_100 = (byte *)0x4;
          uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,bVar6);
          FUN_100614584(&uStack_c0,&uStack_a0);
          pbVar17 = pbStack_b8;
          if ((int)uStack_c0 == 1) goto code_r0x00010124a86c;
          if (lVar30 == 4) {
code_r0x00010124aa44:
            uVar18 = 4;
            goto code_r0x00010124a854;
          }
          uVar13 = uStack_c0._4_4_;
          pbVar36 = pbVar37 + 0xa0;
          bVar6 = pbVar37[0x80];
          pbStack_118 = pbVar36;
          if (bVar6 == 0x16) goto code_r0x00010124aa44;
          pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,uStack_c0._4_4_);
          uVar9 = *(undefined8 *)(pbVar37 + 0x81);
          puVar24[1] = *(undefined8 *)(pbVar37 + 0x89);
          *puVar24 = uVar9;
          auVar7 = *(undefined1 (*) [16])(pbVar37 + 0x90);
          *(long *)((long)puVar24 + 0x17) = auVar7._8_8_;
          *(long *)((long)puVar24 + 0xf) = auVar7._0_8_;
          pbStack_100 = (byte *)0x5;
          uStack_a0 = (undefined8 *)CONCAT71(uStack_a0._1_7_,bVar6);
          func_0x0001013833b8(&uStack_c0,&uStack_a0);
          pbVar35 = pbStack_b8;
          puVar12 = uStack_c0;
          pbVar17 = pbStack_b8;
          if (uStack_c0 == (undefined *)0x8000000000000000) goto code_r0x00010124a86c;
          uStack_150 = uStack_a8;
          uStack_158 = uStack_b0;
          puStack_198 = puVar29;
          pbStack_190 = pbVar19;
          uStack_188 = uVar18;
          puStack_180 = puVar3;
          pbStack_178 = pbVar14;
          uStack_170 = uVar8;
          puStack_168 = uStack_c0;
          pbStack_160 = pbStack_b8;
          uStack_144 = uVar13;
          fStack_148 = fVar39;
          pbVar17 = (byte *)FUN_100fbc738(&pbStack_120);
          if (pbVar17 != (byte *)0x0) {
            puStack_198 = (undefined *)0x8000000000000000;
            pbStack_190 = pbVar17;
            if (puVar29 != (undefined *)0x0) {
              _free(pbVar19);
            }
            if (puVar3 != (undefined *)0x0) {
              _free(pbVar14);
            }
            if (puVar12 == (undefined *)0x0) {
              puVar29 = (undefined *)0x8000000000000000;
              pbVar19 = pbVar17;
              goto LAB_10124a7d0;
            }
            goto code_r0x00010124a418;
          }
        }
LAB_10124a7d0:
        if ((bVar5 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_140);
        }
        uVar25 = uStack_1f8;
        if (puVar29 == (undefined *)0x8000000000000000) goto LAB_10124ae5c;
        puStack_1c0 = puStack_168;
        pbStack_1b8 = pbStack_160;
        uStack_1a8 = uStack_150;
        uStack_1b0 = uStack_158;
        uStack_1a0 = CONCAT44(uStack_144,fStack_148);
        puStack_1d8 = puStack_180;
        uStack_1e0 = uStack_188;
        uStack_1c8 = uStack_170;
        pbStack_1d0 = pbStack_178;
        puStack_1f0 = puVar29;
        pbStack_1e8 = pbVar19;
        if (uStack_1f8 == uStack_208) {
          func_0x0001089beea8(&uStack_208);
        }
        puVar33 = (undefined8 *)(uStack_200 + uVar25 * 0x58);
        puVar33[5] = uStack_1c8;
        puVar33[4] = pbStack_1d0;
        puVar33[7] = pbStack_1b8;
        puVar33[6] = puStack_1c0;
        puVar33[9] = uStack_1a8;
        puVar33[8] = uStack_1b0;
        puVar33[10] = uStack_1a0;
        puVar33[1] = pbStack_1e8;
        *puVar33 = puStack_1f0;
        puVar33[3] = puStack_1d8;
        puVar33[2] = uStack_1e0;
        uStack_1f8 = uVar25 + 1;
        pbVar17 = pbVar28;
        pbVar19 = pbVar27;
      } while (pbVar27 != pbVar28);
    }
    param_1[1] = uStack_200;
    *param_1 = uStack_208;
    param_1[2] = uStack_1f8;
    uVar25 = *param_1;
    pbVar27 = pbVar17;
    if (uVar25 == 0x8000000000000000) {
LAB_10124aec8:
      lVar32 = ((ulong)((long)pbVar28 - (long)pbVar27) >> 5) + 1;
      while (lVar32 = lVar32 + -1, uVar25 = uVar26, lVar32 != 0) {
        FUN_100e077ec(pbVar27);
        pbVar27 = pbVar27 + 0x20;
      }
    }
    else {
      pbVar4 = (byte *)param_1[1];
      uVar26 = param_1[2];
      uVar20 = FUN_100fbc738(&pbStack_230);
      if (uVar20 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar20;
      if (uVar26 != 0) {
        pbVar28 = pbVar4 + 0x20;
        do {
          if (*(long *)(pbVar28 + -0x20) != 0) {
            _free(*(undefined8 *)(pbVar28 + -0x18));
          }
          if (*(long *)(pbVar28 + -8) != 0) {
            _free(*(undefined8 *)pbVar28);
          }
          if (*(long *)(pbVar28 + 0x10) != 0) {
            _free(*(undefined8 *)(pbVar28 + 0x18));
          }
          pbVar28 = pbVar28 + 0x58;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (uVar25 != 0) {
      _free(pbVar4);
    }
  }
  else {
    uVar25 = FUN_108855b04(param_2,auStack_79,&UNK_10b20a200);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar25;
  }
  return;
}

