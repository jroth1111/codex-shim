
void FUN_1012cc674(undefined8 *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar13;
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
  long *plVar14;
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
  char cVar15;
  char extraout_w13_05;
  char extraout_w13_06;
  char extraout_w13_07;
  char extraout_w13_08;
  char extraout_w13_09;
  char cVar16;
  char cVar17;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_180;
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
  
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
      if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if (bVar1 != 0x5b) {
          plVar8 = (long *)FUN_108832208(param_2,auStack_71,&UNK_10b24ec58);
          goto LAB_1012cd448;
        }
        cVar17 = *(char *)(param_2 + 0x48) + -1;
        *(char *)(param_2 + 0x48) = cVar17;
        if (cVar17 != '\0') {
          *(ulong *)(param_2 + 0x28) = uVar11 + 1;
          uStack_160 = 1;
          plStack_158 = (long *)0x0;
          plStack_150 = (long *)0x8;
          plStack_148 = (long *)0x0;
          lStack_168 = param_2;
          goto LAB_1012cc748;
        }
        uStack_d8 = (long *)0x18;
        goto LAB_1012cc6e4;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
    } while (*(ulong *)(param_2 + 0x20) != uVar11);
  }
  uStack_d8 = (long *)0x5;
LAB_1012cc6e4:
  uVar5 = FUN_108831e8c(param_2,&uStack_d8);
  goto LAB_1012cd454;
LAB_1012cc748:
  cVar17 = '\0';
  plVar8 = (long *)&UNK_10b20a590;
  FUN_1011de3f0(&uStack_d8,&lStack_168);
  lVar3 = lStack_168;
  plVar7 = plStack_150;
  plVar6 = plStack_148;
  plVar9 = plStack_d0;
  if ((char)uStack_d8 != '\x01') {
    plVar7 = plStack_158;
    plVar9 = plStack_150;
    if (uStack_d8._1_1_ != '\x01') goto LAB_1012cd354;
    uVar11 = *(ulong *)(lStack_168 + 0x28);
    if (uVar11 < *(ulong *)(lStack_168 + 0x20)) {
      while (bVar1 = *(byte *)(*(long *)(lStack_168 + 0x18) + uVar11),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar11 = uVar11 + 1;
        *(ulong *)(lStack_168 + 0x28) = uVar11;
        if (*(ulong *)(lStack_168 + 0x20) == uVar11) goto LAB_1012cd2dc;
      }
      if (bVar1 == 0x5b) {
        cVar15 = *(char *)(lStack_168 + 0x48) + -1;
        *(char *)(lStack_168 + 0x48) = cVar15;
        if (cVar15 != '\0') {
          *(ulong *)(lStack_168 + 0x28) = uVar11 + 1;
          uStack_90 = (long *)lStack_168;
          plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
          FUN_1011de3f0(&uStack_d8,&uStack_90);
          plVar6 = (long *)((ulong)uStack_d8 & 0xff);
          plStack_170 = extraout_x10_06;
          plVar8 = extraout_x11;
          plVar7 = extraout_x12_06;
          cVar15 = extraout_w13;
          if ((char)uStack_d8 == '\x01') {
LAB_1012cccf8:
            plVar10 = plVar7;
            plStack_c8 = plVar6;
            plStack_180 = (long *)0x8000000000000000;
            plVar9 = plStack_d0;
            cVar17 = '\0';
          }
          else {
            if (uStack_d8._1_1_ != '\x01') {
              uVar5 = 0;
LAB_1012ccce8:
              plStack_d0 = (long *)FUN_1087e422c(uVar5,&UNK_10b22f3e8,&UNK_10b20a590);
              plVar6 = extraout_x8;
              plStack_170 = extraout_x10_13;
              plVar8 = extraout_x11_03;
              plVar7 = extraout_x12_13;
              cVar15 = extraout_w13_04;
              goto LAB_1012cccf8;
            }
            FUN_10123457c(&uStack_d8,uStack_90);
            plVar6 = (long *)((ulong)uStack_d8 & 0xff);
            plStack_170 = extraout_x10_07;
            plVar8 = extraout_x11_00;
            plVar7 = extraout_x12_07;
            cVar15 = extraout_w13_00;
            if ((char)uStack_d8 == '\x01') goto LAB_1012cccf8;
            cVar4 = uStack_d8._1_1_;
            FUN_1011de3f0(&uStack_d8,&uStack_90);
            plVar6 = (long *)((ulong)uStack_d8 & 0xff);
            plStack_170 = extraout_x10_08;
            plVar8 = extraout_x11_01;
            plVar7 = extraout_x12_08;
            cVar15 = extraout_w13_01;
            if ((char)uStack_d8 == '\x01') goto LAB_1012cccf8;
            if (uStack_d8._1_1_ != '\x01') {
              uVar5 = 1;
              goto LAB_1012ccce8;
            }
            FUN_10160c7b0(&uStack_d8,uStack_90);
            plVar10 = plStack_c8;
            plVar9 = plStack_d0;
            plStack_180 = uStack_d8;
            plVar6 = uStack_d8;
            plStack_170 = extraout_x10_09;
            plVar8 = extraout_x11_02;
            plVar7 = extraout_x12_09;
            cVar15 = extraout_w13_02;
            if (uStack_d8 == (long *)0x8000000000000000) goto LAB_1012cccf8;
            FUN_1011de3f0(&uStack_d8,&uStack_90);
            plVar6 = (long *)((ulong)uStack_d8 & 0xff);
            plVar8 = plStack_d0;
            plVar7 = extraout_x10_10;
            plVar13 = extraout_x12_10;
            cVar16 = extraout_w13_03;
            if ((char)uStack_d8 == '\x01') {
LAB_1012cd11c:
              plVar10 = plVar13;
              if (plStack_180 != (long *)0x0) {
                _free(plVar9);
                plVar6 = extraout_x8_01;
                plVar7 = extraout_x10_27;
                plVar10 = extraout_x12_27;
                cVar16 = extraout_w13_09;
              }
              plStack_c8 = plVar6;
              plStack_180 = (long *)0x8000000000000000;
              plStack_170 = plVar7;
              plVar9 = plVar8;
              cVar15 = cVar16;
            }
            else {
              if (uStack_d8._1_1_ != '\x01') {
                uVar5 = 2;
LAB_1012cd108:
                plVar8 = (long *)FUN_1087e422c(uVar5,&UNK_10b22f3e8,&UNK_10b20a590);
                plVar6 = extraout_x8_00;
                plVar7 = extraout_x10_26;
                plVar13 = extraout_x12_26;
                cVar16 = extraout_w13_08;
                goto LAB_1012cd11c;
              }
              FUN_10126cbb0(&uStack_d8,uStack_90);
              plVar6 = (long *)((ulong)uStack_d8 & 0xff);
              plVar8 = plStack_d0;
              plVar7 = extraout_x10_22;
              plVar13 = extraout_x12_22;
              cVar16 = extraout_w13_05;
              if ((char)uStack_d8 == '\x01') goto LAB_1012cd11c;
              cVar17 = uStack_d8._1_1_;
              FUN_1011de3f0(&uStack_d8,&uStack_90);
              plVar6 = (long *)((ulong)uStack_d8 & 0xff);
              plVar8 = plStack_d0;
              plVar7 = extraout_x10_23;
              plVar13 = extraout_x12_23;
              cVar16 = extraout_w13_06;
              if ((char)uStack_d8 == '\x01') goto LAB_1012cd11c;
              if (uStack_d8._1_1_ != '\x01') {
                uVar5 = 3;
                goto LAB_1012cd108;
              }
              FUN_10160c7b0(&uStack_d8,uStack_90);
              plVar8 = plStack_d0;
              plVar6 = uStack_d8;
              plStack_170 = uStack_d8;
              plVar7 = extraout_x10_24;
              plVar13 = extraout_x12_24;
              cVar15 = cVar4;
              cVar16 = extraout_w13_07;
              if (uStack_d8 == (long *)0x8000000000000000) goto LAB_1012cd11c;
            }
          }
          cStack_a7 = cVar17;
          cStack_a8 = cVar15;
          *(char *)(lVar3 + 0x48) = *(char *)(lVar3 + 0x48) + '\x01';
          uStack_d8 = plStack_180;
          plStack_d0 = plVar9;
          plStack_b0 = plStack_c8;
          plStack_c8 = plVar10;
          plStack_c0 = plStack_170;
          plStack_b8 = plVar8;
          plVar6 = (long *)FUN_10065474c(lVar3);
          plStack_88 = (long *)CONCAT62(uStack_a6,CONCAT11(cStack_a7,cStack_a8));
          uStack_90 = plStack_b0;
          if (plStack_180 == (long *)0x8000000000000000) {
            if (plVar6 != (long *)0x0) {
              lVar12 = *plVar6;
              if (lVar12 != 1) goto LAB_1012ccd60;
              FUN_100de21d4(plVar6 + 1);
              goto LAB_1012cce88;
            }
            goto LAB_1012cce90;
          }
          plVar7 = plVar9;
          if (plVar6 != (long *)0x0) goto joined_r0x0001012ccd80;
          plStack_f0 = plStack_b0;
          plStack_e8 = plStack_88;
          goto LAB_1012cce94;
        }
        uStack_d8 = (long *)0x18;
        plVar9 = (long *)FUN_108831e8c(lStack_168,&uStack_d8);
        plVar8 = (long *)&UNK_10b20a590;
        plVar7 = plStack_150;
        plVar6 = plStack_148;
      }
      else {
        if (bVar1 != 0x7b) {
          plVar9 = (long *)FUN_108832208(lStack_168,auStack_71,&UNK_10b24ef18);
          goto LAB_1012cd49c;
        }
        cVar17 = *(char *)(lStack_168 + 0x48) + -1;
        *(char *)(lStack_168 + 0x48) = cVar17;
        if (cVar17 != '\0') {
          *(ulong *)(lStack_168 + 0x28) = uVar11 + 1;
          lStack_a0 = lStack_168;
          uStack_98 = 1;
          cVar15 = '\x03';
          plStack_180 = (long *)0x8000000000000000;
          cVar17 = '\x03';
          plVar6 = (long *)0x8000000000000000;
LAB_1012cc814:
          plStack_170 = plVar6;
          plVar9 = plVar8;
          FUN_1011ddbc4(&uStack_d8,&lStack_a0);
          lVar12 = lStack_a0;
          plVar13 = extraout_x9;
          plVar10 = extraout_x10;
          plVar14 = extraout_x12;
          plVar7 = plStack_d0;
          if ((char)uStack_d8 == '\x01') {
LAB_1012ccc10:
            bVar2 = true;
            goto LAB_1012ccc18;
          }
          if (uStack_d8._1_1_ != '\x01') {
            if (cVar17 == '\x03') {
              uStack_90 = (long *)&UNK_108cb69fc;
              plStack_88 = (long *)0xe;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar7 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
              plVar13 = extraout_x9_06;
              plVar10 = extraout_x10_14;
              plVar14 = extraout_x12_14;
LAB_1012ccdf0:
              bVar2 = true;
              goto LAB_1012ccc18;
            }
            if (plStack_180 == (long *)0x8000000000000000) {
              uStack_90 = (long *)&UNK_108cb6a0a;
              plStack_88 = (long *)0xc;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar7 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
              plVar13 = extraout_x9_07;
              plVar10 = extraout_x10_15;
              plVar14 = extraout_x12_15;
              goto LAB_1012cce6c;
            }
            if (cVar15 == '\x03') {
              uStack_90 = (long *)&UNK_108cde374;
              plStack_88 = (long *)0x4;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar7 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
              plVar13 = extraout_x9_08;
              plVar10 = extraout_x10_16;
              plVar14 = extraout_x12_16;
            }
            else {
              plVar8 = plStack_190;
              plVar10 = plStack_198;
              plVar14 = plStack_1a0;
              if (plStack_170 != (long *)0x8000000000000000) goto LAB_1012ccc64;
              uStack_90 = (long *)&UNK_108c61018;
              plStack_88 = (long *)0x4;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar7 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
              plVar13 = extraout_x9_09;
              plVar10 = extraout_x10_17;
              plVar14 = extraout_x12_17;
            }
            plStack_198 = plVar9;
            if (plStack_180 == (long *)0x0) {
              plStack_180 = (long *)0x0;
              bVar2 = false;
            }
            else {
              _free(plVar9);
              bVar2 = false;
              plVar13 = extraout_x9_10;
              plVar10 = extraout_x10_18;
              plVar14 = extraout_x12_18;
            }
            goto LAB_1012ccc18;
          }
          *(long *)(lStack_a0 + 0x28) = *(long *)(lStack_a0 + 0x28) + 1;
          *(undefined8 *)(lStack_a0 + 0x10) = 0;
          __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                    (&uStack_d8,lStack_a0 + 0x18,lStack_a0);
          plVar13 = uStack_d8;
          plVar10 = extraout_x10_00;
          plVar14 = extraout_x12_00;
          plVar7 = plStack_d0;
          if (uStack_d8 == (long *)0x2) goto LAB_1012ccc10;
          plVar8 = plVar9;
          plVar6 = plStack_170;
          if (plStack_c8 == (long *)0x4) {
            if ((int)*plStack_d0 != 0x656c6f72) {
              if ((int)*plStack_d0 == 0x656d616e) {
                if (plStack_170 != (long *)0x8000000000000000) {
                  uStack_90 = (long *)&UNK_108c61018;
                  plStack_88 = (long *)0x4;
                  uStack_d8 = &uStack_90;
                  plStack_d0 = (long *)&DAT_100c7b3a0;
                  plVar7 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
                  bVar2 = true;
                  plVar13 = extraout_x9_18;
                  plVar10 = extraout_x10_31;
                  plVar14 = extraout_x12_31;
                  goto joined_r0x0001012cd260;
                }
                uVar11 = *(ulong *)(lVar12 + 0x28);
                if (uVar11 < *(ulong *)(lVar12 + 0x20)) {
                  while( true ) {
                    bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                    if (0x3a < bVar1) goto LAB_1012cd2c0;
                    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
                    uVar11 = uVar11 + 1;
                    *(ulong *)(lVar12 + 0x28) = uVar11;
                    if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1012cd0dc;
                  }
                  if ((ulong)bVar1 == 0x3a) {
                    *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
                    FUN_10160c7b0(&uStack_90,lVar12);
                    plStack_190 = plStack_88;
                    plStack_1a0 = plStack_80;
                    plVar13 = (long *)0x8000000000000000;
                    plVar6 = uStack_90;
                    if (uStack_90 == (long *)0x8000000000000000) {
                      bVar2 = true;
                      plVar10 = extraout_x10_05;
                      plVar14 = extraout_x12_05;
                      plVar7 = plStack_88;
                      goto LAB_1012ccc34;
                    }
                    goto LAB_1012cc814;
                  }
LAB_1012cd2c0:
                  uStack_d8 = (long *)0x6;
                  plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar13 = extraout_x9_22;
                  plVar10 = extraout_x10_35;
                  plVar14 = extraout_x12_35;
                }
                else {
LAB_1012cd0dc:
                  uStack_d8 = (long *)0x3;
                  plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                  plVar13 = extraout_x9_14;
                  plVar10 = extraout_x10_25;
                  plVar14 = extraout_x12_25;
                }
                bVar2 = true;
                goto LAB_1012ccc34;
              }
LAB_1012cc958:
              plVar7 = (long *)FUN_10062a8ec(lVar12);
              plVar13 = extraout_x9_00;
              plVar10 = extraout_x10_01;
              plVar14 = extraout_x12_01;
              if (plVar7 != (long *)0x0) goto LAB_1012ccc10;
              goto LAB_1012cc814;
            }
            if (cVar15 != '\x03') {
              uStack_90 = (long *)&UNK_108cde374;
              plStack_88 = (long *)0x4;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar7 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
              plVar13 = extraout_x9_17;
              plVar10 = extraout_x10_30;
              plVar14 = extraout_x12_30;
              goto LAB_1012ccdf0;
            }
            uVar11 = *(ulong *)(lVar12 + 0x28);
            if (uVar11 < *(ulong *)(lVar12 + 0x20)) {
              while( true ) {
                bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                if (0x3a < bVar1) goto LAB_1012cd268;
                if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
                uVar11 = uVar11 + 1;
                *(ulong *)(lVar12 + 0x28) = uVar11;
                if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1012cd014;
              }
              if ((ulong)bVar1 == 0x3a) {
                *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
                FUN_10126cbb0(&uStack_90,lVar12);
                plVar13 = extraout_x9_02;
                plVar10 = extraout_x10_03;
                plVar14 = extraout_x12_03;
                cVar15 = uStack_90._1_1_;
                if (((ulong)uStack_90 & 1) != 0) {
LAB_1012cd13c:
                  bVar2 = true;
                  plVar7 = plStack_88;
                  goto LAB_1012ccc18;
                }
                goto LAB_1012cc814;
              }
LAB_1012cd268:
              uStack_d8 = (long *)0x6;
              plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
              plVar13 = extraout_x9_19;
              plVar10 = extraout_x10_32;
              plVar14 = extraout_x12_32;
            }
            else {
LAB_1012cd014:
              uStack_d8 = (long *)0x3;
              plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
              plVar13 = extraout_x9_12;
              plVar10 = extraout_x10_20;
              plVar14 = extraout_x12_20;
            }
          }
          else {
            if (plStack_c8 == (long *)0xc) {
              if (*plStack_d0 != 0x617069636e697270 || (int)plStack_d0[1] != 0x64695f6c)
              goto LAB_1012cc958;
              if (plStack_180 != (long *)0x8000000000000000) {
                uStack_90 = (long *)&UNK_108cb6a0a;
                plStack_88 = (long *)0xc;
                uStack_d8 = &uStack_90;
                plStack_d0 = (long *)&DAT_100c7b3a0;
                plVar7 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
                plVar13 = extraout_x9_15;
                plVar10 = extraout_x10_28;
                plVar14 = extraout_x12_28;
                goto LAB_1012ccdf0;
              }
              uVar11 = *(ulong *)(lVar12 + 0x28);
              if (*(ulong *)(lVar12 + 0x20) <= uVar11) {
LAB_1012cd038:
                uStack_d8 = (long *)0x3;
                plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                plVar13 = extraout_x9_13;
                plVar10 = extraout_x10_21;
                plVar14 = extraout_x12_21;
LAB_1012cce6c:
                bVar2 = true;
                plStack_180 = (long *)0x0;
                goto LAB_1012ccc18;
              }
              while( true ) {
                bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                if (0x3a < bVar1) goto LAB_1012cd280;
                if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
                uVar11 = uVar11 + 1;
                *(ulong *)(lVar12 + 0x28) = uVar11;
                if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1012cd038;
              }
              if ((ulong)bVar1 != 0x3a) {
LAB_1012cd280:
                uStack_d8 = (long *)0x6;
                plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                plVar13 = extraout_x9_20;
                plVar10 = extraout_x10_33;
                plVar14 = extraout_x12_33;
                goto LAB_1012cce6c;
              }
              *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
              FUN_10160c7b0(&uStack_90,lVar12);
              plStack_198 = plStack_80;
              plStack_180 = uStack_90;
              plVar8 = plStack_88;
              if (uStack_90 == (long *)0x8000000000000000) goto LAB_1012cd148;
              goto LAB_1012cc814;
            }
            if ((plStack_c8 != (long *)0xe) ||
               (*plStack_d0 != 0x617069636e697270 ||
                *(long *)((long)plStack_d0 + 6) != 0x657079745f6c6170)) goto LAB_1012cc958;
            if (cVar17 != '\x03') {
              uStack_90 = (long *)&UNK_108cb69fc;
              plStack_88 = (long *)0xe;
              uStack_d8 = &uStack_90;
              plStack_d0 = (long *)&DAT_100c7b3a0;
              plVar7 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
              plVar13 = extraout_x9_16;
              plVar10 = extraout_x10_29;
              plVar14 = extraout_x12_29;
              goto LAB_1012ccdf0;
            }
            uVar11 = *(ulong *)(lVar12 + 0x28);
            if (uVar11 < *(ulong *)(lVar12 + 0x20)) {
              while( true ) {
                bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar11);
                if (0x3a < bVar1) goto LAB_1012cd2a8;
                if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
                uVar11 = uVar11 + 1;
                *(ulong *)(lVar12 + 0x28) = uVar11;
                if (*(ulong *)(lVar12 + 0x20) == uVar11) goto LAB_1012ccffc;
              }
              if ((ulong)bVar1 != 0x3a) {
LAB_1012cd2a8:
                uStack_d8 = (long *)0x6;
                plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
                plVar13 = extraout_x9_21;
                plVar10 = extraout_x10_34;
                plVar14 = extraout_x12_34;
                goto LAB_1012cd028;
              }
              *(ulong *)(lVar12 + 0x28) = uVar11 + 1;
              FUN_10123457c(&uStack_90,lVar12);
              plVar13 = extraout_x9_01;
              plVar10 = extraout_x10_02;
              plVar14 = extraout_x12_02;
              if ((char)uStack_90 == '\x01') goto LAB_1012cd13c;
              cVar17 = uStack_90._1_1_;
              goto LAB_1012cc814;
            }
LAB_1012ccffc:
            uStack_d8 = (long *)0x3;
            plVar7 = (long *)FUN_108831e8c(lVar12,&uStack_d8);
            plVar13 = extraout_x9_11;
            plVar10 = extraout_x10_19;
            plVar14 = extraout_x12_19;
          }
LAB_1012cd028:
          bVar2 = true;
          goto LAB_1012ccc18;
        }
        uStack_d8 = (long *)0x18;
        plVar9 = (long *)FUN_108831e8c(lStack_168,&uStack_d8);
        plVar7 = plStack_150;
        plVar6 = plStack_148;
      }
    }
    else {
LAB_1012cd2dc:
      uStack_d8 = (long *)0x5;
      plVar9 = (long *)FUN_108831e8c(lStack_168,&uStack_d8);
      plVar7 = plStack_150;
      plVar6 = plStack_148;
    }
  }
  goto joined_r0x0001012cd33c;
LAB_1012cd148:
  bVar2 = true;
  plStack_180 = (long *)0x0;
  plVar13 = extraout_x9_03;
  plVar10 = extraout_x10_04;
  plVar14 = extraout_x12_04;
  plVar7 = plStack_88;
LAB_1012ccc18:
  if (plStack_170 != (long *)0x8000000000000000) {
joined_r0x0001012cd260:
    if (plStack_170 != (long *)0x0) {
      _free(plStack_190);
      plVar13 = extraout_x9_04;
      plVar10 = extraout_x10_11;
      plVar14 = extraout_x12_11;
    }
  }
LAB_1012ccc34:
  if ((bVar2) && (((ulong)plStack_180 & 0x7fffffffffffffff) != 0)) {
    _free(plVar9);
    plStack_180 = (long *)0x8000000000000000;
    plVar8 = extraout_x9_05;
    plVar10 = extraout_x10_12;
    plVar14 = extraout_x12_12;
    plVar9 = plVar7;
    cVar15 = '\0';
  }
  else {
    plStack_180 = (long *)0x8000000000000000;
    plVar8 = plVar13;
    plVar9 = plVar7;
    cVar15 = '\0';
  }
LAB_1012ccc64:
  cStack_a7 = cVar15;
  *(char *)(lVar3 + 0x48) = *(char *)(lVar3 + 0x48) + '\x01';
  uStack_d8 = plStack_180;
  plStack_d0 = plVar9;
  plStack_c8 = plVar10;
  plStack_c0 = plStack_170;
  plStack_b8 = plVar8;
  plStack_b0 = plVar14;
  cStack_a8 = cVar17;
  plVar6 = (long *)FUN_100654604(lVar3);
  plStack_88 = (long *)CONCAT62(uStack_a6,CONCAT11(cStack_a7,cStack_a8));
  uStack_90 = plStack_b0;
  if (plStack_180 == (long *)0x8000000000000000) {
    if (plVar6 != (long *)0x0) {
      lVar12 = *plVar6;
      if (lVar12 == 1) {
        FUN_100de21d4(plVar6 + 1);
      }
      else {
LAB_1012ccd60:
        uStack_90 = plStack_b0;
        if ((lVar12 == 0) && (plVar6[2] != 0)) {
          _free(plVar6[1]);
        }
      }
LAB_1012cce88:
      _free(plVar6);
    }
LAB_1012cce90:
    plStack_180 = (long *)0x8000000000000000;
  }
  else {
    plVar7 = plVar9;
    if (plVar6 == (long *)0x0) {
      plStack_f0 = plStack_b0;
      plStack_e8 = plStack_88;
    }
    else {
joined_r0x0001012ccd80:
      plVar9 = plVar6;
      uStack_90 = plStack_b0;
      if (plStack_180 != (long *)0x0) {
        _free(plVar7);
      }
      if (plStack_170 != (long *)0x0) {
        _free(plVar8);
      }
      plStack_180 = (long *)0x8000000000000000;
    }
  }
LAB_1012cce94:
  plVar6 = plStack_148;
  if (plStack_180 != (long *)0x8000000000000000) {
    plStack_138 = plStack_e8;
    plStack_140 = plStack_f0;
    plVar7 = plStack_150;
    if (plStack_180 == (long *)0x8000000000000001) goto joined_r0x0001012cd33c;
    plStack_110 = plStack_170;
    plStack_f8 = plStack_e8;
    plStack_100 = plStack_f0;
    plStack_128 = plStack_180;
    plStack_120 = plVar9;
    plStack_118 = plVar10;
    plStack_108 = plVar8;
    if (plStack_148 == plStack_158) {
      func_0x0001089507a4(&plStack_158);
    }
    plVar8 = plStack_150 + (long)plVar6 * 7;
    plVar8[1] = (long)plStack_120;
    *plVar8 = (long)plStack_128;
    plVar8[3] = (long)plStack_110;
    plVar8[2] = (long)plStack_118;
    plVar8[5] = (long)plStack_100;
    plVar8[4] = (long)plStack_108;
    plVar8[6] = (long)plStack_f8;
    plStack_148 = (long *)((long)plVar6 + 1);
    goto LAB_1012cc748;
  }
LAB_1012cd49c:
  plVar9 = (long *)FUN_108832da4(plVar9,lVar3);
  plVar7 = plStack_150;
  plVar6 = plStack_148;
joined_r0x0001012cd33c:
  plStack_150 = plVar7;
  plStack_148 = plVar6;
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar7 + 4;
    do {
      if (plVar8[-4] != 0) {
        _free(plVar8[-3]);
      }
      if (plVar8[-1] != 0) {
        _free(*plVar8);
      }
      plVar8 = plVar8 + 7;
      plVar6 = (long *)((long)plVar6 + -1);
    } while (plVar6 != (long *)0x0);
  }
  if (plStack_158 != (long *)0x0) {
    _free(plVar7);
  }
  plVar7 = (long *)0x8000000000000000;
  plVar6 = plVar8;
LAB_1012cd354:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  uStack_d8 = plVar7;
  plStack_d0 = plVar9;
  plStack_c8 = plVar6;
  plVar10 = (long *)FUN_10065474c(param_2);
  if (plVar7 == (long *)0x8000000000000000) {
    plVar8 = plVar9;
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
      *param_1 = plVar7;
      param_1[1] = plVar9;
      param_1[2] = plVar6;
      return;
    }
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar9 + 4;
      do {
        if (plVar8[-4] != 0) {
          _free(plVar8[-3]);
        }
        if (plVar8[-1] != 0) {
          _free(*plVar8);
        }
        plVar8 = plVar8 + 7;
        plVar6 = (long *)((long)plVar6 + -1);
      } while (plVar6 != (long *)0x0);
    }
    plVar8 = plVar10;
    if (plVar7 != (long *)0x0) {
      _free(plVar9);
    }
  }
LAB_1012cd448:
  uVar5 = FUN_108832da4(plVar8,param_2);
LAB_1012cd454:
  *param_1 = 0x8000000000000000;
  param_1[1] = uVar5;
  return;
}

