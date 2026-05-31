
void FUN_100668d38(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  long in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  *in_stack_00000018 = 0x8000000000000000;
  in_stack_00000018[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x23 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      puVar2 = (undefined8 *)(unaff_x20 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (unaff_x23 != 0) {
      _free();
    }
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_00000050 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000050);
  }
  if (((long)unaff_x24 < 0) && ((unaff_x24 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000020);
  }
  return;
}

