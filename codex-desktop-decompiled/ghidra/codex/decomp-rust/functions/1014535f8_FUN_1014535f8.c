
/* WARNING: Removing unreachable block (ram,0x00010145365c) */
/* WARNING: Removing unreachable block (ram,0x0001014536ac) */
/* WARNING: Removing unreachable block (ram,0x0001014536dc) */
/* WARNING: Removing unreachable block (ram,0x000101453674) */
/* WARNING: Removing unreachable block (ram,0x0001014536a4) */
/* WARNING: Removing unreachable block (ram,0x0001014536e0) */

void FUN_1014535f8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined1 *unaff_x22;
  long unaff_x29;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000c0);
  lVar2 = ((ulong)(unaff_x19 - unaff_x20) >> 5) + 1;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_100e077ec();
  }
  if (*(long *)(unaff_x29 + -0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xc0));
  }
  *(undefined8 *)(unaff_x22 + 8) = uVar1;
  *unaff_x22 = 1;
  return;
}

