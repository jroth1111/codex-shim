
/* WARNING: Removing unreachable block (ram,0x000101ca67f4) */

void FUN_101ca6290(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  undefined8 *puVar4;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000078;
  long in_stack_00000080;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar2;
  if (unaff_x21 != 0) {
    _free(in_stack_00000050);
  }
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000058 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[2] + 0x7fffffffffffffff < 2 || (puVar4[2] & 0x7fffffffffffffff) == 0) {
          lVar3 = puVar4[-1];
        }
        else {
          _free(puVar4[3]);
          lVar3 = puVar4[-1];
        }
        if (lVar3 != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 9;
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
  uVar1 = 0;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w23;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  FUN_1020353a0(unaff_x20 + 9);
  if (in_stack_00000080 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)in_stack_00000060 < 0) &&
     ((in_stack_00000060 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
