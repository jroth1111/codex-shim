
/* WARNING: Removing unreachable block (ram,0x0001007e9328) */
/* WARNING: Removing unreachable block (ram,0x0001007e9180) */
/* WARNING: Removing unreachable block (ram,0x0001007e9178) */

void FUN_1007e8c28(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  long unaff_x25;
  uint unaff_w27;
  long unaff_x29;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  long in_stack_000000c8;
  char in_stack_000000d0;
  long in_stack_00000120;
  long in_stack_00000128;
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
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *unaff_x20 = 2;
  unaff_x20[1] = lVar1;
  if (in_stack_000000a0 != -0x7ffffffffffffffa) {
    FUN_100e3155c(&stack0x00000220);
  }
  if ((in_stack_000000a8 != 0x8000000000000001) && ((in_stack_000000a8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_000000b0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_000000b8 != 0x8000000000000001) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if (*unaff_x20 == 2) {
    FUN_100d34830(&stack0x000000f0);
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
  }
  else {
    in_stack_000001e8 = unaff_x20[0x19];
    in_stack_000001e0 = unaff_x20[0x18];
    lVar6 = unaff_x20[0x1b];
    lVar5 = unaff_x20[0x1a];
    lVar4 = unaff_x20[0x1d];
    lVar3 = unaff_x20[0x1c];
    lVar1 = unaff_x20[0x1e];
    in_stack_000001a8 = unaff_x20[0x11];
    in_stack_000001a0 = unaff_x20[0x10];
    in_stack_000001b8 = unaff_x20[0x13];
    in_stack_000001b0 = unaff_x20[0x12];
    in_stack_000001c8 = unaff_x20[0x15];
    in_stack_000001c0 = unaff_x20[0x14];
    in_stack_000001d8 = unaff_x20[0x17];
    in_stack_000001d0 = unaff_x20[0x16];
    in_stack_00000168 = unaff_x20[9];
    in_stack_00000160 = unaff_x20[8];
    in_stack_00000178 = unaff_x20[0xb];
    in_stack_00000170 = unaff_x20[10];
    in_stack_00000188 = unaff_x20[0xd];
    in_stack_00000180 = unaff_x20[0xc];
    in_stack_00000198 = unaff_x20[0xf];
    in_stack_00000190 = unaff_x20[0xe];
    in_stack_00000128 = unaff_x20[1];
    in_stack_00000120 = *unaff_x20;
    in_stack_00000138 = unaff_x20[3];
    in_stack_00000130 = unaff_x20[2];
    in_stack_00000148 = unaff_x20[5];
    in_stack_00000140 = unaff_x20[4];
    in_stack_00000158 = unaff_x20[7];
    in_stack_00000150 = unaff_x20[6];
    FUN_100d34830(&stack0x000000f0);
    if (in_stack_000000c8 == unaff_x25) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x100) = unaff_x22;
      lVar2 = FUN_1087e422c(((ulong)(in_stack_000000c8 - unaff_x25) >> 6) + unaff_x22,
                            unaff_x29 + -0x100,&UNK_10b23a190);
    }
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
    if (lVar2 == 0) {
      unaff_x20[0x19] = in_stack_000001e8;
      unaff_x20[0x18] = in_stack_000001e0;
      unaff_x20[0x1b] = lVar6;
      unaff_x20[0x1a] = lVar5;
      unaff_x20[0x1d] = lVar4;
      unaff_x20[0x1c] = lVar3;
      unaff_x20[0x1e] = lVar1;
      unaff_x20[0x11] = in_stack_000001a8;
      unaff_x20[0x10] = in_stack_000001a0;
      unaff_x20[0x13] = in_stack_000001b8;
      unaff_x20[0x12] = in_stack_000001b0;
      unaff_x20[0x15] = in_stack_000001c8;
      unaff_x20[0x14] = in_stack_000001c0;
      unaff_x20[0x17] = in_stack_000001d8;
      unaff_x20[0x16] = in_stack_000001d0;
      unaff_x20[9] = in_stack_00000168;
      unaff_x20[8] = in_stack_00000160;
      unaff_x20[0xb] = in_stack_00000178;
      unaff_x20[10] = in_stack_00000170;
      unaff_x20[0xd] = in_stack_00000188;
      unaff_x20[0xc] = in_stack_00000180;
      unaff_x20[0xf] = in_stack_00000198;
      unaff_x20[0xe] = in_stack_00000190;
      unaff_x20[1] = in_stack_00000128;
      *unaff_x20 = in_stack_00000120;
      unaff_x20[3] = in_stack_00000138;
      unaff_x20[2] = in_stack_00000130;
      unaff_x20[5] = in_stack_00000148;
      unaff_x20[4] = in_stack_00000140;
      unaff_x20[7] = in_stack_00000158;
      unaff_x20[6] = in_stack_00000150;
    }
    else {
      *unaff_x20 = 2;
      unaff_x20[1] = lVar2;
      if (in_stack_00000130 != 0) {
        _free(in_stack_00000138);
      }
      if ((in_stack_00000160 != -0x8000000000000000) && (in_stack_00000160 != 0)) {
        _free(in_stack_00000168);
      }
      if (in_stack_00000148 != 0) {
        _free(in_stack_00000150);
      }
      if ((in_stack_00000178 != -0x8000000000000000) && (in_stack_00000178 != 0)) {
        _free(in_stack_00000180);
      }
      FUN_100e3155c(&stack0x00000190);
    }
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

