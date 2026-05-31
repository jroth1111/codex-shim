
/* WARNING: Removing unreachable block (ram,0x000100470318) */

void FUN_10046fea8(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w20;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char in_stack_00000050;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *in_stack_00000010 = 0x11;
  in_stack_00000010[1] = uVar2;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (unaff_x23 != 0) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (unaff_x22 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  return;
}

