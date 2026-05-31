
/* WARNING: Removing unreachable block (ram,0x000101c29c20) */
/* WARNING: Removing unreachable block (ram,0x000101c29c24) */
/* WARNING: Removing unreachable block (ram,0x000101c29c3c) */
/* WARNING: Removing unreachable block (ram,0x000101c29c44) */
/* WARNING: Removing unreachable block (ram,0x000101c29c30) */
/* WARNING: Removing unreachable block (ram,0x000101c29c50) */
/* WARNING: Removing unreachable block (ram,0x000101c29c54) */

void FUN_101c296e4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x25;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar3 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar3;
  if (unaff_x25 != 0) {
    _free();
  }
  if ((in_stack_00000068 != 0x8000000000000001) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000018);
  }
  if ((unaff_x28 != -0x7fffffffffffffff) && (unaff_x28 != -0x8000000000000000)) {
    lVar2 = *(long *)(unaff_x29 + -0xd8);
    lVar4 = *(long *)(unaff_x29 + -0xd0);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (unaff_x28 != 0) {
      _free(lVar2);
    }
  }
  uVar1 = 0;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

