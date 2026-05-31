
/* WARNING: Removing unreachable block (ram,0x000100bc4324) */
/* WARNING: Removing unreachable block (ram,0x000100bc432c) */

void FUN_100bc4bc8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long in_stack_00000200;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar1;
  FUN_100cb624c(&stack0x00000200);
  if (unaff_x21 != 0) {
    _free();
    unaff_x22 = in_stack_00000200;
  }
  if ((unaff_x22 != -0x8000000000000000) && ((unaff_x20 & 1) != 0)) {
    FUN_100cb624c(&stack0x00000200);
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

