
void FUN_1007c7ed4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  long unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  char in_stack_00000060;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar2;
  if (in_stack_00000058 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar4 = (undefined8 *)(unaff_x27 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (in_stack_00000058 != 0) {
      _free();
      unaff_x22 = *(long *)(unaff_x29 + -0xe8);
    }
  }
  if (unaff_x22 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xe0);
    lVar3 = *(long *)(unaff_x29 + -0xd8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (unaff_x22 != 0) {
      _free(lVar1);
    }
  }
  lVar3 = in_stack_00000108;
  lVar1 = in_stack_00000100;
  if (in_stack_00000100 != -0x8000000000000000) {
    if (in_stack_00000110 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000108 + 8);
      lVar5 = in_stack_00000110;
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar1 != 0) {
      _free(lVar3);
    }
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000040._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

