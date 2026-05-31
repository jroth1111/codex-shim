
/* WARNING: Type propagation algorithm not settling */

void FUN_101313720(undefined8 param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  ulong unaff_x20;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *unaff_x22;
  ulong *puVar15;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar16;
  ulong unaff_x28;
  long unaff_x29;
  ulong uVar17;
  ulong uVar18;
  undefined8 in_stack_00000008;
  ulong *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong *in_stack_00000058;
  ulong in_stack_00000060;
  ulong uStack0000000000000068;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong *in_stack_000000f8;
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
  ulong in_stack_00000158;
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
  ulong *in_stack_000001c8;
  ulong *in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong *in_stack_000001e0;
  ulong uStack00000000000001f0;
  ulong in_stack_000001f0;
  ulong in_stack_000001f8;
  ulong in_stack_00000200;
  
  uStack00000000000001f0 = in_stack_000001f0;
code_r0x000101313720:
  in_stack_00000140 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
  bVar4 = true;
  bVar11 = true;
  in_stack_00000138 = unaff_x28;
  if (unaff_x27 == unaff_x20) goto LAB_101313c48;
joined_r0x000101313740:
  if (unaff_x26 != 0) {
    puVar13 = (undefined8 *)(in_stack_00000060 + 0x20);
    do {
      if (puVar13[-4] != 0) {
        _free(puVar13[-3]);
      }
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 6;
      unaff_x26 = unaff_x26 - 1;
    } while (unaff_x26 != 0);
  }
  if (unaff_x27 != 0) {
    _free(in_stack_00000060);
  }
LAB_101313c48:
  if ((bVar4) && (uVar14 = *(ulong *)(unaff_x29 + -0xf0), uVar14 != unaff_x20)) {
    lVar2 = *(long *)(unaff_x29 + -0xe8);
    lVar12 = lVar2;
    for (lVar3 = *(long *)(unaff_x29 + -0xe0); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e4f1e8(lVar12);
      lVar12 = lVar12 + 0x110;
    }
    unaff_x20 = 0x8000000000000000;
    if (uVar14 != 0) {
      _free(lVar2);
    }
  }
  bVar4 = false;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    bVar4 = bVar11;
  }
  if (bVar4) {
    _free(in_stack_00000040);
  }
  FUN_100de8910(&stack0x000001c8);
  if (in_stack_00000180 != 0x8000000000000005) {
    FUN_100de6690(&stack0x00000180);
  }
joined_r0x000101313ccc:
  puVar15 = unaff_x22;
  if (-1 < (long)in_stack_00000050) goto LAB_101313ce8;
LAB_101313cd0:
  puVar15 = unaff_x22;
  if ((in_stack_00000050 & 0xfffffffffffffffe) != in_stack_00000038) {
    FUN_100de6690(&stack0x000000f0);
  }
LAB_101313ce8:
  uVar16 = in_stack_000000a0;
  uVar14 = in_stack_00000098;
  if (in_stack_00000138 == unaff_x20) {
    *in_stack_00000010 = 0x8000000000000000;
    in_stack_00000010[1] = in_stack_00000140;
    uVar16 = in_stack_00000098;
    for (uVar8 = in_stack_000000a0; uVar8 != 0; uVar8 = uVar8 - 1) {
      FUN_100e54d80(uVar16);
      uVar16 = uVar16 + 0x48;
    }
    if (in_stack_00000090 != 0) {
      _free(uVar14);
    }
LAB_101313edc:
    lVar12 = ((ulong)((long)in_stack_00000058 - (long)puVar15) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100de6690(puVar15);
      puVar15 = puVar15 + 9;
    }
    if (in_stack_00000018 != 0) {
      _free(in_stack_00000028);
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
    func_0x0001089ecbb8(&stack0x00000090);
  }
  puVar6 = (ulong *)(in_stack_00000098 + uVar16 * 0x48);
  puVar6[1] = in_stack_000000b0;
  *puVar6 = in_stack_000000a8;
  puVar6[3] = in_stack_000000c0;
  puVar6[2] = in_stack_000000b8;
  puVar6[5] = in_stack_000000d0;
  puVar6[4] = in_stack_000000c8;
  puVar6[7] = in_stack_000000e0;
  puVar6[6] = in_stack_000000d8;
  puVar6[8] = in_stack_000000e8;
  in_stack_000000a0 = uVar16 + 1;
  unaff_x22 = in_stack_00000058;
  if (puVar15 == in_stack_00000058) {
LAB_101313e94:
    in_stack_00000010[1] = in_stack_00000098;
    *in_stack_00000010 = in_stack_00000090;
    in_stack_00000010[2] = in_stack_000000a0;
    puVar15 = unaff_x22;
    if (*in_stack_00000010 != 0x8000000000000000) {
      in_stack_00000188 = in_stack_00000010[1];
      in_stack_00000180 = *in_stack_00000010;
      in_stack_00000190 = in_stack_00000010[2];
      puVar15 = in_stack_00000058;
      if (in_stack_00000058 != unaff_x22) {
        uVar14 = FUN_1087e422c(in_stack_00000008,&UNK_10b21cb80,&UNK_10b20a590);
        *in_stack_00000010 = 0x8000000000000000;
        in_stack_00000010[1] = uVar14;
        FUN_100cbbd18(&stack0x00000180);
        puVar15 = unaff_x22;
      }
    }
    goto LAB_101313edc;
  }
  unaff_x22 = puVar15 + 9;
  in_stack_00000050 = *puVar15;
  if (in_stack_00000050 == 0x8000000000000005) goto LAB_101313e94;
  uVar16 = puVar15[2];
  puVar6 = (ulong *)puVar15[1];
  in_stack_00000110 = puVar15[4];
  in_stack_00000108 = puVar15[3];
  uVar8 = puVar15[6];
  in_stack_00000118 = puVar15[5];
  in_stack_00000130 = puVar15[8];
  in_stack_00000128 = puVar15[7];
  uVar14 = in_stack_00000050 ^ 0x8000000000000000;
  if (-1 < (long)in_stack_00000050) {
    uVar14 = 5;
  }
  in_stack_000000f0 = in_stack_00000050;
  in_stack_000000f8 = puVar6;
  in_stack_00000100 = uVar16;
  in_stack_00000120 = uVar8;
  if (uVar14 != 4) {
    if (uVar14 == 5) {
      if ((in_stack_00000110 != 0) && (in_stack_00000110 * 9 != -0x11)) {
        _free(in_stack_00000108 + in_stack_00000110 * -8 + -8);
      }
      puVar15 = puVar6 + uVar16 * 0xd;
      in_stack_00000180 = 0x8000000000000005;
      unaff_x26 = in_stack_00000050;
      in_stack_000001c8 = puVar6;
      in_stack_000001d0 = puVar6;
      in_stack_000001d8 = in_stack_00000050;
      in_stack_000001e0 = puVar15;
      if (uVar16 == 0) {
        unaff_x27 = 0x8000000000000000;
        *(undefined8 *)(unaff_x29 + -0xd8) = 0x8000000000000000;
        *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
        goto LAB_1013136f4;
      }
      unaff_x27 = 0x8000000000000000;
      unaff_x28 = 0x8000000000000000;
      uStack0000000000000068 = 0x8000000000000000;
      uVar14 = 0x8000000000000000;
      goto LAB_1013132ac;
    }
    in_stack_00000140 = FUN_108832ea0(&stack0x000000f0,unaff_x29 + -0xc0,&UNK_10b21d5a0);
    puVar15 = unaff_x22;
    in_stack_00000138 = unaff_x20;
    if ((long)in_stack_00000050 < 0) goto LAB_101313cd0;
    goto LAB_101313ce8;
  }
  uVar14 = puVar15[1];
  puVar6 = (ulong *)puVar15[2];
  uVar16 = puVar15[3];
  *(ulong **)(unaff_x29 + -0xa8) = puVar6;
  *(ulong **)(unaff_x29 + -0xa0) = puVar6;
  *(ulong *)(unaff_x29 + -0x98) = uVar14;
  *(ulong **)(unaff_x29 + -0x90) = puVar6 + uVar16 * 9;
  puVar15 = puVar6;
  if (uVar16 == 0) {
LAB_10131359c:
    uVar5 = FUN_1087e422c(0,&UNK_10b231768,&UNK_10b20a590);
  }
  else {
    puVar15 = puVar6 + 9;
    uVar8 = *puVar6;
    *(ulong **)(unaff_x29 + -0xa0) = puVar15;
    if (uVar8 == 0x8000000000000005) goto LAB_10131359c;
    uVar5 = puVar6[2];
    uVar17 = puVar6[1];
    in_stack_000001a0 = puVar6[4];
    uVar18 = puVar6[3];
    in_stack_000001b0 = puVar6[6];
    in_stack_000001a8 = puVar6[5];
    in_stack_000001c0 = puVar6[8];
    in_stack_000001b8 = puVar6[7];
    in_stack_00000180 = uVar8;
    in_stack_00000188 = uVar17;
    in_stack_00000190 = uVar5;
    in_stack_00000198 = uVar18;
    if (uVar8 == 0x8000000000000003) {
      if ((uVar17 != 0x8000000000000000) && (uVar17 != 0x8000000000000001)) {
        if (uVar16 == 1) {
LAB_10131369c:
          in_stack_00000180 = uVar8;
          uVar8 = FUN_1087e422c(1,&UNK_10b231768,&UNK_10b20a590);
        }
        else {
          puVar15 = puVar6 + 0x12;
          *(ulong **)(unaff_x29 + -0xa0) = puVar15;
          in_stack_00000180 = puVar6[9];
          if (in_stack_00000180 == 0x8000000000000005) goto LAB_10131369c;
          in_stack_00000190 = puVar6[0xb];
          in_stack_00000188 = puVar6[10];
          in_stack_000001a0 = puVar6[0xd];
          in_stack_00000198 = puVar6[0xc];
          in_stack_000001b0 = puVar6[0xf];
          in_stack_000001a8 = puVar6[0xe];
          in_stack_000001c0 = puVar6[0x11];
          in_stack_000001b8 = puVar6[0x10];
          FUN_10133d4ac(&stack0x000001f0,&stack0x00000180);
          uVar8 = in_stack_000001f8;
          if (uStack00000000000001f0 != 0x8000000000000000) {
            *(ulong *)(unaff_x29 + -0xc0) = uStack00000000000001f0;
            *(ulong *)(unaff_x29 + -0xb8) = in_stack_000001f8;
            *(ulong *)(unaff_x29 + -0xb0) = in_stack_00000200;
            in_stack_00000048 = uStack00000000000001f0;
            in_stack_00000060 = in_stack_000001f8;
            if (uVar16 == 2) {
LAB_101313a84:
              in_stack_00000140 = FUN_1087e422c(2,&UNK_10b231768,&UNK_10b20a590);
            }
            else {
              puVar15 = puVar6 + 0x1b;
              *(ulong **)(unaff_x29 + -0xa0) = puVar15;
              if (puVar6[0x12] == 0x8000000000000005) goto LAB_101313a84;
              in_stack_00000190 = puVar6[0x14];
              in_stack_00000188 = puVar6[0x13];
              in_stack_000001a0 = puVar6[0x16];
              in_stack_00000198 = puVar6[0x15];
              in_stack_000001b0 = puVar6[0x18];
              in_stack_000001a8 = puVar6[0x17];
              in_stack_000001c0 = puVar6[0x1a];
              in_stack_000001b8 = puVar6[0x19];
              in_stack_00000180 = puVar6[0x12];
              FUN_1013e35d4(&stack0x000001f0,&stack0x00000180);
              in_stack_00000140 = in_stack_000001f8;
              if (uStack00000000000001f0 != 0x8000000000000000) {
                in_stack_00000160 = *(ulong *)(unaff_x29 + -0xb0);
                in_stack_00000158 = *(ulong *)(unaff_x29 + -0xb8);
                in_stack_00000150 = *(ulong *)(unaff_x29 + -0xc0);
                in_stack_00000138 = uVar17;
                in_stack_00000140 = uVar5;
                in_stack_00000148 = uVar18;
                in_stack_00000168 = uStack00000000000001f0;
                in_stack_00000170 = in_stack_000001f8;
                in_stack_00000178 = in_stack_00000200;
                in_stack_00000180 = uVar17;
                in_stack_00000188 = uVar5;
                in_stack_00000190 = uVar18;
                in_stack_00000198 = in_stack_00000150;
                in_stack_000001a0 = in_stack_00000158;
                in_stack_000001a8 = in_stack_00000160;
                in_stack_000001b0 = uStack00000000000001f0;
                in_stack_000001b8 = in_stack_000001f8;
                in_stack_000001c0 = in_stack_00000200;
                if (uVar16 != 3) {
                  in_stack_00000140 = FUN_1087e422c(uVar16,&UNK_10b21cb80,&UNK_10b20a590);
                  in_stack_00000138 = 0x8000000000000000;
                  FUN_100e54d80(&stack0x00000180);
                }
                goto LAB_1013135bc;
              }
            }
            in_stack_00000138 = 0x8000000000000000;
            for (uVar18 = in_stack_00000200; uVar18 != 0; uVar18 = uVar18 - 1) {
              FUN_100e4f1e8(uVar8);
              uVar8 = uVar8 + 0x110;
            }
            if (uStack00000000000001f0 != 0) {
              _free(in_stack_000001f8);
            }
joined_r0x0001013136b8:
            if (uVar17 != 0) {
              _free(uVar5);
            }
LAB_1013135bc:
            lVar12 = ((ulong)((long)(puVar6 + uVar16 * 9) - (long)puVar15) >> 3) *
                     -0x71c71c71c71c71c7 + 1;
            while (lVar12 = lVar12 + -1, lVar12 != 0) {
              FUN_100de6690(puVar15);
              puVar15 = puVar15 + 9;
            }
            if (uVar14 != 0) {
              _free(puVar6);
            }
            unaff_x20 = 0x8000000000000000;
            goto joined_r0x000101313ccc;
          }
        }
        in_stack_00000138 = 0x8000000000000000;
        in_stack_00000140 = uVar8;
        goto joined_r0x0001013136b8;
      }
    }
    else {
      uVar5 = FUN_108832ea0(&stack0x00000180,unaff_x29 + -0xc0,&UNK_10b20a620);
      FUN_100de6690(&stack0x00000180);
    }
  }
  in_stack_00000138 = 0x8000000000000000;
  in_stack_00000140 = uVar5;
  goto LAB_1013135bc;
LAB_1013132ac:
  do {
    puVar7 = puVar6 + 0xd;
    puVar9 = puVar7;
    if (*puVar6 == unaff_x20) break;
    piVar1 = (int *)puVar6[1];
    in_stack_00000198 = puVar6[6];
    in_stack_00000190 = puVar6[5];
    in_stack_000001a8 = puVar6[8];
    in_stack_000001a0 = puVar6[7];
    in_stack_000001b8 = puVar6[10];
    in_stack_000001b0 = puVar6[9];
    in_stack_000001c0 = puVar6[0xb];
    in_stack_00000188 = puVar6[4];
    in_stack_00000180 = puVar6[3];
    if (puVar6[2] == 6) {
      if (*piVar1 == 0x6c696b73 && (short)piVar1[1] == 0x736c) {
        uVar10 = 1;
      }
      else {
        uVar10 = 2;
        if (*piVar1 != 0x6f727265 || (short)piVar1[1] != 0x7372) {
          uVar10 = 3;
        }
      }
    }
    else if (puVar6[2] == 3) {
      uVar10 = 3;
      if ((short)*piVar1 == 0x7763 && *(char *)((long)piVar1 + 2) == 'd') {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 3;
    }
    if (*puVar6 != 0) {
      _free();
    }
    uVar5 = in_stack_00000180;
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        if (unaff_x28 == 0x8000000000000000) {
          in_stack_00000180 = 0x8000000000000005;
          if (uVar5 == 0x8000000000000005) {
            *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
            *(ulong *)(unaff_x29 + -200) = unaff_x26;
            *(ulong *)(unaff_x29 + -0xe0) = uVar16;
            *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
            *(ulong *)(unaff_x29 + -0xf0) = uVar14;
            *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
            in_stack_000001d0 = puVar7;
            uVar14 = FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            *(ulong *)(unaff_x29 + -0xa8) = uVar5;
            *(ulong *)(unaff_x29 + -0x98) = in_stack_00000190;
            *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000188;
            *(ulong *)(unaff_x29 + -0x88) = in_stack_000001a0;
            *(ulong *)(unaff_x29 + -0x90) = in_stack_00000198;
            *(ulong *)(unaff_x29 + -0x78) = in_stack_000001b0;
            *(ulong *)(unaff_x29 + -0x80) = in_stack_000001a8;
            *(ulong *)(unaff_x29 + -0x68) = in_stack_000001c0;
            *(ulong *)(unaff_x29 + -0x70) = in_stack_000001b8;
            if (uVar5 == 0x8000000000000003) {
              if (in_stack_00000188 != 0x8000000000000000) {
                in_stack_00000030 = in_stack_00000198;
                in_stack_00000040 = in_stack_00000190;
                unaff_x28 = in_stack_00000188;
                goto LAB_10131329c;
              }
              *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
              *(ulong *)(unaff_x29 + -200) = unaff_x26;
              *(ulong *)(unaff_x29 + -0xe0) = uVar16;
              *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
              *(ulong *)(unaff_x29 + -0xf0) = uVar14;
              *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
              uVar14 = in_stack_00000190;
              in_stack_000001d0 = puVar7;
            }
            else {
              *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
              *(ulong *)(unaff_x29 + -200) = unaff_x26;
              *(ulong *)(unaff_x29 + -0xe0) = uVar16;
              *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
              *(ulong *)(unaff_x29 + -0xf0) = uVar14;
              *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
              in_stack_000001d0 = puVar7;
              uVar14 = FUN_108832ea0(unaff_x29 + -0xa8,unaff_x29 + -0xc0,&UNK_10b20a620);
              FUN_100de6690(unaff_x29 + -0xa8);
            }
          }
          unaff_x28 = 0;
          in_stack_00000140 = uVar14;
        }
        else {
          *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
          *(ulong *)(unaff_x29 + -200) = unaff_x26;
          *(ulong *)(unaff_x29 + -0xe0) = uVar16;
          *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
          *(ulong *)(unaff_x29 + -0xf0) = uVar14;
          *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
          *(undefined **)(unaff_x29 + -0xc0) = &UNK_108ca1f1d;
          *(undefined8 *)(unaff_x29 + -0xb8) = 3;
          *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
          *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
          in_stack_000001d0 = puVar7;
          in_stack_00000140 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
        }
      }
      else if (uVar14 == 0x8000000000000000) {
        in_stack_00000180 = 0x8000000000000005;
        if (uVar5 == 0x8000000000000005) {
          *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
          *(ulong *)(unaff_x29 + -200) = unaff_x26;
          *(ulong *)(unaff_x29 + -0xe0) = uVar16;
          *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
          *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
          *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
          in_stack_000001d0 = puVar7;
          in_stack_00000140 = FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          *(ulong *)(unaff_x29 + -0xa8) = uVar5;
          *(ulong *)(unaff_x29 + -0x98) = in_stack_00000190;
          *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000188;
          *(ulong *)(unaff_x29 + -0x88) = in_stack_000001a0;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_00000198;
          *(ulong *)(unaff_x29 + -0x78) = in_stack_000001b0;
          *(ulong *)(unaff_x29 + -0x80) = in_stack_000001a8;
          *(ulong *)(unaff_x29 + -0x68) = in_stack_000001c0;
          *(ulong *)(unaff_x29 + -0x70) = in_stack_000001b8;
          FUN_10133d4ac(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
          uVar14 = *(ulong *)(unaff_x29 + -0xc0);
          if (uVar14 != 0x8000000000000000) {
            in_stack_00000048 = *(ulong *)(unaff_x29 + -0xb8);
            uVar16 = *(ulong *)(unaff_x29 + -0xb0);
            goto LAB_10131329c;
          }
          *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
          *(ulong *)(unaff_x29 + -200) = unaff_x26;
          *(ulong *)(unaff_x29 + -0xe0) = uVar16;
          *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
          *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
          *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
          in_stack_00000140 = *(ulong *)(unaff_x29 + -0xb8);
          in_stack_000001d0 = puVar7;
        }
      }
      else {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong *)(unaff_x29 + -200) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xe0) = uVar16;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(ulong *)(unaff_x29 + -0xf0) = uVar14;
        *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cabd6c;
        *(undefined8 *)(unaff_x29 + -0xb8) = 6;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_000001d0 = puVar7;
        in_stack_00000140 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
      }
joined_r0x0001013139a8:
      bVar11 = true;
      in_stack_00000138 = 0x8000000000000000;
      bVar4 = true;
      unaff_x20 = 0x8000000000000000;
      if (unaff_x27 != 0x8000000000000000) goto joined_r0x000101313740;
      goto LAB_101313c48;
    }
    unaff_x20 = 0x8000000000000000;
    if (uVar10 == 2) {
      if (unaff_x27 != 0x8000000000000000) {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong *)(unaff_x29 + -200) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xe0) = uVar16;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(ulong *)(unaff_x29 + -0xf0) = uVar14;
        *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cbfdb3;
        *(undefined8 *)(unaff_x29 + -0xb8) = 6;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_000001d0 = puVar7;
        in_stack_00000140 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
        in_stack_00000138 = 0x8000000000000000;
        bVar11 = true;
        bVar4 = true;
        goto joined_r0x000101313740;
      }
      in_stack_00000180 = 0x8000000000000005;
      if (uVar5 == 0x8000000000000005) {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong *)(unaff_x29 + -200) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xe0) = uVar16;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(ulong *)(unaff_x29 + -0xf0) = uVar14;
        *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
        in_stack_000001d0 = puVar7;
        in_stack_00000140 = FUN_1088561c0(&UNK_108cde170,0x10);
      }
      else {
        *(ulong *)(unaff_x29 + -0xa8) = uVar5;
        *(ulong *)(unaff_x29 + -0x98) = in_stack_00000190;
        *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000188;
        *(ulong *)(unaff_x29 + -0x88) = in_stack_000001a0;
        *(ulong *)(unaff_x29 + -0x90) = in_stack_00000198;
        *(ulong *)(unaff_x29 + -0x78) = in_stack_000001b0;
        *(ulong *)(unaff_x29 + -0x80) = in_stack_000001a8;
        *(ulong *)(unaff_x29 + -0x68) = in_stack_000001c0;
        *(ulong *)(unaff_x29 + -0x70) = in_stack_000001b8;
        FUN_1013e35d4(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
        unaff_x27 = *(ulong *)(unaff_x29 + -0xc0);
        if (unaff_x27 != 0x8000000000000000) {
          in_stack_00000060 = *(ulong *)(unaff_x29 + -0xb8);
          unaff_x26 = *(ulong *)(unaff_x29 + -0xb0);
          uStack0000000000000068 = unaff_x27;
          goto LAB_10131329c;
        }
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong *)(unaff_x29 + -200) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xe0) = uVar16;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(ulong *)(unaff_x29 + -0xf0) = uVar14;
        *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
        in_stack_00000140 = *(ulong *)(unaff_x29 + -0xb8);
        in_stack_000001d0 = puVar7;
      }
      in_stack_00000138 = 0x8000000000000000;
      bVar11 = true;
      bVar4 = true;
      goto LAB_101313c48;
    }
    in_stack_00000180 = 0x8000000000000005;
    if (uVar5 == 0x8000000000000005) {
      *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
      *(ulong *)(unaff_x29 + -200) = unaff_x26;
      *(ulong *)(unaff_x29 + -0xe0) = uVar16;
      *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
      *(ulong *)(unaff_x29 + -0xf0) = uVar14;
      *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
      in_stack_000001d0 = puVar7;
      in_stack_00000140 = FUN_1088561c0(&UNK_108cde170,0x10);
      goto joined_r0x0001013139a8;
    }
    *(ulong *)(unaff_x29 + -0xa8) = uVar5;
    *(ulong *)(unaff_x29 + -0x98) = in_stack_00000190;
    *(ulong *)(unaff_x29 + -0xa0) = in_stack_00000188;
    *(ulong *)(unaff_x29 + -0x88) = in_stack_000001a0;
    *(ulong *)(unaff_x29 + -0x90) = in_stack_00000198;
    *(ulong *)(unaff_x29 + -0x78) = in_stack_000001b0;
    *(ulong *)(unaff_x29 + -0x80) = in_stack_000001a8;
    *(ulong *)(unaff_x29 + -0x68) = in_stack_000001c0;
    *(ulong *)(unaff_x29 + -0x70) = in_stack_000001b8;
    FUN_100de6690(unaff_x29 + -0xa8);
LAB_10131329c:
    unaff_x20 = 0x8000000000000000;
    puVar9 = puVar15;
    puVar6 = puVar7;
  } while (puVar7 != puVar15);
  *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
  *(ulong *)(unaff_x29 + -200) = unaff_x26;
  *(ulong *)(unaff_x29 + -0xe0) = uVar16;
  *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
  *(ulong *)(unaff_x29 + -0xf0) = uVar14;
  *(ulong *)(unaff_x29 + -0xe8) = in_stack_00000048;
  in_stack_000001d0 = puVar7;
  if (unaff_x28 == unaff_x20) {
LAB_1013136f4:
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108ca1f1d;
    *(undefined8 *)(unaff_x29 + -0xb8) = 3;
    unaff_x28 = 0x8000000000000000;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xa8;
    goto code_r0x000101313720;
  }
  bVar4 = uVar14 == unaff_x20;
  if (bVar4) {
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cabd6c;
    *(undefined8 *)(unaff_x29 + -0xb8) = 6;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    in_stack_00000140 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
    in_stack_00000138 = unaff_x20;
    goto LAB_101313834;
  }
  if (unaff_x27 == unaff_x20) goto code_r0x0001013137d4;
  in_stack_00000160 = *(ulong *)(unaff_x29 + -0xe0);
  in_stack_00000158 = *(ulong *)(unaff_x29 + -0xe8);
  in_stack_00000150 = *(ulong *)(unaff_x29 + -0xf0);
  in_stack_00000140 = in_stack_00000040;
  in_stack_00000148 = in_stack_00000030;
  in_stack_00000170 = in_stack_00000060;
  in_stack_00000138 = unaff_x28;
  in_stack_00000168 = unaff_x27;
  in_stack_00000178 = unaff_x26;
  if (puVar15 != puVar9) {
    in_stack_00000140 = FUN_1087e422c(uVar8,&UNK_10b21cb90,&UNK_10b20a590);
    in_stack_00000138 = unaff_x20;
    FUN_100e54d80(&stack0x000001f0);
  }
  FUN_100de8910(&stack0x000001c8);
  in_stack_00000200 = in_stack_00000030;
  in_stack_000001f8 = in_stack_00000040;
  uStack00000000000001f0 = unaff_x28;
  goto joined_r0x000101313ccc;
code_r0x0001013137d4:
  *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cbfdb3;
  *(undefined8 *)(unaff_x29 + -0xb8) = 6;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
  *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
  in_stack_00000140 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  in_stack_00000138 = unaff_x20;
  uVar8 = in_stack_00000048;
  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
    FUN_100e4f1e8(uVar8);
    uVar8 = uVar8 + 0x110;
  }
  if (uVar14 != 0) {
    _free(in_stack_00000048);
  }
LAB_101313834:
  if (unaff_x28 != 0) {
    _free(in_stack_00000040);
  }
  bVar11 = false;
  if (unaff_x27 != unaff_x20) goto joined_r0x000101313740;
  goto LAB_101313c48;
}

