
void FUN_100495fa4(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  int in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_00000068 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000198);
  }
  if (((unaff_x25 & 0x7fffffffffffffff) != 0) && ((in_stack_00000038 & 1) != 0)) {
    _free(in_stack_00000048);
  }
  iVar1 = 0;
  if (in_stack_00000070 != 0x8000000000000001) {
    iVar1 = unaff_w26;
  }
  if ((iVar1 == 1) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  iVar1 = 0;
  if (unaff_x21 != 0x8000000000000001) {
    iVar1 = in_stack_00000058;
  }
  if ((iVar1 == 1) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (in_stack_00000078 != 0x8000000000000001) {
    iVar1 = in_stack_00000060;
  }
  if ((iVar1 == 1) && ((in_stack_00000078 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

