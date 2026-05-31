
/* WARNING: Removing unreachable block (ram,0x0001013c8e74) */
/* WARNING: Removing unreachable block (ram,0x0001013c8e7c) */

void FUN_1013c71ac(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x24;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000e0;
  undefined8 in_stack_000000f8;
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
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000500);
  if ((-0x7fffffffffffffff < in_stack_000000e0) && (in_stack_000000e0 != 0)) {
    _free(in_stack_000000b8);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000b0);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c8);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000690 != '\x16') {
    FUN_100e077ec(&stack0x00000690);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (unaff_x19 == -0x8000000000000000) {
    *unaff_x26 = 0x800000000000000b;
    unaff_x26[1] = uVar1;
  }
  else {
    unaff_x26[10] = in_stack_00000168;
    unaff_x26[9] = in_stack_00000160;
    unaff_x26[0xc] = in_stack_00000178;
    unaff_x26[0xb] = in_stack_00000170;
    unaff_x26[0xe] = in_stack_00000188;
    unaff_x26[0xd] = in_stack_00000180;
    unaff_x26[2] = uVar1;
    unaff_x26[1] = unaff_x19;
    unaff_x26[4] = in_stack_00000138;
    unaff_x26[3] = in_stack_00000130;
    unaff_x26[6] = in_stack_00000148;
    unaff_x26[5] = in_stack_00000140;
    unaff_x26[0xf] = in_stack_00000190;
    unaff_x26[8] = in_stack_00000158;
    unaff_x26[7] = in_stack_00000150;
    *unaff_x26 = 0x8000000000000007;
  }
  return;
}

