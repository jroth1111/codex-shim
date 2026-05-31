
void FUN_100793a44(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x27 = 4;
  unaff_x27[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

