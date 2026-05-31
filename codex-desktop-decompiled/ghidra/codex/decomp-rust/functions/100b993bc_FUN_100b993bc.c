
/* WARNING: Removing unreachable block (ram,0x000100b99708) */
/* WARNING: Removing unreachable block (ram,0x000100b99710) */

void FUN_100b993bc(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000070;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000220;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_00000388;
  long in_stack_00000390;
  long in_stack_00000398;
  long in_stack_000003a0;
  long in_stack_000003a8;
  long in_stack_000003b0;
  long in_stack_000003b8;
  
  lVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000003c0);
  if ((in_stack_00000070 != -0x8000000000000000) && (in_stack_00000070 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100de8910(&stack0x00000268);
  if (in_stack_00000220 != unaff_x27) {
    FUN_100de6690(&stack0x00000220);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != unaff_x27 - 1U)) {
    FUN_100de6690(unaff_x29 + -0xb0);
  }
  if (unaff_x21 == -0x8000000000000000) {
    lVar1 = FUN_108854818(lVar1,&UNK_108cbfae4,0x23);
    in_stack_000001c0 = in_stack_00000370;
    in_stack_000001c8 = in_stack_00000378;
    in_stack_000001d0 = in_stack_00000380;
    in_stack_000001d8 = in_stack_00000388;
    in_stack_000001e0 = in_stack_00000390;
    in_stack_000001e8 = in_stack_00000398;
    in_stack_000001f0 = in_stack_000003a0;
    in_stack_000001f8 = in_stack_000003a8;
    in_stack_00000200 = in_stack_000003b0;
    in_stack_00000208 = in_stack_000003b8;
  }
  FUN_100e3d46c(unaff_x19 + 8);
  *unaff_x20 = unaff_x21;
  unaff_x20[1] = lVar1;
  unaff_x20[7] = in_stack_000001e8;
  unaff_x20[6] = in_stack_000001e0;
  unaff_x20[9] = in_stack_000001f8;
  unaff_x20[8] = in_stack_000001f0;
  unaff_x20[0xb] = in_stack_00000208;
  unaff_x20[10] = in_stack_00000200;
  unaff_x20[3] = in_stack_000001c8;
  unaff_x20[2] = in_stack_000001c0;
  unaff_x20[5] = in_stack_000001d8;
  unaff_x20[4] = in_stack_000001d0;
  *(undefined1 *)(unaff_x19 + 0xb8) = 1;
  return;
}

