
void FUN_100465264(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *unaff_x23;
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
  ulong in_stack_000000a8;
  char in_stack_000000b0;
  ulong in_stack_00000220;
  long in_stack_00000228;
  long in_stack_00000238;
  long in_stack_000002b8;
  undefined8 in_stack_000002c0;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x100);
  *unaff_x23 = 0x1d;
  unaff_x23[1] = uVar2;
  if (in_stack_00000080 != -0x8000000000000000) {
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
  if (in_stack_00000220 != unaff_x26) {
    uVar3 = in_stack_00000220 ^ 0x8000000000000000;
    if (-1 < (long)in_stack_00000220) {
      uVar3 = 3;
    }
    lVar1 = in_stack_00000228;
    if (uVar3 < 0xb) {
      if (uVar3 != 3) goto LAB_100464808;
      in_stack_00000060 = in_stack_00000038;
      lVar1 = in_stack_00000238;
      if (in_stack_00000220 != 0) {
        _free(in_stack_00000228);
      }
    }
    if (lVar1 != 0) {
      _free(*in_stack_00000060);
    }
  }
LAB_100464808:
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000020);
  }
  if ((in_stack_00000098 != 0x8000000000000001) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000090 != 0x8000000000000001) && ((in_stack_00000090 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  return;
}

