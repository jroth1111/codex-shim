
void FUN_1008cc818(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long lVar4;
  long unaff_x23;
  long unaff_x26;
  long unaff_x28;
  long in_stack_00000010;
  long in_stack_00000018;
  long lStack0000000000000020;
  long lStack0000000000000028;
  long lStack0000000000000030;
  long lStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  long lStack0000000000000050;
  long lStack0000000000000058;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000220;
  long in_stack_00000228;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000350;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_00000388;
  long in_stack_00000460;
  long in_stack_00000468;
  long in_stack_00000470;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000460,s_expected_active_turn_id_____but_f_108aca567,&stack0x000002e0);
  if (in_stack_00000150 != 0) {
    _free(in_stack_00000158);
  }
  if (in_stack_00000350 != 0) {
    _free(in_stack_00000358);
  }
  __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor20track_error_response17h19540a986adf27cfE
            ();
  if (unaff_x23 < 0) {
    if (in_stack_00000010 == 1) {
      _free(in_stack_000001d8);
    }
    else {
      lVar2 = in_stack_000001e0;
      if (in_stack_00000010 != 0) goto LAB_1008ccc60;
      for (; in_stack_000001e8 != 0; in_stack_000001e8 = in_stack_000001e8 + -1) {
        FUN_100e06c08(lVar2);
        lVar2 = lVar2 + 0x38;
      }
      unaff_x28 = 0;
      in_stack_000001f0 = in_stack_000001e0;
      in_stack_000001e8 = in_stack_000001d8;
    }
    if (in_stack_000001e8 != 0) {
      _free(in_stack_000001f0);
    }
  }
LAB_1008ccc60:
  if (in_stack_00000460 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0x1a3) = 0;
    lVar2 = **(long **)(unaff_x19 + 0x198);
    **(long **)(unaff_x19 + 0x198) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x198);
    }
    if (*(long *)(unaff_x19 + 0x120) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x128));
    }
    if (*(long *)(unaff_x19 + 0x150) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x158));
    }
    *(undefined1 *)(unaff_x19 + 0x1a2) = 0;
    *(undefined2 *)(unaff_x19 + 0x1a0) = 1;
    in_stack_00000460 = -0x8000000000000000;
    lStack0000000000000020 = in_stack_00000200;
    lStack0000000000000028 = in_stack_00000208;
    lStack0000000000000030 = in_stack_00000210;
    lStack0000000000000038 = in_stack_00000218;
    lStack0000000000000040 = in_stack_00000220;
    lStack0000000000000048 = in_stack_00000228;
    lStack0000000000000050 = in_stack_00000230;
    lStack0000000000000058 = in_stack_00000238;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x1a3) = 0;
    lVar2 = **(long **)(unaff_x19 + 0x198);
    **(long **)(unaff_x19 + 0x198) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x198);
    }
    if (*(long *)(unaff_x19 + 0x120) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x128));
    }
    if ((*(byte *)(unaff_x19 + 0x1a2) & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x140);
      lVar2 = lVar4;
      for (lVar1 = *(long *)(unaff_x19 + 0x148); lVar1 != 0; lVar1 = lVar1 + -1) {
        FUN_100e06c08(lVar2);
        lVar2 = lVar2 + 0x38;
      }
      unaff_x26 = -0x7ffffffffffffffb;
      if (*(long *)(unaff_x19 + 0x138) != 0) {
        _free(lVar4);
      }
    }
    unaff_x28 = -0x7f58;
    if (((*(byte *)(unaff_x19 + 0x1a1) & 1) != 0) && (*(long *)(unaff_x19 + 0x168) != 0)) {
      FUN_100cb56bc(unaff_x19 + 0x168);
    }
    if (*(long *)(unaff_x19 + 0x150) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x158));
    }
    *(undefined1 *)(unaff_x19 + 0x1a2) = 0;
    *(undefined2 *)(unaff_x19 + 0x1a0) = 1;
    lStack0000000000000020 = in_stack_00000350;
    lStack0000000000000028 = in_stack_00000358;
    lStack0000000000000030 = in_stack_00000360;
    lStack0000000000000038 = in_stack_00000368;
    lStack0000000000000040 = in_stack_00000370;
    lStack0000000000000048 = in_stack_00000378;
    lStack0000000000000050 = in_stack_00000380;
    lStack0000000000000058 = in_stack_00000388;
    if (in_stack_00000460 == -0x7fffffffffffffff) {
      *unaff_x21 = unaff_x26 + 0x6c;
      uVar3 = 3;
      goto LAB_1008cc6a8;
    }
  }
  FUN_100d2cc24(unaff_x20);
  if (in_stack_00000460 == -0x8000000000000000) {
    lVar2 = unaff_x26 + 0x33;
    lVar4 = in_stack_00000470;
    in_stack_00000470 = in_stack_00000018;
    in_stack_00000460 = in_stack_00000468;
  }
  else {
    in_stack_000000a8 = lStack0000000000000028;
    in_stack_000000a0 = lStack0000000000000020;
    in_stack_000000b8 = lStack0000000000000038;
    in_stack_000000b0 = lStack0000000000000030;
    in_stack_000000c8 = lStack0000000000000048;
    in_stack_000000c0 = lStack0000000000000040;
    in_stack_000000d8 = lStack0000000000000058;
    in_stack_000000d0 = lStack0000000000000050;
    lVar2 = unaff_x26 + 0x6b;
    lVar4 = in_stack_00000468;
  }
  unaff_x21[6] = in_stack_000000a8;
  unaff_x21[5] = in_stack_000000a0;
  unaff_x21[8] = in_stack_000000b8;
  unaff_x21[7] = in_stack_000000b0;
  unaff_x21[10] = in_stack_000000c8;
  unaff_x21[9] = in_stack_000000c0;
  *unaff_x21 = lVar2;
  unaff_x21[1] = in_stack_00000460;
  unaff_x21[2] = lVar4;
  unaff_x21[3] = in_stack_00000470;
  unaff_x21[4] = in_stack_00000018;
  unaff_x21[0xc] = in_stack_000000d8;
  unaff_x21[0xb] = in_stack_000000d0;
  uVar3 = 1;
  unaff_x21[0xd] = unaff_x28;
LAB_1008cc6a8:
  *(undefined1 *)(unaff_x19 + 0x570) = uVar3;
  return;
}

