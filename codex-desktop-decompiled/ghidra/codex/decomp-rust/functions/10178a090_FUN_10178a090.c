
void FUN_10178a090(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000140;
  
  uVar3 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar3;
  if (unaff_x22 != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000060 != -0x8000000000000000) && (in_stack_00000060 != 0)) {
    _free(in_stack_00000038);
  }
  if (((in_stack_00000068 & 0x7fffffffffffffff) != 0) && ((unaff_x24 & 1) != 0)) {
    _free(in_stack_00000050);
  }
  uVar1 = 0;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w26;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000058);
  }
  iVar2 = 0;
  if (unaff_x20 != 0x8000000000000001) {
    iVar2 = unaff_w23;
  }
  if ((iVar2 == 1) && ((unaff_x20 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  iVar2 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar2 = unaff_w21;
  }
  if ((iVar2 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000048);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

