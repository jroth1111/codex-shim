
void FUN_101248074(void)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x22;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000120);
  *unaff_x26 = 0x8000000000000003;
  unaff_x26[1] = uVar1;
  if ((in_stack_00000048 != 0x8000000000000001) && ((in_stack_00000048 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

