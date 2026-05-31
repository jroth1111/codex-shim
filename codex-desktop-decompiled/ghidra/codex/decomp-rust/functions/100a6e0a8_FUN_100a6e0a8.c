
void FUN_100a6e0a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x29;
  long lVar7;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 uStack00000000000000b8;
  long lStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  *(char **)(unaff_x29 + -0x98) = s__failed_to_resolve_plugin_cache_r_108acf290;
  *(undefined1 **)(unaff_x29 + -0x90) = &stack0x00000050;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x98;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  lStack00000000000000c0 = unaff_x29 + -0x70;
  uStack00000000000000b8 = 1;
  uStack00000000000000c8 = 1;
  uStack00000000000000d0 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar6 = *(undefined8 *)(unaff_x21 + 8);
  lVar7 = *(long *)(unaff_x21 + 0x10);
  if (lVar7 == 0) {
    lVar1 = 1;
    _memcpy(1,uVar6,0);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x20);
    lVar4 = *(long *)(unaff_x21 + 0x28);
    if (lVar4 != 0) goto LAB_100a6e11c;
LAB_100a6e174:
    lVar2 = 1;
    _memcpy(1,uVar6,lVar4);
    if (in_stack_00000030 != 0) goto LAB_100a6e140;
LAB_100a6e190:
    if ((in_stack_00000048 & 3) != 1) goto LAB_100a6e1a0;
    in_stack_00000040 = (undefined8 *)(in_stack_00000048 - 1);
    uVar6 = *in_stack_00000040;
    puVar5 = *(undefined8 **)(in_stack_00000048 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar6);
    }
    if (puVar5[1] != 0) {
      _free(uVar6);
    }
  }
  else {
    lVar1 = _malloc(lVar7);
    if (lVar1 == 0) {
      func_0x0001087c9084(1,lVar7);
      goto LAB_100a6e2bc;
    }
    _memcpy(lVar1,uVar6,lVar7);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x20);
    lVar4 = *(long *)(unaff_x21 + 0x28);
    if (lVar4 == 0) goto LAB_100a6e174;
LAB_100a6e11c:
    lVar2 = _malloc(lVar4);
    if (lVar2 == 0) {
      func_0x0001087c9084(1,lVar4);
LAB_100a6e2bc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a6e2c0);
      (*pcVar3)();
    }
    _memcpy(lVar2,uVar6,lVar4);
    if (in_stack_00000030 == 0) goto LAB_100a6e190;
LAB_100a6e140:
    if (in_stack_00000038 == 0) goto LAB_100a6e1a0;
  }
  _free(in_stack_00000040);
LAB_100a6e1a0:
  *unaff_x20 = lVar7;
  unaff_x20[1] = lVar1;
  unaff_x20[2] = lVar7;
  unaff_x20[3] = lVar4;
  unaff_x20[4] = lVar2;
  unaff_x20[5] = lVar4;
  unaff_x20[6] = -0x8000000000000000;
  lVar7 = *(long *)(unaff_x29 + -0xb0);
  unaff_x20[8] = *(long *)(unaff_x29 + -0xa8);
  unaff_x20[7] = lVar7;
  unaff_x20[9] = -0x8000000000000000;
  unaff_x20[0x13] = in_stack_000001c8;
  unaff_x20[0x12] = in_stack_000001c0;
  unaff_x20[0x15] = in_stack_000001d8;
  unaff_x20[0x14] = in_stack_000001d0;
  unaff_x20[0x17] = in_stack_000001e8;
  unaff_x20[0x16] = in_stack_000001e0;
  unaff_x20[0x18] = in_stack_000001f0;
  unaff_x20[0xb] = in_stack_00000188;
  unaff_x20[10] = in_stack_00000180;
  unaff_x20[0xd] = in_stack_00000198;
  unaff_x20[0xc] = in_stack_00000190;
  unaff_x20[0xf] = in_stack_000001a8;
  unaff_x20[0xe] = in_stack_000001a0;
  unaff_x20[0x11] = in_stack_000001b8;
  unaff_x20[0x10] = in_stack_000001b0;
  *(undefined1 *)(unaff_x19 + 0x468) = 1;
  return;
}

