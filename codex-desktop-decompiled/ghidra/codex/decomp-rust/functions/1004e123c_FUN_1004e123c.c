
void FUN_1004e123c(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long *in_stack_00000088;
  long in_stack_00000090;
  uint in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 in_stack_000000b8;
  long in_stack_000000d0;
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000020);
  *unaff_x19 = -0x7fffffffffffffff;
  unaff_x19[1] = lVar1;
  if (unaff_x24 != 0x8000000000000001) {
    if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
      _free();
    }
    if (in_stack_000000d0 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x000000d0);
    }
  }
  if (((in_stack_000000a0 & 1) != 0) && (in_stack_000000a8 != (long *)0x0)) {
    lVar1 = *in_stack_000000a8;
    *in_stack_000000a8 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x000000a8);
    }
  }
  if (*unaff_x19 != -0x7fffffffffffffff) {
    in_stack_00000068 = unaff_x19[9];
    in_stack_00000060 = unaff_x19[8];
    in_stack_00000078 = unaff_x19[0xb];
    in_stack_00000070 = unaff_x19[10];
    in_stack_00000088 = (long *)unaff_x19[0xd];
    in_stack_00000080 = unaff_x19[0xc];
    in_stack_00000090 = unaff_x19[0xe];
    in_stack_00000028 = unaff_x19[1];
    in_stack_00000020 = *unaff_x19;
    in_stack_00000038 = unaff_x19[3];
    in_stack_00000030 = unaff_x19[2];
    in_stack_00000048 = unaff_x19[5];
    in_stack_00000040 = unaff_x19[4];
    in_stack_00000058 = unaff_x19[7];
    in_stack_00000050 = unaff_x19[6];
    if (unaff_x22 - unaff_x21 == 0) {
      unaff_x19[9] = in_stack_00000068;
      unaff_x19[8] = in_stack_00000060;
      unaff_x19[0xb] = in_stack_00000078;
      unaff_x19[10] = in_stack_00000070;
      unaff_x19[0xd] = (long)in_stack_00000088;
      unaff_x19[0xc] = in_stack_00000080;
      unaff_x19[0xe] = in_stack_00000090;
      unaff_x19[1] = in_stack_00000028;
      *unaff_x19 = in_stack_00000020;
      unaff_x19[3] = in_stack_00000038;
      unaff_x19[2] = in_stack_00000030;
      unaff_x19[5] = in_stack_00000048;
      unaff_x19[4] = in_stack_00000040;
      unaff_x19[7] = in_stack_00000058;
      unaff_x19[6] = in_stack_00000050;
    }
    else {
      lVar1 = thunk_FUN_1087e422c(unaff_x25 + ((ulong)(unaff_x22 - unaff_x21) >> 6),&stack0x000000b8
                                  ,&UNK_10b23a190);
      *unaff_x19 = -0x7fffffffffffffff;
      unaff_x19[1] = lVar1;
      if (in_stack_00000088 != (long *)0x0) {
        lVar1 = *in_stack_00000088;
        *in_stack_00000088 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000088);
        }
      }
      if ((in_stack_00000020 != -0x8000000000000000) && (in_stack_00000020 != 0)) {
        _free(in_stack_00000028);
      }
      if (in_stack_00000038 != -0x7ffffffffffffffb) {
        FUN_100de6690(&stack0x00000038);
      }
    }
  }
  return;
}

