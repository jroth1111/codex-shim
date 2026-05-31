
void FUN_10043a67c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((in_stack_00000068 != -0x7fffffffffffffff) && (in_stack_00000068 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x29 + -0xd8);
    lVar4 = *(long *)(unaff_x29 + -0xd0);
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 0x10);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (in_stack_00000068 != 0) {
      _free(lVar1);
    }
  }
  if (in_stack_00000070 != -0x8000000000000000) {
    if (unaff_x20 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000058 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
    }
    if (in_stack_00000070 != 0) {
      _free(in_stack_00000058);
    }
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

