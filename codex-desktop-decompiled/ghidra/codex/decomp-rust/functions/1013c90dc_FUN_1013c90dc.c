
/* WARNING: Removing unreachable block (ram,0x0001013c77a0) */

void FUN_1013c90dc(void)

{
  int iVar1;
  uint uVar2;
  ulong unaff_x19;
  uint unaff_w20;
  long lVar3;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  int unaff_w28;
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
  long in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000120;
  long in_stack_00000128;
  char in_stack_000002c0;
  long in_stack_000004b0;
  
  in_stack_00000128 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000690);
  in_stack_00000120 = -0x8000000000000000;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100de6690(&stack0x000005b0);
  if (in_stack_000000b8 != 0) {
    _free(in_stack_00000068);
  }
  if (unaff_x21 != 0) {
    _free(in_stack_00000088);
  }
  if (in_stack_000000e0 != 0) {
    _free(in_stack_00000090);
  }
  if ((-0x7fffffffffffffff < in_stack_000000c0) && (in_stack_000000c0 != 0)) {
    _free(in_stack_00000058);
  }
  if (-0x7fffffffffffffff < in_stack_000000c8) {
    func_0x000100e00868(&stack0x00000500);
  }
  iVar1 = 0;
  if (in_stack_000000d0 != 0x8000000000000001) {
    iVar1 = unaff_w28;
  }
  if ((iVar1 == 1) && ((in_stack_000000d0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  iVar1 = 0;
  if (in_stack_000000d8 != 0x8000000000000001) {
    iVar1 = unaff_w27;
  }
  if ((iVar1 == 1) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000048);
  }
  uVar2 = 0;
  if (in_stack_000004b0 != -0x7ffffffffffffffb) {
    uVar2 = unaff_w26;
  }
  if ((uVar2 & 1) != 0) {
    FUN_100de6690(&stack0x000004b0);
  }
  uVar2 = 0;
  if ((in_stack_000000b8 & 0x7fffffffffffffff) != 0) {
    uVar2 = unaff_w25;
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
      uVar2 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000068);
    uVar2 = 0;
    if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
      uVar2 = unaff_w20;
    }
  }
  if ((uVar2 & 1) != 0) {
    _free(in_stack_00000088);
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
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1087e422c(((ulong)(in_stack_000000e8 - unaff_x22) >> 6) + unaff_x24,
                            &stack0x00000690,&UNK_10b23a190);
    }
    if (in_stack_000002c0 != '\x16') {
      FUN_100e077ec(&stack0x000002c0);
    }
    if (lVar3 == 0) {
      _memcpy(&stack0x00000120,&stack0x00000310,0x1a0);
    }
    else {
      in_stack_00000120 = -0x8000000000000000;
      in_stack_00000128 = lVar3;
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

