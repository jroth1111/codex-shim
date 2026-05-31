
/* WARNING: Removing unreachable block (ram,0x000100b99710) */
/* WARNING: Removing unreachable block (ram,0x000100b99780) */

void FUN_100b99444(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000220;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000003c0);
  if (in_stack_00000068 != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000070 != -0x8000000000000000) && (in_stack_00000070 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  uVar1 = 0;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w26;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100de8910(&stack0x00000268);
  if (in_stack_00000220 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000220);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(unaff_x29 + -0xb0);
  }
  uVar2 = FUN_108854818(uVar2,&UNK_108cbfae4,0x23);
  FUN_100e3d46c(unaff_x19 + 8);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar2;
  unaff_x20[7] = in_stack_00000398;
  unaff_x20[6] = in_stack_00000390;
  unaff_x20[9] = in_stack_000003a8;
  unaff_x20[8] = in_stack_000003a0;
  unaff_x20[0xb] = in_stack_000003b8;
  unaff_x20[10] = in_stack_000003b0;
  unaff_x20[3] = in_stack_00000378;
  unaff_x20[2] = in_stack_00000370;
  unaff_x20[5] = in_stack_00000388;
  unaff_x20[4] = in_stack_00000380;
  *(undefined1 *)(unaff_x19 + 0xb8) = 1;
  return;
}

