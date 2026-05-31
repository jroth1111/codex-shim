
void FUN_101cca4d8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  ulong in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      puVar2 = (undefined8 *)(unaff_x21 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x22 = unaff_x22 + -1;
      } while (unaff_x22 != 0);
    }
    if (unaff_x24 != 0) {
      _free();
    }
  }
  FUN_1020353a0(unaff_x20 + 0x48);
  if (in_stack_00000050 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000028 < 0) &&
     ((in_stack_00000028 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000040);
  }
  return;
}
