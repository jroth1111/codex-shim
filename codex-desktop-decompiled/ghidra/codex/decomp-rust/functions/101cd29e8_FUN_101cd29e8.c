
/* WARNING: Removing unreachable block (ram,0x000101cd1a3c) */
/* WARNING: Removing unreachable block (ram,0x000101cd1a4c) */
/* WARNING: Removing unreachable block (ram,0x000101cd19f8) */
/* WARNING: Removing unreachable block (ram,0x000101cd19fc) */
/* WARNING: Removing unreachable block (ram,0x000101cd1a04) */
/* WARNING: Removing unreachable block (ram,0x000101cd1b24) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101cd29e8(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  byte unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  byte unaff_w23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  uint in_stack_00000140;
  byte in_stack_00000148;
  byte in_stack_00000150;
  byte in_stack_00000158;
  uint in_stack_00000160;
  uint in_stack_00000168;
  uint in_stack_00000170;
  uint in_stack_00000178;
  ulong in_stack_00000180;
  long in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  long *in_stack_000001c8;
  ulong in_stack_000001d0;
  undefined8 in_stack_000001d8;
  ulong in_stack_000001e0;
  long in_stack_000001e8;
  undefined8 in_stack_000001f0;
  ulong in_stack_000001f8;
  long in_stack_00000200;
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

  lVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x70);
  *in_stack_000001c8 = -0x8000000000000000;
  in_stack_000001c8[1] = lVar2;
  if ((unaff_x26 & 0x7fffffffffffffff) == 0) {
    FUN_102030ed0(unaff_x29 + -0xd0);
  }
  else {
    _free(in_stack_000000b0);
    FUN_102030ed0(unaff_x29 + -0xd0);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  FUN_1020400b8(&stack0x00000520);
  if (in_stack_00000180 != 0) {
    _free(in_stack_000000e8);
  }
  if (in_stack_000001c0 != 0) {
    _free(in_stack_000000f0);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c8);
  }
  FUN_10203d9cc(in_stack_000001d8,in_stack_00000080);
  if (in_stack_00000188 != 0) {
    _free(in_stack_000000f8);
  }
  if (in_stack_000001a0 != 0) {
    _free(in_stack_00000100);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000d0);
  }
  if (in_stack_000001b8 != 0) {
    _free(in_stack_00000108);
  }
  if (in_stack_000001e8 != 0) {
    _free(in_stack_00000110);
  }
  if (unaff_x25 != -0x8000000000000000) {
    in_stack_000000e0 = in_stack_000000e0 + 1;
    lVar2 = in_stack_00000118;
    while (in_stack_000000e0 = in_stack_000000e0 + -1, in_stack_000000e0 != 0) {
      FUN_10203cab8(lVar2);
      lVar2 = lVar2 + 0xa0;
    }
    if (unaff_x25 != 0) {
      _free(in_stack_00000118);
    }
  }
  if (((in_stack_000001e0 != 0x8000000000000001) && ((in_stack_00000140 & 1) != 0)) &&
     ((in_stack_000001e0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000b0);
  }
  if (((in_stack_000004c0 != in_stack_000001d0 & unaff_w20) != 0) &&
     (in_stack_000004c0 != 0x8000000000000001)) {
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
  if (((in_stack_00000190 != 0x8000000000000001 & in_stack_00000158) != 0) &&
     ((in_stack_00000190 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000b8);
  }
  if (((in_stack_00000198 != 0x8000000000000001 & in_stack_00000148) != 0) &&
     ((in_stack_00000198 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000c0);
  }
  if ((in_stack_00000460 != 0x800000000000000d & unaff_w23) != 0) {
    lVar2 = in_stack_00000460 + 0x7ffffffffffffffa;
    if (in_stack_00000460 < 0x8000000000000006) {
      lVar2 = 5;
    }
    if (lVar2 == 5) {
      FUN_102037f28(&stack0x00000460);
    }
    else if ((lVar2 == 4) && (in_stack_00000468 != 0)) {
      _free(in_stack_00000470);
    }
  }
  if (((in_stack_00000180 & 0x7fffffffffffffff) != 0 & in_stack_00000150) == 0) {
    uVar1 = 0;
    if ((in_stack_000001c0 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000168;
    }
  }
  else {
    _free(in_stack_000000e8);
    uVar1 = 0;
    if ((in_stack_000001c0 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000168;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if (in_stack_000001a8 != 0x8000000000000001) {
      uVar1 = in_stack_00000160;
    }
  }
  else {
    _free(in_stack_000000f0);
    uVar1 = 0;
    if (in_stack_000001a8 != 0x8000000000000001) {
      uVar1 = in_stack_00000160;
    }
  }
  if (((uVar1 & 1) != 0) && ((in_stack_000001a8 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_000000c8);
  }
  uVar1 = 0;
  if ((in_stack_000001a0 & 0x7fffffffffffffff) != 0) {
    uVar1 = in_stack_000000d8._4_4_;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if (in_stack_000001b0 != 0x8000000000000001) {
      uVar1 = in_stack_00000170;
    }
  }
  else {
    _free(in_stack_00000100);
    uVar1 = 0;
    if (in_stack_000001b0 != 0x8000000000000001) {
      uVar1 = in_stack_00000170;
    }
  }
  if (((uVar1 & 1) == 0) || ((in_stack_000001b0 & 0x7fffffffffffffff) == 0)) {
    uVar1 = 0;
    if ((in_stack_000001b8 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000178;
    }
  }
  else {
    _free(in_stack_000000d0);
    uVar1 = 0;
    if ((in_stack_000001b8 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000178;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000108);
  }
  if (*in_stack_000001c8 == -0x8000000000000000) {
    FUN_1020353a0(unaff_x19 + 0x48);
  }
  else {
    _memcpy(&stack0x00000268,in_stack_000001c8,0x1f8);
    if (in_stack_00000260 != in_stack_00000250) {
      lVar2 = FUN_1088c7110(in_stack_00000120,&UNK_10b271520,&UNK_10b26ca30);
      *in_stack_000001c8 = -0x8000000000000000;
      in_stack_000001c8[1] = lVar2;
      FUN_10203d13c(&stack0x00000268);
    }
    FUN_1020353a0(unaff_x19 + 0x48);
  }
  if (in_stack_00000200 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000200);
  }
  if (((long)in_stack_000001f8 < 0) &&
     ((in_stack_000001f8 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_000001f0);
  }
  return;
}
