
/* WARNING: Removing unreachable block (ram,0x000100464884) */

void FUN_100464908(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  long in_stack_00000080;
  long in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  char in_stack_000000b0;
  ulong in_stack_00000220;
  long in_stack_00000228;
  long in_stack_00000238;
  long in_stack_000002b8;
  undefined8 in_stack_000002c0;
  
  uVar4 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *unaff_x23 = 0x1d;
  unaff_x23[1] = uVar4;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if (in_stack_000000a8 != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_00000080 != -0x7fffffffffffffff) && (in_stack_00000080 != -0x8000000000000000)) {
    if (in_stack_00000080 != 0) {
      _free(in_stack_00000058);
    }
    if (in_stack_000002b8 != 0) {
      _free(in_stack_000002c0);
    }
  }
  if (in_stack_00000088 != 4) {
    FUN_100e35d14(&stack0x00000250);
  }
  if (in_stack_00000220 != 0x800000000000000c) {
    uVar5 = in_stack_00000220 ^ 0x8000000000000000;
    if (-1 < (long)in_stack_00000220) {
      uVar5 = 3;
    }
    lVar3 = in_stack_00000228;
    if (uVar5 < 0xb) {
      if (uVar5 != 3) goto LAB_100464808;
      in_stack_00000060 = in_stack_00000038;
      lVar3 = in_stack_00000238;
      if (in_stack_00000220 != 0) {
        _free(in_stack_00000228);
      }
    }
    if (lVar3 != 0) {
      _free(*in_stack_00000060);
    }
  }
LAB_100464808:
  uVar1 = 0;
  if (in_stack_000000a0 != 0x8000000000000001) {
    uVar1 = unaff_w22;
  }
  if (((uVar1 & 1) != 0) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  iVar2 = 0;
  if (in_stack_00000098 != 0x8000000000000001) {
    iVar2 = unaff_w21;
  }
  if ((iVar2 == 1) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  iVar2 = 0;
  if (in_stack_00000090 != 0x8000000000000001) {
    iVar2 = unaff_w20;
  }
  if ((iVar2 == 1) && ((in_stack_00000090 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  return;
}

