
/* WARNING: Removing unreachable block (ram,0x00010178a690) */
/* WARNING: Removing unreachable block (ram,0x00010178a698) */

void FUN_10178a5ec(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_00000050;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000140;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  iVar1 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar1 = in_stack_00000050;
  }
  if ((iVar1 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

