
/* WARNING: Removing unreachable block (ram,0x000100432e5c) */
/* WARNING: Removing unreachable block (ram,0x000100432e6c) */
/* WARNING: Removing unreachable block (ram,0x000100432e94) */

void FUN_100432ac8(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000058;
  char in_stack_00000060;
  long in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x24 = 0x1d;
  unaff_x24[1] = uVar2;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if (unaff_x22 != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 != -0x7fffffffffffffff) && (in_stack_00000058 != -0x8000000000000000)) {
    if (in_stack_00000058 != 0) {
      _free();
    }
    if (in_stack_000001e0 != 0) {
      _free(in_stack_000001e8);
    }
  }
  iVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

