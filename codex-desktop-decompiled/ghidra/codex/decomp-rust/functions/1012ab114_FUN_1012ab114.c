
/* WARNING: Removing unreachable block (ram,0x0001012ab6e8) */

void FUN_1012ab114(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int unaff_w19;
  undefined8 *unaff_x20;
  long lVar5;
  long unaff_x22;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long in_stack_00000090;
  ulong in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  undefined8 in_stack_000001d8;
  long in_stack_000001e8;
  undefined8 in_stack_000001f0;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  lVar1 = in_stack_000001c0;
  *unaff_x20 = 2;
  unaff_x20[1] = uVar2;
  lVar5 = in_stack_000001c8 + 1;
  lVar3 = in_stack_000001c0;
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    FUN_100e42904(lVar3);
    lVar3 = lVar3 + 0xf8;
  }
  if (in_stack_000001b8 != 0) {
    _free(lVar1);
  }
  if (unaff_x22 != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000090 != -0x7fffffffffffffff) && (in_stack_00000090 != -0x8000000000000000)) {
    if (in_stack_00000090 != 0) {
      _free(in_stack_000001d8);
    }
    if ((in_stack_000001e8 != -0x8000000000000000) && (in_stack_000001e8 != 0)) {
      _free(in_stack_000001f0);
    }
  }
  lVar1 = in_stack_000001c0;
  lVar5 = in_stack_000001b8;
  if ((unaff_w19 != 0) && (in_stack_000001b8 != -0x8000000000000000)) {
    lVar3 = in_stack_000001c8 + 1;
    lVar4 = in_stack_000001c0;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      FUN_100e42904(lVar4);
      lVar4 = lVar4 + 0xf8;
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  FUN_100de8910(unaff_x28 + 0x48);
  if (in_stack_000000a0 != unaff_x27) {
    FUN_100de6690(&stack0x000000a0);
  }
  if (((long)in_stack_00000098 < 0) && ((in_stack_00000098 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    FUN_100de6690(in_stack_00000050);
  }
  return;
}

