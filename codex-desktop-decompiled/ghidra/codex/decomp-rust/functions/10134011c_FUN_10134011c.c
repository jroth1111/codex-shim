
/* WARNING: Removing unreachable block (ram,0x000101340580) */
/* WARNING: Removing unreachable block (ram,0x000101340584) */
/* WARNING: Removing unreachable block (ram,0x0001013405bc) */
/* WARNING: Removing unreachable block (ram,0x00010134058c) */
/* WARNING: Removing unreachable block (ram,0x0001013405b4) */
/* WARNING: Removing unreachable block (ram,0x00010134055c) */
/* WARNING: Removing unreachable block (ram,0x000101340594) */
/* WARNING: Removing unreachable block (ram,0x00010134059c) */
/* WARNING: Removing unreachable block (ram,0x0001013405c4) */
/* WARNING: Removing unreachable block (ram,0x0001013405a4) */
/* WARNING: Removing unreachable block (ram,0x0001013405ac) */

void FUN_10134011c(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000060;
  
  lVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  FUN_100d03040(&stack0x000000f8);
  FUN_100de8910(&stack0x000000a8);
  if (in_stack_00000060 != unaff_x28) {
    FUN_100de6690(&stack0x00000060);
  }
  *unaff_x19 = unaff_x28 + 1;
  unaff_x19[1] = lVar1;
  return;
}

