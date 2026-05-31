
void FUN_101320694(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x23;
  long unaff_x28;
  long unaff_x29;
  long lVar3;
  long lVar4;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000003;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
  FUN_100d34830(unaff_x23 + 0x20);
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

