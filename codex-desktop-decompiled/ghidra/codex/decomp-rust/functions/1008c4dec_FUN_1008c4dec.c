
undefined8 FUN_1008c4dec(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  long lStack0000000000000058;
  long *plStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_00000160;
  long in_stack_00000178;
  long *in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 *in_stack_00000190;
  code *in_stack_00000198;
  long *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  
  in_stack_00000180 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000190);
  in_stack_00000178 = -0x8000000000000000;
  lVar2 = unaff_x21 + 1;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_100e02998();
  }
  if (unaff_x28 != 0) {
    _free();
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (*(long *)(unaff_x29 + -0xf0) != -0x7ffffffffffffffb) {
    FUN_100de6690(unaff_x29 + -0xf0);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(&stack0x000000f8);
  }
  if (in_stack_00000178 == -0x8000000000000000) {
    in_stack_00000160 = in_stack_00000180;
    in_stack_00000190 = &stack0x00000160;
    in_stack_00000198 =
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xf0,s_2failed_to_deserialize_MCP_resou_108aca3b4,&stack0x00000190);
    plVar1 = in_stack_00000160;
    in_stack_00000198 = *(code **)(unaff_x29 + -0xe8);
    in_stack_00000190 = *(undefined8 **)(unaff_x29 + -0xf0);
    in_stack_000001a0 = *(long **)(unaff_x29 + -0xe0);
    if (*in_stack_00000160 == 1) {
      uVar9 = in_stack_00000160[1];
      if ((uVar9 & 3) == 1) {
        puVar8 = (undefined8 *)(uVar9 - 1);
        uVar4 = *puVar8;
        puVar7 = *(undefined8 **)(uVar9 + 7);
        pcVar6 = (code *)*puVar7;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar4);
        }
        if (puVar7[1] != 0) {
          _free(uVar4);
        }
        goto LAB_1008c4a58;
      }
    }
    else if ((*in_stack_00000160 == 0) && (in_stack_00000160[2] != 0)) {
      puVar8 = (undefined8 *)in_stack_00000160[1];
LAB_1008c4a58:
      _free(puVar8);
    }
    _free(plVar1);
    lStack0000000000000058 = (long)in_stack_00000198;
    uStack0000000000000050 = in_stack_00000190;
    plStack0000000000000060 = in_stack_000001a0;
    uStack0000000000000068 = 0x8000000000000005;
    in_stack_000000b0 = 0xffffffffffff80a5;
  }
  else {
    plStack0000000000000060 = in_stack_00000180;
    lStack0000000000000058 = in_stack_00000178;
    uStack0000000000000068 = in_stack_00000188;
    uStack0000000000000050 = 0x8000000000000000;
  }
  puVar7 = (undefined8 *)(unaff_x19 + 0x78);
  *puVar7 = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_00000088;
  *(undefined8 *)(unaff_x19 + 200) = in_stack_00000080;
  *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000098;
  *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000090;
  *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000000a8;
  *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000000a0;
  *(undefined8 *)(unaff_x19 + 0x90) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000040;
  *(long *)(unaff_x19 + 0xa0) = lStack0000000000000058;
  *(undefined8 *)(unaff_x19 + 0x98) = uStack0000000000000050;
  lVar2 = *(long *)(unaff_x19 + 0x70) + 0x10;
  *(undefined2 *)(unaff_x19 + 0xfc1) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0xb0) = uStack0000000000000068;
  *(long **)(unaff_x19 + 0xa8) = plStack0000000000000060;
  *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000070;
  *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_000000b0;
  *(long *)(unaff_x19 + 0x100) = lVar2;
  *(undefined1 *)(unaff_x19 + 0x170) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0xd0);
  *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 200);
  if (*(long *)(unaff_x19 + 0x108) == -0x8000000000000000) {
    in_stack_000001a0 = *(long **)(unaff_x19 + 0xb0);
    in_stack_00000198 = *(code **)(unaff_x19 + 0xa8);
    in_stack_00000190 = *(undefined8 **)(unaff_x19 + 0xa0);
    in_stack_000001b0 = *(undefined8 *)(unaff_x19 + 0x80);
    in_stack_000001a8 = *puVar7;
    in_stack_000001c0 = *(undefined8 *)(unaff_x19 + 0x90);
    in_stack_000001b8 = *(undefined8 *)(unaff_x19 + 0x88);
    *(code **)(unaff_x19 + 0x180) = in_stack_00000198;
    *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000190;
    *(undefined8 *)(unaff_x19 + 400) = in_stack_000001a8;
    *(long **)(unaff_x19 + 0x188) = in_stack_000001a0;
    *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_000001b8;
    *(undefined8 *)(unaff_x19 + 0x198) = in_stack_000001b0;
    *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_000001c0;
    *(long *)(unaff_x19 + 0x1b0) = lVar2;
    *(undefined1 *)(unaff_x19 + 0xfb8) = 0;
    *(undefined8 *)(unaff_x19 + 0x1b8) = *(undefined8 *)(unaff_x19 + 400);
    *(undefined8 *)(unaff_x19 + 0x1c0) = *(undefined8 *)(unaff_x19 + 0x198);
    *(undefined8 *)(unaff_x19 + 0x1d0) = *(undefined8 *)(unaff_x19 + 0x1a8);
    *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x19 + 0x1a0);
    *(undefined8 *)(unaff_x19 + 0x1d8) = 0x800000000000004e;
    *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x180);
    *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x178);
    *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x188);
    *(long *)(unaff_x19 + 0x590) = lVar2;
    *(undefined1 *)(unaff_x19 + 0x628) = 0;
    iVar3 = FUN_100892e70(unaff_x19 + 0x1b8,in_stack_00000010);
    if (iVar3 == 0) {
      FUN_100cf6de0(unaff_x19 + 0x1b8);
      *(undefined1 *)(unaff_x19 + 0xfb8) = 1;
LAB_1008c4c80:
      *(undefined1 *)(unaff_x19 + 0x170) = 1;
      FUN_100db096c(puVar7);
      *(undefined2 *)(unaff_x19 + 0xfc1) = 0;
      lVar2 = **(long **)(unaff_x19 + 0x70);
      **(long **)(unaff_x19 + 0x70) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
      }
      uVar4 = 0;
      uVar5 = 1;
      goto LAB_1008c4cc0;
    }
    uVar5 = 3;
    *(undefined1 *)(unaff_x19 + 0xfb8) = 3;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x19 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x19 + 200);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar13 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xe8);
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x98) = uVar13;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar13 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar11;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar13;
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x19 + 0xb8);
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x19 + 0xc0);
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar11;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar4;
    uVar4 = *puVar7;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x29 + -0x88) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar10;
    uVar4 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x19 + 0x1d8) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x1f0) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar10;
    uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar10 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xc0);
    *(undefined8 *)(unaff_x19 + 0x1a0) = *(undefined8 *)(unaff_x29 + -200);
    *(undefined8 *)(unaff_x19 + 0x198) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x1b0) = uVar12;
    *(undefined8 *)(unaff_x19 + 0x1a8) = uVar11;
    uVar12 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x98);
    uVar10 = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x19 + 0x1c0) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x19 + 0x1b8) = uVar12;
    *(undefined8 *)(unaff_x19 + 0x1d0) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x1c8) = uVar10;
    uVar12 = *(undefined8 *)(unaff_x29 + -0xf0);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar10 = *(undefined8 *)(unaff_x29 + -0xe0);
    *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x29 + -0xe8);
    *(undefined8 *)(unaff_x19 + 0x178) = uVar12;
    *(undefined8 *)(unaff_x19 + 400) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x188) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar4;
    *(long *)(unaff_x19 + 0x200) = lVar2;
    *(undefined1 *)(unaff_x19 + 0x230) = 0;
    iVar3 = FUN_1008927b8(unaff_x19 + 0x178,in_stack_00000010);
    if (iVar3 == 0) {
      FUN_100d84c5c(unaff_x19 + 0x178);
      goto LAB_1008c4c80;
    }
    uVar5 = 4;
  }
  *(undefined1 *)(unaff_x19 + 0x170) = uVar5;
  uVar5 = 3;
  uVar4 = 1;
LAB_1008c4cc0:
  *(undefined1 *)(unaff_x19 + 0xfc0) = uVar5;
  return uVar4;
}

