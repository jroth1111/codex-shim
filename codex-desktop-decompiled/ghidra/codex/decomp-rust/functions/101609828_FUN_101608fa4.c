
undefined1  [16] FUN_101608fa4(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  char cVar13;
  ulong uVar14;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *extraout_x9_08;
  long *extraout_x9_09;
  long lVar15;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x11_04;
  long *extraout_x11_05;
  long *extraout_x11_06;
  long *extraout_x11_07;
  long *extraout_x11_08;
  long *extraout_x11_09;
  long *extraout_x11_10;
  long *extraout_x11_11;
  long *extraout_x11_12;
  long *extraout_x11_13;
  long *extraout_x11_14;
  long *extraout_x11_15;
  long *extraout_x11_16;
  long *extraout_x11_17;
  long *plVar16;
  long *extraout_x11_18;
  long *extraout_x11_19;
  long *extraout_x11_20;
  long *extraout_x11_21;
  long *extraout_x11_22;
  long *extraout_x11_23;
  long *extraout_x11_24;
  long *extraout_x11_25;
  long *extraout_x11_26;
  long *extraout_x11_27;
  long *extraout_x11_28;
  long *unaff_x20;
  long *plVar17;
  undefined *puVar18;
  char unaff_w21;
  long *plVar19;
  char unaff_w22;
  long *plVar20;
  long *unaff_x24;
  undefined8 *puVar21;
  long *plVar22;
  long *unaff_x26;
  undefined1 auVar23 [16];
  long *plStack_268;
  long *plStack_260;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  char cStack_c8;
  char cStack_c7;
  undefined6 uStack_c6;
  long *plStack_c0;
  undefined1 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_71 [17];
  
  uVar2 = param_1[4];
  uVar14 = param_1[5];
  if (uVar14 < uVar2) {
    lVar15 = param_1[3];
    do {
      bVar4 = *(byte *)(lVar15 + uVar14);
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
        if (bVar4 != 0x6e) goto LAB_101609090;
        uVar1 = uVar14 + 1;
        param_1[5] = uVar1;
        bVar7 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar14 + 1;
        }
        if (bVar7) {
          cVar3 = *(char *)(lVar15 + uVar14 + 1);
          param_1[5] = uVar14 + 2;
          if (cVar3 == 'u') {
            if (uVar14 + 2 == uVar2) goto LAB_101609880;
            cVar3 = *(char *)(lVar15 + uVar14 + 2);
            param_1[5] = uVar14 + 3;
            if (cVar3 == 'l') {
              if (uVar14 + 3 == uVar2) goto LAB_101609880;
              cVar3 = *(char *)(lVar15 + uVar14 + 3);
              param_1[5] = uVar14 + 4;
              if (cVar3 == 'l') {
                puVar9 = (undefined8 *)0x0;
                uVar10 = 0;
                goto LAB_101609c50;
              }
            }
          }
          uStack_170 = (long *)0x9;
        }
        else {
LAB_101609880:
          uStack_170 = (long *)0x5;
        }
        puVar9 = (undefined8 *)FUN_10883295c(param_1,&uStack_170);
        goto LAB_1016090e8;
      }
      uVar14 = uVar14 + 1;
      param_1[5] = uVar14;
    } while (uVar2 != uVar14);
  }
  else {
LAB_101609090:
    if (uVar14 < uVar2) {
      do {
        bVar4 = *(byte *)(param_1[3] + uVar14);
        if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
          plVar22 = (long *)0x8000000000000002;
          if (bVar4 != 0x5b) {
            if (bVar4 != 0x7b) {
              plVar17 = (long *)FUN_108832208(param_1,auStack_71,&UNK_10b24f398);
              goto LAB_101609fd8;
            }
            cVar3 = (char)param_1[9] + -1;
            *(char *)(param_1 + 9) = cVar3;
            if (cVar3 == '\0') {
LAB_101609fb8:
              uStack_170 = (long *)0x18;
              goto LAB_1016090d8;
            }
            param_1[5] = uVar14 + 1;
            uStack_b8 = 1;
            cVar3 = '\x02';
            plStack_b0 = (long *)0x8000000000000002;
            plVar19 = (long *)0x8000000000000002;
            plStack_230 = (long *)0x8000000000000002;
            plVar17 = (long *)0x8000000000000002;
            plStack_c0 = param_1;
            cVar13 = '\x02';
            goto LAB_101609188;
          }
          cVar3 = (char)param_1[9] + -1;
          *(char *)(param_1 + 9) = cVar3;
          if (cVar3 == '\0') goto LAB_101609fb8;
          param_1[5] = uVar14 + 1;
          plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
          uStack_90 = param_1;
          FUN_1011de3f0(&uStack_170,&uStack_90);
          plVar17 = (long *)((ulong)uStack_170 & 0xff);
          plStack_e0 = extraout_x9;
          plVar19 = plStack_168;
          plVar12 = unaff_x26;
          if ((char)uStack_170 == '\x01') {
LAB_10160967c:
            plStack_168 = plVar12;
            plStack_160 = plVar17;
            plVar20 = (long *)0x8000000000000002;
            unaff_x20 = plVar19;
            plVar11 = unaff_x24;
            cStack_c8 = unaff_w21;
            cStack_c7 = unaff_w22;
          }
          else {
            if (uStack_170._1_1_ != '\x01') {
              uVar10 = 0;
LAB_10160994c:
              plVar19 = (long *)FUN_1087e422c(uVar10,&UNK_10b232a10,&UNK_10b20a590);
              plVar17 = extraout_x8;
              plStack_e0 = extraout_x9_04;
              plVar12 = unaff_x26;
              goto LAB_10160967c;
            }
            FUN_100617894(&uStack_170,uStack_90);
            plVar17 = (long *)((ulong)uStack_170 & 0xff);
            plStack_e0 = extraout_x9_00;
            plVar19 = plStack_168;
            plVar12 = unaff_x26;
            if ((char)uStack_170 == '\x01') goto LAB_10160967c;
            unaff_w21 = uStack_170._1_1_;
            FUN_1011de3f0(&uStack_170,&uStack_90);
            plVar17 = (long *)((ulong)uStack_170 & 0xff);
            plStack_e0 = extraout_x9_01;
            plVar19 = plStack_168;
            plVar12 = unaff_x26;
            if ((char)uStack_170 == '\x01') goto LAB_10160967c;
            if (uStack_170._1_1_ != '\x01') {
              uVar10 = 1;
              goto LAB_10160994c;
            }
            FUN_100617894(&uStack_170,uStack_90);
            plVar17 = (long *)((ulong)uStack_170 & 0xff);
            plStack_e0 = extraout_x9_02;
            plVar19 = plStack_168;
            plVar12 = unaff_x26;
            if ((char)uStack_170 == '\x01') goto LAB_10160967c;
            unaff_w22 = uStack_170._1_1_;
            FUN_1011de3f0(&uStack_170,&uStack_90);
            plVar17 = (long *)((ulong)uStack_170 & 0xff);
            plStack_e0 = extraout_x9_03;
            plVar19 = plStack_168;
            plVar12 = unaff_x26;
            if ((char)uStack_170 == '\x01') goto LAB_10160967c;
            plVar20 = (long *)0x8000000000000001;
            plVar11 = unaff_x24;
            if ((uStack_170._1_1_ == '\x01') &&
               (FUN_101608e44(&uStack_170,uStack_90), plVar17 = uStack_170,
               plStack_e0 = extraout_x9_05, plVar19 = plStack_168, unaff_x20 = plStack_168,
               plVar20 = uStack_170, plVar11 = plStack_160, plVar12 = unaff_x26,
               uStack_170 == (long *)0x8000000000000001)) goto LAB_10160967c;
            FUN_1011de3f0(&uStack_170,&uStack_90);
            plStack_e0 = extraout_x9_06;
            plVar19 = plStack_168;
            if ((char)uStack_170 == '\x01') {
LAB_101609cb8:
              plVar17 = (long *)0x8000000000000002;
              unaff_x24 = plVar11;
              plVar12 = plVar19;
              if ((-0x7fffffffffffffff < (long)plVar20) && (plVar20 != (long *)0x0)) {
                _free(unaff_x20);
                plVar17 = extraout_x8_01;
                plStack_e0 = extraout_x9_07;
              }
              goto LAB_10160967c;
            }
            if (uStack_170._1_1_ == '\x01') {
              FUN_10160a58c(&uStack_170,uStack_90);
              plStack_e0 = (long *)0x8000000000000001;
              plVar19 = plStack_168;
              if (uStack_170 == (long *)0x8000000000000001) goto LAB_101609cb8;
              plStack_110 = uStack_170;
              plStack_108 = plStack_168;
              plStack_100 = plStack_160;
              bVar7 = uStack_170 == (long *)0x8000000000000000;
              unaff_x26 = plStack_168;
            }
            else {
              plStack_110 = (long *)0x8000000000000001;
              bVar7 = true;
            }
            FUN_1011de3f0(&uStack_170,&uStack_90);
            plStack_e0 = extraout_x9_08;
            plVar19 = plStack_168;
            if ((char)uStack_170 == '\x01') {
LAB_101609e80:
              if (!bVar7) {
                FUN_100e238ac(&plStack_110);
                plStack_e0 = extraout_x9_09;
              }
              goto LAB_101609cb8;
            }
            plVar17 = (long *)(ulong)uStack_170._1_1_;
            if (uStack_170._1_1_ == 1) {
              FUN_10160a58c(&uStack_170,uStack_90);
              plStack_e0 = uStack_170;
              plVar19 = plStack_168;
              if (uStack_170 == (long *)0x8000000000000001) goto LAB_101609e80;
            }
            else {
              uStack_170 = (long *)0x8000000000000002;
              plStack_160 = plVar17;
              plStack_168 = unaff_x26;
            }
            plStack_e0 = (long *)0x8000000000000001;
            if (uStack_170 != (long *)0x8000000000000002) {
              plStack_e0 = uStack_170;
            }
            plStack_a8 = plStack_108;
            plStack_b0 = plStack_110;
            plStack_a0 = plStack_100;
            cStack_c8 = unaff_w21;
            cStack_c7 = unaff_w22;
          }
          *(char *)(param_1 + 9) = (char)param_1[9] + '\x01';
          plStack_f0 = plStack_a8;
          plStack_f8 = plStack_b0;
          plStack_e8 = plStack_a0;
          plStack_110 = plVar20;
          plStack_108 = unaff_x20;
          plStack_100 = plVar11;
          plStack_d8 = plStack_168;
          plStack_d0 = plStack_160;
          plVar19 = (long *)FUN_10065474c(param_1);
          plVar17 = plStack_108;
          plStack_168 = plStack_108;
          uStack_170 = plStack_110;
          plStack_158 = plStack_f8;
          plStack_160 = plStack_100;
          plStack_148 = plStack_e8;
          plStack_150 = plStack_f0;
          plStack_138 = plStack_d8;
          plStack_140 = plStack_e0;
          uStack_128 = CONCAT62(uStack_c6,CONCAT11(cStack_c7,cStack_c8));
          plStack_130 = plStack_d0;
          plStack_120 = plVar19;
          if (plStack_110 != (long *)0x8000000000000002) {
            if (plVar19 != (long *)0x0) {
              if (((plStack_110 != (long *)0x8000000000000001) &&
                  (plStack_110 != (long *)0x8000000000000000)) && (plStack_110 != (long *)0x0)) {
                _free(plStack_108);
              }
              plVar17 = plStack_150;
              plVar22 = plStack_158;
              if (-0x7fffffffffffffff < (long)plStack_158) {
                puVar18 = (undefined *)((long)plStack_148 + 1);
                plVar12 = plStack_150;
                while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
                  FUN_100de6690(plVar12);
                  plVar12 = plVar12 + 9;
                }
                if (plVar22 != (long *)0x0) {
                  _free(plVar17);
                }
              }
              plVar17 = plStack_138;
              plVar22 = plStack_140;
              if (-0x7fffffffffffffff < (long)plStack_140) {
                puVar18 = (undefined *)((long)plStack_130 + 1);
                plVar12 = plStack_138;
                while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
                  FUN_100de6690(plVar12);
                  plVar12 = plVar12 + 9;
                }
                goto LAB_101609bdc;
              }
              goto LAB_101609be8;
            }
            goto LAB_101609b84;
          }
          if (plVar19 == (long *)0x0) goto LAB_101609c08;
          lVar15 = *plVar19;
          if (lVar15 != 1) goto LAB_101609b10;
          uVar14 = plVar19[1];
          if ((uVar14 & 3) != 1) goto LAB_101609c00;
          puVar9 = (undefined8 *)(uVar14 - 1);
          uVar10 = *puVar9;
          puVar21 = *(undefined8 **)(uVar14 + 7);
          if ((code *)*puVar21 != (code *)0x0) {
            (*(code *)*puVar21)(uVar10);
          }
          goto LAB_101609c88;
        }
        uVar14 = uVar14 + 1;
        param_1[5] = uVar14;
      } while (uVar2 != uVar14);
    }
  }
  uStack_170 = (long *)0x5;
LAB_1016090d8:
  puVar9 = (undefined8 *)FUN_108831e8c(param_1,&uStack_170);
  goto LAB_1016090e8;
  while (plVar11 = (long *)FUN_10062a8ec(plVar20), plVar16 = extraout_x11_01, plVar11 == (long *)0x0
        ) {
LAB_101609188:
    FUN_1011ddbc4(&uStack_170,&plStack_c0);
    plVar20 = plStack_c0;
    plStack_110 = plVar19;
    plVar12 = plVar22;
    if ((char)uStack_170 == '\x01') {
      plStack_108 = plStack_238;
      plStack_100 = plStack_240;
      plStack_a8 = plStack_250;
      plStack_a0 = plStack_248;
      plVar16 = extraout_x11;
      plVar11 = plStack_168;
      plStack_b0 = plVar22;
      goto LAB_1016099cc;
    }
    if (uStack_170._1_1_ != '\x01') {
      plStack_108 = plStack_238;
      plStack_100 = plStack_240;
      plStack_a8 = plStack_250;
      plStack_a0 = plStack_248;
      if (cVar13 == '\x02') {
        uStack_90 = (long *)&UNK_108cb022c;
        plStack_88 = (long *)0xb;
        uStack_170 = &uStack_90;
        plStack_168 = (long *)&DAT_100c7b3a0;
        plStack_b0 = plVar22;
        plVar11 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_170);
        plVar16 = extraout_x11_07;
        goto LAB_1016099cc;
      }
      if (cVar3 == '\x02') {
        uStack_90 = (long *)&UNK_108cb0237;
        plStack_88 = (long *)0x9;
        uStack_170 = &uStack_90;
        plStack_168 = (long *)&DAT_100c7b3a0;
        plStack_b0 = plVar22;
        plVar11 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_170);
        plVar16 = extraout_x11_08;
        goto LAB_1016099cc;
      }
      plStack_110 = (long *)0x8000000000000001;
      if (plStack_230 != (long *)0x8000000000000002) {
        plStack_110 = plStack_230;
      }
      plStack_230 = (long *)0x8000000000000001;
      if (plVar22 != (long *)0x8000000000000002) {
        plStack_88 = plStack_248;
        uStack_90 = plStack_250;
        plStack_230 = plVar22;
      }
      if (plVar17 == (long *)0x8000000000000002) {
        plVar17 = (long *)0x8000000000000001;
      }
      else {
        plStack_168 = plStack_240;
        uStack_170 = plStack_238;
      }
      plStack_188 = plStack_168;
      plStack_190 = uStack_170;
      plStack_178 = plStack_88;
      plStack_180 = uStack_90;
      plStack_b0 = plVar22;
      goto LAB_101609a94;
    }
    plStack_c0[5] = plStack_c0[5] + 1;
    plStack_c0[2] = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_170,plStack_c0 + 3,plStack_c0);
    plVar5 = plStack_160;
    plVar11 = plStack_168;
    plVar16 = extraout_x11_00;
    if (uStack_170 == (long *)0x2) break;
    uVar14 = (ulong)((long)plStack_160 + -7) >> 1 | (long)((long)plStack_160 + -7) << 0x3f;
    plStack_108 = plStack_238;
    plStack_100 = plStack_240;
    if ((long)uVar14 < 2) {
      if (uVar14 == 0) {
LAB_10160926c:
        iVar8 = _memcmp(plVar11,&UNK_108cb0240,plVar5);
        if (iVar8 == 0) {
          if (plStack_230 != (long *)0x8000000000000002) {
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            uStack_90 = (long *)&UNK_108cb0240;
            plStack_88 = (long *)0x7;
            uStack_170 = &uStack_90;
            plStack_168 = (long *)&DAT_100c7b3a0;
            plStack_b0 = plVar22;
            plVar11 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_170);
            plVar16 = extraout_x11_21;
            goto LAB_1016099cc;
          }
          uVar14 = plVar20[5];
          if (uVar14 < (ulong)plVar20[4]) {
            while( true ) {
              bVar4 = *(byte *)(plVar20[3] + uVar14);
              if (0x3a < bVar4) goto LAB_10160a0c8;
              if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
              uVar14 = uVar14 + 1;
              plVar20[5] = uVar14;
              if (plVar20[4] == uVar14) goto LAB_101609d20;
            }
            if ((ulong)bVar4 == 0x3a) {
              plVar20[5] = uVar14 + 1;
              FUN_101608e44(&uStack_170,plVar20);
              plStack_230 = uStack_170;
              if (uStack_170 == (long *)0x8000000000000001) {
                plStack_230 = (long *)0x8000000000000002;
                plVar16 = extraout_x11_03;
                plVar11 = plStack_168;
                break;
              }
              plStack_268 = plStack_160;
              plStack_260 = plStack_168;
              goto LAB_101609188;
            }
LAB_10160a0c8:
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            uStack_170 = (long *)0x6;
            plStack_b0 = plVar22;
            plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
            plVar16 = extraout_x11_22;
          }
          else {
LAB_101609d20:
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            uStack_170 = (long *)0x3;
            plStack_b0 = plVar22;
            plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
            plVar16 = extraout_x11_15;
          }
          plStack_230 = (long *)0x8000000000000002;
          goto LAB_1016099cc;
        }
        if (plVar5 == (long *)0x15) goto LAB_101609288;
      }
      else if (uVar14 == 1) {
LAB_1016091fc:
        iVar8 = _memcmp(plVar11,&UNK_108cb0237,plVar5);
        if (iVar8 == 0) {
          if (cVar3 != '\x02') {
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            uStack_90 = (long *)&UNK_108cb0237;
            plStack_88 = (long *)0x9;
            uStack_170 = &uStack_90;
            plStack_168 = (long *)&DAT_100c7b3a0;
            plStack_b0 = plVar22;
            plVar11 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_170);
            plVar16 = extraout_x11_23;
            goto LAB_1016099cc;
          }
          uVar14 = plVar20[5];
          if ((ulong)plVar20[4] <= uVar14) {
LAB_101609d78:
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            uStack_170 = (long *)0x3;
            plStack_b0 = plVar22;
            plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
            plVar16 = extraout_x11_16;
            goto LAB_1016099cc;
          }
          while( true ) {
            bVar4 = *(byte *)(plVar20[3] + uVar14);
            if (0x3a < bVar4) goto LAB_10160a1c0;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            uVar14 = uVar14 + 1;
            plVar20[5] = uVar14;
            if (plVar20[4] == uVar14) goto LAB_101609d78;
          }
          if ((ulong)bVar4 != 0x3a) {
LAB_10160a1c0:
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            uStack_170 = (long *)0x6;
            plStack_b0 = plVar22;
            plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
            plVar16 = extraout_x11_25;
            goto LAB_1016099cc;
          }
          plVar20[5] = uVar14 + 1;
          FUN_100617894(&uStack_90,plVar20);
          plVar16 = extraout_x11_04;
          if ((char)uStack_90 == '\x01') {
LAB_101609edc:
            plStack_a8 = plStack_250;
            plStack_a0 = plStack_248;
            plVar11 = plStack_88;
            plStack_b0 = plVar22;
            goto LAB_1016099cc;
          }
          cVar3 = uStack_90._1_1_;
          goto LAB_101609188;
        }
        if (plVar5 == (long *)0x15) goto LAB_101609288;
        if (plVar5 == (long *)0x7) goto LAB_10160926c;
      }
    }
    else if (uVar14 == 7) {
LAB_101609288:
      iVar8 = _memcmp(plVar11,&UNK_108cc309a,plVar5);
      if (iVar8 == 0) {
        if (plVar22 != (long *)0x8000000000000002) {
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_90 = (long *)&UNK_108cc309a;
          plStack_88 = (long *)0x15;
          uStack_170 = &uStack_90;
          plStack_168 = (long *)&DAT_100c7b3a0;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_170);
          plVar16 = extraout_x11_19;
          goto LAB_1016099cc;
        }
        uVar14 = plVar20[5];
        if ((ulong)plVar20[4] <= uVar14) {
LAB_10160998c:
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_170 = (long *)0x3;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
          plVar16 = extraout_x11_09;
          plVar12 = (long *)0x8000000000000002;
          goto LAB_1016099cc;
        }
        while( true ) {
          bVar4 = *(byte *)(plVar20[3] + uVar14);
          if (0x3a < bVar4) goto LAB_10160a038;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          uVar14 = uVar14 + 1;
          plVar20[5] = uVar14;
          if (plVar20[4] == uVar14) goto LAB_10160998c;
        }
        if ((ulong)bVar4 != 0x3a) {
LAB_10160a038:
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_170 = (long *)0x6;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
          plVar16 = extraout_x11_20;
          plVar12 = (long *)0x8000000000000002;
          goto LAB_1016099cc;
        }
        plVar20[5] = uVar14 + 1;
        FUN_10160a58c(&uStack_170,plVar20);
        if (uStack_170 == (long *)0x8000000000000001) {
          plVar16 = extraout_x11_02;
          plVar12 = (long *)0x8000000000000002;
          plVar11 = plStack_168;
          break;
        }
        plStack_248 = plStack_160;
        plVar22 = uStack_170;
        plStack_250 = plStack_168;
        goto LAB_101609188;
      }
      if ((plVar5 == (long *)0x15) &&
         ((*plVar11 == 0x635f786f72707061 && plVar11[1] == 0x73656d5f64756f6c) &&
          *(long *)((long)plVar11 + 0xd) == 0x736567617373656d)) {
        if (plVar17 != (long *)0x8000000000000002) {
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_90 = (long *)&UNK_108cc30af;
          plStack_88 = (long *)0x15;
          uStack_170 = &uStack_90;
          plStack_168 = (long *)&DAT_100c7b3a0;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_170);
          plVar16 = extraout_x11_24;
          goto LAB_1016099cc;
        }
        uVar14 = plVar20[5];
        if (uVar14 < (ulong)plVar20[4]) {
          while( true ) {
            bVar4 = *(byte *)(plVar20[3] + uVar14);
            if (0x3a < bVar4) goto LAB_10160a1f4;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            uVar14 = uVar14 + 1;
            plVar20[5] = uVar14;
            if (plVar20[4] == uVar14) goto LAB_101609dac;
          }
          if ((ulong)bVar4 == 0x3a) {
            plVar20[5] = uVar14 + 1;
            FUN_10160a58c(&uStack_170,plVar20);
            plVar19 = plStack_250;
            plStack_a0 = plStack_248;
            plVar16 = extraout_x11_05;
            plVar17 = uStack_170;
            plVar11 = plStack_168;
            if (uStack_170 == (long *)0x8000000000000001) goto joined_r0x000101609fa8;
            plStack_240 = plStack_160;
            plVar19 = uStack_170;
            plStack_238 = plStack_168;
            goto LAB_101609188;
          }
LAB_10160a1f4:
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_170 = (long *)0x6;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
          plVar16 = extraout_x11_26;
        }
        else {
LAB_101609dac:
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_170 = (long *)0x3;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
          plVar16 = extraout_x11_17;
        }
        plVar19 = plStack_a8;
        plVar22 = plStack_b0;
        plVar17 = (long *)0x8000000000000002;
        goto joined_r0x000101609fa8;
      }
    }
    else if (uVar14 == 2) {
      iVar8 = _memcmp(plStack_168,&UNK_108cb022c,plStack_160);
      if (iVar8 == 0) {
        if (cVar13 != '\x02') {
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_90 = (long *)&UNK_108cb022c;
          plStack_88 = (long *)0xb;
          uStack_170 = &uStack_90;
          plStack_168 = (long *)&DAT_100c7b3a0;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_170);
          plVar16 = extraout_x11_27;
          goto LAB_1016099cc;
        }
        uVar14 = plVar20[5];
        if ((ulong)plVar20[4] <= uVar14) {
LAB_101609e18:
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_170 = (long *)0x3;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
          plVar16 = extraout_x11_18;
          goto LAB_1016099cc;
        }
        while( true ) {
          bVar4 = *(byte *)(plVar20[3] + uVar14);
          if (0x3a < bVar4) goto LAB_10160a290;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          uVar14 = uVar14 + 1;
          plVar20[5] = uVar14;
          if (plVar20[4] == uVar14) goto LAB_101609e18;
        }
        if ((ulong)bVar4 != 0x3a) {
LAB_10160a290:
          plStack_a8 = plStack_250;
          plStack_a0 = plStack_248;
          uStack_170 = (long *)0x6;
          plStack_b0 = plVar22;
          plVar11 = (long *)FUN_108831e8c(plVar20,&uStack_170);
          plVar16 = extraout_x11_28;
          goto LAB_1016099cc;
        }
        plVar20[5] = uVar14 + 1;
        FUN_100617894(&uStack_90,plVar20);
        plVar16 = extraout_x11_06;
        if ((char)uStack_90 == '\x01') goto LAB_101609edc;
        cVar13 = uStack_90._1_1_;
        goto LAB_101609188;
      }
      if (plVar5 == (long *)0x7) goto LAB_10160926c;
      if (plVar5 == (long *)0x15) goto LAB_101609288;
      if (plVar5 == (long *)0x9) goto LAB_1016091fc;
    }
  }
  plStack_a8 = plStack_250;
  plStack_100 = plStack_240;
  plStack_108 = plStack_238;
  plStack_a0 = plStack_248;
  plStack_b0 = plVar22;
LAB_1016099cc:
  plVar19 = plStack_a8;
  plVar22 = plStack_b0;
  if (-0x7ffffffffffffffe < (long)plVar17) {
    puVar18 = (undefined *)((long)plStack_240 + 1);
    plVar22 = plStack_238;
    while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
      FUN_100de6690(plVar22);
      plVar22 = plVar22 + 9;
      plVar16 = extraout_x11_10;
    }
    plVar19 = plStack_a8;
    plVar22 = plStack_b0;
    if (plVar17 != (long *)0x0) {
      _free(plStack_238);
      plVar19 = plStack_a8;
      plVar16 = extraout_x11_11;
      plVar22 = plStack_b0;
    }
  }
joined_r0x000101609fa8:
  plStack_b0 = plVar22;
  plStack_268 = plVar16;
  plStack_a8 = plVar19;
  if (-0x7ffffffffffffffe < (long)plVar12) {
    puVar18 = (undefined *)((long)plStack_a0 + 1);
    plVar22 = plVar19;
    while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
      FUN_100de6690(plVar22);
      plVar22 = plVar22 + 9;
      plStack_268 = extraout_x11_12;
    }
    plVar17 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      _free(plVar19);
      plStack_268 = extraout_x11_13;
    }
  }
  if ((-0x7ffffffffffffffe < (long)plStack_230) && (plStack_230 != (long *)0x0)) {
    _free(plStack_260);
    plStack_230 = extraout_x8_00;
    plStack_268 = extraout_x11_14;
  }
  plStack_110 = (long *)0x8000000000000002;
  plStack_260 = plVar11;
LAB_101609a94:
  *(char *)(param_1 + 9) = (char)param_1[9] + '\x01';
  plStack_e8 = plStack_178;
  plStack_f0 = plStack_180;
  plStack_d0 = plStack_188;
  plStack_d8 = plStack_190;
  plStack_108 = plStack_260;
  plStack_100 = plStack_268;
  plStack_f8 = plStack_230;
  plStack_e0 = plVar17;
  cStack_c8 = cVar13;
  cStack_c7 = cVar3;
  plVar19 = (long *)FUN_100654604(param_1);
  plVar17 = plStack_108;
  plStack_168 = plStack_108;
  uStack_170 = plStack_110;
  plStack_158 = plStack_f8;
  plStack_160 = plStack_100;
  plStack_148 = plStack_e8;
  plStack_150 = plStack_f0;
  plStack_138 = plStack_d8;
  plStack_140 = plStack_e0;
  uStack_128 = CONCAT62(uStack_c6,CONCAT11(cStack_c7,cStack_c8));
  plStack_130 = plStack_d0;
  plStack_120 = plVar19;
  if (plStack_110 == (long *)0x8000000000000002) {
    plVar22 = (long *)0x8000000000000002;
    if (plVar19 != (long *)0x0) {
      lVar15 = *plVar19;
      if (lVar15 == 1) {
        uVar14 = plVar19[1];
        if ((uVar14 & 3) == 1) {
          puVar9 = (undefined8 *)(uVar14 - 1);
          uVar10 = *puVar9;
          puVar21 = *(undefined8 **)(uVar14 + 7);
          if ((code *)*puVar21 != (code *)0x0) {
            (*(code *)*puVar21)(uVar10);
          }
LAB_101609c88:
          if (puVar21[1] != 0) {
            _free(uVar10);
          }
          goto LAB_101609b20;
        }
      }
      else {
LAB_101609b10:
        plVar17 = plStack_108;
        uStack_170 = plStack_110;
        plStack_168 = plStack_108;
        plStack_160 = plStack_100;
        plStack_158 = plStack_f8;
        plStack_150 = plStack_f0;
        plStack_148 = plStack_e8;
        plStack_140 = plStack_e0;
        plStack_138 = plStack_d8;
        plStack_130 = plStack_d0;
        plStack_120 = plVar19;
        if ((lVar15 == 0) && (plVar19[2] != 0)) {
          puVar9 = (undefined8 *)plVar19[1];
LAB_101609b20:
          _free(puVar9);
        }
      }
LAB_101609c00:
      _free(plVar19);
      plVar22 = (long *)0x8000000000000002;
    }
  }
  else if (plVar19 == (long *)0x0) {
LAB_101609b84:
    plStack_1c8 = plStack_f8;
    plStack_1d0 = plStack_100;
    plStack_1b8 = plStack_e8;
    plStack_1c0 = plStack_f0;
    plStack_1a8 = plStack_d8;
    plStack_1b0 = plStack_e0;
    uStack_198 = uStack_128;
    plStack_1a0 = plStack_d0;
    plVar17 = plStack_108;
    plVar22 = plStack_110;
    uStack_170 = plStack_110;
    plStack_168 = plStack_108;
    plStack_160 = plStack_100;
    plStack_158 = plStack_f8;
    plStack_150 = plStack_f0;
    plStack_148 = plStack_e8;
    plStack_140 = plStack_e0;
    plStack_138 = plStack_d8;
    plStack_130 = plStack_d0;
  }
  else {
    if (((plStack_110 != (long *)0x8000000000000001) && (plStack_110 != (long *)0x8000000000000000))
       && (plStack_110 != (long *)0x0)) {
      _free(plStack_108);
    }
    plVar17 = plStack_150;
    plVar22 = plStack_158;
    if (-0x7fffffffffffffff < (long)plStack_158) {
      puVar18 = (undefined *)((long)plStack_148 + 1);
      plVar12 = plStack_150;
      while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
        FUN_100de6690(plVar12);
        plVar12 = plVar12 + 9;
      }
      if (plVar22 != (long *)0x0) {
        _free(plVar17);
      }
    }
    plVar17 = plStack_138;
    plVar22 = plStack_140;
    if (-0x7fffffffffffffff < (long)plStack_140) {
      puVar18 = (undefined *)((long)plStack_130 + 1);
      plVar12 = plStack_138;
      while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
        FUN_100de6690(plVar12);
        plVar12 = plVar12 + 9;
      }
LAB_101609bdc:
      if (plVar22 != (long *)0x0) {
        _free(plVar17);
      }
    }
LAB_101609be8:
    plVar17 = plVar19;
    plVar22 = (long *)0x8000000000000002;
  }
LAB_101609c08:
  if (plVar22 != (long *)0x8000000000000002) {
    puVar9 = (undefined8 *)_malloc(0x50);
    if (puVar9 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101609f7c);
      (*pcVar6)();
    }
    uVar10 = 0;
    puVar9[5] = plStack_1b8;
    puVar9[4] = plStack_1c0;
    puVar9[7] = plStack_1a8;
    puVar9[6] = plStack_1b0;
    puVar9[9] = uStack_198;
    puVar9[8] = plStack_1a0;
    puVar9[1] = plVar17;
    *puVar9 = plVar22;
    puVar9[3] = plStack_1c8;
    puVar9[2] = plStack_1d0;
    goto LAB_101609c50;
  }
LAB_101609fd8:
  puVar9 = (undefined8 *)FUN_108832da4(plVar17,param_1);
LAB_1016090e8:
  uVar10 = 1;
LAB_101609c50:
  auVar23._8_8_ = puVar9;
  auVar23._0_8_ = uVar10;
  return auVar23;
}

