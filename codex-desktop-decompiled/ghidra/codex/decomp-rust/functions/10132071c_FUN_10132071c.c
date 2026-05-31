
void FUN_10132071c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x28;
  long unaff_x29;
  long lVar3;
  long lVar4;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000003;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 == '\x16') {
    lVar2 = *(long *)(unaff_x29 + -0xb0);
  }
  else {
    FUN_100e077ec(&stack0x00000080);
    lVar2 = *(long *)(unaff_x29 + -0xb0);
  }
  if (lVar2 == -0x7ffffffffffffffd) {
    lVar2 = *(long *)(unaff_x29 + -0xa8);
    *unaff_x19 = unaff_x28 + -1;
    unaff_x19[1] = lVar2;
  }
  else {
    lVar2 = *(long *)(unaff_x29 + -0xb0);
    lVar4 = *(long *)(unaff_x29 + -0x98);
    lVar3 = *(long *)(unaff_x29 + -0xa0);
    unaff_x19[1] = *(long *)(unaff_x29 + -0xa8);
    *unaff_x19 = lVar2;
    unaff_x19[3] = lVar4;
    unaff_x19[2] = lVar3;
  }
  return;
}

