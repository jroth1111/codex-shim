
void FUN_10128f1b4(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong unaff_x19;
  ulong *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *puVar10;
  char cVar11;
  long lVar12;
  ulong *unaff_x24;
  long *plVar13;
  ulong uVar14;
  long *unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  long *plVar15;
  undefined8 in_stack_00000000;
  ulong *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong *in_stack_00000020;
  ulong in_stack_00000028;
  long *in_stack_00000038;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  long *in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong *in_stack_000000d0;
  long *in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  long *in_stack_00000108;
  long *in_stack_00000110;
  ulong in_stack_00000118;
  long *in_stack_00000120;
  
code_r0x00010128f1b4:
  puVar5 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10128f1c4:
  unaff_x19 = unaff_x19 & 0x7fffffffffffffff;
joined_r0x00010128f1c8:
  plVar6 = in_stack_00000110;
  if (unaff_x19 != 0) {
    _free(unaff_x28);
    plVar6 = in_stack_00000110;
  }
LAB_10128f308:
  in_stack_00000110 = plVar6;
  FUN_100de8910(&stack0x00000108);
  cVar11 = '\0';
  unaff_x19 = 0x8000000000000000;
  plVar6 = in_stack_00000038;
  if (in_stack_000000c0 == unaff_x22) goto joined_r0x00010128f330;
LAB_10128f328:
  FUN_100de6690(&stack0x000000c0);
  plVar6 = in_stack_00000038;
joined_r0x00010128f330:
  do {
    puVar4 = unaff_x20;
    if (-1 < (long)unaff_x21) goto LAB_10128f34c;
LAB_10128f334:
    puVar4 = unaff_x20;
    if ((unaff_x21 & 0xfffffffffffffffe) != in_stack_00000028) {
      FUN_100de6690(&stack0x00000078);
    }
LAB_10128f34c:
    uVar14 = in_stack_00000070;
    uVar9 = in_stack_00000068;
    if ((unaff_x19 == 0x8000000000000000) || (unaff_x19 == 0x8000000000000001)) {
      *in_stack_00000008 = 0x8000000000000000;
      in_stack_00000008[1] = (ulong)puVar5;
      if (in_stack_00000070 != 0) {
        puVar10 = (undefined8 *)(in_stack_00000068 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (in_stack_00000060 != 0) {
        _free(uVar9);
      }
LAB_10128f604:
      lVar12 = ((ulong)((long)unaff_x24 - (long)puVar4) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100de6690(puVar4);
        puVar4 = puVar4 + 9;
      }
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000018);
      }
      return;
    }
    if (in_stack_00000070 == in_stack_00000060) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h19c3afd8cf01ef11E(&stack0x00000060);
    }
    puVar1 = (ulong *)(in_stack_00000068 + uVar14 * 0x20);
    *puVar1 = unaff_x19;
    puVar1[1] = (ulong)puVar5;
    puVar1[2] = (ulong)unaff_x27;
    *(char *)(puVar1 + 3) = cVar11;
    in_stack_00000070 = uVar14 + 1;
    unaff_x20 = unaff_x24;
    if (puVar4 == unaff_x24) {
LAB_10128f5b4:
      in_stack_00000008[1] = in_stack_00000068;
      *in_stack_00000008 = in_stack_00000060;
      in_stack_00000008[2] = in_stack_00000070;
      puVar4 = unaff_x20;
      if (*in_stack_00000008 != 0x8000000000000000) {
        in_stack_000000c8 = in_stack_00000008[1];
        in_stack_000000c0 = *in_stack_00000008;
        in_stack_000000d0 = (ulong *)in_stack_00000008[2];
        puVar4 = unaff_x24;
        if (unaff_x24 != unaff_x20) {
          uVar9 = FUN_1087e422c(in_stack_00000000,&UNK_10b21cb80,&UNK_10b20a590);
          *in_stack_00000008 = 0x8000000000000000;
          in_stack_00000008[1] = uVar9;
          FUN_100c99aa0(&stack0x000000c0);
          puVar4 = unaff_x20;
        }
      }
      goto LAB_10128f604;
    }
    unaff_x20 = puVar4 + 9;
    unaff_x21 = *puVar4;
    if (unaff_x21 == unaff_x22) goto LAB_10128f5b4;
    uVar14 = puVar4[2];
    plVar15 = (long *)puVar4[1];
    in_stack_00000098 = puVar4[4];
    in_stack_00000090 = puVar4[3];
    uVar7 = puVar4[6];
    in_stack_000000a0 = puVar4[5];
    in_stack_000000b8 = puVar4[8];
    in_stack_000000b0 = puVar4[7];
    uVar9 = unaff_x21 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x21) {
      uVar9 = 5;
    }
    in_stack_00000038 = plVar6;
    in_stack_00000078 = unaff_x21;
    in_stack_00000080 = plVar15;
    in_stack_00000088 = uVar14;
    in_stack_000000a8 = uVar7;
    if (uVar9 != 4) {
      if (uVar9 == 5) {
        if ((in_stack_00000098 != 0) && (in_stack_00000098 * 9 != -0x11)) {
          _free(in_stack_00000090 + in_stack_00000098 * -8 + -8);
        }
        plVar13 = plVar15 + uVar14 * 0xd;
        in_stack_000000c0 = unaff_x22;
        in_stack_00000108 = plVar15;
        in_stack_00000110 = plVar15;
        in_stack_00000118 = unaff_x21;
        in_stack_00000120 = plVar13;
        if (uVar14 != 0) {
          unaff_x19 = 0x8000000000000000;
          cVar11 = '\x06';
          unaff_x27 = plVar15;
          break;
        }
        unaff_x19 = 0;
        goto LAB_10128f18c;
      }
      puVar5 = (ulong *)FUN_108832ea0(&stack0x00000078,unaff_x29 + -0x68,&UNK_10b21cf60);
      cVar11 = '\0';
      unaff_x19 = 0x8000000000000000;
      puVar4 = unaff_x20;
      if ((long)unaff_x21 < 0) goto LAB_10128f334;
      goto LAB_10128f34c;
    }
    uVar9 = puVar4[1];
    puVar1 = (ulong *)puVar4[2];
    uVar14 = puVar4[3];
    *(ulong **)(unaff_x29 + -0xb0) = puVar1;
    *(ulong **)(unaff_x29 + -0xa8) = puVar1;
    *(ulong *)(unaff_x29 + -0xa0) = uVar9;
    *(ulong **)(unaff_x29 + -0x98) = puVar1 + uVar14 * 9;
    unaff_x28 = puVar1;
    if (uVar14 == 0) {
LAB_10128f0a0:
      uVar3 = 0;
LAB_10128f0a4:
      puVar4 = (ulong *)FUN_1087e422c(uVar3,&UNK_10b231bd8,&UNK_10b20a590);
LAB_10128f0c0:
      cVar11 = '\0';
      unaff_x19 = 0x8000000000000000;
      puVar5 = puVar4;
      in_stack_00000038 = plVar6;
    }
    else {
      unaff_x28 = puVar1 + 9;
      uVar7 = *puVar1;
      *(ulong **)(unaff_x29 + -0xa8) = unaff_x28;
      if (uVar7 == unaff_x22) goto LAB_10128f0a0;
      in_stack_000000d0 = (ulong *)puVar1[2];
      in_stack_000000c8 = puVar1[1];
      in_stack_000000e0 = puVar1[4];
      in_stack_000000d8 = (long *)puVar1[3];
      in_stack_000000f0 = puVar1[6];
      in_stack_000000e8 = puVar1[5];
      in_stack_00000100 = puVar1[8];
      in_stack_000000f8 = puVar1[7];
      in_stack_000000c0 = uVar7;
      FUN_100791aa0(unaff_x29 + -0x68,&stack0x000000c0);
      if (*(char *)(unaff_x29 + -0x68) == '\x01') {
        puVar4 = *(ulong **)(unaff_x29 + -0x60);
        goto LAB_10128f0c0;
      }
      if (uVar14 == 1) {
LAB_10128f258:
        uVar3 = 1;
        goto LAB_10128f0a4;
      }
      cVar11 = *(char *)(unaff_x29 + -0x67);
      unaff_x28 = puVar1 + 0x12;
      *(ulong **)(unaff_x29 + -0xa8) = unaff_x28;
      uVar7 = puVar1[9];
      if (uVar7 == unaff_x22) goto LAB_10128f258;
      puVar4 = (ulong *)puVar1[0xb];
      unaff_x19 = puVar1[10];
      in_stack_000000e0 = puVar1[0xd];
      in_stack_00000038 = (long *)puVar1[0xc];
      in_stack_000000f0 = puVar1[0xf];
      in_stack_000000e8 = puVar1[0xe];
      in_stack_00000100 = puVar1[0x11];
      in_stack_000000f8 = puVar1[0x10];
      in_stack_000000c0 = uVar7;
      in_stack_000000c8 = unaff_x19;
      in_stack_000000d0 = puVar4;
      in_stack_000000d8 = in_stack_00000038;
      if (uVar7 != 0x8000000000000003) {
        puVar4 = (ulong *)FUN_108832ea0(&stack0x000000c0,unaff_x29 + -0x68,&UNK_10b20a5e0);
        FUN_100de6690(&stack0x000000c0);
        goto LAB_10128f0c0;
      }
      if ((unaff_x19 == 0x8000000000000000) || (unaff_x19 == 0x8000000000000001))
      goto LAB_10128f0c0;
      puVar5 = puVar4;
      if (uVar14 != 2) {
        puVar5 = (ulong *)FUN_1087e422c(uVar14,&UNK_10b21cb80,&UNK_10b20a590);
        if (unaff_x19 != 0) {
          _free(puVar4);
        }
        unaff_x19 = 0x8000000000000000;
      }
    }
    lVar12 = ((ulong)((long)(puVar1 + uVar14 * 9) - (long)unaff_x28) >> 3) * -0x71c71c71c71c71c7 + 1
    ;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100de6690(unaff_x28);
      unaff_x28 = unaff_x28 + 9;
    }
    unaff_x24 = in_stack_00000020;
    unaff_x27 = in_stack_00000038;
    plVar6 = in_stack_00000038;
    if (uVar9 != 0) {
      _free(puVar1);
    }
  } while( true );
  while( true ) {
    plVar15 = (long *)unaff_x27[1];
    in_stack_000000d8 = (long *)unaff_x27[6];
    in_stack_000000d0 = (ulong *)unaff_x27[5];
    in_stack_000000e8 = unaff_x27[8];
    in_stack_000000e0 = unaff_x27[7];
    in_stack_000000f8 = unaff_x27[10];
    in_stack_000000f0 = unaff_x27[9];
    in_stack_00000100 = unaff_x27[0xb];
    in_stack_000000c8 = unaff_x27[4];
    in_stack_000000c0 = unaff_x27[3];
    if (unaff_x27[2] == 0xb) {
      iVar8 = 1;
      if (*plVar15 != 0x7470697263736564 || *(long *)((long)plVar15 + 3) != 0x6e6f697470697263) {
        iVar8 = 2;
      }
    }
    else if (unaff_x27[2] == 0xf) {
      iVar8 = 2;
      if (*plVar15 == 0x6e696e6f73616572 && *(long *)((long)plVar15 + 7) == 0x74726f666645676e) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 2;
    }
    if (*unaff_x27 != 0) {
      _free();
    }
    uVar9 = in_stack_000000c0;
    if (iVar8 == 0) {
      if (cVar11 != '\x06') {
        *(undefined **)(unaff_x29 + -0x68) = &UNK_108cbdf8d;
        *(undefined8 *)(unaff_x29 + -0x60) = 0xf;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x68;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
        in_stack_00000110 = plVar6;
        puVar5 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
        unaff_x24 = in_stack_00000020;
        goto LAB_10128f1c4;
      }
      in_stack_000000c0 = 0x8000000000000005;
      unaff_x22 = 0x8000000000000005;
      if (uVar9 == 0x8000000000000005) {
        in_stack_00000110 = plVar6;
        puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        unaff_x24 = in_stack_00000020;
        goto LAB_10128f1c4;
      }
      *(ulong *)(unaff_x29 + -0xb0) = uVar9;
      *(ulong **)(unaff_x29 + -0xa0) = in_stack_000000d0;
      *(ulong *)(unaff_x29 + -0xa8) = in_stack_000000c8;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_000000e0;
      *(long **)(unaff_x29 + -0x98) = in_stack_000000d8;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_000000f0;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_000000e8;
      *(ulong *)(unaff_x29 + -0x70) = in_stack_00000100;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_000000f8;
      FUN_100791aa0(unaff_x29 + -0x68,unaff_x29 + -0xb0);
      if (*(char *)(unaff_x29 + -0x68) == '\x01') {
        puVar5 = *(ulong **)(unaff_x29 + -0x60);
        unaff_x24 = in_stack_00000020;
        in_stack_00000110 = plVar6;
        goto LAB_10128f1c4;
      }
      cVar11 = *(char *)(unaff_x29 + -0x67);
    }
    else if (iVar8 == 1) {
      if (unaff_x19 != 0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x68) = &UNK_108ca155d;
        *(undefined8 *)(unaff_x29 + -0x60) = 0xb;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x68;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
        in_stack_00000110 = plVar6;
        puVar5 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
        unaff_x24 = in_stack_00000020;
        goto joined_r0x00010128f1c8;
      }
      in_stack_000000c0 = 0x8000000000000005;
      unaff_x22 = 0x8000000000000005;
      if (uVar9 == 0x8000000000000005) {
        in_stack_00000110 = plVar6;
        puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        unaff_x24 = in_stack_00000020;
        plVar6 = in_stack_00000110;
        goto LAB_10128f308;
      }
      *(ulong *)(unaff_x29 + -0xb0) = uVar9;
      *(ulong **)(unaff_x29 + -0xa0) = in_stack_000000d0;
      *(ulong *)(unaff_x29 + -0xa8) = in_stack_000000c8;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_000000e0;
      *(long **)(unaff_x29 + -0x98) = in_stack_000000d8;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_000000f0;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_000000e8;
      *(ulong *)(unaff_x29 + -0x70) = in_stack_00000100;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_000000f8;
      if (uVar9 != 0x8000000000000003) {
        in_stack_00000110 = plVar6;
        puVar5 = (ulong *)FUN_108832ea0(unaff_x29 + -0xb0,unaff_x29 + -0x68,&UNK_10b20a5e0);
        FUN_100de6690(unaff_x29 + -0xb0);
        unaff_x24 = in_stack_00000020;
        plVar6 = in_stack_00000110;
        goto LAB_10128f308;
      }
      unaff_x24 = in_stack_00000020;
      puVar5 = in_stack_000000d0;
      unaff_x28 = in_stack_000000d0;
      if (in_stack_000000c8 == 0x8000000000000000) goto LAB_10128f308;
      in_stack_00000038 = in_stack_000000d8;
      unaff_x19 = in_stack_000000c8;
    }
    else {
      in_stack_000000c0 = 0x8000000000000005;
      unaff_x22 = 0x8000000000000005;
      if (uVar9 == 0x8000000000000005) {
        in_stack_00000110 = plVar6;
        puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        unaff_x24 = in_stack_00000020;
        goto LAB_10128f1c4;
      }
      *(ulong *)(unaff_x29 + -0xb0) = uVar9;
      *(ulong **)(unaff_x29 + -0xa0) = in_stack_000000d0;
      *(ulong *)(unaff_x29 + -0xa8) = in_stack_000000c8;
      *(ulong *)(unaff_x29 + -0x90) = in_stack_000000e0;
      *(long **)(unaff_x29 + -0x98) = in_stack_000000d8;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_000000f0;
      *(ulong *)(unaff_x29 + -0x88) = in_stack_000000e8;
      *(ulong *)(unaff_x29 + -0x70) = in_stack_00000100;
      *(ulong *)(unaff_x29 + -0x78) = in_stack_000000f8;
      FUN_100de6690(unaff_x29 + -0xb0);
    }
    unaff_x22 = 0x8000000000000005;
    unaff_x27 = plVar6;
    plVar15 = plVar13;
    plVar2 = in_stack_00000038;
    if (plVar6 == plVar13) break;
    plVar6 = unaff_x27 + 0xd;
    plVar15 = plVar6;
    plVar2 = in_stack_00000038;
    if (*unaff_x27 == -0x8000000000000000) break;
  }
  unaff_x27 = plVar2;
  unaff_x24 = in_stack_00000020;
  in_stack_00000038 = unaff_x27;
  in_stack_00000110 = plVar6;
  if (cVar11 == '\x06') {
LAB_10128f18c:
    *(undefined **)(unaff_x29 + -0x68) = &UNK_108cbdf8d;
    *(undefined8 *)(unaff_x29 + -0x60) = 0xf;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x68;
    *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xb0;
    goto code_r0x00010128f1b4;
  }
  if (unaff_x19 == 0x8000000000000000) {
    *(undefined **)(unaff_x29 + -0x68) = &UNK_108ca155d;
    *(undefined8 *)(unaff_x29 + -0x60) = 0xb;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x68;
    *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
    puVar5 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
    plVar6 = in_stack_00000110;
    goto LAB_10128f308;
  }
  puVar5 = unaff_x28;
  if (plVar13 != plVar15) {
    puVar5 = (ulong *)FUN_1087e422c(uVar7,&UNK_10b21cb90,&UNK_10b20a590);
    if (unaff_x19 != 0) {
      _free(unaff_x28);
    }
    unaff_x19 = 0x8000000000000000;
  }
  FUN_100de8910(&stack0x00000108);
  plVar6 = unaff_x27;
  if (in_stack_000000c0 != unaff_x22) goto LAB_10128f328;
  goto joined_r0x00010128f330;
}

