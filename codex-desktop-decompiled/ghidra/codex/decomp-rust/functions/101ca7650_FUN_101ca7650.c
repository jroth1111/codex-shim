
/* WARNING: Removing unreachable block (ram,0x000101ca7c00) */

void FUN_101ca7650(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *puVar3;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  long in_stack_00000080;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar2;
  if (unaff_x25 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x20 != -0x8000000000000000) {
    if (unaff_x27 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000050 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (unaff_x20 != 0) {
      _free(in_stack_00000050);
    }
    unaff_x22 = &stack0x00000080;
  }
  if ((in_stack_00000078 == 0x8000000000000001) || ((in_stack_00000078 & 0x7fffffffffffffff) == 0))
  {
    uVar1 = 0;
    if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  else {
    _free(in_stack_00000028);
    uVar1 = 0;
    if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x22 + 9);
  if (in_stack_00000080 != unaff_x24) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)in_stack_00000070 < 0) && ((in_stack_00000070 & 0xfffffffffffffffe) != unaff_x24 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
