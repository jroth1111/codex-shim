
/* WARNING: Removing unreachable block (ram,0x000100662208) */

void FUN_100661e98(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  undefined8 *puVar4;
  undefined8 unaff_x24;
  long unaff_x25;
  uint unaff_w27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  uint in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000a8;
  int in_stack_000000b8;
  uint in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  long *in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000658;
  long in_stack_00000660;
  long in_stack_00000668;
  long in_stack_00000670;
  long in_stack_00000678;
  long in_stack_00000680;
  long in_stack_00000698;
  undefined8 in_stack_000006b0;
  long in_stack_000006c0;
  undefined8 in_stack_000006c8;
  
  lVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000100 = -0x8000000000000000;
  in_stack_00000100[1] = lVar3;
  FUN_100e582c8(unaff_x29 + -0xe0);
  FUN_100e582c8(unaff_x29 + -0x100);
  if (in_stack_000000f0 != 0) {
    _free();
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (in_stack_000000c8 != 0) {
    _free();
  }
  if (in_stack_000000d8 != 0) {
    _free();
  }
  FUN_100e4affc(&stack0x000006d8);
  if ((in_stack_000000e0 != -0x7fffffffffffffff) && (in_stack_000000e0 != -0x8000000000000000)) {
    if (in_stack_000000e0 != 0) {
      _free(in_stack_000006b0);
    }
    if ((in_stack_000006c0 != -0x8000000000000000) && (in_stack_000006c0 != 0)) {
      _free(in_stack_000006c8);
    }
  }
  if ((in_stack_000000a8 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < in_stack_000000a8)) {
    if (in_stack_00000698 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000090 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_00000698 = in_stack_00000698 + -1;
      } while (in_stack_00000698 != 0);
    }
    if (in_stack_000000a8 != 0) {
      _free(in_stack_00000090);
    }
  }
  uVar1 = 0;
  if (in_stack_00000670 != -0x8000000000000000) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000680 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000678 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_00000680 = in_stack_00000680 + -1;
      } while (in_stack_00000680 != 0);
    }
    if (in_stack_00000670 != 0) {
      _free(in_stack_00000678);
    }
  }
  uVar1 = 0;
  if (in_stack_00000658 != -0x8000000000000000) {
    uVar1 = unaff_w27;
  }
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000668 != 0) {
      puVar4 = (undefined8 *)(in_stack_00000660 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_00000668 = in_stack_00000668 + -1;
      } while (in_stack_00000668 != 0);
    }
    if (in_stack_00000658 != 0) {
      _free(in_stack_00000660);
    }
  }
  uVar1 = 0;
  if ((in_stack_000000f0 & 0x7fffffffffffffff) != 0) {
    uVar1 = in_stack_00000068;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000088);
  }
  iVar2 = 0;
  if (in_stack_000000d0 != 0x8000000000000001) {
    iVar2 = in_stack_000000b8;
  }
  if ((iVar2 == 1) && ((in_stack_000000d0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
    uVar1 = 0;
    if ((in_stack_000000c8 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  else {
    uVar1 = 0;
    if ((in_stack_000000c8 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_000000c0;
    }
  }
  else {
    _free(in_stack_00000040);
    uVar1 = 0;
    if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_000000c0;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000080);
  }
  if (*in_stack_00000100 == -0x8000000000000000) {
    FUN_100de8910(&stack0x00000158);
  }
  else {
    _memcpy(&stack0x00000180,in_stack_00000100,0x2e0);
    if (in_stack_00000108 != unaff_x25) {
      lVar3 = thunk_FUN_1087e422c(in_stack_00000078,&UNK_10b21cb90,&UNK_10b20a590);
      *in_stack_00000100 = -0x8000000000000000;
      in_stack_00000100[1] = lVar3;
      FUN_100e61180(&stack0x00000180);
    }
    FUN_100de8910(&stack0x00000158);
  }
  if (in_stack_00000110 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000110);
  }
  if (((long)in_stack_000000f8 < 0) &&
     ((in_stack_000000f8 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(unaff_x24);
  }
  return;
}

