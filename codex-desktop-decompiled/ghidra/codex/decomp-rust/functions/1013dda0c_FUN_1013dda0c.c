
void FUN_1013dda0c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong extraout_x9;
  long lVar19;
  ulong unaff_x20;
  char *unaff_x21;
  char *pcVar20;
  undefined8 *puVar21;
  ulong unaff_x22;
  char *pcVar22;
  undefined8 *unaff_x23;
  bool bVar23;
  ulong unaff_x25;
  ulong unaff_x26;
  char *pcVar24;
  char *unaff_x27;
  long lVar25;
  char *pcVar26;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  char *in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  byte in_stack_00000070;
  ulong uStack0000000000000078;
  undefined8 *in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong uStack00000000000000b0;
  undefined8 *in_stack_000000b8;
  char *in_stack_000000c8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  ulong in_stack_00000138;
  ulong in_stack_00000140;
  ulong in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  ulong in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_000001e8;
  ulong in_stack_000001f0;
  ulong uVar27;
  ulong in_stack_000001f8;
  ulong in_stack_00000200;
  ulong in_stack_00000208;
  ulong in_stack_00000210;
  ulong in_stack_00000218;
  ulong in_stack_00000220;
  byte in_stack_00000228;
  byte in_stack_00000229;
  undefined6 in_stack_0000022a;
  long in_stack_00000238;
  char *in_stack_00000240;
  long in_stack_00000248;
  char cVar28;
  undefined8 in_stack_00000250;
  
code_r0x0001013dda0c:
  in_stack_000001d0 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
  uStack00000000000000b0 = 0;
  in_stack_000001c8 = unaff_x22;
LAB_1013dda24:
  bVar6 = true;
  bVar23 = true;
LAB_1013ddd04:
  if (in_stack_000000a0 == 0x8000000000000001) goto LAB_1013ddd74;
joined_r0x0001013ddd1c:
  if (in_stack_000000a0 != 0x8000000000000000) {
    if (unaff_x20 != 0) {
      puVar21 = (undefined8 *)(in_stack_00000068 + 0x20);
      do {
        if (puVar21[-4] != 0) {
          _free(puVar21[-3]);
        }
        if (puVar21[-1] != 0) {
          _free(*puVar21);
        }
        puVar21 = puVar21 + 6;
        unaff_x20 = unaff_x20 - 1;
      } while (unaff_x20 != 0);
    }
    if (in_stack_000000a0 != 0) {
      _free(in_stack_00000068);
    }
  }
LAB_1013ddd74:
  if ((unaff_x25 & 0x7fffffffffffffff) == 0) {
    bVar4 = false;
    if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
      bVar4 = bVar6;
    }
    if (bVar4) {
LAB_1013ddd8c:
      _free(in_stack_00000058);
      bVar6 = false;
      if ((uStack00000000000000b0 & 0x7fffffffffffffff) != 0) {
        bVar6 = bVar23;
      }
      goto joined_r0x0001013dddcc;
    }
  }
  else {
    _free(in_stack_00000048);
    bVar4 = false;
    if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
      bVar4 = bVar6;
    }
    if (bVar4) goto LAB_1013ddd8c;
  }
  bVar6 = false;
  if ((uStack00000000000000b0 & 0x7fffffffffffffff) != 0) {
    bVar6 = bVar23;
  }
joined_r0x0001013dddcc:
  if (bVar6) {
    _free(unaff_x26);
  }
  FUN_100d34830(&stack0x00000270);
  pcVar20 = unaff_x21;
  if ((char)in_stack_00000250 != '\x16') {
    FUN_100e077ec(&stack0x00000250);
  }
LAB_1013dde00:
  do {
    if ((in_stack_00000070 & 0x1e) != 0x14) {
      FUN_100e077ec(&stack0x00000230);
    }
    lVar19 = in_stack_000000f8;
    uVar12 = in_stack_000001d0;
    unaff_x21 = pcVar20;
    if (in_stack_000001c8 == 0x8000000000000000) {
LAB_1013de5dc:
      lVar11 = in_stack_000000f0;
      *in_stack_00000038 = -0x8000000000000000;
      in_stack_00000038[1] = uVar12;
      lVar19 = in_stack_000000f0;
      for (lVar25 = in_stack_000000f8; lVar25 != 0; lVar25 = lVar25 + -1) {
        FUN_100e4b8ec(lVar19);
        lVar19 = lVar19 + 0x68;
      }
      if (in_stack_000000e8 != 0) {
        _free(lVar11);
      }
LAB_1013de61c:
      lVar19 = ((ulong)((long)unaff_x27 - (long)unaff_x21) >> 5) + 1;
      while (lVar19 = lVar19 + -1, lVar19 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x0001013de580:
      if (in_stack_00000008 != 0) {
        _free(in_stack_00000010);
      }
      return;
    }
    in_stack_00000150 = CONCAT62(in_stack_0000022a,CONCAT11(in_stack_00000229,in_stack_00000228));
    in_stack_00000108 = in_stack_000001e0;
    in_stack_00000100 = in_stack_000001d8;
    in_stack_00000110 = in_stack_000001e8;
    in_stack_00000118 = in_stack_000001f0;
    in_stack_00000120 = in_stack_000001f8;
    in_stack_00000128 = in_stack_00000200;
    in_stack_00000130 = in_stack_00000208;
    in_stack_00000138 = in_stack_00000210;
    in_stack_00000140 = in_stack_00000218;
    in_stack_00000148 = in_stack_00000220;
    if (in_stack_000001c8 == 0x8000000000000001) goto LAB_1013de5dc;
    in_stack_00000160 = in_stack_000001c8;
    in_stack_00000168 = in_stack_000001d0;
    in_stack_00000178 = in_stack_000001e0;
    in_stack_00000170 = in_stack_000001d8;
    in_stack_00000180 = in_stack_000001e8;
    in_stack_00000188 = in_stack_000001f0;
    in_stack_00000190 = in_stack_000001f8;
    in_stack_00000198 = in_stack_00000200;
    in_stack_000001a0 = in_stack_00000208;
    in_stack_000001a8 = in_stack_00000210;
    in_stack_000001b0 = in_stack_00000218;
    in_stack_000001b8 = in_stack_00000220;
    in_stack_000001c0 = in_stack_00000150;
    if (in_stack_000000f8 == in_stack_000000e8) {
      func_0x0001089bebd0(&stack0x000000e8);
    }
    puVar13 = (ulong *)(in_stack_000000f0 + lVar19 * 0x68);
    puVar13[9] = in_stack_000001a8;
    puVar13[8] = in_stack_000001a0;
    puVar13[0xb] = in_stack_000001b8;
    puVar13[10] = in_stack_000001b0;
    puVar13[0xc] = in_stack_000001c0;
    puVar13[1] = in_stack_00000168;
    *puVar13 = in_stack_00000160;
    puVar13[3] = in_stack_00000178;
    puVar13[2] = in_stack_00000170;
    puVar13[5] = in_stack_00000188;
    puVar13[4] = in_stack_00000180;
    puVar13[7] = in_stack_00000198;
    puVar13[6] = in_stack_00000190;
    in_stack_000000f8 = lVar19 + 1;
    unaff_x21 = unaff_x27;
    if (pcVar20 == unaff_x27) {
LAB_1013de520:
      in_stack_00000038[1] = in_stack_000000f0;
      *in_stack_00000038 = in_stack_000000e8;
      in_stack_00000038[2] = in_stack_000000f8;
      lVar19 = *in_stack_00000038;
      if (lVar19 != -0x8000000000000000) {
        in_stack_00000010 = in_stack_00000038[1];
        lVar25 = in_stack_00000038[2];
        lVar11 = FUN_100fbc738(&stack0x000000c0);
        if (lVar11 == 0) {
          return;
        }
        *in_stack_00000038 = -0x8000000000000000;
        in_stack_00000038[1] = lVar11;
        lVar11 = in_stack_00000010;
        for (; in_stack_00000008 = lVar19, lVar25 != 0; lVar25 = lVar25 + -1) {
          FUN_100e4b8ec(lVar11);
          lVar11 = lVar11 + 0x68;
        }
        goto joined_r0x0001013de580;
      }
      goto LAB_1013de61c;
    }
    unaff_x21 = pcVar20 + 0x20;
    cVar28 = *pcVar20;
    in_stack_000000c8 = unaff_x21;
    if (cVar28 == '\x16') goto LAB_1013de520;
    uVar7 = *(undefined8 *)(pcVar20 + 1);
    in_stack_00000090[1] = *(undefined8 *)(pcVar20 + 9);
    *in_stack_00000090 = uVar7;
    uVar7 = *(undefined8 *)(pcVar20 + 0x10);
    *(undefined8 *)((long)in_stack_00000090 + 0x17) = *(undefined8 *)(pcVar20 + 0x18);
    *(undefined8 *)((long)in_stack_00000090 + 0xf) = uVar7;
    in_stack_00000098 = in_stack_00000098 + 1;
    pcVar20 = unaff_x21;
    in_stack_000000e0 = in_stack_00000098;
    if (cVar28 == '\x14') {
      pcVar24 = in_stack_00000240 + in_stack_00000248 * 0x20;
      pcVar26 = in_stack_00000240;
      if (in_stack_00000248 == 0) {
LAB_1013dd418:
        unaff_x26 = FUN_1087e422c(0,&UNK_10b22f3f8,&UNK_10b20a590);
LAB_1013dd434:
        in_stack_000001c8 = 0x8000000000000000;
        in_stack_000001d0 = unaff_x26;
LAB_1013dd43c:
        lVar19 = ((ulong)((long)pcVar24 - (long)pcVar26) >> 5) + 1;
        while (lVar19 = lVar19 + -1, lVar19 != 0) {
          FUN_100e077ec(pcVar26);
          pcVar26 = pcVar26 + 0x20;
        }
        uVar18 = in_stack_000001f0;
        uVar27 = in_stack_000001f8;
        uVar9 = in_stack_00000200;
        uVar14 = in_stack_00000208;
        uVar15 = in_stack_00000210;
        uVar10 = in_stack_00000218;
        if (in_stack_00000238 != 0) {
          _free(in_stack_00000240);
        }
      }
      else {
        pcVar26 = in_stack_00000240 + 0x20;
        cVar28 = *in_stack_00000240;
        if (cVar28 == '\x16') goto LAB_1013dd418;
        uVar7 = *(undefined8 *)(in_stack_00000240 + 1);
        unaff_x23[1] = *(undefined8 *)(in_stack_00000240 + 9);
        *unaff_x23 = uVar7;
        uVar7 = *(undefined8 *)(in_stack_00000240 + 0x10);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(in_stack_00000240 + 0x18);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
        *(char *)(unaff_x29 + -0x80) = cVar28;
        FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
        uVar12 = *(ulong *)(unaff_x29 + -0xa0);
        unaff_x26 = *(ulong *)(unaff_x29 + -0x98);
        unaff_x27 = in_stack_00000050;
        if (uVar12 == 0x8000000000000000) goto LAB_1013dd434;
        if (in_stack_00000248 == 1) {
LAB_1013ddaa4:
          uVar8 = FUN_1087e422c(1,&UNK_10b22f3f8,&UNK_10b20a590);
LAB_1013ddabc:
          in_stack_000001c8 = 0x8000000000000000;
          in_stack_000001d0 = uVar8;
LAB_1013ddac4:
          if (uVar12 != 0) {
            _free(unaff_x26);
          }
          goto LAB_1013dd43c;
        }
        uVar17 = *(ulong *)(unaff_x29 + -0x90);
        pcVar26 = in_stack_00000240 + 0x40;
        cVar28 = in_stack_00000240[0x20];
        if (cVar28 == '\x16') goto LAB_1013ddaa4;
        uVar7 = *(undefined8 *)(in_stack_00000240 + 0x21);
        unaff_x23[1] = *(undefined8 *)(in_stack_00000240 + 0x29);
        *unaff_x23 = uVar7;
        uVar7 = *(undefined8 *)(in_stack_00000240 + 0x30);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(in_stack_00000240 + 0x38);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
        *(char *)(unaff_x29 + -0x80) = cVar28;
        FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
        uVar1 = *(ulong *)(unaff_x29 + -0xa0);
        uVar8 = *(ulong *)(unaff_x29 + -0x98);
        if (uVar1 == 0x8000000000000000) goto LAB_1013ddabc;
        if (in_stack_00000248 == 2) {
LAB_1013ddeb8:
          uVar9 = FUN_1087e422c(2,&UNK_10b22f3f8,&UNK_10b20a590);
LAB_1013dded0:
          in_stack_000001c8 = 0x8000000000000000;
          in_stack_000001d0 = uVar9;
LAB_1013dded8:
          if (uVar1 != 0) {
            _free(uVar8);
          }
          goto LAB_1013ddac4;
        }
        uVar18 = *(ulong *)(unaff_x29 + -0x90);
        pcVar26 = in_stack_00000240 + 0x60;
        cVar28 = in_stack_00000240[0x40];
        if (cVar28 == '\x16') goto LAB_1013ddeb8;
        uVar7 = *(undefined8 *)(in_stack_00000240 + 0x41);
        unaff_x23[1] = *(undefined8 *)(in_stack_00000240 + 0x49);
        *unaff_x23 = uVar7;
        uVar7 = *(undefined8 *)(in_stack_00000240 + 0x50);
        *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(in_stack_00000240 + 0x58);
        *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
        *(char *)(unaff_x29 + -0x80) = cVar28;
        FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
        uVar27 = *(ulong *)(unaff_x29 + -0xa0);
        uVar9 = *(ulong *)(unaff_x29 + -0x98);
        if (uVar27 == 0x8000000000000000) goto LAB_1013dded0;
        uVar14 = *(ulong *)(unaff_x29 + -0x90);
        if (in_stack_00000248 != 3) {
          pcVar26 = in_stack_00000240 + 0x80;
          cVar28 = in_stack_00000240[0x60];
          if (cVar28 == '\x16') goto LAB_1013ddf7c;
          uVar7 = *(undefined8 *)(in_stack_00000240 + 0x61);
          unaff_x23[1] = *(undefined8 *)(in_stack_00000240 + 0x69);
          *unaff_x23 = uVar7;
          uVar7 = *(undefined8 *)(in_stack_00000240 + 0x70);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(in_stack_00000240 + 0x78);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
          *(char *)(unaff_x29 + -0x80) = cVar28;
          if (cVar28 == '\0') {
            in_stack_00000068 = CONCAT44(in_stack_00000068._4_4_,(uint)*(byte *)(unaff_x29 + -0x7f))
            ;
            FUN_100e077ec(unaff_x29 + -0x80);
            lVar19 = 4;
            goto LAB_1013ddfbc;
          }
          in_stack_000001d0 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0xb8,&UNK_10b20a560);
joined_r0x0001013de068:
          in_stack_000001c8 = 0x8000000000000000;
          if (uVar27 != 0) {
            in_stack_000001c8 = 0x8000000000000000;
            _free(uVar9);
          }
          goto LAB_1013dded8;
        }
LAB_1013ddf7c:
        in_stack_00000068 = (ulong)in_stack_00000068._4_4_ << 0x20;
        lVar19 = 3;
LAB_1013ddfbc:
        pcVar22 = pcVar24;
        if (pcVar26 == pcVar24) {
LAB_1013de040:
          in_stack_000001d0 = FUN_1087e422c(5,&UNK_10b22f3f8,&UNK_10b20a590);
          pcVar26 = pcVar22;
          goto joined_r0x0001013de068;
        }
        cVar28 = *pcVar26;
        if (cVar28 == '\x16') {
          in_stack_00000060 = (ulong)in_stack_00000060._4_4_ << 0x20;
        }
        else {
          uVar7 = *(undefined8 *)(pcVar26 + 1);
          unaff_x23[1] = *(undefined8 *)(pcVar26 + 9);
          *unaff_x23 = uVar7;
          uVar7 = *(undefined8 *)(pcVar26 + 0x10);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pcVar26 + 0x18);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
          in_stack_00000058 = lVar19 + 1;
          *(char *)(unaff_x29 + -0x80) = cVar28;
          if (cVar28 != '\0') {
            in_stack_000001d0 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0xb8,&UNK_10b20a560);
            pcVar26 = pcVar26 + 0x20;
            goto joined_r0x0001013de068;
          }
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,(uint)*(byte *)(unaff_x29 + -0x7f));
          FUN_100e077ec(unaff_x29 + -0x80);
        }
        if (pcVar26 + 0x20 == pcVar24) goto LAB_1013de040;
        pcVar22 = pcVar26 + 0x40;
        cVar28 = pcVar26[0x20];
        if (cVar28 == '\x16') goto LAB_1013de040;
        uVar7 = *(undefined8 *)(pcVar26 + 0x21);
        in_stack_00000040[1] = *(undefined8 *)(pcVar26 + 0x29);
        *in_stack_00000040 = uVar7;
        uVar7 = *(undefined8 *)(pcVar26 + 0x30);
        *(undefined8 *)((long)in_stack_00000040 + 0x17) = *(undefined8 *)(pcVar26 + 0x38);
        *(undefined8 *)((long)in_stack_00000040 + 0xf) = uVar7;
        *(char *)(unaff_x29 + -0xa0) = cVar28;
        if (cVar28 == '\x10') {
LAB_1013de0b0:
          uVar10 = FUN_100e077ec(unaff_x29 + -0xa0);
          uVar15 = 0x8000000000000000;
          in_stack_00000220 = extraout_x9;
        }
        else {
          if (cVar28 == '\x11') {
            puVar21 = *(undefined8 **)(unaff_x29 + -0x98);
            uVar7 = *puVar21;
            *(undefined8 *)(unaff_x29 + -0x78) = puVar21[1];
            *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
            uVar7 = puVar21[2];
            *(undefined8 *)(unaff_x29 + -0x68) = puVar21[3];
            *(undefined8 *)(unaff_x29 + -0x70) = uVar7;
            FUN_101446938(unaff_x29 + -0xb8,unaff_x29 + -0x80);
            _free(puVar21);
          }
          else {
            if (cVar28 == '\x12') goto LAB_1013de0b0;
            FUN_101446938(unaff_x29 + -0xb8,unaff_x29 + -0xa0);
          }
          uVar15 = *(ulong *)(unaff_x29 + -0xb8);
          uVar10 = *(ulong *)(unaff_x29 + -0xb0);
          in_stack_000001d0 = uVar10;
          pcVar26 = pcVar22;
          if ((uVar15 == 0x8000000000000001) || (uVar15 == 0x8000000000000002))
          goto joined_r0x0001013de068;
          in_stack_00000220 = *(ulong *)(unaff_x29 + -0xa8);
        }
        in_stack_00000228 = (byte)in_stack_00000068;
        in_stack_00000229 = (byte)in_stack_00000060;
        in_stack_000001c8 = uVar12;
        in_stack_000001d0 = unaff_x26;
        in_stack_000001d8 = uVar17;
        in_stack_000001e0 = uVar1;
        in_stack_000001e8 = uVar8;
        uVar12 = FUN_100fbc738(&stack0x00000250);
        if (uVar12 != 0) {
          in_stack_000001c8 = 0x8000000000000000;
          in_stack_000001d0 = uVar12;
          FUN_100e4b8ec(&stack0x000002a0);
        }
      }
      in_stack_00000070 = 0x14;
      in_stack_000001f0 = uVar18;
      in_stack_000001f8 = uVar27;
      in_stack_00000200 = uVar9;
      in_stack_00000208 = uVar14;
      in_stack_00000210 = uVar15;
      in_stack_00000218 = uVar10;
      goto LAB_1013dde00;
    }
    if (cVar28 != '\x15') {
      uVar12 = FUN_108855b04(&stack0x00000230,unaff_x29 + -0xb8,&UNK_10b20b120);
      goto LAB_1013de5dc;
    }
    in_stack_00000070 = 0x15;
    pcVar26 = in_stack_00000240 + in_stack_00000248 * 0x40;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0x8000000000000001;
    unaff_x20 = in_stack_00000098;
    if (in_stack_00000248 == 0) {
      *(undefined8 *)(unaff_x29 + -0xd0) = 0x8000000000000001;
      in_stack_000000a0 = 0x8000000000000001;
      in_stack_000000a8 = 0;
      unaff_x25 = 0;
LAB_1013dd9e0:
      in_stack_00000250 = 0x16;
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca26b0;
      *(undefined8 *)(unaff_x29 + -0x98) = 2;
      unaff_x22 = 0x8000000000000000;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      param_2 = unaff_x29 + -0x80;
      goto code_r0x0001013dda0c;
    }
    lVar25 = 0;
    lVar19 = (in_stack_00000248 * 0x40 - 0x40U >> 6) + 1;
    in_stack_000000a0 = 0x8000000000000001;
    bVar2 = 2;
    bVar3 = 2;
    in_stack_000000a8 = 0x8000000000000000;
    uStack00000000000000b0 = 0x8000000000000000;
    unaff_x25 = 0x8000000000000000;
    uStack0000000000000078 = 0x8000000000000001;
    pcVar24 = in_stack_00000240 + 0x40;
LAB_1013dd4bc:
    do {
      bVar16 = pcVar24[-0x40];
      pcVar22 = pcVar24;
      lVar11 = lVar25;
      if (bVar16 == 0x16) break;
      *(byte *)(unaff_x29 + -0x80) = bVar16;
      uVar7 = *(undefined8 *)(pcVar24 + -0x30);
      *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)(pcVar24 + -0x28);
      *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
      uVar7 = *(undefined8 *)(pcVar24 + -0x3f);
      unaff_x23[1] = *(undefined8 *)(pcVar24 + -0x37);
      *unaff_x23 = uVar7;
      in_stack_00000250 = *(undefined8 *)(pcVar24 + -0x20);
      uVar12 = *(ulong *)(unaff_x29 + -0x78);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x70);
      unaff_x26 = in_stack_00000060;
      if (0xc < bVar16) {
        if (bVar16 == 0xd) {
          FUN_100b65da0(unaff_x29 + -0xa0,uVar12,uVar7);
          goto LAB_1013dd5bc;
        }
        if (bVar16 != 0xe) {
          if (bVar16 != 0xf) goto LAB_1013dd8f4;
          FUN_100b65b48(unaff_x29 + -0xa0,uVar12,uVar7);
          goto LAB_1013dd5bc;
        }
        FUN_100b65b48(unaff_x29 + -0xa0,uVar7,*(undefined8 *)(unaff_x29 + -0x68));
        if (uVar12 != 0) goto LAB_1013dd57c;
LAB_1013dd5c4:
        if ((*(byte *)(unaff_x29 + -0xa0) & 1) == 0) goto LAB_1013dd5cc;
LAB_1013dd91c:
        *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
        in_stack_000001d0 = *(ulong *)(unaff_x29 + -0x98);
LAB_1013ddcf8:
        in_stack_000001c8 = 0x8000000000000000;
        bVar23 = true;
        bVar6 = true;
        unaff_x27 = in_stack_00000050;
        goto LAB_1013ddd04;
      }
      if (bVar16 == 1) {
        bVar16 = *(byte *)(unaff_x29 + -0x7f);
        if (5 < bVar16) {
          bVar16 = 6;
        }
        *(byte *)(unaff_x29 + -0x9f) = bVar16;
        *(undefined1 *)(unaff_x29 + -0xa0) = 0;
LAB_1013dd5bc:
        FUN_100e077ec(unaff_x29 + -0x80);
        goto LAB_1013dd5c4;
      }
      if (bVar16 == 4) {
        if (5 < uVar12) {
          uVar12 = 6;
        }
        *(char *)(unaff_x29 + -0x9f) = (char)uVar12;
        *(undefined1 *)(unaff_x29 + -0xa0) = 0;
        goto LAB_1013dd5bc;
      }
      if (bVar16 != 0xc) {
LAB_1013dd8f4:
        uVar7 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0xb8,&UNK_10b212180);
        *(undefined8 *)(unaff_x29 + -0x98) = uVar7;
        *(undefined1 *)(unaff_x29 + -0xa0) = 1;
        goto LAB_1013dd91c;
      }
      FUN_100b65da0(unaff_x29 + -0xa0,uVar7);
      if (uVar12 == 0) goto LAB_1013dd5c4;
LAB_1013dd57c:
      _free(uVar7);
      if ((*(byte *)(unaff_x29 + -0xa0) & 1) != 0) goto LAB_1013dd91c;
LAB_1013dd5cc:
      bVar16 = *(byte *)(unaff_x29 + -0x9f);
      cVar28 = (char)in_stack_00000250;
      pcVar22 = pcVar26;
      lVar11 = lVar19;
      if (bVar16 < 3) {
        if (bVar16 == 0) {
          if (uStack00000000000000b0 == 0x8000000000000000) {
            if (cVar28 == '\x16') {
              *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
              *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
              *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1013de7ac;
            }
            uVar7 = *in_stack_000000b8;
            unaff_x23[1] = in_stack_000000b8[1];
            *unaff_x23 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
            *(undefined8 *)((long)unaff_x23 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000b8 + 0x17);
            *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0x80) = cVar28;
            FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
            uStack00000000000000b0 = *(ulong *)(unaff_x29 + -0xa0);
            if (uStack00000000000000b0 == 0x8000000000000000) {
              *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
              *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
              *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
              uStack00000000000000b0 = 0;
              in_stack_000001d0 = *(ulong *)(unaff_x29 + -0x98);
LAB_1013ddcf4:
              in_stack_00000250 = 0x16;
              goto LAB_1013ddcf8;
            }
            in_stack_00000030 = *(ulong *)(unaff_x29 + -0x90);
            in_stack_00000060 = *(ulong *)(unaff_x29 + -0x98);
            goto LAB_1013dd4a4;
          }
          *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
          *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca26b0;
          *(undefined8 *)(unaff_x29 + -0x98) = 2;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          in_stack_000001d0 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        }
        else if (bVar16 == 1) {
          if (in_stack_000000a8 == 0x8000000000000000) {
            if (cVar28 == '\x16') {
              *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
              *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
              *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1013de7ac;
            }
            uVar7 = *in_stack_000000b8;
            unaff_x23[1] = in_stack_000000b8[1];
            *unaff_x23 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
            *(undefined8 *)((long)unaff_x23 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000b8 + 0x17);
            *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0x80) = cVar28;
            FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
            in_stack_000000a8 = *(ulong *)(unaff_x29 + -0xa0);
            if (in_stack_000000a8 == 0x8000000000000000) {
              *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
              *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
              *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
              in_stack_000000a8 = 0;
              in_stack_000001d0 = *(ulong *)(unaff_x29 + -0x98);
              goto LAB_1013ddcf4;
            }
            in_stack_00000028 = *(ulong *)(unaff_x29 + -0x90);
            in_stack_00000058 = *(ulong *)(unaff_x29 + -0x98);
            goto LAB_1013dd4a4;
          }
          *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
          *(undefined **)(unaff_x29 + -0xa0) = &UNK_108caded5;
          *(undefined8 *)(unaff_x29 + -0x98) = 6;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          in_stack_000001d0 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        }
        else {
          if (unaff_x25 == 0x8000000000000000) {
            in_stack_00000250 = 0x16;
            if (cVar28 == '\x16') {
              *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
              *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
              *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1013de7ac;
            }
            uVar7 = *in_stack_000000b8;
            unaff_x23[1] = in_stack_000000b8[1];
            *unaff_x23 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
            *(undefined8 *)((long)unaff_x23 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000b8 + 0x17);
            *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0x80) = cVar28;
            FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
            unaff_x25 = *(ulong *)(unaff_x29 + -0xa0);
            uVar12 = *(ulong *)(unaff_x29 + -0x98);
            if (unaff_x25 == 0x8000000000000000) {
              *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
              *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
              *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
              unaff_x25 = 0;
              bVar6 = true;
              bVar23 = true;
              in_stack_000001c8 = 0x8000000000000000;
              unaff_x27 = in_stack_00000050;
              in_stack_000001d0 = uVar12;
              goto LAB_1013ddd04;
            }
            in_stack_00000020 = *(ulong *)(unaff_x29 + -0x90);
            lVar25 = lVar25 + 1;
            bVar6 = pcVar24 == pcVar26;
            pcVar24 = pcVar24 + 0x40;
            in_stack_00000048 = uVar12;
            if (bVar6) break;
            goto LAB_1013dd4bc;
          }
          *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
          *(undefined **)(unaff_x29 + -0xa0) = &UNK_108c98290;
          *(undefined8 *)(unaff_x29 + -0x98) = 8;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          in_stack_000001d0 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        }
LAB_1013de424:
        in_stack_000001c8 = 0x8000000000000000;
        unaff_x27 = in_stack_00000050;
        goto LAB_1013dda24;
      }
      if (bVar16 < 5) {
        if (bVar16 == 3) {
          if (bVar2 == 2) {
            in_stack_00000250 = 0x16;
            if (cVar28 == '\x16') goto LAB_1013de588;
            uVar7 = *in_stack_000000b8;
            unaff_x23[1] = in_stack_000000b8[1];
            *unaff_x23 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
            *(undefined8 *)((long)unaff_x23 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000b8 + 0x17);
            *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0x80) = cVar28;
            if (cVar28 == '\0') {
              bVar2 = *(byte *)(unaff_x29 + -0x7f);
              FUN_100e077ec(unaff_x29 + -0x80);
              goto LAB_1013dd4a4;
            }
            *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
            *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
            *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
            in_stack_000001d0 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0xb8,&UNK_10b20a560);
          }
          else {
            *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
            *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
            *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
            *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cadedb;
            *(undefined8 *)(unaff_x29 + -0x98) = 7;
            *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
            *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
            in_stack_000001d0 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
          }
        }
        else if (bVar3 == 2) {
          in_stack_00000250 = 0x16;
          if (cVar28 == '\x16') goto LAB_1013de588;
          uVar7 = *in_stack_000000b8;
          unaff_x23[1] = in_stack_000000b8[1];
          *unaff_x23 = uVar7;
          uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)((long)in_stack_000000b8 + 0x17);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
          *(char *)(unaff_x29 + -0x80) = cVar28;
          if (cVar28 == '\0') {
            bVar3 = *(byte *)(unaff_x29 + -0x7f);
            FUN_100e077ec(unaff_x29 + -0x80);
            goto LAB_1013dd4a4;
          }
          *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
          in_stack_000001d0 = FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0xb8,&UNK_10b20a560);
        }
        else {
          *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
          *(undefined **)(unaff_x29 + -0xa0) = &UNK_108c98298;
          *(undefined8 *)(unaff_x29 + -0x98) = 8;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
          in_stack_000001d0 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        }
        goto LAB_1013de424;
      }
      if (bVar16 != 5) {
        if (cVar28 != '\x16') {
          uVar7 = *in_stack_000000b8;
          unaff_x23[1] = in_stack_000000b8[1];
          *unaff_x23 = uVar7;
          uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
          *(undefined8 *)((long)unaff_x23 + 0x17) = *(undefined8 *)((long)in_stack_000000b8 + 0x17);
          *(undefined8 *)((long)unaff_x23 + 0xf) = uVar7;
          *(char *)(unaff_x29 + -0x80) = cVar28;
          FUN_100e077ec(unaff_x29 + -0x80);
          goto LAB_1013dd4a4;
        }
LAB_1013de588:
        *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013de7ac:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1013de7b0);
        (*pcVar5)();
      }
      if (in_stack_000000a0 != 0x8000000000000001) {
        *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cadee2;
        *(undefined8 *)(unaff_x29 + -0x98) = 7;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        in_stack_000001d0 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        in_stack_000001c8 = 0x8000000000000000;
        bVar23 = true;
        bVar6 = true;
        unaff_x27 = in_stack_00000050;
        goto joined_r0x0001013ddd1c;
      }
      in_stack_00000250 = 0x16;
      if (cVar28 == '\x16') {
        *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto LAB_1013de7ac;
      }
      uVar7 = *in_stack_000000b8;
      in_stack_00000040[1] = in_stack_000000b8[1];
      *in_stack_00000040 = uVar7;
      uVar7 = *(undefined8 *)((long)in_stack_000000b8 + 0xf);
      *(undefined8 *)((long)in_stack_00000040 + 0x17) =
           *(undefined8 *)((long)in_stack_000000b8 + 0x17);
      *(undefined8 *)((long)in_stack_00000040 + 0xf) = uVar7;
      *(char *)(unaff_x29 + -0xa0) = cVar28;
      if (cVar28 == '\x10') {
LAB_1013dd478:
        *(undefined8 *)(unaff_x29 + -0xb8) = 0x8000000000000000;
        FUN_100e077ec(unaff_x29 + -0xa0);
        in_stack_00000068 = *(ulong *)(unaff_x29 + -0xb0);
        unaff_x20 = *(ulong *)(unaff_x29 + -0xa8);
        uStack0000000000000078 = 0x8000000000000000;
        in_stack_000000a0 = uStack0000000000000078;
      }
      else {
        if (cVar28 == '\x11') {
          puVar21 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar7 = *puVar21;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar21[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
          uVar7 = puVar21[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar21[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar7;
          FUN_101446938(unaff_x29 + -0xb8,unaff_x29 + -0x80);
          _free(puVar21);
        }
        else {
          if (cVar28 == '\x12') goto LAB_1013dd478;
          FUN_101446938(unaff_x29 + -0xb8,unaff_x29 + -0xa0);
        }
        uStack0000000000000078 = *(ulong *)(unaff_x29 + -0xb8);
        in_stack_00000068 = *(ulong *)(unaff_x29 + -0xb0);
        if (uStack0000000000000078 == 0x8000000000000001) {
          in_stack_000001c8 = 0x8000000000000000;
          bVar23 = true;
          bVar6 = true;
          unaff_x27 = in_stack_00000050;
          in_stack_000001d0 = in_stack_00000068;
          goto LAB_1013ddd74;
        }
        unaff_x20 = *(ulong *)(unaff_x29 + -0xa8);
        in_stack_000000a0 = uStack0000000000000078;
      }
LAB_1013dd4a4:
      lVar25 = lVar25 + 1;
      bVar6 = pcVar24 != pcVar26;
      pcVar24 = pcVar24 + 0x40;
    } while (bVar6);
    in_stack_00000250 = 0x16;
    *(ulong *)(unaff_x29 + -200) = in_stack_00000068;
    *(ulong *)(unaff_x29 + -0xc0) = unaff_x20;
    *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000078;
    unaff_x26 = in_stack_00000060;
    unaff_x27 = in_stack_00000050;
    if (uStack00000000000000b0 == 0x8000000000000000) goto LAB_1013dd9e0;
    bVar6 = in_stack_000000a8 == 0x8000000000000000;
    if (bVar6) {
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108caded5;
      *(undefined8 *)(unaff_x29 + -0x98) = 6;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      in_stack_000001d0 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
      in_stack_000001c8 = 0x8000000000000000;
LAB_1013ddb2c:
      if (uStack00000000000000b0 == 0) {
        uStack00000000000000b0 = 0;
        bVar23 = false;
      }
      else {
        _free(in_stack_00000060);
        bVar23 = false;
      }
      goto LAB_1013ddd04;
    }
    if (unaff_x25 == 0x8000000000000000) {
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108c98290;
      *(undefined8 *)(unaff_x29 + -0x98) = 8;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      in_stack_000001d0 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
      in_stack_000001c8 = 0x8000000000000000;
      if (in_stack_000000a8 != 0) {
        _free(in_stack_00000058);
      }
      goto LAB_1013ddb2c;
    }
    in_stack_00000210 = 0x8000000000000000;
    if (in_stack_000000a0 != 0x8000000000000001) {
      in_stack_00000210 = in_stack_000000a0;
    }
    in_stack_00000228 = bVar2 & 1;
    in_stack_000001c8 = uStack00000000000000b0;
    in_stack_000001d0 = in_stack_00000060;
    in_stack_00000229 = bVar3 & 1;
    in_stack_000001d8 = in_stack_00000030;
    in_stack_000001e0 = in_stack_000000a8;
    in_stack_000001e8 = in_stack_00000058;
    FUN_100d34830(&stack0x00000270);
    if (pcVar26 != pcVar22) {
      *(long *)(unaff_x29 + -0x80) = lVar11;
      in_stack_000001d0 =
           FUN_1087e422c(((ulong)((long)pcVar26 - (long)pcVar22) >> 6) + lVar11,unaff_x29 + -0x80,
                         &UNK_10b23a190);
      in_stack_000001c8 = 0x8000000000000000;
      FUN_100e4b8ec(&stack0x000002a0);
    }
    in_stack_00000070 = 0x15;
    in_stack_000001f0 = in_stack_00000028;
    in_stack_000001f8 = unaff_x25;
    in_stack_00000200 = in_stack_00000048;
    in_stack_00000208 = in_stack_00000020;
    in_stack_00000218 = in_stack_00000068;
    in_stack_00000220 = unaff_x20;
  } while( true );
}

