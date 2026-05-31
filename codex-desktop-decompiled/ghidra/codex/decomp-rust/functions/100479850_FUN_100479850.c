
void FUN_100479850(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  char in_stack_00000040;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  ulong in_stack_00000280;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -200);
  *in_stack_00000010 = 0x800000000000006e;
  in_stack_00000010[1] = uVar1;
  uVar2 = unaff_x22 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x22) {
    uVar2 = 3;
  }
  if (1 < uVar2 - 1) {
    if (uVar2 == 0) {
      if (in_stack_00000028 == 0) goto LAB_1004795a8;
    }
    else {
      if (unaff_x22 != 0) {
        _free(in_stack_00000028);
      }
      if (in_stack_00000268 != 0) {
        _free(in_stack_00000270);
      }
      if ((in_stack_00000280 & 0x7fffffffffffffff) == 0) goto LAB_1004795a8;
      in_stack_00000038 = (undefined8 *)&stack0x00000288;
    }
    _free(*in_stack_00000038);
  }
LAB_1004795a8:
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

