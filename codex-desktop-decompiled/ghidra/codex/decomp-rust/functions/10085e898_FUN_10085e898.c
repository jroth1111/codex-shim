
/* WARNING: Removing unreachable block (ram,0x000100861568) */
/* WARNING: Removing unreachable block (ram,0x00010086164c) */
/* WARNING: Removing unreachable block (ram,0x0001008615a8) */
/* WARNING: Removing unreachable block (ram,0x00010086165c) */
/* WARNING: Removing unreachable block (ram,0x000100861774) */
/* WARNING: Removing unreachable block (ram,0x0001008615c0) */
/* WARNING: Removing unreachable block (ram,0x0001008615e8) */
/* WARNING: Removing unreachable block (ram,0x0001008615f8) */
/* WARNING: Removing unreachable block (ram,0x000100861600) */
/* WARNING: Removing unreachable block (ram,0x000100861608) */
/* WARNING: Removing unreachable block (ram,0x000100861610) */
/* WARNING: Removing unreachable block (ram,0x000100861618) */
/* WARNING: Removing unreachable block (ram,0x00010085d394) */

undefined1  [16] FUN_10085e898(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *in_stack_00000078;
  ulong in_stack_00000990;
  
  FUN_10074b674(&stack0x00000480);
  if ((in_stack_00000990 & 3) == 1) {
    uVar4 = *(undefined8 *)(in_stack_00000990 - 1);
    puVar3 = *(undefined8 **)(in_stack_00000990 + 7);
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar3[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(in_stack_00000990 - 1));
  }
  lVar1 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  *in_stack_00000078 = 1;
  func_0x000100e48c8c();
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  return ZEXT816(0);
}

