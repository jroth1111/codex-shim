
/* WARNING: Type propagation algorithm not settling */

void FUN_101395d38(undefined8 param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *extraout_x9;
  long *extraout_x11;
  bool bVar9;
  long lVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  long *unaff_x23;
  uint uVar12;
  long *unaff_x26;
  long *plVar14;
  long lVar15;
  long *unaff_x28;
  long unaff_x29;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  ulong in_stack_00000050;
  long *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  long *in_stack_000000d0;
  long *in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long *in_stack_00000138;
  long *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  long *in_stack_00000158;
  long *in_stack_00000160;
  long *in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  long *in_stack_00000180;
  long *in_stack_00000188;
  long *in_stack_00000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  long *in_stack_000001a8;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  long *in_stack_000001c0;
  long *in_stack_000001c8;
  long *in_stack_000001d0;
  long *in_stack_000001d8;
  long *in_stack_000001e0;
  uint uVar13;
  
code_r0x000101395d38:
  in_stack_00000140 = (long *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_101395d50:
  bVar9 = true;
  in_stack_00000138 = unaff_x23;
LAB_101395d5c:
  if (unaff_x20 == (long *)0x8000000000000001) goto LAB_101395fe4;
joined_r0x000101395d6c:
  if (((ulong)unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
LAB_101395fe4:
  if (((ulong)unaff_x28 & 0x7fffffffffffffff) == 0) {
    bVar1 = false;
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
      bVar1 = bVar9;
    }
  }
  else {
    _free(in_stack_00000048);
    bVar1 = false;
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
      bVar1 = bVar9;
    }
  }
  if (bVar1) {
    _free(in_stack_00000058);
  }
  FUN_100de8910(&stack0x000001c8);
  puVar11 = unaff_x22;
  plVar14 = in_stack_00000038;
  plVar7 = in_stack_00000040;
  plVar4 = in_stack_00000048;
  if (in_stack_00000180 != unaff_x21) {
    FUN_100de6690(&stack0x00000180);
  }
joined_r0x000101396020:
  do {
    if (((long)in_stack_00000068 < 0) &&
       (((ulong)in_stack_00000068 & 0xfffffffffffffffe) != in_stack_00000050)) {
      FUN_100de6690(&stack0x000000f0);
    }
    lVar15 = in_stack_000000a0;
    lVar10 = in_stack_00000098;
    if (in_stack_00000138 == (long *)0x8000000000000000) {
      *in_stack_00000010 = -0x8000000000000000;
      in_stack_00000010[1] = (long)in_stack_00000140;
      if (in_stack_000000a0 != 0) {
        puVar5 = (undefined8 *)(in_stack_00000098 + 0x20);
        do {
          if (puVar5[-4] != 0) {
            _free(puVar5[-3]);
          }
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          if (puVar5[2] != -0x8000000000000000 && puVar5[2] != 0) {
            _free(puVar5[3]);
          }
          puVar5 = puVar5 + 9;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (in_stack_00000090 != 0) {
        _free(lVar10);
      }
LAB_10139655c:
      lVar10 = ((ulong)((long)in_stack_00000060 - (long)puVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        FUN_100de6690(puVar11);
        puVar11 = puVar11 + 9;
      }
      if (in_stack_00000018 != 0) {
        _free(in_stack_00000008);
      }
      return;
    }
    in_stack_000000c0 = in_stack_00000150;
    in_stack_000000b8 = in_stack_00000148;
    in_stack_000000d0 = in_stack_00000160;
    in_stack_000000c8 = in_stack_00000158;
    in_stack_000000e0 = in_stack_00000170;
    in_stack_000000d8 = in_stack_00000168;
    in_stack_000000e8 = in_stack_00000178;
    in_stack_000000a8 = in_stack_00000138;
    in_stack_000000b0 = in_stack_00000140;
    if (in_stack_000000a0 == in_stack_00000090) {
      func_0x0001088baf4c(&stack0x00000090);
    }
    puVar5 = (undefined8 *)(in_stack_00000098 + lVar15 * 0x48);
    puVar5[1] = in_stack_000000b0;
    *puVar5 = in_stack_000000a8;
    puVar5[3] = in_stack_000000c0;
    puVar5[2] = in_stack_000000b8;
    puVar5[5] = in_stack_000000d0;
    puVar5[4] = in_stack_000000c8;
    puVar5[7] = in_stack_000000e0;
    puVar5[6] = in_stack_000000d8;
    puVar5[8] = in_stack_000000e8;
    in_stack_000000a0 = lVar15 + 1;
    unaff_x22 = in_stack_00000060;
    if (puVar11 == in_stack_00000060) {
LAB_101396514:
      in_stack_00000010[1] = in_stack_00000098;
      *in_stack_00000010 = in_stack_00000090;
      in_stack_00000010[2] = in_stack_000000a0;
      puVar11 = unaff_x22;
      if (*in_stack_00000010 != -0x8000000000000000) {
        in_stack_00000188 = (long *)in_stack_00000010[1];
        in_stack_00000180 = (long *)*in_stack_00000010;
        in_stack_00000190 = (long *)in_stack_00000010[2];
        puVar11 = in_stack_00000060;
        if (in_stack_00000060 != unaff_x22) {
          lVar10 = FUN_1087e422c(in_stack_00000000,&UNK_10b21cb80,&UNK_10b20a590);
          *in_stack_00000010 = -0x8000000000000000;
          in_stack_00000010[1] = lVar10;
          FUN_100ca9d44(&stack0x00000180);
          puVar11 = unaff_x22;
        }
      }
      goto LAB_10139655c;
    }
    unaff_x22 = puVar11 + 9;
    in_stack_00000068 = (long *)*puVar11;
    if (in_stack_00000068 == unaff_x21) goto LAB_101396514;
    lVar10 = puVar11[2];
    plVar16 = (long *)puVar11[1];
    in_stack_00000110 = puVar11[4];
    in_stack_00000108 = puVar11[3];
    uVar18 = puVar11[6];
    in_stack_00000118 = puVar11[5];
    in_stack_00000130 = puVar11[8];
    in_stack_00000128 = puVar11[7];
    uVar8 = (ulong)in_stack_00000068 ^ 0x8000000000000000;
    if (-1 < (long)in_stack_00000068) {
      uVar8 = 5;
    }
    in_stack_00000038 = plVar14;
    in_stack_00000040 = plVar7;
    in_stack_00000048 = plVar4;
    in_stack_000000f0 = in_stack_00000068;
    in_stack_000000f8 = plVar16;
    in_stack_00000100 = lVar10;
    in_stack_00000120 = uVar18;
    if (uVar8 == 4) {
      lVar10 = puVar11[1];
      plVar16 = (long *)puVar11[2];
      lVar15 = puVar11[3];
      *(long **)(unaff_x29 + -0xb8) = plVar16;
      *(long **)(unaff_x29 + -0xb0) = plVar16;
      *(long *)(unaff_x29 + -0xa8) = lVar10;
      *(long **)(unaff_x29 + -0xa0) = plVar16 + lVar15 * 9;
      unaff_x26 = plVar16;
      if (lVar15 == 0) {
LAB_101395980:
        plVar3 = (long *)FUN_1087e422c(0,&UNK_10b2317b8,&UNK_10b20a590);
LAB_10139599c:
        in_stack_00000138 = (long *)0x8000000000000000;
        in_stack_00000048 = plVar4;
        in_stack_00000140 = plVar3;
        plVar14 = in_stack_00000188;
        plVar7 = in_stack_00000190;
        plVar4 = in_stack_00000198;
      }
      else {
        unaff_x26 = plVar16 + 9;
        plVar6 = (long *)*plVar16;
        *(long **)(unaff_x29 + -0xb0) = unaff_x26;
        if (plVar6 == unaff_x21) goto LAB_101395980;
        plVar3 = (long *)plVar16[2];
        plVar17 = (long *)plVar16[1];
        in_stack_000001a0 = (long *)plVar16[4];
        in_stack_00000048 = (long *)plVar16[3];
        in_stack_000001b0 = (long *)plVar16[6];
        in_stack_000001a8 = (long *)plVar16[5];
        in_stack_000001c0 = (long *)plVar16[8];
        in_stack_000001b8 = (long *)plVar16[7];
        in_stack_00000198 = in_stack_00000048;
        in_stack_00000190 = plVar3;
        in_stack_00000180 = plVar6;
        in_stack_00000188 = plVar17;
        if (plVar6 != (long *)0x8000000000000003) {
          plVar3 = (long *)FUN_108832ea0(&stack0x00000180,unaff_x29 + -0x70,&UNK_10b20a620);
          FUN_100de6690(&stack0x00000180);
          goto LAB_10139599c;
        }
        if ((plVar17 == (long *)0x8000000000000000) || (plVar17 == (long *)0x8000000000000001))
        goto LAB_10139599c;
        if (lVar15 == 1) {
LAB_101395de8:
          in_stack_00000180 = plVar6;
          in_stack_00000058 = (long *)FUN_1087e422c(1,&UNK_10b2317b8,&UNK_10b20a590);
          in_stack_00000048 = plVar4;
LAB_101395e04:
          in_stack_00000040 = plVar7;
          in_stack_00000138 = (long *)0x8000000000000000;
          in_stack_00000140 = in_stack_00000058;
          in_stack_00000038 = plVar14;
LAB_101395e0c:
          plVar14 = in_stack_00000188;
          plVar7 = in_stack_00000190;
          plVar4 = in_stack_00000198;
          if (plVar17 != (long *)0x0) {
            _free(plVar3);
            plVar14 = in_stack_00000188;
            plVar7 = in_stack_00000190;
            plVar4 = in_stack_00000198;
          }
        }
        else {
          unaff_x26 = plVar16 + 0x12;
          *(long **)(unaff_x29 + -0xb0) = unaff_x26;
          in_stack_00000180 = (long *)plVar16[9];
          if (in_stack_00000180 == unaff_x21) goto LAB_101395de8;
          in_stack_00000058 = (long *)plVar16[0xb];
          in_stack_00000040 = (long *)plVar16[10];
          in_stack_000001a0 = (long *)plVar16[0xd];
          in_stack_00000038 = (long *)plVar16[0xc];
          in_stack_000001b0 = (long *)plVar16[0xf];
          in_stack_000001a8 = (long *)plVar16[0xe];
          in_stack_000001c0 = (long *)plVar16[0x11];
          in_stack_000001b8 = (long *)plVar16[0x10];
          in_stack_00000198 = in_stack_00000038;
          in_stack_00000190 = in_stack_00000058;
          in_stack_00000188 = in_stack_00000040;
          if (in_stack_00000180 != (long *)0x8000000000000003) {
            in_stack_00000058 =
                 (long *)FUN_108832ea0(&stack0x00000180,unaff_x29 + -0x70,&UNK_10b20a620);
            FUN_100de6690(&stack0x00000180);
            goto LAB_101395e04;
          }
          if ((in_stack_00000040 == (long *)0x8000000000000000) ||
             (plVar7 = in_stack_00000040, in_stack_00000040 == (long *)0x8000000000000001))
          goto LAB_101395e04;
          if (lVar15 == 2) {
LAB_101396110:
            in_stack_00000140 = (long *)FUN_1087e422c(2,&UNK_10b2317b8,&UNK_10b20a590);
            in_stack_00000038 = plVar14;
joined_r0x000101396130:
            in_stack_00000138 = (long *)0x8000000000000000;
            if (in_stack_00000040 != (long *)0x0) {
              in_stack_00000138 = (long *)0x8000000000000000;
              _free(in_stack_00000058);
            }
            goto LAB_101395e0c;
          }
          unaff_x26 = plVar16 + 0x1b;
          *(long **)(unaff_x29 + -0xb0) = unaff_x26;
          plVar7 = (long *)plVar16[0x12];
          if (plVar7 == unaff_x21) goto LAB_101396110;
          in_stack_00000190 = (long *)plVar16[0x14];
          in_stack_00000188 = (long *)plVar16[0x13];
          in_stack_000001a0 = (long *)plVar16[0x16];
          in_stack_00000198 = (long *)plVar16[0x15];
          in_stack_000001b0 = (long *)plVar16[0x18];
          in_stack_000001a8 = (long *)plVar16[0x17];
          in_stack_000001c0 = (long *)plVar16[0x1a];
          in_stack_000001b8 = (long *)plVar16[0x19];
          in_stack_00000180 = plVar7;
          if (plVar7 != (long *)0x8000000000000000) {
            if (plVar7 == (long *)0x8000000000000003) {
              in_stack_00000140 = in_stack_00000190;
              in_stack_00000030 = in_stack_00000190;
              if ((-0x7fffffffffffffff < (long)in_stack_00000188) &&
                 (in_stack_00000140 = in_stack_00000190,
                 in_stack_00000188 != (long *)((long)unaff_x21 + -3))) goto LAB_101396180;
            }
            else {
              in_stack_00000030 =
                   (long *)FUN_108832ea0(&stack0x00000180,unaff_x29 + -0x70,&UNK_10b20a5e0);
              FUN_100de6690(&stack0x00000180);
              in_stack_00000140 = in_stack_00000030;
            }
            goto joined_r0x000101396130;
          }
          FUN_100de6690(&stack0x00000180);
          in_stack_00000188 = (long *)0x8000000000000000;
          in_stack_00000198 = extraout_x9;
          in_stack_00000190 = extraout_x11;
LAB_101396180:
          in_stack_00000138 = plVar17;
          in_stack_00000140 = plVar3;
          in_stack_00000148 = in_stack_00000048;
          in_stack_00000150 = in_stack_00000040;
          in_stack_00000158 = in_stack_00000058;
          in_stack_00000160 = in_stack_00000038;
          in_stack_00000168 = in_stack_00000188;
          in_stack_00000170 = in_stack_00000190;
          in_stack_00000178 = in_stack_00000198;
          in_stack_00000180 = plVar17;
          plVar14 = plVar3;
          plVar7 = in_stack_00000048;
          plVar4 = in_stack_00000040;
          in_stack_000001a0 = in_stack_00000058;
          in_stack_000001a8 = in_stack_00000038;
          in_stack_000001b0 = in_stack_00000188;
          in_stack_000001b8 = in_stack_00000190;
          in_stack_000001c0 = in_stack_00000198;
          if (lVar15 != 3) {
            in_stack_00000188 = plVar3;
            in_stack_00000190 = in_stack_00000048;
            in_stack_00000198 = in_stack_00000040;
            in_stack_00000140 = (long *)FUN_1087e422c(lVar15,&UNK_10b21cb80,&UNK_10b20a590);
            in_stack_00000138 = (long *)0x8000000000000000;
            FUN_100e592c0(&stack0x00000180);
            plVar14 = in_stack_00000188;
            plVar7 = in_stack_00000190;
            plVar4 = in_stack_00000198;
          }
        }
      }
      in_stack_00000198 = plVar4;
      in_stack_00000190 = plVar7;
      in_stack_00000188 = plVar14;
      lVar15 = ((ulong)((long)(plVar16 + lVar15 * 9) - (long)unaff_x26) >> 3) * -0x71c71c71c71c71c7
               + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100de6690(unaff_x26);
        unaff_x26 = unaff_x26 + 9;
      }
      puVar11 = unaff_x22;
      plVar14 = in_stack_00000038;
      plVar7 = in_stack_00000040;
      plVar4 = in_stack_00000048;
      if (lVar10 != 0) {
        _free(plVar16);
      }
      goto joined_r0x000101396020;
    }
    if (uVar8 == 5) {
      if ((in_stack_00000110 != 0) && (in_stack_00000110 * 9 != -0x11)) {
        _free(in_stack_00000108 + in_stack_00000110 * -8 + -8);
      }
      plVar14 = plVar16 + lVar10 * 0xd;
      in_stack_00000180 = unaff_x21;
      in_stack_000001c8 = plVar16;
      in_stack_000001d0 = plVar16;
      in_stack_000001d8 = in_stack_00000068;
      in_stack_000001e0 = plVar14;
      if (lVar10 == 0) {
        unaff_x20 = (long *)0x8000000000000001;
        unaff_x28 = (long *)0x0;
LAB_101395d0c:
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108c61038;
        *(undefined8 *)(unaff_x29 + -0x68) = 4;
        unaff_x23 = (long *)0x8000000000000000;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        param_2 = unaff_x29 + -0xb8;
        goto code_r0x000101395d38;
      }
      unaff_x20 = (long *)0x8000000000000001;
      unaff_x23 = (long *)0x8000000000000000;
      unaff_x28 = (long *)0x8000000000000000;
      do {
        plVar7 = plVar16 + 0xd;
        if (*plVar16 == -0x8000000000000000) {
          plVar4 = plVar7;
          in_stack_000001d0 = plVar7;
          if (unaff_x23 != (long *)0x8000000000000000) goto LAB_101395e50;
          goto LAB_101395d0c;
        }
        piVar2 = (int *)plVar16[1];
        lVar10 = plVar16[2];
        in_stack_00000198 = (long *)plVar16[6];
        in_stack_00000190 = (long *)plVar16[5];
        in_stack_000001a8 = (long *)plVar16[8];
        in_stack_000001a0 = (long *)plVar16[7];
        in_stack_000001b8 = (long *)plVar16[10];
        in_stack_000001b0 = (long *)plVar16[9];
        in_stack_000001c0 = (long *)plVar16[0xb];
        in_stack_00000188 = (long *)plVar16[4];
        in_stack_00000180 = (long *)plVar16[3];
        if (lVar10 == 3) {
          if ((short)*piVar2 != 0x7763 || *(char *)((long)piVar2 + 2) != 'd') goto LAB_101395ad0;
          uVar13 = 1;
          uVar12 = 1;
        }
        else if (lVar10 == 5) {
          if (*piVar2 != 0x6c746974 || (char)piVar2[1] != 'e') goto LAB_101395ad0;
          uVar13 = 2;
          uVar12 = 2;
        }
        else if ((lVar10 == 4) && (*piVar2 == 0x68746170)) {
          uVar13 = 0;
          uVar12 = 0;
        }
        else {
LAB_101395ad0:
          uVar13 = 3;
          uVar12 = 3;
        }
        if (*plVar16 != 0) {
          _free();
          uVar12 = uVar13;
        }
        plVar4 = in_stack_00000180;
        if (uVar12 < 2) {
          if (uVar12 == 0) {
            if (unaff_x23 == (long *)0x8000000000000000) {
              in_stack_00000180 = (long *)0x8000000000000005;
              unaff_x21 = (long *)0x8000000000000005;
              if (plVar4 == (long *)0x8000000000000005) {
                in_stack_000001d0 = plVar7;
                plVar4 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
                plVar7 = in_stack_000001d0;
              }
              else {
                *(long **)(unaff_x29 + -0xb8) = plVar4;
                *(long **)(unaff_x29 + -0xa8) = in_stack_00000190;
                *(long **)(unaff_x29 + -0xb0) = in_stack_00000188;
                *(long **)(unaff_x29 + -0x98) = in_stack_000001a0;
                *(long **)(unaff_x29 + -0xa0) = in_stack_00000198;
                *(long **)(unaff_x29 + -0x88) = in_stack_000001b0;
                *(long **)(unaff_x29 + -0x90) = in_stack_000001a8;
                *(long **)(unaff_x29 + -0x78) = in_stack_000001c0;
                *(long **)(unaff_x29 + -0x80) = in_stack_000001b8;
                if (plVar4 == (long *)0x8000000000000003) {
                  plVar4 = in_stack_00000190;
                  if (in_stack_00000188 != (long *)0x8000000000000000) {
                    in_stack_00000040 = in_stack_00000198;
                    unaff_x23 = in_stack_00000188;
                    in_stack_00000058 = in_stack_00000190;
                    goto LAB_101395a00;
                  }
                }
                else {
                  in_stack_000001d0 = plVar7;
                  plVar4 = (long *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a620)
                  ;
                  FUN_100de6690(unaff_x29 + -0xb8);
                  plVar7 = in_stack_000001d0;
                }
              }
              in_stack_000001d0 = plVar7;
              unaff_x23 = (long *)0x8000000000000000;
              in_stack_00000140 = plVar4;
              goto LAB_101395d50;
            }
            *(undefined **)(unaff_x29 + -0x70) = &UNK_108c61038;
            *(undefined8 *)(unaff_x29 + -0x68) = 4;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
            *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
            in_stack_000001d0 = plVar7;
            in_stack_00000140 =
                 (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
          }
          else if (unaff_x28 == (long *)0x8000000000000000) {
            in_stack_00000180 = (long *)0x8000000000000005;
            unaff_x21 = (long *)0x8000000000000005;
            if (plVar4 == (long *)0x8000000000000005) {
              in_stack_000001d0 = plVar7;
              plVar4 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
              plVar7 = in_stack_000001d0;
            }
            else {
              *(long **)(unaff_x29 + -0xb8) = plVar4;
              *(long **)(unaff_x29 + -0xa8) = in_stack_00000190;
              *(long **)(unaff_x29 + -0xb0) = in_stack_00000188;
              *(long **)(unaff_x29 + -0x98) = in_stack_000001a0;
              *(long **)(unaff_x29 + -0xa0) = in_stack_00000198;
              *(long **)(unaff_x29 + -0x88) = in_stack_000001b0;
              *(long **)(unaff_x29 + -0x90) = in_stack_000001a8;
              *(long **)(unaff_x29 + -0x78) = in_stack_000001c0;
              *(long **)(unaff_x29 + -0x80) = in_stack_000001b8;
              if (plVar4 == (long *)0x8000000000000003) {
                plVar4 = in_stack_00000190;
                if (in_stack_00000188 != (long *)0x8000000000000000) {
                  in_stack_00000038 = in_stack_00000198;
                  unaff_x28 = in_stack_00000188;
                  in_stack_00000048 = in_stack_00000190;
                  goto LAB_101395a00;
                }
              }
              else {
                in_stack_000001d0 = plVar7;
                plVar4 = (long *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a620);
                FUN_100de6690(unaff_x29 + -0xb8);
                plVar7 = in_stack_000001d0;
              }
            }
            in_stack_000001d0 = plVar7;
            unaff_x28 = (long *)0x0;
            in_stack_00000140 = plVar4;
          }
          else {
            *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca1f1d;
            *(undefined8 *)(unaff_x29 + -0x68) = 3;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
            *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
            in_stack_000001d0 = plVar7;
            in_stack_00000140 =
                 (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
          }
LAB_101395fcc:
          in_stack_00000138 = (long *)0x8000000000000000;
          bVar9 = true;
          goto LAB_101395d5c;
        }
        if (uVar12 != 2) {
          in_stack_00000180 = (long *)0x8000000000000005;
          unaff_x21 = (long *)0x8000000000000005;
          if (plVar4 != (long *)0x8000000000000005) {
            *(long **)(unaff_x29 + -0xb8) = plVar4;
            *(long **)(unaff_x29 + -0xa8) = in_stack_00000190;
            *(long **)(unaff_x29 + -0xb0) = in_stack_00000188;
            *(long **)(unaff_x29 + -0x98) = in_stack_000001a0;
            *(long **)(unaff_x29 + -0xa0) = in_stack_00000198;
            *(long **)(unaff_x29 + -0x88) = in_stack_000001b0;
            *(long **)(unaff_x29 + -0x90) = in_stack_000001a8;
            *(long **)(unaff_x29 + -0x78) = in_stack_000001c0;
            *(long **)(unaff_x29 + -0x80) = in_stack_000001b8;
            FUN_100de6690(unaff_x29 + -0xb8);
            goto LAB_101395a00;
          }
          in_stack_000001d0 = plVar7;
          in_stack_00000140 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_101395fcc;
        }
        if (unaff_x20 != (long *)0x8000000000000001) {
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca1558;
          *(undefined8 *)(unaff_x29 + -0x68) = 5;
          *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
          in_stack_000001d0 = plVar7;
          in_stack_00000140 =
               (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
          in_stack_00000138 = (long *)0x8000000000000000;
          bVar9 = true;
          goto joined_r0x000101395d6c;
        }
        in_stack_00000180 = (long *)0x8000000000000005;
        unaff_x21 = (long *)0x8000000000000005;
        if (plVar4 == (long *)0x8000000000000005) {
          in_stack_000001d0 = plVar7;
          unaff_x26 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
          plVar7 = in_stack_000001d0;
LAB_101395fdc:
          in_stack_000001d0 = plVar7;
          in_stack_00000138 = (long *)0x8000000000000000;
          bVar9 = true;
          in_stack_00000140 = unaff_x26;
          goto LAB_101395fe4;
        }
        *(long **)(unaff_x29 + -0xb8) = plVar4;
        *(long **)(unaff_x29 + -0xa8) = in_stack_00000190;
        *(long **)(unaff_x29 + -0xb0) = in_stack_00000188;
        *(long **)(unaff_x29 + -0x98) = in_stack_000001a0;
        *(long **)(unaff_x29 + -0xa0) = in_stack_00000198;
        *(long **)(unaff_x29 + -0x88) = in_stack_000001b0;
        *(long **)(unaff_x29 + -0x90) = in_stack_000001a8;
        *(long **)(unaff_x29 + -0x78) = in_stack_000001c0;
        *(long **)(unaff_x29 + -0x80) = in_stack_000001b8;
        if (plVar4 != (long *)0x8000000000000000) {
          if (plVar4 == (long *)0x8000000000000003) {
            unaff_x20 = *(long **)(unaff_x29 + -0xb0);
            unaff_x26 = *(long **)(unaff_x29 + -0xa8);
            if ((unaff_x20 != (long *)0x8000000000000000) &&
               (unaff_x20 != (long *)0x8000000000000001)) {
              in_stack_00000028 = *(long **)(unaff_x29 + -0xa0);
              in_stack_00000030 = unaff_x26;
              goto LAB_101395a00;
            }
          }
          else {
            in_stack_000001d0 = plVar7;
            unaff_x26 = (long *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
            FUN_100de6690(unaff_x29 + -0xb8);
            plVar7 = in_stack_000001d0;
          }
          goto LAB_101395fdc;
        }
        FUN_100de6690(unaff_x29 + -0xb8);
        unaff_x20 = (long *)0x8000000000000000;
        in_stack_00000030 = unaff_x26;
LAB_101395a00:
        unaff_x21 = (long *)0x8000000000000005;
        plVar16 = plVar7;
      } while (plVar7 != plVar14);
      plVar4 = plVar14;
      in_stack_000001d0 = plVar7;
      if (unaff_x23 == (long *)0x8000000000000000) goto LAB_101395d0c;
LAB_101395e50:
      if (unaff_x28 == (long *)0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca1f1d;
        *(undefined8 *)(unaff_x29 + -0x68) = 3;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_000001d0 = plVar7;
        in_stack_00000140 = (long *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
        unaff_x28 = (long *)0x0;
        in_stack_00000138 = (long *)0x8000000000000000;
        if (unaff_x23 != (long *)0x0) {
          _free(in_stack_00000058);
        }
        bVar9 = false;
        goto LAB_101395d5c;
      }
      in_stack_00000168 = (long *)0x8000000000000000;
      if (unaff_x20 != (long *)0x8000000000000001) {
        in_stack_00000168 = unaff_x20;
      }
      in_stack_00000140 = in_stack_00000058;
      in_stack_00000148 = in_stack_00000040;
      in_stack_00000158 = in_stack_00000048;
      in_stack_00000160 = in_stack_00000038;
      in_stack_00000170 = in_stack_00000030;
      in_stack_00000178 = in_stack_00000028;
      *(long **)(unaff_x29 + -0xc0) = in_stack_00000028;
      *(long **)(unaff_x29 + -0xf8) = in_stack_00000058;
      *(long **)(unaff_x29 + -0x100) = unaff_x23;
      *(long **)(unaff_x29 + -0xe8) = unaff_x28;
      *(long **)(unaff_x29 + -0xf0) = in_stack_00000040;
      *(long **)(unaff_x29 + -0xd8) = in_stack_00000038;
      *(long **)(unaff_x29 + -0xe0) = in_stack_00000048;
      *(long **)(unaff_x29 + -200) = in_stack_00000030;
      *(long **)(unaff_x29 + -0xd0) = in_stack_00000168;
      in_stack_00000138 = unaff_x23;
      in_stack_00000150 = unaff_x28;
      in_stack_000001d0 = plVar7;
      if (plVar14 != plVar4) {
        in_stack_00000140 = (long *)FUN_1087e422c(uVar18,&UNK_10b21cb90,&UNK_10b20a590);
        in_stack_00000138 = (long *)0x8000000000000000;
        FUN_100e592c0(unaff_x29 + -0x100);
      }
      FUN_100de8910(&stack0x000001c8);
      puVar11 = unaff_x22;
      plVar14 = in_stack_00000038;
      plVar7 = in_stack_00000040;
      plVar4 = in_stack_00000048;
    }
    else {
      in_stack_00000140 = (long *)FUN_108832ea0(&stack0x000000f0,unaff_x29 + -0x70,&UNK_10b20bd00);
      in_stack_00000138 = (long *)0x8000000000000000;
      puVar11 = unaff_x22;
    }
  } while( true );
}

