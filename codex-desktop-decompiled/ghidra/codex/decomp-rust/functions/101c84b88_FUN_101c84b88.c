
/* WARNING: Removing unreachable block (ram,0x000101c84e54) */
/* WARNING: Removing unreachable block (ram,0x000101c84ecc) */
/* WARNING: Removing unreachable block (ram,0x000101c84ed4) */

void FUN_101c84b88(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x25;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  char in_stack_000000c0;
  long in_stack_000000e8;
  long in_stack_000000f8;
  long in_stack_00000100;

  lVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *unaff_x25 = unaff_x19;
  unaff_x25[1] = lVar2;
  if (in_stack_00000090 != -0x7ffffffffffffffa) {
    FUN_10204178c(&stack0x00000220);
  }
  if ((in_stack_00000098 != 0x8000000000000001) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000b0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if (*unaff_x25 == -0x8000000000000000) {
    FUN_102033488(unaff_x28 + 0x20);
    if (in_stack_000000c0 != '\x16') {
      FUN_1020378e0(&stack0x000000c0);
    }
  }
  else {
    _memcpy(&stack0x00000108);
    lVar1 = in_stack_000000f8;
    lVar2 = in_stack_000000e8;
    FUN_102033488(unaff_x28 + 0x20);
    if (lVar1 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x100) = in_stack_00000100;
      lVar2 = FUN_1088c7110(in_stack_00000100 + ((ulong)(lVar1 - lVar2) >> 6),unaff_x29 + -0x100,
                            &UNK_10b276c98);
    }
    if (in_stack_000000c0 != '\x16') {
      FUN_1020378e0(&stack0x000000c0);
    }
    if (lVar2 == 0) {
      _memcpy();
    }
    else {
      *unaff_x25 = -0x8000000000000000;
      unaff_x25[1] = lVar2;
      FUN_102031bec(&stack0x00000108);
    }
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
