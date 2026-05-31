
/* WARNING: Removing unreachable block (ram,0x000100489228) */

void FUN_10048909c(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  long in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  long in_stack_00000098;
  char in_stack_000000a0;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x24 = 0x1d;
  unaff_x24[1] = uVar2;
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000090 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x26 != 0) {
    _free(in_stack_00000048);
  }
  if (in_stack_00000098 != 0) {
    _free();
  }
  if (in_stack_00000078 != -0x8000000000000000) {
    if (in_stack_00000078 != 0) {
      _free(in_stack_00000060);
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  if (((in_stack_00000080 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  uVar1 = 0;
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000038);
    uVar1 = 0;
    if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w22;
    }
  }
  else {
    _free(in_stack_00000040);
    uVar1 = 0;
    if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w22;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  return;
}

