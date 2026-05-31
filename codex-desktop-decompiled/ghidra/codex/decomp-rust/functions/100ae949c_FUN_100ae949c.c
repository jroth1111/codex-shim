
void FUN_100ae949c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x25;
  long unaff_x27;
  undefined8 in_stack_00000008;
  long in_stack_00000050;
  long in_stack_000000f0;
  long in_stack_000000f8;
  
  uVar4 = FUN_1011447dc(s_duplicate_field_____108ac2973,&stack0x00000110);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar4;
  if ((-0x7fffffffffffffff < unaff_x27) && (unaff_x27 != 0)) {
    _free(in_stack_00000008);
  }
  lVar3 = in_stack_000000f0;
  if ((unaff_x25 != -0x7fffffffffffffff) &&
     (lVar1 = in_stack_000000f0, lVar2 = in_stack_000000f8, unaff_x25 != -0x8000000000000000)) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      FUN_100e133d4(lVar1);
      lVar1 = lVar1 + 0x90;
    }
    if (unaff_x25 != 0) {
      _free(lVar3);
    }
  }
  if (1 < in_stack_00000050 + 0x7fffffffffffffffU) {
    FUN_100e02468(&stack0x00000058);
  }
  return;
}

