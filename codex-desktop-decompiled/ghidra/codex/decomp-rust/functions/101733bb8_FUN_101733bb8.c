
void FUN_101733bb8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  byte unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined1 unaff_w24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  byte unaff_w27;
  int unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  undefined8 in_stack_00000188;
  long in_stack_00000198;
  undefined8 in_stack_000001a0;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000150,s_user__108adc739,unaff_x29 + -0xe8);
  puVar2 = (undefined8 *)_malloc(0xb);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar2 + 7) = 0x736e6f69;
    *puVar2 = 0x697373696d726570;
    *(undefined8 *)(unaff_x29 + -0xe8) = in_stack_00000040;
    *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000030;
    *(undefined8 *)(unaff_x29 + -0xd8) = unaff_x21;
    *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000038;
    *(undefined8 *)(unaff_x29 + -200) = in_stack_00000028;
    *(undefined8 *)(unaff_x29 + -0xc0) = unaff_x23;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x22;
    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000158;
    *(long *)(unaff_x29 + -0xb8) = in_stack_00000150;
    *(undefined1 *)(unaff_x29 + -0x65) = 3;
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000160;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0xb;
    *(undefined8 **)(unaff_x29 + -0x98) = puVar2;
    *(undefined8 *)(unaff_x29 + -0x90) = 0xb;
    *(undefined1 *)(unaff_x29 + -0x66) = unaff_w24;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x26;
    *(undefined8 *)(unaff_x29 + -0x70) = unaff_x25;
    *(byte *)(unaff_x29 + -0x68) = (unaff_w20 | unaff_w27) & 1;
    *(bool *)(unaff_x29 + -0x67) = unaff_w28 == 1;
    FUN_101774864(&stack0x00000150,in_stack_00000048 + 0xf0,unaff_x29 + -0x100,unaff_x29 + -0xe8);
    if (in_stack_00000150 != -0x8000000000000000) {
      if (in_stack_00000150 != 0) {
        _free(in_stack_00000158);
      }
      if (in_stack_00000168 != 0) {
        _free(in_stack_00000170);
      }
      if ((in_stack_000001b0 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_000001b8);
      }
      if (in_stack_00000180 != 0) {
        _free(in_stack_00000188);
      }
      if (in_stack_00000198 != 0) {
        _free(in_stack_000001a0);
      }
    }
    if (in_stack_000000b8 != 0) {
      _free(in_stack_000000c0);
    }
    if ((in_stack_000000d0 & 0x7fffffffffffffff) == 0) {
      func_0x00010174b108(&stack0x000000e8);
    }
    else {
      _free(in_stack_000000d8);
      func_0x00010174b108(&stack0x000000e8);
    }
    if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000058);
    }
    return;
  }
  func_0x0001087c9084(1,0xb);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017340ec);
  (*pcVar1)();
}

