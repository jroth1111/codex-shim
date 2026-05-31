
void FUN_1004dea00(void)

{
  long lVar1;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000a60;
  
  lVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000008e0);
  in_stack_00000008[1] = lVar1;
  *in_stack_00000008 = -0x7ffffffffffffffb;
  FUN_100d5c778(&stack0x00000048);
  if (((in_stack_00000030 & 1) == 1) && (in_stack_00000038 != (long *)0x0)) {
    lVar1 = *in_stack_00000038;
    *in_stack_00000038 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000038);
    }
  }
  if (*in_stack_00000008 != -0x7ffffffffffffffb) {
    _memcpy(&stack0x000008e0,in_stack_00000008,400);
    if (in_stack_00000018 - in_stack_00000010 != 0) {
      lVar1 = thunk_FUN_1087e422c(in_stack_00000028 +
                                  ((ulong)(in_stack_00000018 - in_stack_00000010) >> 6),
                                  &stack0x00000720,&UNK_10b23a190);
      *in_stack_00000008 = -0x7ffffffffffffffb;
      in_stack_00000008[1] = lVar1;
      if (in_stack_00000a60 != (long *)0x0) {
        lVar1 = *in_stack_00000a60;
        *in_stack_00000a60 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000a60);
        }
      }
      FUN_100deb298(&stack0x000008e0);
    }
  }
  return;
}

