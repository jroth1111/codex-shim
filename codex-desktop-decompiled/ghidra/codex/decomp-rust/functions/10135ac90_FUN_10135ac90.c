
/* WARNING: Removing unreachable block (ram,0x00010135ad1c) */
/* WARNING: Removing unreachable block (ram,0x00010135acf4) */
/* WARNING: Removing unreachable block (ram,0x00010135ad14) */
/* WARNING: Removing unreachable block (ram,0x00010135ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010135ad24) */

void FUN_10135ac90(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  long unaff_x29;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
  lVar2 = ((ulong)(unaff_x19 - unaff_x20) >> 5) + 1;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_100e077ec();
  }
  if (*(long *)(unaff_x29 + -0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xc0));
  }
  *unaff_x22 = 0x8000000000000007;
  unaff_x22[1] = uVar1;
  return;
}

