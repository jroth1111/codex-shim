
void FUN_10047712c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x24 & 0x7fffffffffffffff) == 0) {
    lVar2 = *(long *)(unaff_x29 + -0xd0);
  }
  else {
    _free();
    lVar2 = *(long *)(unaff_x29 + -0xd0);
  }
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    _free(*(undefined8 *)(unaff_x29 + -200));
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

