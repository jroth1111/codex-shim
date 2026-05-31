
void FUN_10046c408(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = 0x800000000000006e;
  unaff_x28[1] = uVar1;
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      plVar3 = (long *)(in_stack_00000020 + 0x30);
      do {
        if (plVar3[-6] != 0) {
          _free(plVar3[-5]);
        }
        if (plVar3[-3] == -0x8000000000000000 || plVar3[-3] == 0) {
          lVar2 = *plVar3;
        }
        else {
          _free(plVar3[-2]);
          lVar2 = *plVar3;
        }
        if (lVar2 != -0x8000000000000000) {
          FUN_100e589f4(plVar3);
        }
        plVar3 = plVar3 + 0x19;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (unaff_x22 != 0) {
      _free(in_stack_00000020);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

