
/* WARNING: Removing unreachable block (ram,0x000101264b88) */
/* WARNING: Removing unreachable block (ram,0x000101264d54) */

void FUN_1012640f0(ulong *param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  bool bVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  char cVar21;
  char *pcVar22;
  char *pcVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  byte *pbVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  undefined8 uVar34;
  long *plStack_3d8;
  long *plStack_3c8;
  long *plStack_3c0;
  char *pcStack_388;
  char *pcStack_380;
  long lStack_378;
  char *pcStack_370;
  long lStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  long *plStack_330;
  undefined8 *puStack_328;
  long *plStack_320;
  long *plStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  char cStack_208;
  undefined7 uStack_207;
  char acStack_200 [8];
  long lStack_1f8;
  byte *pbStack_1f0;
  long lStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  long lStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  long lStack_1b0;
  byte *pbStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_71 [17];
  char *pcVar23;
  
  if (*param_2 == '\x14') {
    lVar3 = *(long *)(param_2 + 8);
    pcVar4 = *(char **)(param_2 + 0x10);
    uVar15 = *(ulong *)(param_2 + 0x18);
    pcVar1 = pcVar4 + uVar15 * 0x20;
    lStack_368 = 0;
    uVar13 = uVar15;
    if (0x2761 < uVar15) {
      uVar13 = 0x2762;
    }
    pcStack_388 = pcVar4;
    pcStack_380 = pcVar4;
    lStack_378 = lVar3;
    pcStack_370 = pcVar1;
    if (uVar15 == 0) {
      uStack_348 = 0;
      uStack_340 = 8;
      uStack_338 = 0;
      pcVar24 = pcVar4;
    }
    else {
      uVar15 = _malloc(uVar13 * 0x68);
      if (uVar15 == 0) {
        func_0x0001087c9084(8,uVar13 * 0x68);
LAB_1012650b0:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1012650b4);
        (*pcVar10)();
      }
      lVar28 = 0;
      uStack_338 = 0;
      puVar16 = (undefined8 *)((ulong)acStack_200 | 1);
      puVar19 = (undefined8 *)((ulong)&uStack_e0 | 1);
      puVar17 = (undefined8 *)((ulong)&pbStack_1e0 | 1);
      puVar18 = (undefined8 *)((ulong)&uStack_98 | 1);
      pcVar23 = pcVar4;
      uStack_348 = uVar13;
      uStack_340 = uVar15;
      do {
        lVar26 = lStack_1e8;
        pbVar2 = pbStack_1f0;
        lVar20 = lStack_1f8;
        pcVar22 = pcVar23 + 0x20;
        cVar21 = *pcVar23;
        pcVar24 = pcVar22;
        pcStack_380 = pcVar22;
        if (cVar21 == '\x16') break;
        uVar34 = *(undefined8 *)(pcVar23 + 1);
        puVar16[1] = *(undefined8 *)(pcVar23 + 9);
        *puVar16 = uVar34;
        uVar34 = *(undefined8 *)(pcVar23 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pcVar23 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar34;
        lVar28 = lVar28 + 1;
        lStack_368 = lVar28;
        acStack_200[0] = cVar21;
        if (cVar21 != '\x14') {
          if (cVar21 == '\x15') {
            lVar20 = lStack_1e8 * 0x40;
            pbVar2 = pbStack_1f0 + lVar20;
            pbStack_1c0 = pbStack_1f0;
            pbStack_1b8 = pbStack_1f0;
            lStack_1b0 = lStack_1f8;
            pbStack_1e0 = (byte *)CONCAT71(pbStack_1e0._1_7_,0x16);
            puStack_1a0 = (undefined8 *)0x0;
            pbStack_1a8 = pbVar2;
            if (lStack_1e8 == 0) {
              puStack_128 = (undefined8 *)0x8000000000000005;
LAB_10126485c:
              puVar31 = puStack_128;
              uStack_98 = (undefined8 *)&UNK_108cbedb9;
              plStack_90 = (long *)0x7;
              puVar32 = (undefined8 *)0x0;
              uStack_e0 = &uStack_98;
              plStack_d8 = (long *)&DAT_100c7b3a0;
              plStack_260 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
LAB_101264898:
              puStack_268 = (undefined8 *)0x8000000000000000;
              bVar11 = true;
              bVar6 = true;
LAB_1012648a0:
              if ((puVar31 != (undefined8 *)0x8000000000000005) && (bVar11)) {
                FUN_100de6690(&puStack_128);
              }
              if (bVar6) {
LAB_1012648c4:
                if (((ulong)puVar32 & 0x7fffffffffffffff) != 0) {
                  _free(plStack_3c0);
                }
              }
              FUN_100d34830(&pbStack_1c0);
              if ((char)pbStack_1e0 != '\x16') {
                FUN_100e077ec(&pbStack_1e0);
              }
            }
            else {
              puVar25 = (undefined8 *)0x0;
              puVar32 = (undefined8 *)0x8000000000000000;
              cVar21 = '\x02';
              puVar31 = (undefined8 *)0x8000000000000005;
              pbVar33 = pbStack_1f0;
              do {
                plVar8 = plStack_d0;
                plVar14 = plStack_d8;
                puVar9 = uStack_e0;
                pbVar29 = pbVar33 + 0x40;
                bVar5 = *pbVar33;
                puVar27 = puVar25;
                pbVar30 = pbVar29;
                if (bVar5 == 0x16) break;
                uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar5);
                puVar27 = uStack_e0;
                uVar34 = *(undefined8 *)(pbVar33 + 0x10);
                *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar33 + 0x18);
                *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
                uVar34 = *(undefined8 *)(pbVar33 + 1);
                puVar19[1] = *(undefined8 *)(pbVar33 + 9);
                *puVar19 = uVar34;
                pbStack_1d8 = *(byte **)(pbVar33 + 0x28);
                pbStack_1e0 = *(byte **)(pbVar33 + 0x20);
                pbStack_1c8 = *(byte **)(pbVar33 + 0x38);
                lStack_1d0 = *(long *)(pbVar33 + 0x30);
                if (bVar5 < 0xd) {
                  if (bVar5 == 1) {
                    uStack_e0._1_1_ = SUB81(puVar9,1);
                    if (2 < uStack_e0._1_1_) {
                      uStack_e0._1_1_ = 3;
                    }
LAB_1012644f4:
                    uStack_98._1_7_ = CONCAT61(uStack_98._2_6_,uStack_e0._1_1_);
                    uStack_98 = (undefined8 *)((ulong)uStack_98._1_7_ << 8);
                    uStack_e0 = puVar27;
                    goto LAB_1012644f8;
                  }
                  if (bVar5 == 4) {
                    if ((long *)0x2 < plStack_d8) {
                      plVar14 = (long *)0x3;
                    }
                    uStack_e0._1_1_ = (byte)plVar14;
                    goto LAB_1012644f4;
                  }
                  if (bVar5 == 0xc) {
                    if (lStack_c8 == 5) {
                      if ((int)*plStack_d0 != 0x756c6176 || *(char *)((long)plStack_d0 + 4) != 'e')
                      goto LAB_101264474;
                      uStack_98 = (undefined8 *)CONCAT62(uStack_98._2_6_,0x100);
                    }
                    else if (lStack_c8 == 0xd) {
                      if (*plStack_d0 != 0x727453656772656d ||
                          *(long *)((long)plStack_d0 + 5) != 0x7967657461727453) goto LAB_101264474;
                      uStack_98 = (undefined8 *)CONCAT62(uStack_98._2_6_,0x200);
                    }
                    else if ((lStack_c8 == 7) &&
                            ((int)*plStack_d0 == 0x5079656b &&
                             *(int *)((long)plStack_d0 + 3) == 0x68746150)) {
                      uStack_98 = (undefined8 *)((ulong)uStack_98._2_6_ << 0x10);
                    }
                    else {
LAB_101264474:
                      uStack_98 = (undefined8 *)CONCAT62(uStack_98._2_6_,0x300);
                    }
joined_r0x00010126444c:
                    if (plVar14 != (long *)0x0) {
                      _free(plVar8);
                    }
                  }
                  else {
LAB_1012646c4:
                    plStack_90 = (long *)FUN_108855b04(&uStack_e0,auStack_71,&UNK_10b2109e0);
                    uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,1);
                  }
                }
                else {
                  if (bVar5 == 0xd) {
                    if (plStack_d0 == (long *)0x5) {
                      if ((int)*plStack_d8 != 0x756c6176 || *(char *)((long)plStack_d8 + 4) != 'e')
                      goto LAB_1012644ec;
                      uStack_e0._1_1_ = 1;
                    }
                    else if (plStack_d0 == (long *)0xd) {
                      if (*plStack_d8 != 0x727453656772656d ||
                          *(long *)((long)plStack_d8 + 5) != 0x7967657461727453) goto LAB_1012644ec;
                      uStack_e0._1_1_ = 2;
                    }
                    else if ((plStack_d0 == (long *)0x7) &&
                            ((int)*plStack_d8 == 0x5079656b &&
                             *(int *)((long)plStack_d8 + 3) == 0x68746150)) {
                      uStack_e0._1_1_ = 0;
                    }
                    else {
LAB_1012644ec:
                      uStack_e0._1_1_ = 3;
                    }
                    goto LAB_1012644f4;
                  }
                  if (bVar5 == 0xe) {
                    FUN_100ba6c00(&uStack_98,plStack_d0);
                    goto joined_r0x00010126444c;
                  }
                  if (bVar5 != 0xf) goto LAB_1012646c4;
                  FUN_100ba6c00(&uStack_98,plStack_d8,plStack_d0);
LAB_1012644f8:
                  FUN_100e077ec(&uStack_e0);
                }
                if (((ulong)uStack_98 & 1) != 0) {
LAB_101264824:
                  puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                  plStack_120 = plStack_3c8;
                  puStack_268 = (undefined8 *)0x8000000000000000;
                  bVar11 = true;
                  bVar6 = true;
                  plStack_260 = plStack_90;
                  pbStack_1b8 = pbVar29;
                  puStack_128 = puVar31;
                  goto LAB_1012648a0;
                }
                cVar7 = (char)pbStack_1e0;
                if (uStack_98._1_1_ < 2) {
                  if (uStack_98._1_1_ == 0) {
                    if (puVar32 != (undefined8 *)0x8000000000000000) {
                      puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                      plStack_120 = plStack_3c8;
                      uStack_98 = (undefined8 *)&UNK_108cbedb9;
                      plStack_90 = (long *)0x7;
                      uStack_e0 = &uStack_98;
                      plStack_d8 = (long *)&DAT_100c7b3a0;
                      pbStack_1b8 = pbVar29;
                      puStack_128 = puVar31;
                      plStack_260 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0
                                                         );
                      goto LAB_101264898;
                    }
                    pbStack_1e0 = (byte *)CONCAT71(pbStack_1e0._1_7_,0x16);
                    if (cVar7 == '\x16') {
                      puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                      plStack_120 = plStack_3c8;
                      pbStack_1b8 = pbVar29;
                      puStack_128 = puVar31;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_1012650b0;
                    }
                    uVar34 = *puVar17;
                    puVar19[1] = puVar17[1];
                    *puVar19 = uVar34;
                    uVar34 = *(undefined8 *)((long)puVar17 + 0xf);
                    *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                    *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
                    uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,cVar7);
                    FUN_1004b62d4(&uStack_98,&uStack_e0);
                    if (uStack_98 == (undefined8 *)0x8000000000000000) {
                      puVar32 = (undefined8 *)0x0;
                      goto LAB_101264824;
                    }
                    plStack_3c0 = plStack_90;
                    plStack_3d8 = plStack_88;
                    puVar32 = uStack_98;
                  }
                  else {
                    if (puVar31 != (undefined8 *)0x8000000000000005) {
                      puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                      plStack_120 = plStack_3c8;
                      uStack_98 = (undefined8 *)&UNK_108cad90a;
                      plStack_90 = (long *)0x5;
                      uStack_e0 = &uStack_98;
                      plStack_d8 = (long *)&DAT_100c7b3a0;
                      pbStack_1b8 = pbVar29;
                      puStack_128 = puVar31;
                      plStack_260 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0
                                                         );
                      goto LAB_101264898;
                    }
                    pbStack_1e0 = (byte *)CONCAT71(pbStack_1e0._1_7_,0x16);
                    if (cVar7 == '\x16') {
                      puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                      plStack_120 = plStack_3c8;
                      puStack_128 = (undefined8 *)0x8000000000000005;
                      pbStack_1b8 = pbVar29;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_1012650b0;
                    }
                    uVar34 = *puVar17;
                    puVar18[1] = puVar17[1];
                    *puVar18 = uVar34;
                    uVar34 = *(undefined8 *)((long)puVar17 + 0xf);
                    *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                    *(undefined8 *)((long)puVar18 + 0xf) = uVar34;
                    uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,cVar7);
                    FUN_1004aa788(&uStack_e0,&uStack_98);
                    if (uStack_e0 == (undefined8 *)0x8000000000000005) {
                      puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                      plStack_120 = plStack_3c8;
                      puStack_128 = (undefined8 *)0x8000000000000005;
                      plStack_260 = plStack_d8;
                      puStack_268 = (undefined8 *)0x8000000000000000;
                      pbStack_1b8 = pbVar29;
                      goto LAB_1012648c4;
                    }
                    plStack_3c8 = plStack_d8;
                    lStack_110 = lStack_c8;
                    plStack_118 = plStack_d0;
                    uStack_100 = uStack_b8;
                    uStack_108 = uStack_c0;
                    uStack_f0 = uStack_a8;
                    uStack_f8 = uStack_b0;
                    uStack_e8 = uStack_a0;
                    puVar31 = uStack_e0;
                  }
                }
                else if (uStack_98._1_1_ == 2) {
                  if (cVar21 != '\x02') {
                    puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                    plStack_120 = plStack_3c8;
                    uStack_98 = (undefined8 *)&UNK_108cbedc0;
                    plStack_90 = (long *)0xd;
                    uStack_e0 = &uStack_98;
                    plStack_d8 = (long *)&DAT_100c7b3a0;
                    pbStack_1b8 = pbVar29;
                    puStack_128 = puVar31;
                    plStack_260 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
                    goto LAB_101264898;
                  }
                  pbStack_1e0 = (byte *)CONCAT71(pbStack_1e0._1_7_,0x16);
                  if (cVar7 == '\x16') goto LAB_101264f4c;
                  uVar34 = *puVar17;
                  puVar19[1] = puVar17[1];
                  *puVar19 = uVar34;
                  uVar34 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
                  uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,cVar7);
                  FUN_10124e018(&uStack_98,&uStack_e0);
                  if ((char)uStack_98 == '\x01') goto LAB_101264824;
                  cVar21 = uStack_98._1_1_;
                }
                else {
                  pbStack_1e0 = (byte *)CONCAT71(pbStack_1e0._1_7_,0x16);
                  if (cVar7 == '\x16') {
LAB_101264f4c:
                    pbStack_1e0 = (byte *)CONCAT71(pbStack_1e0._1_7_,0x16);
                    puStack_1a0 = (undefined8 *)((long)puVar25 + 1);
                    plStack_120 = plStack_3c8;
                    pbStack_1b8 = pbVar29;
                    puStack_128 = puVar31;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1012650b0;
                  }
                  uVar34 = *puVar17;
                  puVar19[1] = puVar17[1];
                  *puVar19 = uVar34;
                  uVar34 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
                  uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,cVar7);
                  FUN_100e077ec(&uStack_e0);
                }
                puVar25 = (undefined8 *)((long)puVar25 + 1);
                puVar27 = (undefined8 *)((lVar20 - 0x40U >> 6) + 1);
                pbVar30 = pbVar2;
                pbVar33 = pbVar29;
              } while (pbVar29 != pbVar2);
              plStack_120 = plStack_3c8;
              pbStack_1b8 = pbVar30;
              puStack_1a0 = puVar27;
              puStack_128 = puVar31;
              if (puVar32 == (undefined8 *)0x8000000000000000) goto LAB_10126485c;
              bVar11 = puVar31 == (undefined8 *)0x8000000000000005;
              if (bVar11) {
                uStack_98 = (undefined8 *)&UNK_108cad90a;
                plStack_90 = (long *)0x5;
                uStack_e0 = &uStack_98;
                plStack_d8 = (long *)&DAT_100c7b3a0;
                plStack_260 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
                puStack_268 = (undefined8 *)0x8000000000000000;
LAB_101264a08:
                if (puVar32 == (undefined8 *)0x0) {
                  bVar6 = false;
                }
                else {
                  _free(plStack_3c0);
                  bVar6 = false;
                  puVar31 = puStack_128;
                }
                goto LAB_1012648a0;
              }
              if (cVar21 == '\x02') {
                uStack_98 = (undefined8 *)&UNK_108cbedc0;
                plStack_90 = (long *)0xd;
                uStack_e0 = &uStack_98;
                plStack_d8 = (long *)&DAT_100c7b3a0;
                plStack_260 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
                puStack_268 = (undefined8 *)0x8000000000000000;
                FUN_100de6690(&puStack_128);
                goto LAB_101264a08;
              }
              plStack_248 = plStack_3c8;
              uStack_210 = uStack_e8;
              uStack_218 = uStack_f0;
              uStack_220 = uStack_f8;
              uStack_228 = uStack_100;
              uStack_230 = uStack_108;
              lStack_238 = lStack_110;
              plStack_240 = plStack_118;
              plStack_260 = plStack_3c0;
              plStack_258 = plStack_3d8;
              plStack_188 = plStack_3c0;
              plStack_180 = plStack_3d8;
              uStack_130 = CONCAT71(uStack_207,cVar21);
              uStack_148 = uStack_f8;
              uStack_150 = uStack_100;
              uStack_138 = uStack_e8;
              uStack_140 = uStack_f0;
              plStack_168 = plStack_118;
              plStack_170 = plStack_3c8;
              uStack_158 = uStack_108;
              lStack_160 = lStack_110;
              puStack_268 = puVar32;
              puStack_250 = puVar31;
              cStack_208 = cVar21;
              puStack_190 = puVar32;
              puStack_178 = puVar31;
              FUN_100d34830(&pbStack_1c0);
              if (pbVar2 != pbVar30) {
                uStack_e0 = puVar27;
                plStack_260 = (long *)FUN_1087e422c((undefined *)
                                                    (((ulong)((long)pbVar2 - (long)pbVar30) >> 6) +
                                                    (long)puVar27),&uStack_e0,&UNK_10b23a190);
                puStack_268 = (undefined8 *)0x8000000000000000;
                if (puStack_190 != (undefined8 *)0x0) {
                  _free(plStack_188);
                }
                FUN_100de6690(&puStack_178);
              }
            }
            goto LAB_101264d5c;
          }
          plVar14 = (long *)FUN_108855b04(acStack_200,auStack_71,&UNK_10b20ae20);
LAB_101265010:
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)plVar14;
          FUN_100ca4b40(&uStack_348);
          goto LAB_101265024;
        }
        pbVar30 = pbStack_1f0 + lStack_1e8 * 0x20;
        pbStack_1e0 = pbStack_1f0;
        lStack_1d0 = lStack_1f8;
        pbStack_1c0 = (byte *)0x0;
        pbVar33 = pbStack_1f0;
        pbStack_1c8 = pbVar30;
        if (lStack_1e8 == 0) {
LAB_101264728:
          pbStack_1d8 = pbVar33;
          plVar14 = (long *)FUN_1087e422c(0,&UNK_10b230548,&UNK_10b20a590);
LAB_101264744:
          puStack_268 = (undefined8 *)0x8000000000000000;
          plStack_260 = plVar14;
        }
        else {
          pbVar33 = pbStack_1f0 + 0x20;
          bVar5 = *pbStack_1f0;
          if (bVar5 == 0x16) goto LAB_101264728;
          uVar34 = *(undefined8 *)(pbStack_1f0 + 1);
          puVar19[1] = *(undefined8 *)(pbStack_1f0 + 9);
          *puVar19 = uVar34;
          uVar34 = *(undefined8 *)(pbStack_1f0 + 0x10);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbStack_1f0 + 0x18);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
          pbStack_1c0 = (byte *)0x1;
          uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar5);
          pbStack_1d8 = pbVar33;
          FUN_1004b62d4(&puStack_128,&uStack_e0);
          plVar8 = plStack_118;
          plVar14 = plStack_120;
          puVar25 = puStack_128;
          if (puStack_128 == (undefined8 *)0x8000000000000000) goto LAB_101264744;
          if (lVar26 == 1) {
LAB_101264980:
            plVar12 = (long *)FUN_1087e422c(1,&UNK_10b230548,&UNK_10b20a590);
LAB_101264998:
            puStack_268 = (undefined8 *)0x8000000000000000;
            plStack_260 = plVar12;
          }
          else {
            pbVar33 = pbVar2 + 0x40;
            bVar5 = pbVar2[0x20];
            pbStack_1d8 = pbVar33;
            if (bVar5 == 0x16) goto LAB_101264980;
            uVar34 = *(undefined8 *)(pbVar2 + 0x21);
            puVar18[1] = *(undefined8 *)(pbVar2 + 0x29);
            *puVar18 = uVar34;
            uVar34 = *(undefined8 *)(pbVar2 + 0x30);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar2 + 0x38);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar34;
            pbStack_1c0 = (byte *)0x2;
            uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,bVar5);
            FUN_1004aa788(&uStack_e0,&uStack_98);
            plVar12 = plStack_d8;
            if (uStack_e0 == (undefined8 *)0x8000000000000005) goto LAB_101264998;
            lStack_110 = lStack_c8;
            plStack_118 = plStack_d0;
            uStack_100 = uStack_b8;
            uStack_108 = uStack_c0;
            uStack_f0 = uStack_a8;
            uStack_f8 = uStack_b0;
            uStack_e8 = uStack_a0;
            puStack_128 = uStack_e0;
            plStack_120 = plStack_d8;
            if (lVar26 == 2) {
LAB_101264c10:
              plStack_260 = (long *)FUN_1087e422c(2,&UNK_10b230548,&UNK_10b20a590);
            }
            else {
              pbVar33 = pbVar2 + 0x60;
              bVar5 = pbVar2[0x40];
              pbStack_1d8 = pbVar33;
              if (bVar5 == 0x16) goto LAB_101264c10;
              uVar34 = *(undefined8 *)(pbVar2 + 0x41);
              puVar19[1] = *(undefined8 *)(pbVar2 + 0x49);
              *puVar19 = uVar34;
              uVar34 = *(undefined8 *)(pbVar2 + 0x50);
              *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar2 + 0x58);
              *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
              pbStack_1c0 = (byte *)0x3;
              uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,bVar5);
              FUN_10124e018(&uStack_98,&uStack_e0);
              plStack_260 = plStack_90;
              if (((ulong)uStack_98 & 1) == 0) {
                plStack_248 = plStack_120;
                puStack_250 = puStack_128;
                uStack_210 = uStack_e8;
                uStack_218 = uStack_f0;
                uStack_220 = uStack_f8;
                uStack_228 = uStack_100;
                uStack_230 = uStack_108;
                lStack_238 = lStack_110;
                plStack_240 = plStack_118;
                puStack_268 = puVar25;
                plStack_260 = plVar14;
                plStack_258 = plVar8;
                cStack_208 = uStack_98._1_1_;
                plStack_188 = plVar14;
                puStack_190 = puVar25;
                puStack_178 = puStack_128;
                plStack_180 = plVar8;
                uStack_130 = CONCAT71(uStack_207,uStack_98._1_1_);
                uStack_148 = uStack_f8;
                uStack_150 = uStack_100;
                uStack_138 = uStack_e8;
                uStack_140 = uStack_f0;
                plStack_168 = plStack_118;
                plStack_170 = plStack_120;
                uStack_158 = uStack_108;
                lStack_160 = lStack_110;
                plVar14 = (long *)FUN_100fbc738(&pbStack_1e0);
                if (plVar14 != (long *)0x0) {
                  puStack_268 = (undefined8 *)0x8000000000000000;
                  plStack_260 = plVar14;
                  if (puStack_190 != (undefined8 *)0x0) {
                    _free(plStack_188);
                  }
                  FUN_100de6690(&puStack_178);
                }
                goto LAB_101264d5c;
              }
            }
            puStack_268 = (undefined8 *)0x8000000000000000;
            FUN_100de6690(&puStack_128);
          }
          if (puVar25 != (undefined8 *)0x0) {
            _free(plVar14);
          }
        }
        lVar26 = ((ulong)((long)pbVar30 - (long)pbVar33) >> 5) + 1;
        while (lVar26 = lVar26 + -1, lVar26 != 0) {
          FUN_100e077ec(pbVar33);
          pbVar33 = pbVar33 + 0x20;
        }
        if (lVar20 != 0) {
          _free(pbVar2);
        }
LAB_101264d5c:
        uVar13 = uStack_338;
        plVar14 = plStack_260;
        if (puStack_268 == (undefined8 *)0x8000000000000000) goto LAB_101265010;
        uStack_308 = uStack_230;
        lStack_310 = lStack_238;
        uStack_2f8 = uStack_220;
        uStack_300 = uStack_228;
        uStack_2e8 = uStack_210;
        uStack_2f0 = uStack_218;
        uStack_2e0 = CONCAT71(uStack_207,cStack_208);
        puStack_328 = puStack_250;
        plStack_330 = plStack_258;
        plStack_318 = plStack_240;
        plStack_320 = plStack_248;
        if (puStack_268 == (undefined8 *)0x8000000000000001) goto LAB_101265010;
        puStack_2d0 = puStack_268;
        plStack_2c8 = plStack_260;
        uStack_298 = uStack_230;
        lStack_2a0 = lStack_238;
        uStack_288 = uStack_220;
        uStack_290 = uStack_228;
        uStack_278 = uStack_210;
        uStack_280 = uStack_218;
        puStack_2b8 = puStack_250;
        plStack_2c0 = plStack_258;
        plStack_2a8 = plStack_240;
        plStack_2b0 = plStack_248;
        uStack_270 = uStack_2e0;
        if (uStack_338 == uStack_348) {
          func_0x0001088bac0c(&uStack_348);
        }
        puVar25 = (undefined8 *)(uStack_340 + uVar13 * 0x68);
        puVar25[9] = uStack_288;
        puVar25[8] = uStack_290;
        puVar25[0xb] = uStack_278;
        puVar25[10] = uStack_280;
        puVar25[0xc] = uStack_270;
        puVar25[1] = plStack_2c8;
        *puVar25 = puStack_2d0;
        puVar25[3] = puStack_2b8;
        puVar25[2] = plStack_2c0;
        puVar25[5] = plStack_2a8;
        puVar25[4] = plStack_2b0;
        puVar25[7] = uStack_298;
        puVar25[6] = lStack_2a0;
        uStack_338 = uVar13 + 1;
        pcVar24 = pcVar1;
        pcVar23 = pcVar22;
      } while (pcVar22 != pcVar1);
    }
    param_1[1] = uStack_340;
    *param_1 = uStack_348;
    param_1[2] = uStack_338;
    pcVar22 = pcVar24;
    if (*param_1 == 0x8000000000000000) {
LAB_101265024:
      lVar28 = ((ulong)((long)pcVar1 - (long)pcVar22) >> 5) + 1;
      while (lVar28 = lVar28 + -1, lVar28 != 0) {
        FUN_100e077ec(pcVar22);
        pcVar22 = pcVar22 + 0x20;
      }
      if (lVar3 != 0) {
        _free(pcVar4);
      }
    }
    else {
      uStack_358 = param_1[1];
      uStack_360 = *param_1;
      uStack_350 = param_1[2];
      uVar13 = FUN_100fbc738(&pcStack_388);
      if (uVar13 != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar13;
        FUN_100ca4b40(&uStack_360);
      }
    }
  }
  else {
    uVar13 = FUN_108855b04(param_2,auStack_71,&UNK_10b20a1e0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar13;
  }
  return;
}

