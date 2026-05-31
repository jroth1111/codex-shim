
void FUN_1007a5544(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  char in_stack_000000f0;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000040);
  *unaff_x28 = 2;
  unaff_x28[1] = uVar2;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  iVar1 = 0;
  if (unaff_x22 != 0x8000000000000001) {
    iVar1 = unaff_w24;
  }
  if ((iVar1 == 1) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x23 + 0x20);
  if (in_stack_000000f0 != '\x16') {
    FUN_100e077ec(&stack0x000000f0);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

