
void FUN_101cc3540(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000040;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar1;
  if (unaff_x28 != -0x8000000000000000) {
    if (unaff_x23 != 0) {
      puVar2 = (undefined8 *)(unaff_x22 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (unaff_x28 != 0) {
      _free();
    }
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)in_stack_00000010 < 0) &&
     ((in_stack_00000010 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000008);
  }
  return;
}
