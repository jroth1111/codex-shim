
void FUN_10065e664(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint unaff_w26;
  long unaff_x28;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000a8;
  int iStack00000000000000b8;
  uint uStack00000000000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  long *in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000460;
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
  
  iStack00000000000000b8 = 1;
  uStack00000000000000c0 = 1;
  lVar4 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000006d8);
  *in_stack_00000100 = -0x8000000000000000;
  in_stack_00000100[1] = lVar4;
  iStack00000000000000b8 = 1;
  uStack00000000000000c0 = 1;
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
      puVar5 = (undefined8 *)(in_stack_00000090 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000698 = in_stack_00000698 + -1;
      } while (in_stack_00000698 != 0);
    }
    if (in_stack_000000a8 != 0) {
      _free(in_stack_00000090);
    }
  }
  uVar1 = 0;
  if (in_stack_00000670 != -0x8000000000000000) {
    uVar1 = unaff_w26;
  }
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000680 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000678 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000680 = in_stack_00000680 + -1;
      } while (in_stack_00000680 != 0);
    }
    if (in_stack_00000670 != 0) {
      _free(in_stack_00000678);
    }
  }
  if (in_stack_00000658 != -0x8000000000000000) {
    if (in_stack_00000668 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000660 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        in_stack_00000668 = in_stack_00000668 + -1;
      } while (in_stack_00000668 != 0);
    }
    if (in_stack_00000658 != 0) {
      _free(in_stack_00000660);
    }
  }
  if ((in_stack_000000f0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000088);
  }
  uVar1 = uStack00000000000000c0;
  iVar2 = 0;
  if (in_stack_000000d0 != 0x8000000000000001) {
    iVar2 = iStack00000000000000b8;
  }
  if ((iVar2 == 1) && ((in_stack_000000d0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000c8 & 0x7fffffffffffffff) == 0) {
    uVar3 = 0;
    if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar1;
    }
  }
  else {
    _free(in_stack_00000040);
    uVar3 = 0;
    if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar1;
    }
  }
  if ((uVar3 & 1) != 0) {
    _free(in_stack_00000080);
  }
  if (in_stack_00000460 == -0x8000000000000000) {
    lVar4 = *in_stack_00000100;
  }
  else {
    FUN_100e4affc(&stack0x00000460);
    lVar4 = *in_stack_00000100;
  }
  if (lVar4 == -0x8000000000000000) {
    FUN_100de8910(&stack0x00000158);
  }
  else {
    _memcpy(&stack0x00000180,in_stack_00000100,0x2e0);
    if (in_stack_00000108 != unaff_x28) {
      lVar4 = thunk_FUN_1087e422c(in_stack_00000078,&UNK_10b21cb90,&UNK_10b20a590);
      *in_stack_00000100 = -0x8000000000000000;
      in_stack_00000100[1] = lVar4;
      FUN_100e61180(&stack0x00000180);
    }
    FUN_100de8910(&stack0x00000158);
  }
  if (in_stack_00000110 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000110);
  }
  if (((long)in_stack_000000f8 < 0) &&
     ((in_stack_000000f8 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_000000e8);
  }
  return;
}

