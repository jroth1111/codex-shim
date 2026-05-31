
void FUN_100acef3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  ulong in_stack_00000070;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  char in_stack_00000150;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000150 != '\x16') {
    FUN_100e077ec(&stack0x00000150);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  if (unaff_x26 == 0x8000000000000000) {
    uVar2 = 0x800000000000000f;
    unaff_x24[1] = uVar1;
  }
  else {
    unaff_x24[2] = uVar1;
    unaff_x24[1] = unaff_x26;
    unaff_x24[4] = in_stack_00000098;
    unaff_x24[3] = in_stack_00000090;
    unaff_x24[6] = in_stack_000000a8;
    unaff_x24[5] = in_stack_000000a0;
    unaff_x24[8] = in_stack_000000b8;
    unaff_x24[7] = in_stack_000000b0;
    uVar2 = 0x8000000000000006;
  }
  *unaff_x24 = uVar2;
  return;
}

