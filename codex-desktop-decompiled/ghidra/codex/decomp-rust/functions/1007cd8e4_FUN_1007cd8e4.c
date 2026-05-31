
/* WARNING: Removing unreachable block (ram,0x0001007cdbe8) */

void FUN_1007cd8e4(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  uint unaff_w22;
  undefined8 *puVar5;
  int unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  uint in_stack_00000088;
  int in_stack_00000090;
  uint in_stack_00000098;
  uint in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  long in_stack_000000d8;
  char in_stack_000000e0;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_00000230;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  
  lVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x70);
  *unaff_x20 = -0x8000000000000000;
  unaff_x20[1] = lVar3;
  FUN_100cb636c(unaff_x29 + -0xa0);
  FUN_100de6690(unaff_x29 + -0xf0);
  if (in_stack_000000c8 != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if (in_stack_000000d0 != 0) {
    _free(in_stack_00000058);
  }
  if (in_stack_000000d8 != 0) {
    _free(in_stack_00000060);
  }
  if ((in_stack_000000c0 != 0x8000000000000001) && ((in_stack_000000c0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((unaff_w23 != 0) && (in_stack_00000278 != -0x8000000000000000)) {
    if (in_stack_00000288 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000280 + 0x10);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 4;
        in_stack_00000288 = in_stack_00000288 + -1;
      } while (in_stack_00000288 != 0);
    }
    if (in_stack_00000278 != 0) {
      _free(in_stack_00000280);
    }
  }
  uVar1 = 0;
  if (in_stack_00000230 != -0x7ffffffffffffffb) {
    uVar1 = in_stack_000000b0;
  }
  if ((uVar1 & 1) != 0) {
    FUN_100de6690(&stack0x00000230);
  }
  uVar1 = 0;
  if ((in_stack_000000c8 & 0x7fffffffffffffff) != 0) {
    uVar1 = in_stack_00000088;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000050);
  }
  iVar2 = 0;
  if (unaff_x25 != 0x8000000000000001) {
    iVar2 = in_stack_00000090;
  }
  if ((iVar2 == 1) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
    uVar1 = 0;
    if ((in_stack_000000d0 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000098;
    }
  }
  else {
    uVar1 = 0;
    if ((in_stack_000000d0 & 0x7fffffffffffffff) != 0) {
      uVar1 = in_stack_00000098;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000058);
  }
  if (*unaff_x20 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000100);
    if (in_stack_000000e0 != '\x16') {
      FUN_100e077ec(&stack0x000000e0);
    }
  }
  else {
    lVar8 = unaff_x20[0x19];
    lVar6 = unaff_x20[0x18];
    lVar11 = unaff_x20[0x1b];
    lVar10 = unaff_x20[0x1a];
    lVar9 = unaff_x20[0x1d];
    lVar7 = unaff_x20[0x1c];
    lVar3 = unaff_x20[0x1e];
    in_stack_000001b8 = unaff_x20[0x11];
    in_stack_000001b0 = unaff_x20[0x10];
    in_stack_000001c8 = unaff_x20[0x13];
    in_stack_000001c0 = unaff_x20[0x12];
    in_stack_000001d8 = unaff_x20[0x15];
    in_stack_000001d0 = unaff_x20[0x14];
    in_stack_000001e8 = unaff_x20[0x17];
    in_stack_000001e0 = unaff_x20[0x16];
    in_stack_00000178 = unaff_x20[9];
    in_stack_00000170 = unaff_x20[8];
    in_stack_00000188 = unaff_x20[0xb];
    in_stack_00000180 = unaff_x20[10];
    in_stack_00000198 = unaff_x20[0xd];
    in_stack_00000190 = unaff_x20[0xc];
    in_stack_000001a8 = unaff_x20[0xf];
    in_stack_000001a0 = unaff_x20[0xe];
    in_stack_00000138 = unaff_x20[1];
    in_stack_00000130 = *unaff_x20;
    in_stack_00000148 = unaff_x20[3];
    in_stack_00000140 = unaff_x20[2];
    in_stack_00000158 = unaff_x20[5];
    in_stack_00000150 = unaff_x20[4];
    in_stack_00000168 = unaff_x20[7];
    in_stack_00000160 = unaff_x20[6];
    FUN_100d34830(&stack0x00000100);
    if (unaff_x28 == unaff_x21) {
      lVar4 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xf0) = unaff_x27;
      lVar4 = thunk_FUN_1087e422c(((ulong)(unaff_x28 - unaff_x21) >> 6) + unaff_x27,
                                  unaff_x29 + -0xf0,&UNK_10b23a190);
    }
    if (in_stack_000000e0 != '\x16') {
      FUN_100e077ec(&stack0x000000e0);
    }
    if (lVar4 == 0) {
      unaff_x20[0x19] = lVar8;
      unaff_x20[0x18] = lVar6;
      unaff_x20[0x1b] = lVar11;
      unaff_x20[0x1a] = lVar10;
      unaff_x20[0x1d] = lVar9;
      unaff_x20[0x1c] = lVar7;
      unaff_x20[0x1e] = lVar3;
      unaff_x20[0x11] = in_stack_000001b8;
      unaff_x20[0x10] = in_stack_000001b0;
      unaff_x20[0x13] = in_stack_000001c8;
      unaff_x20[0x12] = in_stack_000001c0;
      unaff_x20[0x15] = in_stack_000001d8;
      unaff_x20[0x14] = in_stack_000001d0;
      unaff_x20[0x17] = in_stack_000001e8;
      unaff_x20[0x16] = in_stack_000001e0;
      unaff_x20[9] = in_stack_00000178;
      unaff_x20[8] = in_stack_00000170;
      unaff_x20[0xb] = in_stack_00000188;
      unaff_x20[10] = in_stack_00000180;
      unaff_x20[0xd] = in_stack_00000198;
      unaff_x20[0xc] = in_stack_00000190;
      unaff_x20[0xf] = in_stack_000001a8;
      unaff_x20[0xe] = in_stack_000001a0;
      unaff_x20[1] = in_stack_00000138;
      *unaff_x20 = in_stack_00000130;
      unaff_x20[3] = in_stack_00000148;
      unaff_x20[2] = in_stack_00000140;
      unaff_x20[5] = in_stack_00000158;
      unaff_x20[4] = in_stack_00000150;
      unaff_x20[7] = in_stack_00000168;
      unaff_x20[6] = in_stack_00000160;
    }
    else {
      *unaff_x20 = -0x8000000000000000;
      unaff_x20[1] = lVar4;
      FUN_100e3b68c(&stack0x00000130);
    }
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000b8);
  }
  return;
}

