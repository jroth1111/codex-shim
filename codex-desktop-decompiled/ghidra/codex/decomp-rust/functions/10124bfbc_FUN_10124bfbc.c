
/* WARNING: Removing unreachable block (ram,0x00010124bee0) */

void FUN_10124bfbc(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x23;
  long unaff_x27;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  if (unaff_x27 != 0) {
    _free();
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000030 != unaff_x19) {
    FUN_100de6690(&stack0x00000030);
  }
  if (((long)in_stack_00000018 < 0) && ((in_stack_00000018 & 0xfffffffffffffffe) != unaff_x19 - 1U))
  {
    FUN_100de6690(in_stack_00000010);
  }
  *in_stack_00000020 = 0x8000000000000001;
  in_stack_00000020[1] = uVar1;
  return;
}

