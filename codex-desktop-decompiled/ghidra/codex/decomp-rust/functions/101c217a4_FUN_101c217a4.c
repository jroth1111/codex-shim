
/* WARNING: Removing unreachable block (ram,0x000101c21730) */

void FUN_101c217a4(void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  uint unaff_w21;
  uint unaff_w22;
  ulong unaff_x24;
  long lVar3;
  ulong unaff_x25;
  undefined8 *puVar4;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000048;
  long in_stack_00000080;
  long in_stack_00000088;
  char in_stack_00000090;
  long in_stack_000000b8;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000000e8;
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
  long in_stack_000001e0;
  
  lVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
  *unaff_x19 = 0x12;
  unaff_x19[1] = lVar2;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000080 != -0x7fffffffffffffff) && (in_stack_00000080 != -0x8000000000000000)) {
    lVar2 = *(long *)(unaff_x29 + -0xf0);
    lVar3 = *(long *)(unaff_x29 + -0xe8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (in_stack_00000080 != 0) {
      _free(lVar2);
    }
  }
  if (in_stack_000001e0 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x000001e0);
  }
  uVar1 = 0;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w22;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000028);
  }
  uVar1 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    uVar1 = unaff_w21;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  lVar3 = in_stack_000000c8;
  lVar2 = in_stack_000000b8;
  if (*unaff_x19 == 0x12) {
    FUN_102033488(&stack0x000000b0);
    if (in_stack_00000090 != '\x16') {
      FUN_1020378e0(&stack0x00000090);
    }
  }
  else {
    in_stack_000001a8 = unaff_x19[0x19];
    in_stack_000001a0 = unaff_x19[0x18];
    in_stack_000001b8 = unaff_x19[0x1b];
    in_stack_000001b0 = unaff_x19[0x1a];
    in_stack_000001c8 = unaff_x19[0x1d];
    in_stack_000001c0 = unaff_x19[0x1c];
    in_stack_000001d0 = unaff_x19[0x1e];
    in_stack_00000168 = unaff_x19[0x11];
    in_stack_00000160 = unaff_x19[0x10];
    in_stack_00000178 = unaff_x19[0x13];
    in_stack_00000170 = unaff_x19[0x12];
    in_stack_00000188 = unaff_x19[0x15];
    in_stack_00000180 = unaff_x19[0x14];
    in_stack_00000198 = unaff_x19[0x17];
    in_stack_00000190 = unaff_x19[0x16];
    in_stack_00000128 = unaff_x19[9];
    in_stack_00000120 = unaff_x19[8];
    in_stack_00000138 = unaff_x19[0xb];
    in_stack_00000130 = unaff_x19[10];
    in_stack_00000148 = unaff_x19[0xd];
    in_stack_00000140 = unaff_x19[0xc];
    in_stack_00000158 = unaff_x19[0xf];
    in_stack_00000150 = unaff_x19[0xe];
    in_stack_000000e8 = unaff_x19[1];
    in_stack_000000e0 = *unaff_x19;
    in_stack_000000f8 = unaff_x19[3];
    in_stack_000000f0 = unaff_x19[2];
    in_stack_00000108 = unaff_x19[5];
    in_stack_00000100 = unaff_x19[4];
    in_stack_00000118 = unaff_x19[7];
    in_stack_00000110 = unaff_x19[6];
    FUN_102033488(&stack0x000000b0);
    if (lVar3 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xe0) = in_stack_000000d0;
      lVar2 = FUN_1088c7110(in_stack_000000d0 + ((ulong)(lVar3 - lVar2) >> 6),unaff_x29 + -0xe0,
                            &UNK_10b276c98);
    }
    if (in_stack_00000090 != '\x16') {
      FUN_1020378e0(&stack0x00000090);
    }
    if (lVar2 == 0) {
      unaff_x19[0x19] = in_stack_000001a8;
      unaff_x19[0x18] = in_stack_000001a0;
      unaff_x19[0x1b] = in_stack_000001b8;
      unaff_x19[0x1a] = in_stack_000001b0;
      unaff_x19[0x1d] = in_stack_000001c8;
      unaff_x19[0x1c] = in_stack_000001c0;
      unaff_x19[0x1e] = in_stack_000001d0;
      unaff_x19[0x11] = in_stack_00000168;
      unaff_x19[0x10] = in_stack_00000160;
      unaff_x19[0x13] = in_stack_00000178;
      unaff_x19[0x12] = in_stack_00000170;
      unaff_x19[0x15] = in_stack_00000188;
      unaff_x19[0x14] = in_stack_00000180;
      unaff_x19[0x17] = in_stack_00000198;
      unaff_x19[0x16] = in_stack_00000190;
      unaff_x19[9] = in_stack_00000128;
      unaff_x19[8] = in_stack_00000120;
      unaff_x19[0xb] = in_stack_00000138;
      unaff_x19[10] = in_stack_00000130;
      unaff_x19[0xd] = in_stack_00000148;
      unaff_x19[0xc] = in_stack_00000140;
      unaff_x19[0xf] = in_stack_00000158;
      unaff_x19[0xe] = in_stack_00000150;
      unaff_x19[1] = in_stack_000000e8;
      *unaff_x19 = in_stack_000000e0;
      unaff_x19[3] = in_stack_000000f8;
      unaff_x19[2] = in_stack_000000f0;
      unaff_x19[5] = in_stack_00000108;
      unaff_x19[4] = in_stack_00000100;
      unaff_x19[7] = in_stack_00000118;
      unaff_x19[6] = in_stack_00000110;
    }
    else {
      unaff_x19[1] = lVar2;
      *unaff_x19 = 0x12;
      FUN_10203bcb8(&stack0x000000e0);
    }
  }
  return;
}

