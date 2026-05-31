
void FUN_101ca6938(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar3;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000068;
  ulong in_stack_00000078;
  long in_stack_00000080;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000058 + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[2] + 0x7fffffffffffffff < 2 || (puVar3[2] & 0x7fffffffffffffff) == 0) {
          lVar2 = puVar3[-1];
        }
        else {
          _free(puVar3[3]);
          lVar2 = puVar3[-1];
        }
        if (lVar2 != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 9;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000058);
    }
    unaff_x20 = &stack0x00000080;
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_1020353a0(unaff_x20 + 9);
  if (in_stack_00000080 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)unaff_x27 < 0) && ((unaff_x27 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000038);
  }
  return;
}
