
/* WARNING: Removing unreachable block (ram,0x0001004c5e2c) */
/* WARNING: Removing unreachable block (ram,0x0001004c5e34) */

void FUN_1004c5954(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  uint in_stack_000000a0;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  long *in_stack_000000c8;
  char in_stack_000000d0;
  long in_stack_00000120;
  long in_stack_00000128;
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
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_000000c8 = 7;
  in_stack_000000c8[1] = lVar1;
  if (in_stack_000000a8 != 7) {
    if (in_stack_000000a8 == 3) {
      uVar2 = *(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff;
    }
    else {
      if (in_stack_000000a8 != 4) goto LAB_1004c5da0;
      uVar2 = *(ulong *)(unaff_x29 + -0xd8);
    }
    if (uVar2 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd0));
    }
  }
LAB_1004c5da0:
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_000000b0 != 0x8000000000000001) && ((in_stack_000000b0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000b8 != 0x8000000000000001) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  if (*in_stack_000000c8 == 7) {
    FUN_100d34830(&stack0x000000f0);
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
  }
  else {
    in_stack_000001a8 = in_stack_000000c8[0x11];
    in_stack_000001a0 = in_stack_000000c8[0x10];
    in_stack_000001b8 = in_stack_000000c8[0x13];
    in_stack_000001b0 = in_stack_000000c8[0x12];
    in_stack_000001c0 = in_stack_000000c8[0x14];
    in_stack_00000168 = in_stack_000000c8[9];
    in_stack_00000160 = in_stack_000000c8[8];
    in_stack_00000178 = in_stack_000000c8[0xb];
    in_stack_00000170 = in_stack_000000c8[10];
    in_stack_00000188 = in_stack_000000c8[0xd];
    in_stack_00000180 = in_stack_000000c8[0xc];
    in_stack_00000198 = in_stack_000000c8[0xf];
    in_stack_00000190 = in_stack_000000c8[0xe];
    in_stack_00000128 = in_stack_000000c8[1];
    in_stack_00000120 = *in_stack_000000c8;
    in_stack_00000138 = in_stack_000000c8[3];
    in_stack_00000130 = in_stack_000000c8[2];
    in_stack_00000148 = in_stack_000000c8[5];
    in_stack_00000140 = in_stack_000000c8[4];
    in_stack_00000158 = in_stack_000000c8[7];
    in_stack_00000150 = in_stack_000000c8[6];
    FUN_100d34830(&stack0x000000f0);
    if (unaff_x20 == unaff_x21) {
      lVar1 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x88) = unaff_x26;
      lVar1 = thunk_FUN_1087e422c(((ulong)(unaff_x20 - unaff_x21) >> 6) + unaff_x26,
                                  unaff_x29 + -0x88,&UNK_10b23a190);
    }
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
    if (lVar1 == 0) {
      in_stack_000000c8[0x11] = in_stack_000001a8;
      in_stack_000000c8[0x10] = in_stack_000001a0;
      in_stack_000000c8[0x13] = in_stack_000001b8;
      in_stack_000000c8[0x12] = in_stack_000001b0;
      in_stack_000000c8[0x14] = in_stack_000001c0;
      in_stack_000000c8[9] = in_stack_00000168;
      in_stack_000000c8[8] = in_stack_00000160;
      in_stack_000000c8[0xb] = in_stack_00000178;
      in_stack_000000c8[10] = in_stack_00000170;
      in_stack_000000c8[0xd] = in_stack_00000188;
      in_stack_000000c8[0xc] = in_stack_00000180;
      in_stack_000000c8[0xf] = in_stack_00000198;
      in_stack_000000c8[0xe] = in_stack_00000190;
      in_stack_000000c8[1] = in_stack_00000128;
      *in_stack_000000c8 = in_stack_00000120;
      in_stack_000000c8[3] = in_stack_00000138;
      in_stack_000000c8[2] = in_stack_00000130;
      in_stack_000000c8[5] = in_stack_00000148;
      in_stack_000000c8[4] = in_stack_00000140;
      in_stack_000000c8[7] = in_stack_00000158;
      in_stack_000000c8[6] = in_stack_00000150;
    }
    else {
      in_stack_000000c8[1] = lVar1;
      *in_stack_000000c8 = 7;
      FUN_100e41620(&stack0x00000120);
    }
  }
  if ((in_stack_000000a0 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

