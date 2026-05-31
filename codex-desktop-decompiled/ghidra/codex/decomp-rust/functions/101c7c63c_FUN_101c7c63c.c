
void FUN_101c7c63c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x23;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (in_stack_00000048 != -0x8000000000000000) {
    if (unaff_x23 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000038 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (in_stack_00000048 != 0) {
      _free(in_stack_00000038);
    }
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000018);
  }
  return;
}

