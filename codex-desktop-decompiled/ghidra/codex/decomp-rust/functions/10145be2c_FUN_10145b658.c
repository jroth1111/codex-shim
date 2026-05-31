
/* WARNING: Type propagation algorithm not settling */

void FUN_10145b658(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  byte bVar11;
  byte bVar12;
  undefined8 *unaff_x19;
  byte unaff_w20;
  byte *unaff_x21;
  byte *pbVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong unaff_x28;
  long unaff_x29;
  ulong uVar20;
  long in_stack_00000000;
  long *in_stack_00000010;
  undefined8 *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 *in_stack_00000070;
  byte *in_stack_00000078;
  ulong uStack0000000000000080;
  ulong uStack0000000000000088;
  long in_stack_00000090;
  ulong in_stack_00000098;
  ulong uStack00000000000000a0;
  undefined8 *in_stack_000000a8;
  byte *in_stack_000000b8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  ulong in_stack_00000140;
  ulong in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
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
  undefined7 in_stack_00000211;
  long in_stack_00000220;
  byte *in_stack_00000228;
  long in_stack_00000230;
  ulong in_stack_00000248;
  ulong in_stack_00000250;
  ulong in_stack_00000258;
  ulong in_stack_00000260;
  ulong in_stack_00000268;
  ulong in_stack_00000270;
  ulong in_stack_00000278;
  ulong in_stack_00000280;
  ulong in_stack_00000288;
  ulong in_stack_00000290;
  ulong in_stack_00000298;
  ulong in_stack_000002a0;
  ulong in_stack_000002a8;
  ulong in_stack_000002b0;
  ulong in_stack_000002b8;
  ulong in_stack_000002c0;
  byte in_stack_000002c8;
  byte in_stack_000002c9;
  char cVar21;
  undefined8 in_stack_00000360;
  ulong uVar22;
  ulong uVar23;
  ulong in_stack_00000448;
  ulong uVar24;
  ulong in_stack_00000450;
  ulong in_stack_00000458;
  ulong in_stack_00000460;
  ulong in_stack_00000468;
  ulong in_stack_00000470;
  ulong in_stack_00000478;
  ulong in_stack_00000480;
  ulong in_stack_00000488;
  
  uStack0000000000000088 = unaff_x23;
  uStack0000000000000080 = unaff_x25;
code_r0x00010145b658:
  uVar8 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
  uStack00000000000000a0 = 0;
  bVar14 = true;
  bVar6 = true;
LAB_10145b680:
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
joined_r0x00010145b6b8:
  uVar22 = in_stack_00000448;
  if (in_stack_00000098 == 0x8000000000000005) goto LAB_10145b7f8;
LAB_10145b7f0:
  FUN_100de6690(&stack0x00000448);
  uVar22 = in_stack_00000448;
LAB_10145b7f8:
  if (((uStack0000000000000080 & 0x7fffffffffffffff) != 0) && (bVar6)) {
    _free(in_stack_00000048);
  }
  bVar6 = false;
  if ((uStack00000000000000a0 & 0x7fffffffffffffff) != 0) {
    bVar6 = bVar14;
  }
  if (bVar6) {
    _free(in_stack_00000050);
  }
  uVar1 = 0;
  if (uStack0000000000000088 != 0x8000000000000001) {
    uVar1 = unaff_w24;
  }
  if ((uVar1 == 1) && ((uStack0000000000000088 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x00000380);
  pbVar13 = unaff_x21;
  uStack00000000000000a0 = 0x8000000000000000;
  uVar2 = in_stack_00000450;
  uVar20 = in_stack_00000458;
  if ((char)in_stack_00000360 != '\x16') {
    FUN_100e077ec(&stack0x00000360);
  }
LAB_10145b868:
  do {
    in_stack_00000458 = uVar20;
    in_stack_00000450 = uVar2;
    uVar23 = uVar22;
    if ((unaff_w20 & 0x1e) != 0x14) {
      FUN_100e077ec(&stack0x00000218);
    }
    lVar15 = in_stack_000000e8;
    unaff_x21 = pbVar13;
    if (uStack00000000000000a0 == 0x8000000000000000) {
LAB_10145c250:
      uVar22 = in_stack_000000e0;
      FUN_100e40160(in_stack_000000e0,in_stack_000000e8);
      if (in_stack_000000d8 != 0) {
        _free(uVar22);
      }
LAB_10145c270:
      lVar15 = ((ulong)((long)in_stack_00000078 - (long)unaff_x21) >> 5) + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x00010145c1e0:
      if (in_stack_00000000 != 0) {
        _free(in_stack_00000038);
      }
      *in_stack_00000010 = -0x7fffffffffffffff;
      in_stack_00000010[1] = uVar8;
      return;
    }
    bVar12 = in_stack_000002c8;
    if (in_stack_000002c8 == 2) {
      if (in_stack_000002c9 == 2) {
        bVar12 = 0;
      }
      else {
        bVar12 = in_stack_000002c9 ^ 1;
      }
    }
    in_stack_000000f0 = in_stack_00000280;
    in_stack_000000f8 = in_stack_00000288;
    in_stack_00000100 = in_stack_00000290;
    in_stack_00000108 = in_stack_00000298;
    in_stack_00000110 = in_stack_000002a0;
    in_stack_00000118 = in_stack_000002a8;
    in_stack_00000120 = in_stack_000002b0;
    in_stack_00000128 = in_stack_000002b8;
    in_stack_00000130 = in_stack_000002c0;
    in_stack_00000140 = in_stack_00000268;
    in_stack_00000148 = in_stack_00000270;
    in_stack_00000150 = in_stack_00000278;
    in_stack_00000160 = in_stack_00000250;
    in_stack_00000168 = in_stack_00000258;
    in_stack_00000170 = in_stack_00000260;
    if (uStack00000000000000a0 == 0x8000000000000001) goto LAB_10145c250;
    in_stack_00000180 = uStack00000000000000a0;
    in_stack_00000188 = uVar8;
    in_stack_00000190 = in_stack_00000248;
    in_stack_00000198 = in_stack_00000250;
    in_stack_000001a0 = in_stack_00000258;
    in_stack_000001a8 = in_stack_00000260;
    in_stack_000001b0 = in_stack_00000268;
    in_stack_000001b8 = in_stack_00000270;
    in_stack_000001c0 = in_stack_00000278;
    in_stack_000001c8 = in_stack_00000280;
    in_stack_000001d0 = in_stack_00000288;
    in_stack_000001d8 = in_stack_00000290;
    in_stack_000001e0 = in_stack_00000298;
    in_stack_000001e8 = in_stack_000002a0;
    if (in_stack_000000e8 == in_stack_000000d8) {
      func_0x0001088bb0ec(&stack0x000000d8);
    }
    uVar22 = in_stack_000000e0;
    lVar16 = in_stack_000000d8;
    puVar10 = (ulong *)(in_stack_000000e0 + lVar15 * 0x98);
    puVar10[0xd] = in_stack_000001e8;
    puVar10[0xc] = in_stack_000001e0;
    puVar10[0xf] = in_stack_000002b0;
    puVar10[0xe] = in_stack_000002a8;
    puVar10[0x11] = in_stack_000002c0;
    puVar10[0x10] = in_stack_000002b8;
    puVar10[0x12] = CONCAT71(in_stack_00000211,bVar12) & 0xffffffffffffff01;
    puVar10[5] = in_stack_000001a8;
    puVar10[4] = in_stack_000001a0;
    puVar10[7] = in_stack_000001b8;
    puVar10[6] = in_stack_000001b0;
    puVar10[9] = in_stack_000001c8;
    puVar10[8] = in_stack_000001c0;
    puVar10[0xb] = in_stack_000001d8;
    puVar10[10] = in_stack_000001d0;
    puVar10[1] = in_stack_00000188;
    *puVar10 = in_stack_00000180;
    puVar10[3] = in_stack_00000198;
    puVar10[2] = in_stack_00000190;
    lVar15 = lVar15 + 1;
    unaff_x21 = in_stack_00000078;
    in_stack_000000e8 = lVar15;
    if (pbVar13 == in_stack_00000078) {
LAB_10145c194:
      uVar8 = in_stack_000000e0;
      if (in_stack_000000d8 == -0x8000000000000000) goto LAB_10145c270;
      uVar8 = FUN_100fbc738(&stack0x000000b0);
      if (uVar8 == 0) {
        in_stack_00000010[1] = uVar22;
        *in_stack_00000010 = lVar16;
        in_stack_00000010[2] = lVar15;
        return;
      }
      FUN_100e40160(uVar22,lVar15);
      in_stack_00000038 = uVar22;
      in_stack_00000000 = lVar16;
      goto joined_r0x00010145c1e0;
    }
    unaff_x21 = pbVar13 + 0x20;
    unaff_w20 = *pbVar13;
    in_stack_000000b8 = unaff_x21;
    if (unaff_w20 == 0x16) goto LAB_10145c194;
    uVar7 = *(undefined8 *)(pbVar13 + 1);
    in_stack_00000070[1] = *(undefined8 *)(pbVar13 + 9);
    *in_stack_00000070 = uVar7;
    uVar7 = *(undefined8 *)(pbVar13 + 0x10);
    *(undefined8 *)((long)in_stack_00000070 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
    *(undefined8 *)((long)in_stack_00000070 + 0xf) = uVar7;
    in_stack_00000090 = in_stack_00000090 + 1;
    pbVar13 = unaff_x21;
    in_stack_000000d0 = in_stack_00000090;
    if (unaff_w20 != 0x14) {
      if (unaff_w20 != 0x15) {
        uVar8 = FUN_108855b04(&stack0x00000218,unaff_x29 + -0x61,&UNK_10b20b140);
        goto LAB_10145c250;
      }
      pbVar19 = in_stack_00000228 + in_stack_00000230 * 0x40;
      uVar22 = 0x8000000000000005;
      if (in_stack_00000230 == 0) {
        uStack0000000000000088 = 0x8000000000000001;
        in_stack_00000448 = 0x8000000000000005;
        unaff_w24 = 1;
        unaff_x28 = 0;
        in_stack_00000098 = 0x8000000000000005;
        uStack0000000000000080 = 0;
      }
      else {
        lVar15 = 0;
        bVar12 = 3;
        bVar3 = 3;
        in_stack_00000098 = 0x8000000000000005;
        uStack00000000000000a0 = 0x8000000000000000;
        uStack0000000000000080 = 0x8000000000000000;
        uStack0000000000000088 = 0x8000000000000001;
        in_stack_00000448 = 0x8000000000000005;
        pbVar4 = in_stack_00000228;
        do {
          pbVar17 = pbVar4 + 0x40;
          bVar11 = *pbVar4;
          lVar16 = lVar15;
          pbVar18 = pbVar17;
          if (bVar11 == 0x16) break;
          *(byte *)(unaff_x29 + -0xd0) = bVar11;
          uVar7 = *(undefined8 *)(pbVar4 + 0x10);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
          uVar7 = *(undefined8 *)(pbVar4 + 1);
          unaff_x19[1] = *(undefined8 *)(pbVar4 + 9);
          *unaff_x19 = uVar7;
          in_stack_00000360 = *(undefined8 *)(pbVar4 + 0x20);
          uVar8 = *(ulong *)(unaff_x29 + -200);
          uVar7 = *(undefined8 *)(unaff_x29 + -0xc0);
          if (0xc < bVar11) {
            if (bVar11 == 0xd) {
              FUN_100b42834(unaff_x29 + -0x88,uVar8,uVar7);
              goto LAB_10145b1bc;
            }
            if (bVar11 != 0xe) {
              if (bVar11 != 0xf) goto LAB_10145b4dc;
              FUN_100b424b0(unaff_x29 + -0x88,uVar8,uVar7);
              goto LAB_10145b1bc;
            }
            FUN_100b424b0(unaff_x29 + -0x88,uVar7,*(undefined8 *)(unaff_x29 + -0xb8));
            if (uVar8 != 0) goto LAB_10145b17c;
LAB_10145b1c4:
            if ((*(byte *)(unaff_x29 + -0x88) & 1) == 0) goto LAB_10145b1cc;
LAB_10145b504:
            uVar8 = *(ulong *)(unaff_x29 + -0x80);
joined_r0x00010145bc30:
            bVar14 = true;
            unaff_w24 = 1;
            bVar6 = true;
            in_stack_00000450 = in_stack_00000058;
            goto joined_r0x00010145b6b8;
          }
          if (bVar11 == 1) {
            bVar11 = *(byte *)(unaff_x29 + -0xcf);
            if (5 < bVar11) {
              bVar11 = 6;
            }
            *(byte *)(unaff_x29 + -0x87) = bVar11;
            *(undefined1 *)(unaff_x29 + -0x88) = 0;
LAB_10145b1bc:
            FUN_100e077ec(unaff_x29 + -0xd0);
            goto LAB_10145b1c4;
          }
          if (bVar11 == 4) {
            if (5 < uVar8) {
              uVar8 = 6;
            }
            *(char *)(unaff_x29 + -0x87) = (char)uVar8;
            *(undefined1 *)(unaff_x29 + -0x88) = 0;
            goto LAB_10145b1bc;
          }
          if (bVar11 != 0xc) {
LAB_10145b4dc:
            uVar7 = FUN_108855b04(unaff_x29 + -0xd0,unaff_x29 + -0x61,&UNK_10b211600);
            *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
            *(undefined1 *)(unaff_x29 + -0x88) = 1;
            goto LAB_10145b504;
          }
          FUN_100b42834(unaff_x29 + -0x88,uVar7);
          if (uVar8 == 0) goto LAB_10145b1c4;
LAB_10145b17c:
          _free(uVar7);
          if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) goto LAB_10145b504;
LAB_10145b1cc:
          bVar11 = *(byte *)(unaff_x29 + -0x87);
          cVar21 = (char)in_stack_00000360;
          if (bVar11 < 3) {
            if (bVar11 == 0) {
              if (uStack0000000000000088 == 0x8000000000000001) {
                in_stack_00000360 = 0x16;
                if (cVar21 == '\x16') {
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10145c40c;
                }
                uVar7 = *in_stack_000000a8;
                unaff_x19[1] = in_stack_000000a8[1];
                *unaff_x19 = uVar7;
                uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
                *(undefined8 *)((long)unaff_x19 + 0x17) =
                     *(undefined8 *)((long)in_stack_000000a8 + 0x17);
                *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
                *(char *)(unaff_x29 + -0xd0) = cVar21;
                FUN_1004b60cc(unaff_x29 + -0x88,unaff_x29 + -0xd0);
                uStack0000000000000088 = *(ulong *)(unaff_x29 + -0x88);
                uVar8 = *(ulong *)(unaff_x29 + -0x80);
                if (uStack0000000000000088 != 0x8000000000000001) {
                  in_stack_00000030 = *(ulong *)(unaff_x29 + -0x78);
                  in_stack_00000040 = uVar8;
                  goto LAB_10145b0ac;
                }
                uStack0000000000000088 = 0x8000000000000001;
              }
              else {
                *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca776a;
                *(undefined8 *)(unaff_x29 + -0x80) = 9;
                *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
                *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
                uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
              }
            }
            else if (bVar11 == 1) {
              if (uStack00000000000000a0 == 0x8000000000000000) {
                in_stack_00000360 = 0x16;
                if (cVar21 == '\x16') {
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10145c40c;
                }
                uVar7 = *in_stack_000000a8;
                unaff_x19[1] = in_stack_000000a8[1];
                *unaff_x19 = uVar7;
                uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
                *(undefined8 *)((long)unaff_x19 + 0x17) =
                     *(undefined8 *)((long)in_stack_000000a8 + 0x17);
                *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
                *(char *)(unaff_x29 + -0xd0) = cVar21;
                FUN_1004b62d4(unaff_x29 + -0x88,unaff_x29 + -0xd0);
                uStack00000000000000a0 = *(ulong *)(unaff_x29 + -0x88);
                uVar8 = *(ulong *)(unaff_x29 + -0x80);
                if (uStack00000000000000a0 != 0x8000000000000000) {
                  in_stack_00000028 = *(ulong *)(unaff_x29 + -0x78);
                  in_stack_00000050 = uVar8;
                  goto LAB_10145b0ac;
                }
                uStack00000000000000a0 = 0;
              }
              else {
                *(undefined **)(unaff_x29 + -0x88) = &UNK_108c61018;
                *(undefined8 *)(unaff_x29 + -0x80) = 4;
                *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
                *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
                uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
              }
            }
            else if (uStack0000000000000080 == 0x8000000000000000) {
              in_stack_00000360 = 0x16;
              if (cVar21 == '\x16') {
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_10145c40c;
              }
              uVar7 = *in_stack_000000a8;
              unaff_x19[1] = in_stack_000000a8[1];
              *unaff_x19 = uVar7;
              uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
              *(undefined8 *)((long)unaff_x19 + 0x17) =
                   *(undefined8 *)((long)in_stack_000000a8 + 0x17);
              *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
              *(char *)(unaff_x29 + -0xd0) = cVar21;
              FUN_1004b62d4(unaff_x29 + -0x88,unaff_x29 + -0xd0);
              uStack0000000000000080 = *(ulong *)(unaff_x29 + -0x88);
              uVar8 = *(ulong *)(unaff_x29 + -0x80);
              if (uStack0000000000000080 != 0x8000000000000000) {
                in_stack_00000020 = *(ulong *)(unaff_x29 + -0x78);
                in_stack_00000048 = uVar8;
                goto LAB_10145b0ac;
              }
              uStack0000000000000080 = 0;
            }
            else {
              *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca155d;
              *(undefined8 *)(unaff_x29 + -0x80) = 0xb;
              *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
              *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
              uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
            }
            goto joined_r0x00010145bc30;
          }
          if (bVar11 < 5) {
            if (bVar11 != 3) {
              if (bVar3 == 3) {
                if (cVar21 == '\x16') goto LAB_10145c200;
                uVar7 = *in_stack_000000a8;
                unaff_x19[1] = in_stack_000000a8[1];
                *unaff_x19 = uVar7;
                uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
                *(undefined8 *)((long)unaff_x19 + 0x17) =
                     *(undefined8 *)((long)in_stack_000000a8 + 0x17);
                *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
                *(char *)(unaff_x29 + -0xd0) = cVar21;
                FUN_101226150(unaff_x29 + -0x88,unaff_x29 + -0xd0);
                if (*(char *)(unaff_x29 + -0x88) != '\x01') {
                  bVar3 = *(byte *)(unaff_x29 + -0x87);
                  goto LAB_10145b0ac;
                }
LAB_10145b7a0:
                in_stack_00000360 = 0x16;
                uVar8 = *(ulong *)(unaff_x29 + -0x80);
              }
              else {
                *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca777e;
                *(undefined8 *)(unaff_x29 + -0x80) = 0xc;
                *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
                *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
                uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
              }
              goto joined_r0x00010145bc30;
            }
            if (in_stack_00000098 != 0x8000000000000005) {
              *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca7773;
              *(undefined8 *)(unaff_x29 + -0x80) = 0xb;
              *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
              *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
              uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
              unaff_w24 = 1;
              bVar14 = true;
              bVar6 = true;
              in_stack_00000450 = in_stack_00000058;
              goto LAB_10145b7f0;
            }
            in_stack_00000360 = 0x16;
            if (cVar21 == '\x16') {
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10145c40c;
            }
            uVar7 = *in_stack_000000a8;
            in_stack_00000018[1] = in_stack_000000a8[1];
            *in_stack_00000018 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
            *(undefined8 *)((long)in_stack_00000018 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000a8 + 0x17);
            *(undefined8 *)((long)in_stack_00000018 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0x88) = cVar21;
            FUN_1004aa788(unaff_x29 + -0xd0,unaff_x29 + -0x88);
            in_stack_00000448 = *(ulong *)(unaff_x29 + -0xd0);
            if (in_stack_00000448 == 0x8000000000000005) {
              uVar8 = *(ulong *)(unaff_x29 + -200);
              unaff_w24 = 1;
              bVar14 = true;
              bVar6 = true;
              goto LAB_10145b7f8;
            }
            in_stack_00000058 = *(ulong *)(unaff_x29 + -200);
            in_stack_00000460 = *(ulong *)(unaff_x29 + -0xb8);
            in_stack_00000458 = *(ulong *)(unaff_x29 + -0xc0);
            in_stack_00000470 = *(ulong *)(unaff_x29 + -0xa8);
            in_stack_00000468 = *(ulong *)(unaff_x29 + -0xb0);
            in_stack_00000480 = *(ulong *)(unaff_x29 + -0x98);
            in_stack_00000478 = *(ulong *)(unaff_x29 + -0xa0);
            in_stack_00000488 = *(ulong *)(unaff_x29 + -0x90);
            in_stack_00000098 = in_stack_00000448;
          }
          else if (bVar11 == 5) {
            if (bVar12 != 3) {
              *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca778a;
              *(undefined8 *)(unaff_x29 + -0x80) = 0xf;
              *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
              *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
              uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
              goto joined_r0x00010145bc30;
            }
            if (cVar21 == '\x16') goto LAB_10145c200;
            uVar7 = *in_stack_000000a8;
            unaff_x19[1] = in_stack_000000a8[1];
            *unaff_x19 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
            *(undefined8 *)((long)unaff_x19 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000a8 + 0x17);
            *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0xd0) = cVar21;
            FUN_101226150(unaff_x29 + -0x88,unaff_x29 + -0xd0);
            if (*(char *)(unaff_x29 + -0x88) == '\x01') goto LAB_10145b7a0;
            bVar12 = *(byte *)(unaff_x29 + -0x87);
          }
          else {
            if (cVar21 == '\x16') {
LAB_10145c200:
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10145c40c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10145c410);
              (*pcVar5)();
            }
            uVar7 = *in_stack_000000a8;
            unaff_x19[1] = in_stack_000000a8[1];
            *unaff_x19 = uVar7;
            uVar7 = *(undefined8 *)((long)in_stack_000000a8 + 0xf);
            *(undefined8 *)((long)unaff_x19 + 0x17) =
                 *(undefined8 *)((long)in_stack_000000a8 + 0x17);
            *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
            *(char *)(unaff_x29 + -0xd0) = cVar21;
            FUN_100e077ec(unaff_x29 + -0xd0);
          }
LAB_10145b0ac:
          lVar15 = lVar15 + 1;
          lVar16 = (in_stack_00000230 * 0x40 - 0x40U >> 6) + 1;
          pbVar18 = pbVar19;
          pbVar4 = pbVar17;
        } while (pbVar17 != pbVar19);
        in_stack_00000360 = 0x16;
        unaff_x28 = 0x8000000000000000;
        if (uStack0000000000000088 != 0x8000000000000001) {
          unaff_x28 = uStack0000000000000088;
        }
        unaff_w24 = (uint)(uStack0000000000000088 == 0x8000000000000001);
        in_stack_00000450 = in_stack_00000058;
        if (uStack00000000000000a0 != 0x8000000000000000) {
          bVar6 = uStack0000000000000080 == 0x8000000000000000;
          if (bVar6) {
            *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca155d;
            *(undefined8 *)(unaff_x29 + -0x80) = 0xb;
            *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
            *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
            uVar8 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
          }
          else {
            if (in_stack_00000098 != 0x8000000000000005) {
              in_stack_000002c8 = 2;
              if (bVar3 != 3) {
                in_stack_000002c8 = bVar3;
              }
              in_stack_000002c9 = 2;
              if (bVar12 != 3) {
                in_stack_000002c9 = bVar12;
              }
              FUN_100d34830(&stack0x00000380);
              uVar8 = in_stack_00000050;
              in_stack_00000248 = in_stack_00000028;
              in_stack_00000250 = uStack0000000000000080;
              in_stack_00000258 = in_stack_00000048;
              in_stack_00000260 = in_stack_00000020;
              in_stack_00000268 = unaff_x28;
              in_stack_00000270 = in_stack_00000040;
              in_stack_00000278 = in_stack_00000030;
              in_stack_00000280 = in_stack_00000098;
              in_stack_00000288 = in_stack_00000058;
              in_stack_00000290 = in_stack_00000458;
              in_stack_00000298 = in_stack_00000460;
              in_stack_000002a0 = in_stack_00000468;
              in_stack_000002a8 = in_stack_00000470;
              in_stack_000002b0 = in_stack_00000478;
              in_stack_000002b8 = in_stack_00000480;
              in_stack_000002c0 = in_stack_00000488;
              uVar22 = in_stack_00000448;
              uVar2 = in_stack_00000058;
              uVar20 = in_stack_00000458;
              if (pbVar19 != pbVar18) {
                *(long *)(unaff_x29 + -0xd0) = lVar16;
                uVar8 = FUN_1087e422c(((ulong)((long)pbVar19 - (long)pbVar18) >> 6) + lVar16,
                                      unaff_x29 + -0xd0,&UNK_10b23a190);
                if ((unaff_x28 != 0x8000000000000000) && (unaff_x28 != 0)) {
                  _free(in_stack_00000040);
                }
                if (uStack00000000000000a0 != 0) {
                  _free(in_stack_00000050);
                }
                if (uStack0000000000000080 != 0) {
                  _free(in_stack_00000048);
                }
                FUN_100de6690(&stack0x000003f8);
                uStack00000000000000a0 = 0x8000000000000000;
              }
              goto LAB_10145b868;
            }
            *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca7773;
            *(undefined8 *)(unaff_x29 + -0x80) = 0xb;
            *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
            *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
            uVar8 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
            if (uStack0000000000000080 != 0) {
              _free(in_stack_00000048);
            }
          }
          if (uStack00000000000000a0 == 0) {
            bVar14 = false;
            uStack00000000000000a0 = 0;
          }
          else {
            _free(in_stack_00000050);
            bVar14 = false;
          }
          goto LAB_10145b680;
        }
      }
      in_stack_00000360 = 0x16;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108c61018;
      *(undefined8 *)(unaff_x29 + -0x80) = 4;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x88;
      *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
      param_2 = unaff_x29 + -0xd0;
      goto code_r0x00010145b658;
    }
    pbVar19 = in_stack_00000228;
    uVar9 = in_stack_00000450;
    if (in_stack_00000230 == 0) {
LAB_10145b044:
      uVar8 = FUN_1087e422c(0,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145b068:
      lVar15 = ((ulong)(in_stack_00000228 + (in_stack_00000230 * 0x20 - (long)pbVar19)) >> 5) + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100e077ec(pbVar19);
        pbVar19 = pbVar19 + 0x20;
      }
      uStack00000000000000a0 = 0x8000000000000000;
      uVar22 = uVar23;
      uVar2 = uVar9;
      uVar20 = in_stack_00000458;
      if (in_stack_00000220 != 0) {
        _free(in_stack_00000228);
      }
    }
    else {
      pbVar19 = in_stack_00000228 + 0x20;
      bVar12 = *in_stack_00000228;
      if (bVar12 == 0x16) goto LAB_10145b044;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 1);
      unaff_x19[1] = *(undefined8 *)(in_stack_00000228 + 9);
      *unaff_x19 = uVar7;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x10);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_00000228 + 0x18);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
      *(byte *)(unaff_x29 + -0xd0) = bVar12;
      FUN_1004b60cc(&stack0x00000448,unaff_x29 + -0xd0);
      uVar8 = in_stack_00000450;
      if (uVar23 == 0x8000000000000001) goto LAB_10145b068;
      uVar24 = uVar23;
      if (in_stack_00000230 == 1) {
LAB_10145b5ac:
        uVar8 = FUN_1087e422c(1,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145b5d0:
        uVar22 = uVar23 & 0x7fffffffffffffff;
        uVar23 = uVar24;
        if (uVar22 != 0) {
          _free(in_stack_00000450);
        }
        goto LAB_10145b068;
      }
      pbVar19 = in_stack_00000228 + 0x40;
      bVar12 = in_stack_00000228[0x20];
      if (bVar12 == 0x16) goto LAB_10145b5ac;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x21);
      unaff_x19[1] = *(undefined8 *)(in_stack_00000228 + 0x29);
      *unaff_x19 = uVar7;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x30);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_00000228 + 0x38);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
      *(byte *)(unaff_x29 + -0xd0) = bVar12;
      FUN_1004b62d4(&stack0x00000448,unaff_x29 + -0xd0);
      if (uVar23 == 0x8000000000000000) goto LAB_10145b5d0;
      if (in_stack_00000230 == 2) {
LAB_10145bc58:
        uVar8 = FUN_1087e422c(2,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145bc7c:
        if (uVar23 != 0) {
          _free(in_stack_00000450);
        }
        goto LAB_10145b5d0;
      }
      pbVar19 = in_stack_00000228 + 0x60;
      bVar12 = in_stack_00000228[0x40];
      if (bVar12 == 0x16) goto LAB_10145bc58;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x41);
      unaff_x19[1] = *(undefined8 *)(in_stack_00000228 + 0x49);
      *unaff_x19 = uVar7;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x50);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_00000228 + 0x58);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
      *(byte *)(unaff_x29 + -0xd0) = bVar12;
      FUN_1004b62d4(&stack0x00000448,unaff_x29 + -0xd0);
      if (uVar23 == 0x8000000000000000) goto LAB_10145bc7c;
      if (in_stack_00000230 == 3) {
LAB_10145bcfc:
        uVar8 = FUN_1087e422c(3,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145bd20:
        if (uVar23 != 0) {
          _free(in_stack_00000450);
        }
        goto LAB_10145bc7c;
      }
      pbVar19 = in_stack_00000228 + 0x80;
      bVar12 = in_stack_00000228[0x60];
      if (bVar12 == 0x16) goto LAB_10145bcfc;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x61);
      in_stack_00000018[1] = *(undefined8 *)(in_stack_00000228 + 0x69);
      *in_stack_00000018 = uVar7;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x70);
      *(undefined8 *)((long)in_stack_00000018 + 0x17) = *(undefined8 *)(in_stack_00000228 + 0x78);
      *(undefined8 *)((long)in_stack_00000018 + 0xf) = uVar7;
      *(byte *)(unaff_x29 + -0x88) = bVar12;
      FUN_1004aa788(unaff_x29 + -0xd0,unaff_x29 + -0x88);
      uVar22 = *(ulong *)(unaff_x29 + -0xd0);
      uVar2 = *(ulong *)(unaff_x29 + -200);
      in_stack_00000058 = in_stack_00000458;
      uVar8 = uVar2;
      if (uVar22 == 0x8000000000000005) goto LAB_10145bd20;
      in_stack_00000460 = *(ulong *)(unaff_x29 + -0xb8);
      uVar20 = *(ulong *)(unaff_x29 + -0xc0);
      in_stack_00000470 = *(ulong *)(unaff_x29 + -0xa8);
      in_stack_00000468 = *(ulong *)(unaff_x29 + -0xb0);
      in_stack_00000480 = *(ulong *)(unaff_x29 + -0x98);
      in_stack_00000478 = *(ulong *)(unaff_x29 + -0xa0);
      in_stack_00000488 = *(ulong *)(unaff_x29 + -0x90);
      if (in_stack_00000230 == 4) {
LAB_10145bdbc:
        uVar7 = 4;
LAB_10145bdc0:
        uVar8 = FUN_1087e422c(uVar7,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145bdd4:
        FUN_100de6690(&stack0x00000448);
        uVar24 = uVar22;
        uVar9 = uVar2;
        in_stack_00000458 = uVar20;
        goto LAB_10145bd20;
      }
      pbVar19 = in_stack_00000228 + 0xa0;
      bVar12 = in_stack_00000228[0x80];
      if (bVar12 == 0x16) goto LAB_10145bdbc;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x81);
      unaff_x19[1] = *(undefined8 *)(in_stack_00000228 + 0x89);
      *unaff_x19 = uVar7;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0x90);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_00000228 + 0x98);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
      *(byte *)(unaff_x29 + -0xd0) = bVar12;
      FUN_101226150(unaff_x29 + -0x88,unaff_x29 + -0xd0);
      if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
LAB_10145c01c:
        uVar8 = *(ulong *)(unaff_x29 + -0x80);
        goto LAB_10145bdd4;
      }
      if (in_stack_00000230 == 5) {
LAB_10145c044:
        uVar7 = 5;
        goto LAB_10145bdc0;
      }
      bVar3 = *(byte *)(unaff_x29 + -0x87);
      pbVar19 = in_stack_00000228 + 0xc0;
      bVar12 = in_stack_00000228[0xa0];
      if (bVar12 == 0x16) goto LAB_10145c044;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0xa1);
      unaff_x19[1] = *(undefined8 *)(in_stack_00000228 + 0xa9);
      *unaff_x19 = uVar7;
      uVar7 = *(undefined8 *)(in_stack_00000228 + 0xb0);
      *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_00000228 + 0xb8);
      *(undefined8 *)((long)unaff_x19 + 0xf) = uVar7;
      *(byte *)(unaff_x29 + -0xd0) = bVar12;
      FUN_101226150(unaff_x29 + -0x88,unaff_x29 + -0xd0);
      if (*(char *)(unaff_x29 + -0x88) == '\x01') goto LAB_10145c01c;
      in_stack_000002c9 = *(byte *)(unaff_x29 + -0x87);
      uVar9 = FUN_100fbc738(&stack0x00000360);
      uStack00000000000000a0 = uVar23;
      uVar8 = in_stack_00000450;
      in_stack_00000248 = in_stack_00000458;
      in_stack_00000250 = uVar23;
      in_stack_00000258 = in_stack_00000450;
      in_stack_00000260 = in_stack_00000458;
      in_stack_00000268 = uVar23;
      in_stack_00000270 = in_stack_00000450;
      in_stack_00000278 = in_stack_00000458;
      in_stack_00000280 = uVar22;
      in_stack_00000288 = uVar2;
      in_stack_00000290 = uVar20;
      in_stack_00000298 = in_stack_00000460;
      in_stack_000002a0 = in_stack_00000468;
      in_stack_000002a8 = in_stack_00000470;
      in_stack_000002b0 = in_stack_00000478;
      in_stack_000002b8 = in_stack_00000480;
      in_stack_000002c0 = in_stack_00000488;
      in_stack_000002c8 = bVar3;
      if (uVar9 != 0) {
        uStack00000000000000a0 = 0x8000000000000000;
        if ((uVar23 != 0x8000000000000000) && (uVar23 != 0)) {
          _free(in_stack_00000450);
        }
        if (uVar23 != 0) {
          _free(in_stack_00000450);
          _free(in_stack_00000450);
        }
        FUN_100de6690(&stack0x000003f8);
        uVar8 = uVar9;
      }
    }
  } while( true );
}

