
/* WARNING: Removing unreachable block (ram,0x000100ad07b0) */

void FUN_100ad05b0(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x21;
  undefined8 *puVar2;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  char in_stack_00000100;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x98);
  if (in_stack_00000058 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000040 + 0x20);
      do {
        if (puVar2[-4] != 0) {
          _free(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 6;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (in_stack_00000058 != 0) {
      _free(in_stack_00000040);
    }
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x00000120);
  if (in_stack_00000100 != '\x16') {
    FUN_100e077ec(&stack0x00000100);
  }
  if ((in_stack_00000078._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  in_stack_00000070[1] = uVar1;
  *in_stack_00000070 = 0x800000000000000f;
  return;
}

