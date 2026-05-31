
void FUN_1004e6ec0(void)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000328;
  uint in_stack_00000338;
  long *in_stack_00000340;
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000028);
  *unaff_x19 = 0x11;
  unaff_x19[1] = lVar1;
  plVar2 = *(long **)(unaff_x29 + -0x90);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x29 + -0x90);
    }
  }
  if (unaff_x21 != 0x11) {
    FUN_100de8594(&stack0x00000350);
  }
  if (((unaff_w24 != 1) && ((in_stack_00000338 & 1) != 0)) && (in_stack_00000340 != (long *)0x0)) {
    lVar1 = *in_stack_00000340;
    *in_stack_00000340 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x23 + 8);
    }
  }
  if (*unaff_x19 != 0x11) {
    _memcpy(&stack0x00000028);
    if (in_stack_00000010 - in_stack_00000008 != 0) {
      lVar1 = thunk_FUN_1087e422c(in_stack_00000020 +
                                  ((ulong)(in_stack_00000010 - in_stack_00000008) >> 6),
                                  &stack0x00000350,&UNK_10b23a190);
      *unaff_x19 = 0x11;
      unaff_x19[1] = lVar1;
      if (in_stack_00000328 != (long *)0x0) {
        lVar1 = *in_stack_00000328;
        *in_stack_00000328 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000328);
        }
      }
      FUN_100de8594(&stack0x00000028);
    }
  }
  return;
}

