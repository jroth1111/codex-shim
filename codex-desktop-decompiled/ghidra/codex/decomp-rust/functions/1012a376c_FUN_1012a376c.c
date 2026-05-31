
/* WARNING: Removing unreachable block (ram,0x0001012a3708) */

void FUN_1012a376c(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w19;
  ulong unaff_x21;
  long unaff_x24;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  char in_stack_00000050;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar2;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x24 != 0) {
    _free(in_stack_00000048);
  }
  iVar1 = 0;
  if (unaff_x26 != 0x8000000000000001) {
    iVar1 = unaff_w19;
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000028);
  }
  return;
}

