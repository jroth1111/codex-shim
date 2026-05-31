
void FUN_10046c890(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
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
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

