
void FUN_1013cb538(void)

{
  ulong unaff_x21;
  ulong unaff_x25;
  ulong unaff_x27;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  char in_stack_00000690;
  
  in_stack_00000128 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000500);
  in_stack_00000120 = -0x8000000000000000;
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_000000b8);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000b0);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c8);
  }
  if ((in_stack_000000e8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000d0);
  }
  FUN_100d34830(&stack0x000006b0);
  if (in_stack_00000690 != '\x16') {
    FUN_100e077ec(&stack0x00000690);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (in_stack_00000120 == -0x8000000000000000) {
    *in_stack_000000f0 = 0x800000000000000b;
    in_stack_000000f0[1] = in_stack_00000128;
  }
  else {
    in_stack_000000f0[10] = in_stack_00000168;
    in_stack_000000f0[9] = in_stack_00000160;
    in_stack_000000f0[0xc] = in_stack_00000178;
    in_stack_000000f0[0xb] = in_stack_00000170;
    in_stack_000000f0[0xe] = in_stack_00000188;
    in_stack_000000f0[0xd] = in_stack_00000180;
    in_stack_000000f0[2] = in_stack_00000128;
    in_stack_000000f0[1] = in_stack_00000120;
    in_stack_000000f0[4] = in_stack_00000138;
    in_stack_000000f0[3] = in_stack_00000130;
    in_stack_000000f0[6] = in_stack_00000148;
    in_stack_000000f0[5] = in_stack_00000140;
    in_stack_000000f0[0xf] = in_stack_00000190;
    in_stack_000000f0[8] = in_stack_00000158;
    in_stack_000000f0[7] = in_stack_00000150;
    *in_stack_000000f0 = 0x8000000000000007;
  }
  return;
}

