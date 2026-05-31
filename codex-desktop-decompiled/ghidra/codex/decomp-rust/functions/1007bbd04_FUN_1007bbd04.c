
/* WARNING: Removing unreachable block (ram,0x0001007bc0c8) */

void FUN_1007bbd04(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int unaff_w19;
  long *unaff_x20;
  uint unaff_w21;
  long lVar4;
  long unaff_x23;
  long lVar5;
  long unaff_x26;
  long unaff_x28;
  undefined8 *puVar6;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000098;
  uint in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  char in_stack_000000f0;
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
  
  lVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x20 = -0x8000000000000000;
  unaff_x20[1] = lVar3;
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_000000e0 != 0) {
    _free(in_stack_00000080);
  }
  if ((in_stack_000000b8 != 0x8000000000000001) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  lVar3 = in_stack_00000078;
  if (in_stack_000000d8 != -0x8000000000000000) {
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 + -1) {
      FUN_100e1d024(lVar3);
      lVar3 = lVar3 + 0x50;
    }
    if (in_stack_000000d8 != 0) {
      _free(in_stack_00000078);
    }
  }
  if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  lVar3 = *(long *)(unaff_x29 + -0xd8);
  if (lVar3 != -0x8000000000000000) {
    lVar4 = *(long *)(unaff_x29 + -0xd0);
    lVar5 = *(long *)(unaff_x29 + -200);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar4);
    }
  }
  uVar1 = 0;
  if ((in_stack_000000d0 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000058);
  }
  iVar2 = 0;
  if (in_stack_000000c8 != 0x8000000000000001) {
    iVar2 = unaff_w19;
  }
  if ((iVar2 == 1) && ((in_stack_000000c8 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  if (*unaff_x20 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000110);
    if (in_stack_000000f0 != '\x16') {
      FUN_100e077ec(&stack0x000000f0);
    }
  }
  else {
    in_stack_000001c8 = unaff_x20[0x11];
    in_stack_000001c0 = unaff_x20[0x10];
    in_stack_000001d8 = unaff_x20[0x13];
    in_stack_000001d0 = unaff_x20[0x12];
    in_stack_000001e8 = unaff_x20[0x15];
    in_stack_000001e0 = unaff_x20[0x14];
    lVar3 = unaff_x20[0x16];
    in_stack_00000188 = unaff_x20[9];
    in_stack_00000180 = unaff_x20[8];
    in_stack_00000198 = unaff_x20[0xb];
    in_stack_00000190 = unaff_x20[10];
    in_stack_000001a8 = unaff_x20[0xd];
    in_stack_000001a0 = unaff_x20[0xc];
    in_stack_000001b8 = unaff_x20[0xf];
    in_stack_000001b0 = unaff_x20[0xe];
    in_stack_00000148 = unaff_x20[1];
    in_stack_00000140 = *unaff_x20;
    in_stack_00000158 = unaff_x20[3];
    in_stack_00000150 = unaff_x20[2];
    in_stack_00000168 = unaff_x20[5];
    in_stack_00000160 = unaff_x20[4];
    in_stack_00000178 = unaff_x20[7];
    in_stack_00000170 = unaff_x20[6];
    FUN_100d34830(&stack0x00000110);
    if (in_stack_000000e8 == unaff_x26) {
      lVar4 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x90) = unaff_x23;
      lVar4 = thunk_FUN_1087e422c(((ulong)(in_stack_000000e8 - unaff_x26) >> 6) + unaff_x23,
                                  unaff_x29 + -0x90,&UNK_10b23a190);
    }
    if (in_stack_000000f0 != '\x16') {
      FUN_100e077ec(&stack0x000000f0);
    }
    if (lVar4 == 0) {
      unaff_x20[0x11] = in_stack_000001c8;
      unaff_x20[0x10] = in_stack_000001c0;
      unaff_x20[0x13] = in_stack_000001d8;
      unaff_x20[0x12] = in_stack_000001d0;
      unaff_x20[0x15] = in_stack_000001e8;
      unaff_x20[0x14] = in_stack_000001e0;
      unaff_x20[0x16] = lVar3;
      unaff_x20[9] = in_stack_00000188;
      unaff_x20[8] = in_stack_00000180;
      unaff_x20[0xb] = in_stack_00000198;
      unaff_x20[10] = in_stack_00000190;
      unaff_x20[0xd] = in_stack_000001a8;
      unaff_x20[0xc] = in_stack_000001a0;
      unaff_x20[0xf] = in_stack_000001b8;
      unaff_x20[0xe] = in_stack_000001b0;
      unaff_x20[1] = in_stack_00000148;
      *unaff_x20 = in_stack_00000140;
      unaff_x20[3] = in_stack_00000158;
      unaff_x20[2] = in_stack_00000150;
      unaff_x20[5] = in_stack_00000168;
      unaff_x20[4] = in_stack_00000160;
      unaff_x20[7] = in_stack_00000178;
      unaff_x20[6] = in_stack_00000170;
    }
    else {
      *unaff_x20 = -0x8000000000000000;
      unaff_x20[1] = lVar4;
      FUN_100e24bc0(&stack0x00000140);
    }
  }
  if ((in_stack_000000a0 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000a8);
  }
  return;
}

