
void FUN_1004b3568(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x28 = 0x800000000000006e;
  unaff_x28[1] = uVar2;
  if (unaff_x25 != -0x7fffffffffffffff) {
    if (unaff_x24 != -0x8000000000000000) {
      lVar3 = *(long *)(unaff_x29 + -200);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(unaff_x22 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (unaff_x24 != 0) {
        _free();
      }
    }
    lVar3 = *(long *)(unaff_x29 + -0xc0);
    if (lVar3 != -0x8000000000000000) {
      lVar1 = *(long *)(unaff_x29 + -0xb8);
      lVar5 = *(long *)(unaff_x29 + -0xb0);
      if (lVar5 != 0) {
        puVar4 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (lVar3 != 0) {
        _free(lVar1);
      }
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

