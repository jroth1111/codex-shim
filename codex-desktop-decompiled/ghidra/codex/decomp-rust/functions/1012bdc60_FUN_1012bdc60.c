
void FUN_1012bdc60(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_000000d0;
  long in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  char in_stack_00000100;
  long in_stack_00000298;
  long in_stack_000002a0;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002b0);
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_00000040);
  }
  if (((in_stack_000000d0 != -0x7ffffffffffffffc) && (in_stack_000000d0 != -0x7ffffffffffffffd)) &&
     (-0x7ffffffffffffffe < in_stack_000000d0)) {
    if (in_stack_000002a0 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000298 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        in_stack_000002a0 = in_stack_000002a0 + -1;
      } while (in_stack_000002a0 != 0);
    }
    if (in_stack_000000d0 != 0) {
      _free(in_stack_00000298);
    }
  }
  if (((in_stack_000000e0 & 1) != 0) && (unaff_x25 != 0)) {
    func_0x000100d12d04(&stack0x00000258);
  }
  if ((-0x7fffffffffffffff < in_stack_000000f8) && (in_stack_000000f8 != 0)) {
    _free(in_stack_00000030);
  }
  if ((-0x7fffffffffffffff < in_stack_000000f0) && (in_stack_000000f0 != 0)) {
    _free(in_stack_00000038);
  }
  if (in_stack_000000d8 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000060 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x26 = unaff_x26 + -1;
      } while (unaff_x26 != 0);
    }
    if (in_stack_000000d8 != 0) {
      _free(in_stack_00000060);
    }
  }
  FUN_100d34830(&stack0x00000120);
  if (in_stack_00000100 != '\x16') {
    FUN_100e077ec(&stack0x00000100);
  }
  if ((in_stack_00000070._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000068);
  }
  return;
}

