
/* WARNING: Removing unreachable block (ram,0x0001004da6bc) */
/* WARNING: Removing unreachable block (ram,0x0001004da6cc) */
/* WARNING: Removing unreachable block (ram,0x0001004da6ec) */

void FUN_1004da750(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w19;
  ulong unaff_x20;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000070;
  long in_stack_00000078;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *in_stack_00000008 = 2;
  in_stack_00000008[1] = uVar2;
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x25 != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x28 != -0x7fffffffffffffff) && (unaff_x28 != -0x8000000000000000)) {
    if ((in_stack_00000078 != 0) && (in_stack_00000078 * 9 != -0x11)) {
      _free(in_stack_00000070 + in_stack_00000078 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000058);
  }
  iVar1 = 0;
  if (unaff_x26 != 0x8000000000000001) {
    iVar1 = unaff_w19;
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  return;
}

