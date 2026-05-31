
/* WARNING: Removing unreachable block (ram,0x000100bd9aac) */
/* WARNING: Removing unreachable block (ram,0x000100bd9ab4) */

void FUN_100bd962c(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000090;
  long in_stack_000000a0;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000058 = 2;
  in_stack_00000058[1] = uVar1;
  if (unaff_x23 != 0) {
    _free(in_stack_00000050);
  }
  if (((in_stack_00000090 & 0x7fffffffffffffff) != 0) && ((unaff_x21 & 1) != 0)) {
    _free(in_stack_00000048);
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_000000a0 != unaff_x28) {
    FUN_100de6690(&stack0x000000a0);
  }
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x28 - 1U)) {
    FUN_100de6690();
  }
  return;
}

