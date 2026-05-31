
void FUN_101273540(long *param_1,undefined **param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
  char cVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined **ppuStack_3f8;
  undefined1 uStack_3f0;
  long lStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 uStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  
  puVar11 = param_2[5];
  if (puVar11 < param_2[4]) {
    do {
      bVar2 = param_2[3][(long)puVar11];
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if (bVar2 != 0x5b) {
          ppuVar7 = (undefined **)FUN_108831eec(param_2,&uStack_260,&UNK_10b209f80);
          goto LAB_101274028;
        }
        cVar15 = *(char *)(param_2 + 7);
        *(char *)(param_2 + 7) = cVar15 + -1;
        if ((char)(cVar15 + -1) == '\0') {
          uStack_260 = 0x18;
          goto LAB_1012735b4;
        }
        param_2[5] = puVar11 + 1;
        puVar8 = (undefined8 *)((ulong)&puStack_f0 | 1);
        uStack_3f0 = 1;
        puVar9 = (undefined8 *)((ulong)&ppuStack_d0 | 1);
        lStack_3e8 = 0;
        ppuStack_3e0 = (undefined **)0x8;
        ppuStack_3d8 = (undefined **)0x0;
        ppuStack_3f8 = param_2;
        FUN_1011de2a4(&uStack_260,&ppuStack_3f8);
        ppuVar7 = ppuStack_3f8;
        ppuVar5 = ppuStack_258;
        if ((char)uStack_260 == '\x01') goto LAB_101273e80;
        ppuVar5 = ppuStack_3e0;
        ppuVar4 = ppuStack_3d8;
        lVar3 = lStack_3e8;
        if (uStack_260._1_1_ != '\x01') goto LAB_101273ebc;
        puVar11 = ppuStack_3f8[4];
        if (puVar11 <= ppuStack_3f8[5]) goto LAB_101273e68;
        puVar12 = ppuStack_3f8[3];
        puVar10 = ppuStack_3f8[5] + 5;
        goto LAB_101273668;
      }
      puVar11 = puVar11 + 1;
      param_2[5] = puVar11;
    } while (param_2[4] != puVar11);
  }
  uStack_260 = 5;
LAB_1012735b4:
  lVar3 = FUN_108831e2c(param_2,&uStack_260);
  goto LAB_101274034;
  while( true ) {
    ppuStack_3f8[5] = puVar10 + -4;
    puVar10 = puVar10 + 1;
    if ((long)puVar10 - (long)puVar11 == 5) break;
LAB_101273668:
    bVar2 = (puVar12 + (long)puVar10)[-5];
    if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      uVar13 = (uint)bVar2;
      if (bVar2 < 0x66) {
        if (bVar2 == 0x5b) {
          cVar15 = *(char *)(ppuStack_3f8 + 7);
          *(char *)(ppuStack_3f8 + 7) = cVar15 + -1;
          if ((char)(cVar15 + -1) == '\0') {
            ppuStack_b0 = (undefined **)0x18;
            ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_3f8,&ppuStack_b0);
            goto LAB_101273e80;
          }
          ppuStack_3f8[5] = puVar10 + -4;
          ppuStack_108 = ppuStack_3f8;
          ppuStack_100 = (undefined **)CONCAT71(ppuStack_100._1_7_,1);
          FUN_1011de2a4(&uStack_140,&ppuStack_108);
          ppuVar5 = ppuStack_108;
          ppuVar4 = ppuStack_138;
          if ((char)uStack_140 == '\x01') {
LAB_101273a0c:
            ppuStack_a8 = ppuVar4;
            uVar16 = 0xf;
          }
          else {
            if (uStack_140._1_1_ != '\x01') {
              puStack_f0 = &UNK_108cde34c;
              ppuStack_e8 = (undefined **)0x4;
              uStack_140 = &puStack_f0;
              ppuStack_138 = (undefined **)&DAT_100c7b3a0;
              ppuVar4 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&uStack_140);
              goto LAB_101273a0c;
            }
            FUN_1012a122c(&uStack_140,ppuStack_108);
            ppuVar4 = ppuStack_138;
            if ((char)uStack_140 == '\x01') goto LAB_101273a0c;
            uVar16 = uStack_140._1_1_;
            FUN_1013efb8c(&ppuStack_b0,ppuVar5,(ulong)ppuStack_100 & 0xff);
            if ((byte)ppuStack_b0 == '\x16') {
              uVar16 = 0xf;
            }
            else {
              ppuStack_c8 = ppuStack_a0;
              ppuStack_d0 = ppuStack_a8;
              ppuStack_c0 = ppuStack_98;
              ppuStack_a8 = ppuStack_b0;
            }
          }
          *(char *)(ppuVar7 + 7) = *(char *)(ppuVar7 + 7) + '\x01';
          uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,uVar16);
          ppuStack_128 = ppuStack_c8;
          ppuStack_130 = ppuStack_d0;
          ppuStack_120 = ppuStack_c0;
          ppuStack_138 = ppuStack_a8;
          ppuVar6 = (undefined **)FUN_100654840(ppuVar7);
          ppuVar5 = ppuStack_138;
          ppuStack_a8 = ppuStack_138;
          ppuStack_b0 = uStack_140;
          ppuVar4 = ppuStack_b0;
          ppuStack_98 = ppuStack_128;
          ppuStack_a0 = ppuStack_130;
          ppuStack_90 = ppuStack_120;
          ppuStack_b0._0_1_ = (byte)uStack_140;
          ppuStack_b0 = ppuVar4;
          ppuStack_88 = ppuVar6;
          if ((byte)ppuStack_b0 != 0xf) {
            if (ppuVar6 == (undefined **)0x0) goto LAB_101273aac;
            FUN_100e077ec(&ppuStack_a8);
            goto LAB_101273aa0;
          }
          if (ppuVar6 == (undefined **)0x0) goto LAB_101273ad8;
          puVar11 = *ppuVar6;
          if (puVar11 != (undefined *)0x1) goto LAB_101273a78;
          FUN_100de21d4(ppuVar6 + 1);
          goto LAB_101273ad0;
        }
        if (bVar2 == 0x22) {
          ppuStack_3f8[5] = puVar10 + -4;
          ppuStack_3f8[2] = (undefined *)0x0;
          __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                    (&ppuStack_d0,ppuStack_3f8 + 3,ppuStack_3f8);
          ppuVar5 = ppuStack_c8;
          if (ppuStack_d0 == (undefined **)0x2) goto LAB_101273e80;
          if (((ulong)ppuStack_d0 & 1) == 0) {
            ppuStack_b0 = (undefined **)&UNK_108cde34c;
            ppuStack_a8 = (undefined **)0x4;
            ppuStack_a0 = (undefined **)&UNK_108cae54a;
            ppuStack_98 = (undefined **)0x23;
            ppuStack_138 = ppuStack_c8;
            ppuStack_130 = ppuStack_c0;
            uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,5);
            ppuStack_1a0 = (undefined **)
                           func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
          }
          else {
            ppuStack_b0 = (undefined **)&UNK_108cde34c;
            ppuStack_a8 = (undefined **)0x4;
            ppuStack_a0 = (undefined **)&UNK_108cae54a;
            ppuStack_98 = (undefined **)0x23;
            ppuStack_138 = ppuStack_c8;
            ppuStack_130 = ppuStack_c0;
            uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,5);
            ppuStack_1a0 = (undefined **)
                           func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
          }
          goto LAB_1012744bc;
        }
        if (uVar13 == 0x2d) {
          ppuStack_3f8[5] = puVar10 + -4;
          FUN_100652540(&ppuStack_d0,ppuStack_3f8,0);
          ppuVar5 = ppuStack_c8;
          if (ppuStack_d0 == (undefined **)0x3) goto LAB_101273e80;
          ppuStack_b0 = (undefined **)&UNK_108cde34c;
          ppuStack_a8 = (undefined **)0x4;
          ppuStack_a0 = (undefined **)&UNK_108cae54a;
          ppuStack_98 = (undefined **)0x23;
          if (ppuStack_d0 == (undefined **)0x0) {
            ppuStack_138 = ppuStack_c8;
            uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,3);
            ppuStack_1a0 = (undefined **)
                           func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
          }
          else if (ppuStack_d0 == (undefined **)0x1) {
            ppuStack_138 = ppuStack_c8;
            uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,1);
            ppuStack_1a0 = (undefined **)
                           func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
          }
          else {
            ppuStack_138 = ppuStack_c8;
            uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,2);
            ppuStack_1a0 = (undefined **)
                           func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
          }
          goto LAB_1012744bc;
        }
      }
      else {
        if (bVar2 < 0x7b) {
          if (uVar13 != 0x66) {
            if (uVar13 == 0x6e) {
              puVar14 = puVar10 + -4;
              ppuStack_3f8[5] = puVar14;
              puVar1 = puVar14;
              if (puVar14 <= puVar11) {
                puVar1 = puVar11;
              }
              if (puVar11 <= puVar14) {
LAB_101274250:
                ppuStack_b0 = (undefined **)0x5;
                ppuVar5 = (undefined **)FUN_108832904(ppuStack_3f8,&ppuStack_b0);
                goto LAB_101273e80;
              }
              cVar15 = (puVar12 + (long)puVar10)[-4];
              ppuStack_3f8[5] = puVar10 + -3;
              if (cVar15 == 'u') {
                if (puVar10 + -3 == puVar1) goto LAB_101274250;
                cVar15 = (puVar12 + (long)puVar10)[-3];
                ppuStack_3f8[5] = puVar10 + -2;
                if (cVar15 == 'l') {
                  if (puVar10 + -2 == puVar1) goto LAB_101274250;
                  cVar15 = (puVar12 + (long)puVar10)[-2];
                  ppuStack_3f8[5] = puVar10 + -1;
                  if (cVar15 == 'l') {
                    ppuStack_b0 = (undefined **)&UNK_108cde34c;
                    ppuStack_a8 = (undefined **)0x4;
                    ppuStack_a0 = (undefined **)&UNK_108cae54a;
                    ppuStack_98 = (undefined **)0x23;
                    uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,7);
                    ppuStack_1a0 = (undefined **)
                                   func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
                    goto LAB_1012744bc;
                  }
                }
              }
              ppuStack_b0 = (undefined **)0x9;
              ppuVar5 = (undefined **)FUN_108832904(ppuStack_3f8,&ppuStack_b0);
              goto LAB_101273e80;
            }
            if (uVar13 != 0x74) goto LAB_101274140;
            puVar14 = puVar10 + -4;
            ppuStack_3f8[5] = puVar14;
            puVar1 = puVar14;
            if (puVar14 <= puVar11) {
              puVar1 = puVar11;
            }
            if (puVar11 <= puVar14) {
LAB_101273ffc:
              ppuStack_b0 = (undefined **)0x5;
              ppuVar5 = (undefined **)FUN_108832904(ppuStack_3f8,&ppuStack_b0);
              goto LAB_101273e80;
            }
            cVar15 = (puVar12 + (long)puVar10)[-4];
            ppuStack_3f8[5] = puVar10 + -3;
            if (cVar15 == 'r') {
              if (puVar10 + -3 == puVar1) goto LAB_101273ffc;
              cVar15 = (puVar12 + (long)puVar10)[-3];
              ppuStack_3f8[5] = puVar10 + -2;
              if (cVar15 == 'u') {
                if (puVar10 + -2 == puVar1) goto LAB_101273ffc;
                cVar15 = (puVar12 + (long)puVar10)[-2];
                ppuStack_3f8[5] = puVar10 + -1;
                if (cVar15 == 'e') {
                  ppuStack_b0 = (undefined **)&UNK_108cde34c;
                  ppuStack_a8 = (undefined **)0x4;
                  ppuStack_a0 = (undefined **)&UNK_108cae54a;
                  ppuStack_98 = (undefined **)0x23;
                  uStack_140 = (undefined **)CONCAT62(uStack_140._2_6_,0x100);
                  ppuStack_1a0 = (undefined **)
                                 func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
                  goto LAB_1012744bc;
                }
              }
            }
            ppuStack_b0 = (undefined **)0x9;
            ppuVar5 = (undefined **)FUN_108832904(ppuStack_3f8,&ppuStack_b0);
            goto LAB_101273e80;
          }
          puVar14 = puVar10 + -4;
          ppuStack_3f8[5] = puVar14;
          puVar1 = puVar14;
          if (puVar14 <= puVar11) {
            puVar1 = puVar11;
          }
          if (puVar11 <= puVar14) {
LAB_1012741e4:
            ppuStack_b0 = (undefined **)0x5;
            ppuVar5 = (undefined **)FUN_108832904(ppuStack_3f8,&ppuStack_b0);
            goto LAB_101273e80;
          }
          cVar15 = (puVar12 + (long)puVar10)[-4];
          ppuStack_3f8[5] = puVar10 + -3;
          if (cVar15 == 'a') {
            if (puVar10 + -3 == puVar1) goto LAB_1012741e4;
            cVar15 = (puVar12 + (long)puVar10)[-3];
            ppuStack_3f8[5] = puVar10 + -2;
            if (cVar15 == 'l') {
              if (puVar10 + -2 == puVar1) goto LAB_1012741e4;
              cVar15 = (puVar12 + (long)puVar10)[-2];
              ppuStack_3f8[5] = puVar10 + -1;
              if (cVar15 == 's') {
                if (puVar10 + -1 == puVar1) goto LAB_1012741e4;
                cVar15 = (puVar12 + (long)puVar10)[-1];
                ppuStack_3f8[5] = puVar10;
                if (cVar15 == 'e') {
                  ppuStack_b0 = (undefined **)&UNK_108cde34c;
                  ppuStack_a8 = (undefined **)0x4;
                  ppuStack_a0 = (undefined **)&UNK_108cae54a;
                  ppuStack_98 = (undefined **)0x23;
                  uStack_140 = (undefined **)((ulong)uStack_140._2_6_ << 0x10);
                  ppuStack_1a0 = (undefined **)
                                 func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
                  goto LAB_1012744bc;
                }
              }
            }
          }
          ppuStack_b0 = (undefined **)0x9;
          ppuVar5 = (undefined **)FUN_108832904(ppuStack_3f8,&ppuStack_b0);
          goto LAB_101273e80;
        }
        if (uVar13 == 0x7b) {
          cVar15 = *(char *)(ppuStack_3f8 + 7);
          *(char *)(ppuStack_3f8 + 7) = cVar15 + -1;
          if ((char)(cVar15 + -1) == '\0') {
            ppuStack_b0 = (undefined **)0x18;
            ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_3f8,&ppuStack_b0);
            goto LAB_101273e80;
          }
          ppuStack_3f8[5] = puVar10 + -4;
          ppuStack_118 = ppuStack_3f8;
          uStack_110 = 1;
          ppuStack_108 = (undefined **)0x0;
          ppuStack_100 = (undefined **)0x8;
          ppuStack_f8 = (undefined **)0x0;
          cVar15 = '\x0f';
          goto LAB_101273720;
        }
      }
LAB_101274140:
      if (uVar13 - 0x30 < 10) {
        FUN_100652540(&ppuStack_d0,ppuStack_3f8,1);
        ppuVar5 = ppuStack_c8;
        if (ppuStack_d0 == (undefined **)0x3) goto LAB_101273e80;
        ppuStack_b0 = (undefined **)&UNK_108cde34c;
        ppuStack_a8 = (undefined **)0x4;
        ppuStack_a0 = (undefined **)&UNK_108cae54a;
        ppuStack_98 = (undefined **)0x23;
        if (ppuStack_d0 == (undefined **)0x2) {
          ppuStack_138 = ppuStack_c8;
          uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,2);
          ppuStack_1a0 = (undefined **)func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
        }
        else if (ppuStack_d0 == (undefined **)0x1) {
          ppuStack_138 = ppuStack_c8;
          uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,1);
          ppuStack_1a0 = (undefined **)func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
        }
        else {
          ppuStack_138 = ppuStack_c8;
          uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,3);
          ppuStack_1a0 = (undefined **)func_0x000108a4a50c(&uStack_140,&ppuStack_b0,&UNK_10b21b390);
        }
      }
      else {
        ppuStack_b0 = (undefined **)0xa;
        ppuStack_1a0 = (undefined **)FUN_108831e2c(ppuStack_3f8,&ppuStack_b0);
      }
      goto LAB_1012744bc;
    }
  }
LAB_101273e68:
  ppuStack_b0 = (undefined **)0x5;
  ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_3f8,&ppuStack_b0);
  goto LAB_101273e80;
LAB_101273720:
  FUN_1011dde1c(&puStack_f0,&ppuStack_118);
  if ((char)puStack_f0 == '\x16') {
    if (cVar15 != '\x0f') {
      uStack_140 = (undefined **)&UNK_108cde34c;
      ppuStack_138 = (undefined **)0x4;
      ppuStack_a8 = (undefined **)&DAT_100c7b3a0;
      ppuStack_b0 = (undefined **)&uStack_140;
      ppuVar5 = (undefined **)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_b0);
      goto LAB_101273944;
    }
    puVar11 = ppuStack_118[5];
    if (ppuStack_118[4] <= puVar11) {
LAB_10127392c:
      ppuStack_b0 = (undefined **)0x3;
      ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_118,&ppuStack_b0);
      goto LAB_101273944;
    }
    while( true ) {
      bVar2 = ppuStack_118[3][(long)puVar11];
      if (0x3a < bVar2) goto LAB_101273e10;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      puVar11 = puVar11 + 1;
      ppuStack_118[5] = puVar11;
      if (ppuStack_118[4] == puVar11) goto LAB_10127392c;
    }
    if ((ulong)bVar2 != 0x3a) {
LAB_101273e10:
      ppuStack_b0 = (undefined **)0x6;
      ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_118,&ppuStack_b0);
      goto LAB_101273944;
    }
    ppuStack_118[5] = puVar11 + 1;
    FUN_1012a122c(&uStack_140);
    ppuVar5 = ppuStack_138;
    if ((char)uStack_140 == '\x01') goto LAB_101273944;
    cVar15 = uStack_140._1_1_;
    goto LAB_101273720;
  }
  if ((char)puStack_f0 == '\x17') {
    if (cVar15 == '\x0f') {
      uStack_140 = (undefined **)&UNK_108cde34c;
      ppuStack_138 = (undefined **)0x4;
      ppuStack_a8 = (undefined **)&DAT_100c7b3a0;
      ppuStack_b0 = (undefined **)&uStack_140;
      ppuVar5 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_b0);
      FUN_100d03040(&ppuStack_108);
      goto LAB_10127394c;
    }
    ppuStack_158 = ppuStack_100;
    ppuStack_160 = ppuStack_108;
    ppuStack_150 = ppuStack_f8;
    ppuVar5 = (undefined **)0x15;
    goto LAB_101273950;
  }
  ppuVar5 = ppuStack_e8;
  if ((char)puStack_f0 == '\x18') goto LAB_101273944;
  ppuStack_d0 = (undefined **)CONCAT71(ppuStack_d0._1_7_,(char)puStack_f0);
  uVar17 = *puVar8;
  puVar9[1] = puVar8[1];
  *puVar9 = uVar17;
  uVar17 = *(undefined8 *)((long)puVar8 + 0xf);
  *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)((long)puVar8 + 0x17);
  *(undefined8 *)((long)puVar9 + 0xf) = uVar17;
  puVar11 = ppuStack_118[5];
  if (puVar11 < ppuStack_118[4]) {
    while( true ) {
      bVar2 = ppuStack_118[3][(long)puVar11];
      if (0x3a < bVar2) goto LAB_101273df8;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      puVar11 = puVar11 + 1;
      ppuStack_118[5] = puVar11;
      if (ppuStack_118[4] == puVar11) goto LAB_101273908;
    }
    if ((ulong)bVar2 == 0x3a) {
      ppuStack_118[5] = puVar11 + 1;
      FUN_101604bc0(&uStack_140);
      ppuVar4 = ppuStack_f8;
      ppuVar5 = ppuStack_138;
      if ((char)uStack_140 != '\x16') {
        ppuStack_88 = ppuStack_138;
        ppuStack_90 = uStack_140;
        ppuStack_78 = ppuStack_128;
        ppuStack_80 = ppuStack_130;
        ppuStack_a8 = ppuStack_c8;
        ppuStack_b0 = ppuStack_d0;
        ppuStack_98 = ppuStack_b8;
        ppuStack_a0 = ppuStack_c0;
        if (ppuStack_f8 == ppuStack_108) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&ppuStack_108);
        }
        ppuVar5 = ppuStack_100 + (long)ppuVar4 * 8;
        ppuVar5[1] = (undefined *)ppuStack_a8;
        *ppuVar5 = (undefined *)ppuStack_b0;
        ppuVar5[3] = (undefined *)ppuStack_98;
        ppuVar5[2] = (undefined *)ppuStack_a0;
        ppuVar5[5] = (undefined *)ppuStack_88;
        ppuVar5[4] = (undefined *)ppuStack_90;
        ppuVar5[7] = (undefined *)ppuStack_78;
        ppuVar5[6] = (undefined *)ppuStack_80;
        ppuStack_f8 = (undefined **)((long)ppuVar4 + 1);
        goto LAB_101273720;
      }
    }
    else {
LAB_101273df8:
      ppuStack_b0 = (undefined **)0x6;
      ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_118,&ppuStack_b0);
    }
  }
  else {
LAB_101273908:
    ppuStack_b0 = (undefined **)0x3;
    ppuVar5 = (undefined **)FUN_108831e2c(ppuStack_118,&ppuStack_b0);
  }
  FUN_100e077ec(&ppuStack_d0);
LAB_101273944:
  FUN_100d03040(&ppuStack_108);
LAB_10127394c:
  cVar15 = '\x0f';
LAB_101273950:
  *(char *)(ppuVar7 + 7) = *(char *)(ppuVar7 + 7) + '\x01';
  uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,cVar15);
  ppuStack_128 = ppuStack_158;
  ppuStack_130 = ppuStack_160;
  ppuStack_120 = ppuStack_150;
  ppuStack_138 = ppuVar5;
  ppuVar6 = (undefined **)FUN_1006546a8(ppuVar7);
  ppuVar5 = ppuStack_138;
  ppuStack_a8 = ppuStack_138;
  ppuStack_b0 = uStack_140;
  ppuVar4 = ppuStack_b0;
  ppuStack_98 = ppuStack_128;
  ppuStack_a0 = ppuStack_130;
  ppuStack_90 = ppuStack_120;
  ppuStack_b0._0_1_ = (byte)uStack_140;
  ppuStack_b0 = ppuVar4;
  ppuStack_88 = ppuVar6;
  if ((byte)ppuStack_b0 == 0xf) {
    if (ppuVar6 != (undefined **)0x0) {
      puVar11 = *ppuVar6;
      if (puVar11 == (undefined *)0x1) {
        FUN_100de21d4(ppuVar6 + 1);
      }
      else {
LAB_101273a78:
        ppuVar5 = ppuStack_138;
        ppuStack_b0 = uStack_140;
        ppuStack_a8 = ppuStack_138;
        ppuStack_a0 = ppuStack_130;
        ppuStack_98 = ppuStack_128;
        ppuStack_90 = ppuStack_120;
        ppuStack_88 = ppuVar6;
        if ((puVar11 == (undefined *)0x0) && (ppuVar6[2] != (undefined *)0x0)) {
          _free(ppuVar6[1]);
        }
      }
LAB_101273ad0:
      _free(ppuVar6);
    }
LAB_101273ad8:
    uVar13 = 0xf;
    ppuStack_1a0 = ppuVar5;
  }
  else if (ppuVar6 == (undefined **)0x0) {
LAB_101273aac:
    uVar13 = (uint)(byte)ppuStack_b0;
    ppuStack_178 = ppuStack_128;
    ppuStack_180 = ppuStack_130;
    ppuStack_170 = ppuStack_120;
    ppuStack_1a0 = ppuStack_138;
    ppuStack_b0 = uStack_140;
    ppuStack_a8 = ppuStack_138;
    ppuStack_a0 = ppuStack_130;
    ppuStack_98 = ppuStack_128;
    ppuStack_90 = ppuStack_120;
  }
  else {
    FUN_100e077ec(&ppuStack_a8);
LAB_101273aa0:
    uVar13 = 0xf;
    ppuStack_1a0 = ppuVar6;
  }
  if (uVar13 != 0xf) {
    ppuStack_190 = ppuStack_178;
    ppuStack_198 = ppuStack_180;
    ppuStack_188 = ppuStack_170;
                    /* WARNING: Could not recover jumptable at 0x000101273b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_101273b18 + (ulong)(byte)(&UNK_108c9f948)[uVar13] * 4))();
    return;
  }
LAB_1012744bc:
  ppuVar5 = (undefined **)FUN_108832dfc(ppuStack_1a0,ppuVar7);
LAB_101273e80:
  ppuVar6 = ppuStack_3e0;
  puVar11 = (undefined *)((long)ppuStack_3d8 + 1);
  ppuVar7 = ppuStack_3e0;
  ppuVar4 = (undefined **)&uStack_140;
  while (puVar11 = puVar11 + -1, puVar11 != (undefined *)0x0) {
    ppuVar7 = ppuVar7 + 0x18;
    FUN_100e02a24();
    ppuVar4 = ppuVar7;
  }
  if (lStack_3e8 != 0) {
    _free(ppuVar6);
  }
  lVar3 = -0x8000000000000000;
LAB_101273ebc:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  uStack_260 = lVar3;
  ppuStack_258 = ppuVar5;
  ppuStack_250 = ppuVar4;
  ppuVar6 = (undefined **)FUN_100654840(param_2);
  if (lVar3 == -0x8000000000000000) {
    ppuVar7 = ppuVar5;
    if (ppuVar6 != (undefined **)0x0) {
      if (*ppuVar6 == (undefined *)0x1) {
        FUN_100de21d4(ppuVar6 + 1);
      }
      else if ((*ppuVar6 == (undefined *)0x0) && (ppuVar6[2] != (undefined *)0x0)) {
        _free(ppuVar6[1]);
      }
      _free(ppuVar6);
    }
  }
  else {
    if (ppuVar6 == (undefined **)0x0) {
      *param_1 = lVar3;
      param_1[1] = (long)ppuVar5;
      param_1[2] = (long)ppuVar4;
      return;
    }
    puVar11 = (undefined *)((long)ppuVar4 + 1);
    ppuVar7 = ppuVar5;
    while (puVar11 = puVar11 + -1, puVar11 != (undefined *)0x0) {
      FUN_100e02a24(ppuVar7);
      ppuVar7 = ppuVar7 + 0x18;
    }
    ppuVar7 = ppuVar6;
    if (lVar3 != 0) {
      _free(ppuVar5);
    }
  }
LAB_101274028:
  lVar3 = FUN_108832dfc(ppuVar7,param_2);
LAB_101274034:
  *param_1 = -0x8000000000000000;
  param_1[1] = lVar3;
  return;
}

