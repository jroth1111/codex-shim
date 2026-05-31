
/* WARNING: Removing unreachable block (ram,0x00010178b668) */
/* WARNING: Removing unreachable block (ram,0x00010178b66c) */
/* WARNING: Removing unreachable block (ram,0x00010178b694) */
/* WARNING: Removing unreachable block (ram,0x00010178b6a0) */
/* WARNING: Removing unreachable block (ram,0x00010178b6a8) */
/* WARNING: Removing unreachable block (ram,0x00010178b674) */
/* WARNING: Removing unreachable block (ram,0x00010178b67c) */
/* WARNING: Removing unreachable block (ram,0x00010178b6b0) */
/* WARNING: Removing unreachable block (ram,0x00010178b6b4) */
/* WARNING: Removing unreachable block (ram,0x00010178b680) */
/* WARNING: Removing unreachable block (ram,0x00010178b688) */
/* WARNING: Removing unreachable block (ram,0x00010178f460) */
/* WARNING: Removing unreachable block (ram,0x00010178f464) */
/* WARNING: Removing unreachable block (ram,0x00010178f478) */

void FUN_10178b79c(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000140;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if (unaff_x24 != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    iVar1 = unaff_w21;
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_1017a1d58(unaff_x26 + 0x20);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

