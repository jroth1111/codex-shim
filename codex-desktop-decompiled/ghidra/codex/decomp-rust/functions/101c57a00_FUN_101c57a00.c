
void FUN_101c57a00(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar1;
  if (in_stack_00000050 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000048 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 4;
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (in_stack_00000050 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((in_stack_00000058 != 0x8000000000000001) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000018);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000028);
  }
  return;
}

