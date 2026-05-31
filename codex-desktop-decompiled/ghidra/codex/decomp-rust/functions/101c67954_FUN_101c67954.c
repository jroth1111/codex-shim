
void FUN_101c67954(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong in_x10;
  undefined8 *puVar3;
  long unaff_x23;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar1;
  if (in_stack_00000068 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000050 + 0x20);
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
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (unaff_x23 != 0) {
      _free(in_stack_00000050);
    }
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_1020378e0(&stack0x00000080);
  }
  if ((in_stack_00000048._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000028);
  }
  return;
}

