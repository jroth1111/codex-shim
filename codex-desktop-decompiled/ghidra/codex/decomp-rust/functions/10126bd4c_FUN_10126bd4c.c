
/* WARNING: Removing unreachable block (ram,0x00010126bdf0) */
/* WARNING: Removing unreachable block (ram,0x00010126be14) */
/* WARNING: Removing unreachable block (ram,0x00010126bdf8) */
/* WARNING: Removing unreachable block (ram,0x00010126be1c) */
/* WARNING: Removing unreachable block (ram,0x00010126be40) */
/* WARNING: Removing unreachable block (ram,0x00010126be54) */
/* WARNING: Removing unreachable block (ram,0x00010126be64) */
/* WARNING: Removing unreachable block (ram,0x00010126be34) */

void FUN_10126bd4c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  long in_stack_00000060;
  char in_stack_00000070;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  
  uVar3 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x21 = 0x8000000000000001;
  unaff_x21[1] = uVar3;
  if ((-0x7fffffffffffffff < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000020);
  }
  if (((unaff_x22 != unaff_x27) && (-0x7fffffffffffffff < unaff_x22)) && (unaff_x22 != 0)) {
    _free(in_stack_00000018);
  }
  if ((unaff_x23 != -0x7fffffffffffffff) && (unaff_x23 != -0x8000000000000000)) {
    lVar2 = *(long *)(unaff_x29 + -0xf0);
    lVar4 = *(long *)(unaff_x29 + -0xe8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (unaff_x23 != 0) {
      _free(lVar2);
    }
  }
  iVar1 = 0;
  if (in_stack_00000060 != unaff_x27) {
    iVar1 = unaff_w20;
  }
  if (((iVar1 == 1) && (-0x7fffffffffffffff < in_stack_00000060)) && (in_stack_00000060 != 0)) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

