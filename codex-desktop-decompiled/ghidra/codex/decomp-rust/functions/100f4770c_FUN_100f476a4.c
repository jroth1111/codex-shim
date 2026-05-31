
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
/* WARNING: Removing unreachable block (ram,0x000100f47780) */

undefined1  [16] FUN_100f476a4(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined1 *unaff_x22;
  undefined8 *puVar3;
  long in_stack_00000528;
  undefined8 in_stack_00000530;
  long in_stack_00000540;
  undefined8 in_stack_00000548;
  long in_stack_00000558;
  undefined8 in_stack_00000560;
  
  func_0x00010602ab90(s_Marketplace_____is_already_added_108ad4546,&stack0x00002a70);
  func_0x00010602ab90(s_Installed_marketplace_root__108ad4471,&stack0x00002a70);
  if (in_stack_00000528 != 0) {
    _free(in_stack_00000530);
  }
  if (in_stack_00000540 != 0) {
    _free(in_stack_00000548);
  }
  if (in_stack_00000558 != 0) {
    _free(in_stack_00000560);
  }
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x130));
  }
  *(undefined2 *)(unaff_x19 + 0x1b1) = 0;
  *(undefined1 *)(unaff_x19 + 0x1b3) = 0;
  *unaff_x22 = 1;
  FUN_100e4aa70();
  if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
    FUN_100e76384(unaff_x19 + 0xc0);
  }
  *(undefined4 *)(unaff_x19 + 0xd9) = 0;
  lVar1 = *(long *)(unaff_x19 + 0x68);
  lVar2 = *(long *)(unaff_x19 + 0x70);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    _free(lVar1);
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  return ZEXT816(0);
}

