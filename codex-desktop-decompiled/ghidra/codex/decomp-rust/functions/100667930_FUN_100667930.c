
void FUN_100667930(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x24;
  ulong unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;
  long in_stack_000001f8;
  undefined8 in_stack_00000200;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000270);
  *in_stack_00000030 = 8;
  in_stack_00000030[1] = uVar1;
  if (unaff_x22 != 7) {
    if (in_stack_00000210 != 0) {
      _free(in_stack_00000218);
    }
    FUN_100e5d1e8(&stack0x000001c0);
    if (in_stack_000001f8 != 0) {
      _free(in_stack_00000200);
    }
    FUN_100de6690(&stack0x00000228);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100de8910(unaff_x24 + 0x48);
  if (in_stack_00000060 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000060);
  }
  if (((long)in_stack_00000050 < 0) &&
     ((in_stack_00000050 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000038);
  }
  return;
}

