
void FUN_101226804(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong unaff_x20;
  long *plVar10;
  ulong *unaff_x22;
  ulong *puVar11;
  ulong unaff_x23;
  long lVar12;
  ulong unaff_x25;
  long *plVar13;
  ulong unaff_x26;
  long lVar14;
  ulong uVar15;
  ulong unaff_x27;
  long unaff_x29;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000000;
  ulong *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong *in_stack_00000040;
  ulong in_stack_00000048;
  ulong uStack0000000000000050;
  ulong in_stack_00000058;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
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
  long *in_stack_00000188;
  long *in_stack_00000190;
  ulong in_stack_00000198;
  long *in_stack_000001a0;
  
code_r0x000101226804:
  uVar3 = FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_101226818:
  in_stack_00000110 = 0x8000000000000000;
  in_stack_00000118 = uVar3;
  if (unaff_x25 == 0x8000000000000000) goto LAB_101226ae4;
joined_r0x000101226824:
  in_stack_00000110 = 0x8000000000000000;
  if (unaff_x26 != 0) {
    in_stack_00000110 = 0x8000000000000000;
    puVar9 = (undefined8 *)(unaff_x20 + 8);
    do {
      if (puVar9[-1] != 0) {
        _free(*puVar9);
      }
      puVar9 = puVar9 + 3;
      unaff_x26 = unaff_x26 - 1;
    } while (unaff_x26 != 0);
  }
  if (unaff_x25 != 0) {
    _free(unaff_x20);
  }
LAB_101226ae4:
  unaff_x27 = unaff_x27 & 0x7fffffffffffffff;
joined_r0x000101226af0:
  if (unaff_x27 != 0) {
    _free(in_stack_00000038);
  }
  FUN_100de8910(&stack0x00000188);
  if (in_stack_00000140 != unaff_x23) {
    FUN_100de6690(&stack0x00000140);
  }
joined_r0x000101226b14:
  do {
    puVar11 = unaff_x22;
    if (-1 < (long)in_stack_00000058) goto LAB_101226b30;
LAB_101226b18:
    puVar11 = unaff_x22;
    if ((in_stack_00000058 & 0xfffffffffffffffe) != in_stack_00000028) {
      FUN_100de6690(&stack0x000000c8);
    }
LAB_101226b30:
    uVar15 = in_stack_00000090;
    uVar3 = in_stack_00000088;
    if (in_stack_00000110 == 0x8000000000000000) {
      *in_stack_00000008 = 0x8000000000000000;
      in_stack_00000008[1] = in_stack_00000118;
      if (in_stack_00000090 != 0) {
        uVar6 = 0;
        do {
          plVar13 = (long *)(uVar3 + uVar6 * 0x30);
          if (*plVar13 != 0) {
            _free(plVar13[1]);
          }
          lVar12 = plVar13[4];
          lVar14 = plVar13[5];
          if (lVar14 != 0) {
            puVar9 = (undefined8 *)(lVar12 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (plVar13[3] != 0) {
            _free(lVar12);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar15);
      }
      if (in_stack_00000080 != 0) {
        _free(uVar3);
      }
LAB_101226d1c:
      lVar12 = ((ulong)((long)in_stack_00000040 - (long)puVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100de6690(puVar11);
        puVar11 = puVar11 + 9;
      }
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000018);
      }
      return;
    }
    in_stack_000000b0 = in_stack_00000128;
    in_stack_000000a8 = in_stack_00000120;
    in_stack_000000c0 = in_stack_00000138;
    in_stack_000000b8 = in_stack_00000130;
    in_stack_00000098 = in_stack_00000110;
    in_stack_000000a0 = in_stack_00000118;
    if (in_stack_00000090 == in_stack_00000080) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h20812506ba72c632E(&stack0x00000080);
    }
    puVar4 = (ulong *)(in_stack_00000088 + uVar15 * 0x30);
    puVar4[1] = in_stack_000000a0;
    *puVar4 = in_stack_00000098;
    puVar4[3] = in_stack_000000b0;
    puVar4[2] = in_stack_000000a8;
    puVar4[5] = in_stack_000000c0;
    puVar4[4] = in_stack_000000b8;
    in_stack_00000090 = uVar15 + 1;
    unaff_x22 = in_stack_00000040;
    if (puVar11 == in_stack_00000040) {
LAB_101226cd4:
      in_stack_00000008[1] = in_stack_00000088;
      *in_stack_00000008 = in_stack_00000080;
      in_stack_00000008[2] = in_stack_00000090;
      puVar11 = unaff_x22;
      if (*in_stack_00000008 != 0x8000000000000000) {
        in_stack_00000148 = in_stack_00000008[1];
        in_stack_00000140 = *in_stack_00000008;
        in_stack_00000150 = in_stack_00000008[2];
        puVar11 = in_stack_00000040;
        if (in_stack_00000040 != unaff_x22) {
          uVar3 = FUN_1087e422c(in_stack_00000000,&UNK_10b21cb80,&UNK_10b20a590);
          *in_stack_00000008 = 0x8000000000000000;
          in_stack_00000008[1] = uVar3;
          FUN_100cbf72c(&stack0x00000140);
          puVar11 = unaff_x22;
        }
      }
      goto LAB_101226d1c;
    }
    unaff_x22 = puVar11 + 9;
    in_stack_00000058 = *puVar11;
    if (in_stack_00000058 == unaff_x23) goto LAB_101226cd4;
    uVar15 = puVar11[2];
    plVar13 = (long *)puVar11[1];
    in_stack_000000e8 = puVar11[4];
    in_stack_000000e0 = puVar11[3];
    uVar6 = puVar11[6];
    in_stack_000000f0 = puVar11[5];
    in_stack_00000108 = puVar11[8];
    in_stack_00000100 = puVar11[7];
    uVar3 = in_stack_00000058 ^ 0x8000000000000000;
    if (-1 < (long)in_stack_00000058) {
      uVar3 = 5;
    }
    in_stack_000000c8 = in_stack_00000058;
    in_stack_000000d0 = plVar13;
    in_stack_000000d8 = uVar15;
    in_stack_000000f8 = uVar6;
    if (uVar3 != 4) {
      if (uVar3 == 5) {
        unaff_x20 = 0x8000000000000000;
        if ((in_stack_000000e8 != 0) && (in_stack_000000e8 * 9 != -0x11)) {
          _free(in_stack_000000e0 + in_stack_000000e8 * -8 + -8);
        }
        plVar10 = plVar13 + uVar15 * 0xd;
        unaff_x26 = uVar6;
        in_stack_00000140 = unaff_x23;
        in_stack_00000188 = plVar13;
        in_stack_00000190 = plVar13;
        in_stack_00000198 = in_stack_00000058;
        in_stack_000001a0 = plVar10;
        if (uVar15 == 0) {
          unaff_x25 = 0x8000000000000000;
          *(undefined8 *)(unaff_x29 + -0xd0) = 0x8000000000000000;
          goto LAB_1012267d8;
        }
        unaff_x25 = 0x8000000000000000;
        unaff_x27 = 0x8000000000000000;
        uStack0000000000000050 = 0x8000000000000000;
        break;
      }
      in_stack_00000118 = FUN_108832ea0(&stack0x000000c8,unaff_x29 + -0xb8,&UNK_10b20bb40);
      in_stack_00000110 = 0x8000000000000000;
      puVar11 = unaff_x22;
      if ((long)in_stack_00000058 < 0) goto LAB_101226b18;
      goto LAB_101226b30;
    }
    uVar3 = puVar11[1];
    puVar4 = (ulong *)puVar11[2];
    uVar15 = puVar11[3];
    *(ulong **)(unaff_x29 + -0xa0) = puVar4;
    *(ulong **)(unaff_x29 + -0x98) = puVar4;
    *(ulong *)(unaff_x29 + -0x90) = uVar3;
    *(ulong **)(unaff_x29 + -0x88) = puVar4 + uVar15 * 9;
    puVar11 = puVar4;
    if (uVar15 == 0) {
LAB_10122668c:
      uVar2 = FUN_1087e422c(0,&UNK_10b2317a8,&UNK_10b20a590);
LAB_1012266a8:
      in_stack_00000110 = 0x8000000000000000;
      in_stack_00000118 = uVar2;
    }
    else {
      puVar11 = puVar4 + 9;
      uVar6 = *puVar4;
      *(ulong **)(unaff_x29 + -0x98) = puVar11;
      if (uVar6 == unaff_x23) goto LAB_10122668c;
      uVar2 = puVar4[2];
      uVar16 = puVar4[1];
      in_stack_00000160 = puVar4[4];
      uVar17 = puVar4[3];
      in_stack_00000170 = puVar4[6];
      in_stack_00000168 = puVar4[5];
      in_stack_00000180 = puVar4[8];
      in_stack_00000178 = puVar4[7];
      in_stack_00000140 = uVar6;
      in_stack_00000148 = uVar16;
      in_stack_00000150 = uVar2;
      in_stack_00000158 = uVar17;
      if (uVar6 != 0x8000000000000003) {
        uVar2 = FUN_108832ea0(&stack0x00000140,unaff_x29 + -0xb8,&UNK_10b20a5e0);
        FUN_100de6690(&stack0x00000140);
        goto LAB_1012266a8;
      }
      if ((uVar16 == 0x8000000000000000) || (uVar16 == 0x8000000000000001)) goto LAB_1012266a8;
      if (uVar15 == 1) {
LAB_101226780:
        in_stack_00000140 = uVar6;
        uVar6 = FUN_1087e422c(1,&UNK_10b2317a8,&UNK_10b20a590);
LAB_101226798:
        in_stack_00000110 = 0x8000000000000000;
        in_stack_00000118 = uVar6;
        if (uVar16 != 0) {
          _free(uVar2);
        }
      }
      else {
        puVar11 = puVar4 + 0x12;
        *(ulong **)(unaff_x29 + -0x98) = puVar11;
        in_stack_00000140 = puVar4[9];
        if (in_stack_00000140 == unaff_x23) goto LAB_101226780;
        in_stack_00000150 = puVar4[0xb];
        in_stack_00000148 = puVar4[10];
        in_stack_00000160 = puVar4[0xd];
        in_stack_00000158 = puVar4[0xc];
        in_stack_00000170 = puVar4[0xf];
        in_stack_00000168 = puVar4[0xe];
        in_stack_00000180 = puVar4[0x11];
        in_stack_00000178 = puVar4[0x10];
        FUN_1006739a0(unaff_x29 + -0x100,&stack0x00000140);
        uVar1 = *(ulong *)(unaff_x29 + -0x100);
        uVar6 = *(ulong *)(unaff_x29 + -0xf8);
        if (uVar1 == 0x8000000000000000) goto LAB_101226798;
        in_stack_00000138 = *(ulong *)(unaff_x29 + -0xf0);
        in_stack_00000110 = uVar16;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar17;
        in_stack_00000128 = uVar1;
        in_stack_00000130 = uVar6;
        in_stack_00000140 = uVar16;
        in_stack_00000148 = uVar2;
        in_stack_00000150 = uVar17;
        in_stack_00000158 = uVar1;
        in_stack_00000160 = uVar6;
        in_stack_00000168 = in_stack_00000138;
        if (uVar15 != 2) {
          in_stack_00000118 = FUN_1087e422c(uVar15,&UNK_10b21cb80,&UNK_10b20a590);
          in_stack_00000110 = 0x8000000000000000;
          FUN_100e59240(&stack0x00000140);
        }
      }
    }
    lVar12 = ((ulong)((long)(puVar4 + uVar15 * 9) - (long)puVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100de6690(puVar11);
      puVar11 = puVar11 + 9;
    }
    if (uVar3 != 0) {
      _free(puVar4);
    }
  } while( true );
  do {
    plVar5 = plVar13 + 0xd;
    plVar7 = plVar5;
    if (*plVar13 == -0x8000000000000000) break;
    plVar7 = (long *)plVar13[1];
    in_stack_00000158 = plVar13[6];
    in_stack_00000150 = plVar13[5];
    in_stack_00000168 = plVar13[8];
    in_stack_00000160 = plVar13[7];
    in_stack_00000178 = plVar13[10];
    in_stack_00000170 = plVar13[9];
    in_stack_00000180 = plVar13[0xb];
    in_stack_00000148 = plVar13[4];
    in_stack_00000140 = plVar13[3];
    if (plVar13[2] == 0xb) {
      iVar8 = 1;
      if (*plVar7 != 0x614e6e6967756c70 || *(long *)((long)plVar7 + 3) != 0x73656d614e6e6967) {
        iVar8 = 2;
      }
    }
    else if (plVar13[2] == 0xf) {
      iVar8 = 2;
      if (*plVar7 == 0x6c7074656b72616d && *(long *)((long)plVar7 + 7) == 0x656d614e6563616c) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 2;
    }
    if (*plVar13 != 0) {
      _free();
    }
    uVar3 = in_stack_00000140;
    unaff_x20 = in_stack_00000048;
    if (iVar8 == 0) {
      if (unaff_x27 != 0x8000000000000000) {
        *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
        *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cbffd1;
        *(undefined8 *)(unaff_x29 + -0xb0) = 0xf;
        *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xb8;
        *(undefined **)(unaff_x29 + -0x98) = &DAT_100c7b3a0;
        in_stack_00000190 = plVar5;
        uVar3 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
        goto LAB_101226818;
      }
      in_stack_00000140 = 0x8000000000000005;
      unaff_x23 = 0x8000000000000005;
      if (uVar3 == 0x8000000000000005) {
        unaff_x27 = 0;
        *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
        in_stack_00000190 = plVar5;
        uVar3 = FUN_1088561c0(&UNK_108cde170,0x10);
        goto LAB_101226818;
      }
      *(ulong *)(unaff_x29 + -0xa0) = uVar3;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_00000150;
      *(ulong *)(unaff_x29 + -0x98) = in_stack_00000148;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_00000160;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_00000158;
      *(ulong *)(unaff_x29 + -0x70) = in_stack_00000170;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_00000168;
      *(ulong *)(unaff_x29 + -0x60) = in_stack_00000180;
      *(ulong *)(unaff_x29 + -0x68) = in_stack_00000178;
      if (uVar3 != 0x8000000000000003) {
        *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
        in_stack_00000190 = plVar5;
        uVar3 = FUN_108832ea0(unaff_x29 + -0xa0,unaff_x29 + -0xb8,&UNK_10b20a5e0);
        unaff_x27 = 0;
        FUN_100de6690(unaff_x29 + -0xa0);
        goto LAB_101226818;
      }
      if (in_stack_00000148 == 0x8000000000000000) {
        unaff_x27 = 0;
        *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
        uVar3 = in_stack_00000150;
        in_stack_00000190 = plVar5;
        goto LAB_101226818;
      }
      in_stack_00000030 = in_stack_00000158;
      unaff_x27 = in_stack_00000148;
      in_stack_00000038 = in_stack_00000150;
    }
    else {
      if (iVar8 == 1) {
        if (unaff_x25 != 0x8000000000000000) {
          *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
          *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cbffe0;
          *(undefined8 *)(unaff_x29 + -0xb0) = 0xb;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xb8;
          *(undefined **)(unaff_x29 + -0x98) = &DAT_100c7b3a0;
          in_stack_00000190 = plVar5;
          in_stack_00000118 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
          goto joined_r0x000101226824;
        }
        in_stack_00000140 = 0x8000000000000005;
        unaff_x23 = 0x8000000000000005;
        if (uVar3 == 0x8000000000000005) {
          *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
          in_stack_00000190 = plVar5;
          in_stack_00000118 = FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          *(ulong *)(unaff_x29 + -0xa0) = uVar3;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_00000150;
          *(ulong *)(unaff_x29 + -0x98) = in_stack_00000148;
          *(ulong *)(unaff_x29 + -0x80) = in_stack_00000160;
          *(ulong *)(unaff_x29 + -0x88) = in_stack_00000158;
          *(ulong *)(unaff_x29 + -0x70) = in_stack_00000170;
          *(ulong *)(unaff_x29 + -0x78) = in_stack_00000168;
          *(ulong *)(unaff_x29 + -0x60) = in_stack_00000180;
          *(ulong *)(unaff_x29 + -0x68) = in_stack_00000178;
          FUN_1006739a0(unaff_x29 + -0xb8,unaff_x29 + -0xa0);
          unaff_x25 = *(ulong *)(unaff_x29 + -0xb8);
          if (unaff_x25 != 0x8000000000000000) {
            in_stack_00000048 = *(ulong *)(unaff_x29 + -0xb0);
            unaff_x26 = *(ulong *)(unaff_x29 + -0xa8);
            uStack0000000000000050 = unaff_x25;
            goto LAB_101226404;
          }
          *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
          *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
          *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
          in_stack_00000118 = *(ulong *)(unaff_x29 + -0xb0);
          in_stack_00000190 = plVar5;
        }
        in_stack_00000110 = 0x8000000000000000;
        goto LAB_101226ae4;
      }
      in_stack_00000140 = 0x8000000000000005;
      unaff_x23 = 0x8000000000000005;
      if (uVar3 == 0x8000000000000005) {
        *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
        *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
        *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
        in_stack_00000190 = plVar5;
        uVar3 = FUN_1088561c0(&UNK_108cde170,0x10);
        goto LAB_101226818;
      }
      *(ulong *)(unaff_x29 + -0xa0) = uVar3;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_00000150;
      *(ulong *)(unaff_x29 + -0x98) = in_stack_00000148;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_00000160;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_00000158;
      *(ulong *)(unaff_x29 + -0x70) = in_stack_00000170;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_00000168;
      *(ulong *)(unaff_x29 + -0x60) = in_stack_00000180;
      *(ulong *)(unaff_x29 + -0x68) = in_stack_00000178;
      FUN_100de6690(unaff_x29 + -0xa0);
    }
LAB_101226404:
    unaff_x23 = 0x8000000000000005;
    plVar7 = plVar10;
    plVar13 = plVar5;
  } while (plVar5 != plVar10);
  *(ulong *)(unaff_x29 + -200) = in_stack_00000048;
  *(ulong *)(unaff_x29 + -0xc0) = unaff_x26;
  *(ulong *)(unaff_x29 + -0xd0) = uStack0000000000000050;
  unaff_x20 = in_stack_00000048;
  in_stack_00000190 = plVar5;
  if (unaff_x27 == 0x8000000000000000) {
LAB_1012267d8:
    *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cbffd1;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0xf;
    unaff_x27 = 0;
    *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xb8;
    *(undefined **)(unaff_x29 + -0x98) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xa0;
    goto code_r0x000101226804;
  }
  if (unaff_x25 == 0x8000000000000000) goto code_r0x00010122685c;
  in_stack_00000118 = in_stack_00000038;
  in_stack_00000120 = in_stack_00000030;
  in_stack_00000130 = in_stack_00000048;
  *(ulong *)(unaff_x29 + -0xf8) = in_stack_00000038;
  *(ulong *)(unaff_x29 + -0x100) = unaff_x27;
  *(ulong *)(unaff_x29 + -0xe8) = unaff_x25;
  *(ulong *)(unaff_x29 + -0xf0) = in_stack_00000030;
  *(ulong *)(unaff_x29 + -0xd8) = unaff_x26;
  *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000048;
  in_stack_00000110 = unaff_x27;
  in_stack_00000128 = unaff_x25;
  in_stack_00000138 = unaff_x26;
  if (plVar10 != plVar7) {
    in_stack_00000118 = FUN_1087e422c(uVar6,&UNK_10b21cb90,&UNK_10b20a590);
    in_stack_00000110 = 0x8000000000000000;
    FUN_100e59240(unaff_x29 + -0x100);
  }
  FUN_100de8910(&stack0x00000188);
  goto joined_r0x000101226b14;
code_r0x00010122685c:
  *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cbffe0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0xb;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xb8;
  *(undefined **)(unaff_x29 + -0x98) = &DAT_100c7b3a0;
  in_stack_00000118 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  in_stack_00000110 = 0x8000000000000000;
  goto joined_r0x000101226af0;
}

