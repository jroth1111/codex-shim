
void FUN_101301e98(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar12;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined8 uVar13;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar14;
  long *extraout_x9_04;
  long *extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *extraout_x9_08;
  long *extraout_x9_09;
  long *extraout_x9_10;
  long *extraout_x9_11;
  long *extraout_x9_12;
  long *extraout_x9_13;
  long *extraout_x9_14;
  long *extraout_x9_15;
  long *extraout_x9_16;
  long *extraout_x9_17;
  long *extraout_x9_18;
  long *extraout_x9_19;
  long *extraout_x9_20;
  long *extraout_x9_21;
  long *extraout_x9_22;
  long lVar15;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long *extraout_x10_06;
  long *extraout_x10_07;
  long *extraout_x10_08;
  long *extraout_x10_09;
  long *extraout_x10_10;
  long *extraout_x10_11;
  long *extraout_x10_12;
  long *extraout_x10_13;
  long *plVar16;
  long *extraout_x10_14;
  long *extraout_x10_15;
  long *extraout_x10_16;
  long *extraout_x10_17;
  long *extraout_x10_18;
  long *extraout_x10_19;
  long *extraout_x10_20;
  long *extraout_x10_21;
  long *extraout_x10_22;
  long *extraout_x10_23;
  long *extraout_x10_24;
  long *extraout_x10_25;
  long *extraout_x10_26;
  long *plVar17;
  long *extraout_x10_27;
  long *extraout_x10_28;
  long *extraout_x10_29;
  long *extraout_x10_30;
  long *extraout_x10_31;
  long *extraout_x10_32;
  long *extraout_x10_33;
  long *extraout_x10_34;
  long *extraout_x10_35;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x12_02;
  long *extraout_x12_03;
  long *extraout_x12_04;
  long *extraout_x12_05;
  long *extraout_x12_06;
  long *extraout_x12_07;
  long *extraout_x12_08;
  long *extraout_x12_09;
  long *extraout_x12_10;
  long *extraout_x12_11;
  long *extraout_x12_12;
  long *extraout_x12_13;
  long *plVar18;
  long *extraout_x12_14;
  long *extraout_x12_15;
  long *extraout_x12_16;
  long *extraout_x12_17;
  long *extraout_x12_18;
  long *extraout_x12_19;
  long *extraout_x12_20;
  long *extraout_x12_21;
  long *extraout_x12_22;
  long *extraout_x12_23;
  long *extraout_x12_24;
  long *extraout_x12_25;
  long *extraout_x12_26;
  long *extraout_x12_27;
  long *extraout_x12_28;
  long *extraout_x12_29;
  long *extraout_x12_30;
  long *extraout_x12_31;
  long *extraout_x12_32;
  long *extraout_x12_33;
  long *extraout_x12_34;
  long *extraout_x12_35;
  char extraout_w13;
  char extraout_w13_00;
  char extraout_w13_01;
  char extraout_w13_02;
  char extraout_w13_03;
  char extraout_w13_04;
  char cVar19;
  char extraout_w13_05;
  char extraout_w13_06;
  char extraout_w13_07;
  char extraout_w13_08;
  char extraout_w13_09;
  char cVar20;
  long *unaff_x27;
  char cVar21;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_170;
  long lStack_168;
  undefined1 uStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  char cStack_a8;
  char cStack_a7;
  undefined6 uStack_a6;
  long lStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_71 [17];
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 < uVar2) {
    lVar15 = *(long *)(param_2 + 0x18);
    do {
      bVar3 = *(byte *)(lVar15 + uVar11);
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if (bVar3 != 0x6e) goto LAB_101301f84;
        uVar1 = uVar11 + 1;
        *(ulong *)(param_2 + 0x28) = uVar1;
        bVar5 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar11 + 1;
        }
        if (bVar5) {
          cVar21 = *(char *)(lVar15 + uVar11 + 1);
          *(ulong *)(param_2 + 0x28) = uVar11 + 2;
          if (cVar21 == 'u') {
            if (uVar11 + 2 == uVar2) goto LAB_101302bf4;
            cVar21 = *(char *)(lVar15 + uVar11 + 2);
            *(ulong *)(param_2 + 0x28) = uVar11 + 3;
            if (cVar21 == 'l') {
              if (uVar11 + 3 == uVar2) goto LAB_101302bf4;
              cVar21 = *(char *)(lVar15 + uVar11 + 3);
              *(ulong *)(param_2 + 0x28) = uVar11 + 4;
              if (cVar21 == 'l') {
                uVar13 = 0x8000000000000000;
                goto LAB_101302d18;
              }
            }
          }
          uStack_d8 = (long *)0x9;
        }
        else {
LAB_101302bf4:
          uStack_d8 = (long *)0x5;
        }
        uVar6 = FUN_10883295c(param_2,&uStack_d8);
        goto LAB_101302d10;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
    } while (uVar2 != uVar11);
  }
  else {
LAB_101301f84:
    if (uVar11 < uVar2) {
      do {
        bVar3 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
        if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
          if (bVar3 != 0x5b) {
            plVar14 = (long *)FUN_108832208(param_2,auStack_71,&UNK_10b20a320);
            goto LAB_101302d04;
          }
          cVar21 = *(char *)(param_2 + 0x48) + -1;
          *(char *)(param_2 + 0x48) = cVar21;
          if (cVar21 == '\0') {
            uStack_d8 = (long *)0x18;
            goto LAB_101301fc8;
          }
          *(ulong *)(param_2 + 0x28) = uVar11 + 1;
          uStack_160 = 1;
          plStack_158 = (long *)0x0;
          plStack_150 = (long *)0x8;
          plStack_148 = (long *)0x0;
          lStack_168 = param_2;
          goto LAB_10130202c;
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(param_2 + 0x28) = uVar11;
      } while (uVar2 != uVar11);
    }
  }
  uStack_d8 = (long *)0x5;
LAB_101301fc8:
  uVar6 = FUN_108831e8c(param_2,&uStack_d8);
  goto LAB_101302d10;
LAB_10130202c:
  cVar21 = '\0';
  plVar14 = (long *)&UNK_10b20a590;
  FUN_1011de3f0(&uStack_d8,&lStack_168);
  lVar15 = lStack_168;
  plVar17 = plStack_150;
  plVar8 = plStack_148;
  plVar9 = plStack_d0;
  if ((char)uStack_d8 != '\x01') {
    plVar17 = plStack_158;
    plVar9 = plStack_150;
    if (uStack_d8._1_1_ != '\x01') goto LAB_101302c2c;
    uVar11 = *(ulong *)(lStack_168 + 0x28);
    if (uVar11 < *(ulong *)(lStack_168 + 0x20)) {
      while (bVar3 = *(byte *)(*(long *)(lStack_168 + 0x18) + uVar11),
            bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0) {
        uVar11 = uVar11 + 1;
        *(ulong *)(lStack_168 + 0x28) = uVar11;
        if (*(ulong *)(lStack_168 + 0x20) == uVar11) goto LAB_101302b9c;
      }
      if (bVar3 == 0x5b) {
        cVar19 = *(char *)(lStack_168 + 0x48) + -1;
        *(char *)(lStack_168 + 0x48) = cVar19;
        if (cVar19 != '\0') {
          *(ulong *)(lStack_168 + 0x28) = uVar11 + 1;
          uStack_90 = (long *)lStack_168;
          plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
          FUN_1011de3f0(&uStack_d8,&uStack_90);
          plVar8 = (long *)((ulong)uStack_d8 & 0xff);
          plStack_170 = extraout_x10_06;
          plVar14 = extraout_x11;
          plVar17 = extraout_x12_06;
          cVar19 = extraout_w13;
          if ((char)uStack_d8 == '\x01') {
LAB_1013024f4:
            plVar16 = plVar17;
            plStack_c8 = plVar8;
            plVar10 = (long *)0x8000000000000000;
            unaff_x27 = plStack_d0;
            cVar21 = '\0';
          }
          else {
            if (uStack_d8._1_1_ != '\x01') {
              uVar6 = 0;
LAB_1013024e4:
              plStack_d0 = (long *)FUN_1087e422c(uVar6,&UNK_10b22f088,&UNK_10b20a590);
              plVar8 = extraout_x8_00;
              plStack_170 = extraout_x10_11;
              plVar14 = extraout_x11_03;
              plVar17 = extraout_x12_11;
              cVar19 = extraout_w13_04;
              goto LAB_1013024f4;
            }
            FUN_10123457c(&uStack_d8,uStack_90);
            plVar8 = (long *)((ulong)uStack_d8 & 0xff);
            plStack_170 = extraout_x10_07;
            plVar14 = extraout_x11_00;
            plVar17 = extraout_x12_07;
            cVar19 = extraout_w13_00;
            if ((char)uStack_d8 == '\x01') goto LAB_1013024f4;
            cVar4 = uStack_d8._1_1_;
            FUN_1011de3f0(&uStack_d8,&uStack_90);
            plVar8 = (long *)((ulong)uStack_d8 & 0xff);
            plStack_170 = extraout_x10_08;
            plVar14 = extraout_x11_01;
            plVar17 = extraout_x12_08;
            cVar19 = extraout_w13_01;
            if ((char)uStack_d8 == '\x01') goto LAB_1013024f4;
            if (uStack_d8._1_1_ != '\x01') {
              uVar6 = 1;
              goto LAB_1013024e4;
            }
            FUN_10160c7b0(&uStack_d8,uStack_90);
            plVar16 = plStack_c8;
            unaff_x27 = plStack_d0;
            plVar10 = uStack_d8;
            plVar8 = extraout_x8;
            plStack_170 = extraout_x10_09;
            plVar14 = extraout_x11_02;
            plVar17 = extraout_x12_09;
            cVar19 = extraout_w13_02;
            if (uStack_d8 == (long *)0x8000000000000000) goto LAB_1013024f4;
            FUN_1011de3f0(&uStack_d8,&uStack_90);
            plVar8 = (long *)((ulong)uStack_d8 & 0xff);
            plVar14 = plStack_d0;
            plVar17 = extraout_x10_10;
            plVar9 = extraout_x12_10;
            cVar20 = extraout_w13_03;
            if ((char)uStack_d8 == '\x01') {
LAB_1013029d4:
              plVar16 = plVar9;
              if (plVar10 != (long *)0x0) {
                _free(unaff_x27);
                plVar8 = extraout_x8_02;
                plVar17 = extraout_x10_27;
                plVar16 = extraout_x12_27;
                cVar20 = extraout_w13_09;
              }
              plStack_c8 = plVar8;
              plVar10 = (long *)0x8000000000000000;
              plStack_170 = plVar17;
              unaff_x27 = plVar14;
              cVar19 = cVar20;
            }
            else {
              if (uStack_d8._1_1_ != '\x01') {
                uVar6 = 2;
LAB_1013029c0:
                plVar14 = (long *)FUN_1087e422c(uVar6,&UNK_10b22f088,&UNK_10b20a590);
                plVar8 = extraout_x8_01;
                plVar17 = extraout_x10_26;
                plVar9 = extraout_x12_26;
                cVar20 = extraout_w13_08;
                goto LAB_1013029d4;
              }
              FUN_10126cbb0(&uStack_d8,uStack_90);
              plVar8 = (long *)((ulong)uStack_d8 & 0xff);
              plVar14 = plStack_d0;
              plVar17 = extraout_x10_22;
              plVar9 = extraout_x12_22;
              cVar20 = extraout_w13_05;
              if ((char)uStack_d8 == '\x01') goto LAB_1013029d4;
              cVar21 = uStack_d8._1_1_;
              FUN_1011de3f0(&uStack_d8,&uStack_90);
              plVar8 = (long *)((ulong)uStack_d8 & 0xff);
              plVar14 = plStack_d0;
              plVar17 = extraout_x10_23;
              plVar9 = extraout_x12_23;
              cVar20 = extraout_w13_06;
              if ((char)uStack_d8 == '\x01') goto LAB_1013029d4;
              if (uStack_d8._1_1_ != '\x01') {
                uVar6 = 3;
                goto LAB_1013029c0;
              }
              FUN_10160c7b0(&uStack_d8,uStack_90);
              plVar14 = plStack_d0;
              plVar8 = uStack_d8;
              plStack_170 = uStack_d8;
              plVar17 = extraout_x10_24;
              plVar9 = extraout_x12_24;
              cVar19 = cVar4;
              cVar20 = extraout_w13_07;
              if (uStack_d8 == (long *)0x8000000000000000) goto LAB_1013029d4;
            }
          }
          cStack_a7 = cVar21;
          cStack_a8 = cVar19;
          *(char *)(lVar15 + 0x48) = *(char *)(lVar15 + 0x48) + '\x01';
          uStack_d8 = plVar10;
          plStack_d0 = unaff_x27;
          plStack_b0 = plStack_c8;
          plStack_c8 = plVar16;
          plStack_c0 = plStack_170;
          plStack_b8 = plVar14;
          plVar8 = (long *)FUN_10065474c(lVar15);
          plStack_88 = (long *)CONCAT62(uStack_a6,CONCAT11(cStack_a7,cStack_a8));
          uStack_90 = plStack_b0;
          if (plVar10 == (long *)0x8000000000000000) {
            if (plVar8 != (long *)0x0) {
              lVar12 = *plVar8;
              if (lVar12 != 1) goto LAB_1013026f0;
              FUN_100de21d4(plVar8 + 1);
              goto LAB_101302758;
            }
            goto LAB_101302760;
          }
          if (plVar8 != (long *)0x0) {
            if (plVar10 != (long *)0x0) {
              _free(unaff_x27);
            }
            goto joined_r0x00010130257c;
          }
          plStack_f0 = plStack_b0;
          plStack_e8 = plStack_88;
          goto LAB_101302764;
        }
        uStack_d8 = (long *)0x18;
        plVar9 = (long *)FUN_108831e8c(lStack_168,&uStack_d8);
        plVar14 = (long *)&UNK_10b20a590;
        plVar17 = plStack_150;
        plVar8 = plStack_148;
      }
      else {
        if (bVar3 != 0x7b) {
          unaff_x27 = (long *)FUN_108832208(lStack_168,auStack_71,&UNK_10b20aec0);
          goto LAB_101302d80;
        }
        cVar21 = *(char *)(lStack_168 + 0x48) + -1;
        *(char *)(lStack_168 + 0x48) = cVar21;
        if (cVar21 != '\0') {
          *(ulong *)(lStack_168 + 0x28) = uVar11 + 1;
          lStack_a0 = lStack_168;
          uStack_98 = 1;
          cVar19 = '\x03';
          plVar10 = (long *)0x8000000000000000;
          cVar21 = '\x03';
          plVar8 = (long *)0x8000000000000000;
          plVar17 = unaff_x27;
LAB_1013020f4:
          unaff_x27 = plVar17;
          plStack_170 = plVar8;
          FUN_1011ddbc4(&uStack_d8,&lStack_a0);
          lVar12 = lStack_a0;
          plVar14 = extraout_x9;
          plVar16 = extraout_x10;
          plVar18 = extraout_x12;
          plVar9 = plStack_d0;
          if ((char)uStack_d8 == '\x01') {
LAB_1013024d4:
            bVar5 = true;
            goto LAB_101302640;
          }
          if (uStack_d8._1_1_ == '\x01') {
            *(long *)(lStack_a0 + 0x28) = *(long *)(lStack_a0 + 0x28) + 1;
            *(undefined8 *)(lStack_a0 + 0x10) = 0;
            __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                      (&uStack_d8,lStack_a0 + 0x18,lStack_a0);
            plVar14 = uStack_d8;
            plVar16 = extraout_x10_00;
            plVar18 = extraout_x12_00;
            plVar9 = plStack_d0;
            if (uStack_d8 == (long *)0x2) goto LAB_1013024d4;
            plVar8 = plStack_170;
            plVar17 = unaff_x27;
            if (plStack_c8 == (long *)0x4) {
              if ((int)*plStack_d0 != 0x656c6f72) {
                if ((int)*plStack_d0 != 0x656d616e) goto LAB_101302230;
                if (plStack_170 != (long *)0x8000000000000000) {
                  uStack_90 = (long *)&UNK_108c61018;
                  plStack_88 = (long *)0x4;
                  uStack_d8 = &uStack_90;
                  plStack_d0 = (long *)&DAT_100c7b3a0;
                  plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
                  bVar5 = true;
                  plVar14 = extraout_x9_18;
                  plVar16 = extraout_x10_31;
                  plVar18 = extraout_x12_31;
                  goto joined_r0x000101302b24;
                }
                uVar11 = *(ulong *)(lVar12 + 0x28);
                if (uVar11 < *(ulong *)(lVar12 + 0x20)) {
                  while( true ) {
                    bVar3 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                    if (0x3a < bVar3) goto LAB_101302b80;
                    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
                    uVar11 = uVar11 + 1;
                    *(ulong *)(lVar12 + 0x28) = uVar11;
                    if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_101302994;
                  }
                  if ((ulong)bVar3 == 0x3a) {
                    *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
                    FUN_10160c7b0(&uStack_90,lVar12);
                    plStack_190 = plStack_88;
                    plStack_1a0 = plStack_80;
                    plVar14 = (long *)0x8000000000000000;
                    plVar8 = uStack_90;
                    if (uStack_90 == (long *)0x8000000000000000) {
                      bVar5 = true;
                      plVar16 = extraout_x10_05;
                      plVar18 = extraout_x12_05;
                      plVar9 = plStack_88;
                      goto LAB_10130265c;
                    }
                    goto LAB_1013020f4;
                  }
LAB_101302b80:
                  uStack_d8 = (long *)0x6;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_22;
                  plVar16 = extraout_x10_35;
                  plVar18 = extraout_x12_35;
                }
                else {
LAB_101302994:
                  uStack_d8 = (long *)0x3;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_14;
                  plVar16 = extraout_x10_25;
                  plVar18 = extraout_x12_25;
                }
                bVar5 = true;
                goto LAB_10130265c;
              }
              if (cVar19 == '\x03') {
                uVar11 = *(ulong *)(lVar12 + 0x28);
                if (*(ulong *)(lVar12 + 0x20) <= uVar11) {
LAB_1013028cc:
                  uStack_d8 = (long *)0x3;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_12;
                  plVar16 = extraout_x10_20;
                  plVar18 = extraout_x12_20;
                  goto LAB_10130263c;
                }
                while( true ) {
                  bVar3 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                  if (0x3a < bVar3) goto LAB_101302b50;
                  if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
                  uVar11 = uVar11 + 1;
                  *(ulong *)(lVar12 + 0x28) = uVar11;
                  if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1013028cc;
                }
                if ((ulong)bVar3 != 0x3a) {
LAB_101302b50:
                  uStack_d8 = (long *)0x6;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_20;
                  plVar16 = extraout_x10_33;
                  plVar18 = extraout_x12_33;
                  goto LAB_10130263c;
                }
                *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
                FUN_10126cbb0(&uStack_90,lVar12);
                plVar7 = (long *)((ulong)uStack_90 & 1);
                plVar9 = plStack_88;
                plVar14 = extraout_x9_01;
                plVar16 = extraout_x10_02;
                plVar18 = extraout_x12_02;
                cVar19 = uStack_90._1_1_;
joined_r0x00010130223c:
                if (plVar7 != (long *)0x0) goto LAB_1013024d4;
                goto LAB_1013020f4;
              }
              uStack_90 = (long *)&UNK_108cde374;
              plStack_88 = (long *)0x4;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
              plVar14 = extraout_x9_17;
              plVar16 = extraout_x10_30;
              plVar18 = extraout_x12_30;
            }
            else {
              if (plStack_c8 == (long *)0xc) {
                if (*plStack_d0 != 0x617069636e697270 || (int)plStack_d0[1] != 0x64695f6c)
                goto LAB_101302230;
                if (plVar10 != (long *)0x8000000000000000) {
                  uStack_90 = (long *)&UNK_108cb6a0a;
                  plStack_88 = (long *)0xc;
                  uStack_d8 = &uStack_90;
                  plStack_d0 = (long *)&DAT_100c7b3a0;
                  plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
                  plVar14 = extraout_x9_16;
                  plVar16 = extraout_x10_29;
                  plVar18 = extraout_x12_29;
                  goto LAB_10130263c;
                }
                uVar11 = *(ulong *)(lVar12 + 0x28);
                if (*(ulong *)(lVar12 + 0x20) <= uVar11) {
LAB_1013028ec:
                  uStack_d8 = (long *)0x3;
                  plVar10 = (long *)0x0;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_13;
                  plVar16 = extraout_x10_21;
                  plVar18 = extraout_x12_21;
                  goto LAB_10130263c;
                }
                while( true ) {
                  bVar3 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                  if (0x3a < bVar3) goto LAB_101302b2c;
                  if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
                  uVar11 = uVar11 + 1;
                  *(ulong *)(lVar12 + 0x28) = uVar11;
                  if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1013028ec;
                }
                if ((ulong)bVar3 != 0x3a) {
LAB_101302b2c:
                  uStack_d8 = (long *)0x6;
                  plVar10 = (long *)0x0;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_19;
                  plVar16 = extraout_x10_32;
                  plVar18 = extraout_x12_32;
                  goto LAB_10130263c;
                }
                *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
                FUN_10160c7b0(&uStack_90,lVar12);
                plStack_198 = plStack_80;
                plVar17 = plStack_88;
                plVar10 = uStack_90;
                if (uStack_90 == (long *)0x8000000000000000) goto LAB_101302a08;
                goto LAB_1013020f4;
              }
              if ((plStack_c8 != (long *)0xe) ||
                 (*plStack_d0 != 0x617069636e697270 ||
                  *(long *)((long)plStack_d0 + 6) != 0x657079745f6c6170)) {
LAB_101302230:
                plVar7 = (long *)FUN_10062a8ec(lVar12);
                plVar9 = plVar7;
                plVar14 = extraout_x9_00;
                plVar16 = extraout_x10_01;
                plVar18 = extraout_x12_01;
                goto joined_r0x00010130223c;
              }
              if (cVar21 == '\x03') {
                uVar11 = *(ulong *)(lVar12 + 0x28);
                if (uVar11 < *(ulong *)(lVar12 + 0x20)) {
                  while( true ) {
                    bVar3 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                    if (0x3a < bVar3) goto LAB_101302b68;
                    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
                    uVar11 = uVar11 + 1;
                    *(ulong *)(lVar12 + 0x28) = uVar11;
                    if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1013028b4;
                  }
                  if ((ulong)bVar3 == 0x3a) {
                    *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
                    FUN_10123457c(&uStack_90,lVar12);
                    plVar14 = extraout_x9_02;
                    plVar16 = extraout_x10_03;
                    plVar18 = extraout_x12_03;
                    plVar9 = plStack_88;
                    if ((char)uStack_90 == '\x01') goto LAB_10130263c;
                    cVar21 = uStack_90._1_1_;
                    goto LAB_1013020f4;
                  }
LAB_101302b68:
                  uStack_d8 = (long *)0x6;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_21;
                  plVar16 = extraout_x10_34;
                  plVar18 = extraout_x12_34;
                }
                else {
LAB_1013028b4:
                  uStack_d8 = (long *)0x3;
                  plVar9 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar14 = extraout_x9_11;
                  plVar16 = extraout_x10_19;
                  plVar18 = extraout_x12_19;
                }
              }
              else {
                uStack_90 = (long *)&UNK_108cb69fc;
                plStack_88 = (long *)0xe;
                uStack_d8 = &uStack_90;
                plStack_d0 = (long *)&DAT_100c7b3a0;
                plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
                plVar14 = extraout_x9_15;
                plVar16 = extraout_x10_28;
                plVar18 = extraout_x12_28;
              }
            }
          }
          else {
            if (cVar21 != '\x03') {
              if (plVar10 == (long *)0x8000000000000000) {
                uStack_90 = (long *)&UNK_108cb6a0a;
                plStack_88 = (long *)0xc;
                plVar10 = (long *)0x0;
                uStack_d8 = &uStack_90;
                plStack_d0 = (long *)&DAT_100c7b3a0;
                plVar9 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
                plVar14 = extraout_x9_05;
                plVar16 = extraout_x10_13;
                plVar18 = extraout_x12_13;
                goto LAB_10130263c;
              }
              if (cVar19 == '\x03') {
                uStack_90 = (long *)&UNK_108cde374;
                plStack_88 = (long *)0x4;
                uStack_d8 = &uStack_90;
                plStack_d0 = (long *)&DAT_100c7b3a0;
                plVar9 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
                plVar14 = extraout_x9_08;
                plVar16 = extraout_x10_16;
                plVar18 = extraout_x12_16;
              }
              else {
                plVar14 = plStack_190;
                plVar16 = plStack_198;
                plVar18 = plStack_1a0;
                if (plStack_170 != (long *)0x8000000000000000) goto LAB_10130268c;
                uStack_90 = (long *)&UNK_108c61018;
                plStack_88 = (long *)0x4;
                uStack_d8 = &uStack_90;
                plStack_d0 = (long *)&DAT_100c7b3a0;
                plVar9 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
                plVar14 = extraout_x9_09;
                plVar16 = extraout_x10_17;
                plVar18 = extraout_x12_17;
              }
              if (plVar10 != (long *)0x0) {
                _free(unaff_x27);
                plVar14 = extraout_x9_10;
                plVar16 = extraout_x10_18;
                plVar18 = extraout_x12_18;
              }
              bVar5 = false;
              goto LAB_101302640;
            }
            uStack_90 = (long *)&UNK_108cb69fc;
            plStack_88 = (long *)0xe;
            uStack_d8 = &uStack_90;
            plStack_d0 = (long *)&DAT_100c7b3a0;
            plVar9 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
            plVar14 = extraout_x9_04;
            plVar16 = extraout_x10_12;
            plVar18 = extraout_x12_12;
          }
LAB_10130263c:
          bVar5 = true;
          goto LAB_101302640;
        }
        uStack_d8 = (long *)0x18;
        plVar9 = (long *)FUN_108831e8c(lStack_168,&uStack_d8);
        plVar17 = plStack_150;
        plVar8 = plStack_148;
      }
    }
    else {
LAB_101302b9c:
      uStack_d8 = (long *)0x5;
      plVar9 = (long *)FUN_108831e8c(lStack_168,&uStack_d8);
      plVar17 = plStack_150;
      plVar8 = plStack_148;
    }
  }
  goto joined_r0x000101302c14;
LAB_101302a08:
  bVar5 = true;
  plVar10 = (long *)0x0;
  plVar14 = extraout_x9_03;
  plVar16 = extraout_x10_04;
  plVar18 = extraout_x12_04;
  plVar9 = plStack_88;
LAB_101302640:
  if (plStack_170 != (long *)0x8000000000000000) {
joined_r0x000101302b24:
    if (plStack_170 != (long *)0x0) {
      _free(plStack_190);
      plVar14 = extraout_x9_06;
      plVar16 = extraout_x10_14;
      plVar18 = extraout_x12_14;
    }
  }
LAB_10130265c:
  if ((bVar5) && (((ulong)plVar10 & 0x7fffffffffffffff) != 0)) {
    _free(unaff_x27);
    plVar10 = (long *)0x8000000000000000;
    plVar14 = extraout_x9_07;
    plVar16 = extraout_x10_15;
    plVar18 = extraout_x12_15;
    unaff_x27 = plVar9;
    cVar19 = '\0';
  }
  else {
    plVar10 = (long *)0x8000000000000000;
    unaff_x27 = plVar9;
    cVar19 = '\0';
  }
LAB_10130268c:
  cStack_a7 = cVar19;
  plVar17 = (long *)0x8000000000000000;
  *(char *)(lVar15 + 0x48) = *(char *)(lVar15 + 0x48) + '\x01';
  uStack_d8 = plVar10;
  plStack_d0 = unaff_x27;
  plStack_c8 = plVar16;
  plStack_c0 = plStack_170;
  plStack_b8 = plVar14;
  plStack_b0 = plVar18;
  cStack_a8 = cVar21;
  plVar8 = (long *)FUN_100654604(lVar15);
  plStack_88 = (long *)CONCAT62(uStack_a6,CONCAT11(cStack_a7,cStack_a8));
  uStack_90 = plStack_b0;
  if (plVar10 == (long *)0x8000000000000000) {
    if (plVar8 == (long *)0x0) {
      plVar10 = (long *)0x8000000000000000;
      plVar16 = plVar17;
    }
    else {
      lVar12 = *plVar8;
      plVar16 = plVar17;
      if (lVar12 == 1) {
        FUN_100de21d4(plVar8 + 1);
      }
      else {
LAB_1013026f0:
        uStack_90 = plStack_b0;
        if ((lVar12 == 0) && (plVar8[2] != 0)) {
          _free(plVar8[1]);
        }
      }
LAB_101302758:
      _free(plVar8);
LAB_101302760:
      plVar10 = (long *)0x8000000000000000;
    }
  }
  else if (plVar8 == (long *)0x0) {
    plStack_f0 = plStack_b0;
    plStack_e8 = plStack_88;
  }
  else {
    plVar16 = plVar17;
    if (plVar10 != (long *)0x0) {
      _free(unaff_x27);
    }
joined_r0x00010130257c:
    unaff_x27 = plVar8;
    if (plStack_170 != (long *)0x0) {
      _free(plVar14);
    }
    plVar10 = (long *)0x8000000000000000;
  }
LAB_101302764:
  plVar8 = plStack_148;
  if (plVar10 != (long *)0x8000000000000000) {
    plStack_138 = plStack_e8;
    plStack_140 = plStack_f0;
    plVar17 = plStack_150;
    plVar9 = unaff_x27;
    if (plVar10 == (long *)0x8000000000000001) goto joined_r0x000101302c14;
    plStack_110 = plStack_170;
    plStack_f8 = plStack_e8;
    plStack_100 = plStack_f0;
    plStack_128 = plVar10;
    plStack_120 = unaff_x27;
    plStack_118 = plVar16;
    plStack_108 = plVar14;
    if (plStack_148 == plStack_158) {
      func_0x0001089507a4(&plStack_158);
    }
    plVar14 = plStack_150 + (long)plVar8 * 7;
    plVar14[1] = (long)plStack_120;
    *plVar14 = (long)plStack_128;
    plVar14[3] = (long)plStack_110;
    plVar14[2] = (long)plStack_118;
    plVar14[5] = (long)plStack_100;
    plVar14[4] = (long)plStack_108;
    plVar14[6] = (long)plStack_f8;
    plStack_148 = (long *)((long)plVar8 + 1);
    goto LAB_10130202c;
  }
LAB_101302d80:
  plVar9 = (long *)FUN_108832da4(unaff_x27,lVar15);
  plVar17 = plStack_150;
  plVar8 = plStack_148;
joined_r0x000101302c14:
  plStack_150 = plVar17;
  plStack_148 = plVar8;
  if (plVar8 != (long *)0x0) {
    plVar14 = plVar17 + 4;
    do {
      if (plVar14[-4] != 0) {
        _free(plVar14[-3]);
      }
      if (plVar14[-1] != 0) {
        _free(*plVar14);
      }
      plVar14 = plVar14 + 7;
      plVar8 = (long *)((long)plVar8 + -1);
    } while (plVar8 != (long *)0x0);
  }
  if (plStack_158 != (long *)0x0) {
    _free(plVar17);
  }
  plVar17 = (long *)0x8000000000000000;
  plVar8 = plVar14;
LAB_101302c2c:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  uStack_d8 = plVar17;
  plStack_d0 = plVar9;
  plStack_c8 = plVar8;
  plVar10 = (long *)FUN_10065474c(param_2);
  if (plVar17 == (long *)0x8000000000000000) {
    plVar14 = plVar9;
    if (plVar10 != (long *)0x0) {
      if (*plVar10 == 1) {
        FUN_100de21d4(plVar10 + 1);
      }
      else if ((*plVar10 == 0) && (plVar10[2] != 0)) {
        _free(plVar10[1]);
      }
      _free(plVar10);
    }
  }
  else {
    if (plVar10 == (long *)0x0) {
      *param_1 = plVar17;
      param_1[1] = plVar9;
      param_1[2] = plVar8;
      return;
    }
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar9 + 4;
      do {
        if (plVar14[-4] != 0) {
          _free(plVar14[-3]);
        }
        if (plVar14[-1] != 0) {
          _free(*plVar14);
        }
        plVar14 = plVar14 + 7;
        plVar8 = (long *)((long)plVar8 + -1);
      } while (plVar8 != (long *)0x0);
    }
    plVar14 = plVar10;
    if (plVar17 != (long *)0x0) {
      _free(plVar9);
    }
  }
LAB_101302d04:
  uVar6 = FUN_108832da4(plVar14,param_2);
LAB_101302d10:
  uVar13 = 0x8000000000000001;
  param_1[1] = uVar6;
LAB_101302d18:
  *param_1 = uVar13;
  return;
}

