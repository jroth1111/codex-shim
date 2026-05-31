
void FUN_101b9b47c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x23;
  undefined1 unaff_w28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  uVar1 = FUN_1019aaab4(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_00000030) && (in_stack_00000030 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7fffffffffffffff < in_stack_00000038) && (in_stack_00000038 != 0)) {
    _free(in_stack_00000028);
  }
  *(undefined1 *)(unaff_x20 + 0xb) = unaff_w28;
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x29 + -200) = unaff_x20[1];
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
  __ZN10serde_yaml5error8fix_mark17h40966cb431052c9fE(uVar1,unaff_x29 + -0xe8,unaff_x29 + -0xd0);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar1;
  return;
}

