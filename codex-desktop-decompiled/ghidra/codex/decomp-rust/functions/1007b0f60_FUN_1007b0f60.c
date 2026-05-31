
void FUN_1007b0f60(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong unaff_x22;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  char in_stack_000000f0;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000040);
  *in_stack_00000008 = 2;
  in_stack_00000008[1] = uVar2;
  if (in_stack_00000158 != 0) {
    _free(in_stack_00000160);
  }
  if (in_stack_00000170 != 0) {
    _free(in_stack_00000178);
  }
  if ((in_stack_000001a0 != -0x8000000000000000) && (in_stack_000001a0 != 0)) {
    _free(in_stack_000001a8);
  }
  lVar1 = in_stack_00000190;
  if (in_stack_00000198 != 0) {
    puVar4 = (undefined8 *)(in_stack_00000190 + 8);
    lVar3 = in_stack_00000198;
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (in_stack_00000188 != 0) {
    _free(lVar1);
  }
  if ((unaff_x22 != 0x8000000000000001) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000110);
  if (in_stack_000000f0 != '\x16') {
    FUN_100e077ec(&stack0x000000f0);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

