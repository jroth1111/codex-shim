
/* WARNING: Removing unreachable block (ram,0x000100c0d024) */

void FUN_100c0f218(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
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
  
  uVar3 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000004d0);
  FUN_100d03040(&stack0x00000200);
  *in_stack_00000090 = 2;
  in_stack_00000090[1] = uVar3;
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

