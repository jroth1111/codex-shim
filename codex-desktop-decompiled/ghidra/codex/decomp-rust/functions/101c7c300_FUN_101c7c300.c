
void FUN_101c7c300(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *puVar2;
  uint unaff_w20;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
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
  FUN_102033488(unaff_x24 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((unaff_w20 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

