
void FUN_10178a10c(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char in_stack_000001d0;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x00000140);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if (unaff_x19 != 2) {
    FUN_1017a72a4(&stack0x000000b0);
  }
  iVar1 = 0;
  if (unaff_x26 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  iVar1 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar1 = unaff_w21;
  }
  if ((iVar1 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000048);
  }
  FUN_1017a1d58(&stack0x000001f0);
  if (in_stack_000001d0 != '\x16') {
    func_0x0001017a6a48(&stack0x000001d0);
  }
  return;
}

