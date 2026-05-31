
/* WARNING: Type propagation algorithm not settling */

void FUN_101c6e630(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  char in_stack_000000a0;
  long in_stack_000000c8;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
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
  
  lVar2 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x100);
  *unaff_x20 = -0x8000000000000000;
  unaff_x20[1] = lVar2;
  if (in_stack_00000070 != -0x7ffffffffffffffa) {
    FUN_10204178c(&stack0x00000200);
  }
  if ((in_stack_00000078 != 0x8000000000000001) && ((in_stack_00000078 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000080 != 0x8000000000000001) && ((in_stack_00000080 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) == 0) {
    lVar3 = *unaff_x20;
    lVar2 = in_stack_000000c8;
    lVar1 = in_stack_000000d8;
  }
  else {
    _free(in_stack_00000048);
    lVar3 = *unaff_x20;
    lVar2 = in_stack_000000c8;
    lVar1 = in_stack_000000d8;
  }
  in_stack_000000c8 = lVar2;
  in_stack_000000d8 = lVar1;
  if (lVar3 == -0x8000000000000000) {
    FUN_102033488(&stack0x000000c0);
    if (in_stack_000000a0 != '\x16') {
      FUN_1020378e0(&stack0x000000a0);
    }
  }
  else {
    in_stack_000001b8 = unaff_x20[0x19];
    in_stack_000001b0 = unaff_x20[0x18];
    in_stack_000001c8 = unaff_x20[0x1b];
    in_stack_000001c0 = unaff_x20[0x1a];
    in_stack_000001d8 = unaff_x20[0x1d];
    in_stack_000001d0 = unaff_x20[0x1c];
    in_stack_000001e8 = unaff_x20[0x1f];
    in_stack_000001e0 = unaff_x20[0x1e];
    in_stack_00000178 = unaff_x20[0x11];
    in_stack_00000170 = unaff_x20[0x10];
    in_stack_00000188 = unaff_x20[0x13];
    in_stack_00000180 = unaff_x20[0x12];
    in_stack_00000198 = unaff_x20[0x15];
    in_stack_00000190 = unaff_x20[0x14];
    in_stack_000001a8 = unaff_x20[0x17];
    in_stack_000001a0 = unaff_x20[0x16];
    in_stack_00000138 = unaff_x20[9];
    in_stack_00000130 = unaff_x20[8];
    in_stack_00000148 = unaff_x20[0xb];
    in_stack_00000140 = unaff_x20[10];
    in_stack_00000158 = unaff_x20[0xd];
    in_stack_00000150 = unaff_x20[0xc];
    in_stack_00000168 = unaff_x20[0xf];
    in_stack_00000160 = unaff_x20[0xe];
    in_stack_000000f8 = unaff_x20[1];
    in_stack_000000f0 = *unaff_x20;
    in_stack_00000108 = unaff_x20[3];
    in_stack_00000100 = unaff_x20[2];
    in_stack_00000118 = unaff_x20[5];
    in_stack_00000110 = unaff_x20[4];
    in_stack_00000128 = unaff_x20[7];
    in_stack_00000120 = unaff_x20[6];
    FUN_102033488(&stack0x000000c0);
    if (lVar1 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x100) = in_stack_000000e0;
      lVar2 = FUN_1088c7110(in_stack_000000e0 + ((ulong)(lVar1 - lVar2) >> 6),unaff_x29 + -0x100,
                            &UNK_10b276c98);
    }
    if (in_stack_000000a0 != '\x16') {
      FUN_1020378e0(&stack0x000000a0);
    }
    if (lVar2 == 0) {
      unaff_x20[0x19] = in_stack_000001b8;
      unaff_x20[0x18] = in_stack_000001b0;
      unaff_x20[0x1b] = in_stack_000001c8;
      unaff_x20[0x1a] = in_stack_000001c0;
      unaff_x20[0x1d] = in_stack_000001d8;
      unaff_x20[0x1c] = in_stack_000001d0;
      unaff_x20[0x1f] = in_stack_000001e8;
      unaff_x20[0x1e] = in_stack_000001e0;
      unaff_x20[0x11] = in_stack_00000178;
      unaff_x20[0x10] = in_stack_00000170;
      unaff_x20[0x13] = in_stack_00000188;
      unaff_x20[0x12] = in_stack_00000180;
      unaff_x20[0x15] = in_stack_00000198;
      unaff_x20[0x14] = in_stack_00000190;
      unaff_x20[0x17] = in_stack_000001a8;
      unaff_x20[0x16] = in_stack_000001a0;
      unaff_x20[9] = in_stack_00000138;
      unaff_x20[8] = in_stack_00000130;
      unaff_x20[0xb] = in_stack_00000148;
      unaff_x20[10] = in_stack_00000140;
      unaff_x20[0xd] = in_stack_00000158;
      unaff_x20[0xc] = in_stack_00000150;
      unaff_x20[0xf] = in_stack_00000168;
      unaff_x20[0xe] = in_stack_00000160;
      unaff_x20[1] = in_stack_000000f8;
      *unaff_x20 = in_stack_000000f0;
      unaff_x20[3] = in_stack_00000108;
      unaff_x20[2] = in_stack_00000100;
      unaff_x20[5] = in_stack_00000118;
      unaff_x20[4] = in_stack_00000110;
      unaff_x20[7] = in_stack_00000128;
      unaff_x20[6] = in_stack_00000120;
    }
    else {
      unaff_x20[1] = lVar2;
      *unaff_x20 = -0x8000000000000000;
      FUN_1020316f4(&stack0x000000f0);
    }
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000068);
  }
  return;
}

