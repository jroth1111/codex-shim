
void FUN_1004c4724(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x10;
  ulong unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b8;
  long in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  ulong in_stack_000000e0;
  long *in_stack_000000e8;
  char in_stack_000000f0;
  long in_stack_00000118;
  long in_stack_00000128;
  long in_stack_00000130;
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
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  
  lVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_000000e8 = 7;
  in_stack_000000e8[1] = lVar2;
  if (in_stack_000000c8 != 7) {
    if (in_stack_000000c8 == 3) {
      uVar3 = *(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff;
    }
    else {
      if (in_stack_000000c8 != 4) goto LAB_1004c489c;
      uVar3 = *(ulong *)(unaff_x29 + -0xd8);
    }
    if (uVar3 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd0));
    }
  }
LAB_1004c489c:
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000070);
  }
  if ((in_stack_000000d0 != 0x8000000000000001) && ((in_stack_000000d0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000058);
  }
  if ((in_x10 != 0x8000000000000001) && ((in_x10 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000060);
  }
  if ((in_stack_000000e0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  lVar1 = in_stack_00000128;
  lVar2 = in_stack_00000118;
  if (*in_stack_000000e8 == 7) {
    FUN_100d34830(&stack0x00000110);
    if (in_stack_000000f0 != '\x16') {
      FUN_100e077ec(&stack0x000000f0);
    }
  }
  else {
    in_stack_000001e8 = in_stack_000000e8[0x15];
    in_stack_000001e0 = in_stack_000000e8[0x14];
    lVar6 = in_stack_000000e8[0x17];
    lVar5 = in_stack_000000e8[0x16];
    lVar4 = in_stack_000000e8[0x18];
    in_stack_000001a8 = in_stack_000000e8[0xd];
    in_stack_000001a0 = in_stack_000000e8[0xc];
    in_stack_000001b8 = in_stack_000000e8[0xf];
    in_stack_000001b0 = in_stack_000000e8[0xe];
    in_stack_000001c8 = in_stack_000000e8[0x11];
    in_stack_000001c0 = in_stack_000000e8[0x10];
    in_stack_000001d8 = in_stack_000000e8[0x13];
    in_stack_000001d0 = in_stack_000000e8[0x12];
    in_stack_00000168 = in_stack_000000e8[5];
    in_stack_00000160 = in_stack_000000e8[4];
    in_stack_00000178 = in_stack_000000e8[7];
    in_stack_00000170 = in_stack_000000e8[6];
    in_stack_00000188 = in_stack_000000e8[9];
    in_stack_00000180 = in_stack_000000e8[8];
    in_stack_00000198 = in_stack_000000e8[0xb];
    in_stack_00000190 = in_stack_000000e8[10];
    in_stack_00000148 = in_stack_000000e8[1];
    in_stack_00000140 = *in_stack_000000e8;
    in_stack_00000158 = in_stack_000000e8[3];
    in_stack_00000150 = in_stack_000000e8[2];
    FUN_100d34830(&stack0x00000110);
    if (lVar1 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x80) = in_stack_00000130;
      lVar2 = thunk_FUN_1087e422c(in_stack_00000130 + ((ulong)(lVar1 - lVar2) >> 6),
                                  unaff_x29 + -0x80,&UNK_10b23a190);
    }
    if (in_stack_000000f0 != '\x16') {
      FUN_100e077ec(&stack0x000000f0);
    }
    if (lVar2 == 0) {
      in_stack_000000e8[0x15] = in_stack_000001e8;
      in_stack_000000e8[0x14] = in_stack_000001e0;
      in_stack_000000e8[0x17] = lVar6;
      in_stack_000000e8[0x16] = lVar5;
      in_stack_000000e8[0x18] = lVar4;
      in_stack_000000e8[0xd] = in_stack_000001a8;
      in_stack_000000e8[0xc] = in_stack_000001a0;
      in_stack_000000e8[0xf] = in_stack_000001b8;
      in_stack_000000e8[0xe] = in_stack_000001b0;
      in_stack_000000e8[0x11] = in_stack_000001c8;
      in_stack_000000e8[0x10] = in_stack_000001c0;
      in_stack_000000e8[0x13] = in_stack_000001d8;
      in_stack_000000e8[0x12] = in_stack_000001d0;
      in_stack_000000e8[5] = in_stack_00000168;
      in_stack_000000e8[4] = in_stack_00000160;
      in_stack_000000e8[7] = in_stack_00000178;
      in_stack_000000e8[6] = in_stack_00000170;
      in_stack_000000e8[9] = in_stack_00000188;
      in_stack_000000e8[8] = in_stack_00000180;
      in_stack_000000e8[0xb] = in_stack_00000198;
      in_stack_000000e8[10] = in_stack_00000190;
      in_stack_000000e8[1] = in_stack_00000148;
      *in_stack_000000e8 = in_stack_00000140;
      in_stack_000000e8[3] = in_stack_00000158;
      in_stack_000000e8[2] = in_stack_00000150;
    }
    else {
      *in_stack_000000e8 = 7;
      in_stack_000000e8[1] = lVar2;
      FUN_100e2de00(&stack0x00000140);
    }
  }
  if ((in_stack_000000d8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000b8);
  }
  return;
}

