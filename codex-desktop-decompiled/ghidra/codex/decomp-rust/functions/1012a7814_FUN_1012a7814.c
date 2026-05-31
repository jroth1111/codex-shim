
/* WARNING: Type propagation algorithm not settling */

void FUN_1012a7814(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  long unaff_x21;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_000000b8;
  long *in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
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
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  if (in_stack_000000d0 != -0x8000000000000000) {
    if (unaff_x27 != 0) {
      puVar4 = (undefined8 *)(in_stack_000000b8 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (in_stack_000000d0 != 0) {
      _free(in_stack_000000b8);
    }
  }
  if ((in_stack_000000c8 != 0x8000000000000001) && ((in_stack_000000c8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000e0 & 0x7fffffffffffffff) == 0) {
    lVar2 = *in_stack_000000c0;
  }
  else {
    _free(in_stack_00000048);
    lVar2 = *in_stack_000000c0;
  }
  if (lVar2 == 2) {
    FUN_100d34830(&stack0x00000110);
    if (in_stack_000000f0 != '\x16') {
      FUN_100e077ec(&stack0x000000f0);
    }
  }
  else {
    in_stack_000001a8 = in_stack_000000c0[0xd];
    in_stack_000001a0 = in_stack_000000c0[0xc];
    in_stack_000001b8 = in_stack_000000c0[0xf];
    in_stack_000001b0 = in_stack_000000c0[0xe];
    in_stack_000001c8 = in_stack_000000c0[0x11];
    in_stack_000001c0 = in_stack_000000c0[0x10];
    in_stack_000001d0 = in_stack_000000c0[0x12];
    in_stack_00000168 = in_stack_000000c0[5];
    in_stack_00000160 = in_stack_000000c0[4];
    in_stack_00000178 = in_stack_000000c0[7];
    in_stack_00000170 = in_stack_000000c0[6];
    in_stack_00000188 = in_stack_000000c0[9];
    in_stack_00000180 = in_stack_000000c0[8];
    in_stack_00000198 = in_stack_000000c0[0xb];
    in_stack_00000190 = in_stack_000000c0[10];
    in_stack_00000148 = in_stack_000000c0[1];
    in_stack_00000140 = *in_stack_000000c0;
    in_stack_00000158 = in_stack_000000c0[3];
    in_stack_00000150 = in_stack_000000c0[2];
    FUN_100d34830(&stack0x00000110);
    if (in_stack_000000e8 == unaff_x19) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x90) = unaff_x21 + 1;
      lVar2 = FUN_1087e422c(((ulong)(in_stack_000000e8 - unaff_x19) >> 6) + unaff_x21 + 1,
                            unaff_x29 + -0x90,&UNK_10b23a190);
    }
    if (in_stack_000000f0 != '\x16') {
      FUN_100e077ec(&stack0x000000f0);
    }
    if (lVar2 == 0) {
      in_stack_000000c0[0xd] = in_stack_000001a8;
      in_stack_000000c0[0xc] = in_stack_000001a0;
      in_stack_000000c0[0xf] = in_stack_000001b8;
      in_stack_000000c0[0xe] = in_stack_000001b0;
      in_stack_000000c0[0x11] = in_stack_000001c8;
      in_stack_000000c0[0x10] = in_stack_000001c0;
      in_stack_000000c0[0x12] = in_stack_000001d0;
      in_stack_000000c0[5] = in_stack_00000168;
      in_stack_000000c0[4] = in_stack_00000160;
      in_stack_000000c0[7] = in_stack_00000178;
      in_stack_000000c0[6] = in_stack_00000170;
      in_stack_000000c0[9] = in_stack_00000188;
      in_stack_000000c0[8] = in_stack_00000180;
      in_stack_000000c0[0xb] = in_stack_00000198;
      in_stack_000000c0[10] = in_stack_00000190;
      in_stack_000000c0[1] = in_stack_00000148;
      *in_stack_000000c0 = in_stack_00000140;
      in_stack_000000c0[3] = in_stack_00000158;
      in_stack_000000c0[2] = in_stack_00000150;
    }
    else {
      *in_stack_000000c0 = 2;
      in_stack_000000c0[1] = lVar2;
      if (in_stack_00000160 != 0) {
        _free(in_stack_00000168);
      }
      if (in_stack_00000178 != 0) {
        _free(in_stack_00000180);
      }
      if ((in_stack_000001a8 != -0x8000000000000000) && (in_stack_000001a8 != 0)) {
        _free(in_stack_000001b0);
      }
      lVar2 = in_stack_00000198;
      if (in_stack_000001a0 != 0) {
        puVar4 = (undefined8 *)(in_stack_00000198 + 8);
        lVar3 = in_stack_000001a0;
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (in_stack_00000190 != 0) {
        _free(lVar2);
      }
    }
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000058);
  }
  return;
}

