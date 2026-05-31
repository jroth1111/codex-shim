
/* WARNING: Removing unreachable block (ram,0x000101c67a58) */

void FUN_101c6733c(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  undefined8 *puVar4;
  long unaff_x23;
  uint unaff_w25;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar2;
  if (in_stack_00000078 != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x22 != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_00000068 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000050 + 0x20);
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
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (unaff_x23 != 0) {
      _free(in_stack_00000050);
    }
  }
  if (((in_stack_00000070 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  uVar1 = 0;
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w20;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_1020378e0(&stack0x00000080);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

