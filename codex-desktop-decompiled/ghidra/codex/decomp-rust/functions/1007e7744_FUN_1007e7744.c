
/* WARNING: Removing unreachable block (ram,0x0001007e768c) */

void FUN_1007e7744(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w20;
  int unaff_w22;
  ulong unaff_x24;
  uint unaff_w25;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000270);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar2;
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000070 != -0x7fffffffffffffff) {
    FUN_100e1edc8(&stack0x000001c8);
  }
  if (((in_stack_00000078 != 0x8000000000000001) && (unaff_w22 != 0)) &&
     ((in_stack_00000078 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  iVar1 = 0;
  if (in_stack_00000068 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

