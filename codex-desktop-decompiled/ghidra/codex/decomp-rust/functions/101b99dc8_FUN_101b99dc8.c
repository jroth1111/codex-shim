
void FUN_101b99dc8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 unaff_w25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_stack_00000008;
  
  uVar2 = FUN_1019aaab4(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  lVar1 = in_stack_00000008;
  for (; unaff_x27 != 0; unaff_x27 = unaff_x27 + -1) {
    FUN_101958350(lVar1);
    lVar1 = lVar1 + 0x90;
  }
  if (unaff_x26 != 0) {
    _free(in_stack_00000008);
  }
  *(undefined1 *)(unaff_x20 + 0xb) = unaff_w25;
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x20[1];
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar4;
  uVar2 = __ZN10serde_yaml5error8fix_mark17h40966cb431052c9fE
                    (uVar2,&stack0x00000098,unaff_x29 + -0xc0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar2;
  return;
}

