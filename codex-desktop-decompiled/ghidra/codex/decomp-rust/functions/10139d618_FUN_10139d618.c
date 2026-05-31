
void FUN_10139d618(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  uint uVar12;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  ulong in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  long *in_stack_000000d0;
  long *in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  long *in_stack_00000100;
  long *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
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
  long *in_stack_000001e8;
  uint uVar13;
  
code_r0x00010139d618:
  in_stack_00000150 = (long *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  in_stack_00000148 = unaff_x23;
LAB_10139d628:
  bVar1 = true;
  bVar9 = true;
  if (in_stack_00000070 == unaff_x25) goto LAB_10139d904;
joined_r0x00010139d640:
  if (in_stack_00000070 != (long *)0x0) {
    _free(in_stack_00000068);
  }
LAB_10139d904:
  if ((((ulong)in_stack_00000078 & 0x7fffffffffffffff) != 0) && (bVar1)) {
    _free(in_stack_00000058);
  }
  bVar1 = false;
  if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
    bVar1 = bVar9;
  }
  if (bVar1) {
    _free(unaff_x21);
  }
  FUN_100de8910(unaff_x27 + 9);
  if (in_stack_00000190 != unaff_x28) {
    FUN_100de6690(&stack0x00000190);
  }
joined_r0x00010139d94c:
  do {
    puVar11 = unaff_x22;
    if (-1 < (long)unaff_x20) goto LAB_10139d968;
LAB_10139d950:
    puVar11 = unaff_x22;
    if (((ulong)unaff_x20 & 0xfffffffffffffffe) != in_stack_00000050) {
      FUN_100de6690(&stack0x00000100);
    }
LAB_10139d968:
    lVar2 = in_stack_000000b0;
    lVar10 = in_stack_000000a8;
    if (in_stack_00000148 == (long *)0x8000000000000000) {
      *in_stack_00000010 = -0x8000000000000000;
      in_stack_00000010[1] = (long)in_stack_00000150;
      if (in_stack_000000b0 != 0) {
        puVar5 = (undefined8 *)(in_stack_000000a8 + 0x20);
        do {
          if (puVar5[-4] != 0) {
            _free(puVar5[-3]);
          }
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          if (puVar5[2] != 0) {
            _free(puVar5[3]);
          }
          puVar5 = puVar5 + 9;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (in_stack_000000a0 != 0) {
        _free(lVar10);
      }
LAB_10139de50:
      lVar10 = ((ulong)((long)unaff_x24 - (long)puVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        FUN_100de6690(puVar11);
        puVar11 = puVar11 + 9;
      }
      if (in_stack_00000018 != 0) {
        _free(in_stack_00000020);
      }
      return;
    }
    in_stack_000000d0 = in_stack_00000160;
    in_stack_000000c8 = in_stack_00000158;
    in_stack_000000e0 = in_stack_00000170;
    in_stack_000000d8 = in_stack_00000168;
    in_stack_000000f0 = in_stack_00000180;
    in_stack_000000e8 = in_stack_00000178;
    in_stack_000000f8 = in_stack_00000188;
    in_stack_000000b8 = in_stack_00000148;
    in_stack_000000c0 = in_stack_00000150;
    if (in_stack_000000b0 == in_stack_000000a0) {
      func_0x0001089ecbb8(&stack0x000000a0);
    }
    puVar5 = (undefined8 *)(in_stack_000000a8 + lVar2 * 0x48);
    puVar5[1] = in_stack_000000c0;
    *puVar5 = in_stack_000000b8;
    puVar5[3] = in_stack_000000d0;
    puVar5[2] = in_stack_000000c8;
    puVar5[5] = in_stack_000000e0;
    puVar5[4] = in_stack_000000d8;
    puVar5[7] = in_stack_000000f0;
    puVar5[6] = in_stack_000000e8;
    puVar5[8] = in_stack_000000f8;
    in_stack_000000b0 = lVar2 + 1;
    unaff_x22 = unaff_x24;
    if (puVar11 == unaff_x24) {
LAB_10139de08:
      in_stack_00000010[1] = in_stack_000000a8;
      *in_stack_00000010 = in_stack_000000a0;
      in_stack_00000010[2] = in_stack_000000b0;
      puVar11 = unaff_x22;
      if (*in_stack_00000010 != -0x8000000000000000) {
        in_stack_00000198 = (long *)in_stack_00000010[1];
        in_stack_00000190 = (long *)*in_stack_00000010;
        in_stack_000001a0 = (long *)in_stack_00000010[2];
        puVar11 = unaff_x24;
        if (unaff_x24 != unaff_x22) {
          lVar10 = FUN_1087e422c(in_stack_00000008,&UNK_10b21cb80,&UNK_10b20a590);
          *in_stack_00000010 = -0x8000000000000000;
          in_stack_00000010[1] = lVar10;
          FUN_100ca086c(&stack0x00000190);
          puVar11 = unaff_x22;
        }
      }
      goto LAB_10139de50;
    }
    unaff_x22 = puVar11 + 9;
    unaff_x20 = (long *)*puVar11;
    if (unaff_x20 == unaff_x28) goto LAB_10139de08;
    lVar10 = puVar11[2];
    unaff_x21 = (long *)puVar11[1];
    in_stack_00000120 = puVar11[4];
    in_stack_00000118 = puVar11[3];
    uVar16 = puVar11[6];
    in_stack_00000128 = puVar11[5];
    in_stack_00000140 = puVar11[8];
    in_stack_00000138 = puVar11[7];
    uVar7 = (ulong)unaff_x20 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x20) {
      uVar7 = 5;
    }
    in_stack_00000100 = unaff_x20;
    in_stack_00000108 = unaff_x21;
    in_stack_00000110 = lVar10;
    in_stack_00000130 = uVar16;
    if (uVar7 != 4) {
      if (uVar7 == 5) {
        if ((in_stack_00000120 != 0) && (in_stack_00000120 * 9 != -0x11)) {
          _free(in_stack_00000118 + in_stack_00000120 * -8 + -8);
        }
        plVar6 = unaff_x21 + lVar10 * 0xd;
        in_stack_00000190 = unaff_x28;
        in_stack_000001d8 = unaff_x21;
        in_stack_000001e8 = unaff_x20;
        if (lVar10 != 0) {
          unaff_x23 = (long *)0x8000000000000000;
          in_stack_00000070 = (long *)0x8000000000000000;
          in_stack_00000078 = (long *)0x8000000000000000;
          plVar3 = unaff_x21;
          in_stack_000001e0 = unaff_x21;
          break;
        }
        in_stack_00000070 = (long *)0x8000000000000000;
        in_stack_00000078 = (long *)0x0;
        in_stack_000001e0 = unaff_x21;
        goto LAB_10139d5ec;
      }
      in_stack_00000150 = (long *)FUN_108832ea0(&stack0x00000100,unaff_x29 + -0x70,&UNK_10b21d220);
      in_stack_00000148 = (long *)0x8000000000000000;
      puVar11 = unaff_x22;
      if ((long)unaff_x20 < 0) goto LAB_10139d950;
      goto LAB_10139d968;
    }
    lVar10 = puVar11[1];
    puVar5 = (undefined8 *)puVar11[2];
    lVar2 = puVar11[3];
    *(undefined8 **)(unaff_x29 + -0xb8) = puVar5;
    *(undefined8 **)(unaff_x29 + -0xb0) = puVar5;
    *(long *)(unaff_x29 + -0xa8) = lVar10;
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar5 + lVar2 * 9;
    puVar11 = puVar5;
    if (lVar2 == 0) {
LAB_10139d4e8:
      plVar3 = (long *)FUN_1087e422c(0,&UNK_10b231698,&UNK_10b20a590);
LAB_10139d574:
      in_stack_00000148 = (long *)0x8000000000000000;
      in_stack_00000150 = plVar3;
    }
    else {
      puVar11 = puVar5 + 9;
      plVar6 = (long *)*puVar5;
      *(undefined8 **)(unaff_x29 + -0xb0) = puVar11;
      if (plVar6 == unaff_x28) goto LAB_10139d4e8;
      plVar3 = (long *)puVar5[2];
      plVar4 = (long *)puVar5[1];
      in_stack_000001b0 = (long *)puVar5[4];
      in_stack_000001a8 = (long *)puVar5[3];
      in_stack_000001c0 = (long *)puVar5[6];
      in_stack_000001b8 = (long *)puVar5[5];
      in_stack_000001d0 = (long *)puVar5[8];
      in_stack_000001c8 = (long *)puVar5[7];
      unaff_x27 = &stack0x00000190;
      in_stack_00000190 = plVar6;
      in_stack_00000198 = plVar4;
      in_stack_000001a0 = plVar3;
      if (plVar6 != (long *)0x8000000000000003) {
        plVar3 = (long *)FUN_108832ea0(&stack0x00000190,unaff_x29 + -0x70,&UNK_10b20a5e0);
        FUN_100de6690(&stack0x00000190);
        goto LAB_10139d574;
      }
      unaff_x24 = in_stack_00000030;
      if ((plVar4 == (long *)0x8000000000000000) || (plVar4 == (long *)0x8000000000000001))
      goto LAB_10139d574;
      if (lVar2 == 1) {
LAB_10139d75c:
        in_stack_00000190 = plVar6;
        in_stack_00000078 = (long *)FUN_1087e422c(1,&UNK_10b231698,&UNK_10b20a590);
        plVar6 = in_stack_000001a8;
LAB_10139d778:
        in_stack_000001a8 = plVar6;
        in_stack_00000148 = (long *)0x8000000000000000;
        in_stack_00000150 = in_stack_00000078;
LAB_10139d784:
        plVar8 = in_stack_00000198;
        plVar14 = in_stack_000001a8;
        if (plVar4 != (long *)0x0) {
          _free(plVar3);
          plVar8 = in_stack_00000198;
          plVar14 = in_stack_000001a8;
        }
LAB_10139d790:
        in_stack_000001a8 = plVar14;
        in_stack_00000198 = plVar8;
        unaff_x27 = &stack0x00000190;
      }
      else {
        puVar11 = puVar5 + 0x12;
        *(undefined8 **)(unaff_x29 + -0xb0) = puVar11;
        in_stack_00000190 = (long *)puVar5[9];
        if (in_stack_00000190 == unaff_x28) goto LAB_10139d75c;
        in_stack_00000078 = (long *)puVar5[0xb];
        plVar14 = (long *)puVar5[10];
        in_stack_000001b0 = (long *)puVar5[0xd];
        plVar6 = (long *)puVar5[0xc];
        in_stack_000001c0 = (long *)puVar5[0xf];
        in_stack_000001b8 = (long *)puVar5[0xe];
        in_stack_000001d0 = (long *)puVar5[0x11];
        in_stack_000001c8 = (long *)puVar5[0x10];
        in_stack_00000198 = plVar14;
        in_stack_000001a0 = in_stack_00000078;
        if (in_stack_00000190 != (long *)0x8000000000000003) {
          in_stack_000001a8 = plVar6;
          in_stack_00000078 =
               (long *)FUN_108832ea0(&stack0x00000190,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(&stack0x00000190);
          plVar6 = in_stack_000001a8;
          goto LAB_10139d778;
        }
        if ((plVar14 == (long *)0x8000000000000000) || (plVar14 == (long *)0x8000000000000001))
        goto LAB_10139d778;
        if (lVar2 == 2) {
LAB_10139da28:
          in_stack_000001a8 = plVar6;
          in_stack_00000068 = (long *)FUN_1087e422c(2,&UNK_10b231698,&UNK_10b20a590);
          plVar15 = in_stack_000001a8;
LAB_10139da44:
          in_stack_000001a8 = plVar15;
          in_stack_00000150 = in_stack_00000068;
          in_stack_00000148 = (long *)0x8000000000000000;
          if (plVar14 != (long *)0x0) {
            _free(in_stack_00000078);
          }
          goto LAB_10139d784;
        }
        puVar11 = puVar5 + 0x1b;
        *(undefined8 **)(unaff_x29 + -0xb0) = puVar11;
        plVar8 = (long *)puVar5[0x12];
        if (plVar8 == unaff_x28) goto LAB_10139da28;
        in_stack_00000068 = (long *)puVar5[0x14];
        in_stack_00000198 = (long *)puVar5[0x13];
        in_stack_000001b0 = (long *)puVar5[0x16];
        plVar15 = (long *)puVar5[0x15];
        in_stack_000001c0 = (long *)puVar5[0x18];
        in_stack_000001b8 = (long *)puVar5[0x17];
        in_stack_000001d0 = (long *)puVar5[0x1a];
        in_stack_000001c8 = (long *)puVar5[0x19];
        unaff_x27 = &stack0x00000190;
        in_stack_00000190 = plVar8;
        in_stack_000001a0 = in_stack_00000068;
        if (plVar8 != (long *)0x8000000000000003) {
          in_stack_000001a8 = plVar15;
          in_stack_00000068 =
               (long *)FUN_108832ea0(&stack0x00000190,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(&stack0x00000190);
          plVar15 = in_stack_000001a8;
          goto LAB_10139da44;
        }
        if ((in_stack_00000198 == (long *)0x8000000000000000) ||
           (in_stack_00000198 == (long *)0x8000000000000001)) goto LAB_10139da44;
        in_stack_00000148 = plVar4;
        in_stack_00000150 = plVar3;
        in_stack_00000158 = in_stack_000001a8;
        in_stack_00000160 = plVar14;
        in_stack_00000168 = in_stack_00000078;
        in_stack_00000170 = plVar6;
        in_stack_00000178 = in_stack_00000198;
        in_stack_00000180 = in_stack_00000068;
        in_stack_00000188 = plVar15;
        in_stack_00000190 = plVar4;
        plVar8 = plVar3;
        in_stack_000001a0 = in_stack_000001a8;
        in_stack_000001b0 = in_stack_00000078;
        in_stack_000001b8 = plVar6;
        in_stack_000001c0 = in_stack_00000198;
        in_stack_000001c8 = in_stack_00000068;
        in_stack_000001d0 = plVar15;
        if (lVar2 == 3) goto LAB_10139d790;
        in_stack_00000198 = plVar3;
        in_stack_000001a8 = plVar14;
        in_stack_00000150 = (long *)FUN_1087e422c(lVar2,&UNK_10b21cb80,&UNK_10b20a590);
        in_stack_00000148 = (long *)0x8000000000000000;
        FUN_100cc5ae4(&stack0x00000190);
      }
    }
    lVar2 = ((ulong)((long)(puVar5 + lVar2 * 9) - (long)puVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
      FUN_100de6690(puVar11);
      puVar11 = puVar11 + 9;
    }
    if (lVar10 != 0) {
      _free(puVar5);
    }
  } while( true );
  do {
    plVar14 = plVar3 + 0xd;
    plVar4 = plVar14;
    unaff_x21 = in_stack_00000060;
    if (*plVar3 == -0x8000000000000000) break;
    plVar4 = (long *)plVar3[1];
    lVar10 = plVar3[2];
    in_stack_000001a8 = (long *)plVar3[6];
    in_stack_000001a0 = (long *)plVar3[5];
    in_stack_000001b8 = (long *)plVar3[8];
    in_stack_000001b0 = (long *)plVar3[7];
    in_stack_000001c8 = (long *)plVar3[10];
    in_stack_000001c0 = (long *)plVar3[9];
    in_stack_000001d0 = (long *)plVar3[0xb];
    in_stack_00000198 = (long *)plVar3[4];
    in_stack_00000190 = (long *)plVar3[3];
    unaff_x25 = (long *)0x8000000000000000;
    if (lVar10 == 0xb) {
      if (*plVar4 != 0x7470697263736564 || *(long *)((long)plVar4 + 3) != 0x6e6f697470697263)
      goto LAB_10139d29c;
      uVar13 = 2;
      uVar12 = 2;
    }
    else if (lVar10 == 4) {
      if ((int)*plVar4 != 0x656d616e) goto LAB_10139d29c;
      uVar13 = 1;
      uVar12 = 1;
    }
    else if ((lVar10 == 2) && ((short)*plVar4 == 0x6469)) {
      uVar13 = 0;
      uVar12 = 0;
    }
    else {
LAB_10139d29c:
      uVar13 = 3;
      uVar12 = 3;
    }
    if (*plVar3 != 0) {
      _free();
      uVar12 = uVar13;
    }
    plVar3 = in_stack_00000190;
    if (uVar12 < 2) {
      plVar4 = in_stack_000001a0;
      if (uVar12 == 0) {
        if (unaff_x23 == (long *)0x8000000000000000) {
          in_stack_00000190 = (long *)0x8000000000000005;
          if (plVar3 == (long *)0x8000000000000005) {
            in_stack_000001e0 = plVar14;
            plVar4 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
            plVar14 = in_stack_000001e0;
          }
          else {
            *(long **)(unaff_x29 + -0xb8) = plVar3;
            *(long **)(unaff_x29 + -0xa8) = in_stack_000001a0;
            *(long **)(unaff_x29 + -0xb0) = in_stack_00000198;
            *(long **)(unaff_x29 + -0x98) = in_stack_000001b0;
            *(long **)(unaff_x29 + -0xa0) = in_stack_000001a8;
            *(long **)(unaff_x29 + -0x88) = in_stack_000001c0;
            *(long **)(unaff_x29 + -0x90) = in_stack_000001b8;
            unaff_x27 = &stack0x00000190;
            *(long **)(unaff_x29 + -0x78) = in_stack_000001d0;
            *(long **)(unaff_x29 + -0x80) = in_stack_000001c8;
            if (plVar3 == (long *)0x8000000000000003) {
              if (in_stack_00000198 != (long *)0x8000000000000000) {
                in_stack_00000040 = in_stack_000001a8;
                unaff_x23 = in_stack_00000198;
                in_stack_00000060 = in_stack_000001a0;
                goto LAB_10139d1c0;
              }
            }
            else {
              in_stack_000001e0 = plVar14;
              plVar4 = (long *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
              FUN_100de6690(unaff_x29 + -0xb8);
              plVar14 = in_stack_000001e0;
            }
          }
          in_stack_000001e0 = plVar14;
          unaff_x23 = (long *)0x0;
joined_r0x00010139d8e0:
          bVar9 = true;
          in_stack_00000148 = (long *)0x8000000000000000;
          bVar1 = true;
          unaff_x28 = (long *)0x8000000000000005;
          in_stack_00000150 = plVar4;
          goto joined_r0x00010139d8e0;
        }
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca26b0;
        *(undefined8 *)(unaff_x29 + -0x68) = 2;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_000001e0 = plVar14;
        in_stack_00000150 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8)
        ;
      }
      else {
        if (in_stack_00000078 == (long *)0x8000000000000000) {
          in_stack_00000190 = (long *)0x8000000000000005;
          if (plVar3 == (long *)0x8000000000000005) {
            in_stack_000001e0 = plVar14;
            plVar4 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
            plVar14 = in_stack_000001e0;
          }
          else {
            *(long **)(unaff_x29 + -0xb8) = plVar3;
            *(long **)(unaff_x29 + -0xa8) = in_stack_000001a0;
            *(long **)(unaff_x29 + -0xb0) = in_stack_00000198;
            *(long **)(unaff_x29 + -0x98) = in_stack_000001b0;
            *(long **)(unaff_x29 + -0xa0) = in_stack_000001a8;
            *(long **)(unaff_x29 + -0x88) = in_stack_000001c0;
            *(long **)(unaff_x29 + -0x90) = in_stack_000001b8;
            unaff_x27 = &stack0x00000190;
            *(long **)(unaff_x29 + -0x78) = in_stack_000001d0;
            *(long **)(unaff_x29 + -0x80) = in_stack_000001c8;
            if (plVar3 == (long *)0x8000000000000003) {
              in_stack_00000078 = in_stack_00000198;
              if (in_stack_00000198 != (long *)0x8000000000000000) {
                in_stack_00000038 = in_stack_000001a8;
                in_stack_00000058 = in_stack_000001a0;
                goto LAB_10139d1c0;
              }
            }
            else {
              in_stack_000001e0 = plVar14;
              plVar4 = (long *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
              FUN_100de6690(unaff_x29 + -0xb8);
              plVar14 = in_stack_000001e0;
            }
          }
          in_stack_000001e0 = plVar14;
          in_stack_00000078 = (long *)0x0;
          goto joined_r0x00010139d8e0;
        }
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108c61018;
        *(undefined8 *)(unaff_x29 + -0x68) = 4;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_000001e0 = plVar14;
        in_stack_00000150 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8)
        ;
      }
LAB_10139d7b4:
      in_stack_00000148 = (long *)0x8000000000000000;
      unaff_x24 = in_stack_00000030;
      goto LAB_10139d628;
    }
    if (uVar12 == 2) {
      if (in_stack_00000070 != (long *)0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca155d;
        *(undefined8 *)(unaff_x29 + -0x68) = 0xb;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
        in_stack_000001e0 = plVar14;
        in_stack_00000150 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8)
        ;
        in_stack_00000148 = (long *)0x8000000000000000;
        bVar9 = true;
        bVar1 = true;
        unaff_x24 = in_stack_00000030;
        goto joined_r0x00010139d640;
      }
      in_stack_00000190 = (long *)0x8000000000000005;
      unaff_x28 = (long *)0x8000000000000005;
      if (plVar3 == (long *)0x8000000000000005) {
        in_stack_000001e0 = plVar14;
        plVar3 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
        plVar14 = in_stack_000001e0;
      }
      else {
        *(long **)(unaff_x29 + -0xb8) = plVar3;
        *(long **)(unaff_x29 + -0xa8) = in_stack_000001a0;
        *(long **)(unaff_x29 + -0xb0) = in_stack_00000198;
        *(long **)(unaff_x29 + -0x98) = in_stack_000001b0;
        *(long **)(unaff_x29 + -0xa0) = in_stack_000001a8;
        *(long **)(unaff_x29 + -0x88) = in_stack_000001c0;
        *(long **)(unaff_x29 + -0x90) = in_stack_000001b8;
        unaff_x27 = &stack0x00000190;
        *(long **)(unaff_x29 + -0x78) = in_stack_000001d0;
        *(long **)(unaff_x29 + -0x80) = in_stack_000001c8;
        if (plVar3 == (long *)0x8000000000000003) {
          in_stack_00000070 = in_stack_00000198;
          plVar3 = in_stack_000001a0;
          if (in_stack_00000198 != (long *)0x8000000000000000) {
            in_stack_00000048 = in_stack_000001a8;
            in_stack_00000068 = in_stack_000001a0;
            goto LAB_10139d1c0;
          }
        }
        else {
          in_stack_000001e0 = plVar14;
          plVar3 = (long *)FUN_108832ea0(unaff_x29 + -0xb8,unaff_x29 + -0x70,&UNK_10b20a5e0);
          FUN_100de6690(unaff_x29 + -0xb8);
          plVar14 = in_stack_000001e0;
        }
      }
      in_stack_000001e0 = plVar14;
      in_stack_00000148 = (long *)0x8000000000000000;
      bVar9 = true;
      bVar1 = true;
      unaff_x24 = in_stack_00000030;
      in_stack_00000150 = plVar3;
      goto LAB_10139d904;
    }
    in_stack_00000190 = (long *)0x8000000000000005;
    unaff_x28 = (long *)0x8000000000000005;
    if (plVar3 == (long *)0x8000000000000005) {
      in_stack_000001e0 = plVar14;
      in_stack_00000150 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
      goto LAB_10139d7b4;
    }
    *(long **)(unaff_x29 + -0xb8) = plVar3;
    *(long **)(unaff_x29 + -0xa8) = in_stack_000001a0;
    *(long **)(unaff_x29 + -0xb0) = in_stack_00000198;
    *(long **)(unaff_x29 + -0x98) = in_stack_000001b0;
    *(long **)(unaff_x29 + -0xa0) = in_stack_000001a8;
    *(long **)(unaff_x29 + -0x88) = in_stack_000001c0;
    *(long **)(unaff_x29 + -0x90) = in_stack_000001b8;
    *(long **)(unaff_x29 + -0x78) = in_stack_000001d0;
    *(long **)(unaff_x29 + -0x80) = in_stack_000001c8;
    FUN_100de6690(unaff_x29 + -0xb8);
LAB_10139d1c0:
    unaff_x27 = &stack0x00000190;
    unaff_x28 = (long *)0x8000000000000005;
    plVar3 = plVar14;
    plVar4 = plVar6;
    unaff_x21 = in_stack_00000060;
  } while (plVar14 != plVar6);
  unaff_x24 = in_stack_00000030;
  in_stack_00000060 = unaff_x21;
  in_stack_000001e0 = plVar14;
  if (unaff_x23 == (long *)0x8000000000000000) {
LAB_10139d5ec:
    unaff_x25 = (long *)0x8000000000000000;
    *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca26b0;
    *(undefined8 *)(unaff_x29 + -0x68) = 2;
    unaff_x23 = (long *)0x8000000000000000;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xb8;
    goto code_r0x00010139d618;
  }
  bVar1 = in_stack_00000078 == (long *)0x8000000000000000;
  if (bVar1) {
    *(undefined **)(unaff_x29 + -0x70) = &UNK_108c61018;
    *(undefined8 *)(unaff_x29 + -0x68) = 4;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
    in_stack_00000150 = (long *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
    in_stack_00000148 = (long *)0x8000000000000000;
    goto LAB_10139d718;
  }
  if (in_stack_00000070 == (long *)0x8000000000000000) goto code_r0x00010139d6cc;
  *(long **)(unaff_x29 + -0xc0) = in_stack_00000048;
  *(long **)(unaff_x29 + -0xd8) = in_stack_00000038;
  *(long **)(unaff_x29 + -0xe0) = in_stack_00000058;
  *(long **)(unaff_x29 + -200) = in_stack_00000068;
  *(long **)(unaff_x29 + -0xd0) = in_stack_00000070;
  *(long **)(unaff_x29 + -0xf8) = unaff_x21;
  *(long **)(unaff_x29 + -0x100) = unaff_x23;
  *(long **)(unaff_x29 + -0xe8) = in_stack_00000078;
  *(long **)(unaff_x29 + -0xf0) = in_stack_00000040;
  in_stack_00000148 = unaff_x23;
  in_stack_00000150 = unaff_x21;
  in_stack_00000158 = in_stack_00000040;
  in_stack_00000160 = in_stack_00000078;
  in_stack_00000168 = in_stack_00000058;
  in_stack_00000170 = in_stack_00000038;
  in_stack_00000178 = in_stack_00000070;
  in_stack_00000180 = in_stack_00000068;
  in_stack_00000188 = in_stack_00000048;
  if (plVar6 != plVar4) {
    in_stack_00000150 = (long *)FUN_1087e422c(uVar16,&UNK_10b21cb90,&UNK_10b20a590);
    in_stack_00000148 = (long *)0x8000000000000000;
    FUN_100cc5ae4(unaff_x29 + -0x100);
  }
  FUN_100de8910(unaff_x27 + 9);
  goto joined_r0x00010139d94c;
code_r0x00010139d6cc:
  *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca155d;
  *(undefined8 *)(unaff_x29 + -0x68) = 0xb;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0xb0) = &DAT_100c7b3a0;
  in_stack_00000150 = (long *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  in_stack_00000148 = (long *)0x8000000000000000;
  if (in_stack_00000078 != (long *)0x0) {
    _free(in_stack_00000058);
  }
LAB_10139d718:
  if (unaff_x23 != (long *)0x0) {
    _free(unaff_x21);
  }
  bVar9 = false;
joined_r0x00010139d8e0:
  unaff_x21 = in_stack_00000060;
  unaff_x24 = in_stack_00000030;
  if (in_stack_00000070 != (long *)0x8000000000000000) goto joined_r0x00010139d640;
  goto LAB_10139d904;
}

