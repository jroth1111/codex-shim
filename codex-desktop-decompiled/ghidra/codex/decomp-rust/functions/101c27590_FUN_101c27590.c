
void FUN_101c27590(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong in_x10;
  long *unaff_x19;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000090;
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
  long in_stack_000001f0;
  long in_stack_000001f8;
  
  lVar2 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *unaff_x19 = 0x12;
  unaff_x19[1] = lVar2;
  if (in_stack_00000090 != 0) {
    FUN_102033b9c(unaff_x29 + -0xf0);
  }
  if ((in_stack_00000098 != 0x8000000000000001) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_x10 != 0x8000000000000001) && ((in_x10 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  lVar2 = in_stack_000001e8;
  if (in_stack_000001e8 != -0x8000000000000000) {
    if (in_stack_000001f8 != 0) {
      puVar4 = (undefined8 *)(in_stack_000001f0 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_000001f8 = in_stack_000001f8 + -1;
      } while (in_stack_000001f8 != 0);
    }
    if (lVar2 != 0) {
      _free(in_stack_000001f0);
    }
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) == 0) {
    lVar3 = *unaff_x19;
    lVar2 = in_stack_000000c8;
    lVar1 = in_stack_000000d8;
  }
  else {
    _free(in_stack_00000040);
    lVar3 = *unaff_x19;
    lVar2 = in_stack_000000c8;
    lVar1 = in_stack_000000d8;
  }
  in_stack_000000c8 = lVar2;
  in_stack_000000d8 = lVar1;
  if (lVar3 == 0x12) {
    FUN_102033488(&stack0x000000c0);
    if (in_stack_000000a0 != '\x16') {
      FUN_1020378e0(&stack0x000000a0);
    }
  }
  else {
    in_stack_000001b8 = unaff_x19[0x19];
    in_stack_000001b0 = unaff_x19[0x18];
    in_stack_000001c8 = unaff_x19[0x1b];
    in_stack_000001c0 = unaff_x19[0x1a];
    in_stack_000001d8 = unaff_x19[0x1d];
    in_stack_000001d0 = unaff_x19[0x1c];
    in_stack_000001e0 = unaff_x19[0x1e];
    in_stack_00000178 = unaff_x19[0x11];
    in_stack_00000170 = unaff_x19[0x10];
    in_stack_00000188 = unaff_x19[0x13];
    in_stack_00000180 = unaff_x19[0x12];
    in_stack_00000198 = unaff_x19[0x15];
    in_stack_00000190 = unaff_x19[0x14];
    in_stack_000001a8 = unaff_x19[0x17];
    in_stack_000001a0 = unaff_x19[0x16];
    in_stack_00000138 = unaff_x19[9];
    in_stack_00000130 = unaff_x19[8];
    in_stack_00000148 = unaff_x19[0xb];
    in_stack_00000140 = unaff_x19[10];
    in_stack_00000158 = unaff_x19[0xd];
    in_stack_00000150 = unaff_x19[0xc];
    in_stack_00000168 = unaff_x19[0xf];
    in_stack_00000160 = unaff_x19[0xe];
    in_stack_000000f8 = unaff_x19[1];
    in_stack_000000f0 = *unaff_x19;
    in_stack_00000108 = unaff_x19[3];
    in_stack_00000100 = unaff_x19[2];
    in_stack_00000118 = unaff_x19[5];
    in_stack_00000110 = unaff_x19[4];
    in_stack_00000128 = unaff_x19[7];
    in_stack_00000120 = unaff_x19[6];
    FUN_102033488(&stack0x000000c0);
    if (lVar1 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = in_stack_000000e0;
      lVar2 = FUN_1088c7110(in_stack_000000e0 + ((ulong)(lVar1 - lVar2) >> 6),unaff_x29 + -0xc0,
                            &UNK_10b276c98);
    }
    if (in_stack_000000a0 != '\x16') {
      FUN_1020378e0(&stack0x000000a0);
    }
    if (lVar2 == 0) {
      unaff_x19[0x19] = in_stack_000001b8;
      unaff_x19[0x18] = in_stack_000001b0;
      unaff_x19[0x1b] = in_stack_000001c8;
      unaff_x19[0x1a] = in_stack_000001c0;
      unaff_x19[0x1d] = in_stack_000001d8;
      unaff_x19[0x1c] = in_stack_000001d0;
      unaff_x19[0x1e] = in_stack_000001e0;
      unaff_x19[0x11] = in_stack_00000178;
      unaff_x19[0x10] = in_stack_00000170;
      unaff_x19[0x13] = in_stack_00000188;
      unaff_x19[0x12] = in_stack_00000180;
      unaff_x19[0x15] = in_stack_00000198;
      unaff_x19[0x14] = in_stack_00000190;
      unaff_x19[0x17] = in_stack_000001a8;
      unaff_x19[0x16] = in_stack_000001a0;
      unaff_x19[9] = in_stack_00000138;
      unaff_x19[8] = in_stack_00000130;
      unaff_x19[0xb] = in_stack_00000148;
      unaff_x19[10] = in_stack_00000140;
      unaff_x19[0xd] = in_stack_00000158;
      unaff_x19[0xc] = in_stack_00000150;
      unaff_x19[0xf] = in_stack_00000168;
      unaff_x19[0xe] = in_stack_00000160;
      unaff_x19[1] = in_stack_000000f8;
      *unaff_x19 = in_stack_000000f0;
      unaff_x19[3] = in_stack_00000108;
      unaff_x19[2] = in_stack_00000100;
      unaff_x19[5] = in_stack_00000118;
      unaff_x19[4] = in_stack_00000110;
      unaff_x19[7] = in_stack_00000128;
      unaff_x19[6] = in_stack_00000120;
    }
    else {
      unaff_x19[1] = lVar2;
      *unaff_x19 = 0x12;
      FUN_10203bcb8(&stack0x000000f0);
    }
  }
  return;
}

