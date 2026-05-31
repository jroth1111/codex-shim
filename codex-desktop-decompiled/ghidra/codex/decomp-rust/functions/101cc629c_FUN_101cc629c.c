
/* WARNING: Removing unreachable block (ram,0x000101cc6374) */

void FUN_101cc629c(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x25;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000240);
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar1;
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000038);
  }
  if (((in_stack_00000068 != 0x8000000000000001) && ((unaff_x19 & 1) != 0)) &&
     ((in_stack_00000068 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000070 != unaff_x25) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)in_stack_00000058 < 0) && ((in_stack_00000058 & 0xfffffffffffffffe) != unaff_x25 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
