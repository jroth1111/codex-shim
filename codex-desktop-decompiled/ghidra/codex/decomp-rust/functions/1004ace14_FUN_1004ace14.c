
void FUN_1004ace14(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  char in_stack_00000030;
  long in_stack_00000260;
  undefined8 in_stack_00000268;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -200);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x24 != 0) {
      _free();
    }
    if ((in_stack_00000260 != -0x8000000000000000) && (in_stack_00000260 != 0)) {
      _free(in_stack_00000268);
    }
    if (in_stack_00000278 != -0x8000000000000000) {
      if (in_stack_00000288 != 0) {
        puVar2 = (undefined8 *)(in_stack_00000280 + 8);
        do {
          if (puVar2[-1] != 0) {
            _free(*puVar2);
          }
          puVar2 = puVar2 + 4;
          in_stack_00000288 = in_stack_00000288 + -1;
        } while (in_stack_00000288 != 0);
      }
      if (in_stack_00000278 != 0) {
        _free(in_stack_00000280);
      }
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

