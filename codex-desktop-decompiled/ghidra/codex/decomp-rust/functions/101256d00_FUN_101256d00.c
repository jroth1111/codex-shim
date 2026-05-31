
void FUN_101256d00(void)

{
  long lVar1;
  ulong in_x10;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000c8;
  char in_stack_00000100;
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
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  
  lVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *unaff_x20 = 3;
  unaff_x20[1] = lVar1;
  if (((in_stack_000000b8 & 1) != 0) && (in_stack_00000090 != 0)) {
    func_0x000100d12d04(unaff_x29 + -0xf8);
  }
  if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_000001f8 != -0x8000000000000000) {
    if (in_stack_00000208 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000200 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        in_stack_00000208 = in_stack_00000208 + -1;
      } while (in_stack_00000208 != 0);
    }
    if (in_stack_000001f8 != 0) {
      _free(in_stack_00000200);
    }
  }
  if (*unaff_x20 == 3) {
    FUN_100d34830(&stack0x00000120);
    if (in_stack_00000100 != '\x16') {
      FUN_100e077ec(&stack0x00000100);
    }
  }
  else {
    in_stack_000001d8 = unaff_x20[0x11];
    in_stack_000001d0 = unaff_x20[0x10];
    in_stack_000001e8 = unaff_x20[0x13];
    in_stack_000001e0 = unaff_x20[0x12];
    lVar1 = unaff_x20[0x14];
    in_stack_00000198 = unaff_x20[9];
    in_stack_00000190 = unaff_x20[8];
    in_stack_000001a8 = unaff_x20[0xb];
    in_stack_000001a0 = unaff_x20[10];
    in_stack_000001b8 = unaff_x20[0xd];
    in_stack_000001b0 = unaff_x20[0xc];
    in_stack_000001c8 = unaff_x20[0xf];
    in_stack_000001c0 = unaff_x20[0xe];
    in_stack_00000158 = unaff_x20[1];
    in_stack_00000150 = *unaff_x20;
    in_stack_00000168 = unaff_x20[3];
    in_stack_00000160 = unaff_x20[2];
    in_stack_00000178 = unaff_x20[5];
    in_stack_00000170 = unaff_x20[4];
    in_stack_00000188 = unaff_x20[7];
    in_stack_00000180 = unaff_x20[6];
    FUN_100d34830(&stack0x00000120);
    if (in_stack_000000c8 == unaff_x22) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = unaff_x28;
      lVar2 = FUN_1087e422c(((ulong)(in_stack_000000c8 - unaff_x22) >> 6) + unaff_x28,
                            unaff_x29 + -0xc0,&UNK_10b23a190);
    }
    if (in_stack_00000100 != '\x16') {
      FUN_100e077ec(&stack0x00000100);
    }
    if (lVar2 == 0) {
      unaff_x20[0x11] = in_stack_000001d8;
      unaff_x20[0x10] = in_stack_000001d0;
      unaff_x20[0x13] = in_stack_000001e8;
      unaff_x20[0x12] = in_stack_000001e0;
      unaff_x20[0x14] = lVar1;
      unaff_x20[9] = in_stack_00000198;
      unaff_x20[8] = in_stack_00000190;
      unaff_x20[0xb] = in_stack_000001a8;
      unaff_x20[10] = in_stack_000001a0;
      unaff_x20[0xd] = in_stack_000001b8;
      unaff_x20[0xc] = in_stack_000001b0;
      unaff_x20[0xf] = in_stack_000001c8;
      unaff_x20[0xe] = in_stack_000001c0;
      unaff_x20[1] = in_stack_00000158;
      *unaff_x20 = in_stack_00000150;
      unaff_x20[3] = in_stack_00000168;
      unaff_x20[2] = in_stack_00000160;
      unaff_x20[5] = in_stack_00000178;
      unaff_x20[4] = in_stack_00000170;
      unaff_x20[7] = in_stack_00000188;
      unaff_x20[6] = in_stack_00000180;
    }
    else {
      *unaff_x20 = 3;
      unaff_x20[1] = lVar2;
      FUN_100e659a4(&stack0x00000150);
    }
  }
  if ((in_stack_00000098._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000b0);
  }
  return;
}

