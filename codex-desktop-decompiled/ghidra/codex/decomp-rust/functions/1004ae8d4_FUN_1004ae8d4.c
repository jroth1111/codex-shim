
void FUN_1004ae8d4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar2;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x24 != 0) {
      _free(in_stack_00000028);
    }
    lVar1 = *(long *)(unaff_x29 + -200);
    lVar3 = *(long *)(unaff_x29 + -0xc0);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(long *)(unaff_x29 + -0xd0) != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

