
void FUN_101337f14(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xb8) = 0x8000000000000000;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000040);
  }
  if (((long)in_stack_00000020 < 0) &&
     ((in_stack_00000020 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000018);
  }
  if (*(long *)(unaff_x29 + -0xb8) == -0x8000000000000000) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb0);
    *in_stack_00000010 = 0x8000000000000001;
    in_stack_00000010[1] = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
    uVar2 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_00000010[1] = *(undefined8 *)(unaff_x29 + -0xb0);
    *in_stack_00000010 = uVar1;
    in_stack_00000010[3] = uVar3;
    in_stack_00000010[2] = uVar2;
    uVar1 = *(undefined8 *)(unaff_x29 + -0x98);
    in_stack_00000010[5] = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000010[4] = uVar1;
  }
  return;
}

