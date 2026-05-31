
void FUN_100971144(void)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined1 unaff_w24;
  undefined1 *unaff_x25;
  undefined1 *in_stack_00000050;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000070;
  undefined1 uStack000000000000011f;
  long lStack0000000000000127;
  long in_stack_00004e00;
  long in_stack_00004e08;
  long in_stack_00004e10;
  undefined8 in_stack_0000a8f0;
  undefined8 in_stack_0000a8f8;
  undefined8 in_stack_0000a900;
  undefined8 in_stack_0000a908;
  undefined8 in_stack_0000a910;
  undefined7 in_stack_0000a918;
  undefined1 in_stack_0000a91f;
  undefined7 in_stack_0000a920;
  long in_stack_0000a927;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004e00,s_5remote_plugin_install_is_not_en_108acc34a,&stack0x00009fc0);
  FUN_100de93d0(unaff_x19 + 0x4dc8);
  if (*(long *)(unaff_x19 + 0x4db0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x4db8));
  }
  *(undefined1 *)(in_stack_00000068 + 0x532) = 0;
  if (*(long *)(unaff_x19 + 0x4d98) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x4da0));
  }
  *in_stack_00000050 = 1;
  if (in_stack_00004e00 == -0x7fffffffffffffff) {
    *in_stack_00000070 = -0x7fffffffffffffff;
    uVar1 = 3;
  }
  else {
    uStack000000000000011f = in_stack_0000a91f;
    lStack0000000000000127 = in_stack_0000a927;
    FUN_100d4d058(in_stack_00000060);
    if (((*(long *)(unaff_x19 + 0x4d28) != -0x8000000000000000) && ((unaff_x25[4] & 1) != 0)) &&
       (*(long *)(unaff_x19 + 0x4d28) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x4d30));
    }
    if (((*(long *)(unaff_x19 + 0x4d40) != -0x8000000000000000) && ((unaff_x25[5] & 1) != 0)) &&
       (*(long *)(unaff_x19 + 0x4d40) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x4d48));
    }
    *(undefined2 *)(unaff_x25 + 4) = 0;
    unaff_x25[3] = 0;
    if (((unaff_x25[6] & 1) != 0) && (*(long *)(unaff_x19 + 0x58) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x60));
    }
    unaff_x25[6] = 0;
    *(undefined8 *)((long)in_stack_00000070 + 0x29) = in_stack_0000a8f8;
    *(undefined8 *)((long)in_stack_00000070 + 0x21) = in_stack_0000a8f0;
    *in_stack_00000070 = in_stack_00004e00;
    in_stack_00000070[1] = in_stack_00004e08;
    in_stack_00000070[2] = in_stack_00004e10;
    in_stack_00000070[3] = -0x7ffffffffffffffb;
    *(undefined1 *)(in_stack_00000070 + 4) = unaff_w24;
    *(undefined8 *)((long)in_stack_00000070 + 0x39) = in_stack_0000a908;
    *(undefined8 *)((long)in_stack_00000070 + 0x31) = in_stack_0000a900;
    *(ulong *)((long)in_stack_00000070 + 0x49) = CONCAT17(uStack000000000000011f,in_stack_0000a918);
    *(undefined8 *)((long)in_stack_00000070 + 0x41) = in_stack_0000a910;
    in_stack_00000070[0xb] = lStack0000000000000127;
    in_stack_00000070[10] = CONCAT71(in_stack_0000a920,uStack000000000000011f);
    uVar1 = 1;
    in_stack_00000070[0xc] = -0x7f58;
  }
  *unaff_x25 = uVar1;
  return;
}

