
void FUN_1012abb00(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000080;
  ulong in_stack_00000088;
  long in_stack_00000090;
  ulong in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  undefined8 in_stack_000001d8;
  long in_stack_000001e8;
  undefined8 in_stack_000001f0;
  
  uVar4 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000080 = 2;
  in_stack_00000080[1] = uVar4;
  if ((in_stack_00000090 != -0x7fffffffffffffff) && (in_stack_00000090 != -0x8000000000000000)) {
    if (in_stack_00000090 != 0) {
      _free(in_stack_000001d8);
    }
    if ((in_stack_000001e8 != -0x8000000000000000) && (in_stack_000001e8 != 0)) {
      _free(in_stack_000001f0);
    }
  }
  lVar2 = in_stack_000001c0;
  lVar1 = in_stack_000001b8;
  if (in_stack_000001b8 != -0x8000000000000000) {
    lVar5 = in_stack_000001c8 + 1;
    lVar3 = in_stack_000001c0;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e42904(lVar3);
      lVar3 = lVar3 + 0xf8;
    }
    if (lVar1 != 0) {
      _free(lVar2);
    }
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100de8910(unaff_x28 + 0x48);
  if (in_stack_000000a0 != unaff_x27) {
    FUN_100de6690(&stack0x000000a0);
  }
  if (((long)in_stack_00000098 < 0) && ((in_stack_00000098 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    FUN_100de6690();
  }
  return;
}

