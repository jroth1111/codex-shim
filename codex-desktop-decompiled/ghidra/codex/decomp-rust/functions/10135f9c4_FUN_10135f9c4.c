
/* WARNING: Removing unreachable block (ram,0x000101360498) */
/* WARNING: Removing unreachable block (ram,0x00010135ffc4) */
/* WARNING: Removing unreachable block (ram,0x00010136096c) */
/* WARNING: Removing unreachable block (ram,0x0001013609a0) */
/* WARNING: Removing unreachable block (ram,0x00010135ffec) */
/* WARNING: Removing unreachable block (ram,0x00010135fffc) */
/* WARNING: Removing unreachable block (ram,0x000101360004) */
/* WARNING: Removing unreachable block (ram,0x000101360008) */

void FUN_10135f9c4(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  long in_stack_00000050;
  uint in_stack_00000058;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  char in_stack_00000170;
  long in_stack_00000228;
  long in_stack_00000230;
  char in_stack_00000430;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000320);
  if ((unaff_x24 != -0x7fffffffffffffff) && (unaff_x24 != -0x8000000000000000)) {
    if ((in_stack_00000230 != 0) && (in_stack_00000230 * 9 != -0x11)) {
      _free(in_stack_00000228 + in_stack_00000230 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000210);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (in_stack_00000170 != '\x16') {
    FUN_100e077ec(&stack0x00000170);
  }
  if ((-0x7fffffffffffffff < in_stack_00000050) && (in_stack_00000050 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d5c778(&stack0x00000138);
  in_stack_00000058 = in_stack_00000058 ^ 1;
  if (in_stack_00000068 == -0x7ffffffffffffffe) {
    in_stack_00000058 = 1;
  }
  if ((((in_stack_00000058 & 1) == 0) && (-0x7fffffffffffffff < in_stack_00000068)) &&
     (in_stack_00000068 != 0)) {
    _free(in_stack_00000030);
  }
  *in_stack_00000070 = 4;
  in_stack_00000070[1] = uVar1;
  FUN_100d5c778(&stack0x00000098);
  FUN_100d34830(&stack0x00000450);
  if (in_stack_00000430 != '\x16') {
    FUN_100e077ec(&stack0x00000430);
  }
  return;
}

