
/* WARNING: Removing unreachable block (ram,0x000101233358) */
/* WARNING: Removing unreachable block (ram,0x0001012333b8) */
/* WARNING: Removing unreachable block (ram,0x0001012333f4) */

void FUN_101233250(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong unaff_x19;
  int unaff_w20;
  uint unaff_w25;
  ulong unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000120;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_000001a0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  char in_stack_00000230;
  
  uVar3 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000070);
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000008);
  }
  iVar1 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000008);
  }
  if (in_stack_00000230 != '\x16') {
    FUN_100e077ec(&stack0x00000230);
  }
  *in_stack_00000040 = 0x8000000000000001;
  in_stack_00000040[1] = uVar3;
  if ((in_stack_000001a0 != -0x7fffffffffffffff) && (in_stack_000001a0 != -0x8000000000000000)) {
    if ((in_stack_000001c0 != 0) && (in_stack_000001c0 * 9 != -0x11)) {
      _free(in_stack_000001b8 + in_stack_000001c0 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x000001a0);
  }
  FUN_100d5c778(&stack0x00000168);
  uVar2 = unaff_w25 ^ 1;
  if (in_stack_00000120 == in_stack_00000048) {
    uVar2 = 1;
  }
  if ((((uVar2 & 1) == 0) && (in_stack_00000120 != -0x7fffffffffffffff)) &&
     (in_stack_00000120 != -0x8000000000000000)) {
    if ((in_stack_00000140 != 0) && (in_stack_00000140 * 9 != -0x11)) {
      _free(in_stack_00000138 + in_stack_00000140 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000120);
  }
  return;
}

