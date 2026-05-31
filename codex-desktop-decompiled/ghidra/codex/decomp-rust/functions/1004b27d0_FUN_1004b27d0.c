
/* WARNING: Removing unreachable block (ram,0x0001004b2820) */
/* WARNING: Removing unreachable block (ram,0x0001004b2824) */

void FUN_1004b27d0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x27;
  long in_stack_00000030;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000338);
  *unaff_x27 = 0x800000000000006e;
  unaff_x27[1] = uVar1;
  if (in_stack_00000030 != -0x8000000000000000) {
    FUN_100e7d87c(&stack0x00000250);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

