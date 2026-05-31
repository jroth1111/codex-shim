
/* WARNING: Removing unreachable block (ram,0x000100452600) */
/* WARNING: Removing unreachable block (ram,0x00010045260c) */
/* WARNING: Removing unreachable block (ram,0x000100452614) */
/* WARNING: Removing unreachable block (ram,0x0001004525bc) */

void FUN_1004521b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if (unaff_x22 != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

