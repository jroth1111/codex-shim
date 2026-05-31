
/* WARNING: Removing unreachable block (ram,0x000101528038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_101527708(undefined8 param_1,char *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  undefined1 uVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  long *extraout_x9;
  long *plVar18;
  long *plVar19;
  byte bVar20;
  char *pcVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *unaff_x24;
  byte bVar28;
  char *pcVar29;
  long lVar30;
  ulong uVar31;
  byte bVar32;
  ulong uVar33;
  long lVar34;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  long lVar35;
  long *plStack_2a8;
  long *plStack_280;
  long *plStack_270;
  ulong uStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 auStack_250 [16];
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  long lStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  byte bStack_1c8;
  byte bStack_1c7;
  undefined1 uStack_1c6;
  byte bStack_1c5;
  uint uStack_1c4;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  long lStack_1b0;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  long lStack_119;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  undefined1 auStack_81 [17];
  
  pauVar9 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar9[1][0] == '\x01') {
    auStack_250 = *pauVar9;
  }
  else {
    auStack_250 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar9 + 8) = auStack_250._8_8_;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = auStack_250._0_8_ + 1;
  plStack_270 = (long *)&UNK_108c56c70;
  uStack_268 = 0;
  lStack_260 = 0;
  lStack_258 = 0;
  pcVar21 = param_2;
LAB_101527794:
  do {
    pcVar11 = pcVar21;
    if (pcVar11 == param_2 + param_3 * 0x40) {
LAB_101528a54:
      extraout_x9[2] = uStack_268;
      extraout_x9[1] = (long)plStack_270;
      extraout_x9[4] = lStack_258;
      extraout_x9[3] = lStack_260;
      *(undefined1 (*) [16])(extraout_x9 + 5) = auStack_250;
      *extraout_x9 = 2;
      return;
    }
    pcVar21 = pcVar11 + 0x40;
  } while (*pcVar11 == '\x16');
  func_0x0001004e0914(&lStack_e0,pcVar11);
  plVar26 = (long *)CONCAT71(uStack_d7,bStack_d8);
  plVar4 = (long *)CONCAT71(uStack_cf,uStack_d0);
  plStack_280 = (long *)CONCAT71(uStack_c7,uStack_c8);
  if (lStack_e0 != 2) {
    plStack_238 = (long *)CONCAT71(uStack_b7,uStack_b8);
    plStack_240 = (long *)CONCAT71(uStack_bf,uStack_c0);
    plStack_228 = (long *)CONCAT71(uStack_a7,bStack_a8);
    plStack_230 = (long *)CONCAT71(uStack_af,uStack_b0);
    plStack_218 = (long *)CONCAT71(uStack_97,uStack_98);
    plStack_220 = (long *)CONCAT71(uStack_9f,uStack_a0);
    lStack_210 = lStack_90;
    plVar19 = plVar26;
    lVar22 = lStack_e0;
    plVar18 = plVar4;
    goto LAB_101528c04;
  }
  if (plVar26 != (long *)0x8000000000000000) {
    if (pcVar11[0x20] != '\x14') {
      if (pcVar11[0x20] == '\x15') {
        lVar34 = *(long *)(pcVar11 + 0x30);
        lVar22 = *(long *)(pcVar11 + 0x38) * 0x40;
        lVar35 = lVar34 + lVar22;
        plStack_1a0 = (long *)0x0;
        if (*(long *)(pcVar11 + 0x38) == 0) {
          plVar19 = (long *)0x0;
          bStack_1c8 = 3;
          bVar13 = 1;
          bStack_1c5 = 2;
          uStack_1c6 = 2;
          bStack_1c7 = 2;
          plStack_1f8 = (long *)0x0;
          goto LAB_101528084;
        }
        lVar30 = 0;
        bVar7 = false;
        plStack_2a8 = (long *)0x0;
        plVar19 = (long *)((lVar22 - 0x40U >> 6) + 1);
        bVar28 = 4;
        bVar20 = 3;
        bVar13 = 2;
        plVar18 = (long *)0x1;
        unaff_x24 = (long *)0x3;
        bVar32 = 3;
        while( true ) {
          pbVar1 = (byte *)(lVar34 + lVar30);
          pbVar24 = pbVar1 + 0x20;
          bVar3 = *pbVar1;
          if (0xc < bVar3) break;
          if (bVar3 == 1) {
            uVar14 = (uint)*(byte *)(lVar34 + lVar30 + 1);
            if (5 < uVar14) {
              uVar14 = 6;
            }
          }
          else {
            if (bVar3 != 4) {
              if (bVar3 == 0xc) {
                uVar10 = *(undefined8 *)(lVar34 + lVar30 + 0x10);
                uVar12 = *(undefined8 *)(lVar34 + lVar30 + 0x18);
                goto LAB_101527b00;
              }
LAB_101527cec:
              FUN_108855bf0(&lStack_e0,pbVar1,auStack_81,&UNK_10b214648);
              goto LAB_101527b08;
            }
            uVar31 = *(ulong *)(lVar34 + lVar30 + 8);
            if (5 < uVar31) {
              uVar31 = 6;
            }
            uVar14 = (uint)uVar31 & 0xff;
          }
joined_r0x000101527b20:
          if (uVar14 < 3) {
            if (uVar14 == 0) {
              if (bVar13 == 2) {
                if (*pbVar24 == 0) {
                  bVar13 = *(byte *)(lVar34 + lVar30 + 0x21);
                }
                else {
                  FUN_108855bf0(&lStack_e0,pbVar24,auStack_81,&UNK_10b20a560);
                  bVar13 = bStack_d8;
                  if (lStack_e0 != 2) {
                    plStack_1a0 = plStack_2a8;
                    plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
                    bStack_1c8 = bStack_a8;
                    plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
                    plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
                    uStack_1bf = uStack_9f;
                    bStack_1c7 = (byte)uStack_a7;
                    uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
                    bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
                    uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
                    uStack_1c0 = uStack_a0;
                    lStack_1b0 = lStack_90;
                    uStack_1b8 = uStack_98;
                    uStack_1b7 = uStack_97;
                    plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
                    plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
                    lStack_200 = lStack_e0;
                    plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
                    goto LAB_101527f90;
                  }
                }
                goto LAB_1015279e4;
              }
              plStack_1a0 = plStack_2a8;
              FUN_1087e4364(&lStack_e0,&UNK_108ca2209,7);
            }
            else if (uVar14 == 1) {
              if (bVar20 == 3) {
                bVar3 = *pbVar24;
                bVar20 = 2;
                if (bVar3 != 0x10) {
                  if (bVar3 == 0x11) {
                    pcVar11 = *(char **)(lVar34 + lVar30 + 0x28);
                    if (*pcVar11 == '\0') {
                      bVar20 = pcVar11[1];
                      goto LAB_101527c44;
                    }
                    FUN_108855bf0(&lStack_e0,pcVar11,auStack_81,&UNK_10b20a560);
LAB_101527d94:
                    lVar15 = lStack_e0;
                    bVar20 = bStack_d8;
                    if (lStack_e0 != 2) {
                      plStack_148 = (long *)CONCAT17(uStack_b8,uStack_bf);
                      plStack_150 = (long *)CONCAT17(uStack_c0,uStack_c7);
                      plStack_138 = (long *)CONCAT17(bStack_a8,uStack_af);
                      plStack_140 = (long *)CONCAT17(uStack_b0,uStack_b7);
                      uStack_130 = CONCAT17(uStack_a0,uStack_a7);
                      uStack_128 = uStack_9f;
                      lStack_119 = lStack_90;
                      uStack_121 = uStack_98;
                      uStack_120 = uStack_97;
                      plStack_158 = (long *)CONCAT17(uStack_c8,uStack_cf);
                      plStack_160 = (long *)CONCAT17(uStack_d0,uStack_d7);
                    }
                  }
                  else {
                    if (bVar3 == 0x12) goto LAB_1015279e4;
                    if (bVar3 != 0) {
                      FUN_108855bf0(&lStack_e0,pbVar24,auStack_81,&UNK_10b20a560);
                      goto LAB_101527d94;
                    }
                    bVar20 = *(byte *)(lVar34 + lVar30 + 0x21);
LAB_101527c44:
                    lVar15 = 2;
                  }
                  if (lVar15 != 2) {
                    plStack_1a0 = plStack_2a8;
                    plStack_1e0._1_7_ = SUB87(plStack_148,0);
                    plStack_1e0._0_1_ = (undefined1)((ulong)plStack_150 >> 0x38);
                    plStack_1d0._1_7_ = SUB87(plStack_138,0);
                    bStack_1c8 = (byte)((ulong)plStack_138 >> 0x38);
                    plStack_1d8._1_7_ = SUB87(plStack_140,0);
                    plStack_1d8 = (long *)CONCAT71(plStack_1d8._1_7_,
                                                   (char)((ulong)plStack_148 >> 0x38));
                    plStack_1d0._0_1_ = (undefined1)((ulong)plStack_140 >> 0x38);
                    uStack_1bf = uStack_128;
                    bStack_1c7 = (byte)uStack_130;
                    uStack_1c6 = (undefined1)((ulong)uStack_130 >> 8);
                    bStack_1c5 = (byte)((ulong)uStack_130 >> 0x10);
                    uStack_1c4 = (uint)((ulong)uStack_130 >> 0x18);
                    uStack_1c0 = (undefined1)((ulong)uStack_130 >> 0x38);
                    lStack_1b0 = lStack_119;
                    uStack_1b8 = uStack_121;
                    uStack_1b7 = uStack_120;
                    plStack_1f0._1_7_ = SUB87(plStack_158,0);
                    plStack_1e8._0_1_ = (undefined1)((ulong)plStack_158 >> 0x38);
                    plStack_1e8 = (long *)CONCAT71((int7)plStack_150,plStack_1e8._0_1_);
                    plStack_1f0._0_1_ = (undefined1)((ulong)plStack_160 >> 0x38);
                    plStack_1f8 = (long *)CONCAT71((int7)plStack_160,bVar20);
                    lStack_200 = lVar15;
                    goto LAB_101527f90;
                  }
                }
                goto LAB_1015279e4;
              }
              plStack_1a0 = plStack_2a8;
              FUN_1087e4364(&lStack_e0,&UNK_108cac516,0x13);
            }
            else {
              if ((int)unaff_x24 == 3) {
                bVar3 = *pbVar24;
                unaff_x24 = (long *)0x2;
                if (bVar3 != 0x10) {
                  if (bVar3 == 0x11) {
                    pcVar11 = *(char **)(lVar34 + lVar30 + 0x28);
                    if (*pcVar11 == '\0') {
                      bVar3 = pcVar11[1];
                      goto LAB_101527c6c;
                    }
                    FUN_108855bf0(&lStack_e0,pcVar11,auStack_81,&UNK_10b20a560);
LAB_101527dec:
                    unaff_x24 = (long *)(ulong)bStack_d8;
                    lVar15 = lStack_e0;
                    if (lStack_e0 != 2) {
                      plStack_148 = (long *)CONCAT17(uStack_b8,uStack_bf);
                      plStack_150 = (long *)CONCAT17(uStack_c0,uStack_c7);
                      plStack_138 = (long *)CONCAT17(bStack_a8,uStack_af);
                      plStack_140 = (long *)CONCAT17(uStack_b0,uStack_b7);
                      uStack_130 = CONCAT17(uStack_a0,uStack_a7);
                      uStack_128 = uStack_9f;
                      lStack_119 = lStack_90;
                      uStack_121 = uStack_98;
                      uStack_120 = uStack_97;
                      plStack_158 = (long *)CONCAT17(uStack_c8,uStack_cf);
                      plStack_160 = (long *)CONCAT17(uStack_d0,uStack_d7);
                    }
                  }
                  else {
                    if (bVar3 == 0x12) goto LAB_1015279e4;
                    if (bVar3 != 0) {
                      FUN_108855bf0(&lStack_e0,pbVar24,auStack_81,&UNK_10b20a560);
                      goto LAB_101527dec;
                    }
                    bVar3 = *(byte *)(lVar34 + lVar30 + 0x21);
LAB_101527c6c:
                    unaff_x24 = (long *)(ulong)bVar3;
                    lVar15 = 2;
                  }
                  if (lVar15 != 2) {
                    plStack_1a0 = plStack_2a8;
                    plStack_1e0._1_7_ = SUB87(plStack_148,0);
                    plStack_1e0._0_1_ = (undefined1)((ulong)plStack_150 >> 0x38);
                    plStack_1d0._1_7_ = SUB87(plStack_138,0);
                    bStack_1c8 = (byte)((ulong)plStack_138 >> 0x38);
                    plStack_1d8._1_7_ = SUB87(plStack_140,0);
                    plStack_1d8 = (long *)CONCAT71(plStack_1d8._1_7_,
                                                   (char)((ulong)plStack_148 >> 0x38));
                    plStack_1d0._0_1_ = (undefined1)((ulong)plStack_140 >> 0x38);
                    uStack_1bf = uStack_128;
                    bStack_1c7 = (byte)uStack_130;
                    uStack_1c6 = (undefined1)((ulong)uStack_130 >> 8);
                    bStack_1c5 = (byte)((ulong)uStack_130 >> 0x10);
                    uStack_1c4 = (uint)((ulong)uStack_130 >> 0x18);
                    uStack_1c0 = (undefined1)((ulong)uStack_130 >> 0x38);
                    lStack_1b0 = lStack_119;
                    uStack_1b8 = uStack_121;
                    uStack_1b7 = uStack_120;
                    plStack_1f0._1_7_ = SUB87(plStack_158,0);
                    plStack_1e8._0_1_ = (undefined1)((ulong)plStack_158 >> 0x38);
                    plStack_1e8 = (long *)CONCAT71((int7)plStack_150,plStack_1e8._0_1_);
                    plStack_1f0._0_1_ = (undefined1)((ulong)plStack_160 >> 0x38);
                    plStack_1f8 = (long *)CONCAT71((int7)plStack_160,(char)unaff_x24);
                    lStack_200 = lVar15;
                    goto LAB_101527f90;
                  }
                }
                goto LAB_1015279e4;
              }
              plStack_1a0 = plStack_2a8;
              FUN_1087e4364(&lStack_e0,&UNK_108cac529,0x12);
            }
            goto LAB_1015286d0;
          }
          if (4 < uVar14) {
            if (uVar14 != 5) goto LAB_1015279e4;
            if (bVar7) {
              plStack_1a0 = plStack_2a8;
              FUN_1087e4364(&lStack_e0,&UNK_108ca26d4,5);
              plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
              plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
              bStack_1c7 = (byte)uStack_a7;
              uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
              bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
              uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
              plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
              plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
              plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
              plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
              lStack_1b0 = lStack_90;
              lStack_200 = lStack_e0;
              bStack_1c8 = bStack_a8;
              uStack_1c0 = uStack_a0;
              uStack_1bf = uStack_9f;
              uStack_1b8 = uStack_98;
              uStack_1b7 = uStack_97;
              plVar19 = plStack_198;
              plVar23 = plStack_190;
              goto joined_r0x000101528734;
            }
            bVar3 = *pbVar24;
            if (bVar3 == 0x10) {
LAB_1015279b0:
              bStack_d8 = 0;
              uStack_d7 = 0;
            }
            else {
              if (bVar3 == 0x11) {
                pbVar24 = *(byte **)(lVar34 + lVar30 + 0x28);
              }
              else if (bVar3 == 0x12) goto LAB_1015279b0;
              func_0x00010144870c(&lStack_e0,pbVar24);
              if (lStack_e0 != 2) {
                plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
                plStack_160 = (long *)CONCAT71(uStack_d7,bStack_d8);
                plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
                plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
                plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
                plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
                uStack_1c0 = uStack_a0;
                uStack_1bf = uStack_9f;
                bStack_1c8 = bStack_a8;
                bStack_1c7 = (byte)uStack_a7;
                uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
                bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
                uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
                lStack_1b0 = lStack_90;
                uStack_1b8 = uStack_98;
                uStack_1b7 = uStack_97;
                lVar22 = lStack_e0;
                plStack_1f8 = plStack_160;
                goto LAB_101528bd0;
              }
            }
            plStack_190 = (long *)CONCAT71(uStack_cf,uStack_d0);
            plStack_198 = (long *)CONCAT71(uStack_d7,bStack_d8);
            plStack_180 = (long *)CONCAT71(uStack_bf,uStack_c0);
            plStack_188 = (long *)CONCAT71(uStack_c7,uStack_c8);
            plStack_170 = (long *)CONCAT71(uStack_af,uStack_b0);
            plStack_178 = (long *)CONCAT71(uStack_b7,uStack_b8);
            plStack_2a8 = (long *)0x1;
            bVar7 = true;
            plStack_160 = plStack_198;
            plStack_158 = plStack_190;
            plStack_150 = plStack_188;
            plStack_148 = plStack_180;
            plStack_140 = plStack_178;
            plStack_138 = plStack_170;
            goto LAB_1015279e4;
          }
          if (uVar14 != 3) {
            if (bVar32 == 3) {
              bVar3 = *pbVar24;
              bVar32 = 2;
              if (bVar3 != 0x10) {
                if (bVar3 == 0x11) {
                  pcVar11 = *(char **)(lVar34 + lVar30 + 0x28);
                  if (*pcVar11 == '\0') {
                    bVar32 = pcVar11[1];
                    goto LAB_101527cdc;
                  }
                  FUN_108855bf0(&lStack_e0,pcVar11,auStack_81,&UNK_10b20a560);
LAB_101527e40:
                  lVar15 = lStack_e0;
                  bVar32 = bStack_d8;
                  if (lStack_e0 != 2) {
                    plStack_148 = (long *)CONCAT17(uStack_b8,uStack_bf);
                    plStack_150 = (long *)CONCAT17(uStack_c0,uStack_c7);
                    plStack_138 = (long *)CONCAT17(bStack_a8,uStack_af);
                    plStack_140 = (long *)CONCAT17(uStack_b0,uStack_b7);
                    uStack_130 = CONCAT17(uStack_a0,uStack_a7);
                    uStack_128 = uStack_9f;
                    lStack_119 = lStack_90;
                    uStack_121 = uStack_98;
                    uStack_120 = uStack_97;
                    plStack_158 = (long *)CONCAT17(uStack_c8,uStack_cf);
                    plStack_160 = (long *)CONCAT17(uStack_d0,uStack_d7);
                  }
                }
                else {
                  if (bVar3 == 0x12) goto LAB_1015279e4;
                  if (bVar3 != 0) {
                    FUN_108855bf0(&lStack_e0,pbVar24,auStack_81,&UNK_10b20a560);
                    goto LAB_101527e40;
                  }
                  bVar32 = *(byte *)(lVar34 + lVar30 + 0x21);
LAB_101527cdc:
                  lVar15 = 2;
                }
                if (lVar15 != 2) {
                  plStack_1a0 = plStack_2a8;
                  plStack_1e0._1_7_ = SUB87(plStack_148,0);
                  plStack_1e0._0_1_ = (undefined1)((ulong)plStack_150 >> 0x38);
                  plStack_1d0._1_7_ = SUB87(plStack_138,0);
                  bStack_1c8 = (byte)((ulong)plStack_138 >> 0x38);
                  plStack_1d8._1_7_ = SUB87(plStack_140,0);
                  plStack_1d8 = (long *)CONCAT71(plStack_1d8._1_7_,
                                                 (char)((ulong)plStack_148 >> 0x38));
                  plStack_1d0._0_1_ = (undefined1)((ulong)plStack_140 >> 0x38);
                  uStack_1bf = uStack_128;
                  bStack_1c7 = (byte)uStack_130;
                  uStack_1c6 = (undefined1)((ulong)uStack_130 >> 8);
                  bStack_1c5 = (byte)((ulong)uStack_130 >> 0x10);
                  uStack_1c4 = (uint)((ulong)uStack_130 >> 0x18);
                  uStack_1c0 = (undefined1)((ulong)uStack_130 >> 0x38);
                  lStack_1b0 = lStack_119;
                  uStack_1b8 = uStack_121;
                  uStack_1b7 = uStack_120;
                  plStack_1f0._1_7_ = SUB87(plStack_158,0);
                  plStack_1e8._0_1_ = (undefined1)((ulong)plStack_158 >> 0x38);
                  plStack_1e8 = (long *)CONCAT71((int7)plStack_150,plStack_1e8._0_1_);
                  plStack_1f0._0_1_ = (undefined1)((ulong)plStack_160 >> 0x38);
                  plStack_1f8 = (long *)CONCAT71((int7)plStack_160,bVar32);
                  lStack_200 = lVar15;
                  goto LAB_101527f90;
                }
              }
              goto LAB_1015279e4;
            }
            plStack_1a0 = plStack_2a8;
            FUN_1087e4364(&lStack_e0,&UNK_108cac53b,0x15);
LAB_1015286d0:
            plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
            plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
            bStack_1c8 = bStack_a8;
            bStack_1c7 = (byte)uStack_a7;
            uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
            bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
            uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
            plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
            uStack_1b8 = uStack_98;
            uStack_1b7 = uStack_97;
            uStack_1c0 = uStack_a0;
            uStack_1bf = uStack_9f;
            lStack_1b0 = lStack_90;
            plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
            lStack_200 = lStack_e0;
            plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
            plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
            goto LAB_101527f90;
          }
          if (bVar28 != 4) {
            plStack_1a0 = plStack_2a8;
            FUN_1087e4364(&lStack_e0,&UNK_108cac280,0x1b);
            goto LAB_1015286d0;
          }
          bVar3 = *pbVar24;
          bVar28 = 3;
          if (bVar3 != 0x10) {
            if (bVar3 == 0x11) {
              pbVar24 = *(byte **)(lVar34 + lVar30 + 0x28);
            }
            else if (bVar3 == 0x12) goto LAB_1015279e4;
            func_0x000101439718(&lStack_e0,pbVar24);
            bVar28 = bStack_d8;
            if (lStack_e0 != 2) {
              plStack_1a0 = plStack_2a8;
              plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
              bStack_1c8 = bStack_a8;
              plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
              plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
              uStack_1bf = uStack_9f;
              bStack_1c7 = (byte)uStack_a7;
              uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
              bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
              uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
              uStack_1c0 = uStack_a0;
              lStack_1b0 = lStack_90;
              uStack_1b8 = uStack_98;
              uStack_1b7 = uStack_97;
              plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
              plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
              plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
              lStack_200 = lStack_e0;
              goto LAB_101527f90;
            }
          }
LAB_1015279e4:
          plVar18 = (long *)((long)plVar18 + 1);
          lVar30 = lVar30 + 0x40;
          if (lVar22 - lVar30 == 0) goto LAB_101527ed8;
        }
        if (bVar3 == 0xd) {
          uVar10 = *(undefined8 *)(lVar34 + lVar30 + 8);
          uVar12 = *(undefined8 *)(lVar34 + lVar30 + 0x10);
LAB_101527b00:
          func_0x000100a5a244(&lStack_e0,uVar10,uVar12);
        }
        else {
          if (bVar3 == 0xe) {
            uVar10 = *(undefined8 *)(lVar34 + lVar30 + 0x10);
            uVar12 = *(undefined8 *)(lVar34 + lVar30 + 0x18);
          }
          else {
            if (bVar3 != 0xf) goto LAB_101527cec;
            uVar10 = *(undefined8 *)(lVar34 + lVar30 + 8);
            uVar12 = *(undefined8 *)(lVar34 + lVar30 + 0x10);
          }
          func_0x000100a59cf4(&lStack_e0,uVar10,uVar12);
        }
LAB_101527b08:
        if (lStack_e0 == 2) {
          uVar14 = (uint)bStack_d8;
          goto joined_r0x000101527b20;
        }
        plStack_1a0 = plStack_2a8;
        plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
        bStack_1c8 = bStack_a8;
        plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
        plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
        uStack_1bf = uStack_9f;
        bStack_1c7 = (byte)uStack_a7;
        uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
        bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
        uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
        uStack_1c0 = uStack_a0;
        lStack_1b0 = lStack_90;
        uStack_1b8 = uStack_98;
        uStack_1b7 = uStack_97;
        plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
        plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
        lStack_200 = lStack_e0;
        plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
LAB_101527f90:
        plVar19 = plStack_198;
        plVar23 = plStack_190;
        if (bVar7) {
joined_r0x000101528734:
          plStack_198 = plVar19;
          plStack_190 = plVar23;
          if ((plVar19 != (long *)0x0) && (plVar23 != (long *)0x0)) {
            if (plStack_180 != (long *)0x0) {
              unaff_x24 = plVar19 + 1;
              lVar22 = *plVar19;
              uVar31 = CONCAT17(-(-1 < lVar22),
                                CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                       0x8080808080808080;
              plVar27 = plVar19;
              plVar25 = plStack_180;
              do {
                while (uVar31 == 0) {
                  lVar22 = *unaff_x24;
                  unaff_x24 = unaff_x24 + 1;
                  plVar27 = plVar27 + -0x20;
                  uVar31 = CONCAT17(-(-1 < lVar22),
                                    CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar22
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                           0x8080808080808080;
                }
                uVar33 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) & 0x78;
                if (*(long *)((long)plVar27 + uVar33 * -4 + -0x20) != 0) {
                  _free(*(undefined8 *)((long)plVar27 + uVar33 * -4 + -0x18));
                }
                uVar31 = uVar31 - 1 & uVar31;
                plVar25 = (long *)((long)plVar25 - 1);
              } while (plVar25 != (long *)0x0);
            }
            if ((long)plVar23 * 0x21 != -0x29) {
              _free(plVar19 + (long)plVar23 * -4 + -4);
            }
          }
        }
        lVar22 = lStack_200;
        if (lStack_200 != 2) goto LAB_101528bd0;
        uVar31 = lVar35 - (lVar34 + lVar30 + 0x40);
        plVar19 = plVar18;
        if (uVar31 == 0) goto LAB_10152821c;
        goto LAB_101528778;
      }
      FUN_108855bf0(&lStack_e0,pcVar11 + 0x20,auStack_81,&UNK_10b213ae8);
      plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
      plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
      bStack_1c8 = bStack_a8;
      bStack_1c7 = (byte)uStack_a7;
      uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
      bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
      uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
      plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
      uStack_1b8 = uStack_98;
      uStack_1b7 = uStack_97;
      uStack_1c0 = uStack_a0;
      uStack_1bf = uStack_9f;
      lStack_1b0 = lStack_90;
      plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
      lStack_200 = lStack_e0;
      plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
      plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
      goto LAB_1015288b0;
    }
    pcVar16 = *(char **)(pcVar11 + 0x30);
    lVar22 = *(long *)(pcVar11 + 0x38);
    if (lVar22 == 0) {
      plVar19 = (long *)0x0;
      bVar13 = 0;
      bVar7 = true;
      pcVar11 = pcVar16;
LAB_101527ea0:
      bVar20 = 2;
      bVar32 = 3;
      uStack_1c6 = 2;
      goto LAB_101528114;
    }
    pcVar29 = pcVar16 + 0x20;
    if (*pcVar16 == '\0') {
      bVar13 = pcVar16[1];
LAB_101527860:
      plVar19 = (long *)0x1;
      pcVar11 = pcVar16 + lVar22 * 0x20;
      bVar7 = bVar13 == 2;
      if (pcVar29 == pcVar11) goto LAB_101527ea0;
      cVar36 = *pcVar29;
      if (cVar36 == '\x10') {
LAB_10152789c:
        bVar20 = 2;
      }
      else {
        if (cVar36 == '\x11') {
          pcVar29 = *(char **)(pcVar16 + 0x28);
          if (*pcVar29 == '\0') {
            bVar32 = pcVar29[1];
          }
          else {
            FUN_108855bf0(&lStack_e0,pcVar29,auStack_81,&UNK_10b20a560);
LAB_1015288f0:
            bVar32 = bStack_d8;
            if (lStack_e0 != 2) {
              lStack_119 = lStack_90;
              plStack_160 = (long *)CONCAT17(uStack_d0,uStack_d7);
              plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
              bStack_1c8 = bStack_a8;
              plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
              plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
              uStack_1bf = uStack_9f;
              bStack_1c7 = (byte)uStack_a7;
              uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
              bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
              uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
              uStack_1c0 = uStack_a0;
              lStack_1b0 = lStack_90;
              uStack_1b8 = uStack_98;
              uStack_1b7 = uStack_97;
              plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
              plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
              plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
              lVar22 = lStack_e0;
              goto LAB_101528bd0;
            }
          }
        }
        else {
          if (cVar36 == '\x12') goto LAB_10152789c;
          if (cVar36 != '\0') {
            FUN_108855bf0(&lStack_e0,pcVar29,auStack_81,&UNK_10b20a560);
            goto LAB_1015288f0;
          }
          bVar32 = pcVar16[0x21];
        }
        bVar20 = 2;
        if (bVar32 != 3) {
          bVar20 = bVar32;
        }
      }
      if (pcVar16 + 0x40 == pcVar11) {
        plVar19 = (long *)0x2;
        uStack_1c6 = 2;
        bVar32 = 3;
        goto LAB_101528114;
      }
      cVar36 = pcVar16[0x40];
      if (cVar36 != '\x10') {
        if (cVar36 == '\x11') {
          pcVar29 = *(char **)(pcVar16 + 0x48);
          if (*pcVar29 == '\0') {
            bVar32 = pcVar29[1];
            goto LAB_1015280dc;
          }
          FUN_108855bf0(&lStack_e0,pcVar29,auStack_81,&UNK_10b20a560);
LAB_101528968:
          uVar14 = (uint)bStack_d8;
          lVar22 = lStack_e0;
          if (lStack_e0 != 2) {
            plStack_148 = (long *)CONCAT17(uStack_b8,uStack_bf);
            plStack_150 = (long *)CONCAT17(uStack_c0,uStack_c7);
            plStack_138 = (long *)CONCAT17(bStack_a8,uStack_af);
            plStack_140 = (long *)CONCAT17(uStack_b0,uStack_b7);
            uStack_130 = CONCAT17(uStack_a0,uStack_a7);
            uStack_128 = uStack_9f;
            lStack_119 = lStack_90;
            uStack_121 = uStack_98;
            uStack_120 = uStack_97;
            plStack_158 = (long *)CONCAT17(uStack_c8,uStack_cf);
            plStack_160 = (long *)CONCAT17(uStack_d0,uStack_d7);
          }
        }
        else {
          if (cVar36 == '\x12') goto LAB_1015278c4;
          if (cVar36 != '\0') {
            FUN_108855bf0(&lStack_e0,pcVar16 + 0x40,auStack_81,&UNK_10b20a560);
            goto LAB_101528968;
          }
          bVar32 = pcVar16[0x41];
LAB_1015280dc:
          uVar14 = (uint)bVar32;
          lVar22 = 2;
        }
        if (lVar22 == 2) {
          uVar5 = 2;
          if (uVar14 != 3) {
            uVar5 = (char)uVar14;
          }
          goto joined_r0x0001015278d0;
        }
LAB_101528b18:
        plStack_1e0._1_7_ = SUB87(plStack_148,0);
        plStack_1e0._0_1_ = (undefined1)((ulong)plStack_150 >> 0x38);
        plStack_1d0._1_7_ = SUB87(plStack_138,0);
        bStack_1c8 = (byte)((ulong)plStack_138 >> 0x38);
        plStack_1d8._1_7_ = SUB87(plStack_140,0);
        plStack_1d8 = (long *)CONCAT71(plStack_1d8._1_7_,(char)((ulong)plStack_148 >> 0x38));
        plStack_1d0._0_1_ = (undefined1)((ulong)plStack_140 >> 0x38);
        uStack_1bf = uStack_128;
        bStack_1c7 = (byte)uStack_130;
        uStack_1c6 = (undefined1)((ulong)uStack_130 >> 8);
        bStack_1c5 = (byte)((ulong)uStack_130 >> 0x10);
        uStack_1c4 = (uint)((ulong)uStack_130 >> 0x18);
        uStack_1c0 = (undefined1)((ulong)uStack_130 >> 0x38);
        lStack_1b0 = lStack_119;
        uStack_1b8 = uStack_121;
        uStack_1b7 = uStack_120;
        plStack_1f0._1_7_ = SUB87(plStack_158,0);
        plStack_1e8._0_1_ = (undefined1)((ulong)plStack_158 >> 0x38);
        plStack_1e8 = (long *)CONCAT71((int7)plStack_150,plStack_1e8._0_1_);
        plStack_1f0._0_1_ = (undefined1)((ulong)plStack_160 >> 0x38);
        plStack_1f8 = (long *)CONCAT71((int7)plStack_160,(char)uVar14);
        goto LAB_101528bd0;
      }
LAB_1015278c4:
      uVar5 = 2;
joined_r0x0001015278d0:
      if (pcVar16 + 0x60 == pcVar11) {
        plVar19 = (long *)0x3;
        bVar32 = 3;
        uStack_1c6 = uVar5;
LAB_101528114:
        unaff_x24 = (long *)0x2;
        pcVar16 = pcVar11;
LAB_101528118:
        plVar18 = (long *)0x0;
        pcVar11 = pcVar16;
      }
      else {
        pcVar29 = pcVar16 + 0x60;
        cVar36 = *pcVar29;
        bVar32 = 3;
        if ((cVar36 != '\x10') && (cVar36 != '\x12')) {
          if (cVar36 == '\x11') {
            pcVar29 = *(char **)(pcVar16 + 0x68);
          }
          func_0x000101439718(&lStack_e0,pcVar29);
          bVar32 = bStack_d8;
          if (lStack_e0 != 2) {
            plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
            bStack_1c8 = bStack_a8;
            plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
            plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
            uStack_1bf = uStack_9f;
            bStack_1c7 = (byte)uStack_a7;
            uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
            bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
            uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
            uStack_1c0 = uStack_a0;
            lStack_1b0 = lStack_90;
            uStack_1b8 = uStack_98;
            uStack_1b7 = uStack_97;
            plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
            plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
            plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
            lVar22 = lStack_e0;
            goto LAB_101528bd0;
          }
        }
        if (pcVar16 + 0x80 == pcVar11) {
          plVar19 = (long *)0x4;
          uStack_1c6 = uVar5;
          goto LAB_101528114;
        }
        cVar36 = pcVar16[0x80];
        if (cVar36 == '\x10') {
LAB_101527938:
          unaff_x24 = (long *)0x2;
        }
        else {
          if (cVar36 == '\x11') {
            pcVar29 = *(char **)(pcVar16 + 0x88);
            if (*pcVar29 == '\0') {
              bVar28 = pcVar29[1];
              goto LAB_101528498;
            }
            FUN_108855bf0(&lStack_e0,pcVar29,auStack_81,&UNK_10b20a560);
LAB_101528a18:
            uVar14 = (uint)bStack_d8;
            lVar22 = lStack_e0;
            if (lStack_e0 != 2) {
              plStack_148 = (long *)CONCAT17(uStack_b8,uStack_bf);
              plStack_150 = (long *)CONCAT17(uStack_c0,uStack_c7);
              plStack_138 = (long *)CONCAT17(bStack_a8,uStack_af);
              plStack_140 = (long *)CONCAT17(uStack_b0,uStack_b7);
              uStack_130 = CONCAT17(uStack_a0,uStack_a7);
              uStack_128 = uStack_9f;
              lStack_119 = lStack_90;
              uStack_121 = uStack_98;
              uStack_120 = uStack_97;
              plStack_158 = (long *)CONCAT17(uStack_c8,uStack_cf);
              plStack_160 = (long *)CONCAT17(uStack_d0,uStack_d7);
            }
          }
          else {
            if (cVar36 == '\x12') goto LAB_101527938;
            if (cVar36 != '\0') {
              FUN_108855bf0(&lStack_e0,pcVar16 + 0x80,auStack_81,&UNK_10b20a560);
              goto LAB_101528a18;
            }
            bVar28 = pcVar16[0x81];
LAB_101528498:
            uVar14 = (uint)bVar28;
            lVar22 = 2;
          }
          if (lVar22 != 2) goto LAB_101528b18;
          uVar2 = 2;
          if (uVar14 != 3) {
            uVar2 = uVar14;
          }
          unaff_x24 = (long *)(ulong)uVar2;
        }
        if (pcVar16 + 0xa0 == pcVar11) {
          plVar19 = (long *)0x5;
          pcVar16 = pcVar11;
          uStack_1c6 = uVar5;
          goto LAB_101528118;
        }
        plVar18 = (long *)0x0;
        pcVar29 = pcVar16 + 0xa0;
        cVar36 = *pcVar29;
        if ((cVar36 != '\x10') && (cVar36 != '\x12')) {
          if (cVar36 == '\x11') {
            pcVar29 = *(char **)(pcVar16 + 0xa8);
          }
          func_0x00010144870c(&lStack_e0,pcVar29);
          if (lStack_e0 != 2) {
            plStack_108 = (long *)CONCAT71(uStack_bf,uStack_c0);
            plStack_160 = (long *)CONCAT71(uStack_c7,uStack_c8);
            plStack_f8 = (long *)CONCAT71(uStack_af,uStack_b0);
            plStack_100 = (long *)CONCAT71(uStack_b7,uStack_b8);
            plStack_f0 = (long *)CONCAT71(uStack_a7,bStack_a8);
            uStack_1b8 = uStack_98;
            uStack_1b7 = uStack_97;
            uStack_1c0 = uStack_a0;
            uStack_1bf = uStack_9f;
            lStack_1b0 = lStack_90;
            plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
            plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
            bStack_1c8 = bStack_a8;
            bStack_1c7 = (byte)uStack_a7;
            uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
            bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
            uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
            plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
            plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
            plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
            plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
            lVar22 = lStack_e0;
            plStack_110 = plStack_160;
            goto LAB_101528bd0;
          }
          plVar18 = (long *)CONCAT71(uStack_d7,bStack_d8);
        }
        pcVar16 = pcVar16 + 0xc0;
        plVar19 = (long *)0x6;
        plStack_180 = (long *)CONCAT71(uStack_af,uStack_b0);
        plStack_198 = (long *)CONCAT71(uStack_c7,uStack_c8);
        plStack_1a0 = (long *)CONCAT71(uStack_cf,uStack_d0);
        plStack_188 = (long *)CONCAT71(uStack_b7,uStack_b8);
        plStack_190 = (long *)CONCAT71(uStack_bf,uStack_c0);
        plStack_110 = plStack_1a0;
        plStack_108 = plStack_198;
        plStack_100 = plStack_190;
        plStack_f8 = plStack_188;
        plStack_f0 = plStack_180;
        uStack_1c6 = uVar5;
      }
      plVar27 = plStack_190;
      plVar23 = plStack_1a0;
      plStack_1d0 = plStack_180;
      plStack_1e8 = plStack_198;
      plStack_1f0 = plStack_1a0;
      plStack_1d8 = plStack_188;
      plStack_1e0 = plStack_190;
      bStack_1c5 = (byte)unaff_x24;
      uStack_1c4 = CONCAT31(uStack_1c4._1_3_,bVar7 | bVar13) & 0xffffff01;
      lStack_200 = 2;
      bStack_1c8 = bVar32;
      bStack_1c7 = bVar20;
      plStack_1f8 = plVar18;
      if ((long)pcVar11 - (long)pcVar16 == 0) goto LAB_10152821c;
      plStack_160 = plVar19;
      FUN_1087e427c(&lStack_e0,(long)plVar19 + ((ulong)((long)pcVar11 - (long)pcVar16) >> 5),
                    &plStack_160,&UNK_10b23a1b0);
      if (lStack_e0 == 2) goto LAB_10152821c;
      plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
      plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
      bStack_1c8 = bStack_a8;
      bStack_1c7 = (byte)uStack_a7;
      uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
      bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
      uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
      plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
      uStack_1b8 = uStack_98;
      uStack_1b7 = uStack_97;
      uStack_1c0 = uStack_a0;
      uStack_1bf = uStack_9f;
      lStack_1b0 = lStack_90;
      plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
      lStack_200 = lStack_e0;
      plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
      plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
      if ((plVar18 == (long *)0x0) || (plVar23 == (long *)0x0)) goto LAB_1015288b0;
      if (plVar27 != (long *)0x0) {
        plVar19 = plVar18 + 1;
        lVar22 = *plVar18;
        uVar31 = CONCAT17(-(-1 < lVar22),
                          CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar22
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
                 0x8080808080808080;
        unaff_x24 = plVar18;
        do {
          while (uVar31 == 0) {
            lVar22 = *plVar19;
            plVar19 = plVar19 + 1;
            unaff_x24 = unaff_x24 + -0x20;
            uVar31 = CONCAT17(-(-1 < lVar22),
                              CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                     0x8080808080808080;
          }
          uVar33 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
          uVar33 = LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) & 0x78;
          if (*(long *)((long)unaff_x24 + uVar33 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)unaff_x24 + uVar33 * -4 + -0x18));
          }
          uVar31 = uVar31 - 1 & uVar31;
          plVar27 = (long *)((long)plVar27 - 1);
        } while (plVar27 != (long *)0x0);
      }
      goto LAB_101528894;
    }
    FUN_108855bf0(&lStack_e0,pcVar16,auStack_81,&UNK_10b20a560);
    bVar13 = bStack_d8;
    if (lStack_e0 == 2) goto LAB_101527860;
    plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
    bStack_1c8 = bStack_a8;
    plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
    plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
    uStack_1bf = uStack_9f;
    bStack_1c7 = (byte)uStack_a7;
    uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
    bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
    uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
    uStack_1c0 = uStack_a0;
    lStack_1b0 = lStack_90;
    uStack_1b8 = uStack_98;
    uStack_1b7 = uStack_97;
    plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
    plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
    plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
    lVar22 = lStack_e0;
    goto LAB_101528bd0;
  }
  goto LAB_101528a54;
LAB_101527ed8:
  bVar13 = bVar13 == 2 | bVar13;
  bStack_1c7 = 2;
  if (bVar20 != 3) {
    bStack_1c7 = bVar20;
  }
  uStack_1c6 = 2;
  if ((int)unaff_x24 != 3) {
    uStack_1c6 = (char)unaff_x24;
  }
  bStack_1c8 = 3;
  if (bVar28 != 4) {
    bStack_1c8 = bVar28;
  }
  bStack_1c5 = 2;
  if (bVar32 != 3) {
    bStack_1c5 = bVar32;
  }
  lVar34 = lVar35;
  if (bVar7) {
    plStack_108 = plStack_188;
    plStack_110 = plStack_190;
    plStack_f8 = plStack_178;
    plStack_100 = plStack_180;
    plStack_f0 = plStack_170;
    plStack_1f8 = plStack_198;
  }
  else {
    plStack_1f8 = (long *)0x0;
  }
LAB_101528084:
  plStack_1e8 = plStack_108;
  plStack_1f0 = plStack_110;
  plStack_1d8 = plStack_f8;
  plStack_1e0 = plStack_100;
  plStack_1d0 = plStack_f0;
  uStack_1c4 = CONCAT31(uStack_1c4._1_3_,bVar13) & 0xffffff01;
  lStack_200 = 2;
  uVar31 = lVar35 - lVar34;
  if (uVar31 != 0) {
LAB_101528778:
    plVar27 = plStack_1e0;
    plVar23 = plStack_1f0;
    plVar18 = plStack_1f8;
    plStack_160 = plVar19;
    FUN_1087e427c(&lStack_e0,(long)plVar19 + (uVar31 >> 6),&plStack_160,&UNK_10b23a190);
    if (lStack_e0 != 2) {
      plStack_1d8 = (long *)CONCAT71(uStack_b7,uStack_b8);
      plStack_1e0 = (long *)CONCAT71(uStack_bf,uStack_c0);
      bStack_1c8 = bStack_a8;
      bStack_1c7 = (byte)uStack_a7;
      uStack_1c6 = (undefined1)((uint7)uStack_a7 >> 8);
      bStack_1c5 = (byte)((uint7)uStack_a7 >> 0x10);
      uStack_1c4 = (uint)((uint7)uStack_a7 >> 0x18);
      plStack_1d0 = (long *)CONCAT71(uStack_af,uStack_b0);
      uStack_1b8 = uStack_98;
      uStack_1b7 = uStack_97;
      uStack_1c0 = uStack_a0;
      uStack_1bf = uStack_9f;
      lStack_1b0 = lStack_90;
      plStack_1f8 = (long *)CONCAT71(uStack_d7,bStack_d8);
      lStack_200 = lStack_e0;
      plStack_1e8 = (long *)CONCAT71(uStack_c7,uStack_c8);
      plStack_1f0 = (long *)CONCAT71(uStack_cf,uStack_d0);
      if ((plVar18 != (long *)0x0) && (plVar23 != (long *)0x0)) {
        if (plVar27 != (long *)0x0) {
          plVar19 = plVar18 + 1;
          lVar22 = *plVar18;
          uVar31 = CONCAT17(-(-1 < lVar22),
                            CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                   0x8080808080808080;
          unaff_x24 = plVar18;
          do {
            while (uVar31 == 0) {
              lVar22 = *plVar19;
              plVar19 = plVar19 + 1;
              unaff_x24 = unaff_x24 + -0x20;
              uVar31 = CONCAT17(-(-1 < lVar22),
                                CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                       0x8080808080808080;
            }
            uVar33 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar33 = LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) & 0x78;
            if (*(long *)((long)unaff_x24 + uVar33 * -4 + -0x20) != 0) {
              _free(*(undefined8 *)((long)unaff_x24 + uVar33 * -4 + -0x18));
            }
            uVar31 = uVar31 - 1 & uVar31;
            plVar27 = (long *)((long)plVar27 - 1);
          } while (plVar27 != (long *)0x0);
        }
LAB_101528894:
        if ((long)plVar23 * 0x21 != -0x29) {
          _free(plVar18 + (long)plVar23 * -4 + -4);
        }
      }
LAB_1015288b0:
      lVar22 = lStack_200;
      if (lStack_200 != 2) {
LAB_101528bd0:
        plVar18 = plStack_1f0;
        plVar19 = plStack_1f8;
        plStack_280 = plStack_1e8;
        plStack_238 = plStack_1d8;
        plStack_240 = plStack_1e0;
        plStack_228 = (long *)CONCAT44(uStack_1c4,
                                       CONCAT13(bStack_1c5,
                                                CONCAT12(uStack_1c6,CONCAT11(bStack_1c7,bStack_1c8))
                                               ));
        plStack_230 = plStack_1d0;
        plStack_218 = (long *)CONCAT71(uStack_1b7,uStack_1b8);
        plStack_220 = (long *)CONCAT71(uStack_1bf,uStack_1c0);
        lStack_210 = lStack_1b0;
        if (plVar26 != (long *)0x0) {
          _free(plVar4);
        }
LAB_101528c04:
        extraout_x9[5] = (long)plStack_238;
        extraout_x9[4] = (long)plStack_240;
        extraout_x9[7] = (long)plStack_228;
        extraout_x9[6] = (long)plStack_230;
        extraout_x9[9] = (long)plStack_218;
        extraout_x9[8] = (long)plStack_220;
        extraout_x9[10] = lStack_210;
        *extraout_x9 = lVar22;
        extraout_x9[1] = (long)plVar19;
        extraout_x9[2] = (long)plVar18;
        extraout_x9[3] = (long)plStack_280;
        FUN_100cd61f0(&plStack_270);
        return;
      }
    }
  }
LAB_10152821c:
  plStack_238 = plStack_1f0;
  plStack_240 = plStack_1f8;
  plStack_228 = plStack_1e0;
  plStack_230 = plStack_1e8;
  plStack_218 = plStack_1d0;
  plStack_220 = plStack_1d8;
  lStack_210 = CONCAT44(uStack_1c4,
                        CONCAT13(bStack_1c5,CONCAT12(uStack_1c6,CONCAT11(bStack_1c7,bStack_1c8))));
  uVar31 = FUN_100e8dd9c(auStack_250._0_8_,auStack_250._8_8_,plVar4,plStack_280);
  if (lStack_260 == 0) {
    func_0x00010891ea4c(&plStack_270,1,auStack_250,1);
  }
  uVar6 = uStack_268;
  plVar19 = plStack_270;
  bVar7 = false;
  lVar22 = 0;
  bVar13 = (byte)(uVar31 >> 0x38);
  bVar20 = bVar13 >> 1;
  uVar31 = uVar31 & uStack_268;
  lVar35 = *(long *)((long)plStack_270 + uVar31);
  uVar33 = CONCAT17(-((byte)((ulong)lVar35 >> 0x38) == bVar20),
                    CONCAT16(-((byte)((ulong)lVar35 >> 0x30) == bVar20),
                             CONCAT15(-((byte)((ulong)lVar35 >> 0x28) == bVar20),
                                      CONCAT14(-((byte)((ulong)lVar35 >> 0x20) == bVar20),
                                               CONCAT13(-((byte)((ulong)lVar35 >> 0x18) == bVar20),
                                                        CONCAT12(-((byte)((ulong)lVar35 >> 0x10) ==
                                                                  bVar20),CONCAT11(-((byte)((ulong)
                                                  lVar35 >> 8) == bVar20),-((byte)lVar35 == bVar20))
                                                  )))))) & 0x8080808080808080;
joined_r0x00010152827c:
  while (uVar33 == 0) {
    cVar36 = (char)((ulong)lVar35 >> 8);
    cVar37 = (char)((ulong)lVar35 >> 0x10);
    cVar38 = (char)((ulong)lVar35 >> 0x18);
    cVar39 = (char)((ulong)lVar35 >> 0x20);
    cVar40 = (char)((ulong)lVar35 >> 0x28);
    cVar41 = (char)((ulong)lVar35 >> 0x30);
    if (bVar7) {
LAB_1015282f0:
      bVar32 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar35 >> 0x38) == -1),
                                   CONCAT16(-(cVar41 == -1),
                                            CONCAT15(-(cVar40 == -1),
                                                     CONCAT14(-(cVar39 == -1),
                                                              CONCAT13(-(cVar38 == -1),
                                                                       CONCAT12(-(cVar37 == -1),
                                                                                CONCAT11(-(cVar36 ==
                                                                                          -1),-((
                                                  char)lVar35 == -1)))))))),1);
      if ((bVar32 & 1) != 0) {
        uVar31 = (ulong)*(char *)((long)plVar19 + (long)unaff_x24);
        if (-1 < *(char *)((long)plVar19 + (long)unaff_x24)) {
          lVar22 = *plVar19;
          uVar31 = CONCAT17(-(lVar22 < 0),
                            CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
          uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
          uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
          uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
          uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
          unaff_x24 = (long *)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          uVar31 = (ulong)*(byte *)((long)plVar19 + (long)unaff_x24);
        }
        *(byte *)((long)plVar19 + (long)unaff_x24) = bVar13 >> 1;
        *(byte *)((long)plVar19 + ((ulong)(unaff_x24 + -1) & uVar6) + 8) = bVar13 >> 1;
        lStack_260 = lStack_260 - (uVar31 & 1);
        lStack_258 = lStack_258 + 1;
        plVar19[(long)unaff_x24 * -10 + -10] = (long)plVar26;
        plVar19[(long)unaff_x24 * -10 + -9] = (long)plVar4;
        plVar19[(long)unaff_x24 * -10 + -8] = (long)plStack_280;
        plVar19[(long)unaff_x24 * -10 + -1] = lStack_210;
        plVar19[(long)unaff_x24 * -10 + -6] = (long)plStack_238;
        plVar19[(long)unaff_x24 * -10 + -7] = (long)plStack_240;
        plVar19[(long)unaff_x24 * -10 + -4] = (long)plStack_228;
        plVar19[(long)unaff_x24 * -10 + -5] = (long)plStack_230;
        plVar19[(long)unaff_x24 * -10 + -2] = (long)plStack_218;
        plVar19[(long)unaff_x24 * -10 + -3] = (long)plStack_220;
        goto LAB_101527794;
      }
      bVar7 = true;
    }
    else {
      uVar33 = CONCAT17(-(lVar35 < 0),
                        CONCAT16(-(cVar41 < '\0'),
                                 CONCAT15(-(cVar40 < '\0'),
                                          CONCAT14(-(cVar39 < '\0'),
                                                   CONCAT13(-(cVar38 < '\0'),
                                                            CONCAT12(-(cVar37 < '\0'),
                                                                     CONCAT11(-(cVar36 < '\0'),
                                                                              -((char)lVar35 < '\0')
                                                                             )))))));
      if (uVar33 != 0) {
        uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
        uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
        uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
        uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
        unaff_x24 = (long *)(uVar31 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) & uVar6
                            );
        goto LAB_1015282f0;
      }
      bVar7 = false;
    }
    lVar22 = lVar22 + 8;
    uVar31 = lVar22 + uVar31 & uVar6;
    lVar35 = *(long *)((long)plVar19 + uVar31);
    uVar33 = CONCAT17(-((byte)((ulong)lVar35 >> 0x38) == bVar20),
                      CONCAT16(-((byte)((ulong)lVar35 >> 0x30) == bVar20),
                               CONCAT15(-((byte)((ulong)lVar35 >> 0x28) == bVar20),
                                        CONCAT14(-((byte)((ulong)lVar35 >> 0x20) == bVar20),
                                                 CONCAT13(-((byte)((ulong)lVar35 >> 0x18) == bVar20)
                                                          ,CONCAT12(-((byte)((ulong)lVar35 >> 0x10)
                                                                     == bVar20),
                                                                    CONCAT11(-((byte)((ulong)lVar35
                                                                                     >> 8) == bVar20
                                                                              ),-((byte)lVar35 ==
                                                                                 bVar20)))))))) &
             0x8080808080808080;
  }
  uVar17 = (uVar33 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar33 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uVar17 = uVar31 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar6;
  if (plStack_280 == (long *)plVar19[uVar17 * -10 + -8]) {
    iVar8 = _memcmp(plVar4,plVar19[uVar17 * -10 + -9]);
    if (iVar8 == 0) goto LAB_101528334;
  }
  uVar33 = uVar33 - 1 & uVar33;
  goto joined_r0x00010152827c;
LAB_101528334:
  plVar18 = (long *)plVar19[uVar17 * -10 + -7];
  lVar22 = plVar19[uVar17 * -10 + -6];
  lVar35 = plVar19[uVar17 * -10 + -4];
  cVar36 = *(char *)((long)plVar19 + uVar17 * -0x50 + -4);
  plVar19[uVar17 * -10 + -2] = (long)plStack_218;
  plVar19[uVar17 * -10 + -3] = (long)plStack_220;
  plVar19[uVar17 * -10 + -6] = (long)plStack_238;
  plVar19[uVar17 * -10 + -7] = (long)plStack_240;
  plVar19[uVar17 * -10 + -4] = (long)plStack_228;
  plVar19[uVar17 * -10 + -5] = (long)plStack_230;
  plVar19[uVar17 * -10 + -1] = lStack_210;
  if (plVar26 != (long *)0x0) {
    _free(plVar4);
  }
  if ((cVar36 != '\x02' && plVar18 != (long *)0x0) && lVar22 != 0) {
    if (lVar35 != 0) {
      plVar26 = plVar18 + 1;
      lVar34 = *plVar18;
      uVar31 = CONCAT17(-(-1 < lVar34),
                        CONCAT16(-(-1 < (char)((ulong)lVar34 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar34 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar34 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar34 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar34 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar34 >> 8)),-(-1 < (char)lVar34)))))))) &
               0x8080808080808080;
      unaff_x24 = plVar18;
      do {
        while (uVar31 == 0) {
          lVar34 = *plVar26;
          plVar26 = plVar26 + 1;
          unaff_x24 = unaff_x24 + -0x20;
          uVar31 = CONCAT17(-(-1 < lVar34),
                            CONCAT16(-(-1 < (char)((ulong)lVar34 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar34 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar34 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar34 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar34 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar34 >> 8)),
                                                           -(-1 < (char)lVar34)))))))) &
                   0x8080808080808080;
        }
        uVar33 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
        uVar33 = LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) & 0x78;
        if (*(long *)((long)unaff_x24 + uVar33 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)unaff_x24 + uVar33 * -4 + -0x18));
        }
        uVar31 = uVar31 - 1 & uVar31;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
    if (lVar22 * 0x21 != -0x29) {
      _free(plVar18 + lVar22 * -4 + -4);
    }
  }
  goto LAB_101527794;
}

