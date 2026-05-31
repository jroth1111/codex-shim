
/* WARNING: Removing unreachable block (ram,0x000100468198) */

void FUN_100467e9c(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  long in_stack_00000078;
  long in_stack_00000080;
  ulong in_stack_00000088;
  char in_stack_00000090;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x24 = 0x1d;
  unaff_x24[1] = uVar2;
  if (unaff_x25 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x23 != 0) {
    _free(in_stack_00000048);
  }
  if (in_stack_00000078 != 0) {
    _free();
  }
  if ((in_stack_00000080 != -0x7fffffffffffffff) && (in_stack_00000080 != -0x8000000000000000)) {
    if (in_stack_00000080 != 0) {
      _free(in_stack_00000058);
    }
    if (in_stack_00000210 != 0) {
      _free(in_stack_00000218);
    }
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  else {
    _free(in_stack_00000030);
    uVar1 = 0;
    if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  else {
    _free(in_stack_00000038);
    uVar1 = 0;
    if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000040);
    uVar1 = 0;
    if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  return;
}

