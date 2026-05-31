
void FUN_101239160(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  ulong unaff_x23;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  uint in_stack_00000070;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  char in_stack_000000e0;
  long in_stack_00000228;
  long in_stack_00000230;
  long in_stack_00000258;
  undefined8 in_stack_00000260;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002a0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if ((unaff_x21 != -0x7fffffffffffffff) && (unaff_x21 != -0x8000000000000000)) {
    if (unaff_x21 != 0) {
      _free(in_stack_00000068);
    }
    if ((in_stack_00000258 != -0x8000000000000000) && (in_stack_00000258 != 0)) {
      _free(in_stack_00000260);
    }
  }
  if ((-0x7ffffffffffffffe < in_stack_000000d0) && (in_stack_000000d0 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_stack_000000c0) && (in_stack_000000c0 != 0)) {
    _free(in_stack_00000048);
  }
  if (((in_stack_000000d8 != -0x7ffffffffffffffc) && (in_stack_000000d8 != -0x7ffffffffffffffd)) &&
     (-0x7ffffffffffffffe < in_stack_000000d8)) {
    if (in_stack_00000230 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000228 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        in_stack_00000230 = in_stack_00000230 + -1;
      } while (in_stack_00000230 != 0);
    }
    if (in_stack_000000d8 != 0) {
      _free(in_stack_00000228);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000c8) && (in_stack_000000c8 != 0)) {
    _free(in_stack_00000050);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000100);
  if (in_stack_000000e0 != '\x16') {
    FUN_100e077ec(&stack0x000000e0);
  }
  if ((in_stack_00000070 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

