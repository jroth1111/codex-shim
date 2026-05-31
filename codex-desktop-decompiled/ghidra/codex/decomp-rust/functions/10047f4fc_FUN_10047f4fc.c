
void FUN_10047f4fc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x25;
  ulong *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  do {
    if (unaff_x20 == 0) {
      if (unaff_x25 != 0) {
        _free();
      }
      if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000020);
      }
      if ((in_stack_00000050 != 0x8000000000000001) &&
         ((in_stack_00000050 & 0x7fffffffffffffff) != 0)) {
        _free(in_stack_00000018);
      }
      FUN_100d34830(&stack0x00000080);
      if (in_stack_00000060 != '\x16') {
        FUN_100e077ec(&stack0x00000060);
      }
      return;
    }
    uVar2 = *unaff_x27;
    uVar4 = uVar2 ^ 0x8000000000000000;
    if (-1 < (long)uVar2) {
      uVar4 = 1;
    }
    if ((uVar4 == 0) || (uVar4 != 1)) {
      if (unaff_x27[1] != 0) {
        lVar3 = 0x10;
        goto LAB_10047ef20;
      }
    }
    else if (uVar2 != 0) {
      lVar3 = 8;
LAB_10047ef20:
      _free(*(undefined8 *)((long)unaff_x27 + lVar3));
    }
    unaff_x27 = unaff_x27 + 4;
    unaff_x20 = unaff_x20 + -1;
  } while( true );
}

