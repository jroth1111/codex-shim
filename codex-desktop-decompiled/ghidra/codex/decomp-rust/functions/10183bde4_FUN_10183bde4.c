
void FUN_10183bde4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x26;
  undefined1 unaff_w27;
  undefined8 in_stack_00000000;
  long in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  uVar2 = FUN_1019aaab4(s_duplicate_field_____108ac2973,&stack0x00000050);
  if ((-0x7fffffffffffffff < in_stack_00000028) && (in_stack_00000028 != 0)) {
    _free(in_stack_00000000);
  }
  lVar1 = in_stack_00000018;
  if (-0x7fffffffffffffff < in_stack_00000030) {
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -1) {
      FUN_101958350(lVar1);
      lVar1 = lVar1 + 0x90;
    }
    if (in_stack_00000030 != 0) {
      _free(in_stack_00000018);
    }
  }
  if (1 < in_stack_00000038 + 0x7fffffffffffffffU) {
    FUN_101952660(&stack0x00000118);
  }
  *(undefined1 *)(unaff_x22 + 0x58) = unaff_w27;
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar2;
  return;
}

