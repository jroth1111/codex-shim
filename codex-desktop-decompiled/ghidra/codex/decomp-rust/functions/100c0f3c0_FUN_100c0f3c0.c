
/* WARNING: Removing unreachable block (ram,0x000100c0d024) */
/* WARNING: Removing unreachable block (ram,0x000100c0e940) */

void FUN_100c0f3c0(void)

{
  int iVar1;
  uint uVar2;
  uint unaff_w23;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  int in_stack_00000088;
  undefined8 *in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  char in_stack_00000420;
  
  in_stack_000000f0 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002b0);
  in_stack_000000e8 = 0x8000000000000007;
  FUN_100d34830(&stack0x00000440);
  if (in_stack_00000420 != '\x16') {
    FUN_100e077ec(&stack0x00000420);
  }
  *in_stack_00000090 = 2;
  in_stack_00000090[1] = in_stack_000000f0;
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b0);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if (in_stack_000000a8 != 0) {
    _free(in_stack_00000080);
  }
  FUN_100d5c778(&stack0x000000d0);
  iVar1 = 0;
  if (in_stack_00000098 != 0x8000000000000001) {
    iVar1 = in_stack_00000088;
  }
  if ((iVar1 == 1) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000b0);
    uVar2 = 0;
    if (in_stack_000000a0 != 0x8000000000000001) {
      uVar2 = unaff_w23;
    }
  }
  else {
    uVar2 = 0;
    if (in_stack_000000a0 != 0x8000000000000001) {
      uVar2 = unaff_w23;
    }
  }
  if (((uVar2 & 1) != 0) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000b8);
  }
  return;
}

