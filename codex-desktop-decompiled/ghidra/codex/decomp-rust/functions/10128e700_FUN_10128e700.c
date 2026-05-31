
void FUN_10128e700(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (unaff_x23 != 0) {
    plVar3 = (long *)(unaff_x21 + 0x30);
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
      unaff_x23 = unaff_x23 + -1;
    } while (unaff_x23 != 0);
  }
  if (unaff_x25 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000008);
  }
  return;
}

