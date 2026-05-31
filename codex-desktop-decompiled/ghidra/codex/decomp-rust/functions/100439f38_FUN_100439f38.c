
/* WARNING: Removing unreachable block (ram,0x00010043a4b0) */
/* WARNING: Removing unreachable block (ram,0x00010043a4b4) */
/* WARNING: Removing unreachable block (ram,0x00010043a4cc) */
/* WARNING: Removing unreachable block (ram,0x00010043a4d4) */
/* WARNING: Removing unreachable block (ram,0x00010043a4c0) */
/* WARNING: Removing unreachable block (ram,0x00010043a4e0) */
/* WARNING: Removing unreachable block (ram,0x00010043a4e8) */

void FUN_100439f38(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long lVar4;
  undefined8 *puVar5;
  undefined8 unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000020;
  ulong in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar3;
  if (unaff_x22 != 0) {
    _free();
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000020);
  }
  if ((in_stack_00000068 != -0x7fffffffffffffff) && (in_stack_00000068 != -0x8000000000000000)) {
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
    if (in_stack_00000068 != 0) {
      _free(lVar2);
    }
  }
  uVar1 = 0;
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    _free(unaff_x24);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

