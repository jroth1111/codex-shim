
/* WARNING: Type propagation algorithm not settling */

void FUN_101c62518(void)

{
  long lVar1;
  long unaff_x29;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long *in_stack_00000138;
  long in_stack_00000140;
  ulong in_stack_00000148;
  ulong in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
  long in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  char in_stack_00000220;
  long in_stack_00000248;
  long in_stack_00000258;
  long in_stack_00000260;
  ulong in_stack_00000460;
  long in_stack_00000468;
  undefined8 in_stack_00000470;
  ulong in_stack_000004c0;
  undefined8 in_stack_000004c8;
  ulong in_stack_000004d8;
  undefined8 in_stack_000004e0;
  ulong in_stack_000004f0;
  undefined8 in_stack_000004f8;
  
  lVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *in_stack_00000138 = -0x8000000000000000;
  in_stack_00000138[1] = lVar1;
  if (in_stack_00000140 != -0x8000000000000000) {
    in_stack_000000a8 = in_stack_000000a8 + 1;
    while (in_stack_000000a8 = in_stack_000000a8 + -1, in_stack_000000a8 != 0) {
      FUN_10203cab8();
    }
    if (in_stack_00000140 != 0) {
      _free();
    }
  }
  if ((in_stack_00000148 != 0x8000000000000001) && ((in_stack_00000148 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000080);
  }
  if ((in_stack_000004c0 != 0x8000000000000002) && (in_stack_000004c0 != 0x8000000000000001)) {
    if ((in_stack_000004c0 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000004c8);
    }
    if ((in_stack_000004d8 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000004e0);
    }
    if ((in_stack_000004f0 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000004f8);
    }
  }
  if ((in_stack_00000150 != 0x8000000000000001) && ((in_stack_00000150 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000088);
  }
  if ((in_stack_00000158 != 0x8000000000000001) && ((in_stack_00000158 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000090);
  }
  if (in_stack_00000460 != 0x800000000000000d) {
    lVar1 = in_stack_00000460 + 0x7ffffffffffffffa;
    if (in_stack_00000460 < 0x8000000000000006) {
      lVar1 = 5;
    }
    if (lVar1 == 5) {
      FUN_102037f28(&stack0x00000460);
    }
    else if ((lVar1 == 4) && (in_stack_00000468 != 0)) {
      _free(in_stack_00000470);
    }
  }
  if ((in_stack_00000160 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b0);
  }
  if ((in_stack_00000170 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if ((in_stack_00000168 != 0x8000000000000001) && ((in_stack_00000168 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000098);
  }
  if (((in_stack_00000178 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < in_stack_00000178)) &&
     (in_stack_00000178 != 0)) {
    _free(in_stack_00000078);
  }
  if ((in_stack_00000180 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  if ((in_stack_00000190 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c8);
  }
  if ((in_stack_00000188 != 0x8000000000000001) && ((in_stack_00000188 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000a0);
  }
  if ((in_stack_00000198 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000d0);
  }
  if ((in_stack_000001a0 & 0x7fffffffffffffff) == 0) {
    lVar1 = *in_stack_00000138;
  }
  else {
    _free(in_stack_000000d8);
    lVar1 = *in_stack_00000138;
  }
  if (lVar1 == -0x8000000000000000) {
    FUN_102033488(&stack0x00000240);
    if (in_stack_00000220 != '\x16') {
      FUN_1020378e0(&stack0x00000220);
    }
  }
  else {
    _memcpy(&stack0x00000268,in_stack_00000138,0x1f8);
    FUN_102033488(&stack0x00000240);
    if (in_stack_00000258 == in_stack_00000248) {
      lVar1 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xd0) = in_stack_00000260;
      lVar1 = FUN_1088c7110(in_stack_00000260 +
                            ((ulong)(in_stack_00000258 - in_stack_00000248) >> 6),unaff_x29 + -0xd0,
                            &UNK_10b276c98);
    }
    if (in_stack_00000220 != '\x16') {
      FUN_1020378e0(&stack0x00000220);
    }
    if (lVar1 == 0) {
      _memcpy(in_stack_00000138,&stack0x00000268,0x1f8);
    }
    else {
      *in_stack_00000138 = -0x8000000000000000;
      in_stack_00000138[1] = lVar1;
      FUN_10203d13c(&stack0x00000268);
    }
  }
  if ((in_stack_00000128._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000130);
  }
  return;
}

