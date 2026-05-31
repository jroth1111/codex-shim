
void FUN_100479404(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x28;
  long unaff_x29;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  char in_stack_00000040;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  ulong in_stack_00000280;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -200);
  *unaff_x28 = 0x800000000000006e;
  unaff_x28[1] = uVar1;
  if (unaff_x22 != 0x8000000000000003) {
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
        in_stack_00000038 = (undefined8 *)(unaff_x20 + 0x38);
      }
      _free(*in_stack_00000038);
    }
  }
LAB_1004795a8:
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

