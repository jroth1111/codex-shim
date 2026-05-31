
void FUN_100c0f11c(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000004d0);
  *in_stack_00000090 = 2;
  in_stack_00000090[1] = uVar1;
  FUN_100d5c778(&stack0x000000d0);
  if ((in_stack_00000098 != 0x8000000000000001) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000b0);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000b8);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000080);
  }
  return;
}

