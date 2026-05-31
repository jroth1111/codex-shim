
/* WARNING: Removing unreachable block (ram,0x000101c302e0) */

void FUN_101c30474(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  uint unaff_w21;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  char in_stack_000000d0;
  long in_stack_000000f8;
  long in_stack_00000108;
  long in_stack_00000110;
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
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  
  lVar3 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x12;
  unaff_x19[1] = lVar3;
  if (in_stack_000000c8 != 0) {
    _free();
  }
  if ((in_stack_000000b0 != 0x8000000000000001) && ((in_stack_000000b0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  lVar3 = in_stack_00000060;
  if (in_stack_000000c0 != -0x8000000000000000) {
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -1) {
      FUN_1020395a8(lVar3);
      lVar3 = lVar3 + 0x50;
    }
    if (in_stack_000000c0 != 0) {
      _free(in_stack_00000060);
    }
  }
  if ((in_stack_000000b8 != 0x8000000000000001) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  else {
    _free(in_stack_00000048);
    uVar1 = 0;
    if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w21;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000050);
  }
  lVar2 = in_stack_00000108;
  lVar3 = in_stack_000000f8;
  if (*unaff_x19 == 0x12) {
    FUN_102033488(&stack0x000000f0);
    if (in_stack_000000d0 != '\x16') {
      FUN_1020378e0(&stack0x000000d0);
    }
  }
  else {
    in_stack_000001e8 = unaff_x19[0x19];
    in_stack_000001e0 = unaff_x19[0x18];
    lVar8 = unaff_x19[0x1b];
    lVar7 = unaff_x19[0x1a];
    lVar6 = unaff_x19[0x1d];
    lVar5 = unaff_x19[0x1c];
    lVar4 = unaff_x19[0x1e];
    in_stack_000001a8 = unaff_x19[0x11];
    in_stack_000001a0 = unaff_x19[0x10];
    in_stack_000001b8 = unaff_x19[0x13];
    in_stack_000001b0 = unaff_x19[0x12];
    in_stack_000001c8 = unaff_x19[0x15];
    in_stack_000001c0 = unaff_x19[0x14];
    in_stack_000001d8 = unaff_x19[0x17];
    in_stack_000001d0 = unaff_x19[0x16];
    in_stack_00000168 = unaff_x19[9];
    in_stack_00000160 = unaff_x19[8];
    in_stack_00000178 = unaff_x19[0xb];
    in_stack_00000170 = unaff_x19[10];
    in_stack_00000188 = unaff_x19[0xd];
    in_stack_00000180 = unaff_x19[0xc];
    in_stack_00000198 = unaff_x19[0xf];
    in_stack_00000190 = unaff_x19[0xe];
    in_stack_00000128 = unaff_x19[1];
    in_stack_00000120 = *unaff_x19;
    in_stack_00000138 = unaff_x19[3];
    in_stack_00000130 = unaff_x19[2];
    in_stack_00000148 = unaff_x19[5];
    in_stack_00000140 = unaff_x19[4];
    in_stack_00000158 = unaff_x19[7];
    in_stack_00000150 = unaff_x19[6];
    FUN_102033488(&stack0x000000f0);
    if (lVar2 == lVar3) {
      lVar3 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x80) = in_stack_00000110;
      lVar3 = FUN_1088c7110(in_stack_00000110 + ((ulong)(lVar2 - lVar3) >> 6),unaff_x29 + -0x80,
                            &UNK_10b276c98);
    }
    if (in_stack_000000d0 != '\x16') {
      FUN_1020378e0(&stack0x000000d0);
    }
    if (lVar3 == 0) {
      unaff_x19[0x19] = in_stack_000001e8;
      unaff_x19[0x18] = in_stack_000001e0;
      unaff_x19[0x1b] = lVar8;
      unaff_x19[0x1a] = lVar7;
      unaff_x19[0x1d] = lVar6;
      unaff_x19[0x1c] = lVar5;
      unaff_x19[0x1e] = lVar4;
      unaff_x19[0x11] = in_stack_000001a8;
      unaff_x19[0x10] = in_stack_000001a0;
      unaff_x19[0x13] = in_stack_000001b8;
      unaff_x19[0x12] = in_stack_000001b0;
      unaff_x19[0x15] = in_stack_000001c8;
      unaff_x19[0x14] = in_stack_000001c0;
      unaff_x19[0x17] = in_stack_000001d8;
      unaff_x19[0x16] = in_stack_000001d0;
      unaff_x19[9] = in_stack_00000168;
      unaff_x19[8] = in_stack_00000160;
      unaff_x19[0xb] = in_stack_00000178;
      unaff_x19[10] = in_stack_00000170;
      unaff_x19[0xd] = in_stack_00000188;
      unaff_x19[0xc] = in_stack_00000180;
      unaff_x19[0xf] = in_stack_00000198;
      unaff_x19[0xe] = in_stack_00000190;
      unaff_x19[1] = in_stack_00000128;
      *unaff_x19 = in_stack_00000120;
      unaff_x19[3] = in_stack_00000138;
      unaff_x19[2] = in_stack_00000130;
      unaff_x19[5] = in_stack_00000148;
      unaff_x19[4] = in_stack_00000140;
      unaff_x19[7] = in_stack_00000158;
      unaff_x19[6] = in_stack_00000150;
    }
    else {
      unaff_x19[1] = lVar3;
      *unaff_x19 = 0x12;
      FUN_10203bcb8(&stack0x00000120);
    }
  }
  return;
}

