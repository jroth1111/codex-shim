
/* WARNING: Removing unreachable block (ram,0x000100f473bc) */
/* WARNING: Removing unreachable block (ram,0x000100f473c4) */
/* WARNING: Removing unreachable block (ram,0x000100f473cc) */
/* WARNING: Removing unreachable block (ram,0x000100f4744c) */
/* WARNING: Removing unreachable block (ram,0x000100f4746c) */
/* WARNING: Removing unreachable block (ram,0x000100f47474) */
/* WARNING: Removing unreachable block (ram,0x000100f47454) */
/* WARNING: Removing unreachable block (ram,0x000100f4745c) */
/* WARNING: Removing unreachable block (ram,0x000100f47468) */
/* WARNING: Removing unreachable block (ram,0x000100f4747c) */
/* WARNING: Removing unreachable block (ram,0x000100f473e8) */
/* WARNING: Removing unreachable block (ram,0x000100f473ec) */
/* WARNING: Removing unreachable block (ram,0x000100f473f4) */
/* WARNING: Removing unreachable block (ram,0x000100f473f8) */
/* WARNING: Removing unreachable block (ram,0x000100f47400) */
/* WARNING: Removing unreachable block (ram,0x000100f47410) */
/* WARNING: Removing unreachable block (ram,0x000100f47414) */
/* WARNING: Removing unreachable block (ram,0x000100f4741c) */
/* WARNING: Removing unreachable block (ram,0x000100f47424) */
/* WARNING: Removing unreachable block (ram,0x000100f47438) */
/* WARNING: Removing unreachable block (ram,0x000100f47440) */
/* WARNING: Removing unreachable block (ram,0x000100f4742c) */
/* WARNING: Removing unreachable block (ram,0x000100f47524) */
/* WARNING: Removing unreachable block (ram,0x000100f4752c) */
/* WARNING: Removing unreachable block (ram,0x000100f47534) */
/* WARNING: Removing unreachable block (ram,0x000100f47544) */
/* WARNING: Removing unreachable block (ram,0x000100f47558) */
/* WARNING: Removing unreachable block (ram,0x000100f47560) */
/* WARNING: Removing unreachable block (ram,0x000100f4754c) */
/* WARNING: Removing unreachable block (ram,0x000100f46f44) */

undefined1  [16] FUN_100f48284(void)

{
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x29;
  long in_stack_000033d0;
  undefined8 in_stack_000033d8;
  
  func_0x00010602ab90(s_Upgraded_marketplace______to_the_108ad4492,&stack0x000004b0);
  lVar3 = unaff_x21 * 0x18;
  do {
    func_0x00010602ab90(s_Installed_marketplace_root__108ad4471,&stack0x000004b0);
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != 0);
  FUN_100e7d6b8(unaff_x29 + -0xb0);
  FUN_100e05b5c(&stack0x00002a70);
  if (in_stack_000033d0 != 0) {
    _free(in_stack_000033d8);
  }
  FUN_100e1955c(&stack0x00007500);
  if (unaff_x24 != 0) {
    _free();
  }
  FUN_100de93d0(&stack0x00000528);
  if ((*(ulong *)(unaff_x19 + 0x110) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  *unaff_x25 = 1;
  FUN_100e548e0();
  if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
    FUN_100e76384(unaff_x19 + 0xc0);
  }
  *(undefined4 *)(unaff_x19 + 0xd9) = 0;
  lVar3 = *(long *)(unaff_x19 + 0x68);
  lVar1 = *(long *)(unaff_x19 + 0x70);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    _free(lVar3);
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  return ZEXT816(0);
}

