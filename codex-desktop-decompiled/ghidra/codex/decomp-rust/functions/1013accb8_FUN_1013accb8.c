
void FUN_1013accb8(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *plVar7;
  long *unaff_x24;
  long lVar8;
  uint uVar9;
  long unaff_x29;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lStack0000000000000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000020;
  long *in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long *in_stack_000000a0;
  long *in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  ulong in_stack_00000138;
  long *in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long *in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  long *in_stack_000001d0;
  ulong in_stack_000001d8;
  long *in_stack_000001e0;
  
code_r0x0001013accb8:
  lStack0000000000000000 = FUN_108856088(s_duplicate_field_____108ac2973,param_2);
LAB_1013acc54:
  FUN_100de8910(unaff_x23 + 0x48);
  plVar7 = unaff_x24;
  if (in_stack_00000180 != (long *)0x8000000000000005) {
    FUN_100de6690(&stack0x00000180);
  }
LAB_1013acc7c:
  bVar3 = true;
joined_r0x0001013acc80:
  do {
    if (((long)unaff_x19 < 0) && ((unaff_x19 & 0xfffffffffffffffe) != 0x8000000000000004)) {
      FUN_100de6690(&stack0x00000138);
    }
    if (bVar3) {
joined_r0x0001013ace08:
      in_stack_000000a0 = in_stack_00000040;
      plVar7 = in_stack_000000a0;
      lVar12 = lStack0000000000000000;
      lVar8 = in_stack_000000f8;
      if (unaff_x20 != 0) {
        _free(in_stack_00000048);
        plVar7 = in_stack_000000a0;
        lVar12 = lStack0000000000000000;
        lVar8 = in_stack_000000f8;
      }
joined_r0x0001013acd28:
      in_stack_00000188 = lVar12;
      in_stack_000000a0 = plVar7;
      in_stack_000000f8 = lVar8;
      if (lVar8 != 0) {
        if (in_stack_00000108 != 0) {
          plVar10 = in_stack_000000f0 + 1;
          lVar12 = *in_stack_000000f0;
          uVar4 = CONCAT17(-(-1 < lVar12),
                           CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar12
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                  0x8080808080808080;
          plVar7 = in_stack_000000f0;
          lVar12 = in_stack_00000108;
          do {
            while (uVar4 == 0) {
              lVar5 = *plVar10;
              plVar7 = plVar7 + -0x20;
              plVar10 = plVar10 + 1;
              uVar4 = CONCAT17(-(-1 < lVar5),
                               CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar5 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar5 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar5 >> 8)),
                                                           -(-1 < (char)lVar5)))))))) &
                      0x8080808080808080;
            }
            uVar2 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
            if (*(long *)((long)plVar7 + uVar2 * -4 + -0x20) != 0) {
              _free(*(undefined8 *)((long)plVar7 + uVar2 * -4 + -0x18));
            }
            uVar4 = uVar4 - 1 & uVar4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (lVar8 * 0x21 != -0x29) {
          _free(in_stack_000000f0 + lVar8 * -4 + -4);
        }
      }
LAB_1013ace84:
      FUN_100de8910(&stack0x00000098);
      if (in_stack_00000050 != 0x8000000000000005) {
        FUN_100de6690(&stack0x00000050);
      }
LAB_1013acea4:
      in_stack_00000020[1] = in_stack_00000188;
      uVar6 = 1;
LAB_1013aceb0:
      *in_stack_00000020 = uVar6;
      return;
    }
    in_stack_00000120 = unaff_x20;
    in_stack_00000128 = in_stack_00000048;
    in_stack_00000130 = in_stack_00000038;
    FUN_1016e5b88(&stack0x000000f0,&stack0x00000120,plVar7);
    plVar7 = in_stack_00000030;
    plVar10 = in_stack_00000040;
    if (in_stack_00000040 == in_stack_00000030) {
LAB_1013ace18:
      in_stack_00000188 = in_stack_000000f8;
      in_stack_00000180 = in_stack_000000f0;
      in_stack_00000198 = in_stack_00000108;
      in_stack_00000190 = in_stack_00000100;
      in_stack_000001a8 = in_stack_00000118;
      in_stack_000001a0 = in_stack_00000110;
      in_stack_000000a0 = plVar10;
      if (in_stack_000000f0 == (long *)0x0) goto LAB_1013ace84;
      in_stack_000000c8 = in_stack_000000f8;
      in_stack_000000c0 = in_stack_000000f0;
      in_stack_000000d8 = in_stack_00000108;
      in_stack_000000d0 = in_stack_00000100;
      in_stack_000000e8 = in_stack_00000118;
      in_stack_000000e0 = in_stack_00000110;
      if (in_stack_00000030 != plVar7) {
        in_stack_00000188 = FUN_1087e422c(in_stack_00000008,&UNK_10b21cb90,&UNK_10b20a590);
        in_stack_00000180 = (long *)0x0;
        FUN_100cf8b3c(&stack0x000000c0);
      }
      FUN_100de8910(&stack0x00000098);
      if (in_stack_00000030 != plVar7) goto LAB_1013acea4;
      uVar6 = 0;
      in_stack_00000020[2] = in_stack_00000188;
      in_stack_00000020[1] = in_stack_00000180;
      in_stack_00000020[4] = in_stack_00000198;
      in_stack_00000020[3] = in_stack_00000190;
      in_stack_00000020[6] = in_stack_000001a8;
      in_stack_00000020[5] = in_stack_000001a0;
      goto LAB_1013aceb0;
    }
    plVar7 = in_stack_00000040 + 0xd;
    unaff_x20 = *in_stack_00000040;
    plVar10 = plVar7;
    if (unaff_x20 == -0x8000000000000000) goto LAB_1013ace18;
    in_stack_00000048 = in_stack_00000040[1];
    in_stack_00000038 = in_stack_00000040[2];
    lVar5 = in_stack_00000040[6];
    plVar10 = (long *)in_stack_00000040[5];
    in_stack_00000078 = in_stack_00000040[8];
    in_stack_00000070 = in_stack_00000040[7];
    in_stack_00000088 = in_stack_00000040[10];
    in_stack_00000080 = in_stack_00000040[9];
    in_stack_00000090 = in_stack_00000040[0xb];
    lVar13 = in_stack_00000040[4];
    unaff_x19 = in_stack_00000040[3];
    lVar12 = in_stack_00000048;
    in_stack_00000060 = plVar10;
    in_stack_00000068 = lVar5;
    in_stack_00000050 = unaff_x19;
    in_stack_00000058 = lVar13;
    lVar8 = in_stack_000000f8;
    if (unaff_x20 == -0x7fffffffffffffff) goto joined_r0x0001013acd28;
    in_stack_00000050 = 0x8000000000000005;
    if (unaff_x19 == 0x8000000000000005) {
      in_stack_000000a0 = plVar7;
      lStack0000000000000000 = FUN_1088561c0(&UNK_108cde170,0x10);
      in_stack_00000040 = in_stack_000000a0;
      goto joined_r0x0001013ace08;
    }
    lVar8 = in_stack_00000040[5];
    plVar11 = (long *)in_stack_00000040[4];
    in_stack_00000158 = in_stack_00000040[7];
    in_stack_00000150 = in_stack_00000040[6];
    lVar12 = in_stack_00000040[9];
    in_stack_00000160 = in_stack_00000040[8];
    in_stack_00000178 = in_stack_00000040[0xb];
    in_stack_00000170 = in_stack_00000040[10];
    uVar4 = unaff_x19 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x19) {
      uVar4 = 5;
    }
    in_stack_00000040 = plVar7;
    in_stack_00000138 = unaff_x19;
    in_stack_00000140 = plVar11;
    in_stack_00000148 = lVar8;
    in_stack_00000168 = lVar12;
    if (uVar4 == 4) {
      *(long **)(unaff_x29 + -0xb8) = plVar10;
      *(long **)(unaff_x29 + -0xb0) = plVar10;
      *(long *)(unaff_x29 + -0xa8) = lVar13;
      *(long **)(unaff_x29 + -0xa0) = plVar10 + lVar5 * 9;
      bVar3 = lVar5 != 0;
      plVar11 = plVar10;
      if (lVar5 == 0) {
LAB_1013acad8:
        plVar7 = (long *)0x3;
      }
      else {
        plVar11 = plVar10 + 9;
        plVar7 = (long *)*plVar10;
        *(long **)(unaff_x29 + -0xb0) = plVar11;
        if (plVar7 == (long *)0x8000000000000005) {
          plVar7 = (long *)0x3;
        }
        else {
          lVar8 = plVar10[1];
          *(long *)(unaff_x23 + 0x10) = plVar10[2];
          *(long *)(unaff_x23 + 8) = lVar8;
          lVar8 = plVar10[3];
          *(long *)(unaff_x23 + 0x20) = plVar10[4];
          *(long *)(unaff_x23 + 0x18) = lVar8;
          lVar8 = plVar10[5];
          *(long *)(unaff_x23 + 0x30) = plVar10[6];
          *(long *)(unaff_x23 + 0x28) = lVar8;
          lVar8 = plVar10[7];
          *(long *)(unaff_x23 + 0x40) = plVar10[8];
          *(long *)(unaff_x23 + 0x38) = lVar8;
          in_stack_00000180 = plVar7;
          FUN_1012dda4c(unaff_x29 + -0x70,&stack0x00000180);
          if ((*(byte *)(unaff_x29 + -0x70) & 1) != 0) {
            lStack0000000000000000 = *(long *)(unaff_x29 + -0x68);
            goto LAB_1013acad8;
          }
          plVar7 = (long *)(ulong)*(byte *)(unaff_x29 + -0x6f);
        }
        if (lVar5 == 1) {
          bVar3 = false;
        }
        else {
          lStack0000000000000000 = FUN_1087e422c(lVar5,&UNK_10b21cb80,&UNK_10b20a590);
          bVar3 = true;
        }
      }
      lVar8 = ((ulong)((long)(plVar10 + lVar5 * 9) - (long)plVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        FUN_100de6690(plVar11);
        plVar11 = plVar11 + 9;
      }
      if (lVar13 != 0) {
        _free(plVar10);
      }
      goto joined_r0x0001013acc80;
    }
    if (uVar4 != 5) break;
    if ((in_stack_00000158 != 0) && (in_stack_00000158 * 9 != -0x11)) {
      _free(in_stack_00000150 + in_stack_00000158 * -8 + -8);
    }
    lVar5 = lVar8 * 0x68;
    unaff_x24 = plVar11 + lVar8 * 0xd;
    in_stack_00000180 = (long *)0x8000000000000005;
    in_stack_000001c8 = plVar11;
    in_stack_000001d0 = plVar11;
    in_stack_000001d8 = unaff_x19;
    in_stack_000001e0 = unaff_x24;
    if (lVar8 == 0) {
      bVar3 = false;
      plVar7 = (long *)0x3;
    }
    else {
      uVar9 = 4;
      do {
        lVar5 = lVar5 + -0x68;
        plVar10 = plVar11 + 0xd;
        if (*plVar11 == -0x8000000000000000) {
          uVar1 = 3;
          if (uVar9 != 4) {
            uVar1 = uVar9;
          }
          plVar7 = (long *)(ulong)uVar1;
          if (lVar5 == 0) goto LAB_1013acb78;
          in_stack_000001d0 = plVar10;
          lStack0000000000000000 = FUN_1087e422c(lVar12,&UNK_10b21cb90,&UNK_10b20a590);
          bVar3 = true;
          goto LAB_1013acb7c;
        }
        in_stack_00000198 = plVar11[6];
        in_stack_00000190 = plVar11[5];
        in_stack_000001a8 = plVar11[8];
        in_stack_000001a0 = plVar11[7];
        in_stack_000001b8 = plVar11[10];
        in_stack_000001b0 = plVar11[9];
        in_stack_000001c0 = plVar11[0xb];
        in_stack_00000188 = plVar11[4];
        in_stack_00000180 = (long *)plVar11[3];
        if (plVar11[2] == 0xd) {
          bVar3 = *(long *)plVar11[1] != 0x6c61766f72707061 ||
                  *(long *)(plVar11[1] + 5) != 0x65646f6d5f6c6176;
        }
        else {
          bVar3 = true;
        }
        if (*plVar11 != 0) {
          _free();
        }
        plVar7 = in_stack_00000180;
        if (bVar3) {
          in_stack_00000180 = (long *)0x8000000000000005;
          if (plVar7 == (long *)0x8000000000000005) {
            in_stack_000001d0 = plVar11 + 0xd;
            lStack0000000000000000 = FUN_1088561c0(&UNK_108cde170,0x10);
            goto LAB_1013acc54;
          }
          *(long **)(unaff_x29 + -0xb8) = plVar7;
          uVar6 = *(undefined8 *)(unaff_x23 + 8);
          *(undefined8 *)(unaff_x21 + 0x10) = *(undefined8 *)(unaff_x23 + 0x10);
          *(undefined8 *)(unaff_x21 + 8) = uVar6;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x18);
          *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x23 + 0x20);
          *(undefined8 *)(unaff_x21 + 0x18) = uVar6;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x28);
          *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)(unaff_x23 + 0x30);
          *(undefined8 *)(unaff_x21 + 0x28) = uVar6;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x38);
          *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x23 + 0x40);
          *(undefined8 *)(unaff_x21 + 0x38) = uVar6;
          FUN_100de6690(unaff_x29 + -0xb8);
        }
        else {
          if (uVar9 != 4) {
            in_stack_000001d0 = plVar11 + 0xd;
            *(undefined **)(unaff_x29 + -0x70) = &UNK_108cac0ec;
            *(undefined8 *)(unaff_x29 + -0x68) = 0xd;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
            *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
            param_2 = unaff_x29 + -0xb8;
            goto code_r0x0001013accb8;
          }
          in_stack_00000180 = (long *)0x8000000000000005;
          if (plVar7 == (long *)0x8000000000000005) {
            in_stack_000001d0 = plVar11 + 0xd;
            lStack0000000000000000 = FUN_1088561c0(&UNK_108cde170,0x10);
            goto LAB_1013acc54;
          }
          *(long **)(unaff_x29 + -0xb8) = plVar7;
          uVar6 = *(undefined8 *)(unaff_x23 + 8);
          *(undefined8 *)(unaff_x21 + 0x10) = *(undefined8 *)(unaff_x23 + 0x10);
          *(undefined8 *)(unaff_x21 + 8) = uVar6;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x18);
          *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x23 + 0x20);
          *(undefined8 *)(unaff_x21 + 0x18) = uVar6;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x28);
          *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)(unaff_x23 + 0x30);
          *(undefined8 *)(unaff_x21 + 0x28) = uVar6;
          uVar6 = *(undefined8 *)(unaff_x23 + 0x38);
          *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x23 + 0x40);
          *(undefined8 *)(unaff_x21 + 0x38) = uVar6;
          FUN_1012dda4c(unaff_x29 + -0x70,unaff_x29 + -0xb8);
          if ((*(byte *)(unaff_x29 + -0x70) & 1) != 0) {
            in_stack_000001d0 = plVar11 + 0xd;
            lStack0000000000000000 = *(long *)(unaff_x29 + -0x68);
            goto LAB_1013acc54;
          }
          uVar9 = (uint)*(byte *)(unaff_x29 + -0x6f);
        }
        plVar11 = plVar11 + 0xd;
      } while (plVar11 != unaff_x24);
      uVar1 = 3;
      if (uVar9 != 4) {
        uVar1 = uVar9;
      }
      plVar7 = (long *)(ulong)uVar1;
LAB_1013acb78:
      bVar3 = false;
      in_stack_000001d0 = plVar10;
    }
LAB_1013acb7c:
    FUN_100de8910(unaff_x23 + 0x48);
  } while( true );
  lStack0000000000000000 = FUN_108832ea0(&stack0x00000138,unaff_x29 + -0x59,&UNK_10b21bf70);
  goto LAB_1013acc7c;
}

