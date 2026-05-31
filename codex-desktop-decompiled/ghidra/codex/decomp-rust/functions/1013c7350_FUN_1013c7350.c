
void FUN_1013c7350(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_000000a0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f8;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  char in_stack_00000690;
  
  lVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000500);
  if (unaff_x21 + -3 <= in_stack_000000e8) {
    FUN_100e24ac8(&stack0x000005b0);
  }
  if (unaff_x27 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      puVar2 = (undefined8 *)(unaff_x24 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x22 = unaff_x22 + -1;
      } while (unaff_x22 != 0);
    }
    if (unaff_x27 != 0) {
      _free();
    }
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000a0);
  }
  FUN_100d34830(&stack0x000006b0);
  if (in_stack_00000690 != '\x16') {
    FUN_100e077ec(&stack0x00000690);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (unaff_x23 == 0x8000000000000000) {
    *unaff_x26 = unaff_x21 + 6;
    unaff_x26[1] = lVar1;
  }
  else {
    unaff_x26[8] = in_stack_00000158;
    unaff_x26[7] = in_stack_00000150;
    unaff_x26[10] = in_stack_00000168;
    unaff_x26[9] = in_stack_00000160;
    unaff_x26[0xc] = in_stack_00000178;
    unaff_x26[0xb] = in_stack_00000170;
    unaff_x26[2] = lVar1;
    unaff_x26[1] = unaff_x23;
    unaff_x26[4] = in_stack_00000138;
    unaff_x26[3] = in_stack_00000130;
    unaff_x26[0xd] = in_stack_00000180;
    unaff_x26[6] = in_stack_00000148;
    unaff_x26[5] = in_stack_00000140;
    *unaff_x26 = unaff_x21 + -3;
  }
  return;
}

