
/* WARNING: Removing unreachable block (ram,0x0001012fe644) */

void FUN_1012fe694(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  int unaff_w20;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
  *unaff_x24 = 4;
  unaff_x24[1] = uVar2;
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (unaff_x27 != 0) {
    _free();
  }
  iVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

