
/* WARNING: Removing unreachable block (ram,0x000101c57958) */

void FUN_101c57434(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint unaff_w22;
  uint unaff_w25;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar2;
  if (in_stack_00000068 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000050 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000048 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (in_stack_00000050 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((in_stack_00000058 == 0x8000000000000001) || ((in_stack_00000058 & 0x7fffffffffffffff) == 0))
  {
    uVar1 = 0;
    if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w22;
    }
  }
  else {
    _free(in_stack_00000018);
    uVar1 = 0;
    if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w22;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000030);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

