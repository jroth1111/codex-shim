
void FUN_100493038(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar2;
  if (*(long *)(unaff_x29 + -0xe8) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xe0));
  }
  lVar3 = *(long *)(unaff_x29 + -0xd0);
  if (lVar3 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -200);
    lVar4 = *(long *)(unaff_x29 + -0xc0);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000010);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

