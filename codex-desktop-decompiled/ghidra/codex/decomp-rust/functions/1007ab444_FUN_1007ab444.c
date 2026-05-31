
void FUN_1007ab444(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x23;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000080;
  long in_stack_00000088;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  char in_stack_000000c0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *in_stack_00000080 = 0x8000000000000000;
  in_stack_00000080[1] = uVar1;
  if (in_stack_00000088 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000060 + 8);
      do {
        if ((puVar2[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 5;
        unaff_x26 = unaff_x26 + -1;
      } while (unaff_x26 != 0);
    }
    if (in_stack_00000088 != 0) {
      _free(in_stack_00000060);
    }
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if (in_stack_000000a8 != -0x8000000000000000) {
    if (unaff_x19 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000050 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x19 = unaff_x19 + -1;
      } while (unaff_x19 != 0);
    }
    if (in_stack_000000a8 != 0) {
      _free(in_stack_00000050);
    }
  }
  if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (-0x7fffffffffffffff < in_stack_000000b0) {
    if (unaff_x23 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000058 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (in_stack_000000b0 != 0) {
      _free(in_stack_00000058);
    }
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x000000e0);
  if (in_stack_000000c0 != '\x16') {
    FUN_100e077ec(&stack0x000000c0);
  }
  if ((in_stack_00000048._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

