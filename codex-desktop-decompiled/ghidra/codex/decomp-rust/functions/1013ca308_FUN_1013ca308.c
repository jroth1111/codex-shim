
void FUN_1013ca308(void)

{
  ulong unaff_x22;
  ulong unaff_x24;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  char in_stack_00000310;
  
  in_stack_00000128 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000690);
  in_stack_00000120 = -0x8000000000000000;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000e0);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000e8);
  }
  FUN_100d34830(&stack0x00000330);
  if (in_stack_00000310 != '\x16') {
    FUN_100e077ec(&stack0x00000310);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (in_stack_00000120 == -0x8000000000000000) {
    *in_stack_000000f0 = 0x800000000000000b;
    in_stack_000000f0[1] = in_stack_00000128;
  }
  else {
    in_stack_000000f0[2] = in_stack_00000128;
    in_stack_000000f0[1] = in_stack_00000120;
    in_stack_000000f0[4] = in_stack_00000138;
    in_stack_000000f0[3] = in_stack_00000130;
    in_stack_000000f0[6] = in_stack_00000148;
    in_stack_000000f0[5] = in_stack_00000140;
    *in_stack_000000f0 = 0x8000000000000003;
  }
  return;
}

