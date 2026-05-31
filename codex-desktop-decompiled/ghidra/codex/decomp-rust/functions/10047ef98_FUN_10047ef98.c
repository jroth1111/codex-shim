
/* WARNING: Removing unreachable block (ram,0x00010047ef14) */
/* WARNING: Removing unreachable block (ram,0x00010047ef18) */
/* WARNING: Removing unreachable block (ram,0x00010047ef34) */
/* WARNING: Removing unreachable block (ram,0x00010047ef40) */
/* WARNING: Removing unreachable block (ram,0x00010047ef48) */
/* WARNING: Removing unreachable block (ram,0x00010047ef5c) */
/* WARNING: Removing unreachable block (ram,0x00010047ef64) */
/* WARNING: Removing unreachable block (ram,0x00010047ef50) */
/* WARNING: Removing unreachable block (ram,0x00010047ef54) */
/* WARNING: Removing unreachable block (ram,0x00010047ef20) */
/* WARNING: Removing unreachable block (ram,0x00010047ef28) */
/* WARNING: Removing unreachable block (ram,0x00010047f528) */
/* WARNING: Removing unreachable block (ram,0x00010047f52c) */
/* WARNING: Removing unreachable block (ram,0x00010047f540) */

void FUN_10047ef98(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000060;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if (unaff_x24 != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  iVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    iVar1 = unaff_w21;
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

