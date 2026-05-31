
/* WARNING: Removing unreachable block (ram,0x0001006817f4) */
/* WARNING: Removing unreachable block (ram,0x0001006817fc) */
/* WARNING: Removing unreachable block (ram,0x0001006817b0) */

void FUN_100680a4c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x28;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  uint uStack00000000000000fc;
  ulong in_stack_00000140;
  ulong in_stack_00000148;
  long *in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  ulong in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  long in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  long in_stack_00000210;
  long in_stack_00000220;
  long in_stack_00000428;
  undefined8 in_stack_00000430;
  ulong in_stack_00000440;
  long in_stack_00000448;
  undefined8 in_stack_00000450;
  long in_stack_000004a0;
  undefined8 in_stack_000004a8;
  long in_stack_000004b8;
  undefined8 in_stack_000004c0;
  long in_stack_000004d0;
  undefined8 in_stack_000004d8;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000520);
  uStack00000000000000fc = 1;
  *unaff_x25 = unaff_x19;
  unaff_x25[1] = uVar1;
  if (in_stack_00000188 != -0x8000000000000000) {
    in_stack_00000098 = in_stack_00000098 + 1;
    while (in_stack_00000098 = in_stack_00000098 + -1, in_stack_00000098 != 0) {
      FUN_100e4623c();
    }
    if (in_stack_00000188 != 0) {
      _free();
    }
  }
  if (in_stack_00000160 != 0x8000000000000001 && (in_stack_00000160 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000070);
  }
  if ((in_stack_000004a0 != in_stack_000001a0) && (in_stack_000004a0 != -0x7fffffffffffffff)) {
    if ((in_stack_000004a0 != -0x8000000000000000) && (in_stack_000004a0 != 0)) {
      _free(in_stack_000004a8);
    }
    if ((in_stack_000004b8 != -0x8000000000000000) && (in_stack_000004b8 != 0)) {
      _free(in_stack_000004c0);
    }
    if ((in_stack_000004d0 != -0x8000000000000000) && (in_stack_000004d0 != 0)) {
      _free(in_stack_000004d8);
    }
  }
  if ((in_stack_00000168 != 0x8000000000000001) && ((in_stack_00000168 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000078);
  }
  if (((in_stack_00000170 != 0x8000000000000001 & uStack00000000000000fc) == 1) &&
     ((in_stack_00000170 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000080);
  }
  if (in_stack_00000440 != unaff_x28 + 8) {
    lVar2 = unaff_x28 + in_stack_00000440 + -0xb;
    if (in_stack_00000440 <= unaff_x28) {
      lVar2 = 5;
    }
    if (lVar2 == 5) {
      FUN_100e0fca4(&stack0x00000440);
    }
    else if ((lVar2 == 4) && (in_stack_00000448 != 0)) {
      _free(in_stack_00000450);
    }
  }
  if ((in_stack_00000140 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000a0);
  }
  if ((in_stack_00000198 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000a8);
  }
  if ((in_stack_00000178 != 0x8000000000000001) && ((in_stack_00000178 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000088);
  }
  if (((in_stack_00000428 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < in_stack_00000428)) &&
     (in_stack_00000428 != 0)) {
    _free(in_stack_00000430);
  }
  if ((in_stack_00000148 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b0);
  }
  if ((in_stack_00000158 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if ((in_stack_00000180 != 0x8000000000000001) && ((in_stack_00000180 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000090);
  }
  if ((in_stack_00000190 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  if (*in_stack_00000150 == -0x8000000000000000) {
    FUN_100de8910(unaff_x24 + 0x48);
  }
  else {
    _memcpy(&stack0x00000230,in_stack_00000150,0x1f8);
    if (in_stack_00000220 != in_stack_00000210) {
      lVar2 = thunk_FUN_1087e422c(in_stack_000000e0,&UNK_10b21cb90,&UNK_10b20a590);
      *in_stack_00000150 = -0x8000000000000000;
      in_stack_00000150[1] = lVar2;
      FUN_100e4affc(&stack0x00000230);
    }
    FUN_100de8910(unaff_x24 + 0x48);
  }
  if (in_stack_000001c0 != unaff_x28) {
    FUN_100de6690(&stack0x000001c0);
  }
  if (((long)in_stack_000001b8 < 0) && ((in_stack_000001b8 & 0xfffffffffffffffe) != unaff_x28 - 1))
  {
    FUN_100de6690(in_stack_000001b0);
  }
  return;
}

