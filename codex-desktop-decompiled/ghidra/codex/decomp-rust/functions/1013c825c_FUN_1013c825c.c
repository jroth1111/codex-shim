
/* WARNING: Removing unreachable block (ram,0x0001013c79f0) */
/* WARNING: Removing unreachable block (ram,0x0001013c79dc) */

void FUN_1013c825c(void)

{
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
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
  undefined8 in_stack_00000198;
  char in_stack_00000690;
  
  in_stack_00000128 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000500);
  in_stack_00000120 = -0x8000000000000000;
  if (unaff_x24 != 0) {
    _free(in_stack_000000a8);
  }
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000080);
  }
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_00000088);
  }
  FUN_100d34830(&stack0x000006b0);
  if (in_stack_00000690 != '\x16') {
    FUN_100e077ec(&stack0x00000690);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (in_stack_00000120 == -0x8000000000000000) {
    *unaff_x26 = 0x800000000000000b;
    unaff_x26[1] = in_stack_00000128;
  }
  else {
    unaff_x26[10] = in_stack_00000168;
    unaff_x26[9] = in_stack_00000160;
    unaff_x26[0xc] = in_stack_00000178;
    unaff_x26[0xb] = in_stack_00000170;
    unaff_x26[0xe] = in_stack_00000188;
    unaff_x26[0xd] = in_stack_00000180;
    unaff_x26[0x10] = in_stack_00000198;
    unaff_x26[0xf] = in_stack_00000190;
    unaff_x26[2] = in_stack_00000128;
    unaff_x26[1] = in_stack_00000120;
    unaff_x26[4] = in_stack_00000138;
    unaff_x26[3] = in_stack_00000130;
    unaff_x26[6] = in_stack_00000148;
    unaff_x26[5] = in_stack_00000140;
    unaff_x26[8] = in_stack_00000158;
    unaff_x26[7] = in_stack_00000150;
    *unaff_x26 = 0x8000000000000008;
  }
  return;
}

