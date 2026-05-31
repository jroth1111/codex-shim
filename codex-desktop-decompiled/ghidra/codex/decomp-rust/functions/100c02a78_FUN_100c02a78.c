
undefined8 FUN_100c02a78(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x27;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000130;
  byte in_stack_00000180;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  
  *(undefined8 *)(unaff_x27 + 0x288) = in_stack_000003a0;
  *(undefined8 *)(unaff_x27 + 0x280) = in_stack_00000398;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100e618cc(&stack0x00000420);
  if ((in_stack_00000180 & 1) == 0) {
    unaff_x21 = 1;
  }
  else {
    FUN_100e618cc((ulong)&stack0x00000180 | 8);
  }
  if (in_stack_000000d0 != 0) {
    _free(in_stack_000000d8);
  }
  if (in_stack_00000130 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000130);
  }
  if (in_stack_00000100 != -0x7fffffffffffffff) {
    if ((in_stack_00000100 != -0x8000000000000000) && (in_stack_00000100 != 0)) {
      _free(in_stack_00000108);
    }
    if ((in_stack_00000118 != -0x8000000000000000) && (in_stack_00000118 != 0)) {
      _free(in_stack_00000120);
    }
  }
  if (*(ulong *)(unaff_x19 + 400) == 2) goto LAB_100c02be4;
  if ((*(byte *)(unaff_x19 + 0x439) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 400) & 1) == 0) {
      if ((*(byte *)(unaff_x19 + 0x43a) & 1) != 0) {
        if (*(ulong *)(unaff_x19 + 0x198) < 0x8000000000000003) {
          if (((long)*(ulong *)(unaff_x19 + 0x198) < 0) && ((*(byte *)(unaff_x19 + 0x43b) & 1) != 0)
             ) {
            FUN_100e3d46c(unaff_x19 + 0x198);
          }
          *(undefined2 *)(unaff_x19 + 0x43a) = 0;
          goto LAB_100c02be0;
        }
        func_0x000100e37f24(unaff_x19 + 0x198);
      }
      *(undefined1 *)(unaff_x19 + 0x43a) = 0;
    }
    else {
      func_0x000100e37f24(unaff_x19 + 0x198);
    }
  }
LAB_100c02be0:
  *(undefined1 *)(unaff_x19 + 0x439) = 0;
LAB_100c02be4:
  *(undefined4 *)(unaff_x19 + 0x438) = 1;
  FUN_100ccda5c();
  *(undefined1 *)(unaff_x19 + 0x440) = 1;
  return unaff_x21;
}

