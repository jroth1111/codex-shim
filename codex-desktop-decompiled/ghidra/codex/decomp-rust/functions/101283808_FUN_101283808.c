
void FUN_101283808(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  long in_stack_00000098;
  long in_stack_000000a0;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = uVar2;
  if (unaff_x28 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      puVar3 = (undefined8 *)(unaff_x21 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        unaff_x22 = unaff_x22 + -1;
      } while (unaff_x22 != 0);
    }
    if (unaff_x28 != 0) {
      _free();
    }
  }
  lVar1 = in_stack_00000098;
  if ((unaff_x26 != -0x7fffffffffffffff) && (unaff_x26 != -0x8000000000000000)) {
    if (in_stack_000000a0 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000098 + 8);
      lVar4 = in_stack_000000a0;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (unaff_x26 != 0) {
      _free(lVar1);
    }
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

