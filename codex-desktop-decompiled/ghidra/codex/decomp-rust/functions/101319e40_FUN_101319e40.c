
void FUN_101319e40(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  ulong in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  ulong in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  char in_stack_00000140;
  long in_stack_000002c0;
  long in_stack_000002c8;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000310);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_00000128) && (in_stack_00000128 != 0)) {
    _free(in_stack_00000090);
  }
  if ((-0x7fffffffffffffff < in_stack_00000130) && (in_stack_00000130 != 0)) {
    _free(in_stack_00000088);
  }
  if (((in_stack_00000118 & 1) != 0) && (in_stack_000000a8 != 0)) {
    FUN_100cc2fb4(&stack0x000002d8);
  }
  if ((-0x7fffffffffffffff < in_stack_00000120) && (in_stack_00000120 != 0)) {
    _free(in_stack_00000060);
  }
  if ((in_stack_00000138 != -0x7fffffffffffffff) && (in_stack_00000138 != -0x8000000000000000)) {
    if (in_stack_000002c8 != 0) {
      puVar2 = (undefined8 *)(in_stack_000002c0 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        in_stack_000002c8 = in_stack_000002c8 + -1;
      } while (in_stack_000002c8 != 0);
    }
    if (in_stack_00000138 != 0) {
      _free(in_stack_000002c0);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_00000068);
  }
  if ((-0x7ffffffffffffffe < in_stack_00000108) && (in_stack_00000108 != 0)) {
    _free(in_stack_00000058);
  }
  if ((-0x7fffffffffffffff < in_stack_000000f0) && (in_stack_000000f0 != 0)) {
    _free(in_stack_00000080);
  }
  if ((-0x7fffffffffffffff < in_stack_000000f8) && (in_stack_000000f8 != 0)) {
    _free(in_stack_00000078);
  }
  if ((-0x7fffffffffffffff < in_stack_00000110) && (in_stack_00000110 != 0)) {
    _free(in_stack_00000070);
  }
  if ((in_stack_00000100 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000098);
  }
  FUN_100d34830(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    FUN_100e077ec(&stack0x00000140);
  }
  if ((in_stack_000000e0._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(unaff_x19);
  }
  return;
}

