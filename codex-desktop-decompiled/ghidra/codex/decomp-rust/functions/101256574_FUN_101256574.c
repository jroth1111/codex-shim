
/* WARNING: Removing unreachable block (ram,0x000101256468) */
/* WARNING: Removing unreachable block (ram,0x0001012564a0) */
/* WARNING: Removing unreachable block (ram,0x0001012564b4) */
/* WARNING: Removing unreachable block (ram,0x0001012564bc) */
/* WARNING: Removing unreachable block (ram,0x0001012564a8) */
/* WARNING: Removing unreachable block (ram,0x0001012564c8) */
/* WARNING: Removing unreachable block (ram,0x0001012564cc) */

void FUN_101256574(void)

{
  uint uVar1;
  long lVar2;
  uint unaff_w19;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  uint unaff_w25;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000090;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
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
  
  lVar2 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x20 = 3;
  unaff_x20[1] = lVar2;
  if (in_stack_000000e0 != 0) {
    puVar4 = (undefined8 *)(in_stack_000000d8 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      in_stack_000000e0 = in_stack_000000e0 + -1;
    } while (in_stack_000000e0 != 0);
  }
  if (in_stack_000000d0 != 0) {
    _free(in_stack_000000d8);
  }
  if (((in_stack_000000b8 & 1) != 0) && (in_stack_00000090 != 0)) {
    func_0x000100d12d04(unaff_x29 + -0xf8);
  }
  if ((in_stack_000000c0 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  else {
    _free(in_stack_00000038);
    uVar1 = 0;
    if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000040);
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
    lVar2 = unaff_x20[0x14];
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
      lVar3 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = unaff_x28;
      lVar3 = FUN_1087e422c(((ulong)(in_stack_000000c8 - unaff_x22) >> 6) + unaff_x28,
                            unaff_x29 + -0xc0,&UNK_10b23a190);
    }
    if (in_stack_00000100 != '\x16') {
      FUN_100e077ec(&stack0x00000100);
    }
    if (lVar3 == 0) {
      unaff_x20[0x11] = in_stack_000001d8;
      unaff_x20[0x10] = in_stack_000001d0;
      unaff_x20[0x13] = in_stack_000001e8;
      unaff_x20[0x12] = in_stack_000001e0;
      unaff_x20[0x14] = lVar2;
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
      unaff_x20[1] = lVar3;
      FUN_100e659a4(&stack0x00000150);
    }
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000b0);
  }
  return;
}

