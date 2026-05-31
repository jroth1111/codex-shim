
void FUN_101c926cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000028);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000000);
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000010);
  }
  return;
}
