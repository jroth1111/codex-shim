
/* WARNING: Removing unreachable block (ram,0x0001007c7ffc) */
/* WARNING: Removing unreachable block (ram,0x0001007c8004) */
/* WARNING: Removing unreachable block (ram,0x0001007c8018) */
/* WARNING: Removing unreachable block (ram,0x0001007c8020) */
/* WARNING: Removing unreachable block (ram,0x0001007c800c) */
/* WARNING: Removing unreachable block (ram,0x0001007c802c) */
/* WARNING: Removing unreachable block (ram,0x0001007c8030) */

void FUN_1007c7a28(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000058;
  char in_stack_00000060;
  undefined8 in_stack_00000100;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar2;
  if (unaff_x23 != 0) {
    puVar4 = (undefined8 *)(in_stack_00000030 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      unaff_x23 = unaff_x23 + -1;
    } while (unaff_x23 != 0);
  }
  if (in_stack_00000048 != 0) {
    _free(in_stack_00000030);
  }
  if (in_stack_00000058 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar4 = (undefined8 *)(unaff_x27 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (in_stack_00000058 != 0) {
      _free();
      unaff_x25 = *(long *)(unaff_x29 + -0xe8);
    }
  }
  if ((unaff_x25 != -0x8000000000000000) && ((unaff_x19 & 1) != 0)) {
    lVar1 = *(long *)(unaff_x29 + -0xe0);
    lVar3 = *(long *)(unaff_x29 + -0xd8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (unaff_x25 != 0) {
      _free(lVar1);
    }
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000040._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

