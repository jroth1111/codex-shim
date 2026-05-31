
/* WARNING: Removing unreachable block (ram,0x0001007cdcec) */
/* WARNING: Removing unreachable block (ram,0x0001007cdbe0) */
/* WARNING: Removing unreachable block (ram,0x0001007cdbe8) */
/* WARNING: Removing unreachable block (ram,0x0001007cdb48) */

void FUN_1007cd2d8(void)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  uint unaff_w22;
  undefined8 *puVar3;
  long unaff_x24;
  ulong unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
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
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x20 = unaff_x24;
  unaff_x20[1] = lVar1;
  if ((in_stack_000000c0 != 0x8000000000000001) && ((in_stack_000000c0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if (in_stack_00000278 != -0x8000000000000000) {
    if (in_stack_00000288 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000280 + 0x10);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        in_stack_00000288 = in_stack_00000288 + -1;
      } while (in_stack_00000288 != 0);
    }
    unaff_x26 = &stack0x000000e0;
    if (in_stack_00000278 != 0) {
      _free(in_stack_00000280);
    }
  }
  if (in_stack_00000230 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000230);
  }
  if ((in_stack_000000c8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_000000d0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if (*unaff_x20 == -0x8000000000000000) {
    FUN_100d34830(unaff_x26 + 0x20);
    if (in_stack_000000e0 != '\x16') {
      FUN_100e077ec(&stack0x000000e0);
    }
  }
  else {
    lVar6 = unaff_x20[0x19];
    lVar4 = unaff_x20[0x18];
    lVar9 = unaff_x20[0x1b];
    lVar8 = unaff_x20[0x1a];
    lVar7 = unaff_x20[0x1d];
    lVar5 = unaff_x20[0x1c];
    lVar1 = unaff_x20[0x1e];
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
    FUN_100d34830(unaff_x26 + 0x20);
    if (unaff_x28 == unaff_x21) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xf0) = unaff_x27;
      lVar2 = thunk_FUN_1087e422c(((ulong)(unaff_x28 - unaff_x21) >> 6) + unaff_x27,
                                  unaff_x29 + -0xf0,&UNK_10b23a190);
    }
    if (in_stack_000000e0 != '\x16') {
      FUN_100e077ec(&stack0x000000e0);
    }
    if (lVar2 == 0) {
      unaff_x20[0x19] = lVar6;
      unaff_x20[0x18] = lVar4;
      unaff_x20[0x1b] = lVar9;
      unaff_x20[0x1a] = lVar8;
      unaff_x20[0x1d] = lVar7;
      unaff_x20[0x1c] = lVar5;
      unaff_x20[0x1e] = lVar1;
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
      unaff_x20[1] = lVar2;
      FUN_100e3b68c(&stack0x00000130);
    }
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000b8);
  }
  return;
}

