
/* WARNING: Removing unreachable block (ram,0x00010178b730) */

void FUN_10178b808(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  int unaff_w20;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000068;
  char in_stack_00000140;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if (unaff_x25 != 0) {
    _free();
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000068 != -0x8000000000000000) &&
     (FUN_1017a5c10(in_stack_00000048,in_stack_00000040), in_stack_00000068 != 0)) {
    _free(in_stack_00000048);
  }
  if (((unaff_x23 & 0x7fffffffffffffff) != 0) && ((unaff_x22 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (unaff_x19 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x19 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

