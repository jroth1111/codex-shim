
/* WARNING: Type propagation algorithm not settling */

void FUN_1017be040(void)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *unaff_x22;
  undefined8 *puVar20;
  byte bVar21;
  long unaff_x23;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar24;
  long lVar25;
  long unaff_x29;
  byte *pbVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  byte *in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000050;
  long in_stack_00000058;
  long in_stack_00000060;
  byte in_stack_00000070;
  undefined3 uStack0000000000000071;
  undefined1 uStack0000000000000074;
  undefined3 uStack0000000000000075;
  long in_stack_00000078;
  byte *in_stack_00000080;
  long in_stack_00000088;
  byte in_stack_00000090;
  byte bStack0000000000000091;
  undefined2 uStack0000000000000092;
  undefined4 uStack0000000000000094;
  byte in_stack_00000098;
  undefined7 uStack0000000000000099;
  undefined1 uStack00000000000000a0;
  undefined7 uStack00000000000000a1;
  long in_stack_000000a8;
  long in_stack_000000b0;
  byte *in_stack_000000b8;
  byte *in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  byte *in_stack_00000108;
  byte *in_stack_00000110;
  byte bStack0000000000000120;
  undefined7 uStack0000000000000121;
  undefined1 uStack0000000000000128;
  undefined7 uStack0000000000000129;
  undefined1 uStack0000000000000130;
  undefined7 uStack0000000000000131;
  long in_stack_00000138;
  byte *in_stack_00000140;
  byte *in_stack_00000148;
  long in_stack_00000150;
  byte *in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  byte *in_stack_00000198;
  byte *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  byte *in_stack_000001e8;
  undefined8 in_stack_00000228;
  long in_stack_00000230;
  long in_stack_00000238;
  byte *in_stack_00000240;
  byte *in_stack_00000248;
  
  uVar8 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x00000090);
  *(undefined8 *)(unaff_x29 + -0x98) = uVar8;
  *(undefined1 *)(unaff_x29 + -0xa0) = 0x16;
  lVar14 = ((ulong)(in_stack_00000188 - in_stack_00000178) >> 5) + 1;
  lVar13 = in_stack_00000178;
  while (lVar14 = lVar14 + -1, lVar14 != 0) {
    func_0x0001017a6a48(lVar13);
    lVar13 = lVar13 + 0x20;
  }
  if (in_stack_00000180 != 0) {
    _free(in_stack_00000170);
  }
  bVar2 = *(byte *)(unaff_x29 + -0xa0);
  if (bVar2 == 0x16) {
    uVar8 = *(undefined8 *)(unaff_x29 + -0x98);
    goto LAB_1017bed40;
  }
  uStack0000000000000071 = (undefined3)*(undefined4 *)(unaff_x22 + 1);
  uStack0000000000000074 = (undefined1)*(undefined4 *)(unaff_x29 + -0x9c);
  uStack0000000000000075 = (undefined3)((uint)*(undefined4 *)(unaff_x29 + -0x9c) >> 8);
  lVar14 = *(long *)(unaff_x29 + -0x98);
  lVar13 = *(long *)(unaff_x29 + -0x88);
  pbVar26 = *(byte **)(unaff_x29 + -0x90);
  in_stack_00000070 = bVar2;
  in_stack_00000078 = lVar14;
  in_stack_00000080 = pbVar26;
  in_stack_00000088 = lVar13;
  if (bVar2 == 0x14) {
    pbVar18 = pbVar26;
    if (lVar13 == 0) {
LAB_1017be4b4:
      lVar9 = FUN_108878f3c(0,&UNK_10b259a60,&UNK_10b258940);
LAB_1017be4d0:
      in_stack_00000090 = 2;
      bStack0000000000000091 = 0;
      uStack0000000000000092 = 0;
      uStack0000000000000094 = 0;
      in_stack_00000098 = (byte)lVar9;
      uStack0000000000000099 = (undefined7)((ulong)lVar9 >> 8);
    }
    else {
      pbVar18 = pbVar26 + 0x20;
      if (*pbVar26 == 0x16) goto LAB_1017be4b4;
      uVar8 = *(undefined8 *)(pbVar26 + 1);
      uStack0000000000000099 = (undefined7)*(undefined8 *)(pbVar26 + 9);
      bStack0000000000000091 = (byte)uVar8;
      uStack0000000000000092 = (undefined2)((ulong)uVar8 >> 8);
      uStack0000000000000094 = (undefined4)((ulong)uVar8 >> 0x18);
      in_stack_00000098 = (byte)((ulong)uVar8 >> 0x38);
      in_stack_000000a8 = *(long *)(pbVar26 + 0x18);
      uStack00000000000000a0 = (undefined1)*(undefined8 *)(pbVar26 + 0x10);
      uStack00000000000000a1 = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x10) >> 8);
      in_stack_00000090 = *pbVar26;
      FUN_101778e20(&stack0x00000120,&stack0x00000090);
      lVar5 = CONCAT71(uStack0000000000000121,bStack0000000000000120);
      lVar9 = CONCAT71(uStack0000000000000129,uStack0000000000000128);
      if (lVar5 == -0x8000000000000000) goto LAB_1017be4d0;
      lVar23 = CONCAT71(uStack0000000000000131,uStack0000000000000130);
      *(long *)(unaff_x29 + -0xa0) = lVar5;
      *(long *)(unaff_x29 + -0x98) = lVar9;
      *(long *)(unaff_x29 + -0x90) = lVar23;
      pbVar17 = pbVar18;
      if (lVar13 == 1) {
LAB_1017be460:
        uVar8 = FUN_108878f3c(1,&UNK_10b259a60,&UNK_10b258940);
LAB_1017be47c:
        in_stack_00000090 = 2;
        bStack0000000000000091 = 0;
        uStack0000000000000092 = 0;
        uStack0000000000000094 = 0;
        in_stack_00000098 = (byte)uVar8;
        uStack0000000000000099 = (undefined7)((ulong)uVar8 >> 8);
        pbVar18 = pbVar17;
      }
      else {
        pbVar17 = pbVar26 + 0x40;
        bVar21 = pbVar26[0x20];
        if (bVar21 == 0x16) goto LAB_1017be460;
        uStack0000000000000129 = (undefined7)*(undefined8 *)(pbVar26 + 0x29);
        uStack0000000000000121 = (undefined7)*(undefined8 *)(pbVar26 + 0x21);
        uStack0000000000000128 = (undefined1)((ulong)*(undefined8 *)(pbVar26 + 0x21) >> 0x38);
        in_stack_00000138 = *(long *)(pbVar26 + 0x38);
        uStack0000000000000130 = (undefined1)*(undefined8 *)(pbVar26 + 0x30);
        uStack0000000000000131 = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x30) >> 8);
        bStack0000000000000120 = bVar21;
        if (bVar21 != 0x10) {
          if (bVar21 == 0x11) {
            puVar15 = (undefined8 *)CONCAT71(uStack0000000000000129,uStack0000000000000128);
            uVar8 = *puVar15;
            in_stack_00000098 = (byte)puVar15[1];
            uStack0000000000000099 = (undefined7)((ulong)puVar15[1] >> 8);
            in_stack_00000090 = (byte)uVar8;
            bStack0000000000000091 = (byte)((ulong)uVar8 >> 8);
            uStack0000000000000092 = (undefined2)((ulong)uVar8 >> 0x10);
            uStack0000000000000094 = (undefined4)((ulong)uVar8 >> 0x20);
            in_stack_000000a8 = puVar15[3];
            uStack00000000000000a0 = (undefined1)puVar15[2];
            uStack00000000000000a1 = (undefined7)((ulong)puVar15[2] >> 8);
            func_0x0001017c67e0(unaff_x29 + -0xd0,&stack0x00000090);
            _free(puVar15);
          }
          else {
            if (bVar21 == 0x12) goto LAB_1017bede4;
            func_0x0001017c67e0(unaff_x29 + -0xd0,&stack0x00000120);
          }
          lVar25 = *(long *)(unaff_x29 + -0xd0);
          if (lVar25 != 2) {
            in_stack_00000060 = *(long *)(unaff_x29 + -200);
            goto LAB_1017beef0;
          }
          uVar8 = *(undefined8 *)(unaff_x29 + -200);
          goto LAB_1017be47c;
        }
LAB_1017bede4:
        func_0x0001017a6a48(&stack0x00000120);
        lVar25 = 0;
LAB_1017beef0:
        FUN_1017ad498(&stack0x00000090,&stack0x00000218);
        pbVar4 = (byte *)CONCAT44(uStack0000000000000094,
                                  CONCAT22(uStack0000000000000092,
                                           CONCAT11(bStack0000000000000091,in_stack_00000090)));
        pbVar11 = (byte *)CONCAT71(uStack0000000000000099,in_stack_00000098);
        pbVar18 = pbVar17;
        if (pbVar4 == (byte *)0x8000000000000002) {
LAB_1017bef10:
          in_stack_00000090 = 2;
          bStack0000000000000091 = 0;
          uStack0000000000000092 = 0;
          uStack0000000000000094 = 0;
          in_stack_00000098 = (byte)pbVar11;
          uStack0000000000000099 = (undefined7)((ulong)pbVar11 >> 8);
        }
        else {
          if (pbVar4 == (byte *)0x8000000000000001) {
            pbVar11 = (byte *)FUN_108878f3c(2,&UNK_10b259a60,&UNK_10b258940);
            goto LAB_1017bef10;
          }
          if (pbVar17 == pbVar26 + lVar13 * 0x20) {
LAB_1017bef58:
            lVar10 = FUN_108878f3c(3,&UNK_10b259a60,&UNK_10b258940);
LAB_1017bef74:
            in_stack_00000090 = 2;
            bStack0000000000000091 = 0;
            uStack0000000000000092 = 0;
            uStack0000000000000094 = 0;
            in_stack_00000098 = (byte)lVar10;
            uStack0000000000000099 = (undefined7)((ulong)lVar10 >> 8);
          }
          else {
            uVar8 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
            pbVar18 = pbVar26 + 0x60;
            bVar21 = *pbVar17;
            if (bVar21 == 0x16) goto LAB_1017bef58;
            uVar12 = *(undefined8 *)(pbVar26 + 0x41);
            *(undefined8 *)(unaff_x29 + -0x77) = *(undefined8 *)(pbVar26 + 0x49);
            *(undefined8 *)(unaff_x29 + -0x7f) = uVar12;
            uVar12 = *(undefined8 *)(pbVar26 + 0x50);
            *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(pbVar26 + 0x58);
            *(undefined8 *)(unaff_x29 + -0x70) = uVar12;
            *(byte *)(unaff_x29 + -0x80) = bVar21;
            if (bVar21 == 0x10) {
LAB_1017bf05c:
              in_stack_00000090 = 0;
              bStack0000000000000091 = 0;
              uStack0000000000000092 = 0;
              uStack0000000000000094 = 0;
              in_stack_00000098 = 0;
              uStack0000000000000099 = 0;
              func_0x0001017a6a48(unaff_x29 + -0x80);
            }
            else if (bVar21 == 0x11) {
              puVar15 = *(undefined8 **)(unaff_x29 + -0x78);
              uVar12 = *puVar15;
              uVar28 = puVar15[3];
              uVar27 = puVar15[2];
              *(undefined8 *)(unaff_x29 + -200) = puVar15[1];
              *(undefined8 *)(unaff_x29 + -0xd0) = uVar12;
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar28;
              *(undefined8 *)(unaff_x29 + -0xc0) = uVar27;
              FUN_1017c6990(&stack0x00000090,unaff_x29 + -0xd0);
              _free(puVar15);
            }
            else {
              if (bVar21 == 0x12) goto LAB_1017bf05c;
              FUN_1017c6990(&stack0x00000090,unaff_x29 + -0x80);
            }
            lVar10 = CONCAT71(uStack0000000000000099,in_stack_00000098);
            if ((in_stack_00000090 & 1) != 0) goto LAB_1017bef74;
            uStack0000000000000130 = (undefined1)in_stack_000000a8;
            uStack0000000000000131 = (undefined7)((ulong)in_stack_000000a8 >> 8);
            uStack0000000000000128 = uStack00000000000000a0;
            uStack0000000000000129 = uStack00000000000000a1;
            in_stack_00000140 = in_stack_000000b8;
            in_stack_00000138 = in_stack_000000b0;
            in_stack_00000148 = in_stack_000000c0;
            bStack0000000000000120 = in_stack_00000098;
            uStack0000000000000121 = uStack0000000000000099;
            FUN_1017ad498(&stack0x00000090,&stack0x00000218);
            uVar19 = CONCAT44(uStack0000000000000094,
                              CONCAT22(uStack0000000000000092,
                                       CONCAT11(bStack0000000000000091,in_stack_00000090)));
            uVar12 = CONCAT71(uStack0000000000000099,in_stack_00000098);
            if (uVar19 != 0x8000000000000002) {
              if (uVar19 != 0x8000000000000001) {
                in_stack_000000e0 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
                in_stack_000000b0 = *(long *)(unaff_x29 + -0x90);
                in_stack_000000a8 = *(long *)(unaff_x29 + -0x98);
                in_stack_00000180 = *(long *)(unaff_x29 + -0xa0);
                uStack00000000000000a0 = (undefined1)in_stack_00000180;
                uStack00000000000000a1 = (undefined7)((ulong)in_stack_00000180 >> 8);
                in_stack_000000f0 = CONCAT71(uStack0000000000000129,uStack0000000000000128);
                in_stack_000000e8 = CONCAT71(uStack0000000000000121,bStack0000000000000120);
                in_stack_000000f8 = CONCAT71(uStack0000000000000131,uStack0000000000000130);
                in_stack_00000100 = in_stack_00000138;
                in_stack_00000110 = in_stack_00000148;
                in_stack_00000108 = in_stack_00000140;
                in_stack_00000090 = (byte)lVar25;
                bStack0000000000000091 = (byte)((ulong)lVar25 >> 8);
                uStack0000000000000092 = (undefined2)((ulong)lVar25 >> 0x10);
                uStack0000000000000094 = (undefined4)((ulong)lVar25 >> 0x20);
                in_stack_00000098 = (byte)in_stack_00000060;
                uStack0000000000000099 = (undefined7)((ulong)in_stack_00000060 >> 8);
                in_stack_00000178 = in_stack_00000060;
                in_stack_000001e8 = in_stack_00000140;
                in_stack_000001e0 = in_stack_00000138;
                in_stack_000000b8 = pbVar4;
                in_stack_000000c0 = pbVar11;
                in_stack_000000c8 = uVar8;
                in_stack_000000d0 = uVar19;
                in_stack_000000d8 = uVar12;
                in_stack_00000170 = lVar25;
                in_stack_00000188 = in_stack_000000a8;
                in_stack_00000190 = in_stack_000000b0;
                in_stack_00000198 = pbVar4;
                in_stack_000001a0 = pbVar11;
                in_stack_000001a8 = uVar8;
                in_stack_000001b0 = uVar19;
                in_stack_000001b8 = uVar12;
                in_stack_000001c0 = in_stack_000000e0;
                in_stack_000001c8 = in_stack_000000e8;
                in_stack_000001d0 = in_stack_000000f0;
                in_stack_000001d8 = in_stack_000000f8;
                lVar14 = FUN_1017aefb0(&stack0x00000218);
                if (lVar14 != 0) {
                  in_stack_00000098 = (byte)lVar14;
                  uStack0000000000000099 = (undefined7)((ulong)lVar14 >> 8);
                  goto LAB_1017beba0;
                }
                goto LAB_1017bebac;
              }
              uVar12 = FUN_108878f3c(4,&UNK_10b259a60,&UNK_10b258940);
            }
            in_stack_00000090 = 2;
            bStack0000000000000091 = 0;
            uStack0000000000000092 = 0;
            uStack0000000000000094 = 0;
            in_stack_00000098 = (byte)uVar12;
            uStack0000000000000099 = (undefined7)((ulong)uVar12 >> 8);
            if (lVar10 != 0) {
              FUN_10179fa2c(&stack0x00000120);
            }
          }
          if (((ulong)pbVar4 & 0x7fffffffffffffff) != 0) {
            _free(pbVar11);
          }
        }
      }
      if (lVar23 != 0) {
        puVar15 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar15[-1] != 0) {
            _free(*puVar15);
          }
          puVar15 = puVar15 + 3;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (lVar5 != 0) {
        _free(lVar9);
      }
    }
    lVar13 = ((ulong)((long)(pbVar26 + lVar13 * 0x20) - (long)pbVar18) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      func_0x0001017a6a48(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
    if (lVar14 != 0) {
      _free(pbVar26);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar8 = FUN_10888066c(&stack0x00000070,unaff_x29 + -0xa0,&UNK_10b2589f0);
      goto LAB_1017bed40;
    }
    in_stack_00000158 = pbVar26 + lVar13 * 0x40;
    bStack0000000000000120 = 0x16;
    in_stack_00000160 = 0;
    lVar9 = 0;
    in_stack_00000140 = pbVar26;
    in_stack_00000150 = lVar14;
    if (lVar13 == 0) {
      bVar6 = false;
      pbVar18 = (byte *)0x8000000000000001;
      uVar19 = 0x8000000000000001;
      in_stack_00000028 = unaff_x22;
      in_stack_00000020 = unaff_x23;
      in_stack_00000030 = unaff_x28;
      in_stack_00000148 = pbVar26;
LAB_1017be52c:
      *(undefined **)(unaff_x29 + -0x80) = &UNK_108ce3334;
      *(undefined8 *)(unaff_x29 + -0x78) = 7;
      lVar14 = unaff_x29 + -0x80;
      in_stack_00000090 = (byte)lVar14;
      bStack0000000000000091 = (byte)((ulong)lVar14 >> 8);
      uStack0000000000000092 = (undefined2)((ulong)lVar14 >> 0x10);
      uStack0000000000000094 = (undefined4)((ulong)lVar14 >> 0x20);
      in_stack_00000098 = 0xf8;
      uStack0000000000000099 = 0x10179e9;
      lVar14 = -0x8000000000000000;
      uVar8 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x00000090);
LAB_1017be560:
      in_stack_00000090 = 2;
      bStack0000000000000091 = 0;
      uStack0000000000000092 = 0;
      uStack0000000000000094 = 0;
      in_stack_00000098 = (byte)uVar8;
      uStack0000000000000099 = (undefined7)((ulong)uVar8 >> 8);
      if (-0x7fffffffffffffff < (long)uVar19) {
joined_r0x0001017bf320:
        uStack0000000000000094 = 0;
        uStack0000000000000092 = 0;
        bStack0000000000000091 = 0;
        in_stack_00000090 = 2;
        if (uVar19 != 0) {
          uStack0000000000000094 = 0;
          uStack0000000000000092 = 0;
          bStack0000000000000091 = 0;
          in_stack_00000090 = 2;
          _free(in_stack_00000030);
        }
      }
LAB_1017be584:
      if ((bVar6) && (in_stack_00000020 != 0)) {
        FUN_10179fa2c(&stack0x00000220);
      }
      if ((-0x7fffffffffffffff < (long)pbVar18) && (pbVar18 != (byte *)0x0)) {
        _free(in_stack_00000028);
      }
      if (lVar14 != -0x8000000000000000) {
        if (lVar9 != 0) {
          puVar15 = (undefined8 *)(in_stack_00000058 + 8);
          do {
            if (puVar15[-1] != 0) {
              _free(*puVar15);
            }
            puVar15 = puVar15 + 3;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (lVar14 != 0) {
          _free(in_stack_00000058);
        }
      }
      FUN_1017a1d58(&stack0x00000140);
      if (bStack0000000000000120 != 0x16) {
        func_0x0001017a6a48(&stack0x00000120);
      }
    }
    else {
      bVar21 = *pbVar26;
      in_stack_00000148 = pbVar26 + 0x40;
      if (bVar21 == 0x16) {
        bVar6 = false;
        lStack0000000000000050 = 2;
        uVar19 = 0x8000000000000001;
        pbVar18 = (byte *)0x8000000000000001;
        lVar14 = -0x8000000000000000;
      }
      else {
        bVar6 = false;
        puVar24 = (undefined8 *)(unaff_x29 - 0x80U | 1);
        puVar20 = (undefined8 *)((ulong)&stack0x00000120 | 1);
        puVar15 = (undefined8 *)(unaff_x29 - 0xa0U | 1);
        puVar16 = (undefined8 *)((ulong)&stack0x00000090 | 1);
        lStack0000000000000050 = 2;
        uVar19 = 0x8000000000000001;
        pbVar18 = (byte *)0x8000000000000001;
        lVar14 = -0x8000000000000000;
        do {
          in_stack_00000160 = in_stack_00000160 + 1;
          *(byte *)(unaff_x29 + -0x80) = bVar21;
          uVar8 = *(undefined8 *)(pbVar26 + 1);
          puVar24[1] = *(undefined8 *)(pbVar26 + 9);
          *puVar24 = uVar8;
          uVar8 = *(undefined8 *)(pbVar26 + 0x10);
          uVar27 = *(undefined8 *)(pbVar26 + 0x28);
          uVar12 = *(undefined8 *)(pbVar26 + 0x20);
          *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar26 + 0x18);
          *(undefined8 *)((long)puVar24 + 0xf) = uVar8;
          in_stack_000000a8 = *(long *)(pbVar26 + 0x38);
          in_stack_00000098 = (byte)uVar27;
          uStack0000000000000099 = (undefined7)((ulong)uVar27 >> 8);
          in_stack_00000090 = (byte)uVar12;
          bStack0000000000000091 = (byte)((ulong)uVar12 >> 8);
          uStack0000000000000092 = (undefined2)((ulong)uVar12 >> 0x10);
          uStack0000000000000094 = (undefined4)((ulong)uVar12 >> 0x20);
          uStack00000000000000a0 = (undefined1)*(undefined8 *)(pbVar26 + 0x30);
          uStack00000000000000a1 = (undefined7)((ulong)*(undefined8 *)(pbVar26 + 0x30) >> 8);
          if (bStack0000000000000120 != 0x16) {
            func_0x0001017a6a48(&stack0x00000120);
          }
          uStack0000000000000128 = in_stack_00000098;
          uStack0000000000000129 = uStack0000000000000099;
          bStack0000000000000120 = in_stack_00000090;
          uStack0000000000000121 =
               (undefined7)
               (CONCAT44(uStack0000000000000094,
                         CONCAT22(uStack0000000000000092,
                                  CONCAT11(bStack0000000000000091,in_stack_00000090))) >> 8);
          in_stack_00000138 = in_stack_000000a8;
          uStack0000000000000130 = uStack00000000000000a0;
          uStack0000000000000131 = uStack00000000000000a1;
          uVar1 = *(ulong *)(unaff_x29 + -0x78);
          uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
          pbVar26 = pbVar18;
          if (bVar21 < 0xd) {
            if (bVar21 == 1) {
              bStack0000000000000091 = *(byte *)(unaff_x29 + -0x7f);
              if (4 < bStack0000000000000091) {
                bStack0000000000000091 = 5;
              }
              in_stack_00000090 = 0;
LAB_1017be77c:
              func_0x0001017a6a48(unaff_x29 + -0x80);
              bVar21 = bStack0000000000000120;
              goto joined_r0x0001017be748;
            }
            if (bVar21 == 4) {
              if (4 < uVar1) {
                uVar1 = 5;
              }
              bStack0000000000000091 = (byte)uVar1;
              in_stack_00000090 = 0;
              goto LAB_1017be77c;
            }
            if (bVar21 == 0xc) {
              FUN_1017967c8(&stack0x00000090,uVar8);
              goto joined_r0x0001017be6e0;
            }
LAB_1017bea90:
            uVar8 = FUN_10888066c(unaff_x29 + -0x80,unaff_x29 + -0xa0,&UNK_10b258c70);
            in_stack_00000098 = (byte)uVar8;
            uStack0000000000000099 = (undefined7)((ulong)uVar8 >> 8);
LAB_1017bee60:
            uVar8 = CONCAT71(uStack0000000000000099,in_stack_00000098);
            pbVar18 = pbVar26;
            goto LAB_1017be560;
          }
          if (bVar21 == 0xd) {
            FUN_1017967c8(&stack0x00000090,uVar1,uVar8);
            goto LAB_1017be77c;
          }
          if (bVar21 != 0xe) {
            if (bVar21 != 0xf) goto LAB_1017bea90;
            FUN_10179654c(&stack0x00000090,uVar1,uVar8);
            goto LAB_1017be77c;
          }
          FUN_10179654c(&stack0x00000090,uVar8,*(undefined8 *)(unaff_x29 + -0x68));
joined_r0x0001017be6e0:
          bVar21 = bStack0000000000000120;
          if (uVar1 != 0) {
            _free(uVar8);
            bVar21 = bStack0000000000000120;
          }
joined_r0x0001017be748:
          bStack0000000000000120 = bVar21;
          if ((in_stack_00000090 & 1) != 0) goto LAB_1017bee60;
          if (bStack0000000000000091 < 3) {
            if (bStack0000000000000091 == 0) {
              if (lVar14 != -0x8000000000000000) {
                *(undefined **)(unaff_x29 + -0x80) = &UNK_108ce3334;
                *(undefined8 *)(unaff_x29 + -0x78) = 7;
                lVar13 = unaff_x29 + -0x80;
                in_stack_00000090 = (byte)lVar13;
                bStack0000000000000091 = (byte)((ulong)lVar13 >> 8);
                uStack0000000000000092 = (undefined2)((ulong)lVar13 >> 0x10);
                uStack0000000000000094 = (undefined4)((ulong)lVar13 >> 0x20);
                in_stack_00000098 = 0xf8;
                uStack0000000000000099 = 0x10179e9;
                uVar8 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
                goto LAB_1017be560;
              }
              bStack0000000000000120 = 0x16;
              if (bVar21 == 0x16) {
                func_0x000108a079f0(&UNK_108ce2f04,0x2c,&UNK_10b25aeb0);
                goto LAB_1017bf474;
              }
              uVar8 = *puVar20;
              puVar16[1] = puVar20[1];
              *puVar16 = uVar8;
              uVar8 = *(undefined8 *)((long)puVar20 + 0xf);
              *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
              *(undefined8 *)((long)puVar16 + 0xf) = uVar8;
              in_stack_00000090 = bVar21;
              FUN_101778e20(unaff_x29 + -0x80,&stack0x00000090);
              lVar14 = *(long *)(unaff_x29 + -0x80);
              if (lVar14 == -0x8000000000000000) {
                lVar14 = -0x8000000000000000;
                uVar8 = *(undefined8 *)(unaff_x29 + -0x78);
                goto LAB_1017be560;
              }
              in_stack_00000058 = *(long *)(unaff_x29 + -0x78);
              lVar9 = *(long *)(unaff_x29 + -0x70);
            }
            else if (bStack0000000000000091 == 1) {
              if (lStack0000000000000050 != 2) {
                *(undefined **)(unaff_x29 + -0x80) = &UNK_108ce333b;
                *(undefined8 *)(unaff_x29 + -0x78) = 10;
                lVar13 = unaff_x29 + -0x80;
                in_stack_00000090 = (byte)lVar13;
                bStack0000000000000091 = (byte)((ulong)lVar13 >> 8);
                uStack0000000000000092 = (undefined2)((ulong)lVar13 >> 0x10);
                uStack0000000000000094 = (undefined4)((ulong)lVar13 >> 0x20);
                in_stack_00000098 = 0xf8;
                uStack0000000000000099 = 0x10179e9;
                uVar8 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
                goto LAB_1017be560;
              }
              bStack0000000000000120 = 0x16;
              if (bVar21 == 0x16) goto LAB_1017bf1a4;
              uVar8 = *puVar20;
              puVar24[1] = puVar20[1];
              *puVar24 = uVar8;
              uVar8 = *(undefined8 *)((long)puVar20 + 0xf);
              *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
              *(undefined8 *)((long)puVar24 + 0xf) = uVar8;
              *(byte *)(unaff_x29 + -0x80) = bVar21;
              if (bVar21 == 0x10) {
LAB_1017be7f0:
                *(undefined8 *)(unaff_x29 + -0xa0) = 0;
                func_0x0001017a6a48(unaff_x29 + -0x80);
                lStack0000000000000050 = 0;
              }
              else {
                if (bVar21 == 0x11) {
                  puVar22 = *(undefined8 **)(unaff_x29 + -0x78);
                  uVar8 = *puVar22;
                  in_stack_00000098 = (byte)puVar22[1];
                  uStack0000000000000099 = (undefined7)((ulong)puVar22[1] >> 8);
                  in_stack_00000090 = (byte)uVar8;
                  bStack0000000000000091 = (byte)((ulong)uVar8 >> 8);
                  uStack0000000000000092 = (undefined2)((ulong)uVar8 >> 0x10);
                  uStack0000000000000094 = (undefined4)((ulong)uVar8 >> 0x20);
                  in_stack_000000a8 = puVar22[3];
                  uStack00000000000000a0 = (undefined1)puVar22[2];
                  uStack00000000000000a1 = (undefined7)((ulong)puVar22[2] >> 8);
                  func_0x0001017c67e0(unaff_x29 + -0xa0,&stack0x00000090);
                  _free(puVar22);
                }
                else {
                  if (bVar21 == 0x12) goto LAB_1017be7f0;
                  func_0x0001017c67e0(unaff_x29 + -0xa0,unaff_x29 + -0x80);
                }
                lStack0000000000000050 = *(long *)(unaff_x29 + -0xa0);
                if (lStack0000000000000050 == 2) {
                  uVar8 = *(undefined8 *)(unaff_x29 + -0x98);
                  goto LAB_1017be560;
                }
              }
              in_stack_00000010 = *(long *)(unaff_x29 + -0x98);
            }
            else {
              if (pbVar18 != (byte *)0x8000000000000001) {
                *(undefined **)(unaff_x29 + -0x80) = &UNK_108ce3345;
                *(undefined8 *)(unaff_x29 + -0x78) = 0x11;
                lVar13 = unaff_x29 + -0x80;
                in_stack_00000090 = (byte)lVar13;
                bStack0000000000000091 = (byte)((ulong)lVar13 >> 8);
                uStack0000000000000092 = (undefined2)((ulong)lVar13 >> 0x10);
                uStack0000000000000094 = (undefined4)((ulong)lVar13 >> 0x20);
                in_stack_00000098 = 0xf8;
                uStack0000000000000099 = 0x10179e9;
                uVar8 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
                goto LAB_1017be560;
              }
              FUN_1017ac998(&stack0x00000090,&stack0x00000120);
              pbVar18 = (byte *)CONCAT44(uStack0000000000000094,
                                         CONCAT22(uStack0000000000000092,
                                                  CONCAT11(bStack0000000000000091,in_stack_00000090)
                                                 ));
              pbVar26 = (byte *)0x8000000000000001;
              if (pbVar18 == (byte *)0x8000000000000001) goto LAB_1017bee60;
              in_stack_00000028 = (byte *)CONCAT71(uStack0000000000000099,in_stack_00000098);
              in_stack_00000000 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
            }
          }
          else if (bStack0000000000000091 == 3) {
            if (bVar6) {
              *(undefined **)(unaff_x29 + -0x80) = &UNK_108ce3356;
              *(undefined8 *)(unaff_x29 + -0x78) = 3;
              lVar13 = unaff_x29 + -0x80;
              in_stack_00000090 = (byte)lVar13;
              bStack0000000000000091 = (byte)((ulong)lVar13 >> 8);
              uStack0000000000000092 = (undefined2)((ulong)lVar13 >> 0x10);
              uStack0000000000000094 = (undefined4)((ulong)lVar13 >> 0x20);
              in_stack_00000098 = 0xf8;
              uStack0000000000000099 = 0x10179e9;
              uVar8 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
              bVar6 = true;
              goto LAB_1017be560;
            }
            bStack0000000000000120 = 0x16;
            if (bVar21 == 0x16) {
              func_0x000108a079f0(&UNK_108ce2f04,0x2c,&UNK_10b25aeb0);
              goto LAB_1017bf474;
            }
            uVar8 = *puVar20;
            puVar15[1] = puVar20[1];
            *puVar15 = uVar8;
            uVar8 = *(undefined8 *)((long)puVar20 + 0xf);
            *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
            *(undefined8 *)((long)puVar15 + 0xf) = uVar8;
            *(byte *)(unaff_x29 + -0xa0) = bVar21;
            if (bVar21 == 0x10) {
LAB_1017be904:
              in_stack_00000090 = 0;
              bStack0000000000000091 = 0;
              uStack0000000000000092 = 0;
              uStack0000000000000094 = 0;
              in_stack_00000098 = 0;
              uStack0000000000000099 = 0;
              func_0x0001017a6a48(unaff_x29 + -0xa0);
LAB_1017be914:
              iVar3 = CONCAT22(uStack0000000000000092,
                               CONCAT11(bStack0000000000000091,in_stack_00000090));
            }
            else {
              if (bVar21 != 0x11) {
                if (bVar21 == 0x12) goto LAB_1017be904;
                FUN_1017c6990(&stack0x00000090,unaff_x29 + -0xa0);
                goto LAB_1017be914;
              }
              puVar22 = *(undefined8 **)(unaff_x29 + -0x98);
              uVar8 = *puVar22;
              *(undefined8 *)(unaff_x29 + -0x78) = puVar22[1];
              *(undefined8 *)(unaff_x29 + -0x80) = uVar8;
              uVar8 = puVar22[2];
              *(undefined8 *)(unaff_x29 + -0x68) = puVar22[3];
              *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
              FUN_1017c6990(&stack0x00000090,unaff_x29 + -0x80);
              _free(puVar22);
              iVar3 = CONCAT22(uStack0000000000000092,
                               CONCAT11(bStack0000000000000091,in_stack_00000090));
            }
            if (iVar3 == 1) {
              bVar6 = false;
              goto LAB_1017bee60;
            }
            in_stack_00000020 = CONCAT71(uStack0000000000000099,in_stack_00000098);
            in_stack_00000228 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
            bVar6 = true;
            in_stack_00000230 = in_stack_000000a8;
            in_stack_00000238 = in_stack_000000b0;
            in_stack_00000240 = in_stack_000000b8;
            in_stack_00000248 = in_stack_000000c0;
          }
          else if (bStack0000000000000091 == 4) {
            if (uVar19 != 0x8000000000000001) {
              *(undefined **)(unaff_x29 + -0x80) = &UNK_108ce3359;
              *(undefined8 *)(unaff_x29 + -0x78) = 4;
              lVar13 = unaff_x29 + -0x80;
              in_stack_00000090 = (byte)lVar13;
              bStack0000000000000091 = (byte)((ulong)lVar13 >> 8);
              uStack0000000000000092 = (undefined2)((ulong)lVar13 >> 0x10);
              uStack0000000000000094 = (undefined4)((ulong)lVar13 >> 0x20);
              in_stack_00000098 = 0xf8;
              uStack0000000000000099 = 0x10179e9;
              uVar8 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
              in_stack_00000098 = (byte)uVar8;
              uStack0000000000000099 = (undefined7)((ulong)uVar8 >> 8);
              uVar19 = uVar19 & 0x7fffffffffffffff;
              goto joined_r0x0001017bf320;
            }
            FUN_1017ac998(&stack0x00000090,&stack0x00000120);
            uVar19 = CONCAT44(uStack0000000000000094,
                              CONCAT22(uStack0000000000000092,
                                       CONCAT11(bStack0000000000000091,in_stack_00000090)));
            in_stack_00000030 = CONCAT71(uStack0000000000000099,in_stack_00000098);
            if (uVar19 == 0x8000000000000001) {
              in_stack_00000090 = 2;
              bStack0000000000000091 = 0;
              uStack0000000000000092 = 0;
              uStack0000000000000094 = 0;
              goto LAB_1017be584;
            }
            in_stack_00000008 = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
          }
          else {
            bStack0000000000000120 = 0x16;
            if (bVar21 == 0x16) {
LAB_1017bf1a4:
              bStack0000000000000120 = 0x16;
              func_0x000108a079f0(&UNK_108ce2f04,0x2c,&UNK_10b25aeb0);
LAB_1017bf474:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1017bf478);
              (*pcVar7)();
            }
            uVar8 = *puVar20;
            puVar16[1] = puVar20[1];
            *puVar16 = uVar8;
            uVar8 = *(undefined8 *)((long)puVar20 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar8;
            in_stack_00000090 = bVar21;
            func_0x0001017a6a48(&stack0x00000090);
          }
          pbVar26 = in_stack_00000158;
          if (in_stack_00000148 == in_stack_00000158) goto LAB_1017be380;
          pbVar17 = in_stack_00000148 + 0x40;
          bVar21 = *in_stack_00000148;
          pbVar26 = in_stack_00000148;
          in_stack_00000148 = pbVar17;
        } while (bVar21 != 0x16);
      }
      pbVar26 = pbVar26 + 0x40;
LAB_1017be380:
      pbVar17 = in_stack_00000158;
      if (lVar14 == -0x8000000000000000) goto LAB_1017be52c;
      in_stack_00000170 = 0;
      if (lStack0000000000000050 != 2) {
        in_stack_00000170 = lStack0000000000000050;
      }
      in_stack_000000b8 = (byte *)0x8000000000000000;
      if (pbVar18 != (byte *)0x8000000000000001) {
        in_stack_000000b8 = pbVar18;
      }
      in_stack_000000e8 = 0;
      if (bVar6) {
        *(long *)(unaff_x29 + -200) = in_stack_00000230;
        *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000228;
        *(byte **)(unaff_x29 + -0xb8) = in_stack_00000240;
        *(long *)(unaff_x29 + -0xc0) = in_stack_00000238;
        *(byte **)(unaff_x29 + -0xb0) = in_stack_00000248;
        in_stack_000000e8 = in_stack_00000020;
      }
      in_stack_000000d0 = 0x8000000000000000;
      if (uVar19 != 0x8000000000000001) {
        in_stack_000000d0 = uVar19;
      }
      in_stack_00000090 = (byte)in_stack_00000170;
      bStack0000000000000091 = (byte)((ulong)in_stack_00000170 >> 8);
      uStack0000000000000092 = (undefined2)((ulong)in_stack_00000170 >> 0x10);
      uStack0000000000000094 = (undefined4)((ulong)in_stack_00000170 >> 0x20);
      in_stack_00000098 = (byte)in_stack_00000010;
      uStack0000000000000099 = (undefined7)((ulong)in_stack_00000010 >> 8);
      uStack00000000000000a0 = (undefined1)lVar14;
      uStack00000000000000a1 = (undefined7)((ulong)lVar14 >> 8);
      in_stack_000000a8 = in_stack_00000058;
      in_stack_000000c0 = in_stack_00000028;
      in_stack_000000c8 = in_stack_00000000;
      in_stack_000000d8 = in_stack_00000030;
      in_stack_000000e0 = in_stack_00000008;
      in_stack_000000f8 = *(undefined8 *)(unaff_x29 + -200);
      in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0xd0);
      in_stack_00000108 = *(byte **)(unaff_x29 + -0xb8);
      in_stack_00000100 = *(long *)(unaff_x29 + -0xc0);
      in_stack_00000110 = *(byte **)(unaff_x29 + -0xb0);
      in_stack_00000178 = in_stack_00000010;
      in_stack_000001b8 = in_stack_00000030;
      in_stack_000001c0 = in_stack_00000008;
      in_stack_000001a8 = in_stack_00000000;
      in_stack_000001a0 = in_stack_00000028;
      in_stack_00000188 = in_stack_00000058;
      in_stack_000000b0 = lVar9;
      in_stack_00000180 = lVar14;
      in_stack_00000190 = lVar9;
      in_stack_00000198 = in_stack_000000b8;
      in_stack_000001b0 = in_stack_000000d0;
      in_stack_000001c8 = in_stack_000000e8;
      in_stack_000001d0 = in_stack_000000f0;
      in_stack_000001d8 = in_stack_000000f8;
      in_stack_000001e0 = in_stack_00000100;
      in_stack_000001e8 = in_stack_00000108;
      FUN_1017a1d58(&stack0x00000140);
      if (pbVar17 == pbVar26) {
        lVar14 = 0;
      }
      else {
        lVar14 = FUN_108878f3c(in_stack_00000160 + ((ulong)((long)pbVar17 - (long)pbVar26) >> 6),
                               &stack0x00000218,&UNK_10b25a358);
      }
      if (bStack0000000000000120 != 0x16) {
        func_0x0001017a6a48(&stack0x00000120);
      }
      if (lVar14 != 0) {
        in_stack_00000098 = (byte)lVar14;
        uStack0000000000000099 = (undefined7)((ulong)lVar14 >> 8);
LAB_1017beba0:
        in_stack_00000090 = 2;
        bStack0000000000000091 = 0;
        uStack0000000000000092 = 0;
        uStack0000000000000094 = 0;
        FUN_1017a72a4(&stack0x00000170);
      }
    }
  }
LAB_1017bebac:
  if ((bVar2 & 0x1e) != 0x14) {
    func_0x0001017a6a48(&stack0x00000070);
  }
  if (CONCAT44(uStack0000000000000094,
               CONCAT22(uStack0000000000000092,CONCAT11(bStack0000000000000091,in_stack_00000090)))
      != 2) {
    unaff_x27[0xd] = in_stack_000000f8;
    unaff_x27[0xc] = in_stack_000000f0;
    unaff_x27[0xf] = in_stack_00000108;
    unaff_x27[0xe] = in_stack_00000100;
    unaff_x27[0x10] = in_stack_00000110;
    unaff_x27[5] = in_stack_000000b8;
    unaff_x27[4] = in_stack_000000b0;
    unaff_x27[7] = in_stack_000000c8;
    unaff_x27[6] = in_stack_000000c0;
    unaff_x27[9] = in_stack_000000d8;
    unaff_x27[8] = in_stack_000000d0;
    unaff_x27[0xb] = in_stack_000000e8;
    unaff_x27[10] = in_stack_000000e0;
    unaff_x27[1] = CONCAT71(uStack0000000000000099,in_stack_00000098);
    *unaff_x27 = CONCAT44(uStack0000000000000094,
                          CONCAT22(uStack0000000000000092,
                                   CONCAT11(bStack0000000000000091,in_stack_00000090)));
    unaff_x27[3] = in_stack_000000a8;
    unaff_x27[2] = CONCAT71(uStack00000000000000a1,uStack00000000000000a0);
    return;
  }
  uVar8 = CONCAT71(uStack0000000000000099,in_stack_00000098);
LAB_1017bed40:
  *unaff_x27 = 2;
  unaff_x27[1] = uVar8;
  return;
}

