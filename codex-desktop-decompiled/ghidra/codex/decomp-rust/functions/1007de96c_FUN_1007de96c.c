
void FUN_1007de96c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x22;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000048;
  char in_stack_00000050;
  long in_stack_000000f0;
  ulong in_stack_00000100;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *in_stack_00000010 = 0x8000000000000001;
  in_stack_00000010[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (unaff_x27 != 0x8000000000000004) {
    uVar2 = unaff_x27 ^ 0x8000000000000000;
    if (-1 < (long)unaff_x27) {
      uVar2 = 2;
    }
    if (uVar2 != 0) {
      if ((uVar2 == 1) || (uVar2 != 2)) {
        if (in_stack_000000f0 == 0) goto LAB_1007de838;
      }
      else {
        if (unaff_x27 != 0) {
          _free(in_stack_000000f0);
        }
        if ((in_stack_00000100 & 0x7fffffffffffffff) == 0) goto LAB_1007de838;
        in_stack_00000048 = (undefined8 *)&stack0x00000108;
      }
      _free(*in_stack_00000048);
    }
  }
LAB_1007de838:
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000008);
  }
  return;
}

