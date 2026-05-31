
void FUN_10049194c(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  uint unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000060 = 0x11;
  in_stack_00000060[1] = uVar3;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x19 != -0x8000000000000000) && (unaff_x19 != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  uVar1 = 0;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w23;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  iVar2 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    iVar2 = unaff_w22;
  }
  if ((iVar2 == 1) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  iVar2 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar2 = unaff_w21;
  }
  if ((iVar2 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

