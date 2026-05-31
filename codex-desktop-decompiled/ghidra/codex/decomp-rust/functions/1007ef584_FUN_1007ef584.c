
void FUN_1007ef584(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (in_stack_00000048 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000030 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 4;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (in_stack_00000048 != 0) {
      _free(in_stack_00000030);
    }
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  return;
}

