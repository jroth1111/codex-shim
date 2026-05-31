
void FUN_1012adc04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 in_x5;
  code *pcVar19;
  long lVar20;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar21;
  undefined8 *puVar22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long *in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  
  uVar18 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
  if ((-0x7fffffffffffffff < in_stack_00000048) && (in_stack_00000048 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_00000050) && (in_stack_00000050 != 0)) {
    _free(in_stack_00000070);
  }
  if ((-0x7fffffffffffffff < in_stack_00000058) && (in_stack_00000058 != 0)) {
    _free(in_stack_00000078);
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_00000060) && (in_stack_00000060 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_00000068) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000040);
  }
  *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
  in_stack_00000198 = 0x8000000000000001;
  in_stack_000001a0 = uVar18;
  in_stack_000001a8 = in_x5;
  plVar17 = (long *)FUN_100654604();
  in_stack_00000168 = unaff_x23[0xd];
  in_stack_00000160 = unaff_x23[0xc];
  in_stack_00000178 = unaff_x23[0xf];
  in_stack_00000170 = unaff_x23[0xe];
  in_stack_00000188 = unaff_x23[0x11];
  in_stack_00000180 = unaff_x23[0x10];
  in_stack_00000128 = unaff_x23[5];
  in_stack_00000120 = unaff_x23[4];
  in_stack_00000138 = unaff_x23[7];
  in_stack_00000130 = unaff_x23[6];
  in_stack_00000148 = unaff_x23[9];
  in_stack_00000140 = unaff_x23[8];
  in_stack_00000158 = unaff_x23[0xb];
  in_stack_00000150 = unaff_x23[10];
  plVar24 = (long *)unaff_x23[1];
  lVar20 = *unaff_x23;
  in_stack_00000118 = unaff_x23[3];
  in_stack_00000110 = unaff_x23[2];
  in_stack_00000100 = lVar20;
  in_stack_00000108 = plVar24;
  in_stack_00000190 = plVar17;
  if (lVar20 != -0x7fffffffffffffff) {
    lVar1 = in_stack_00000110;
    lVar2 = in_stack_00000118;
    lVar3 = in_stack_00000120;
    lVar4 = in_stack_00000128;
    lVar5 = in_stack_00000130;
    lVar6 = in_stack_00000138;
    lVar7 = in_stack_00000140;
    lVar8 = in_stack_00000148;
    lVar9 = in_stack_00000150;
    lVar10 = in_stack_00000158;
    lVar11 = in_stack_00000160;
    lVar12 = in_stack_00000168;
    lVar13 = in_stack_00000170;
    lVar14 = in_stack_00000178;
    lVar15 = in_stack_00000180;
    lVar16 = in_stack_00000188;
    if (plVar17 != (long *)0x0) {
      FUN_100e133d4(&stack0x00000100);
      lVar20 = -0x7fffffffffffffff;
      plVar24 = plVar17;
      lVar1 = in_stack_00000080;
      lVar2 = in_stack_00000088;
      lVar3 = in_stack_00000090;
      lVar4 = in_stack_00000098;
      lVar5 = in_stack_000000a0;
      lVar6 = in_stack_000000a8;
      lVar7 = in_stack_000000b0;
      lVar8 = in_stack_000000b8;
      lVar9 = in_stack_000000c0;
      lVar10 = in_stack_000000c8;
      lVar11 = in_stack_000000d0;
      lVar12 = in_stack_000000d8;
      lVar13 = in_stack_000000e0;
      lVar14 = in_stack_000000e8;
      lVar15 = in_stack_000000f0;
      lVar16 = in_stack_000000f8;
    }
    goto LAB_1012adf78;
  }
  if (plVar17 != (long *)0x0) {
    if (*plVar17 == 1) {
      uVar21 = plVar17[1];
      if ((uVar21 & 3) == 1) {
        puVar22 = (undefined8 *)(uVar21 - 1);
        uVar18 = *puVar22;
        puVar23 = *(undefined8 **)(uVar21 + 7);
        pcVar19 = (code *)*puVar23;
        if (pcVar19 != (code *)0x0) {
          (*pcVar19)(uVar18);
        }
        if (puVar23[1] != 0) {
          _free(uVar18);
        }
LAB_1012adf10:
        _free(puVar22);
      }
    }
    else if ((*plVar17 == 0) && (plVar17[2] != 0)) {
      puVar22 = (undefined8 *)plVar17[1];
      goto LAB_1012adf10;
    }
    _free(plVar17);
  }
  lVar20 = -0x7fffffffffffffff;
  lVar1 = in_stack_00000080;
  lVar2 = in_stack_00000088;
  lVar3 = in_stack_00000090;
  lVar4 = in_stack_00000098;
  lVar5 = in_stack_000000a0;
  lVar6 = in_stack_000000a8;
  lVar7 = in_stack_000000b0;
  lVar8 = in_stack_000000b8;
  lVar9 = in_stack_000000c0;
  lVar10 = in_stack_000000c8;
  lVar11 = in_stack_000000d0;
  lVar12 = in_stack_000000d8;
  lVar13 = in_stack_000000e0;
  lVar14 = in_stack_000000e8;
  lVar15 = in_stack_000000f0;
  lVar16 = in_stack_000000f8;
LAB_1012adf78:
  in_stack_000000f8 = lVar16;
  in_stack_000000f0 = lVar15;
  in_stack_000000e8 = lVar14;
  in_stack_000000e0 = lVar13;
  in_stack_000000d8 = lVar12;
  in_stack_000000d0 = lVar11;
  in_stack_000000c8 = lVar10;
  in_stack_000000c0 = lVar9;
  in_stack_000000b8 = lVar8;
  in_stack_000000b0 = lVar7;
  in_stack_000000a8 = lVar6;
  in_stack_000000a0 = lVar5;
  in_stack_00000098 = lVar4;
  in_stack_00000090 = lVar3;
  in_stack_00000088 = lVar2;
  in_stack_00000080 = lVar1;
  if (lVar20 == -0x7fffffffffffffff) {
    lVar20 = FUN_108832da4(plVar24);
    unaff_x19[1] = lVar20;
    *unaff_x19 = -0x7ffffffffffffffe;
  }
  else {
    unaff_x19[0xb] = in_stack_000000c8;
    unaff_x19[10] = in_stack_000000c0;
    unaff_x19[0xd] = in_stack_000000d8;
    unaff_x19[0xc] = in_stack_000000d0;
    unaff_x19[0xf] = in_stack_000000e8;
    unaff_x19[0xe] = in_stack_000000e0;
    unaff_x19[0x11] = in_stack_000000f8;
    unaff_x19[0x10] = in_stack_000000f0;
    unaff_x19[3] = in_stack_00000088;
    unaff_x19[2] = in_stack_00000080;
    unaff_x19[5] = in_stack_00000098;
    unaff_x19[4] = in_stack_00000090;
    unaff_x19[7] = in_stack_000000a8;
    unaff_x19[6] = in_stack_000000a0;
    unaff_x19[9] = in_stack_000000b8;
    unaff_x19[8] = in_stack_000000b0;
    *unaff_x19 = lVar20;
    unaff_x19[1] = (long)plVar24;
  }
  return;
}

