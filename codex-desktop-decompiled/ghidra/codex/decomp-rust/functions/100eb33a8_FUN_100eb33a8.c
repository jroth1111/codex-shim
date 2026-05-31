
void FUN_100eb33a8(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint unaff_w20;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000050;
  char in_stack_000001d0;
  long in_stack_00000220;
  long in_stack_00000238;
  long in_stack_00000240;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *in_stack_00000050 = 3;
  in_stack_00000050[1] = uVar2;
  if (*(long *)(unaff_x29 + -0xe0) != -0x8000000000000000) {
    lVar3 = *(long *)(unaff_x29 + -0xc0);
    if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
      _free(*(long *)(unaff_x29 + -200) + lVar3 * -8 + -8);
    }
    func_0x000100cd7284(unaff_x29 + -0xe0);
  }
  if ((unaff_x23 != -0x8000000000000000) && (unaff_x23 != 0)) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  uVar1 = 0;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    _free();
  }
  uVar1 = 0;
  if (in_stack_00000220 != -0x7fffffffffffffff) {
    uVar1 = unaff_w20;
  }
  if (((uVar1 & 1) != 0) && (in_stack_00000220 != -0x8000000000000000)) {
    if ((in_stack_00000240 != 0) && (in_stack_00000240 * 9 != -0x11)) {
      _free(in_stack_00000238 + in_stack_00000240 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000220);
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_000001d0 != '\x16') {
    FUN_100e077ec(&stack0x000001d0);
  }
  return;
}

