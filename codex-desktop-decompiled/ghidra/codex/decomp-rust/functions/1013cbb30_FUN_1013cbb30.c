
void FUN_1013cbb30(void)

{
  ulong unaff_x19;
  long lVar1;
  long unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000120;
  long in_stack_00000128;
  char in_stack_000002c0;
  long in_stack_000004b0;
  
  in_stack_00000128 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000690);
  in_stack_00000120 = -0x8000000000000000;
  if ((-0x7fffffffffffffff < in_stack_000000c0) && (in_stack_000000c0 != 0)) {
    _free(in_stack_00000058);
  }
  if (-0x7fffffffffffffff < in_stack_000000c8) {
    func_0x000100e00868(&stack0x00000500);
  }
  if ((in_stack_000000d0 != 0x8000000000000001) && ((in_stack_000000d0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000048);
  }
  if (in_stack_000004b0 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000004b0);
  }
  if ((in_stack_000000b8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  if ((in_stack_000000e0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000090);
  }
  if (in_stack_00000120 == -0x8000000000000000) {
    FUN_100d34830(&stack0x000002e0);
    if (in_stack_000002c0 != '\x16') {
      FUN_100e077ec(&stack0x000002c0);
    }
  }
  else {
    _memcpy(&stack0x00000310,&stack0x00000120,0x1a0);
    FUN_100d34830(&stack0x000002e0);
    if (in_stack_000000e8 == unaff_x22) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_1087e422c(((ulong)(in_stack_000000e8 - unaff_x22) >> 6) + unaff_x24,
                            &stack0x00000690,&UNK_10b23a190);
    }
    if (in_stack_000002c0 != '\x16') {
      FUN_100e077ec(&stack0x000002c0);
    }
    if (lVar1 == 0) {
      _memcpy(&stack0x00000120,&stack0x00000310,0x1a0);
    }
    else {
      in_stack_00000120 = -0x8000000000000000;
      in_stack_00000128 = lVar1;
      FUN_100e098f0(&stack0x00000310);
    }
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (in_stack_00000120 == -0x8000000000000000) {
    *in_stack_000000f0 = 0x800000000000000b;
    in_stack_000000f0[1] = in_stack_00000128;
  }
  else {
    _memcpy(in_stack_000000f0,&stack0x00000120,0x1a0);
  }
  return;
}

