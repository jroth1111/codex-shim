
/* WARNING: Removing unreachable block (ram,0x000100eae96c) */
/* WARNING: Removing unreachable block (ram,0x000100eae928) */
/* WARNING: Removing unreachable block (ram,0x000100ead234) */
/* WARNING: Removing unreachable block (ram,0x000100ead400) */
/* WARNING: Removing unreachable block (ram,0x000100ead2e8) */
/* WARNING: Removing unreachable block (ram,0x000100ead320) */
/* WARNING: Removing unreachable block (ram,0x000100ead3c8) */
/* WARNING: Removing unreachable block (ram,0x000100eadf04) */
/* WARNING: Removing unreachable block (ram,0x000100eadf48) */
/* WARNING: Removing unreachable block (ram,0x000100eaf4a0) */
/* WARNING: Removing unreachable block (ram,0x000100eaf4e4) */
/* WARNING: Removing unreachable block (ram,0x000100ead1fc) */
/* WARNING: Removing unreachable block (ram,0x000100ead7c8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100eb132c(void)

{
  bool bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  byte *pbVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *unaff_x20;
  byte *pbVar25;
  byte *pbVar26;
  byte *unaff_x22;
  byte *pbVar27;
  byte *unaff_x23;
  byte *pbVar28;
  byte *unaff_x24;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  long lVar32;
  byte *unaff_x26;
  byte *pbVar33;
  byte *unaff_x27;
  byte *pbVar34;
  long unaff_x29;
  byte *in_stack_00000008;
  byte *in_stack_00000010;
  byte *in_stack_00000018;
  byte *in_stack_00000020;
  byte *in_stack_00000028;
  byte *in_stack_00000030;
  byte *in_stack_00000038;
  byte *in_stack_00000040;
  byte *in_stack_00000048;
  byte *in_stack_00000050;
  byte *in_stack_00000058;
  byte *in_stack_00000060;
  byte *in_stack_00000068;
  byte *in_stack_00000070;
  byte *in_stack_00000078;
  byte *in_stack_00000080;
  byte *in_stack_00000088;
  int iStack0000000000000090;
  undefined8 *in_stack_00000098;
  byte *in_stack_000000b0;
  long in_stack_000000b8;
  byte *in_stack_000000c0;
  byte *in_stack_000000c8;
  byte *in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  byte *in_stack_000000e8;
  byte *in_stack_000000f0;
  byte *in_stack_000000f8;
  byte *in_stack_00000100;
  byte *in_stack_00000108;
  byte *in_stack_00000110;
  byte *in_stack_00000118;
  byte *in_stack_00000120;
  byte *in_stack_00000128;
  byte *in_stack_00000130;
  byte *in_stack_00000138;
  byte *in_stack_00000140;
  byte *in_stack_00000150;
  byte *in_stack_00000158;
  byte *in_stack_00000160;
  byte *in_stack_00000168;
  byte *in_stack_00000170;
  byte *in_stack_00000178;
  byte *in_stack_00000180;
  byte *in_stack_00000188;
  byte *in_stack_00000190;
  byte *in_stack_00000198;
  byte *in_stack_000001a0;
  byte *in_stack_000001a8;
  byte *in_stack_000001b0;
  byte *in_stack_000001b8;
  byte *in_stack_000001c0;
  int iStack00000000000001c8;
  byte *in_stack_000001d0;
  byte *in_stack_000001d8;
  long in_stack_000001e0;
  char cStack00000000000001e8;
  int iStack00000000000001e9;
  byte *in_stack_000001f8;
  long in_stack_00000200;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  byte *pbVar35;
  byte *in_stack_00000280;
  byte *in_stack_00000288;
  byte *in_stack_00000290;
  byte *in_stack_00000298;
  byte *in_stack_000002a0;
  byte *in_stack_000002a8;
  byte *in_stack_000002b0;
  byte *in_stack_000002b8;
  byte *in_stack_000002c0;
  byte *in_stack_000002c8;
  byte *in_stack_000002d0;
  byte *in_stack_000002d8;
  byte *in_stack_000002e0;
  byte *in_stack_000002e8;
  undefined6 uVar36;
  byte *in_stack_000002f0;
  byte *in_stack_000002f8;
  byte *in_stack_00000300;
  byte *in_stack_00000308;
  byte *in_stack_00000310;
  byte *in_stack_00000318;
  byte *in_stack_00000320;
  byte *in_stack_00000328;
  byte *in_stack_00000330;
  byte *in_stack_00000338;
  byte *in_stack_00000340;
  byte *in_stack_00000348;
  byte *in_stack_00000388;
  byte *in_stack_00000390;
  
  uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
  pbVar25 = (byte *)0x1;
  pbVar29 = (byte *)0x1;
  if ((in_stack_00000080 != (byte *)0x8000000000000001) &&
     (((ulong)in_stack_00000080 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000050);
  }
  if (unaff_x23 != (byte *)0x8000000000000000) {
    if (unaff_x20 != (byte *)0x0) {
      pbVar18 = in_stack_00000070 + 8;
      pbVar23 = unaff_x20;
      do {
        if (*(long *)(pbVar18 + -8) != 0) {
          _free(*(undefined8 *)pbVar18);
        }
        pbVar18 = pbVar18 + 0x18;
        pbVar23 = pbVar23 + -1;
        unaff_x20 = (byte *)0x0;
      } while (pbVar23 != (byte *)0x0);
    }
    if (unaff_x23 != (byte *)0x0) {
      _free(in_stack_00000070);
    }
  }
  if (((unaff_x22 != unaff_x27) && (-0x7fffffffffffffff < (long)unaff_x22)) &&
     (unaff_x22 != (byte *)0x0)) {
    _free(in_stack_00000058);
  }
  if (((in_stack_00000088 != unaff_x27) && (-0x7fffffffffffffff < (long)in_stack_00000088)) &&
     (in_stack_00000088 != (byte *)0x0)) {
    _free(in_stack_00000060);
  }
  in_stack_000000c0 = (byte *)0x2;
  in_stack_000000c8 = (byte *)uVar12;
  FUN_100d0a7cc(&stack0x000000c0);
  lVar32 = in_stack_000001e0;
  pbVar16 = in_stack_000001d8;
  pbVar23 = in_stack_000002b8;
  pbVar18 = in_stack_000002a0;
  pbVar27 = in_stack_000002f8;
  if ((int)unaff_x24 == 0x14) {
    if (in_stack_000001e0 == 0) {
      pbVar31 = (byte *)FUN_1087e422c(0,&UNK_10b22f378,&UNK_10b20a590);
      pbVar16 = unaff_x22;
    }
    else {
      pbVar31 = (byte *)FUN_1013a1c00(in_stack_000001d8);
      if (pbVar31 == (byte *)0x0) {
        if (lVar32 == 1) {
          pbVar31 = (byte *)FUN_1087e422c(1,&UNK_10b22f378,&UNK_10b20a590);
LAB_100ead858:
          pbVar17 = (byte *)0x8000000000000000;
          goto LAB_100eadc44;
        }
        bVar19 = pbVar16[0x20];
        unaff_x24 = (byte *)0x8000000000000001;
        pbVar31 = in_stack_000002f8;
        if (bVar19 != 0x10) {
          if (bVar19 == 0x11) {
            FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + 0x28));
          }
          else {
            if (bVar19 == 0x12) goto LAB_100eadbfc;
            FUN_1004e07f8(&stack0x000002f0,pbVar16 + 0x20);
          }
          unaff_x20 = in_stack_000002f8;
          unaff_x24 = in_stack_000002f0;
          unaff_x26 = in_stack_00000300;
          if (in_stack_000002f0 == (byte *)0x8000000000000000) goto LAB_100ead858;
        }
LAB_100eadbfc:
        if (lVar32 == 2) {
          pbVar25 = (byte *)FUN_1087e422c(2,&UNK_10b22f378,&UNK_10b20a590);
          pbVar31 = pbVar25;
        }
        else {
          bVar19 = pbVar16[0x40];
          pbVar29 = (byte *)0x8000000000000001;
          pbVar24 = in_stack_00000088;
          if (bVar19 != 0x10) {
            if (bVar19 == 0x11) {
              FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + 0x48));
            }
            else {
              if (bVar19 == 0x12) goto LAB_100eb0004;
              FUN_1004e07f8(&stack0x000002f0,pbVar16 + 0x40);
            }
            pbVar25 = in_stack_000002f8;
            pbVar29 = in_stack_000002f0;
            pbVar24 = in_stack_00000300;
            if (in_stack_000002f0 == (byte *)0x8000000000000000) goto LAB_100eadc2c;
          }
LAB_100eb0004:
          in_stack_00000088 = pbVar24;
          if (lVar32 == 3) {
            unaff_x23 = (byte *)FUN_1087e422c(3,&UNK_10b22f378,&UNK_10b20a590);
            pbVar31 = unaff_x23;
          }
          else {
            pbVar24 = (byte *)FUN_10121b158(&stack0x000002f0,pbVar16 + 0x60);
            pbVar28 = (byte *)0x8000000000000000;
            unaff_x23 = in_stack_000002f8;
            if (in_stack_000002f0 != (byte *)0x8000000000000000) {
              *(byte **)(unaff_x29 + -0x88) = in_stack_000002f0;
              *(byte **)(unaff_x29 + -0x80) = in_stack_000002f8;
              *(byte **)(unaff_x29 + -0x78) = in_stack_00000300;
              if (lVar32 != 4) {
                bVar19 = pbVar16[0x80];
                if (bVar19 == 0x10) {
                  pbVar34 = (byte *)0x8000000000000000;
                }
                else {
                  if (bVar19 == 0x11) {
                    FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + 0x88));
                  }
                  else {
                    pbVar34 = (byte *)0x8000000000000000;
                    if (bVar19 == 0x12) goto LAB_100eb0898;
                    FUN_1004e07f8(&stack0x000002f0,pbVar16 + 0x80);
                  }
                  pbVar34 = in_stack_000002f0;
                  if ((long)in_stack_000002f0 < -0x7ffffffffffffffe) {
                    pbVar34 = (byte *)0x8000000000000001;
                  }
                  pbVar24 = in_stack_000002f8;
                  pbVar28 = in_stack_00000300;
                  if (pbVar34 + 0x7fffffffffffffff < (byte *)0x2) goto LAB_100eb083c;
                }
LAB_100eb0898:
                in_stack_00000280 = *(byte **)(unaff_x29 + -0x78);
                pbVar17 = in_stack_00000388;
                pbVar31 = in_stack_00000390;
                in_stack_00000288 = pbVar34;
                in_stack_00000290 = pbVar24;
                in_stack_00000298 = pbVar28;
                pbVar18 = unaff_x24;
                in_stack_000002a8 = unaff_x20;
                in_stack_000002b0 = unaff_x26;
                pbVar23 = pbVar29;
                in_stack_000002c0 = pbVar25;
                in_stack_000002c8 = in_stack_00000088;
                if ((in_stack_00000388 != (byte *)0x8000000000000000) &&
                   (in_stack_000002f0 = in_stack_00000388, pbVar27 = in_stack_00000390,
                   in_stack_00000300 = in_stack_00000280, in_stack_00000308 = pbVar34,
                   in_stack_00000310 = pbVar24, in_stack_00000318 = pbVar28,
                   in_stack_00000320 = unaff_x24, in_stack_00000328 = unaff_x20,
                   in_stack_00000330 = unaff_x26, in_stack_00000338 = pbVar29,
                   in_stack_00000340 = pbVar25, in_stack_00000348 = in_stack_00000088, lVar32 != 5))
                {
                  *(undefined8 *)(unaff_x29 + -0x88) = 5;
                  pbVar31 = (byte *)FUN_1087e422c((lVar32 + 0x7fffffffffffffbU & 0x7ffffffffffffff)
                                                  + 5,unaff_x29 + -0x88,&UNK_10b23a1b0);
                  func_0x000100e4de18(&stack0x000002f0);
                  pbVar17 = (byte *)0x8000000000000000;
                }
                goto LAB_100eadc44;
              }
              pbVar31 = (byte *)FUN_1087e422c(4,&UNK_10b22f378,&UNK_10b20a590);
LAB_100eb083c:
              if (in_stack_00000300 != (byte *)0x0) {
                pbVar24 = in_stack_000002f8 + 0x20;
                pbVar28 = in_stack_00000300;
                do {
                  if (*(long *)(pbVar24 + -0x20) != 0) {
                    _free(*(undefined8 *)(pbVar24 + -0x18));
                  }
                  if (*(long *)(pbVar24 + -8) != 0) {
                    _free(*(undefined8 *)pbVar24);
                  }
                  pbVar24 = pbVar24 + 0x30;
                  pbVar28 = pbVar28 + -1;
                } while (pbVar28 != (byte *)0x0);
              }
              if (in_stack_000002f0 != (byte *)0x0) {
                _free(in_stack_000002f8);
              }
            }
          }
          if ((pbVar29 != (byte *)0x8000000000000001) && (pbVar29 != (byte *)0x0)) {
            _free(pbVar25);
          }
        }
LAB_100eadc2c:
        pbVar17 = (byte *)0x8000000000000000;
        if ((unaff_x24 == (byte *)0x8000000000000001) || (unaff_x24 == (byte *)0x0))
        goto LAB_100eadc44;
LAB_100eadc40:
        _free(unaff_x20);
        pbVar17 = (byte *)0x8000000000000000;
        pbVar18 = in_stack_000002a0;
        pbVar23 = in_stack_000002b8;
        goto LAB_100eadc44;
      }
    }
    pbVar17 = (byte *)0x8000000000000000;
LAB_100eadc44:
    if (pbVar17 != (byte *)0x8000000000000000) {
      in_stack_000000c8 = pbVar17;
      in_stack_000000d0 = pbVar31;
      in_stack_000000d8 = in_stack_00000280;
      in_stack_000000e0 = in_stack_00000288;
      in_stack_000000e8 = in_stack_00000290;
      in_stack_000000f0 = in_stack_00000298;
      in_stack_000000f8 = pbVar18;
      in_stack_00000100 = in_stack_000002a8;
      in_stack_00000108 = in_stack_000002b0;
      in_stack_00000110 = pbVar23;
      in_stack_00000118 = in_stack_000002c0;
      in_stack_00000120 = in_stack_000002c8;
      in_stack_00000150 = pbVar31;
      in_stack_00000158 = in_stack_00000280;
      in_stack_00000160 = in_stack_00000288;
      in_stack_00000168 = in_stack_00000290;
      in_stack_00000170 = in_stack_00000298;
      in_stack_00000178 = pbVar18;
      in_stack_00000180 = in_stack_000002a8;
      in_stack_00000188 = in_stack_000002b0;
      in_stack_00000190 = pbVar23;
      in_stack_00000198 = in_stack_000002c0;
      in_stack_000001a0 = in_stack_000002c8;
      FUN_100e077ec(&stack0x000001c8);
      _cStack00000000000001e8 = 2;
      in_stack_00000098[9] = in_stack_00000180;
      in_stack_00000098[8] = in_stack_00000178;
      in_stack_00000098[0xb] = in_stack_00000190;
      in_stack_00000098[10] = in_stack_00000188;
      in_stack_00000098[1] = 1;
      *in_stack_00000098 = 2;
      in_stack_00000098[3] = in_stack_00000150;
      in_stack_00000098[2] = pbVar17;
      in_stack_00000098[0xd] = in_stack_000001a0;
      in_stack_00000098[0xc] = in_stack_00000198;
      in_stack_00000098[0xf] = in_stack_00000260;
      in_stack_00000098[0xe] = in_stack_00000258;
      in_stack_00000098[0x10] = in_stack_00000268;
      in_stack_00000098[5] = in_stack_00000160;
      in_stack_00000098[4] = in_stack_00000158;
      in_stack_00000098[7] = in_stack_00000170;
      in_stack_00000098[6] = in_stack_00000168;
      goto LAB_100eafb78;
    }
  }
  else {
    if ((int)unaff_x24 == 0x15) {
      *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000000;
      if (in_stack_000001e0 == 0) {
        *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000000;
        in_stack_00000088 = (byte *)0x8000000000000001;
        pbVar16 = (byte *)0x8000000000000000;
        pbVar24 = (byte *)0x8000000000000002;
        pbVar25 = (byte *)0x8000000000000002;
LAB_100ead8b0:
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cde34c;
        *(undefined8 *)(unaff_x29 + -0x98) = 4;
        in_stack_000002f8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
        pbVar31 = pbVar16;
        pbVar23 = unaff_x23;
LAB_100eada40:
        in_stack_000002f0 = (byte *)(unaff_x29 + -0xa0);
        pbVar27 = &DAT_100c7b3a0;
LAB_100eada50:
        unaff_x24 = (byte *)0x1;
        pbVar29 = (byte *)0x1;
        pbVar10 = in_stack_000002f8;
LAB_100eada54:
        pbVar16 = pbVar31;
        unaff_x23 = pbVar23;
        in_stack_000002f8 = pbVar10;
        if (in_stack_00000088 != (byte *)0x8000000000000001) {
joined_r0x000100eb1570:
          pbVar16 = pbVar31;
          unaff_x23 = pbVar23;
          if (((ulong)in_stack_00000088 & 0x7fffffffffffffff) != 0) {
            _free(in_stack_00000058);
          }
        }
LAB_100eada74:
        pbVar17 = (byte *)0x8000000000000000;
        if (pbVar16 != (byte *)0x8000000000000000) {
          if (unaff_x23 != (byte *)0x0) {
            pbVar18 = in_stack_00000078 + 0x20;
            pbVar23 = unaff_x23;
            do {
              if (*(long *)(pbVar18 + -0x20) != 0) {
                _free(*(undefined8 *)(pbVar18 + -0x18));
              }
              if (*(long *)(pbVar18 + -8) != 0) {
                _free(*(undefined8 *)pbVar18);
              }
              pbVar18 = pbVar18 + 0x30;
              pbVar23 = pbVar23 + -1;
              unaff_x23 = (byte *)0x0;
            } while (pbVar23 != (byte *)0x0);
          }
          if (pbVar16 != (byte *)0x0) {
            _free(in_stack_00000078);
          }
        }
        iVar22 = 0;
        if (pbVar25 != (byte *)0x8000000000000002) {
          iVar22 = (int)unaff_x24;
        }
        if (((iVar22 == 1) && (-0x7fffffffffffffff < (long)pbVar25)) && (pbVar25 != (byte *)0x0)) {
          _free(in_stack_00000060);
        }
        iVar22 = 0;
        if (pbVar24 != (byte *)0x8000000000000002) {
          iVar22 = (int)pbVar29;
        }
        pbVar31 = in_stack_000002f8;
        pbVar18 = in_stack_000002a0;
        pbVar23 = in_stack_000002b8;
        if (((iVar22 == 1) && (-0x7fffffffffffffff < (long)pbVar24)) &&
           (unaff_x20 = in_stack_00000068, pbVar24 != (byte *)0x0)) goto LAB_100eadc40;
      }
      else {
        bVar7 = false;
        pbVar18 = in_stack_000001d8 + in_stack_000001e0 * 0x40;
        pbVar24 = (byte *)0x8000000000000002;
        pbVar25 = (byte *)0x8000000000000002;
        in_stack_00000080 = (byte *)0x8000000000000000;
        in_stack_00000088 = (byte *)0x8000000000000001;
        pbVar29 = in_stack_000001d8;
        pbVar23 = unaff_x23;
        pbVar31 = (byte *)0x8000000000000000;
LAB_100ead180:
        do {
          bVar19 = *pbVar29;
          if (0xc < bVar19) {
            if (bVar19 == 0xd) {
              FUN_100b65194(&stack0x000002f0,*(undefined8 *)(pbVar29 + 8),
                            *(undefined8 *)(pbVar29 + 0x10));
joined_r0x000100ead248:
              if (((ulong)in_stack_000002f0 & 1) == 0) goto LAB_100ead24c;
            }
            else {
              if (bVar19 == 0xe) {
                uVar12 = *(undefined8 *)(pbVar29 + 0x10);
                uVar14 = *(undefined8 *)(pbVar29 + 0x18);
LAB_100ead204:
                FUN_100b64f90(&stack0x000002f0,uVar12,uVar14);
                goto joined_r0x000100ead248;
              }
              if (bVar19 == 0xf) {
                uVar12 = *(undefined8 *)(pbVar29 + 8);
                uVar14 = *(undefined8 *)(pbVar29 + 0x10);
                goto LAB_100ead204;
              }
LAB_100ead438:
              in_stack_000002f8 = (byte *)FUN_108855c40(pbVar29,unaff_x29 + -0x70,&UNK_10b2151e8);
              in_stack_000002f0 = (byte *)CONCAT71((int7)((ulong)in_stack_000002f0 >> 8),1);
            }
            goto LAB_100ead8e8;
          }
          uVar36 = (undefined6)((ulong)in_stack_000002f0 >> 0x10);
          if (bVar19 == 1) {
            bVar19 = pbVar29[1];
            if (4 < pbVar29[1]) {
              bVar19 = 5;
            }
            in_stack_000002f0 = (byte *)((ulong)CONCAT61(uVar36,bVar19) << 8);
          }
          else if (bVar19 == 4) {
            uVar15 = *(ulong *)(pbVar29 + 8);
            if (4 < uVar15) {
              uVar15 = 5;
            }
            in_stack_000002f0 = (byte *)((ulong)CONCAT61(uVar36,(char)uVar15) << 8);
          }
          else {
            if (bVar19 != 0xc) goto LAB_100ead438;
            FUN_100b65194(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x10),
                          *(undefined8 *)(pbVar29 + 0x18));
            if (((ulong)in_stack_000002f0 & 1) != 0) goto LAB_100ead8e8;
          }
LAB_100ead24c:
          bVar19 = (byte)((ulong)in_stack_000002f0 >> 8);
          pbVar16 = pbVar31;
          unaff_x23 = pbVar23;
          pbVar28 = in_stack_00000030;
          pbVar34 = in_stack_00000038;
          pbVar17 = in_stack_00000040;
          pbVar11 = in_stack_00000048;
          pbVar13 = in_stack_00000060;
          pbVar26 = in_stack_00000068;
          pbVar30 = in_stack_00000070;
          pbVar33 = in_stack_00000078;
          pbVar35 = in_stack_00000080;
          if (bVar19 != 0) {
            if (bVar19 < 3) {
              pbVar20 = pbVar29 + 0x40;
              pbVar10 = pbVar29 + 0x20;
              if (bVar19 == 1) {
LAB_100ead58c:
                if (pbVar24 != (byte *)0x8000000000000002) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0x78) = pbVar23;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                  *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca1558;
                  *(undefined8 *)(unaff_x29 + -0x98) = 5;
                  in_stack_000002f8 =
                       (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eada40;
                }
                bVar19 = *pbVar10;
                if (bVar19 == 0x10) {
LAB_100ead5b4:
                  in_stack_00000068 = in_stack_00000038;
                  pbVar24 = (byte *)0x8000000000000001;
                  pbVar26 = in_stack_00000068;
                }
                else {
                  if (bVar19 == 0x11) {
                    FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x28));
                  }
                  else {
                    if (bVar19 == 0x12) goto LAB_100ead5b4;
                    FUN_1004e07f8(&stack0x000002f0);
                  }
                  pbVar24 = in_stack_000002f0;
                  pbVar34 = in_stack_000002f8;
                  pbVar11 = in_stack_00000300;
                  pbVar26 = in_stack_000002f8;
                  if (in_stack_000002f0 == (byte *)0x8000000000000000) {
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0x78) = pbVar23;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                    pbVar24 = (byte *)0x8000000000000002;
                    goto LAB_100eada50;
                  }
                }
              }
              else {
LAB_100ead630:
                if (pbVar25 != (byte *)0x8000000000000002) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0x78) = pbVar23;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                  *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca155d;
                  *(undefined8 *)(unaff_x29 + -0x98) = 0xb;
                  in_stack_000002f8 =
                       (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eada40;
                }
                bVar19 = *pbVar10;
                if (bVar19 == 0x10) {
LAB_100ead658:
                  in_stack_00000060 = in_stack_00000030;
                  pbVar25 = (byte *)0x8000000000000001;
                  pbVar13 = in_stack_00000060;
                }
                else {
                  if (bVar19 == 0x11) {
                    FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x28));
                  }
                  else {
                    if (bVar19 == 0x12) goto LAB_100ead658;
                    FUN_1004e07f8(&stack0x000002f0);
                  }
                  pbVar25 = in_stack_000002f0;
                  pbVar28 = in_stack_000002f8;
                  pbVar17 = in_stack_00000300;
                  pbVar13 = in_stack_000002f8;
                  if (in_stack_000002f0 == (byte *)0x8000000000000000) {
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0x78) = pbVar23;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                    pbVar25 = (byte *)0x8000000000000002;
                    goto LAB_100eada50;
                  }
                }
              }
            }
            else if (bVar19 == 3) {
              pbVar20 = pbVar29 + 0x40;
              pbVar10 = pbVar29 + 0x20;
              pbVar16 = in_stack_000002f0;
LAB_100ead5c8:
              if (pbVar31 != (byte *)0x8000000000000000) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                *(byte **)(unaff_x29 + -0x78) = pbVar23;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cba9c4;
                *(undefined8 *)(unaff_x29 + -0x98) = 5;
                in_stack_000002f8 =
                     (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eada40;
              }
              FUN_10121b158(&stack0x000002f0,pbVar10);
              unaff_x23 = in_stack_00000300;
              pbVar30 = in_stack_000002f8;
              pbVar33 = in_stack_000002f8;
              pbVar35 = pbVar16;
              in_stack_000002f0 = pbVar16;
              if (pbVar16 == (byte *)0x8000000000000000) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                *(byte **)(unaff_x29 + -0x78) = pbVar23;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                pbVar31 = (byte *)0x8000000000000000;
                unaff_x24 = (byte *)0x1;
                pbVar29 = (byte *)0x1;
                pbVar10 = in_stack_000002f8;
                goto LAB_100eada54;
              }
            }
            else if (bVar19 == 4) {
              pbVar20 = pbVar29 + 0x40;
              pbVar10 = pbVar29 + 0x20;
LAB_100ead670:
              if (in_stack_00000088 != (byte *)0x8000000000000001) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                *(byte **)(unaff_x29 + -0x78) = pbVar23;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca156d;
                *(undefined8 *)(unaff_x29 + -0x98) = 7;
                in_stack_000002f0 = (byte *)(unaff_x29 + -0xa0);
                pbVar27 = &DAT_100c7b3a0;
                in_stack_000002f8 =
                     (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                pbVar29 = (byte *)0x1;
                unaff_x24 = (byte *)0x1;
                goto joined_r0x000100eb1570;
              }
              bVar19 = *pbVar10;
              in_stack_00000088 = (byte *)0x8000000000000000;
              if (bVar19 != 0x10) {
                if (bVar19 == 0x11) {
                  FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x28));
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100ead7a8;
                  FUN_1004e07f8(&stack0x000002f0);
                }
                if (in_stack_000002f0 != (byte *)0x8000000000000000) {
                  in_stack_00000050 = in_stack_00000300;
                }
                in_stack_00000088 = in_stack_000002f0;
                if ((long)in_stack_000002f0 < -0x7ffffffffffffffe) {
                  in_stack_00000088 = (byte *)0x8000000000000001;
                }
                in_stack_00000058 = in_stack_000002f8;
                if (in_stack_00000088 == (byte *)0x8000000000000001) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0x78) = pbVar23;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
                  pbVar29 = (byte *)0x1;
                  unaff_x24 = (byte *)0x1;
                  goto LAB_100eada74;
                }
              }
            }
            else {
              pbVar20 = pbVar29 + 0x40;
            }
LAB_100ead7a8:
            in_stack_00000080 = pbVar35;
            in_stack_00000078 = pbVar33;
            in_stack_00000070 = pbVar30;
            in_stack_00000068 = pbVar26;
            in_stack_00000060 = pbVar13;
            in_stack_00000048 = pbVar11;
            in_stack_00000040 = pbVar17;
            in_stack_00000038 = pbVar34;
            in_stack_00000030 = pbVar28;
            pbVar29 = pbVar20;
            pbVar23 = unaff_x23;
            pbVar31 = pbVar16;
            if (pbVar20 == pbVar18) {
              *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
              *(byte **)(unaff_x29 + -0x78) = unaff_x23;
              *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
              if (bVar7) goto LAB_100ead91c;
              goto LAB_100ead8b0;
            }
            goto LAB_100ead180;
          }
          if (bVar7) {
LAB_100ead9fc:
            *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
            *(byte **)(unaff_x29 + -0x78) = pbVar23;
            *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
            *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cde34c;
            *(undefined8 *)(unaff_x29 + -0x98) = 4;
            in_stack_000002f8 =
                 (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
            goto LAB_100eada40;
          }
          pbVar10 = (byte *)FUN_1013a1c00(pbVar29 + 0x20);
          if (pbVar10 != (byte *)0x0) {
            *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
            *(byte **)(unaff_x29 + -0x78) = pbVar23;
            *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
            unaff_x24 = (byte *)0x1;
            pbVar29 = (byte *)0x1;
            goto LAB_100eada54;
          }
          if (pbVar29 + 0x40 == pbVar18) break;
          bVar19 = pbVar29[0x40];
          if (0xc < bVar19) {
            if (bVar19 == 0xd) {
              FUN_100b65194(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x48),
                            *(undefined8 *)(pbVar29 + 0x50));
            }
            else {
              if (bVar19 == 0xe) {
                uVar12 = *(undefined8 *)(pbVar29 + 0x50);
                uVar14 = *(undefined8 *)(pbVar29 + 0x58);
              }
              else {
                if (bVar19 != 0xf) goto LAB_100ead464;
                uVar12 = *(undefined8 *)(pbVar29 + 0x48);
                uVar14 = *(undefined8 *)(pbVar29 + 0x50);
              }
              FUN_100b64f90(&stack0x000002f0,uVar12,uVar14);
            }
            if (((ulong)in_stack_000002f0 & 1) == 0) goto LAB_100ead338;
LAB_100ead8e8:
            *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
            *(byte **)(unaff_x29 + -0x78) = pbVar23;
            *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
            pbVar27 = in_stack_000002f8;
            goto LAB_100eada50;
          }
          uVar36 = (undefined6)((ulong)in_stack_000002f0 >> 0x10);
          if (bVar19 == 1) {
            bVar19 = pbVar29[0x41];
            if (4 < pbVar29[0x41]) {
              bVar19 = 5;
            }
            in_stack_000002f0 = (byte *)((ulong)CONCAT61(uVar36,bVar19) << 8);
          }
          else if (bVar19 == 4) {
            uVar15 = *(ulong *)(pbVar29 + 0x48);
            if (4 < uVar15) {
              uVar15 = 5;
            }
            in_stack_000002f0 = (byte *)((ulong)CONCAT61(uVar36,(char)uVar15) << 8);
          }
          else {
            if (bVar19 != 0xc) {
LAB_100ead464:
              in_stack_000002f8 =
                   (byte *)FUN_108855c40(pbVar29 + 0x40,unaff_x29 + -0x70,&UNK_10b2151e8);
              in_stack_000002f0 = (byte *)CONCAT71((int7)((ulong)in_stack_000002f0 >> 8),1);
              goto LAB_100ead8e8;
            }
            FUN_100b65194(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x50),
                          *(undefined8 *)(pbVar29 + 0x58));
            if (((ulong)in_stack_000002f0 & 1) != 0) goto LAB_100ead8e8;
          }
LAB_100ead338:
          bVar19 = (byte)((ulong)in_stack_000002f0 >> 8);
          if (bVar19 != 5) {
            if (bVar19 < 2) {
              if (bVar19 == 0) goto LAB_100ead9fc;
              pbVar10 = pbVar29 + 0x60;
              pbVar20 = pbVar29 + 0x80;
              pbVar29 = pbVar29 + 0x40;
LAB_100ead588:
              bVar7 = true;
              goto LAB_100ead58c;
            }
            pbVar10 = pbVar29 + 0x60;
            if (bVar19 == 2) {
              pbVar20 = pbVar29 + 0x80;
              pbVar29 = pbVar29 + 0x40;
LAB_100ead62c:
              bVar7 = true;
              goto LAB_100ead630;
            }
            if (bVar19 == 3) {
              pbVar20 = pbVar29 + 0x80;
              bVar7 = true;
              pbVar16 = in_stack_000002f0;
              goto LAB_100ead5c8;
            }
            pbVar20 = pbVar29 + 0x80;
            pbVar29 = pbVar29 + 0x40;
LAB_100ead66c:
            bVar7 = true;
            goto LAB_100ead670;
          }
          if (pbVar29 + 0x80 == pbVar18) break;
          bVar19 = pbVar29[0x80];
          if (bVar19 < 0xd) {
            uVar36 = (undefined6)((ulong)in_stack_000002f0 >> 0x10);
            if (bVar19 == 1) {
              bVar19 = pbVar29[0x81];
              if (4 < bVar19) {
                bVar19 = 5;
              }
              in_stack_000002f0 = (byte *)((ulong)CONCAT61(uVar36,bVar19) << 8);
            }
            else {
              if (bVar19 != 4) {
                if (bVar19 != 0xc) goto LAB_100ead4a0;
                FUN_100b65194(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x90),
                              *(undefined8 *)(pbVar29 + 0x98));
                goto joined_r0x000100ead414;
              }
              uVar15 = *(ulong *)(pbVar29 + 0x88);
              if (4 < uVar15) {
                uVar15 = 5;
              }
              in_stack_000002f0 = (byte *)((ulong)CONCAT61(uVar36,(char)uVar15) << 8);
            }
          }
          else {
            if (bVar19 == 0xd) {
              FUN_100b65194(&stack0x000002f0,*(undefined8 *)(pbVar29 + 0x88),
                            *(undefined8 *)(pbVar29 + 0x90));
            }
            else {
              if (bVar19 == 0xe) {
                uVar12 = *(undefined8 *)(pbVar29 + 0x90);
                uVar14 = *(undefined8 *)(pbVar29 + 0x98);
              }
              else {
                if (bVar19 != 0xf) {
LAB_100ead4a0:
                  in_stack_000002f8 =
                       (byte *)FUN_108855c40(pbVar29 + 0x80,unaff_x29 + -0x70,&UNK_10b2151e8);
                  in_stack_000002f0 = (byte *)CONCAT71((int7)((ulong)in_stack_000002f0 >> 8),1);
                  goto LAB_100ead8e8;
                }
                uVar12 = *(undefined8 *)(pbVar29 + 0x88);
                uVar14 = *(undefined8 *)(pbVar29 + 0x90);
              }
              FUN_100b64f90(&stack0x000002f0,uVar12,uVar14);
            }
joined_r0x000100ead414:
            if (((ulong)in_stack_000002f0 & 1) != 0) goto LAB_100ead8e8;
          }
          bVar19 = (byte)((ulong)in_stack_000002f0 >> 8);
          if (bVar19 != 5) {
            if (bVar19 < 2) {
              if (bVar19 == 0) goto LAB_100ead9fc;
              pbVar10 = pbVar29 + 0xa0;
              pbVar20 = pbVar29 + 0xc0;
              pbVar29 = pbVar29 + 0x80;
              goto LAB_100ead588;
            }
            pbVar10 = pbVar29 + 0xa0;
            if (bVar19 == 2) {
              pbVar20 = pbVar29 + 0xc0;
              pbVar29 = pbVar29 + 0x80;
              goto LAB_100ead62c;
            }
            if (bVar19 == 3) {
              pbVar20 = pbVar29 + 0xc0;
              bVar7 = true;
              pbVar16 = in_stack_000002f0;
              goto LAB_100ead5c8;
            }
            pbVar20 = pbVar29 + 0xc0;
            pbVar29 = pbVar29 + 0x80;
            goto LAB_100ead66c;
          }
          pbVar29 = pbVar29 + 0xc0;
          bVar7 = true;
        } while (pbVar29 != pbVar18);
        *(byte **)(unaff_x29 + -0x80) = in_stack_00000070;
        *(byte **)(unaff_x29 + -0x78) = pbVar23;
        *(byte **)(unaff_x29 + -0x88) = in_stack_00000080;
LAB_100ead91c:
        pbVar18 = (byte *)0x8000000000000001;
        if (pbVar24 != (byte *)0x8000000000000002) {
          pbVar18 = pbVar24;
        }
        pbVar29 = (byte *)(ulong)(pbVar24 == (byte *)0x8000000000000002);
        pbVar23 = (byte *)0x8000000000000001;
        if (pbVar25 != (byte *)0x8000000000000002) {
          pbVar23 = pbVar25;
        }
        unaff_x24 = (byte *)(ulong)(pbVar25 == (byte *)0x8000000000000002);
        if (pbVar16 == (byte *)0x8000000000000000) {
          *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cba9c4;
          *(undefined8 *)(unaff_x29 + -0x98) = 5;
          in_stack_000002f0 = (byte *)(unaff_x29 + -0xa0);
          pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
          if ((-0x7fffffffffffffff < (long)pbVar23) && (pbVar23 != (byte *)0x0)) {
            _free(in_stack_00000060);
          }
          pbVar31 = (byte *)0x8000000000000000;
          pbVar23 = unaff_x23;
          pbVar27 = &DAT_100c7b3a0;
          if ((-0x7fffffffffffffff < (long)pbVar18) && (pbVar18 != (byte *)0x0)) {
            _free(in_stack_00000068);
          }
          goto LAB_100eada54;
        }
        in_stack_00000288 = (byte *)0x8000000000000000;
        pbVar17 = pbVar16;
        pbVar31 = in_stack_00000078;
        in_stack_00000280 = unaff_x23;
        in_stack_00000290 = in_stack_00000058;
        in_stack_00000298 = in_stack_00000050;
        in_stack_000002a8 = in_stack_00000068;
        in_stack_000002b0 = in_stack_00000048;
        in_stack_000002c0 = in_stack_00000060;
        in_stack_000002c8 = in_stack_00000040;
        if (in_stack_00000088 != (byte *)0x8000000000000001) {
          in_stack_00000288 = in_stack_00000088;
        }
      }
      goto LAB_100eadc44;
    }
    pbVar31 = (byte *)FUN_108855c40(&stack0x000001c8,unaff_x29 + -0x70,&UNK_10b213a28);
    pbVar16 = unaff_x22;
  }
  in_stack_000000c0 = (byte *)0x2;
  in_stack_000000c8 = pbVar31;
  FUN_100d0a7cc(&stack0x000000c0);
  pbVar24 = (byte *)FUN_1088561c0(&UNK_108cc4837,0x46);
  FUN_100e077ec(&stack0x000001c8);
  _cStack00000000000001e8 = 5;
  FUN_100ce2354(&stack0x000001e8);
  __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE
            (&stack0x000001e8,&stack0x000000a0);
  cVar2 = cStack00000000000001e8;
  pbVar31 = (byte *)(_cStack00000000000001e8 & 0xff);
  if (cStack00000000000001e8 != '\x16') {
    iStack00000000000001c8 = iStack00000000000001e9 << 8;
    _iStack00000000000001c8 = (undefined *)CONCAT44(stack0x000001ec,iStack00000000000001c8);
    _iStack00000000000001c8 = (undefined *)CONCAT71(stack0x000001c9,cStack00000000000001e8);
    pbVar34 = in_stack_000002d8;
    pbVar28 = in_stack_000002c0;
    pbVar13 = in_stack_00000300;
    pbVar17 = in_stack_000002f0;
    in_stack_000001d0 = pbVar24;
    in_stack_000001d8 = in_stack_000001f8;
    in_stack_000001e0 = in_stack_00000200;
    pbVar11 = pbVar27;
    if (cStack00000000000001e8 == '\x14') {
      *(byte **)(unaff_x29 + -0xa0) = in_stack_000001f8;
      *(byte **)(unaff_x29 + -0x98) = in_stack_000001f8 + in_stack_00000200 * 0x20;
      pbVar26 = in_stack_000001f8;
      if (in_stack_00000200 == 0) {
        pbVar16 = (byte *)FUN_1087e422c(0,&UNK_10b22f3b8,&UNK_10b20a590);
      }
      else {
        pbVar16 = (byte *)FUN_10132dcd8(in_stack_000001f8);
        if (pbVar16 == (byte *)0x0) {
          if (in_stack_00000200 != 1) {
            bVar19 = in_stack_000001f8[0x20];
            pbVar30 = (byte *)0x8000000000000001;
            pbVar33 = pbVar29;
            if (bVar19 != 0x10) {
              if (bVar19 == 0x11) {
                FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + 0x28));
              }
              else {
                if (bVar19 == 0x12) goto LAB_100eae700;
                FUN_1004e07f8(&stack0x000002f0,in_stack_000001f8 + 0x20);
              }
              pbVar24 = pbVar27;
              pbVar30 = in_stack_000002f0;
              pbVar33 = in_stack_00000300;
              if (in_stack_000002f0 == (byte *)0x8000000000000000) goto LAB_100eadd88;
            }
LAB_100eae700:
            pbVar29 = pbVar33;
            if (in_stack_00000200 == 2) {
              pbVar25 = (byte *)FUN_1087e422c(2,&UNK_10b22f3b8,&UNK_10b20a590);
              pbVar16 = pbVar25;
            }
            else {
              bVar19 = in_stack_000001f8[0x40];
              pbVar34 = (byte *)0x8000000000000001;
              pbVar17 = in_stack_00000088;
              pbVar16 = pbVar27;
              if (bVar19 != 0x10) {
                if (bVar19 == 0x11) {
                  FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + 0x48));
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100eaff30;
                  FUN_1004e07f8(&stack0x000002f0,in_stack_000001f8 + 0x40);
                }
                pbVar25 = pbVar27;
                pbVar34 = in_stack_000002f0;
                pbVar17 = in_stack_00000300;
                if (in_stack_000002f0 == (byte *)0x8000000000000000) goto LAB_100eae730;
              }
LAB_100eaff30:
              in_stack_00000088 = pbVar17;
              if (in_stack_00000200 == 3) {
                pbVar16 = (byte *)FUN_1087e422c(3,&UNK_10b22f3b8,&UNK_10b20a590);
              }
              else {
                pbVar17 = (byte *)0x0;
                bVar19 = in_stack_000001f8[0x60];
                pbVar13 = in_stack_00000080;
                if ((bVar19 != 0x10) && (bVar19 != 0x12)) {
                  if (bVar19 == 0x11) {
                    pbVar17 = *(byte **)(in_stack_000001f8 + 0x68);
                  }
                  else {
                    pbVar17 = in_stack_000001f8 + 0x60;
                  }
                  FUN_101438f4c(&stack0x000002f0,pbVar17);
                  pbVar17 = in_stack_000002f0;
                  pbVar13 = pbVar27;
                  if (in_stack_000002f0 == (byte *)0x2) goto joined_r0x000100eb0800;
                }
                in_stack_00000080 = pbVar13;
                if (in_stack_00000200 == 4) {
                  pbVar16 = (byte *)FUN_1087e422c(4,&UNK_10b22f3b8,&UNK_10b20a590);
                }
                else {
                  bVar19 = in_stack_000001f8[0x80];
                  pbVar13 = (byte *)0x0;
                  pbVar35 = in_stack_00000078;
                  if ((bVar19 != 0x10) && (bVar19 != 0x12)) {
                    if (bVar19 == 0x11) {
                      pbVar13 = *(byte **)(in_stack_000001f8 + 0x88);
                    }
                    else {
                      pbVar13 = in_stack_000001f8 + 0x80;
                    }
                    FUN_101438f4c(&stack0x000002f0,pbVar13);
                    pbVar13 = in_stack_000002f0;
                    pbVar35 = pbVar27;
                    if (in_stack_000002f0 == (byte *)0x2) goto joined_r0x000100eb0800;
                  }
                  in_stack_00000078 = pbVar35;
                  if (in_stack_00000200 == 5) {
                    pbVar16 = (byte *)FUN_1087e422c(5,&UNK_10b22f3b8,&UNK_10b20a590);
                  }
                  else {
                    *(byte **)(unaff_x29 + -0xa0) = in_stack_000001f8 + 0xc0;
                    *(undefined8 *)(unaff_x29 + -0x90) = 6;
                    FUN_101214c80(&stack0x000002f0,in_stack_000001f8 + 0xa0);
                    if (in_stack_000002f0 != (byte *)0x8000000000000000) {
                      *(byte **)(unaff_x29 + -0x88) = in_stack_000002f0;
                      *(byte **)(unaff_x29 + -0x80) = pbVar27;
                      *(byte **)(unaff_x29 + -0x78) = in_stack_00000300;
                      FUN_100f2e4a8(&stack0x000002f0,unaff_x29 + -0xa0);
                      if (in_stack_000002f0 != (byte *)0x8000000000000002) {
                        if (in_stack_000002f0 != (byte *)0x8000000000000001) {
                          in_stack_00000320 = *(byte **)(unaff_x29 + -0x78);
                          uVar15 = *(long *)(unaff_x29 + -0x98) - *(long *)(unaff_x29 + -0xa0);
                          pbVar35 = pbVar17;
                          pbVar16 = in_stack_00000080;
                          in_stack_00000280 = pbVar13;
                          in_stack_00000288 = in_stack_00000078;
                          in_stack_00000290 = in_stack_00000388;
                          in_stack_00000298 = in_stack_00000390;
                          unaff_x23 = in_stack_00000320;
                          in_stack_000002a8 = in_stack_000002f0;
                          in_stack_000002b0 = pbVar27;
                          unaff_x24 = in_stack_00000300;
                          pbVar28 = pbVar30;
                          in_stack_000002c8 = pbVar24;
                          in_stack_000002d0 = pbVar33;
                          in_stack_000002e0 = pbVar25;
                          in_stack_000002e8 = in_stack_00000088;
                          pbVar11 = in_stack_00000080;
                          in_stack_00000308 = in_stack_00000078;
                          in_stack_00000310 = in_stack_00000388;
                          in_stack_00000318 = in_stack_00000390;
                          in_stack_00000328 = in_stack_000002f0;
                          in_stack_00000330 = pbVar27;
                          in_stack_00000338 = in_stack_00000300;
                          in_stack_00000340 = pbVar30;
                          in_stack_00000348 = pbVar24;
                          if (uVar15 != 0) {
                            *(long *)(unaff_x29 + -0x88) = *(long *)(unaff_x29 + -0x90);
                            pbVar16 = (byte *)FUN_1087e422c(*(long *)(unaff_x29 + -0x90) +
                                                            (uVar15 >> 5),unaff_x29 + -0x88,
                                                            &UNK_10b23a1b0);
                            pbVar35 = (byte *)0x2;
                            func_0x000100e50ba0(&stack0x000002f0);
                          }
                          goto LAB_100eae740;
                        }
                        pbVar16 = (byte *)FUN_1087e422c(6,&UNK_10b22f3b8,&UNK_10b20a590);
                      }
                      FUN_100e22ae4(unaff_x29 + -0x88);
                    }
                  }
                }
              }
joined_r0x000100eb0800:
              if ((pbVar34 != (byte *)0x8000000000000001) && (pbVar34 != (byte *)0x0)) {
                _free(pbVar25);
              }
            }
LAB_100eae730:
            pbVar35 = (byte *)0x2;
            unaff_x23 = pbVar18;
            unaff_x24 = pbVar23;
            pbVar34 = in_stack_000002d8;
            pbVar17 = in_stack_000002f0;
            pbVar13 = in_stack_00000300;
            if ((pbVar30 == (byte *)0x8000000000000001) ||
               (pbVar27 = pbVar24, pbVar30 == (byte *)0x0)) goto LAB_100eae740;
            goto LAB_100eae594;
          }
          pbVar24 = (byte *)FUN_1087e422c(1,&UNK_10b22f3b8,&UNK_10b20a590);
LAB_100eadd88:
          pbVar35 = (byte *)0x2;
          pbVar16 = pbVar24;
          unaff_x23 = pbVar18;
          unaff_x24 = pbVar23;
          goto LAB_100eae740;
        }
      }
      pbVar35 = (byte *)0x2;
      unaff_x23 = pbVar18;
      unaff_x24 = pbVar23;
LAB_100eae740:
      if (pbVar35 == (byte *)0x2) goto LAB_100eae750;
      pbVar25 = (byte *)0x0;
      in_stack_00000150 = pbVar16;
      in_stack_00000158 = in_stack_00000280;
      in_stack_00000160 = in_stack_00000288;
      in_stack_00000168 = in_stack_00000290;
      in_stack_00000170 = in_stack_00000298;
      in_stack_00000178 = unaff_x23;
      in_stack_00000180 = in_stack_000002a8;
      in_stack_00000188 = in_stack_000002b0;
      in_stack_00000190 = unaff_x24;
      in_stack_00000198 = pbVar28;
      in_stack_000001a0 = in_stack_000002c8;
      in_stack_000001a8 = in_stack_000002d0;
      in_stack_000001b0 = pbVar34;
      in_stack_000001b8 = in_stack_000002e0;
      in_stack_000001c0 = in_stack_000002e8;
LAB_100eaf7fc:
      FUN_100e077ec(&stack0x000001c8);
      in_stack_00000118 = in_stack_00000198;
      in_stack_00000110 = in_stack_00000190;
      in_stack_00000128 = in_stack_000001a8;
      in_stack_00000120 = in_stack_000001a0;
      in_stack_00000138 = in_stack_000001b8;
      in_stack_00000130 = in_stack_000001b0;
      in_stack_00000140 = in_stack_000001c0;
      in_stack_000000d8 = in_stack_00000158;
      in_stack_000000d0 = in_stack_00000150;
      in_stack_000000e8 = in_stack_00000168;
      in_stack_000000e0 = in_stack_00000160;
      in_stack_000000f8 = in_stack_00000178;
      in_stack_000000f0 = in_stack_00000170;
      in_stack_00000108 = in_stack_00000188;
      in_stack_00000100 = in_stack_00000180;
      in_stack_00000098[0xd] = in_stack_000001a8;
      in_stack_00000098[0xc] = in_stack_000001a0;
      in_stack_00000098[0xf] = in_stack_000001b8;
      in_stack_00000098[0xe] = in_stack_000001b0;
      in_stack_00000098[0x10] = in_stack_000001c0;
      in_stack_00000098[5] = in_stack_00000168;
      in_stack_00000098[4] = in_stack_00000160;
      in_stack_00000098[7] = in_stack_00000178;
      in_stack_00000098[6] = in_stack_00000170;
      in_stack_00000098[9] = in_stack_00000188;
      in_stack_00000098[8] = in_stack_00000180;
      in_stack_00000098[0xb] = in_stack_00000198;
      in_stack_00000098[10] = in_stack_00000190;
      in_stack_00000098[1] = pbVar35;
      *in_stack_00000098 = pbVar25;
      in_stack_00000098[3] = in_stack_00000158;
      in_stack_00000098[2] = in_stack_00000150;
      in_stack_000000c0 = pbVar25;
      in_stack_000000c8 = pbVar35;
      goto LAB_100eafb78;
    }
    if (cStack00000000000001e8 == '\x15') {
      *(undefined8 *)(unaff_x29 + -0xa0) = 0x8000000000000000;
      *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000001;
      if (in_stack_00000200 == 0) {
        *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000001;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0x8000000000000000;
        pbVar26 = (byte *)0x8000000000000000;
        in_stack_00000080 = (byte *)0x8000000000000001;
        in_stack_00000088 = (byte *)0x8000000000000002;
        pbVar16 = (byte *)0x8000000000000002;
LAB_100eae440:
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cde34c;
        *(undefined8 *)(unaff_x29 + -0x68) = 4;
        pbVar35 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
        pbVar30 = unaff_x23;
LAB_100eae474:
        pbVar24 = (byte *)0x1;
        pbVar25 = (byte *)0x1;
      }
      else {
        lVar32 = 0;
        in_stack_00000078 = (byte *)((ulong)in_stack_00000078 & 0xffffffff00000000);
        in_stack_00000070 = (byte *)0x2;
        pbVar33 = (byte *)0x2;
        pbVar26 = (byte *)0x8000000000000000;
        in_stack_00000080 = (byte *)0x8000000000000001;
        in_stack_00000088 = (byte *)0x8000000000000002;
        pbVar16 = (byte *)0x8000000000000002;
        in_stack_00000060 = (byte *)0x8000000000000000;
        in_stack_00000068 = (byte *)0x8000000000000001;
        pbVar30 = unaff_x23;
        do {
          pbVar25 = in_stack_000001f8 + lVar32;
          pbVar29 = pbVar25 + 0x20;
          bVar19 = *pbVar25;
          if (0xc < bVar19) {
            if (bVar19 != 0xd) {
              if (bVar19 == 0xe) {
                uVar12 = *(undefined8 *)(in_stack_000001f8 + lVar32 + 0x10);
                uVar14 = *(undefined8 *)(in_stack_000001f8 + lVar32 + 0x18);
              }
              else {
                if (bVar19 != 0xf) goto LAB_100eae2a4;
                uVar12 = *(undefined8 *)(in_stack_000001f8 + lVar32 + 8);
                uVar14 = *(undefined8 *)(in_stack_000001f8 + lVar32 + 0x10);
              }
              FUN_100b64988(&stack0x000002f0,uVar12,uVar14);
              if (((ulong)pbVar17 & 1) != 0) goto LAB_100eae2c8;
              goto LAB_100eadf64;
            }
            FUN_100b64c64(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + lVar32 + 8),
                          *(undefined8 *)(in_stack_000001f8 + lVar32 + 0x10));
joined_r0x000100eadf60:
            if (((ulong)pbVar17 & 1) == 0) goto LAB_100eadf64;
LAB_100eae2c8:
            *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
            *(byte **)(unaff_x29 + -0x78) = unaff_x24;
            *(byte **)(unaff_x29 + -0x90) = pbVar30;
            *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
            *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
            *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
            pbVar35 = pbVar27;
joined_r0x000100eae304:
            pbVar25 = (byte *)0x1;
            pbVar24 = (byte *)0x1;
            pbVar11 = pbVar27;
            goto joined_r0x000100eae304;
          }
          uVar36 = (undefined6)((ulong)pbVar17 >> 0x10);
          if (bVar19 == 1) {
            bVar19 = in_stack_000001f8[lVar32 + 1];
            if (6 < bVar19) {
              bVar19 = 7;
            }
            pbVar17 = (byte *)((ulong)CONCAT61(uVar36,bVar19) << 8);
          }
          else {
            if (bVar19 != 4) {
              if (bVar19 != 0xc) {
LAB_100eae2a4:
                pbVar27 = (byte *)FUN_108855c40(pbVar25,unaff_x29 + -0x70,&UNK_10b214988);
                pbVar17 = (byte *)CONCAT71((int7)((ulong)pbVar17 >> 8),1);
                goto LAB_100eae2c8;
              }
              FUN_100b64c64(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + lVar32 + 0x10),
                            *(undefined8 *)(in_stack_000001f8 + lVar32 + 0x18));
              goto joined_r0x000100eadf60;
            }
            uVar15 = *(ulong *)(in_stack_000001f8 + lVar32 + 8);
            if (6 < uVar15) {
              uVar15 = 7;
            }
            pbVar17 = (byte *)((ulong)CONCAT61(uVar36,(char)uVar15) << 8);
          }
LAB_100eadf64:
          bVar19 = (byte)((ulong)pbVar17 >> 8);
          pbVar25 = in_stack_00000068;
          unaff_x23 = pbVar30;
          pbVar24 = in_stack_00000010;
          pbVar28 = in_stack_00000018;
          pbVar34 = in_stack_00000020;
          pbVar10 = in_stack_00000038;
          pbVar20 = in_stack_00000040;
          pbVar3 = in_stack_00000050;
          pbVar4 = in_stack_00000058;
          pbVar5 = in_stack_00000060;
          pbVar6 = in_stack_00000080;
          pbVar35 = pbVar27;
          if (bVar19 < 4) {
            if (bVar19 < 2) {
              if (bVar19 == 0) {
                if (((ulong)in_stack_00000078 & 1) == 0) {
                  pbVar35 = (byte *)FUN_10132dcd8(pbVar29);
                  if (pbVar35 == (byte *)0x0) {
                    in_stack_00000078 = (byte *)CONCAT44(in_stack_00000078._4_4_,1);
                    goto LAB_100eade68;
                  }
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                  *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                  *(byte **)(unaff_x29 + -0x90) = pbVar30;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                  goto joined_r0x000100eae304;
                }
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108cde34c;
                *(undefined8 *)(unaff_x29 + -0x68) = 4;
                pbVar35 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eae474;
              }
              if (in_stack_00000088 != (byte *)0x8000000000000002) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca1558;
                *(undefined8 *)(unaff_x29 + -0x68) = 5;
                pbVar35 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eae474;
              }
              bVar19 = *pbVar29;
              in_stack_00000088 = (byte *)0x8000000000000001;
              if (bVar19 == 0x10) {
LAB_100eae098:
                pbVar20 = in_stack_00000020;
              }
              else {
                if (bVar19 == 0x11) {
                  FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + lVar32 + 0x28))
                  ;
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100eae098;
                  FUN_1004e07f8(&stack0x000002f0,pbVar29);
                }
                in_stack_00000008 = in_stack_00000300;
                pbVar34 = pbVar27;
                pbVar20 = pbVar27;
                in_stack_00000088 = pbVar17;
                if (pbVar17 == (byte *)0x8000000000000000) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                  *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                  *(byte **)(unaff_x29 + -0x90) = pbVar30;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                  in_stack_00000088 = (byte *)0x8000000000000002;
                  goto joined_r0x000100eae304;
                }
              }
            }
            else if (bVar19 == 2) {
              if (pbVar16 != (byte *)0x8000000000000002) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca155d;
                *(undefined8 *)(unaff_x29 + -0x68) = 0xb;
                pbVar35 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eae474;
              }
              bVar19 = *pbVar29;
              if (bVar19 == 0x10) {
LAB_100eae00c:
                pbVar16 = (byte *)0x8000000000000001;
                pbVar10 = in_stack_00000018;
              }
              else {
                if (bVar19 == 0x11) {
                  FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + lVar32 + 0x28))
                  ;
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100eae00c;
                  FUN_1004e07f8(&stack0x000002f0,pbVar29);
                }
                pbVar16 = pbVar17;
                pbVar24 = in_stack_00000300;
                pbVar28 = pbVar27;
                pbVar10 = pbVar27;
                if (pbVar17 == (byte *)0x8000000000000000) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                  *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                  *(byte **)(unaff_x29 + -0x90) = pbVar30;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                  pbVar16 = (byte *)0x8000000000000002;
                  goto joined_r0x000100eae304;
                }
              }
            }
            else {
              if (in_stack_00000070 != (byte *)0x2) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108c98480;
                *(undefined8 *)(unaff_x29 + -0x68) = 8;
                pbVar35 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eae474;
              }
              bVar19 = *pbVar29;
              in_stack_00000028 = pbVar27;
              if (bVar19 == 0x10) {
LAB_100eae10c:
                in_stack_00000070 = (byte *)0x0;
              }
              else {
                if (bVar19 == 0x11) {
                  pbVar29 = *(byte **)(in_stack_000001f8 + lVar32 + 0x28);
                }
                else if (bVar19 == 0x12) goto LAB_100eae10c;
                FUN_101438f4c(&stack0x000002f0,pbVar29);
                in_stack_00000070 = pbVar17;
                if (pbVar17 == (byte *)0x2) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                  *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                  *(byte **)(unaff_x29 + -0x90) = pbVar30;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                  goto joined_r0x000100eae304;
                }
              }
            }
          }
          else if (bVar19 < 6) {
            if (bVar19 == 4) {
              if (pbVar33 != (byte *)0x2) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108c98488;
                *(undefined8 *)(unaff_x29 + -0x68) = 8;
                pbVar35 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eae474;
              }
              bVar19 = *pbVar29;
              in_stack_00000030 = pbVar27;
              if (bVar19 == 0x10) {
LAB_100eade5c:
                pbVar33 = (byte *)0x0;
              }
              else {
                if (bVar19 == 0x11) {
                  pbVar29 = *(byte **)(in_stack_000001f8 + lVar32 + 0x28);
                }
                else if (bVar19 == 0x12) goto LAB_100eade5c;
                FUN_101438f4c(&stack0x000002f0,pbVar29);
                pbVar33 = pbVar17;
                if (pbVar17 == (byte *)0x2) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                  *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                  *(byte **)(unaff_x29 + -0x90) = pbVar30;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                  goto joined_r0x000100eae304;
                }
              }
            }
            else {
              if (pbVar26 != (byte *)0x8000000000000000) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108cbbc01;
                *(undefined8 *)(unaff_x29 + -0x68) = 5;
                pbVar35 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                goto LAB_100eae474;
              }
              FUN_101214c80(&stack0x000002f0,pbVar29);
              pbVar26 = pbVar17;
              unaff_x23 = in_stack_00000300;
              pbVar3 = pbVar27;
              pbVar4 = pbVar27;
              pbVar5 = pbVar17;
              if (pbVar17 == (byte *)0x8000000000000000) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
                *(byte **)(unaff_x29 + -0x78) = unaff_x24;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                pbVar26 = (byte *)0x8000000000000000;
                goto joined_r0x000100eae304;
              }
            }
          }
          else if (bVar19 == 6) {
            if (in_stack_00000080 != (byte *)0x8000000000000001) {
              *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
              *(byte **)(unaff_x29 + -0x78) = unaff_x24;
              *(byte **)(unaff_x29 + -0x90) = pbVar30;
              *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
              *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
              *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
              *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca156d;
              *(undefined8 *)(unaff_x29 + -0x68) = 7;
              pbVar17 = (byte *)(unaff_x29 + -0x70);
              pbVar11 = &DAT_100c7b3a0;
              pbVar27 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
              pbVar25 = (byte *)0x1;
              pbVar24 = (byte *)0x1;
              goto joined_r0x000100eb0ed4;
            }
            bVar19 = *pbVar29;
            in_stack_00000080 = (byte *)0x8000000000000000;
            if (bVar19 == 0x10) {
LAB_100eae054:
              in_stack_00000068 = (byte *)0x8000000000000000;
              pbVar25 = in_stack_00000068;
              pbVar6 = in_stack_00000080;
            }
            else {
              if (bVar19 == 0x11) {
                FUN_1004e02c0(&stack0x000002f0,*(undefined8 *)(in_stack_000001f8 + lVar32 + 0x28));
              }
              else {
                if (bVar19 == 0x12) goto LAB_100eae054;
                FUN_1004e02c0(&stack0x000002f0,pbVar29);
              }
              in_stack_00000080 = (byte *)0x8000000000000001;
              if (pbVar17 != (byte *)0x8000000000000000) {
                unaff_x24 = in_stack_00000300;
              }
              pbVar25 = pbVar17;
              if ((long)pbVar17 < -0x7ffffffffffffffe) {
                pbVar25 = (byte *)0x8000000000000001;
              }
              in_stack_00000048 = pbVar27;
              pbVar6 = pbVar25;
              if (pbVar25 == (byte *)0x8000000000000001) {
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
                *(byte **)(unaff_x29 + -0x90) = pbVar30;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
                pbVar25 = (byte *)0x1;
                pbVar24 = (byte *)0x1;
                goto LAB_100eae4e4;
              }
            }
          }
LAB_100eade68:
          in_stack_00000080 = pbVar6;
          in_stack_00000068 = pbVar25;
          in_stack_00000060 = pbVar5;
          in_stack_00000058 = pbVar4;
          in_stack_00000050 = pbVar3;
          in_stack_00000040 = pbVar20;
          in_stack_00000038 = pbVar10;
          in_stack_00000020 = pbVar34;
          in_stack_00000018 = pbVar28;
          in_stack_00000010 = pbVar24;
          lVar32 = lVar32 + 0x40;
          pbVar30 = unaff_x23;
        } while (in_stack_00000200 * 0x40 - lVar32 != 0);
        *(byte **)(unaff_x29 + -0x80) = in_stack_00000048;
        *(byte **)(unaff_x29 + -0x78) = unaff_x24;
        *(byte **)(unaff_x29 + -0x90) = unaff_x23;
        *(byte **)(unaff_x29 + -0x88) = in_stack_00000068;
        *(byte **)(unaff_x29 + -0xa0) = in_stack_00000060;
        *(byte **)(unaff_x29 + -0x98) = in_stack_00000050;
        if (((ulong)in_stack_00000078 & 1) == 0) goto LAB_100eae440;
        pbVar28 = (byte *)0x8000000000000001;
        if (in_stack_00000088 != (byte *)0x8000000000000002) {
          pbVar28 = in_stack_00000088;
        }
        pbVar25 = (byte *)(ulong)(in_stack_00000088 == (byte *)0x8000000000000002);
        pbVar34 = (byte *)0x8000000000000001;
        if (pbVar16 != (byte *)0x8000000000000002) {
          pbVar34 = pbVar16;
        }
        pbVar24 = (byte *)(ulong)(pbVar16 == (byte *)0x8000000000000002);
        if (pbVar26 != (byte *)0x8000000000000000) {
          in_stack_00000280 = (byte *)0x0;
          if (pbVar33 != (byte *)0x2) {
            in_stack_00000280 = pbVar33;
          }
          pbVar35 = (byte *)0x0;
          if (in_stack_00000070 != (byte *)0x2) {
            pbVar35 = in_stack_00000070;
          }
          pbVar16 = in_stack_00000028;
          in_stack_00000288 = in_stack_00000030;
          in_stack_00000290 = pbVar26;
          in_stack_00000298 = in_stack_00000058;
          in_stack_000002a8 = (byte *)0x8000000000000000;
          in_stack_000002b0 = in_stack_00000048;
          in_stack_000002c8 = in_stack_00000040;
          in_stack_000002d0 = in_stack_00000008;
          in_stack_000002e0 = in_stack_00000038;
          in_stack_000002e8 = in_stack_00000010;
          if (in_stack_00000080 != (byte *)0x8000000000000001) {
            in_stack_000002a8 = in_stack_00000080;
          }
          goto LAB_100eae740;
        }
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cbbc01;
        *(undefined8 *)(unaff_x29 + -0x68) = 5;
        pbVar35 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
        pbVar29 = (byte *)0x8000000000000002;
        if ((-0x7fffffffffffffff < (long)pbVar34) && (pbVar34 != (byte *)0x0)) {
          _free(in_stack_00000038);
        }
        pbVar26 = (byte *)0x8000000000000000;
        if ((-0x7fffffffffffffff < (long)pbVar28) && (pbVar28 != (byte *)0x0)) {
          _free(in_stack_00000040);
        }
      }
      pbVar11 = &DAT_100c7b3a0;
      pbVar17 = (byte *)(unaff_x29 + -0x70);
joined_r0x000100eae304:
      pbVar27 = pbVar35;
      if (in_stack_00000080 != (byte *)0x8000000000000001) {
joined_r0x000100eb0ed4:
        if (in_stack_00000080 != (byte *)0x8000000000000000) {
          if (unaff_x24 != (byte *)0x0) {
            pbVar29 = in_stack_00000048 + 8;
            do {
              if (*(long *)(pbVar29 + -8) != 0) {
                _free(*(undefined8 *)pbVar29);
              }
              pbVar29 = pbVar29 + 0x18;
              unaff_x24 = unaff_x24 + -1;
            } while (unaff_x24 != (byte *)0x0);
          }
          pbVar29 = in_stack_00000080;
          if (in_stack_00000080 != (byte *)0x0) {
            _free(in_stack_00000048);
          }
        }
      }
LAB_100eae4e4:
      pbVar35 = (byte *)0x2;
      if (pbVar26 != (byte *)0x8000000000000000) {
        if (pbVar30 != (byte *)0x0) {
          pbVar28 = in_stack_00000058 + 8;
          do {
            if (*(long *)(pbVar28 + -8) != 0) {
              _free(*(undefined8 *)pbVar28);
            }
            pbVar28 = pbVar28 + 0x18;
            pbVar30 = pbVar30 + -1;
          } while (pbVar30 != (byte *)0x0);
        }
        if (pbVar26 != (byte *)0x0) {
          _free(in_stack_00000058);
        }
      }
      iVar22 = 0;
      if (pbVar16 != (byte *)0x8000000000000002) {
        iVar22 = (int)pbVar24;
      }
      if (((iVar22 == 1) && (-0x7fffffffffffffff < (long)pbVar16)) && (pbVar16 != (byte *)0x0)) {
        _free(in_stack_00000038);
      }
      iVar22 = 0;
      if (in_stack_00000088 != (byte *)0x8000000000000002) {
        iVar22 = (int)pbVar25;
      }
      pbVar16 = pbVar27;
      unaff_x23 = pbVar18;
      unaff_x24 = pbVar23;
      pbVar28 = in_stack_000002c0;
      pbVar34 = in_stack_000002d8;
      if (((iVar22 == 1) && (-0x7fffffffffffffff < (long)in_stack_00000088)) &&
         (pbVar27 = in_stack_00000040, in_stack_00000088 != (byte *)0x0)) {
LAB_100eae594:
        _free(pbVar27);
        pbVar35 = (byte *)0x2;
        unaff_x23 = pbVar18;
        unaff_x24 = pbVar23;
        pbVar28 = in_stack_000002c0;
        pbVar34 = in_stack_000002d8;
        pbVar13 = in_stack_00000300;
      }
      goto LAB_100eae740;
    }
    FUN_108855c40(&stack0x000001c8,unaff_x29 + -0x70,&UNK_10b214308);
    pbVar26 = pbVar16;
    unaff_x23 = pbVar18;
    unaff_x24 = pbVar23;
LAB_100eae750:
    _cStack00000000000001e8 = 2;
    FUN_100d079ec(&stack0x000001e8);
    lVar32 = in_stack_000001e0;
    pbVar16 = in_stack_000001d8;
    pbVar23 = pbVar34;
    pbVar18 = pbVar28;
    in_stack_00000300 = pbVar13;
    if (cVar2 == '\x14') {
      *(byte **)(unaff_x29 + -0xa0) = in_stack_000001d8;
      *(byte **)(unaff_x29 + -0x98) = in_stack_000001d8 + in_stack_000001e0 * 0x20;
      if (in_stack_000001e0 == 0) {
        in_stack_00000030 = (byte *)FUN_1087e422c(0,&UNK_10b22f2f8,&UNK_10b20a590);
      }
      else {
        in_stack_00000030 = (byte *)FUN_10132dcd8(in_stack_000001d8);
        if (in_stack_00000030 == (byte *)0x0) {
          if (lVar32 != 1) {
            bVar19 = pbVar16[0x20];
            pbVar27 = (byte *)0x8000000000000001;
            if (bVar19 != 0x10) {
              if (bVar19 == 0x11) {
                FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + 0x28));
              }
              else {
                if (bVar19 == 0x12) goto LAB_100eaf2c8;
                FUN_1004e07f8(&stack0x000002f0,pbVar16 + 0x20);
              }
              pbVar24 = pbVar11;
              pbVar27 = pbVar17;
              pbVar29 = pbVar13;
              if (pbVar17 == (byte *)0x8000000000000000) goto LAB_100eae870;
            }
LAB_100eaf2c8:
            if (lVar32 == 2) {
              pbVar11 = (byte *)FUN_1087e422c(2,&UNK_10b22f2f8,&UNK_10b20a590);
              pbVar25 = pbVar11;
            }
            else {
              bVar19 = pbVar16[0x40];
              pbVar23 = (byte *)0x8000000000000001;
              in_stack_00000018 = pbVar31;
              if (bVar19 != 0x10) {
                if (bVar19 == 0x11) {
                  FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + 0x48));
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100eb01f4;
                  FUN_1004e07f8(&stack0x000002f0,pbVar16 + 0x40);
                }
                pbVar25 = pbVar11;
                pbVar23 = pbVar17;
                in_stack_00000018 = pbVar13;
                if (pbVar17 == (byte *)0x8000000000000000) goto LAB_100eaf2f8;
              }
LAB_100eb01f4:
              pbVar31 = in_stack_00000018;
              if (lVar32 == 3) {
                pbVar11 = (byte *)FUN_1087e422c(3,&UNK_10b22f2f8,&UNK_10b20a590);
              }
              else {
                pbVar35 = (byte *)0x0;
                bVar19 = pbVar16[0x60];
                if ((bVar19 != 0x10) && (bVar19 != 0x12)) {
                  if (bVar19 == 0x11) {
                    pbVar26 = *(byte **)(pbVar16 + 0x68);
                  }
                  else {
                    pbVar26 = pbVar16 + 0x60;
                  }
                  FUN_101438f4c(&stack0x000002f0,pbVar26);
                  pbVar35 = pbVar17;
                  in_stack_00000088 = pbVar11;
                  if (pbVar17 == (byte *)0x2) goto joined_r0x000100eb0c44;
                }
                if (lVar32 == 4) {
                  pbVar11 = (byte *)FUN_1087e422c(4,&UNK_10b22f2f8,&UNK_10b20a590);
                }
                else {
                  bVar19 = pbVar16[0x80];
                  in_stack_00000300 = (byte *)0x0;
                  if ((bVar19 != 0x10) && (bVar19 != 0x12)) {
                    if (bVar19 == 0x11) {
                      pbVar26 = *(byte **)(pbVar16 + 0x88);
                    }
                    else {
                      pbVar26 = pbVar16 + 0x80;
                    }
                    FUN_101438f4c(&stack0x000002f0,pbVar26);
                    in_stack_00000300 = pbVar17;
                    in_stack_00000080 = pbVar11;
                    if (pbVar17 == (byte *)0x2) goto joined_r0x000100eb0c44;
                  }
                  if (lVar32 == 5) {
                    pbVar11 = (byte *)FUN_1087e422c(5,&UNK_10b22f2f8,&UNK_10b20a590);
                  }
                  else {
                    *(byte **)(unaff_x29 + -0xa0) = pbVar16 + 0xc0;
                    *(undefined8 *)(unaff_x29 + -0x90) = 6;
                    FUN_101355020(&stack0x000002f0,pbVar16 + 0xa0);
                    if (pbVar17 != (byte *)0x8000000000000000) {
                      *(byte **)(unaff_x29 + -0x88) = pbVar17;
                      *(byte **)(unaff_x29 + -0x80) = pbVar11;
                      *(byte **)(unaff_x29 + -0x78) = pbVar13;
                      FUN_100f2e4a8(&stack0x000002f0,unaff_x29 + -0xa0);
                      if (pbVar17 != (byte *)0x8000000000000002) {
                        if (pbVar17 != (byte *)0x8000000000000001) {
                          in_stack_00000320 = *(byte **)(unaff_x29 + -0x78);
                          uVar15 = *(long *)(unaff_x29 + -0x98) - *(long *)(unaff_x29 + -0xa0);
                          in_stack_00000030 = in_stack_00000088;
                          in_stack_00000280 = in_stack_00000300;
                          in_stack_00000288 = in_stack_00000080;
                          in_stack_00000298 = in_stack_00000390;
                          unaff_x23 = in_stack_00000320;
                          in_stack_000002b0 = pbVar11;
                          unaff_x24 = pbVar13;
                          pbVar18 = pbVar27;
                          in_stack_000002c8 = pbVar24;
                          in_stack_00000010 = pbVar29;
                          in_stack_000002e0 = pbVar25;
                          in_stack_00000308 = in_stack_00000080;
                          in_stack_00000310 = in_stack_00000388;
                          in_stack_00000318 = in_stack_00000390;
                          in_stack_00000328 = pbVar17;
                          in_stack_00000330 = pbVar11;
                          in_stack_00000338 = pbVar13;
                          in_stack_00000340 = pbVar27;
                          in_stack_00000348 = pbVar24;
                          if (uVar15 != 0) {
                            *(long *)(unaff_x29 + -0x88) = *(long *)(unaff_x29 + -0x90);
                            in_stack_00000030 =
                                 (byte *)FUN_1087e422c(*(long *)(unaff_x29 + -0x90) + (uVar15 >> 5),
                                                       unaff_x29 + -0x88,&UNK_10b23a1b0);
                            pbVar35 = (byte *)0x2;
                            func_0x000100e4bed4(&stack0x000002f0);
                          }
                          goto LAB_100eaf308;
                        }
                        pbVar11 = (byte *)FUN_1087e422c(6,&UNK_10b22f2f8,&UNK_10b20a590);
                      }
                      FUN_100e1da90(unaff_x29 + -0x88);
                    }
                  }
                }
              }
joined_r0x000100eb0c44:
              if ((pbVar23 != (byte *)0x8000000000000001) && (pbVar23 != (byte *)0x0)) {
                _free(pbVar25);
              }
            }
LAB_100eaf2f8:
            pbVar35 = (byte *)0x2;
            in_stack_00000030 = pbVar11;
            in_stack_00000388 = in_stack_00000290;
            pbVar17 = in_stack_000002a8;
            in_stack_00000010 = in_stack_000002d0;
            pbVar23 = pbVar34;
            in_stack_00000018 = in_stack_000002e8;
            in_stack_00000300 = pbVar13;
            if ((pbVar27 == (byte *)0x8000000000000001) || (pbVar27 == (byte *)0x0))
            goto LAB_100eaf308;
            goto LAB_100eaefa4;
          }
          pbVar11 = (byte *)FUN_1087e422c(1,&UNK_10b22f2f8,&UNK_10b20a590);
LAB_100eae870:
          pbVar35 = (byte *)0x2;
          in_stack_00000030 = pbVar11;
          in_stack_00000388 = in_stack_00000290;
          pbVar17 = in_stack_000002a8;
          in_stack_00000010 = in_stack_000002d0;
          in_stack_00000018 = in_stack_000002e8;
          goto LAB_100eaf308;
        }
      }
      pbVar35 = (byte *)0x2;
      in_stack_00000388 = in_stack_00000290;
      pbVar17 = in_stack_000002a8;
      in_stack_00000010 = in_stack_000002d0;
      in_stack_00000018 = in_stack_000002e8;
LAB_100eaf308:
      if (pbVar35 != (byte *)0x2) {
        pbVar25 = (byte *)0x1;
        in_stack_00000150 = in_stack_00000030;
        in_stack_00000158 = in_stack_00000280;
        in_stack_00000160 = in_stack_00000288;
        in_stack_00000168 = in_stack_00000388;
        in_stack_00000170 = in_stack_00000298;
        in_stack_00000178 = unaff_x23;
        in_stack_00000180 = pbVar17;
        in_stack_00000188 = in_stack_000002b0;
        in_stack_00000190 = unaff_x24;
        in_stack_00000198 = pbVar18;
        in_stack_000001a0 = in_stack_000002c8;
        in_stack_000001a8 = in_stack_00000010;
        in_stack_000001b0 = pbVar23;
        in_stack_000001b8 = in_stack_000002e0;
        in_stack_000001c0 = in_stack_00000018;
        goto LAB_100eaf7fc;
      }
    }
    else {
      if (cVar2 == '\x15') {
        *(undefined8 *)(unaff_x29 + -0xa0) = 0x8000000000000000;
        *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000001;
        if (in_stack_000001e0 == 0) {
          *(undefined8 *)(unaff_x29 + -0x88) = 0x8000000000000001;
          *(undefined8 *)(unaff_x29 + -0xa0) = 0x8000000000000000;
          in_stack_00000388 = (byte *)0x8000000000000000;
          pbVar27 = (byte *)0x8000000000000002;
          in_stack_00000080 = (byte *)0x8000000000000001;
          in_stack_00000088 = (byte *)0x8000000000000002;
LAB_100eaee44:
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108cde34c;
          *(undefined8 *)(unaff_x29 + -0x68) = 4;
          pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
LAB_100eaee88:
          pbVar16 = (byte *)0x1;
          bVar7 = true;
        }
        else {
          lVar32 = 0;
          in_stack_00000078 = (byte *)((ulong)in_stack_00000078 & 0xffffffff00000000);
          lVar21 = in_stack_000001e0 * 0x40;
          pbVar26 = (byte *)0x2;
          pbVar24 = (byte *)0x2;
          in_stack_00000388 = (byte *)0x8000000000000000;
          pbVar27 = (byte *)0x8000000000000002;
          in_stack_00000080 = (byte *)0x8000000000000001;
          in_stack_00000088 = (byte *)0x8000000000000002;
          in_stack_00000068 = (byte *)0x8000000000000000;
          in_stack_00000070 = (byte *)0x8000000000000001;
          pbVar18 = pbVar25;
          do {
            pbVar23 = pbVar16 + lVar32;
            pbVar30 = pbVar23 + 0x20;
            bVar19 = *pbVar23;
            pbVar25 = pbVar18;
            pbVar29 = in_stack_00000058;
            if (0xc < bVar19) {
              if (bVar19 != 0xd) {
                if (bVar19 == 0xe) {
                  uVar12 = *(undefined8 *)(pbVar16 + lVar32 + 0x10);
                  uVar14 = *(undefined8 *)(pbVar16 + lVar32 + 0x18);
                }
                else {
                  if (bVar19 != 0xf) goto LAB_100eaecc0;
                  uVar12 = *(undefined8 *)(pbVar16 + lVar32 + 8);
                  uVar14 = *(undefined8 *)(pbVar16 + lVar32 + 0x10);
                }
                FUN_100b64988(&stack0x000002f0,uVar12,uVar14);
                if (((ulong)pbVar17 & 1) != 0) goto LAB_100eaece4;
                goto LAB_100eae988;
              }
              FUN_100b64c64(&stack0x000002f0,*(undefined8 *)(pbVar16 + lVar32 + 8),
                            *(undefined8 *)(pbVar16 + lVar32 + 0x10));
joined_r0x000100eae984:
              if (((ulong)pbVar17 & 1) == 0) goto LAB_100eae988;
LAB_100eaece4:
              *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
              *(byte **)(unaff_x29 + -0x78) = pbVar31;
              *(byte **)(unaff_x29 + -0x90) = pbVar18;
              *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
              *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
              *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
LAB_100eaed14:
              bVar7 = true;
              pbVar16 = (byte *)0x1;
              pbVar25 = pbVar18;
              goto LAB_100eaee8c;
            }
            uVar36 = (undefined6)((ulong)pbVar17 >> 0x10);
            if (bVar19 == 1) {
              bVar19 = pbVar16[lVar32 + 1];
              if (6 < bVar19) {
                bVar19 = 7;
              }
              pbVar17 = (byte *)((ulong)CONCAT61(uVar36,bVar19) << 8);
            }
            else {
              if (bVar19 != 4) {
                if (bVar19 != 0xc) {
LAB_100eaecc0:
                  pbVar11 = (byte *)FUN_108855c40(pbVar23,unaff_x29 + -0x70,&UNK_10b214e28);
                  goto LAB_100eaece4;
                }
                FUN_100b64c64(&stack0x000002f0,*(undefined8 *)(pbVar16 + lVar32 + 0x10),
                              *(undefined8 *)(pbVar16 + lVar32 + 0x18));
                goto joined_r0x000100eae984;
              }
              uVar15 = *(ulong *)(pbVar16 + lVar32 + 8);
              if (6 < uVar15) {
                uVar15 = 7;
              }
              pbVar17 = (byte *)((ulong)CONCAT61(uVar36,(char)uVar15) << 8);
            }
LAB_100eae988:
            bVar19 = (byte)((ulong)pbVar17 >> 8);
            pbVar23 = in_stack_00000040;
            pbVar33 = in_stack_00000048;
            pbVar35 = in_stack_00000058;
            pbVar10 = in_stack_00000060;
            pbVar20 = in_stack_00000068;
            pbVar3 = in_stack_00000070;
            if (bVar19 < 4) {
              if (bVar19 < 2) {
                if (bVar19 == 0) {
                  if (((ulong)in_stack_00000078 & 1) == 0) {
                    pbVar30 = (byte *)FUN_10132dcd8(pbVar30);
                    if (pbVar30 == (byte *)0x0) {
                      in_stack_00000078 = (byte *)CONCAT44(in_stack_00000078._4_4_,1);
                      goto LAB_100eae88c;
                    }
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                    *(byte **)(unaff_x29 + -0x78) = pbVar31;
                    *(byte **)(unaff_x29 + -0x90) = pbVar18;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                    *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                    pbVar11 = pbVar30;
                    goto LAB_100eaed14;
                  }
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(undefined **)(unaff_x29 + -0x70) = &UNK_108cde34c;
                  *(undefined8 *)(unaff_x29 + -0x68) = 4;
                  pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eaee88;
                }
                if (pbVar27 != (byte *)0x8000000000000002) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca1558;
                  *(undefined8 *)(unaff_x29 + -0x68) = 5;
                  pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eaee88;
                }
                bVar19 = *pbVar30;
                if (bVar19 == 0x10) {
LAB_100eaeabc:
                  pbVar27 = (byte *)0x8000000000000001;
                  pbVar33 = in_stack_00000028;
                }
                else {
                  if (bVar19 == 0x11) {
                    FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + lVar32 + 0x28));
                  }
                  else {
                    if (bVar19 == 0x12) goto LAB_100eaeabc;
                    FUN_1004e07f8(&stack0x000002f0,pbVar30);
                  }
                  pbVar27 = pbVar17;
                  in_stack_00000010 = pbVar13;
                  in_stack_00000028 = pbVar11;
                  pbVar33 = pbVar11;
                  if (pbVar17 == (byte *)0x8000000000000000) {
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                    *(byte **)(unaff_x29 + -0x78) = pbVar31;
                    *(byte **)(unaff_x29 + -0x90) = pbVar18;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                    *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                    pbVar27 = (byte *)0x8000000000000002;
                    goto LAB_100eaee88;
                  }
                }
              }
              else if (bVar19 == 2) {
                if (in_stack_00000088 != (byte *)0x8000000000000002) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca155d;
                  *(undefined8 *)(unaff_x29 + -0x68) = 0xb;
                  pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eaee88;
                }
                bVar19 = *pbVar30;
                in_stack_00000088 = (byte *)0x8000000000000001;
                if (bVar19 == 0x10) {
LAB_100eaea38:
                  pbVar23 = in_stack_00000020;
                }
                else {
                  if (bVar19 == 0x11) {
                    FUN_1004e07f8(&stack0x000002f0,*(undefined8 *)(pbVar16 + lVar32 + 0x28));
                  }
                  else {
                    if (bVar19 == 0x12) goto LAB_100eaea38;
                    FUN_1004e07f8(&stack0x000002f0,pbVar30);
                  }
                  in_stack_00000018 = pbVar13;
                  in_stack_00000020 = pbVar11;
                  pbVar23 = pbVar11;
                  in_stack_00000088 = pbVar17;
                  if (pbVar17 == (byte *)0x8000000000000000) {
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                    *(byte **)(unaff_x29 + -0x78) = pbVar31;
                    *(byte **)(unaff_x29 + -0x90) = pbVar18;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                    *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                    in_stack_00000088 = (byte *)0x8000000000000002;
                    goto LAB_100eaed14;
                  }
                }
              }
              else {
                if (pbVar26 != (byte *)0x2) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(undefined **)(unaff_x29 + -0x70) = &UNK_108c98480;
                  *(undefined8 *)(unaff_x29 + -0x68) = 8;
                  pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eaee88;
                }
                bVar19 = *pbVar30;
                in_stack_00000030 = pbVar11;
                if (bVar19 == 0x10) {
LAB_100eaeb2c:
                  pbVar26 = (byte *)0x0;
                }
                else {
                  if (bVar19 == 0x11) {
                    pbVar30 = *(byte **)(pbVar16 + lVar32 + 0x28);
                  }
                  else if (bVar19 == 0x12) goto LAB_100eaeb2c;
                  FUN_101438f4c(&stack0x000002f0,pbVar30);
                  pbVar26 = pbVar17;
                  if (pbVar17 == (byte *)0x2) {
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                    *(byte **)(unaff_x29 + -0x78) = pbVar31;
                    *(byte **)(unaff_x29 + -0x90) = pbVar18;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                    *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                    goto LAB_100eaed14;
                  }
                }
              }
            }
            else if (bVar19 < 6) {
              if (bVar19 == 4) {
                if (pbVar24 != (byte *)0x2) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(undefined **)(unaff_x29 + -0x70) = &UNK_108c98488;
                  *(undefined8 *)(unaff_x29 + -0x68) = 8;
                  pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eaee88;
                }
                bVar19 = *pbVar30;
                in_stack_00000038 = pbVar11;
                if (bVar19 == 0x10) {
LAB_100eae880:
                  pbVar24 = (byte *)0x0;
                }
                else {
                  if (bVar19 == 0x11) {
                    pbVar30 = *(byte **)(pbVar16 + lVar32 + 0x28);
                  }
                  else if (bVar19 == 0x12) goto LAB_100eae880;
                  FUN_101438f4c(&stack0x000002f0,pbVar30);
                  pbVar24 = pbVar17;
                  if (pbVar17 == (byte *)0x2) {
                    *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                    *(byte **)(unaff_x29 + -0x78) = pbVar31;
                    *(byte **)(unaff_x29 + -0x90) = pbVar18;
                    *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                    *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                    *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                    goto LAB_100eaed14;
                  }
                }
              }
              else {
                if (in_stack_00000388 != (byte *)0x8000000000000000) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(undefined **)(unaff_x29 + -0x70) = &UNK_108cbbc01;
                  *(undefined8 *)(unaff_x29 + -0x68) = 5;
                  pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                  goto LAB_100eaee88;
                }
                FUN_101355020(&stack0x000002f0,pbVar30);
                pbVar25 = pbVar13;
                in_stack_00000388 = pbVar17;
                pbVar35 = pbVar11;
                pbVar10 = pbVar11;
                pbVar20 = pbVar17;
                if (pbVar17 == (byte *)0x8000000000000000) {
                  *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                  *(byte **)(unaff_x29 + -0x78) = pbVar31;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  in_stack_00000388 = (byte *)0x8000000000000000;
                  goto LAB_100eaed14;
                }
              }
            }
            else if (bVar19 == 6) {
              if (in_stack_00000080 != (byte *)0x8000000000000001) {
                *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
                *(byte **)(unaff_x29 + -0x78) = pbVar31;
                *(byte **)(unaff_x29 + -0x90) = pbVar18;
                *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
                *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca156d;
                *(undefined8 *)(unaff_x29 + -0x68) = 7;
                pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
                bVar7 = true;
                pbVar16 = (byte *)0x1;
                goto joined_r0x000100eb1240;
              }
              bVar19 = *pbVar30;
              in_stack_00000080 = (byte *)0x8000000000000000;
              if (bVar19 == 0x10) {
LAB_100eaea80:
                in_stack_00000070 = (byte *)0x8000000000000000;
                pbVar3 = in_stack_00000070;
              }
              else {
                if (bVar19 == 0x11) {
                  FUN_1004e02c0(&stack0x000002f0,*(undefined8 *)(pbVar16 + lVar32 + 0x28));
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100eaea80;
                  FUN_1004e02c0(&stack0x000002f0,pbVar30);
                }
                if (pbVar17 != (byte *)0x8000000000000000) {
                  pbVar31 = pbVar13;
                }
                in_stack_00000080 = pbVar17;
                if ((long)pbVar17 < -0x7ffffffffffffffe) {
                  in_stack_00000080 = (byte *)0x8000000000000001;
                }
                in_stack_00000050 = pbVar11;
                pbVar3 = in_stack_00000080;
                if (in_stack_00000080 == (byte *)0x8000000000000001) {
                  *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
                  *(byte **)(unaff_x29 + -0x90) = pbVar18;
                  *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
                  bVar7 = true;
                  pbVar16 = (byte *)0x1;
                  goto LAB_100eaeee8;
                }
              }
            }
LAB_100eae88c:
            in_stack_00000070 = pbVar3;
            in_stack_00000068 = pbVar20;
            in_stack_00000060 = pbVar10;
            in_stack_00000058 = pbVar35;
            in_stack_00000048 = pbVar33;
            in_stack_00000040 = pbVar23;
            lVar32 = lVar32 + 0x40;
            pbVar18 = pbVar25;
          } while (lVar21 - lVar32 != 0);
          *(byte **)(unaff_x29 + -0x80) = in_stack_00000050;
          *(byte **)(unaff_x29 + -0x78) = pbVar31;
          *(byte **)(unaff_x29 + -0x90) = pbVar25;
          *(byte **)(unaff_x29 + -0x88) = in_stack_00000070;
          *(byte **)(unaff_x29 + -0xa0) = in_stack_00000068;
          *(byte **)(unaff_x29 + -0x98) = in_stack_00000060;
          pbVar29 = in_stack_00000058;
          if (((ulong)in_stack_00000078 & 1) == 0) goto LAB_100eaee44;
          bVar7 = pbVar27 == (byte *)0x8000000000000002;
          pbVar18 = (byte *)0x8000000000000001;
          if (!bVar7) {
            pbVar18 = pbVar27;
          }
          pbVar23 = (byte *)0x8000000000000001;
          if (in_stack_00000088 != (byte *)0x8000000000000002) {
            pbVar23 = in_stack_00000088;
          }
          pbVar16 = (byte *)(ulong)(in_stack_00000088 == (byte *)0x8000000000000002);
          if (in_stack_00000388 != (byte *)0x8000000000000000) {
            in_stack_00000280 = (byte *)0x0;
            if (pbVar24 != (byte *)0x2) {
              in_stack_00000280 = pbVar24;
            }
            pbVar35 = (byte *)0x0;
            if (pbVar26 != (byte *)0x2) {
              pbVar35 = pbVar26;
            }
            in_stack_00000288 = in_stack_00000038;
            in_stack_00000298 = in_stack_00000058;
            unaff_x23 = pbVar25;
            pbVar17 = (byte *)0x8000000000000000;
            in_stack_000002b0 = in_stack_00000050;
            unaff_x24 = pbVar31;
            in_stack_000002c8 = in_stack_00000048;
            in_stack_000002e0 = in_stack_00000040;
            if (in_stack_00000080 != (byte *)0x8000000000000001) {
              pbVar17 = in_stack_00000080;
            }
            goto LAB_100eaf308;
          }
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108cbbc01;
          *(undefined8 *)(unaff_x29 + -0x68) = 5;
          pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
          if ((-0x7fffffffffffffff < (long)pbVar23) && (pbVar23 != (byte *)0x0)) {
            _free(in_stack_00000040);
          }
          in_stack_00000388 = (byte *)0x8000000000000000;
          if ((-0x7fffffffffffffff < (long)pbVar18) && (pbVar18 != (byte *)0x0)) {
            _free(in_stack_00000048);
          }
        }
LAB_100eaee8c:
        if (in_stack_00000080 != (byte *)0x8000000000000001) {
joined_r0x000100eb1240:
          if (in_stack_00000080 != (byte *)0x8000000000000000) {
            if (pbVar31 != (byte *)0x0) {
              pbVar18 = in_stack_00000050 + 8;
              do {
                if (*(long *)(pbVar18 + -8) != 0) {
                  _free(*(undefined8 *)pbVar18);
                }
                pbVar18 = pbVar18 + 0x18;
                pbVar31 = pbVar31 + -1;
              } while (pbVar31 != (byte *)0x0);
            }
            pbVar31 = (byte *)0x0;
            if (in_stack_00000080 != (byte *)0x0) {
              _free(in_stack_00000050);
            }
          }
        }
LAB_100eaeee8:
        pbVar35 = (byte *)0x2;
        if (in_stack_00000388 != (byte *)0x8000000000000000) {
          if (pbVar25 != (byte *)0x0) {
            pbVar18 = pbVar29 + 0x20;
            pbVar23 = pbVar25;
            do {
              if (*(long *)(pbVar18 + -0x20) != 0) {
                _free(*(undefined8 *)(pbVar18 + -0x18));
              }
              if (*(long *)(pbVar18 + -8) != 0) {
                _free(*(undefined8 *)pbVar18);
              }
              pbVar18 = pbVar18 + 0x30;
              pbVar23 = pbVar23 + -1;
              pbVar25 = (byte *)0x0;
            } while (pbVar23 != (byte *)0x0);
          }
          if (in_stack_00000388 != (byte *)0x0) {
            _free(pbVar29);
          }
        }
        iVar22 = 0;
        if (in_stack_00000088 != (byte *)0x8000000000000002) {
          iVar22 = (int)pbVar16;
        }
        if (((iVar22 == 1) && (-0x7fffffffffffffff < (long)in_stack_00000088)) &&
           (in_stack_00000088 != (byte *)0x0)) {
          _free(in_stack_00000040);
        }
        bVar1 = false;
        if (pbVar27 != (byte *)0x8000000000000002) {
          bVar1 = bVar7;
        }
        in_stack_00000030 = pbVar11;
        in_stack_00000388 = in_stack_00000290;
        pbVar17 = in_stack_000002a8;
        pbVar18 = pbVar28;
        in_stack_00000010 = in_stack_000002d0;
        pbVar23 = pbVar34;
        in_stack_00000018 = in_stack_000002e8;
        if (((bVar1) && (-0x7fffffffffffffff < (long)pbVar27)) &&
           (pbVar24 = in_stack_00000048, pbVar27 != (byte *)0x0)) {
LAB_100eaefa4:
          pbVar35 = (byte *)0x2;
          _free(pbVar24);
          in_stack_00000030 = pbVar11;
          in_stack_00000388 = in_stack_00000290;
          pbVar17 = in_stack_000002a8;
          pbVar18 = pbVar28;
          in_stack_00000010 = in_stack_000002d0;
          pbVar23 = pbVar34;
          in_stack_00000018 = in_stack_000002e8;
          in_stack_00000300 = pbVar13;
        }
        goto LAB_100eaf308;
      }
      FUN_108855c40(&stack0x000001c8,unaff_x29 + -0x70,&UNK_10b213b88);
      pbVar16 = pbVar26;
    }
    _cStack00000000000001e8 = 2;
    FUN_100d079ec(&stack0x000001e8);
    pbVar24 = (byte *)FUN_1088561c0(&UNK_108cc47d6,0x45);
    FUN_100e077ec(&stack0x000001c8);
  }
  in_stack_000000c0 = (byte *)0x5;
  in_stack_000000c8 = pbVar24;
  FUN_100ce2354(&stack0x000000c0);
  lVar32 = in_stack_000000b8;
  pbVar23 = in_stack_000000b0;
  pbVar18 = in_stack_00000308;
  pbVar29 = in_stack_00000320;
  if (iStack0000000000000090 == 0x14) {
    if (in_stack_000000b8 == 0) {
      in_stack_00000070 = (byte *)FUN_1087e422c(0,&UNK_10b22ea28,&UNK_10b20a590);
    }
    else {
      in_stack_00000070 = (byte *)FUN_1013a1c00(in_stack_000000b0);
      if (in_stack_00000070 == (byte *)0x0) {
        if (lVar32 == 1) {
          in_stack_00000070 = (byte *)FUN_1087e422c(1,&UNK_10b22ea28,&UNK_10b20a590);
          goto LAB_100eaf87c;
        }
        bVar19 = pbVar23[0x20];
        pbVar27 = pbVar24;
        pbVar28 = (byte *)0x8000000000000001;
        in_stack_00000038 = pbVar31;
        if (bVar19 != 0x10) {
          if (bVar19 == 0x11) {
            FUN_1004e07f8(&stack0x000000c0,*(undefined8 *)(pbVar23 + 0x28));
          }
          else {
            if (bVar19 == 0x12) goto LAB_100eafccc;
            FUN_1004e07f8(&stack0x000000c0,pbVar23 + 0x20);
          }
          pbVar27 = in_stack_000000c8;
          pbVar28 = in_stack_000000c0;
          in_stack_00000038 = in_stack_000000d0;
          in_stack_00000070 = in_stack_000000c8;
          if (in_stack_000000c0 == (byte *)0x8000000000000000) goto LAB_100eaf87c;
        }
LAB_100eafccc:
        if (lVar32 == 2) {
          in_stack_00000070 = (byte *)FUN_1087e422c(2,&UNK_10b22ea28,&UNK_10b20a590);
        }
        else {
          bVar19 = pbVar23[0x40];
          in_stack_00000058 = pbVar25;
          pbVar25 = (byte *)0x8000000000000001;
          if (bVar19 != 0x10) {
            if (bVar19 == 0x11) {
              FUN_1004e07f8(&stack0x000000c0,*(undefined8 *)(pbVar23 + 0x48));
            }
            else {
              if (bVar19 == 0x12) goto LAB_100eafe68;
              FUN_1004e07f8(&stack0x000000c0,pbVar23 + 0x40);
            }
            in_stack_00000070 = in_stack_000000c8;
            if (in_stack_000000c0 == (byte *)0x8000000000000000) goto LAB_100eafcfc;
            _iStack0000000000000090 = in_stack_000000d0;
            in_stack_00000058 = in_stack_000000c8;
            pbVar25 = in_stack_000000c0;
          }
LAB_100eafe68:
          if (lVar32 == 3) {
            pbVar34 = (byte *)FUN_1087e422c(3,&UNK_10b22ea28,&UNK_10b20a590);
          }
          else {
            in_stack_00000068 = (byte *)FUN_1004e02c0(&stack0x000000c0,pbVar23 + 0x60);
            pbVar24 = in_stack_000000d0;
            in_stack_00000070 = in_stack_000000c8;
            pbVar31 = in_stack_000000c0;
            pbVar16 = (byte *)0x8000000000000000;
            pbVar34 = in_stack_000000c8;
            if (in_stack_000000c0 != (byte *)0x8000000000000000) {
              if (lVar32 != 4) {
                bVar19 = pbVar23[0x80];
                if (bVar19 == 0x10) {
                  pbVar18 = (byte *)0x8000000000000000;
                }
                else {
                  if (bVar19 == 0x11) {
                    FUN_1004e02c0(&stack0x000000c0,*(undefined8 *)(pbVar23 + 0x88));
                  }
                  else {
                    pbVar18 = (byte *)0x8000000000000000;
                    if (bVar19 == 0x12) goto LAB_100eb0708;
                    FUN_1004e02c0(&stack0x000000c0,pbVar23 + 0x80);
                  }
                  pbVar18 = in_stack_000000c0;
                  if ((long)in_stack_000000c0 < -0x7ffffffffffffffe) {
                    pbVar18 = (byte *)0x8000000000000001;
                  }
                  pbVar34 = in_stack_000000c8;
                  in_stack_00000068 = in_stack_000000c8;
                  pbVar16 = in_stack_000000d0;
                  if (pbVar18 + 0x7fffffffffffffff < (byte *)0x2) goto LAB_100eb06bc;
                }
LAB_100eb0708:
                pbVar29 = pbVar28;
                in_stack_00000328 = pbVar27;
                if (pbVar31 != (byte *)0x8000000000000000) {
                  in_stack_00000118 = _iStack0000000000000090;
                  in_stack_000000c0 = pbVar31;
                  in_stack_000000c8 = in_stack_00000070;
                  in_stack_000000d0 = pbVar24;
                  in_stack_000000d8 = pbVar18;
                  in_stack_000000e0 = in_stack_00000068;
                  in_stack_000000e8 = pbVar16;
                  in_stack_000000f0 = pbVar28;
                  in_stack_000000f8 = pbVar27;
                  in_stack_00000100 = in_stack_00000038;
                  in_stack_00000108 = pbVar25;
                  in_stack_00000110 = in_stack_00000058;
                  if (lVar32 != 5) {
                    in_stack_00000070 =
                         (byte *)FUN_1087e422c((lVar32 + 0x7fffffffffffffbU & 0x7ffffffffffffff) + 5
                                               ,&stack0x00000270,&UNK_10b23a1b0);
                    pbVar31 = (byte *)0x8000000000000000;
                    func_0x000100e2bcc0(&stack0x000000c0);
                  }
                }
                goto LAB_100eafadc;
              }
              pbVar34 = (byte *)FUN_1087e422c(4,&UNK_10b22ea28,&UNK_10b20a590);
LAB_100eb06bc:
              if (pbVar24 != (byte *)0x0) {
                pbVar18 = in_stack_00000070 + 8;
                do {
                  if (*(long *)(pbVar18 + -8) != 0) {
                    _free(*(undefined8 *)pbVar18);
                  }
                  pbVar18 = pbVar18 + 0x18;
                  pbVar24 = pbVar24 + -1;
                } while (pbVar24 != (byte *)0x0);
              }
              if (pbVar31 != (byte *)0x0) {
                _free(in_stack_00000070);
              }
            }
          }
          in_stack_00000070 = pbVar34;
          if ((pbVar25 != (byte *)0x8000000000000001) && (pbVar25 != (byte *)0x0)) {
            _free(in_stack_00000058);
          }
        }
LAB_100eafcfc:
        pbVar31 = (byte *)0x8000000000000000;
        pbVar24 = in_stack_00000300;
        pbVar18 = in_stack_00000308;
        in_stack_00000068 = in_stack_00000310;
        pbVar16 = in_stack_00000318;
        in_stack_00000038 = in_stack_00000330;
        pbVar25 = in_stack_00000338;
        in_stack_00000058 = in_stack_00000340;
        _iStack0000000000000090 = in_stack_00000348;
        if ((pbVar28 != (byte *)0x8000000000000001) && (pbVar28 != (byte *)0x0)) {
          _free(pbVar27);
        }
        goto LAB_100eafadc;
      }
    }
LAB_100eaf87c:
    pbVar31 = (byte *)0x8000000000000000;
    pbVar24 = in_stack_00000300;
    in_stack_00000068 = in_stack_00000310;
    pbVar16 = in_stack_00000318;
    in_stack_00000038 = in_stack_00000330;
    pbVar25 = in_stack_00000338;
    in_stack_00000058 = in_stack_00000340;
    _iStack0000000000000090 = in_stack_00000348;
LAB_100eafadc:
    if (pbVar31 != (byte *)0x8000000000000000) {
      _cStack00000000000001e8 = 4;
      in_stack_00000098[0xd] = in_stack_00000250;
      in_stack_00000098[0xc] = _iStack0000000000000090;
      in_stack_00000098[0xf] = in_stack_00000260;
      in_stack_00000098[0xe] = in_stack_00000258;
      in_stack_00000098[0x10] = in_stack_00000268;
      in_stack_00000098[5] = in_stack_00000068;
      in_stack_00000098[4] = pbVar18;
      in_stack_00000098[7] = pbVar29;
      in_stack_00000098[6] = pbVar16;
      in_stack_00000098[9] = in_stack_00000038;
      in_stack_00000098[8] = in_stack_00000328;
      in_stack_00000098[0xb] = in_stack_00000058;
      in_stack_00000098[10] = pbVar25;
      in_stack_00000098[1] = pbVar31;
      *in_stack_00000098 = 4;
      in_stack_00000098[3] = pbVar24;
      in_stack_00000098[2] = in_stack_00000070;
      goto LAB_100eafb78;
    }
  }
  else {
    if (iStack0000000000000090 == 0x15) {
      in_stack_00000150 = (byte *)0x8000000000000000;
      if (in_stack_000000b8 == 0) {
        in_stack_00000150 = (byte *)0x8000000000000000;
        pbVar27 = (byte *)0x8000000000000001;
        pbVar31 = (byte *)0x8000000000000000;
        pbVar34 = (byte *)0x8000000000000002;
        pbVar28 = (byte *)0x8000000000000002;
        in_stack_00000070 = in_stack_000000b0;
LAB_100eaf994:
        _iStack00000000000001c8 = &UNK_108cde34c;
        in_stack_000001d0 = (byte *)0x4;
        in_stack_000000c0 = (byte *)&stack0x000001c8;
        in_stack_000000c8 = &DAT_100c7b3a0;
        pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000c0);
        pbVar17 = pbVar24;
LAB_100eaf9c4:
        uVar9 = true;
        uVar8 = true;
      }
      else {
        lVar32 = 0;
        bVar7 = false;
        lVar21 = in_stack_000000b8 * 0x40;
        pbVar27 = (byte *)0x8000000000000001;
        pbVar31 = (byte *)0x8000000000000000;
        pbVar34 = (byte *)0x8000000000000002;
        pbVar28 = (byte *)0x8000000000000002;
        in_stack_00000080 = (byte *)0x8000000000000000;
        pbVar17 = pbVar24;
        do {
          pbVar25 = pbVar23 + lVar32;
          pbVar29 = pbVar25 + 0x20;
          bVar19 = *pbVar25;
          if (bVar19 < 0xd) {
            if (bVar19 == 1) {
              bVar19 = pbVar23[lVar32 + 1];
              if (4 < bVar19) {
                bVar19 = 5;
              }
              in_stack_000000c0 = (byte *)((ulong)CONCAT61(in_stack_000000c0._2_6_,bVar19) << 8);
            }
            else {
              if (bVar19 != 4) {
                if (bVar19 == 0xc) {
                  FUN_100b46010(&stack0x000000c0,*(undefined8 *)(pbVar23 + lVar32 + 0x10),
                                *(undefined8 *)(pbVar23 + lVar32 + 0x18));
                  goto joined_r0x000100eaf450;
                }
LAB_100eaf728:
                in_stack_000000c8 = (byte *)FUN_108855c40(pbVar25,unaff_x29 + -0x70,&UNK_10b214848);
                in_stack_000000c0 = (byte *)CONCAT71(in_stack_000000c0._1_7_,1);
                goto LAB_100eaf74c;
              }
              uVar15 = *(ulong *)(pbVar23 + lVar32 + 8);
              if (4 < uVar15) {
                uVar15 = 5;
              }
              in_stack_000000c0 =
                   (byte *)((ulong)CONCAT61(in_stack_000000c0._2_6_,(char)uVar15) << 8);
            }
          }
          else {
            if (bVar19 == 0xd) {
              FUN_100b46010(&stack0x000000c0,*(undefined8 *)(pbVar23 + lVar32 + 8),
                            *(undefined8 *)(pbVar23 + lVar32 + 0x10));
            }
            else {
              if (bVar19 == 0xe) {
                uVar12 = *(undefined8 *)(pbVar23 + lVar32 + 0x10);
                uVar14 = *(undefined8 *)(pbVar23 + lVar32 + 0x18);
              }
              else {
                if (bVar19 != 0xf) goto LAB_100eaf728;
                uVar12 = *(undefined8 *)(pbVar23 + lVar32 + 8);
                uVar14 = *(undefined8 *)(pbVar23 + lVar32 + 0x10);
              }
              FUN_100b45e00(&stack0x000000c0,uVar12,uVar14);
            }
joined_r0x000100eaf450:
            if (((ulong)in_stack_000000c0 & 1) != 0) {
LAB_100eaf74c:
              uVar9 = true;
              uVar8 = true;
              in_stack_00000160 = pbVar17;
              in_stack_00000158 = in_stack_00000078;
              in_stack_00000150 = in_stack_00000080;
              pbVar11 = in_stack_000000c8;
              goto joined_r0x000100eafd8c;
            }
          }
          pbVar24 = pbVar17;
          pbVar25 = in_stack_00000070;
          pbVar13 = in_stack_00000078;
          pbVar26 = in_stack_00000080;
          if (in_stack_000000c0._1_1_ < 3) {
            if (in_stack_000000c0._1_1_ == 0) {
              if (bVar7) {
                in_stack_00000158 = in_stack_00000078;
                in_stack_00000150 = in_stack_00000080;
                _iStack00000000000001c8 = &UNK_108cde34c;
                in_stack_000001d0 = (byte *)0x4;
                in_stack_000000c0 = (byte *)&stack0x000001c8;
                in_stack_000000c8 = &DAT_100c7b3a0;
                in_stack_00000160 = pbVar17;
                pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000c0);
                goto LAB_100eaf9c4;
              }
              pbVar11 = (byte *)FUN_1013a1c00(pbVar29);
              if (pbVar11 == (byte *)0x0) {
                bVar7 = true;
                goto LAB_100eaf404;
              }
joined_r0x000100eafca0:
              uVar8 = true;
              uVar9 = true;
              in_stack_00000160 = pbVar17;
              in_stack_00000158 = in_stack_00000078;
              in_stack_00000150 = in_stack_00000080;
              goto joined_r0x000100eafd8c;
            }
            if (in_stack_000000c0._1_1_ == 1) {
              if (pbVar34 != (byte *)0x8000000000000002) {
                in_stack_00000158 = in_stack_00000078;
                in_stack_00000150 = in_stack_00000080;
                _iStack00000000000001c8 = &UNK_108ca1558;
                in_stack_000001d0 = (byte *)0x5;
                in_stack_000000c0 = (byte *)&stack0x000001c8;
                in_stack_000000c8 = &DAT_100c7b3a0;
                in_stack_00000160 = pbVar17;
                pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000c0);
                goto LAB_100eaf9c4;
              }
              bVar19 = *pbVar29;
              if (bVar19 == 0x10) {
LAB_100eaf548:
                in_stack_00000060 = in_stack_00000050;
                pbVar34 = (byte *)0x8000000000000001;
              }
              else {
                if (bVar19 == 0x11) {
                  FUN_1004e07f8(&stack0x000000c0,*(undefined8 *)(pbVar23 + lVar32 + 0x28));
                }
                else {
                  if (bVar19 == 0x12) goto LAB_100eaf548;
                  FUN_1004e07f8(&stack0x000000c0,pbVar29);
                }
                in_stack_00000050 = in_stack_000000c8;
                if (in_stack_000000c0 == (byte *)0x8000000000000000) {
                  pbVar34 = (byte *)0x8000000000000002;
                  pbVar11 = in_stack_000000c8;
                  goto joined_r0x000100eafca0;
                }
                in_stack_00000038 = in_stack_000000d0;
                in_stack_00000060 = in_stack_000000c8;
                pbVar34 = in_stack_000000c0;
              }
            }
            else {
              if (pbVar28 != (byte *)0x8000000000000002) {
                in_stack_00000158 = in_stack_00000078;
                in_stack_00000150 = in_stack_00000080;
                _iStack00000000000001c8 = &UNK_108ca155d;
                in_stack_000001d0 = (byte *)0xb;
                in_stack_000000c0 = (byte *)&stack0x000001c8;
                in_stack_000000c8 = &DAT_100c7b3a0;
                in_stack_00000160 = pbVar17;
                pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000c0);
                goto LAB_100eaf9c4;
              }
              bVar19 = *pbVar29;
              if (bVar19 == 0x10) {
LAB_100eaf630:
                in_stack_00000058 = in_stack_00000048;
                pbVar28 = (byte *)0x8000000000000001;
                goto LAB_100eaf404;
              }
              if (bVar19 == 0x11) {
                FUN_1004e07f8(&stack0x000000c0,*(undefined8 *)(pbVar23 + lVar32 + 0x28));
              }
              else {
                if (bVar19 == 0x12) goto LAB_100eaf630;
                FUN_1004e07f8(&stack0x000000c0,pbVar29);
              }
              in_stack_00000048 = in_stack_000000c8;
              if (in_stack_000000c0 == (byte *)0x8000000000000000) {
                uVar9 = true;
                pbVar28 = (byte *)0x8000000000000002;
                uVar8 = true;
                in_stack_00000160 = pbVar17;
                in_stack_00000158 = in_stack_00000078;
                in_stack_00000150 = in_stack_00000080;
                pbVar11 = in_stack_000000c8;
                goto joined_r0x000100eafd8c;
              }
              in_stack_00000040 = in_stack_000000d0;
              in_stack_00000058 = in_stack_000000c8;
              pbVar28 = in_stack_000000c0;
            }
          }
          else if (in_stack_000000c0._1_1_ == 3) {
            if (pbVar31 != (byte *)0x8000000000000000) {
              in_stack_00000158 = in_stack_00000078;
              in_stack_00000150 = in_stack_00000080;
              _iStack00000000000001c8 = &UNK_108cde45c;
              in_stack_000001d0 = (byte *)0x4;
              in_stack_000000c0 = (byte *)&stack0x000001c8;
              in_stack_000000c8 = &DAT_100c7b3a0;
              in_stack_00000160 = pbVar17;
              pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000c0);
              goto LAB_100eaf9c4;
            }
            FUN_1004e02c0(&stack0x000000c0,pbVar29);
            pbVar24 = in_stack_000000d0;
            pbVar31 = in_stack_000000c0;
            pbVar25 = in_stack_000000c8;
            pbVar13 = in_stack_000000c8;
            pbVar26 = in_stack_000000c0;
            if (in_stack_000000c0 == (byte *)0x8000000000000000) {
              uVar9 = true;
              uVar8 = true;
              pbVar24 = pbVar17;
              in_stack_00000160 = pbVar17;
              pbVar11 = in_stack_000000c8;
              goto joined_r0x000100eafc5c;
            }
          }
          else if (in_stack_000000c0._1_1_ == 4) {
            if (pbVar27 != (byte *)0x8000000000000001) {
              in_stack_00000158 = in_stack_00000078;
              in_stack_00000150 = in_stack_00000080;
              _iStack00000000000001c8 = &UNK_108cba994;
              in_stack_000001d0 = (byte *)0x9;
              in_stack_000000c0 = (byte *)&stack0x000001c8;
              in_stack_000000c8 = &DAT_100c7b3a0;
              in_stack_00000160 = pbVar17;
              pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000c0);
              uVar8 = true;
              uVar9 = true;
              goto joined_r0x000100eb09d0;
            }
            bVar19 = *pbVar29;
            pbVar27 = (byte *)0x8000000000000000;
            if (bVar19 != 0x10) {
              if (bVar19 == 0x11) {
                FUN_1004e02c0(&stack0x000000c0,*(undefined8 *)(pbVar23 + lVar32 + 0x28));
              }
              else {
                if (bVar19 == 0x12) goto LAB_100eaf404;
                FUN_1004e02c0(&stack0x000000c0,pbVar29);
              }
              in_stack_00000068 = in_stack_000000c8;
              if (in_stack_000000c0 != (byte *)0x8000000000000000) {
                pbVar16 = in_stack_000000d0;
              }
              pbVar27 = in_stack_000000c0;
              if ((long)in_stack_000000c0 < -0x7ffffffffffffffe) {
                pbVar27 = (byte *)0x8000000000000001;
              }
              if (pbVar27 == (byte *)0x8000000000000001) {
                in_stack_00000158 = in_stack_00000078;
                in_stack_00000150 = in_stack_00000080;
                uVar8 = true;
                uVar9 = true;
                in_stack_00000160 = pbVar17;
                pbVar11 = in_stack_000000c8;
                goto LAB_100eafa2c;
              }
            }
          }
LAB_100eaf404:
          in_stack_00000080 = pbVar26;
          in_stack_00000078 = pbVar13;
          in_stack_00000070 = pbVar25;
          lVar32 = lVar32 + 0x40;
          pbVar17 = pbVar24;
        } while (lVar21 - lVar32 != 0);
        in_stack_00000158 = in_stack_00000078;
        in_stack_00000150 = in_stack_00000080;
        in_stack_00000160 = pbVar24;
        if (!bVar7) goto LAB_100eaf994;
        uVar8 = pbVar34 == (byte *)0x8000000000000002;
        pbVar29 = (byte *)0x8000000000000001;
        if (!(bool)uVar8) {
          pbVar29 = pbVar34;
        }
        uVar9 = pbVar28 == (byte *)0x8000000000000002;
        pbVar25 = (byte *)0x8000000000000001;
        if (!(bool)uVar9) {
          pbVar25 = pbVar28;
        }
        if (pbVar31 != (byte *)0x8000000000000000) {
          pbVar18 = (byte *)0x8000000000000000;
          in_stack_00000328 = in_stack_00000060;
          _iStack0000000000000090 = in_stack_00000040;
          if (pbVar27 != (byte *)0x8000000000000001) {
            pbVar18 = pbVar27;
          }
          goto LAB_100eafadc;
        }
        _iStack00000000000001c8 = &UNK_108cde45c;
        in_stack_000001d0 = (byte *)0x4;
        in_stack_000000c0 = (byte *)&stack0x000001c8;
        in_stack_000000c8 = &DAT_100c7b3a0;
        pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000c0);
        if ((-0x7fffffffffffffff < (long)pbVar25) && (pbVar25 != (byte *)0x0)) {
          _free(in_stack_00000058);
        }
        pbVar31 = (byte *)0x8000000000000000;
        if ((-0x7fffffffffffffff < (long)pbVar29) && (pbVar29 != (byte *)0x0)) {
          _free(in_stack_00000060);
          in_stack_00000078 = in_stack_00000158;
          in_stack_00000080 = in_stack_00000150;
joined_r0x000100eafc5c:
          pbVar31 = (byte *)0x8000000000000000;
          pbVar17 = pbVar24;
          in_stack_00000158 = in_stack_00000078;
          in_stack_00000150 = in_stack_00000080;
        }
      }
joined_r0x000100eafd8c:
      if (pbVar27 != (byte *)0x8000000000000001) {
joined_r0x000100eb09d0:
        if (pbVar27 != (byte *)0x8000000000000000) {
          if (pbVar16 != (byte *)0x0) {
            pbVar25 = in_stack_00000068 + 8;
            do {
              if (*(long *)(pbVar25 + -8) != 0) {
                _free(*(undefined8 *)pbVar25);
              }
              pbVar25 = pbVar25 + 0x18;
              pbVar16 = pbVar16 + -1;
            } while (pbVar16 != (byte *)0x0);
          }
          if (pbVar27 != (byte *)0x0) {
            _free(in_stack_00000068);
          }
        }
      }
LAB_100eafa2c:
      pbVar25 = (byte *)0x8000000000000000;
      if (pbVar31 != (byte *)0x8000000000000000) {
        if (pbVar17 != (byte *)0x0) {
          pbVar29 = in_stack_00000070 + 8;
          do {
            if (*(long *)(pbVar29 + -8) != 0) {
              _free(*(undefined8 *)pbVar29);
            }
            pbVar29 = pbVar29 + 0x18;
            pbVar17 = pbVar17 + -1;
          } while (pbVar17 != (byte *)0x0);
        }
        if (pbVar31 != (byte *)0x0) {
          _free(in_stack_00000070);
        }
      }
      bVar7 = false;
      if (pbVar28 != (byte *)0x8000000000000002) {
        bVar7 = (bool)uVar9;
      }
      if (((bVar7) && (-0x7fffffffffffffff < (long)pbVar28)) && (pbVar28 != (byte *)0x0)) {
        _free(in_stack_00000058);
      }
      bVar7 = false;
      if (pbVar34 != (byte *)0x8000000000000002) {
        bVar7 = (bool)uVar8;
      }
      pbVar31 = pbVar25;
      in_stack_00000070 = pbVar11;
      pbVar24 = in_stack_00000300;
      in_stack_00000068 = in_stack_00000310;
      pbVar16 = in_stack_00000318;
      pbVar29 = in_stack_00000320;
      in_stack_00000038 = in_stack_00000330;
      pbVar25 = in_stack_00000338;
      in_stack_00000058 = in_stack_00000340;
      _iStack0000000000000090 = in_stack_00000348;
      if (((bVar7) && (-0x7fffffffffffffff < (long)pbVar34)) && (pbVar34 != (byte *)0x0)) {
        _free(in_stack_00000060);
      }
      goto LAB_100eafadc;
    }
    FUN_108855c40(&stack0x000000a0,unaff_x29 + -0x70,&UNK_10b213828);
  }
  _cStack00000000000001e8 = 5;
  FUN_100ce2354(&stack0x000001e8);
  uVar12 = FUN_1088561c0(&UNK_108cc46ca,0x3a);
  *in_stack_00000098 = 5;
  in_stack_00000098[1] = uVar12;
LAB_100eafb78:
  FUN_100e077ec(&stack0x000000a0);
  return;
}

