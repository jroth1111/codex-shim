
/* WARNING: Removing unreachable block (ram,0x00010135fe54) */
/* WARNING: Removing unreachable block (ram,0x000101360938) */
/* WARNING: Removing unreachable block (ram,0x000101360968) */
/* WARNING: Removing unreachable block (ram,0x00010135fe7c) */
/* WARNING: Removing unreachable block (ram,0x00010135fe8c) */
/* WARNING: Removing unreachable block (ram,0x000101360004) */
/* WARNING: Removing unreachable block (ram,0x000101360008) */

void FUN_101360a08(void)

{
  undefined8 uVar1;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  undefined8 *in_stack_00000070;
  char in_stack_00000430;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000320);
  FUN_100d5c778(&stack0x00000110);
  if (((in_stack_00000060 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000060)) &&
     (in_stack_00000060 != 0)) {
    _free(in_stack_00000050);
  }
  in_stack_00000070[1] = uVar1;
  *in_stack_00000070 = 4;
  FUN_100d5c778(&stack0x000000b0);
  FUN_100d34830(&stack0x00000450);
  if (in_stack_00000430 != '\x16') {
    FUN_100e077ec(&stack0x00000430);
  }
  return;
}

