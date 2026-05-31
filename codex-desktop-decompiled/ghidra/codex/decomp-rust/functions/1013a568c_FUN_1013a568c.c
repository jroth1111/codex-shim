
void FUN_1013a568c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xb8) = 0x8000000000000001;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000050);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000060);
  }
  FUN_100de8910(unaff_x24 + 0x48);
  if (in_stack_00000070 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000070);
  }
  if (((long)in_stack_00000068 < 0) &&
     ((in_stack_00000068 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000058);
  }
  if (*(long *)(unaff_x29 + -0xb8) == -0x7fffffffffffffff) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb0);
    *in_stack_00000028 = 0x8000000000000002;
    in_stack_00000028[1] = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x29 + -0x98);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x80);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x88);
    in_stack_00000028[5] = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000028[4] = uVar1;
    in_stack_00000028[7] = uVar3;
    in_stack_00000028[6] = uVar2;
    in_stack_00000028[8] = *(undefined8 *)(unaff_x29 + -0x78);
    uVar3 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar2 = *(undefined8 *)(unaff_x29 + -0xa0);
    uVar1 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_00000028[1] = *(undefined8 *)(unaff_x29 + -0xb0);
    *in_stack_00000028 = uVar3;
    in_stack_00000028[3] = uVar2;
    in_stack_00000028[2] = uVar1;
  }
  return;
}

