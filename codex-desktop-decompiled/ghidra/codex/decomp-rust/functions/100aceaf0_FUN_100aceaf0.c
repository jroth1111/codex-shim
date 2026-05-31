
void FUN_100aceaf0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x24;
  uint unaff_w27;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  *unaff_x19 = 0x800000000000000f;
  unaff_x19[1] = uVar1;
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((unaff_w27 != 0x16) && ((unaff_w27 & 0x1e) != 0x14)) {
    FUN_100e077ec(&stack0x000000e0);
  }
  return;
}

