
/* WARNING: Removing unreachable block (ram,0x0001007de7d8) */
/* WARNING: Removing unreachable block (ram,0x0001007de7e4) */
/* WARNING: Removing unreachable block (ram,0x0001007de7ec) */
/* WARNING: Removing unreachable block (ram,0x0001007de7f4) */
/* WARNING: Removing unreachable block (ram,0x0001007de824) */
/* WARNING: Removing unreachable block (ram,0x0001007de7fc) */
/* WARNING: Removing unreachable block (ram,0x0001007de800) */
/* WARNING: Removing unreachable block (ram,0x0001007de808) */
/* WARNING: Removing unreachable block (ram,0x0001007de814) */
/* WARNING: Removing unreachable block (ram,0x0001007de82c) */

void FUN_1007de5b4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  *unaff_x25 = 0x8000000000000001;
  unaff_x25[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

