
void FUN_101337c04(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xb8) = 0x8000000000000000;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000040);
  }
  if (((long)unaff_x27 < 0) && ((unaff_x27 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  if (*(long *)(unaff_x29 + -0xb8) == -0x8000000000000000) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb0);
    *unaff_x26 = 0x8000000000000001;
    unaff_x26[1] = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
    uVar2 = *(undefined8 *)(unaff_x29 + -0xa8);
    unaff_x26[1] = *(undefined8 *)(unaff_x29 + -0xb0);
    *unaff_x26 = uVar1;
    unaff_x26[3] = uVar3;
    unaff_x26[2] = uVar2;
    uVar1 = *(undefined8 *)(unaff_x29 + -0x98);
    unaff_x26[5] = *(undefined8 *)(unaff_x29 + -0x90);
    unaff_x26[4] = uVar1;
  }
  return;
}

