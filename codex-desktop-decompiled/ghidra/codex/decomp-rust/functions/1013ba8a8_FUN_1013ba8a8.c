
/* WARNING: Type propagation algorithm not settling */

void FUN_1013ba8a8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *extraout_x9_02;
  ulong *puVar10;
  long lVar11;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong *extraout_x11_01;
  ulong *extraout_x11_02;
  ulong *extraout_x11_03;
  ulong *unaff_x19;
  long lVar12;
  ulong unaff_x20;
  undefined1 uVar13;
  ulong *unaff_x22;
  ulong *puVar14;
  ulong *unaff_x23;
  long *plVar15;
  ulong unaff_x25;
  uint uVar16;
  ulong *puVar18;
  ulong unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *in_stack_00000000;
  ulong *in_stack_00000008;
  ulong *in_stack_00000010;
  ulong *in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong *in_stack_00000030;
  ulong *in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong *in_stack_00000058;
  ulong *in_stack_00000060;
  ulong *in_stack_00000068;
  ulong *in_stack_00000070;
  ulong *in_stack_00000078;
  ulong *in_stack_00000080;
  ulong *in_stack_00000088;
  ulong *in_stack_00000090;
  ulong *in_stack_00000098;
  ulong *in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong *in_stack_000000b0;
  ulong *in_stack_000000b8;
  ulong *in_stack_000000c0;
  ulong *in_stack_000000c8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  ulong *in_stack_00000108;
  ulong *in_stack_00000110;
  ulong *in_stack_00000118;
  ulong *in_stack_00000120;
  ulong *in_stack_00000128;
  ulong *in_stack_00000130;
  ulong *in_stack_00000138;
  ulong *in_stack_00000140;
  ulong *in_stack_00000148;
  ulong *in_stack_00000150;
  ulong *in_stack_00000158;
  ulong *in_stack_00000160;
  ulong *in_stack_00000168;
  ulong *in_stack_00000170;
  ulong *in_stack_00000178;
  ulong in_stack_00000180;
  ulong *in_stack_00000188;
  ulong *in_stack_00000190;
  ulong in_stack_00000198;
  long *in_stack_000001a0;
  ulong *in_stack_000001a8;
  ulong *in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  ulong in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong *in_stack_000001e0;
  ulong *in_stack_000001e8;
  ulong *in_stack_000001f0;
  ulong *in_stack_000001f8;
  ulong *in_stack_00000200;
  ulong *in_stack_00000208;
  ulong *in_stack_00000210;
  ulong *in_stack_00000218;
  ulong *in_stack_00000220;
  ulong *in_stack_00000228;
  ulong *in_stack_00000230;
  ulong *in_stack_00000238;
  ulong *in_stack_00000240;
  ulong *in_stack_00000248;
  ulong *in_stack_00000250;
  ulong in_stack_00000258;
  ulong *in_stack_00000260;
  ulong *in_stack_00000268;
  ulong in_stack_00000270;
  uint uVar17;
  
code_r0x0001013ba8a8:
  in_stack_000001e8 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  in_stack_000001e0 = unaff_x23;
  unaff_x28 = unaff_x28;
joined_r0x0001013ba8d0:
  uVar13 = true;
  if (unaff_x27 == 0x8000000000000001) goto LAB_1013bac4c;
joined_r0x0001013ba8d8:
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000a0);
  }
LAB_1013bac4c:
  if ((-0x7fffffffffffffff < (long)in_stack_000000c0) && (in_stack_000000c0 != (ulong *)0x0)) {
    _free(in_stack_00000068);
  }
  if ((-0x7fffffffffffffff < (long)in_stack_000000c8) && (in_stack_000000c8 != (ulong *)0x0)) {
    _free(in_stack_00000070);
  }
  if ((-0x7fffffffffffffff < (long)unaff_x19) && (unaff_x19 != (ulong *)0x0)) {
    _free(in_stack_00000078);
  }
  if (((ulong)in_stack_000000b8 & 0x7fffffffffffffff) == 0) {
    bVar1 = false;
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
      bVar1 = (bool)uVar13;
    }
  }
  else {
    _free(unaff_x28);
    bVar1 = false;
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
      bVar1 = (bool)uVar13;
    }
  }
  if (bVar1) {
    _free(in_stack_00000090);
  }
  FUN_100de8910(&stack0x000002b8);
  puVar5 = in_stack_00000078;
  puVar4 = in_stack_00000090;
  puVar22 = in_stack_000000a0;
  if (in_stack_00000270 != unaff_x25) {
    FUN_100de6690(&stack0x00000270);
  }
joined_r0x0001013bace8:
  do {
    puVar14 = unaff_x22;
    if (-1 < (long)unaff_x20) goto LAB_1013bad04;
LAB_1013bacec:
    puVar14 = unaff_x22;
    if ((unaff_x20 & 0xfffffffffffffffe) != in_stack_000000a8) {
      FUN_100de6690(&stack0x00000198);
    }
LAB_1013bad04:
    lVar11 = in_stack_00000100;
    lVar12 = in_stack_000000f8;
    if (in_stack_000001e0 == (ulong *)0x8000000000000000) {
      *in_stack_00000040 = -0x8000000000000000;
      in_stack_00000040[1] = (long)in_stack_000001e8;
      lVar11 = in_stack_000000f8;
      for (lVar23 = in_stack_00000100; lVar23 != 0; lVar23 = lVar23 + -1) {
        FUN_100e658dc(lVar11);
        lVar11 = lVar11 + 0x90;
      }
      if (in_stack_000000f0 != 0) {
        _free(lVar12);
      }
LAB_1013bb778:
      lVar12 = ((ulong)((long)in_stack_000000b0 - (long)puVar14) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100de6690(puVar14);
        puVar14 = puVar14 + 9;
      }
      if (in_stack_00000048 != 0) {
        _free(in_stack_00000050);
      }
      return;
    }
    puVar29 = (ulong *)&stack0x00000108;
    in_stack_00000108 = in_stack_000001e0;
    in_stack_00000110 = in_stack_000001e8;
    in_stack_00000118 = in_stack_000001f0;
    in_stack_00000120 = in_stack_000001f8;
    in_stack_00000128 = in_stack_00000200;
    in_stack_00000130 = in_stack_00000208;
    in_stack_00000138 = in_stack_00000210;
    in_stack_00000140 = in_stack_00000218;
    in_stack_00000148 = in_stack_00000220;
    in_stack_00000150 = in_stack_00000228;
    in_stack_00000158 = in_stack_00000230;
    in_stack_00000160 = in_stack_00000238;
    in_stack_00000168 = in_stack_00000240;
    in_stack_00000170 = in_stack_00000248;
    in_stack_00000178 = in_stack_00000250;
    in_stack_00000180 = in_stack_00000258;
    in_stack_00000188 = in_stack_00000260;
    in_stack_00000190 = in_stack_00000268;
    if (in_stack_00000100 == in_stack_000000f0) {
      func_0x0001089ed168(&stack0x000000f0);
      puVar29 = extraout_x11;
    }
    puVar8 = (ulong *)(in_stack_000000f8 + lVar11 * 0x90);
    puVar8[0xd] = (ulong)in_stack_00000170;
    puVar8[0xc] = (ulong)in_stack_00000168;
    puVar8[0xf] = in_stack_00000180;
    puVar8[0xe] = (ulong)in_stack_00000178;
    puVar8[0x11] = (ulong)in_stack_00000190;
    puVar8[0x10] = (ulong)in_stack_00000188;
    puVar8[5] = (ulong)in_stack_00000130;
    puVar8[4] = (ulong)in_stack_00000128;
    puVar8[7] = (ulong)in_stack_00000140;
    puVar8[6] = (ulong)in_stack_00000138;
    puVar8[9] = (ulong)in_stack_00000150;
    puVar8[8] = (ulong)in_stack_00000148;
    puVar8[0xb] = (ulong)in_stack_00000160;
    puVar8[10] = (ulong)in_stack_00000158;
    puVar8[1] = (ulong)in_stack_00000110;
    *puVar8 = (ulong)in_stack_00000108;
    puVar8[3] = (ulong)in_stack_00000120;
    puVar8[2] = (ulong)in_stack_00000118;
    in_stack_00000100 = lVar11 + 1;
    unaff_x22 = in_stack_000000b0;
    if (puVar14 == in_stack_000000b0) {
LAB_1013bb738:
      in_stack_00000040[1] = in_stack_000000f8;
      *in_stack_00000040 = in_stack_000000f0;
      in_stack_00000040[2] = in_stack_00000100;
      puVar14 = unaff_x22;
      if ((*in_stack_00000040 != -0x8000000000000000) && (in_stack_000000b0 != unaff_x22)) {
        lVar12 = FUN_1087e422c(in_stack_00000020,&UNK_10b21cb80,&UNK_10b20a590);
        *in_stack_00000040 = -0x8000000000000000;
        in_stack_00000040[1] = lVar12;
        FUN_100cca210(&stack0x000002e0);
      }
      goto LAB_1013bb778;
    }
    unaff_x22 = puVar14 + 9;
    unaff_x20 = *puVar14;
    if (unaff_x20 == unaff_x25) goto LAB_1013bb738;
    in_stack_000001b8 = puVar14[4];
    puVar8 = (ulong *)puVar14[3];
    uVar9 = puVar14[6];
    in_stack_000001c0 = puVar14[5];
    in_stack_000001d8 = puVar14[8];
    in_stack_000001d0 = puVar14[7];
    puVar28 = (ulong *)puVar14[2];
    plVar27 = (long *)puVar14[1];
    uVar6 = unaff_x20 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x20) {
      uVar6 = 5;
    }
    in_stack_00000078 = puVar5;
    in_stack_00000090 = puVar4;
    in_stack_000000a0 = puVar22;
    in_stack_00000198 = unaff_x20;
    in_stack_000001a0 = plVar27;
    in_stack_000001a8 = puVar28;
    in_stack_000001b0 = puVar8;
    in_stack_000001c8 = uVar9;
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        if ((in_stack_000001b8 != 0) && (in_stack_000001b8 * 9 != -0x11)) {
          _free(puVar8 + (-1 - in_stack_000001b8));
        }
        plVar15 = plVar27 + (long)puVar28 * 0xd;
        if (puVar28 != (ulong *)0x0) {
          unaff_x19 = (ulong *)0x8000000000000001;
          unaff_x23 = (ulong *)0x8000000000000000;
          in_stack_000000c8 = (ulong *)0x8000000000000001;
          in_stack_000000b8 = (ulong *)0x8000000000000000;
          in_stack_000000c0 = (ulong *)0x8000000000000001;
          unaff_x27 = 0x8000000000000001;
          break;
        }
        unaff_x19 = (ulong *)0x8000000000000001;
        in_stack_000000c8 = (ulong *)0x8000000000000001;
        in_stack_000000b8 = (ulong *)0x0;
        in_stack_000000c0 = (ulong *)0x8000000000000001;
        unaff_x27 = 0x8000000000000001;
        goto LAB_1013ba87c;
      }
      in_stack_000001e8 = (ulong *)FUN_108832ea0(&stack0x00000198,unaff_x29 + -0x70,&UNK_10b21d4c0);
      in_stack_000001e0 = (ulong *)0x8000000000000000;
      puVar14 = unaff_x22;
      if ((long)unaff_x20 < 0) goto LAB_1013bacec;
      goto LAB_1013bad04;
    }
    puVar18 = puVar28 + (long)puVar8 * 9;
    puVar14 = puVar28;
    if (puVar8 == (ulong *)0x0) {
LAB_1013ba0e8:
      puVar3 = (ulong *)FUN_1087e422c(0,&UNK_10b231bf8,&UNK_10b20a590);
LAB_1013ba104:
      in_stack_000001e0 = (ulong *)0x8000000000000000;
      in_stack_000001e8 = puVar3;
      puVar20 = in_stack_000001f0;
      in_stack_000000c0 = in_stack_00000200;
      puVar21 = in_stack_00000250;
      puVar29 = in_stack_00000260;
      puVar10 = in_stack_00000268;
    }
    else {
      puVar14 = puVar28 + 9;
      if (*puVar28 == unaff_x25) goto LAB_1013ba0e8;
      puVar3 = (ulong *)puVar28[2];
      puVar19 = (ulong *)puVar28[1];
      puVar20 = (ulong *)puVar28[3];
      if (*puVar28 != 0x8000000000000003) {
        puVar3 = (ulong *)FUN_108832ea0(&stack0x000002e0,unaff_x29 + -0x70,&UNK_10b20a5e0);
        FUN_100de6690(&stack0x000002e0);
        goto LAB_1013ba104;
      }
      if ((puVar19 == (ulong *)0x8000000000000000) || (puVar19 == (ulong *)0x8000000000000001))
      goto LAB_1013ba104;
      if (puVar8 == (ulong *)0x1) {
LAB_1013ba834:
        in_stack_000000c0 = (ulong *)FUN_1087e422c(1,&UNK_10b231bf8,&UNK_10b20a590);
LAB_1013ba850:
        in_stack_000000a0 = puVar22;
        in_stack_000001e0 = (ulong *)0x8000000000000000;
        in_stack_000001e8 = in_stack_000000c0;
        in_stack_00000090 = puVar4;
LAB_1013ba858:
        puVar8 = puVar19;
        puVar20 = in_stack_000001f0;
        in_stack_000000c0 = in_stack_00000200;
        puVar21 = in_stack_00000250;
        puVar29 = in_stack_00000260;
        puVar10 = in_stack_00000268;
        if (puVar19 != (ulong *)0x0) {
          _free(puVar3);
        }
      }
      else {
        puVar14 = puVar28 + 0x12;
        if (puVar28[9] == unaff_x25) goto LAB_1013ba834;
        in_stack_000000c0 = (ulong *)puVar28[0xb];
        in_stack_000000a0 = (ulong *)puVar28[10];
        in_stack_00000090 = (ulong *)puVar28[0xc];
        if (puVar28[9] != 0x8000000000000003) {
          in_stack_000000c0 =
               (ulong *)FUN_108832ea0(&stack0x000002e0,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(&stack0x000002e0);
          goto LAB_1013ba850;
        }
        if ((in_stack_000000a0 == (ulong *)0x8000000000000000) ||
           (puVar22 = in_stack_000000a0, in_stack_000000a0 == (ulong *)0x8000000000000001))
        goto LAB_1013ba850;
        puVar10 = in_stack_000000a0;
        if (puVar8 != (ulong *)0x2) {
          puVar14 = puVar28 + 0x1b;
          uVar6 = puVar28[0x12];
          if (uVar6 == unaff_x25) goto LAB_1013bae9c;
          in_stack_00000078 = (ulong *)puVar28[0x14];
          puVar4 = (ulong *)puVar28[0x13];
          if (uVar6 == 0x8000000000000000) {
            FUN_100de6690(&stack0x000002e0);
            puVar10 = extraout_x9;
            puVar29 = extraout_x11_00;
            goto LAB_1013bae9c;
          }
          puVar10 = (ulong *)0x8000000000000003;
          if (uVar6 == 0x8000000000000003) {
            if (((long)puVar4 < -0x7ffffffffffffffe) ||
               (puVar5 = (ulong *)puVar28[0x15], puVar4 == (ulong *)(unaff_x25 - 3)))
            goto LAB_1013bb058;
            goto joined_r0x0001013bb3a4;
          }
          in_stack_00000078 =
               (ulong *)FUN_108832ea0(&stack0x000002e0,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(&stack0x000002e0);
LAB_1013bb058:
          in_stack_000001e0 = (ulong *)0x8000000000000000;
          in_stack_000001e8 = in_stack_00000078;
joined_r0x0001013bb068:
          if (in_stack_000000a0 != (ulong *)0x0) {
            _free(in_stack_000000c0);
          }
          goto LAB_1013ba858;
        }
LAB_1013bae9c:
        in_stack_00000098 = (ulong *)0x8000000000000000;
        puVar4 = in_stack_00000098;
        in_stack_00000078 = puVar5;
        puVar5 = in_stack_00000058;
joined_r0x0001013bb3a4:
        in_stack_00000058 = puVar5;
        in_stack_00000098 = puVar4;
        puVar5 = puVar18;
        if (puVar14 != puVar18) {
          puVar5 = puVar14 + 9;
          uVar6 = *puVar14;
          puVar10 = puVar5;
          if (uVar6 == unaff_x25) goto LAB_1013baf04;
          puVar4 = (ulong *)puVar14[2];
          puVar10 = (ulong *)puVar14[1];
          if (uVar6 == 0x8000000000000000) {
            FUN_100de6690(&stack0x000002e0);
            puVar10 = extraout_x9_00;
            puVar29 = extraout_x11_01;
            goto LAB_1013baf04;
          }
          if (uVar6 == 0x8000000000000003) {
            if (((long)puVar10 < -0x7ffffffffffffffe) ||
               (puVar22 = (ulong *)puVar14[3], puVar14 = puVar10, in_stack_00000070 = puVar4,
               puVar10 == (ulong *)(unaff_x25 - 3))) goto joined_r0x0001013bb37c;
            goto joined_r0x0001013bb5d0;
          }
          puVar4 = (ulong *)FUN_108832ea0(&stack0x000002e0,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(&stack0x000002e0);
joined_r0x0001013bb37c:
          in_stack_000001e0 = (ulong *)0x8000000000000000;
          puVar14 = puVar5;
          in_stack_000001e8 = puVar4;
          in_stack_00000070 = puVar4;
joined_r0x0001013bb37c:
          if (((ulong)in_stack_00000098 & 0x7fffffffffffffff) != 0) {
LAB_1013bb020:
            _free(in_stack_00000078);
          }
          goto joined_r0x0001013bb068;
        }
LAB_1013baf04:
        in_stack_00000088 = (ulong *)0x8000000000000000;
        puVar22 = in_stack_00000060;
        puVar14 = in_stack_00000088;
joined_r0x0001013bb5d0:
        in_stack_00000088 = puVar14;
        in_stack_00000060 = puVar22;
        puVar14 = puVar18;
        if (puVar5 != puVar18) {
          puVar14 = puVar5 + 9;
          uVar6 = *puVar5;
          puVar10 = puVar14;
          if (uVar6 == unaff_x25) goto LAB_1013baf6c;
          puVar21 = (ulong *)puVar5[3];
          puVar4 = (ulong *)puVar5[2];
          puVar10 = (ulong *)puVar5[1];
          if (uVar6 == 0x8000000000000000) {
            FUN_100de6690(&stack0x000002e0);
            puVar10 = extraout_x9_01;
            puVar29 = extraout_x11_02;
            goto LAB_1013baf6c;
          }
          if (uVar6 == 0x8000000000000003) {
            in_stack_00000068 = puVar4;
            if (((long)puVar10 < -0x7ffffffffffffffe) ||
               (in_stack_00000080 = puVar10, puVar4 = puVar14, puVar10 == (ulong *)(unaff_x25 - 3)))
            goto LAB_1013bb0a0;
            goto joined_r0x0001013bb3c4;
          }
          in_stack_00000068 =
               (ulong *)FUN_108832ea0(&stack0x000002e0,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(&stack0x000002e0);
LAB_1013bb0a0:
          in_stack_000001e0 = (ulong *)0x8000000000000000;
          in_stack_000001e8 = in_stack_00000068;
LAB_1013bb0f4:
          if (((ulong)in_stack_00000088 & 0x7fffffffffffffff) != 0) {
            _free(in_stack_00000070);
            goto joined_r0x0001013bb37c;
          }
          if (((ulong)in_stack_00000098 & 0x7fffffffffffffff) == 0) goto joined_r0x0001013bb068;
          goto LAB_1013bb020;
        }
LAB_1013baf6c:
        in_stack_00000080 = (ulong *)0x8000000000000000;
        puVar4 = puVar14;
        puVar21 = puVar5;
joined_r0x0001013bb3c4:
        if (puVar4 == puVar18) {
          uVar6 = 0x8000000000000001;
          puVar14 = puVar18;
        }
        else {
          puVar14 = puVar4 + 9;
          uVar9 = *puVar4;
          if (uVar9 == unaff_x25) {
            uVar6 = 0x8000000000000001;
            puVar10 = puVar4;
          }
          else {
            puVar10 = (ulong *)puVar4[3];
            puVar29 = (ulong *)puVar4[2];
            uVar6 = puVar4[1];
            if (uVar9 != 0x8000000000000000) {
              if (uVar9 == 0x8000000000000003) {
                in_stack_000001e8 = puVar29;
                if ((-0x7fffffffffffffff < (long)uVar6) && (uVar6 != unaff_x25 - 3))
                goto LAB_1013bb3d0;
              }
              else {
                puVar5 = (ulong *)FUN_108832ea0(&stack0x000002e0,unaff_x29 + -0x70,&UNK_10b20a5e0);
                FUN_100de6690(&stack0x000002e0);
                in_stack_000001e8 = puVar5;
              }
              in_stack_000001e0 = (ulong *)0x8000000000000000;
              if (((ulong)in_stack_00000080 & 0x7fffffffffffffff) != 0) {
                in_stack_000001e0 = (ulong *)0x8000000000000000;
                _free(in_stack_00000068);
              }
              goto LAB_1013bb0f4;
            }
            FUN_100de6690(&stack0x000002e0);
            uVar6 = 0x8000000000000000;
            puVar10 = extraout_x9_02;
            puVar29 = extraout_x11_03;
          }
        }
LAB_1013bb3d0:
        in_stack_00000258 = 0x8000000000000000;
        if (uVar6 != 0x8000000000000001) {
          in_stack_00000258 = uVar6;
        }
        in_stack_000001e0 = puVar19;
        in_stack_000001e8 = puVar3;
        in_stack_000001f8 = in_stack_000000a0;
        in_stack_00000208 = in_stack_00000090;
        in_stack_00000210 = in_stack_00000098;
        in_stack_00000218 = in_stack_00000078;
        in_stack_00000220 = in_stack_00000058;
        in_stack_00000228 = in_stack_00000088;
        in_stack_00000230 = in_stack_00000070;
        in_stack_00000238 = in_stack_00000060;
        in_stack_00000240 = in_stack_00000080;
        in_stack_00000248 = in_stack_00000068;
        if (puVar18 != puVar14) {
          in_stack_000001e8 = (ulong *)FUN_1087e422c(puVar8,&UNK_10b21cb80,&UNK_10b20a590);
          in_stack_000001e0 = (ulong *)0x8000000000000000;
          FUN_100e658dc(&stack0x000002e0);
        }
      }
    }
    lVar12 = ((ulong)((long)puVar18 - (long)puVar14) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100de6690(puVar14);
      puVar14 = puVar14 + 9;
    }
    unaff_x28 = puVar8;
    puVar5 = in_stack_00000078;
    puVar4 = in_stack_00000090;
    puVar22 = in_stack_000000a0;
    in_stack_000001f0 = puVar20;
    in_stack_00000200 = in_stack_000000c0;
    in_stack_00000250 = puVar21;
    in_stack_00000260 = puVar29;
    in_stack_00000268 = puVar10;
    if (plVar27 != (long *)0x0) {
      _free(puVar28);
    }
  } while( true );
LAB_1013ba174:
  plVar7 = plVar27 + 0xd;
  plVar2 = plVar7;
  unaff_x28 = in_stack_00000098;
  if (*plVar27 == -0x8000000000000000) goto joined_r0x0001013ba874;
  plVar2 = (long *)plVar27[1];
  lVar12 = plVar27[2];
  puVar22 = (ulong *)plVar27[4];
  uVar6 = plVar27[3];
  puVar5 = (ulong *)plVar27[6];
  puVar4 = (ulong *)plVar27[5];
  lVar24 = plVar27[8];
  lVar23 = plVar27[7];
  lVar26 = plVar27[10];
  lVar25 = plVar27[9];
  lVar11 = plVar27[0xb];
  if (lVar12 < 7) {
    if (lVar12 == 3) {
      if ((short)*plVar2 != 0x7275 || *(char *)((long)plVar2 + 2) != 'l') goto LAB_1013ba2f4;
      uVar17 = 5;
      uVar16 = 5;
    }
    else if (lVar12 == 4) {
      if ((int)*plVar2 != 0x65707974) goto LAB_1013ba2f4;
      uVar17 = 0;
      uVar16 = 0;
    }
    else if ((lVar12 == 5) && ((int)*plVar2 == 0x756c6176 && *(char *)((long)plVar2 + 4) == 'e')) {
      uVar17 = 1;
      uVar16 = 1;
    }
    else {
LAB_1013ba2f4:
      uVar17 = 6;
      uVar16 = 6;
    }
  }
  else if (lVar12 == 7) {
    if ((int)*plVar2 != 0x6d6d6f63 || *(int *)((long)plVar2 + 3) != 0x646e616d) goto LAB_1013ba2f4;
    uVar17 = 4;
    uVar16 = 4;
  }
  else if (lVar12 == 9) {
    if (*plVar2 != 0x726f70736e617274 || (char)plVar2[1] != 't') goto LAB_1013ba2f4;
    uVar17 = 3;
    uVar16 = 3;
  }
  else {
    if ((lVar12 != 0xb) ||
       (*plVar2 != 0x7470697263736564 || *(long *)((long)plVar2 + 3) != 0x6e6f697470697263))
    goto LAB_1013ba2f4;
    uVar17 = 2;
    uVar16 = 2;
  }
  if (*plVar27 != 0) {
    _free();
    uVar16 = uVar17;
  }
  puVar14 = in_stack_00000058;
  puVar29 = in_stack_00000090;
  if (uVar16 < 3) {
    if (uVar16 == 0) {
      if (unaff_x23 == (ulong *)0x8000000000000000) {
        in_stack_00000270 = 0x8000000000000005;
        unaff_x25 = 0x8000000000000005;
        if (uVar6 == 0x8000000000000005) {
          puVar4 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          *(ulong *)(unaff_x29 + -0xb8) = uVar6;
          *(ulong **)(unaff_x29 + -0xa8) = puVar4;
          *(ulong **)(unaff_x29 + -0xb0) = puVar22;
          *(long *)(unaff_x29 + -0x98) = lVar23;
          *(ulong **)(unaff_x29 + -0xa0) = puVar5;
          *(long *)(unaff_x29 + -0x88) = lVar25;
          *(long *)(unaff_x29 + -0x90) = lVar24;
          *(long *)(unaff_x29 + -0x78) = lVar11;
          *(long *)(unaff_x29 + -0x80) = lVar26;
          if (uVar6 == 0x8000000000000003) {
            unaff_x23 = puVar22;
            puVar14 = puVar5;
            puVar5 = in_stack_00000060;
            puVar29 = puVar4;
            if (puVar22 != (ulong *)0x8000000000000000) goto LAB_1013ba164;
          }
          else {
            puVar4 = (ulong *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
            FUN_100de6690(unaff_x29 + -0xb8);
          }
        }
        unaff_x23 = (ulong *)0x8000000000000000;
        in_stack_000001e0 = unaff_x23;
        in_stack_000001e8 = puVar4;
        goto joined_r0x0001013ba8d0;
      }
      *(undefined **)(unaff_x29 + -0x70) = &UNK_108cde34c;
      *(undefined8 *)(unaff_x29 + -0x68) = 4;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
      in_stack_000001e8 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
    }
    else if (uVar16 == 1) {
      if (in_stack_000000b8 == (ulong *)0x8000000000000000) {
        unaff_x25 = 0x8000000000000005;
        if (uVar6 == 0x8000000000000005) {
          puVar4 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          *(ulong *)(unaff_x29 + -0xb8) = uVar6;
          *(ulong **)(unaff_x29 + -0xa8) = puVar4;
          *(ulong **)(unaff_x29 + -0xb0) = puVar22;
          *(long *)(unaff_x29 + -0x98) = lVar23;
          *(ulong **)(unaff_x29 + -0xa0) = puVar5;
          *(long *)(unaff_x29 + -0x88) = lVar25;
          *(long *)(unaff_x29 + -0x90) = lVar24;
          *(long *)(unaff_x29 + -0x78) = lVar11;
          *(long *)(unaff_x29 + -0x80) = lVar26;
          if (uVar6 == 0x8000000000000003) {
            in_stack_00000098 = puVar4;
            in_stack_000000b8 = puVar22;
            if (puVar22 != (ulong *)0x8000000000000000) goto LAB_1013ba164;
          }
          else {
            puVar4 = (ulong *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
            FUN_100de6690(unaff_x29 + -0xb8);
          }
        }
        in_stack_000001e0 = (ulong *)0x8000000000000000;
        uVar13 = true;
        in_stack_000001e8 = puVar4;
        goto joined_r0x0001013babac;
      }
      *(undefined **)(unaff_x29 + -0x70) = &UNK_108cad90a;
      *(undefined8 *)(unaff_x29 + -0x68) = 5;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
      in_stack_000001e8 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
    }
    else {
      if (unaff_x19 == (ulong *)0x8000000000000001) {
        if (uVar6 == 0x8000000000000005) {
          puVar4 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          *(ulong *)(unaff_x29 + -0xb8) = uVar6;
          *(ulong **)(unaff_x29 + -0xa8) = puVar4;
          *(ulong **)(unaff_x29 + -0xb0) = puVar22;
          *(long *)(unaff_x29 + -0x98) = lVar23;
          *(ulong **)(unaff_x29 + -0xa0) = puVar5;
          *(long *)(unaff_x29 + -0x88) = lVar25;
          *(long *)(unaff_x29 + -0x90) = lVar24;
          *(long *)(unaff_x29 + -0x78) = lVar11;
          *(long *)(unaff_x29 + -0x80) = lVar26;
          if (uVar6 == 0x8000000000000000) {
            FUN_100de6690(unaff_x29 + -0xb8);
            unaff_x19 = (ulong *)0x8000000000000000;
            puVar5 = in_stack_00000060;
            in_stack_00000078 = in_stack_00000038;
            goto LAB_1013ba164;
          }
          if (uVar6 == 0x8000000000000003) {
            unaff_x19 = *(ulong **)(unaff_x29 + -0xb0);
            puVar4 = *(ulong **)(unaff_x29 + -0xa8);
            if ((unaff_x19 != (ulong *)0x8000000000000000) &&
               (unaff_x19 != (ulong *)0x8000000000000001)) {
              in_stack_00000018 = *(ulong **)(unaff_x29 + -0xa0);
              in_stack_00000038 = puVar4;
              puVar5 = in_stack_00000060;
              in_stack_00000078 = puVar4;
              goto LAB_1013ba164;
            }
          }
          else {
            puVar4 = (ulong *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
            FUN_100de6690(unaff_x29 + -0xb8);
          }
        }
        unaff_x19 = (ulong *)0x8000000000000001;
        goto joined_r0x0001013bac18;
      }
      *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca155d;
      *(undefined8 *)(unaff_x29 + -0x68) = 0xb;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
      in_stack_000001e8 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
    }
  }
  else {
    if (4 < uVar16) {
      if (uVar16 != 5) {
        unaff_x25 = 0x8000000000000005;
        if (uVar6 != 0x8000000000000005) {
          *(ulong *)(unaff_x29 + -0xb8) = uVar6;
          *(ulong **)(unaff_x29 + -0xa8) = puVar4;
          *(ulong **)(unaff_x29 + -0xb0) = puVar22;
          *(long *)(unaff_x29 + -0x98) = lVar23;
          *(ulong **)(unaff_x29 + -0xa0) = puVar5;
          *(long *)(unaff_x29 + -0x88) = lVar25;
          *(long *)(unaff_x29 + -0x90) = lVar24;
          *(long *)(unaff_x29 + -0x78) = lVar11;
          *(long *)(unaff_x29 + -0x80) = lVar26;
          FUN_100de6690(unaff_x29 + -0xb8);
          puVar5 = in_stack_00000060;
          goto LAB_1013ba164;
        }
        in_stack_000001e8 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        uVar6 = 0x8000000000000005;
        goto LAB_1013baa74;
      }
      if (unaff_x27 != 0x8000000000000001) {
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cac8dc;
        *(undefined8 *)(unaff_x29 + -0x68) = 3;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_000001e8 =
             (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
        in_stack_000001e0 = (ulong *)0x8000000000000000;
        uVar13 = true;
        in_stack_00000270 = uVar6;
        goto joined_r0x0001013ba8d8;
      }
      unaff_x25 = 0x8000000000000005;
      if (uVar6 == 0x8000000000000005) {
        puVar4 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
LAB_1013babbc:
        in_stack_000001e0 = (ulong *)0x8000000000000000;
        uVar13 = true;
        in_stack_000001e8 = puVar4;
        in_stack_00000270 = 0x8000000000000005;
        goto LAB_1013bac4c;
      }
      *(ulong *)(unaff_x29 + -0xb8) = uVar6;
      *(ulong **)(unaff_x29 + -0xa8) = puVar4;
      *(ulong **)(unaff_x29 + -0xb0) = puVar22;
      *(long *)(unaff_x29 + -0x98) = lVar23;
      *(ulong **)(unaff_x29 + -0xa0) = puVar5;
      *(long *)(unaff_x29 + -0x88) = lVar25;
      *(long *)(unaff_x29 + -0x90) = lVar24;
      *(long *)(unaff_x29 + -0x78) = lVar11;
      *(long *)(unaff_x29 + -0x80) = lVar26;
      if (uVar6 != 0x8000000000000000) {
        if (uVar6 == 0x8000000000000003) {
          unaff_x27 = *(ulong *)(unaff_x29 + -0xb0);
          puVar4 = *(ulong **)(unaff_x29 + -0xa8);
          if ((unaff_x27 != 0x8000000000000000) && (unaff_x27 != 0x8000000000000001)) {
            in_stack_00000000 = *(ulong **)(unaff_x29 + -0xa0);
            in_stack_00000030 = puVar4;
            puVar5 = in_stack_00000060;
            in_stack_000000a0 = puVar4;
            goto LAB_1013ba164;
          }
        }
        else {
          puVar4 = (ulong *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(unaff_x29 + -0xb8);
        }
        goto LAB_1013babbc;
      }
      FUN_100de6690(unaff_x29 + -0xb8);
      unaff_x27 = 0x8000000000000000;
      puVar5 = in_stack_00000060;
      in_stack_000000a0 = in_stack_00000030;
LAB_1013ba164:
      in_stack_00000090 = puVar29;
      in_stack_00000060 = puVar5;
      in_stack_00000058 = puVar14;
      unaff_x25 = 0x8000000000000005;
      plVar27 = plVar7;
      plVar2 = plVar15;
      unaff_x28 = in_stack_00000098;
      if (plVar7 == plVar15) goto joined_r0x0001013ba874;
      goto LAB_1013ba174;
    }
    if (uVar16 == 3) {
      if (in_stack_000000c8 != (ulong *)0x8000000000000001) {
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cabe67;
        *(undefined8 *)(unaff_x29 + -0x68) = 9;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_000001e8 =
             (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
        goto LAB_1013baa74;
      }
      in_stack_00000270 = 0x8000000000000005;
      unaff_x25 = 0x8000000000000005;
      if (uVar6 == 0x8000000000000005) {
        in_stack_00000088 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
      }
      else {
        *(ulong *)(unaff_x29 + -0xb8) = uVar6;
        *(ulong **)(unaff_x29 + -0xa8) = puVar4;
        *(ulong **)(unaff_x29 + -0xb0) = puVar22;
        *(long *)(unaff_x29 + -0x98) = lVar23;
        *(ulong **)(unaff_x29 + -0xa0) = puVar5;
        *(long *)(unaff_x29 + -0x88) = lVar25;
        *(long *)(unaff_x29 + -0x90) = lVar24;
        *(long *)(unaff_x29 + -0x78) = lVar11;
        *(long *)(unaff_x29 + -0x80) = lVar26;
        if (uVar6 == 0x8000000000000000) {
          FUN_100de6690(unaff_x29 + -0xb8);
          in_stack_000000c8 = (ulong *)0x8000000000000000;
LAB_1013ba15c:
          in_stack_00000070 = in_stack_00000088;
          puVar5 = in_stack_00000060;
          goto LAB_1013ba164;
        }
        if (uVar6 == 0x8000000000000003) {
          in_stack_000000c8 = *(ulong **)(unaff_x29 + -0xb0);
          in_stack_00000088 = *(ulong **)(unaff_x29 + -0xa8);
          if ((in_stack_000000c8 != (ulong *)0x8000000000000000) &&
             (in_stack_000000c8 != (ulong *)0x8000000000000001)) {
            in_stack_00000010 = *(ulong **)(unaff_x29 + -0xa0);
            goto LAB_1013ba15c;
          }
        }
        else {
          in_stack_00000088 =
               (ulong *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(unaff_x29 + -0xb8);
        }
      }
      in_stack_000001e0 = (ulong *)0x8000000000000000;
      in_stack_000000c8 = (ulong *)0x8000000000000001;
      in_stack_000001e8 = in_stack_00000088;
      goto joined_r0x0001013ba8d0;
    }
    if (in_stack_000000c0 == (ulong *)0x8000000000000001) {
      if (uVar6 == 0x8000000000000005) {
        in_stack_00000080 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
      }
      else {
        *(ulong *)(unaff_x29 + -0xb8) = uVar6;
        *(ulong **)(unaff_x29 + -0xa8) = puVar4;
        *(ulong **)(unaff_x29 + -0xb0) = puVar22;
        *(long *)(unaff_x29 + -0x98) = lVar23;
        *(ulong **)(unaff_x29 + -0xa0) = puVar5;
        *(long *)(unaff_x29 + -0x88) = lVar25;
        *(long *)(unaff_x29 + -0x90) = lVar24;
        *(long *)(unaff_x29 + -0x78) = lVar11;
        *(long *)(unaff_x29 + -0x80) = lVar26;
        if (uVar6 == 0x8000000000000000) {
          FUN_100de6690(unaff_x29 + -0xb8);
          in_stack_000000c0 = (ulong *)0x8000000000000000;
LAB_1013ba788:
          in_stack_00000068 = in_stack_00000080;
          puVar5 = in_stack_00000060;
          goto LAB_1013ba164;
        }
        if (uVar6 == 0x8000000000000003) {
          in_stack_000000c0 = *(ulong **)(unaff_x29 + -0xb0);
          in_stack_00000080 = *(ulong **)(unaff_x29 + -0xa8);
          if ((in_stack_000000c0 != (ulong *)0x8000000000000000) &&
             (in_stack_000000c0 != (ulong *)0x8000000000000001)) {
            in_stack_00000008 = *(ulong **)(unaff_x29 + -0xa0);
            goto LAB_1013ba788;
          }
        }
        else {
          in_stack_00000080 =
               (ulong *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(unaff_x29 + -0xb8);
        }
      }
      in_stack_000000c0 = (ulong *)0x8000000000000001;
      puVar4 = in_stack_00000080;
joined_r0x0001013bac18:
      in_stack_000001e0 = (ulong *)0x8000000000000000;
      unaff_x25 = 0x8000000000000005;
      in_stack_000001e8 = puVar4;
      in_stack_00000270 = 0x8000000000000005;
      goto joined_r0x0001013ba8d0;
    }
    *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca281e;
    *(undefined8 *)(unaff_x29 + -0x68) = 7;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
    in_stack_000001e8 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  }
LAB_1013baa74:
  in_stack_000001e0 = (ulong *)0x8000000000000000;
  in_stack_00000270 = uVar6;
  goto joined_r0x0001013ba8d0;
joined_r0x0001013ba874:
  in_stack_00000098 = unaff_x28;
  if (unaff_x23 == (ulong *)0x8000000000000000) {
LAB_1013ba87c:
    *(undefined **)(unaff_x29 + -0x70) = &UNK_108cde34c;
    *(undefined8 *)(unaff_x29 + -0x68) = 4;
    unaff_x23 = (ulong *)0x8000000000000000;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xb8;
    in_stack_00000270 = unaff_x25;
    goto code_r0x0001013ba8a8;
  }
  if (in_stack_000000b8 == (ulong *)0x8000000000000000) goto code_r0x0001013ba904;
  in_stack_00000210 = (ulong *)0x8000000000000000;
  if (unaff_x19 != (ulong *)0x8000000000000001) {
    in_stack_00000210 = unaff_x19;
  }
  in_stack_00000228 = (ulong *)0x8000000000000000;
  if (in_stack_000000c8 != (ulong *)0x8000000000000001) {
    in_stack_00000228 = in_stack_000000c8;
  }
  in_stack_00000240 = (ulong *)0x8000000000000000;
  if (in_stack_000000c0 != (ulong *)0x8000000000000001) {
    in_stack_00000240 = in_stack_000000c0;
  }
  in_stack_00000258 = 0x8000000000000000;
  if (unaff_x27 != 0x8000000000000001) {
    in_stack_00000258 = unaff_x27;
  }
  in_stack_000001e0 = unaff_x23;
  in_stack_000001e8 = in_stack_00000090;
  if (plVar15 != plVar2) {
    in_stack_000001e8 = (ulong *)FUN_1087e422c(uVar9,&UNK_10b21cb90,&UNK_10b20a590);
    in_stack_000001e0 = (ulong *)0x8000000000000000;
    FUN_100e658dc(&stack0x000002e0);
  }
  FUN_100de8910(&stack0x000002b8);
  puVar5 = in_stack_00000078;
  puVar4 = in_stack_00000090;
  puVar22 = in_stack_000000a0;
  in_stack_000001f0 = in_stack_00000058;
  in_stack_000001f8 = in_stack_000000b8;
  in_stack_00000200 = unaff_x28;
  in_stack_00000208 = in_stack_00000060;
  in_stack_00000218 = in_stack_00000078;
  in_stack_00000220 = in_stack_00000018;
  in_stack_00000230 = in_stack_00000070;
  in_stack_00000238 = in_stack_00000010;
  in_stack_00000248 = in_stack_00000068;
  in_stack_00000250 = in_stack_00000008;
  in_stack_00000260 = in_stack_000000a0;
  in_stack_00000268 = in_stack_00000000;
  goto joined_r0x0001013bace8;
code_r0x0001013ba904:
  *(undefined **)(unaff_x29 + -0x70) = &UNK_108cad90a;
  *(undefined8 *)(unaff_x29 + -0x68) = 5;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
  in_stack_000001e8 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  in_stack_000001e0 = (ulong *)0x8000000000000000;
  if (unaff_x23 != (ulong *)0x0) {
    _free(in_stack_00000090);
  }
  uVar13 = false;
joined_r0x0001013babac:
  in_stack_000000b8 = (ulong *)0x0;
  in_stack_00000098 = unaff_x28;
  in_stack_00000270 = unaff_x25;
  if (unaff_x27 != 0x8000000000000001) goto joined_r0x0001013ba8d8;
  goto LAB_1013bac4c;
}

