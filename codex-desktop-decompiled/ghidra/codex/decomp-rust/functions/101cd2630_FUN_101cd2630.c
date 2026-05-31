
/* WARNING: Type propagation algorithm not settling */

void FUN_101cd2630(void)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  long *in_stack_000001c8;
  ulong in_stack_000001d0;
  long in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_000001e8;
  undefined8 in_stack_000001f0;
  ulong in_stack_000001f8;
  ulong in_stack_00000200;
  long in_stack_00000250;
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

  lVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000520);
  *in_stack_000001c8 = -0x8000000000000000;
  in_stack_000001c8[1] = lVar1;
  if (unaff_x25 != -0x8000000000000000) {
    in_stack_000000e0 = in_stack_000000e0 + 1;
    lVar1 = in_stack_00000118;
    while (in_stack_000000e0 = in_stack_000000e0 + -1, in_stack_000000e0 != 0) {
      FUN_10203cab8(lVar1);
      lVar1 = lVar1 + 0xa0;
    }
    if (unaff_x25 != 0) {
      _free(in_stack_00000118);
    }
    unaff_x24 = 0x8000000000000005;
  }
  if ((in_stack_000001e0 != 0x8000000000000001) && ((in_stack_000001e0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000b0);
  }
  if ((in_stack_000004c0 != in_stack_000001d0) && (in_stack_000004c0 != 0x8000000000000001)) {
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
  if ((in_stack_00000190 != 0x8000000000000001) && ((in_stack_00000190 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000b8);
  }
  if ((in_stack_00000198 != 0x8000000000000001) && ((in_stack_00000198 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000c0);
  }
  if (in_stack_00000460 != unaff_x24 + 8) {
    lVar1 = unaff_x24 + in_stack_00000460 + -0xb;
    if (in_stack_00000460 <= unaff_x24) {
      lVar1 = 5;
    }
    if (lVar1 == 5) {
      FUN_102037f28(&stack0x00000460);
    }
    else if ((lVar1 == 4) && (in_stack_00000468 != 0)) {
      _free(in_stack_00000470);
    }
  }
  if ((in_stack_00000180 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000e8);
  }
  if ((in_stack_000001c0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000f0);
  }
  if ((in_stack_000001a8 != 0x8000000000000001) && ((in_stack_000001a8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000c8);
  }
  if (((in_stack_000001d8 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < in_stack_000001d8)) &&
     (in_stack_000001d8 != 0)) {
    _free(in_stack_00000080);
  }
  if ((in_stack_00000188 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000f8);
  }
  if ((in_stack_000001a0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000100);
  }
  if ((in_stack_000001b0 != 0x8000000000000001) && ((in_stack_000001b0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000d0);
  }
  if ((in_stack_000001b8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000108);
  }
  if ((in_stack_000001e8 & 0x7fffffffffffffff) == 0) {
    lVar1 = *in_stack_000001c8;
  }
  else {
    _free(in_stack_00000110);
    lVar1 = *in_stack_000001c8;
  }
  if (lVar1 == -0x8000000000000000) {
    FUN_1020353a0(unaff_x19 + 0x48);
  }
  else {
    _memcpy(&stack0x00000268,in_stack_000001c8,0x1f8);
    if (in_stack_00000260 != in_stack_00000250) {
      lVar1 = FUN_1088c7110(in_stack_00000120,&UNK_10b271520,&UNK_10b26ca30);
      *in_stack_000001c8 = -0x8000000000000000;
      in_stack_000001c8[1] = lVar1;
      FUN_10203d13c(&stack0x00000268);
    }
    FUN_1020353a0(unaff_x19 + 0x48);
  }
  if (in_stack_00000200 != unaff_x24) {
    func_0x00010203527c(&stack0x00000200);
  }
  if (((long)in_stack_000001f8 < 0) && ((in_stack_000001f8 & 0xfffffffffffffffe) != unaff_x24 - 1))
  {
    func_0x00010203527c(in_stack_000001f0);
  }
  return;
}
