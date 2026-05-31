
void FUN_10130050c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *(undefined8 *)(unaff_x29 + -0xc0) = 0x8000000000000000;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar1;
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000048);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_00000060 != unaff_x19) {
    FUN_100de6690(&stack0x00000060);
  }
  if (((long)unaff_x26 < 0) && ((unaff_x26 & 0xfffffffffffffffe) != unaff_x19 - 1U)) {
    FUN_100de6690();
  }
  if (*(long *)(unaff_x29 + -0xc0) == -0x8000000000000000) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb8);
    *unaff_x24 = 0x8000000000000001;
    unaff_x24[1] = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar3 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar2 = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x24[1] = *(undefined8 *)(unaff_x29 + -0xb8);
    *unaff_x24 = uVar1;
    unaff_x24[3] = uVar3;
    unaff_x24[2] = uVar2;
    uVar1 = *(undefined8 *)(unaff_x29 + -0xa0);
    unaff_x24[5] = *(undefined8 *)(unaff_x29 + -0x98);
    unaff_x24[4] = uVar1;
    unaff_x24[6] = *(undefined8 *)(unaff_x29 + -0x90);
  }
  return;
}

