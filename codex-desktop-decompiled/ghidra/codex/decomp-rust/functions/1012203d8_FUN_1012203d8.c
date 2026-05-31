
void FUN_1012203d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long lVar2;
  long unaff_x20;
  undefined8 *puVar3;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x28;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  long in_stack_00000048;
  char in_stack_00000050;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000160;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000170);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (((in_stack_00000048 != unaff_x20) && (in_stack_00000048 != -0x7fffffffffffffff)) &&
     (in_stack_00000048 != -0x8000000000000000)) {
    if (in_stack_00000160 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000030 + 8);
      lVar2 = in_stack_00000160;
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (in_stack_00000048 != 0) {
      _free(in_stack_00000030);
    }
  }
  if (unaff_x28 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      _free();
    }
    if ((in_stack_00000138 != -0x8000000000000000) && (in_stack_00000138 != 0)) {
      _free(in_stack_00000140);
    }
    if (in_stack_00000120 != 0) {
      _free(in_stack_00000128);
    }
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((unaff_w21 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000020);
  }
  return;
}

