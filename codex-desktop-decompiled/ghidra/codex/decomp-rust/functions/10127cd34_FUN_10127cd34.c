
void FUN_10127cd34(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong *unaff_x22;
  ulong *puVar20;
  long lVar21;
  ulong unaff_x24;
  long lVar22;
  ulong *unaff_x25;
  ulong unaff_x27;
  ulong uVar23;
  ulong unaff_x28;
  long unaff_x29;
  long *plVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined8 in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong *in_stack_00000058;
  ulong in_stack_00000060;
  ulong uStack0000000000000068;
  ulong in_stack_00000070;
  ulong uStack0000000000000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong *in_stack_00000120;
  ulong in_stack_00000128;
  long *in_stack_00000130;
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
  ulong in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_000001e8;
  ulong in_stack_000002a8;
  ulong in_stack_000002b0;
  ulong uVar32;
  ulong in_stack_000002b8;
  ulong in_stack_000002d8;
  ulong in_stack_000002e0;
  uint uVar19;
  
  uStack0000000000000078 = unaff_x28;
code_r0x00010127cd34:
  uVar7 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10127cd40:
  bVar5 = true;
  bVar4 = true;
  bVar15 = true;
  in_stack_00000170 = uStack0000000000000078;
  in_stack_00000178 = uVar7;
  if (in_stack_00000088 == unaff_x24) goto LAB_10127d474;
joined_r0x00010127d0f4:
  if (unaff_x25 != (ulong *)0x0) {
    puVar17 = (undefined8 *)(in_stack_00000060 + 0x20);
    do {
      if (puVar17[-4] != 0) {
        _free(puVar17[-3]);
      }
      if (puVar17[-1] != 0) {
        _free(*puVar17);
      }
      puVar17 = puVar17 + 6;
      unaff_x25 = (ulong *)((long)unaff_x25 + -1);
    } while (unaff_x25 != (ulong *)0x0);
  }
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000060);
  }
LAB_10127d474:
  if ((bVar5) && (uVar7 = *(ulong *)(unaff_x29 + -0xf0), uVar7 != unaff_x24)) {
    lVar21 = *(long *)(unaff_x29 + -0xe8);
    lVar22 = *(long *)(unaff_x29 + -0xe0);
    if (lVar22 != 0) {
      puVar17 = (undefined8 *)(lVar21 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    unaff_x24 = 0x8000000000000000;
    if (uVar7 != 0) {
      _free(lVar21);
    }
  }
  bVar5 = false;
  if (in_stack_000002a8 != unaff_x24) {
    bVar5 = bVar4;
  }
  uVar7 = in_stack_000002b0;
  uVar3 = in_stack_000002b8;
  if (bVar5) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      FUN_100e4cf18(uVar7);
      uVar7 = uVar7 + 0xc0;
    }
    unaff_x24 = 0x8000000000000000;
    if (in_stack_000002a8 != 0) {
      _free(in_stack_000002b0);
    }
  }
  bVar5 = false;
  if ((uStack0000000000000078 & 0x7fffffffffffffff) != 0) {
    bVar5 = bVar15;
  }
  if (bVar5) {
    _free(in_stack_00000048);
  }
  FUN_100de8910(&stack0x00000218);
  uVar7 = in_stack_00000060;
  uVar3 = in_stack_00000070;
  uVar32 = in_stack_000002b8;
  if (in_stack_000001d0 != 0x8000000000000005) {
    FUN_100de6690(&stack0x000001d0);
  }
joined_r0x00010127d54c:
  in_stack_000002b8 = unaff_x27;
  puVar20 = unaff_x22;
  if (-1 < (long)in_stack_00000080) goto LAB_10127d564;
LAB_10127d550:
  puVar20 = unaff_x22;
  if ((in_stack_00000080 & 0xfffffffffffffffe) != in_stack_000002b8) {
    FUN_100de6690(&stack0x00000128);
  }
LAB_10127d564:
  uVar23 = in_stack_000000c0;
  uVar13 = in_stack_000000b8;
  if (in_stack_00000170 == unaff_x24) {
    *in_stack_00000010 = 0x8000000000000000;
    in_stack_00000010[1] = in_stack_00000178;
    uVar7 = in_stack_000000b8;
    for (uVar3 = in_stack_000000c0; uVar3 != 0; uVar3 = uVar3 - 1) {
      FUN_100e52c20(uVar7);
      uVar7 = uVar7 + 0x60;
    }
    if (in_stack_000000b0 != 0) {
      _free(uVar13);
    }
LAB_10127d948:
    lVar21 = ((ulong)((long)in_stack_00000058 - (long)puVar20) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar21 = lVar21 + -1, lVar21 != 0) {
      FUN_100de6690(puVar20);
      puVar20 = puVar20 + 9;
    }
    if (in_stack_00000020 != 0) {
      _free(in_stack_00000018);
    }
    return;
  }
  in_stack_00000100 = in_stack_000001a8;
  in_stack_000000f8 = in_stack_000001a0;
  in_stack_00000110 = in_stack_000001b8;
  in_stack_00000108 = in_stack_000001b0;
  in_stack_00000120 = in_stack_000001c8;
  in_stack_00000118 = in_stack_000001c0;
  in_stack_000000e0 = in_stack_00000188;
  in_stack_000000d8 = in_stack_00000180;
  in_stack_000000f0 = in_stack_00000198;
  in_stack_000000e8 = in_stack_00000190;
  in_stack_000000c8 = in_stack_00000170;
  in_stack_000000d0 = in_stack_00000178;
  if (in_stack_000000c0 == in_stack_000000b0) {
    func_0x0001088bad44(&stack0x000000b0);
  }
  puVar9 = (ulong *)(in_stack_000000b8 + uVar23 * 0x60);
  puVar9[5] = in_stack_000000f0;
  puVar9[4] = in_stack_000000e8;
  puVar9[7] = in_stack_00000100;
  puVar9[6] = in_stack_000000f8;
  puVar9[9] = in_stack_00000110;
  puVar9[8] = in_stack_00000108;
  puVar9[0xb] = (ulong)in_stack_00000120;
  puVar9[10] = in_stack_00000118;
  puVar9[1] = in_stack_000000d0;
  *puVar9 = in_stack_000000c8;
  puVar9[3] = in_stack_000000e0;
  puVar9[2] = in_stack_000000d8;
  in_stack_000000c0 = uVar23 + 1;
  unaff_x22 = in_stack_00000058;
  if (puVar20 == in_stack_00000058) {
LAB_10127d900:
    in_stack_00000010[1] = in_stack_000000b8;
    *in_stack_00000010 = in_stack_000000b0;
    in_stack_00000010[2] = in_stack_000000c0;
    puVar20 = unaff_x22;
    if (*in_stack_00000010 != 0x8000000000000000) {
      in_stack_000001d8 = in_stack_00000010[1];
      in_stack_000001d0 = *in_stack_00000010;
      in_stack_000001e0 = in_stack_00000010[2];
      puVar20 = in_stack_00000058;
      if (in_stack_00000058 != unaff_x22) {
        uVar7 = FUN_1087e422c(in_stack_00000008,&UNK_10b21cb80,&UNK_10b20a590);
        *in_stack_00000010 = 0x8000000000000000;
        in_stack_00000010[1] = uVar7;
        FUN_100cb630c(&stack0x000001d0);
        puVar20 = unaff_x22;
      }
    }
    goto LAB_10127d948;
  }
  unaff_x22 = puVar20 + 9;
  in_stack_00000080 = *puVar20;
  if (in_stack_00000080 == 0x8000000000000005) goto LAB_10127d900;
  uVar23 = puVar20[2];
  plVar24 = (long *)puVar20[1];
  in_stack_00000148 = puVar20[4];
  in_stack_00000140 = puVar20[3];
  uVar11 = puVar20[6];
  in_stack_00000150 = puVar20[5];
  in_stack_00000168 = puVar20[8];
  in_stack_00000160 = puVar20[7];
  uVar13 = in_stack_00000080 ^ 0x8000000000000000;
  if (-1 < (long)in_stack_00000080) {
    uVar13 = 5;
  }
  in_stack_00000060 = uVar7;
  in_stack_00000070 = uVar3;
  in_stack_00000128 = in_stack_00000080;
  in_stack_00000130 = plVar24;
  in_stack_00000138 = uVar23;
  in_stack_00000158 = uVar11;
  if (uVar13 != 4) {
    if (uVar13 == 5) {
      if ((in_stack_00000148 != 0) && (in_stack_00000148 * 9 != -0x11)) {
        _free(in_stack_00000140 + in_stack_00000148 * -8 + -8);
      }
      plVar16 = plVar24 + uVar23 * 0xd;
      in_stack_000001d0 = 0x8000000000000005;
      *(ulong *)(unaff_x29 + -0xf0) = unaff_x24;
      *(ulong *)(unaff_x29 + -0xd8) = unaff_x24;
      unaff_x25 = in_stack_00000058;
      if (uVar23 != 0) {
        in_stack_00000088 = 0x8000000000000000;
        uStack0000000000000078 = 0x8000000000000000;
        uStack0000000000000068 = 0x8000000000000000;
        lVar21 = -0x8000000000000000;
        in_stack_000002a8 = 0x8000000000000000;
        goto LAB_10127c89c;
      }
      *(undefined8 *)(unaff_x29 + -0xd8) = 0x8000000000000000;
      *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
      in_stack_00000088 = 0x8000000000000000;
      in_stack_000002a8 = 0x8000000000000000;
      unaff_x27 = in_stack_000002b8;
      goto LAB_10127cd08;
    }
    in_stack_00000178 = FUN_108832ea0(&stack0x00000128,unaff_x29 + -0xc0,&UNK_10b21d540);
    puVar20 = unaff_x22;
    in_stack_00000170 = unaff_x24;
    if ((long)in_stack_00000080 < 0) goto LAB_10127d550;
    goto LAB_10127d564;
  }
  uVar13 = puVar20[1];
  puVar9 = (ulong *)puVar20[2];
  uVar23 = puVar20[3];
  puVar20 = puVar9;
  if (uVar23 != 0) {
    puVar20 = puVar9 + 9;
    uVar11 = *puVar9;
    if (uVar11 != 0x8000000000000005) {
      uVar31 = puVar9[2];
      uVar27 = puVar9[1];
      uVar28 = puVar9[3];
      in_stack_000001d0 = uVar11;
      in_stack_000001d8 = uVar27;
      in_stack_000001e0 = uVar31;
      in_stack_000001e8 = uVar28;
      if (uVar11 != 0x8000000000000003) {
        uVar6 = FUN_108832ea0(&stack0x000001d0,unaff_x29 + -0xc0,&UNK_10b20a620);
        FUN_100de6690(&stack0x000001d0);
        uVar8 = unaff_x24;
        goto LAB_10127c824;
      }
      uVar8 = unaff_x24;
      uVar6 = uVar31;
      if ((uVar27 == unaff_x24) || (uVar8 = unaff_x24, uVar27 == 0x8000000000000001))
      goto LAB_10127c824;
      if (uVar23 != 1) {
        puVar20 = puVar9 + 0x12;
        in_stack_000001d0 = puVar9[9];
        if (in_stack_000001d0 != 0x8000000000000005) {
          in_stack_000001e0 = puVar9[0xb];
          in_stack_000001d8 = puVar9[10];
          in_stack_000001e8 = puVar9[0xc];
          FUN_100673d78(unaff_x29 + -0xa8,&stack0x000001d0);
          in_stack_00000070 = *(ulong *)(unaff_x29 + -0xa8);
          uVar2 = *(ulong *)(unaff_x29 + -0xa0);
          uVar11 = uVar2;
          uVar8 = unaff_x24;
          if (in_stack_00000070 == unaff_x24) goto joined_r0x00010127ccac;
          lVar21 = *(long *)(unaff_x29 + -0x98);
          *(ulong *)(unaff_x29 + -0xd8) = in_stack_00000070;
          *(ulong *)(unaff_x29 + -0xd0) = uVar2;
          *(long *)(unaff_x29 + -200) = lVar21;
          in_stack_000002b8 = in_stack_00000030;
          uVar3 = uVar2;
          if (uVar23 != 2) {
            puVar20 = puVar9 + 0x1b;
            if (puVar9[0x12] != 0x8000000000000005) {
              in_stack_000001e0 = puVar9[0x14];
              in_stack_000001d8 = puVar9[0x13];
              in_stack_000001e8 = puVar9[0x15];
              in_stack_000001d0 = puVar9[0x12];
              FUN_1006739a0(unaff_x29 + -0xa8,&stack0x000001d0);
              uVar1 = *(ulong *)(unaff_x29 + -0xa8);
              in_stack_00000060 = *(ulong *)(unaff_x29 + -0xa0);
              uVar11 = unaff_x24;
              uVar8 = in_stack_00000060;
              if (uVar1 == unaff_x24) goto joined_r0x00010127d2d0;
              lVar22 = *(long *)(unaff_x29 + -0x98);
              *(ulong *)(unaff_x29 + -0xc0) = uVar1;
              *(ulong *)(unaff_x29 + -0xb8) = in_stack_00000060;
              *(long *)(unaff_x29 + -0xb0) = lVar22;
              if (uVar23 == 3) {
LAB_10127d37c:
                in_stack_00000178 = FUN_1087e422c(3,&UNK_10b2316b8,&UNK_10b20a590);
              }
              else {
                puVar20 = puVar9 + 0x24;
                if (puVar9[0x1b] == 0x8000000000000005) goto LAB_10127d37c;
                in_stack_000001e0 = puVar9[0x1d];
                in_stack_000001d8 = puVar9[0x1c];
                in_stack_000001e8 = puVar9[0x1e];
                in_stack_000001d0 = puVar9[0x1b];
                FUN_1013822a4(unaff_x29 + -0xa8,&stack0x000001d0);
                uVar7 = *(ulong *)(unaff_x29 + -0xa8);
                in_stack_00000178 = *(ulong *)(unaff_x29 + -0xa0);
                if (uVar7 != 0x8000000000000000) {
                  in_stack_000001c8 = *(ulong **)(unaff_x29 + -0x98);
                  in_stack_00000198 = *(ulong *)(unaff_x29 + -200);
                  in_stack_000001b0 = *(ulong *)(unaff_x29 + -0xb0);
                  in_stack_000001a8 = *(ulong *)(unaff_x29 + -0xb8);
                  in_stack_000001a0 = *(ulong *)(unaff_x29 + -0xc0);
                  uVar8 = uVar27;
                  in_stack_00000180 = uVar28;
                  in_stack_00000188 = in_stack_000002d8;
                  in_stack_00000190 = in_stack_000002e0;
                  in_stack_000001b8 = uVar7;
                  in_stack_000001c0 = in_stack_00000178;
                  in_stack_000001d0 = uVar27;
                  in_stack_000001d8 = uVar31;
                  in_stack_000001e0 = uVar28;
                  in_stack_000001e8 = in_stack_000002d8;
                  if (uVar23 != 4) {
                    in_stack_00000170 = uVar27;
                    in_stack_00000178 = uVar31;
                    in_stack_00000178 = FUN_1087e422c(uVar23,&UNK_10b21cb80,&UNK_10b20a590);
                    in_stack_00000170 = 0x8000000000000000;
                    FUN_100e52c20(&stack0x000001d0);
                    uVar8 = in_stack_00000170;
                    uVar6 = in_stack_00000178;
                  }
                  goto LAB_10127c824;
                }
              }
              in_stack_00000170 = 0x8000000000000000;
              if (lVar22 != 0) {
                puVar17 = (undefined8 *)(in_stack_00000060 + 8);
                do {
                  if (puVar17[-1] != 0) {
                    _free(*puVar17);
                  }
                  puVar17 = puVar17 + 3;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              uVar11 = in_stack_00000170;
              uVar8 = in_stack_00000178;
              uVar7 = in_stack_00000060;
              if (uVar1 != 0) {
                _free(in_stack_00000060);
                uVar11 = in_stack_00000170;
                uVar8 = in_stack_00000178;
              }
joined_r0x00010127d2d0:
              for (; in_stack_00000060 = uVar7, in_stack_00000178 = uVar8,
                  in_stack_00000170 = uVar11, lVar21 != 0; lVar21 = lVar21 + -1) {
                FUN_100e4cf18(uVar3);
                uVar3 = uVar3 + 0xc0;
                uVar11 = in_stack_00000170;
                uVar8 = in_stack_00000178;
                uVar7 = in_stack_00000060;
              }
              uVar11 = in_stack_00000178;
              uVar8 = in_stack_00000170;
              uVar3 = in_stack_00000070;
              if (in_stack_00000070 != 0) {
                _free(uVar2);
                uVar11 = in_stack_00000178;
                uVar8 = in_stack_00000170;
              }
joined_r0x00010127ccac:
              in_stack_00000170 = uVar8;
              in_stack_00000178 = uVar11;
              in_stack_00000070 = uVar3;
              uVar8 = in_stack_00000170;
              uVar6 = in_stack_00000178;
              if (uVar27 != 0) {
                _free(uVar31);
                uVar8 = in_stack_00000170;
                uVar6 = in_stack_00000178;
              }
LAB_10127c824:
              in_stack_00000178 = uVar6;
              in_stack_00000170 = uVar8;
              lVar21 = ((long)puVar9 + (uVar23 * 0x48 - (long)puVar20) >> 3) * -0x71c71c71c71c71c7 +
                       1;
              while (lVar21 = lVar21 + -1, lVar21 != 0) {
                FUN_100de6690(puVar20);
                puVar20 = puVar20 + 9;
              }
              unaff_x24 = 0x8000000000000000;
              unaff_x27 = in_stack_000002b8;
              uVar7 = in_stack_00000060;
              uVar3 = in_stack_00000070;
              if (uVar13 != 0) {
                _free(puVar9);
              }
              goto joined_r0x00010127d54c;
            }
          }
          uVar8 = FUN_1087e422c(2,&UNK_10b2316b8,&UNK_10b20a590);
          uVar11 = unaff_x24;
          goto joined_r0x00010127d2d0;
        }
      }
      in_stack_000001d0 = uVar11;
      uVar11 = FUN_1087e422c(1,&UNK_10b2316b8,&UNK_10b20a590);
      uVar8 = unaff_x24;
      goto joined_r0x00010127ccac;
    }
  }
  uVar6 = FUN_1087e422c(0,&UNK_10b2316b8,&UNK_10b20a590);
  uVar8 = unaff_x24;
  goto LAB_10127c824;
LAB_10127c89c:
  do {
    plVar10 = plVar24 + 0xd;
    plVar12 = plVar10;
    unaff_x27 = in_stack_00000030;
    if (*plVar24 == -0x8000000000000000) break;
    plVar12 = (long *)plVar24[1];
    lVar22 = plVar24[2];
    in_stack_000001e8 = plVar24[6];
    in_stack_000001e0 = plVar24[5];
    lVar29 = plVar24[8];
    lVar25 = plVar24[7];
    lVar30 = plVar24[10];
    lVar26 = plVar24[9];
    lVar14 = plVar24[0xb];
    in_stack_000001d8 = plVar24[4];
    in_stack_000001d0 = plVar24[3];
    if (lVar22 < 6) {
      if (lVar22 == 3) {
        if ((short)*plVar12 != 0x7763 || *(char *)((long)plVar12 + 2) != 'd') goto LAB_10127c9a0;
        uVar19 = 0;
        uVar18 = 0;
      }
      else if ((lVar22 == 5) && ((int)*plVar12 == 0x6b6f6f68 && *(char *)((long)plVar12 + 4) == 's')
              ) {
        uVar19 = 1;
        uVar18 = 1;
      }
      else {
LAB_10127c9a0:
        uVar19 = 4;
        uVar18 = 4;
      }
    }
    else if (lVar22 == 6) {
      if ((int)*plVar12 != 0x6f727265 || *(short *)((long)plVar12 + 4) != 0x7372)
      goto LAB_10127c9a0;
      uVar19 = 3;
      uVar18 = 3;
    }
    else {
      if ((lVar22 != 8) || (*plVar12 != 0x73676e696e726177)) goto LAB_10127c9a0;
      uVar19 = 2;
      uVar18 = 2;
    }
    if (*plVar24 != 0) {
      _free();
      uVar18 = uVar19;
    }
    uVar7 = in_stack_000001d0;
    in_stack_000002b0 = in_stack_00000050;
    if (uVar18 < 2) {
      if (uVar18 == 0) {
        if (uStack0000000000000078 == 0x8000000000000000) {
          in_stack_000001d0 = 0x8000000000000005;
          if (uVar7 == 0x8000000000000005) {
            *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
            *(ulong **)(unaff_x29 + -200) = unaff_x25;
            *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
            *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
            *(long *)(unaff_x29 + -0xf0) = lVar21;
            *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
            uVar7 = FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            *(ulong *)(unaff_x29 + -0xa8) = uVar7;
            *(ulong *)(unaff_x29 + -0x98) = in_stack_000001e0;
            *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001d8;
            *(long *)(unaff_x29 + -0x88) = lVar25;
            *(ulong *)(unaff_x29 + -0x90) = in_stack_000001e8;
            *(long *)(unaff_x29 + -0x78) = lVar26;
            *(long *)(unaff_x29 + -0x80) = lVar29;
            *(long *)(unaff_x29 + -0x68) = lVar14;
            *(long *)(unaff_x29 + -0x70) = lVar30;
            if (uVar7 == 0x8000000000000003) {
              uStack0000000000000078 = in_stack_000001d8;
              if (in_stack_000001d8 != 0x8000000000000000) {
                in_stack_00000038 = in_stack_000001e8;
                in_stack_00000048 = in_stack_000001e0;
                goto LAB_10127c88c;
              }
              *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
              *(ulong **)(unaff_x29 + -200) = unaff_x25;
              *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
              *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
              *(long *)(unaff_x29 + -0xf0) = lVar21;
              *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
              uVar7 = in_stack_000001e0;
            }
            else {
              *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
              *(ulong **)(unaff_x29 + -200) = unaff_x25;
              *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
              *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
              *(long *)(unaff_x29 + -0xf0) = lVar21;
              *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
              uVar7 = FUN_108832ea0(unaff_x29 + -0xa8,unaff_x29 + -0xc0,&UNK_10b20a620);
              FUN_100de6690(unaff_x29 + -0xa8);
            }
          }
          unaff_x24 = 0x8000000000000000;
          uStack0000000000000078 = 0x8000000000000000;
          goto LAB_10127cd40;
        }
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108ca1f1d;
        *(undefined8 *)(unaff_x29 + -0xb8) = 3;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
      }
      else if (in_stack_000002a8 == 0x8000000000000000) {
        in_stack_000001d0 = 0x8000000000000005;
        if (uVar7 != 0x8000000000000005) {
          *(ulong *)(unaff_x29 + -0xa8) = uVar7;
          *(ulong *)(unaff_x29 + -0x98) = in_stack_000001e0;
          *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001d8;
          *(long *)(unaff_x29 + -0x88) = lVar25;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_000001e8;
          *(long *)(unaff_x29 + -0x78) = lVar26;
          *(long *)(unaff_x29 + -0x80) = lVar29;
          *(long *)(unaff_x29 + -0x68) = lVar14;
          *(long *)(unaff_x29 + -0x70) = lVar30;
          FUN_100673d78(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
          in_stack_000002a8 = *(ulong *)(unaff_x29 + -0xc0);
          if (in_stack_000002a8 == 0x8000000000000000) {
            *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
            *(ulong **)(unaff_x29 + -200) = unaff_x25;
            *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
            *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
            *(long *)(unaff_x29 + -0xf0) = lVar21;
            *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
            in_stack_000002a8 = 0x8000000000000000;
            goto LAB_10127d0cc;
          }
          in_stack_00000050 = *(ulong *)(unaff_x29 + -0xb8);
          in_stack_000002b8 = *(ulong *)(unaff_x29 + -0xb0);
          goto LAB_10127c88c;
        }
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        in_stack_000002a8 = 0x8000000000000000;
        in_stack_00000178 = FUN_1088561c0(&UNK_108cde170,0x10);
      }
      else {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cabd72;
        *(undefined8 *)(unaff_x29 + -0xb8) = 5;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
      }
LAB_10127d0d8:
      in_stack_00000170 = 0x8000000000000000;
      bVar5 = true;
      bVar4 = true;
      bVar15 = true;
      goto joined_r0x00010127d0f0;
    }
    if (uVar18 == 2) {
      if (lVar21 == -0x8000000000000000) {
        in_stack_000001d0 = 0x8000000000000005;
        if (uVar7 == 0x8000000000000005) {
          *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
          *(ulong **)(unaff_x29 + -200) = unaff_x25;
          *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
          *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
          *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
          *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
          in_stack_00000178 = FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          *(ulong *)(unaff_x29 + -0xa8) = uVar7;
          *(ulong *)(unaff_x29 + -0x98) = in_stack_000001e0;
          *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001d8;
          *(long *)(unaff_x29 + -0x88) = lVar25;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_000001e8;
          *(long *)(unaff_x29 + -0x78) = lVar26;
          *(long *)(unaff_x29 + -0x80) = lVar29;
          *(long *)(unaff_x29 + -0x68) = lVar14;
          *(long *)(unaff_x29 + -0x70) = lVar30;
          FUN_1006739a0(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
          lVar21 = *(long *)(unaff_x29 + -0xc0);
          if (lVar21 != -0x8000000000000000) {
            in_stack_00000040 = *(long *)(unaff_x29 + -0xb8);
            in_stack_00000070 = *(ulong *)(unaff_x29 + -0xb0);
            goto LAB_10127c88c;
          }
          *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
          *(ulong **)(unaff_x29 + -200) = unaff_x25;
          *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
          *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
          *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
          *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
LAB_10127d0cc:
          in_stack_00000178 = *(ulong *)(unaff_x29 + -0xb8);
        }
      }
      else {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108c984b0;
        *(undefined8 *)(unaff_x29 + -0xb8) = 8;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
      }
      goto LAB_10127d0d8;
    }
    if (uVar18 == 3) {
      if (in_stack_00000088 != 0x8000000000000000) {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cbfdb3;
        *(undefined8 *)(unaff_x29 + -0xb8) = 6;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
        unaff_x24 = 0x8000000000000000;
        in_stack_00000170 = 0x8000000000000000;
        bVar15 = true;
        bVar4 = true;
        bVar5 = true;
        goto joined_r0x00010127d0f4;
      }
      in_stack_000001d0 = 0x8000000000000005;
      if (uVar7 == 0x8000000000000005) {
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        in_stack_00000178 = FUN_1088561c0(&UNK_108cde170,0x10);
      }
      else {
        *(ulong *)(unaff_x29 + -0xa8) = uVar7;
        *(ulong *)(unaff_x29 + -0x98) = in_stack_000001e0;
        *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001d8;
        *(long *)(unaff_x29 + -0x88) = lVar25;
        *(ulong *)(unaff_x29 + -0x90) = in_stack_000001e8;
        *(long *)(unaff_x29 + -0x78) = lVar26;
        *(long *)(unaff_x29 + -0x80) = lVar29;
        *(long *)(unaff_x29 + -0x68) = lVar14;
        *(long *)(unaff_x29 + -0x70) = lVar30;
        FUN_1013822a4(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
        in_stack_00000088 = *(ulong *)(unaff_x29 + -0xc0);
        if (in_stack_00000088 != 0x8000000000000000) {
          in_stack_00000060 = *(ulong *)(unaff_x29 + -0xb8);
          unaff_x25 = *(ulong **)(unaff_x29 + -0xb0);
          uStack0000000000000068 = in_stack_00000088;
          goto LAB_10127c88c;
        }
        *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
        *(long *)(unaff_x29 + -0xf0) = lVar21;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
        in_stack_00000178 = *(ulong *)(unaff_x29 + -0xb8);
      }
      unaff_x24 = 0x8000000000000000;
      in_stack_00000170 = 0x8000000000000000;
      bVar15 = true;
      bVar4 = true;
      bVar5 = true;
      goto LAB_10127d474;
    }
    in_stack_000001d0 = 0x8000000000000005;
    if (uVar7 == 0x8000000000000005) {
      *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
      *(ulong **)(unaff_x29 + -200) = unaff_x25;
      *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
      *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
      *(long *)(unaff_x29 + -0xf0) = lVar21;
      *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
      in_stack_00000178 = FUN_1088561c0(&UNK_108cde170,0x10);
      goto LAB_10127d0d8;
    }
    *(ulong *)(unaff_x29 + -0xa8) = uVar7;
    *(ulong *)(unaff_x29 + -0x98) = in_stack_000001e0;
    *(ulong *)(unaff_x29 + -0xa0) = in_stack_000001d8;
    *(long *)(unaff_x29 + -0x88) = lVar25;
    *(ulong *)(unaff_x29 + -0x90) = in_stack_000001e8;
    *(long *)(unaff_x29 + -0x78) = lVar26;
    *(long *)(unaff_x29 + -0x80) = lVar29;
    *(long *)(unaff_x29 + -0x68) = lVar14;
    *(long *)(unaff_x29 + -0x70) = lVar30;
    FUN_100de6690(unaff_x29 + -0xa8);
LAB_10127c88c:
    plVar12 = plVar16;
    plVar24 = plVar10;
  } while (plVar10 != plVar16);
  *(ulong *)(unaff_x29 + -0xd0) = in_stack_00000060;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000070;
  *(ulong *)(unaff_x29 + -0xd8) = uStack0000000000000068;
  *(long *)(unaff_x29 + -0xf0) = lVar21;
  *(long *)(unaff_x29 + -0xe8) = in_stack_00000040;
  in_stack_000002b0 = in_stack_00000050;
  uVar32 = in_stack_000002b8;
  if (uStack0000000000000078 == 0x8000000000000000) {
    unaff_x24 = 0x8000000000000000;
LAB_10127cd08:
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108ca1f1d;
    *(undefined8 *)(unaff_x29 + -0xb8) = 3;
    uStack0000000000000078 = 0x8000000000000000;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xa8;
    in_stack_000002b8 = uVar32;
    goto code_r0x00010127cd34;
  }
  bVar4 = in_stack_000002a8 == 0x8000000000000000;
  if (bVar4) {
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cabd72;
    *(undefined8 *)(unaff_x29 + -0xb8) = 5;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    in_stack_00000178 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
    in_stack_00000170 = 0x8000000000000000;
    bVar5 = true;
    goto joined_r0x00010127cdb8;
  }
  bVar5 = lVar21 == -0x8000000000000000;
  uVar7 = in_stack_000002b8;
  uVar3 = in_stack_00000050;
  if (bVar5) {
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108c984b0;
    *(undefined8 *)(unaff_x29 + -0xb8) = 8;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    in_stack_00000178 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
    in_stack_00000170 = 0x8000000000000000;
    goto joined_r0x00010127d200;
  }
  if (in_stack_00000088 == 0x8000000000000000) goto code_r0x00010127ce28;
  in_stack_00000190 = in_stack_00000050;
  in_stack_000001a8 = *(ulong *)(unaff_x29 + -0xe8);
  in_stack_000001a0 = *(ulong *)(unaff_x29 + -0xf0);
  in_stack_000001b0 = *(ulong *)(unaff_x29 + -0xe0);
  in_stack_00000170 = uStack0000000000000078;
  in_stack_00000178 = in_stack_00000048;
  in_stack_00000180 = in_stack_00000038;
  in_stack_000001b8 = in_stack_00000088;
  in_stack_000001c0 = in_stack_00000060;
  in_stack_00000188 = in_stack_000002a8;
  in_stack_00000198 = in_stack_000002b8;
  in_stack_000001c8 = unaff_x25;
  if (plVar16 != plVar12) {
    in_stack_00000178 = FUN_1087e422c(uVar11,&UNK_10b21cb90,&UNK_10b20a590);
    in_stack_00000170 = 0x8000000000000000;
    FUN_100e52c20(&stack0x00000240);
  }
  FUN_100de8910(&stack0x00000218);
  unaff_x24 = 0x8000000000000000;
  unaff_x27 = in_stack_00000030;
  uVar7 = in_stack_00000060;
  uVar3 = in_stack_00000070;
  goto joined_r0x00010127d54c;
code_r0x00010127ce28:
  *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cbfdb3;
  *(undefined8 *)(unaff_x29 + -0xb8) = 6;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
  *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
  in_stack_00000178 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  in_stack_00000170 = 0x8000000000000000;
  if (in_stack_00000070 != 0) {
    puVar17 = (undefined8 *)(in_stack_00000040 + 8);
    do {
      if (puVar17[-1] != 0) {
        _free(*puVar17);
      }
      puVar17 = puVar17 + 3;
      in_stack_00000070 = in_stack_00000070 - 1;
    } while (in_stack_00000070 != 0);
  }
  if (lVar21 != 0) {
    _free(in_stack_00000040);
  }
joined_r0x00010127d200:
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    FUN_100e4cf18(uVar3);
    uVar3 = uVar3 + 0xc0;
  }
  if (in_stack_000002a8 != 0) {
    _free(in_stack_00000050);
  }
joined_r0x00010127cdb8:
  if (uStack0000000000000078 != 0) {
    _free(in_stack_00000048);
  }
  bVar15 = false;
joined_r0x00010127d0f0:
  unaff_x24 = 0x8000000000000000;
  in_stack_000002b0 = in_stack_00000050;
  if (in_stack_00000088 != 0x8000000000000000) goto joined_r0x00010127d0f4;
  goto LAB_10127d474;
}

