
/* WARNING: Removing unreachable block (ram,0x0001007cdcec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1007ce058(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x21;
  undefined8 *puVar3;
  ulong unaff_x25;
  long unaff_x27;
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
  undefined8 in_stack_00000060;
  long *in_stack_00000078;
  uint in_stack_00000080;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
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
  
  lVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xf0);
  *in_stack_00000078 = -0x8000000000000000;
  in_stack_00000078[1] = lVar1;
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
  if ((in_stack_000000d8 & 0x7fffffffffffffff) == 0) {
    lVar1 = *in_stack_00000078;
  }
  else {
    _free(in_stack_00000060);
    lVar1 = *in_stack_00000078;
  }
  if (lVar1 == -0x8000000000000000) {
    FUN_100d34830(&stack0x00000100);
    if (in_stack_000000e0 != '\x16') {
      FUN_100e077ec(&stack0x000000e0);
    }
  }
  else {
    lVar6 = in_stack_00000078[0x19];
    lVar4 = in_stack_00000078[0x18];
    lVar9 = in_stack_00000078[0x1b];
    lVar8 = in_stack_00000078[0x1a];
    lVar7 = in_stack_00000078[0x1d];
    lVar5 = in_stack_00000078[0x1c];
    lVar1 = in_stack_00000078[0x1e];
    in_stack_000001b8 = in_stack_00000078[0x11];
    in_stack_000001b0 = in_stack_00000078[0x10];
    in_stack_000001c8 = in_stack_00000078[0x13];
    in_stack_000001c0 = in_stack_00000078[0x12];
    in_stack_000001d8 = in_stack_00000078[0x15];
    in_stack_000001d0 = in_stack_00000078[0x14];
    in_stack_000001e8 = in_stack_00000078[0x17];
    in_stack_000001e0 = in_stack_00000078[0x16];
    in_stack_00000178 = in_stack_00000078[9];
    in_stack_00000170 = in_stack_00000078[8];
    in_stack_00000188 = in_stack_00000078[0xb];
    in_stack_00000180 = in_stack_00000078[10];
    in_stack_00000198 = in_stack_00000078[0xd];
    in_stack_00000190 = in_stack_00000078[0xc];
    in_stack_000001a8 = in_stack_00000078[0xf];
    in_stack_000001a0 = in_stack_00000078[0xe];
    in_stack_00000138 = in_stack_00000078[1];
    in_stack_00000130 = *in_stack_00000078;
    in_stack_00000148 = in_stack_00000078[3];
    in_stack_00000140 = in_stack_00000078[2];
    in_stack_00000158 = in_stack_00000078[5];
    in_stack_00000150 = in_stack_00000078[4];
    in_stack_00000168 = in_stack_00000078[7];
    in_stack_00000160 = in_stack_00000078[6];
    FUN_100d34830(&stack0x00000100);
    if (unaff_x19 == unaff_x21) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xf0) = unaff_x27;
      lVar2 = thunk_FUN_1087e422c(((ulong)(unaff_x19 - unaff_x21) >> 6) + unaff_x27,
                                  unaff_x29 + -0xf0,&UNK_10b23a190);
    }
    if (in_stack_000000e0 != '\x16') {
      FUN_100e077ec(&stack0x000000e0);
    }
    if (lVar2 == 0) {
      in_stack_00000078[0x19] = lVar6;
      in_stack_00000078[0x18] = lVar4;
      in_stack_00000078[0x1b] = lVar9;
      in_stack_00000078[0x1a] = lVar8;
      in_stack_00000078[0x1d] = lVar7;
      in_stack_00000078[0x1c] = lVar5;
      in_stack_00000078[0x1e] = lVar1;
      in_stack_00000078[0x11] = in_stack_000001b8;
      in_stack_00000078[0x10] = in_stack_000001b0;
      in_stack_00000078[0x13] = in_stack_000001c8;
      in_stack_00000078[0x12] = in_stack_000001c0;
      in_stack_00000078[0x15] = in_stack_000001d8;
      in_stack_00000078[0x14] = in_stack_000001d0;
      in_stack_00000078[0x17] = in_stack_000001e8;
      in_stack_00000078[0x16] = in_stack_000001e0;
      in_stack_00000078[9] = in_stack_00000178;
      in_stack_00000078[8] = in_stack_00000170;
      in_stack_00000078[0xb] = in_stack_00000188;
      in_stack_00000078[10] = in_stack_00000180;
      in_stack_00000078[0xd] = in_stack_00000198;
      in_stack_00000078[0xc] = in_stack_00000190;
      in_stack_00000078[0xf] = in_stack_000001a8;
      in_stack_00000078[0xe] = in_stack_000001a0;
      in_stack_00000078[1] = in_stack_00000138;
      *in_stack_00000078 = in_stack_00000130;
      in_stack_00000078[3] = in_stack_00000148;
      in_stack_00000078[2] = in_stack_00000140;
      in_stack_00000078[5] = in_stack_00000158;
      in_stack_00000078[4] = in_stack_00000150;
      in_stack_00000078[7] = in_stack_00000168;
      in_stack_00000078[6] = in_stack_00000160;
    }
    else {
      *in_stack_00000078 = -0x8000000000000000;
      in_stack_00000078[1] = lVar2;
      FUN_100e3b68c(&stack0x00000130);
    }
  }
  if ((in_stack_00000080 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000b8);
  }
  return;
}

