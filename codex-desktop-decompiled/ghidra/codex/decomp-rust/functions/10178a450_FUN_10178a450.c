
void FUN_10178a450(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_000001d0;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x00000140);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000050 != -0x7ffffffffffffffb) {
    FUN_1017a4698(&stack0x000000b0);
  }
  if (((in_stack_00000068 & 0x7fffffffffffffff) != 0) && ((unaff_x23 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  iVar1 = 0;
  if (unaff_x21 != 0x8000000000000001) {
    iVar1 = unaff_w24;
  }
  if ((iVar1 == 1) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  iVar1 = 0;
  if (in_stack_00000058 != 0x8000000000000001) {
    iVar1 = unaff_w22;
  }
  if ((iVar1 == 1) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (in_stack_00000060 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_1017a1d58(&stack0x000001f0);
  if (in_stack_000001d0 != '\x16') {
    func_0x0001017a6a48(&stack0x000001d0);
  }
  return;
}

