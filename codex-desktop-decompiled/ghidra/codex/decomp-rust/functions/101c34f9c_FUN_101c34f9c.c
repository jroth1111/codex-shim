
/* WARNING: Removing unreachable block (ram,0x000101c34f18) */
/* WARNING: Removing unreachable block (ram,0x000101c34f1c) */
/* WARNING: Removing unreachable block (ram,0x000101c34f44) */
/* WARNING: Removing unreachable block (ram,0x000101c34f50) */
/* WARNING: Removing unreachable block (ram,0x000101c34f58) */
/* WARNING: Removing unreachable block (ram,0x000101c34f24) */
/* WARNING: Removing unreachable block (ram,0x000101c34f2c) */
/* WARNING: Removing unreachable block (ram,0x000101c34f60) */
/* WARNING: Removing unreachable block (ram,0x000101c34f64) */
/* WARNING: Removing unreachable block (ram,0x000101c34f30) */
/* WARNING: Removing unreachable block (ram,0x000101c34f38) */
/* WARNING: Removing unreachable block (ram,0x000101c3557c) */
/* WARNING: Removing unreachable block (ram,0x000101c35580) */
/* WARNING: Removing unreachable block (ram,0x000101c35594) */

void FUN_101c34f9c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000050;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if (unaff_x24 != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  uVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    uVar1 = unaff_w21;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000010);
  }
  FUN_102033488(unaff_x26 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

