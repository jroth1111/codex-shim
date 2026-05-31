
/* WARNING: Removing unreachable block (ram,0x00010135ffc4) */
/* WARNING: Removing unreachable block (ram,0x00010136096c) */
/* WARNING: Removing unreachable block (ram,0x0001013609a0) */
/* WARNING: Removing unreachable block (ram,0x00010135ffec) */
/* WARNING: Removing unreachable block (ram,0x00010135fffc) */
/* WARNING: Removing unreachable block (ram,0x000101360004) */
/* WARNING: Removing unreachable block (ram,0x000101360008) */

void FUN_1013609cc(void)

{
  undefined8 uVar1;
  undefined8 in_stack_00000030;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  char in_stack_00000430;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000320);
  FUN_100d5c778(&stack0x00000138);
  if (((in_stack_00000068 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000068)) &&
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

