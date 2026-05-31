
/* WARNING: Removing unreachable block (ram,0x000101516988) */
/* WARNING: Removing unreachable block (ram,0x000101516b90) */
/* WARNING: Removing unreachable block (ram,0x000101516bac) */
/* WARNING: Removing unreachable block (ram,0x000101516bb0) */
/* WARNING: Removing unreachable block (ram,0x000101516bc4) */
/* WARNING: Removing unreachable block (ram,0x000101516bcc) */
/* WARNING: Removing unreachable block (ram,0x000101516bb8) */
/* WARNING: Removing unreachable block (ram,0x000101516b2c) */
/* WARNING: Removing unreachable block (ram,0x000101516d2c) */
/* WARNING: Removing unreachable block (ram,0x000101516d78) */
/* WARNING: Removing unreachable block (ram,0x000101516d7c) */
/* WARNING: Removing unreachable block (ram,0x000101516d84) */
/* WARNING: Removing unreachable block (ram,0x000101516d8c) */
/* WARNING: Removing unreachable block (ram,0x000101516d94) */
/* WARNING: Removing unreachable block (ram,0x000101516d9c) */
/* WARNING: Removing unreachable block (ram,0x000101516da4) */
/* WARNING: Removing unreachable block (ram,0x000101516db4) */
/* WARNING: Removing unreachable block (ram,0x000101516db8) */
/* WARNING: Removing unreachable block (ram,0x000101516dc0) */
/* WARNING: Removing unreachable block (ram,0x000101516dd0) */
/* WARNING: Removing unreachable block (ram,0x000101516dd8) */
/* WARNING: Removing unreachable block (ram,0x000101516de8) */
/* WARNING: Removing unreachable block (ram,0x000101516df0) */
/* WARNING: Removing unreachable block (ram,0x000101516e04) */
/* WARNING: Removing unreachable block (ram,0x000101516e08) */
/* WARNING: Removing unreachable block (ram,0x000101516b34) */
/* WARNING: Removing unreachable block (ram,0x000101516b64) */
/* WARNING: Removing unreachable block (ram,0x000101516b68) */
/* WARNING: Removing unreachable block (ram,0x000101516b7c) */
/* WARNING: Removing unreachable block (ram,0x000101516b84) */
/* WARNING: Removing unreachable block (ram,0x000101516b70) */
/* WARNING: Removing unreachable block (ram,0x000101516bd8) */
/* WARNING: Removing unreachable block (ram,0x000101516bdc) */
/* WARNING: Removing unreachable block (ram,0x000101516be4) */
/* WARNING: Removing unreachable block (ram,0x000101516bf0) */

void FUN_101516040(void)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong unaff_x25;
  undefined8 *puVar7;
  long unaff_x29;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  uint uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  uint uStack00000000000000ec;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  ulong in_stack_00000150;
  char in_stack_000003d0;
  long in_stack_00000420;
  long in_stack_00000428;
  long in_stack_00000430;
  ulong in_stack_00000440;
  long in_stack_00000468;
  undefined8 in_stack_00000470;
  long in_stack_00000480;
  undefined8 in_stack_00000488;
  
  uVar5 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  uStack00000000000000ec = 1;
  uStack00000000000000d4 = 1;
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000148);
  }
  if ((in_stack_000000c8 != -0x7fffffffffffffff) && (in_stack_000000c8 != -0x8000000000000000)) {
    if (in_stack_000000c8 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
    if (*(long *)(unaff_x29 + -200) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xc0));
    }
  }
  if (-0x7fffffffffffffff < in_stack_00000100) {
    lVar2 = *(long *)(unaff_x29 + -0xf8);
    lVar6 = *(long *)(unaff_x29 + -0xf0) + 1;
    lVar4 = lVar2;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      func_0x000100dfc74c(lVar4);
      lVar4 = lVar4 + 0x1d8;
    }
    if (in_stack_00000100 != 0) {
      _free(lVar2);
    }
  }
  if ((in_stack_00000118 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000f8);
  }
  uVar1 = 0;
  if (in_stack_00000468 != -0x7fffffffffffffff) {
    uVar1 = uStack00000000000000ec;
  }
  if (((uVar1 & 1) != 0) && (in_stack_00000468 != -0x8000000000000000)) {
    if (in_stack_00000468 != 0) {
      _free(in_stack_00000470);
    }
    if ((in_stack_00000480 != -0x8000000000000000) && (in_stack_00000480 != 0)) {
      _free(in_stack_00000488);
    }
  }
  if (in_stack_00000440 < 0x8000000000000003) {
    bVar3 = in_stack_00000440 != 0x8000000000000000;
    if (in_stack_00000440 < 0x8000000000000001) {
      in_stack_00000440 = 0;
    }
    if ((bVar3) && ((in_stack_00000440 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(&stack0x00000440);
    }
  }
  if (((in_stack_00000420 != -0x7ffffffffffffffc) && (in_stack_00000420 != -0x7ffffffffffffffd)) &&
     (-0x7ffffffffffffffe < in_stack_00000420)) {
    if (in_stack_00000430 != 0) {
      puVar7 = (undefined8 *)(in_stack_00000428 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        in_stack_00000430 = in_stack_00000430 + -1;
      } while (in_stack_00000430 != 0);
    }
    if (in_stack_00000420 != 0) {
      _free(in_stack_00000428);
    }
  }
  if ((in_stack_000000f0 != 0x8000000000000001) && ((in_stack_000000f0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000a0);
  }
  if ((in_stack_00000120 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((in_stack_00000150 & 0x7fffffffffffffff) != 0) {
      uVar1 = uStack00000000000000d4;
    }
  }
  else {
    _free(in_stack_000000c0);
    uVar1 = 0;
    if ((in_stack_00000150 & 0x7fffffffffffffff) != 0) {
      uVar1 = uStack00000000000000d4;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000088);
  }
  if ((in_stack_00000108 != 0x8000000000000001) && ((in_stack_00000108 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000140);
  }
  FUN_100d34830(&stack0x000003f0);
  if (in_stack_000003d0 != '\x16') {
    FUN_100e077ec(&stack0x000003d0);
  }
  if ((in_stack_00000130._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000e0);
  }
  *in_stack_00000128 = 0x8000000000000000;
  in_stack_00000128[1] = uVar5;
  return;
}

