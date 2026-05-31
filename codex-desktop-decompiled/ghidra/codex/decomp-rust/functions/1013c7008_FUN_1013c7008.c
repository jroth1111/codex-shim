
void FUN_1013c7008(void)

{
  long unaff_x22;
  undefined8 *unaff_x26;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f8;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  char in_stack_00000310;
  
  in_stack_00000128 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000690);
  in_stack_00000120 = -0x8000000000000000;
  if (unaff_x22 != 0) {
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
    *unaff_x26 = 0x800000000000000b;
    unaff_x26[1] = in_stack_00000128;
  }
  else {
    unaff_x26[2] = in_stack_00000128;
    unaff_x26[1] = in_stack_00000120;
    unaff_x26[4] = in_stack_00000138;
    unaff_x26[3] = in_stack_00000130;
    unaff_x26[6] = in_stack_00000148;
    unaff_x26[5] = in_stack_00000140;
    *unaff_x26 = 0x8000000000000006;
  }
  return;
}

