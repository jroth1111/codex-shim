
void FUN_1007b627c(void)

{
  undefined8 uVar1;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  long in_stack_00000098;
  char in_stack_000000a0;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  long in_stack_00000280;
  undefined8 in_stack_00000288;
  long in_stack_00000298;
  long in_stack_000002e8;
  undefined8 in_stack_000002f0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000390);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar1;
  if (in_stack_00000098 != -0x7fffffffffffffff) {
    if (in_stack_00000098 == -0x8000000000000000) {
      if (in_stack_000002e8 != 0) {
        _free(in_stack_000002f0);
      }
    }
    else {
      func_0x000100e00868(&stack0x000002e0);
    }
  }
  if ((in_stack_00000088 != 0x8000000000000001) && ((in_stack_00000088 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000090 != 0x8000000000000001) && ((in_stack_00000090 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000060);
  }
  if (in_stack_00000268 != -0x8000000000000000) {
    if (in_stack_00000268 != 0) {
      _free(in_stack_00000270);
    }
    if (in_stack_00000280 != 0) {
      _free(in_stack_00000288);
    }
    if (in_stack_00000298 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x00000298);
    }
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000058);
  }
  return;
}

