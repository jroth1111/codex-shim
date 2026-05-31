
void FUN_1004580b8(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  ulong in_stack_00000260;
  long in_stack_00000268;
  ulong in_stack_00000278;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -200);
  *unaff_x28 = unaff_x20;
  unaff_x28[1] = uVar1;
  if (unaff_x25 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      _free();
    }
    uVar3 = in_stack_00000260 ^ 0x8000000000000000;
    if (-1 < (long)in_stack_00000260) {
      uVar3 = 2;
    }
    if (uVar3 != 0) {
      if ((uVar3 == 1) || (uVar3 != 2)) {
        if (in_stack_00000268 == 0) goto LAB_1004582a8;
        lVar2 = 0x10;
      }
      else {
        if (in_stack_00000260 != 0) {
          _free(in_stack_00000268);
        }
        if ((in_stack_00000278 & 0x7fffffffffffffff) == 0) goto LAB_1004582a8;
        lVar2 = 0x20;
      }
      _free(*(undefined8 *)(&stack0x00000260 + lVar2));
    }
  }
LAB_1004582a8:
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

