
void FUN_1013e6c1c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  long unaff_x23;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
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
  long in_stack_00000108;
  undefined8 in_stack_00000118;
  char in_stack_00000160;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000090 = 0x8000000000000000;
  in_stack_00000090[1] = uVar1;
  if (in_stack_000000f8 != -0x8000000000000000) {
    if (unaff_x23 != 0) {
      puVar2 = (undefined8 *)(unaff_x27 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (in_stack_000000f8 != 0) {
      _free();
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000d8) && (in_stack_000000d8 != 0)) {
    _free(in_stack_00000118);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a8) && (in_stack_000000a8 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7fffffffffffffff < in_stack_00000100) && (in_stack_00000100 != 0)) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b0) && (in_stack_000000b0 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_00000050);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_00000058);
  }
  if (in_stack_00000108 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000030 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x22 = unaff_x22 + -1;
      } while (unaff_x22 != 0);
    }
    if (in_stack_00000108 != 0) {
      _free(in_stack_00000030);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000c0) && (in_stack_000000c0 != 0)) {
    _free(in_stack_00000010);
  }
  if ((-0x7fffffffffffffff < in_stack_000000c8) && (in_stack_000000c8 != 0)) {
    _free(in_stack_00000078);
  }
  if ((-0x7fffffffffffffff < in_stack_000000f0) && (in_stack_000000f0 != 0)) {
    _free(in_stack_00000018);
  }
  if ((-0x7fffffffffffffff < in_stack_000000d0) && (in_stack_000000d0 != 0)) {
    _free(in_stack_00000080);
  }
  FUN_100d34830(&stack0x00000180);
  if (in_stack_00000160 != '\x16') {
    FUN_100e077ec(&stack0x00000160);
  }
  if ((in_stack_00000098._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000a0);
  }
  return;
}

