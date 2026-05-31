
/* WARNING: Removing unreachable block (ram,0x0001004e3760) */
/* WARNING: Removing unreachable block (ram,0x0001004e3768) */
/* WARNING: Removing unreachable block (ram,0x0001004e38cc) */
/* WARNING: Removing unreachable block (ram,0x0001004e38d8) */
/* WARNING: Removing unreachable block (ram,0x0001004e38ec) */
/* WARNING: Removing unreachable block (ram,0x0001004e38fc) */
/* WARNING: Removing unreachable block (ram,0x0001004e3900) */

void FUN_1004e36b0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x29;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x70);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (in_stack_00000038 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000038);
  }
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  return;
}

