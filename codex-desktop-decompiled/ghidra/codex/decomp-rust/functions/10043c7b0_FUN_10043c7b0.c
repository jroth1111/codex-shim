
void FUN_10043c7b0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar1;
  if (unaff_x24 != -0x7fffffffffffffff) {
    if (unaff_x24 != -0x8000000000000000) {
      lVar2 = *(long *)(unaff_x29 + -200);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(unaff_x27 + 8);
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (unaff_x24 != 0) {
        _free();
      }
    }
    if ((*(ulong *)(unaff_x29 + -0xc0) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xb8));
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

