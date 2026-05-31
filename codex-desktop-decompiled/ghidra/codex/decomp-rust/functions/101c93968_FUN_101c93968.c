
void FUN_101c93968(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x70);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar1;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  if ((-0x7fffffffffffffff < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000050);
  }
  return;
}
