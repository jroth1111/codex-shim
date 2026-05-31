
void FUN_101413850(void)

{
  ulong uVar1;
  byte extraout_w8;
  byte extraout_w9;
  byte extraout_w10;
  byte unaff_w19;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x23;
  long unaff_x29;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  byte bStack0000000000000020;
  byte bStack0000000000000021;
  byte bStack0000000000000022;
  byte bStack0000000000000023;
  byte in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  char cStack0000000000000090;
  ulong in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  in_stack_00000030 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  in_stack_00000028 = unaff_w19;
  FUN_100d03040(&stack0x00000108);
  FUN_100d34830(&stack0x000000b0);
  if (cStack0000000000000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  uVar1 = in_stack_00000030;
  if (in_stack_00000028 == 4) goto LAB_101413800;
  in_stack_00000080 = in_stack_00000040;
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000088 = in_stack_00000048;
  in_stack_00000070 = in_stack_00000030;
  if (in_stack_00000028 < 2) {
    if (in_stack_00000028 != 0) {
      FUN_100460e30(&stack0x00000008,&stack0x00000070);
      uVar4 = in_stack_00000008;
      uVar3 = in_stack_00000010;
      unaff_x23 = in_stack_00000018;
      goto joined_r0x00010141346c;
    }
    _cStack0000000000000090 = &UNK_108cc1e8b;
    in_stack_00000098 = 0x18;
    in_stack_000000a0 = &UNK_108cdc820;
    in_stack_000000a8 = 0x10;
    uVar1 = FUN_100490e6c(&stack0x00000070,&stack0x00000090);
    if (uVar1 != 0) goto LAB_101413800;
    uVar3 = 0;
    bStack0000000000000020 = extraout_w8;
    bStack0000000000000021 = extraout_w9;
    bStack0000000000000022 = extraout_w10;
LAB_1014135dc:
    uVar4 = 0x8000000000000000;
  }
  else {
    if (in_stack_00000028 == 2) {
      FUN_10042f528();
      uVar4 = in_stack_00000008;
      uVar3 = in_stack_00000010;
      unaff_x23 = in_stack_00000018;
    }
    else {
      FUN_10048f1fc(&stack0x00000008,&stack0x00000070);
      uVar4 = in_stack_00000008;
      uVar3 = in_stack_00000010;
      unaff_x23 = in_stack_00000018;
    }
joined_r0x00010141346c:
    uVar1 = uVar3;
    if (uVar4 == 0x8000000000000003) goto LAB_101413800;
    in_stack_00000008 = uVar4;
    in_stack_00000010 = uVar3;
    in_stack_00000018 = unaff_x23;
    if ((long)uVar4 < 0) {
      uVar1 = uVar4 & 0x7fffffffffffffff;
      if (uVar1 < 2) {
        if (uVar1 != 0) {
          if (((uint)uVar3 >> 8 & 1) != 0) {
            uVar1 = FUN_1088561c0(&UNK_108ca7845,0x52);
            goto LAB_101413800;
          }
          uVar3 = uVar3 & 1;
          uVar4 = 0x8000000000000001;
          goto LAB_1014136e8;
        }
        goto LAB_1014135dc;
      }
      if (uVar1 == 2) {
        uVar4 = 0x8000000000000002;
        uVar3 = uVar3 & 1;
        goto LAB_1014136e8;
      }
    }
    if ((bStack0000000000000023 & 1) != 0) {
      _cStack0000000000000090 = (undefined *)uVar4;
      in_stack_00000098 = uVar3;
      in_stack_000000a0 = (undefined *)unaff_x23;
      uVar1 = FUN_1088561c0(&UNK_108ca7897,0x60);
      if (unaff_x23 != 0) {
        puVar2 = (undefined8 *)(uVar3 + 8);
        do {
          if (puVar2[-1] != 0) {
            _free(*puVar2);
          }
          puVar2 = puVar2 + 3;
          unaff_x23 = unaff_x23 - 1;
        } while (unaff_x23 != 0);
      }
      if (uVar4 != 0) {
        _free(uVar3);
      }
LAB_101413800:
      *in_stack_00000000 = 0x8000000000000004;
      in_stack_00000000[1] = uVar1;
      return;
    }
    bStack0000000000000020 = bStack0000000000000020 & 1;
    bStack0000000000000021 = bStack0000000000000021 & 1;
    bStack0000000000000022 = bStack0000000000000022 & 1;
  }
LAB_1014136e8:
  *in_stack_00000000 = uVar4;
  in_stack_00000000[1] = uVar3;
  in_stack_00000000[2] = unaff_x23;
  *(byte *)(in_stack_00000000 + 3) = bStack0000000000000020;
  *(byte *)((long)in_stack_00000000 + 0x19) = bStack0000000000000021;
  *(byte *)((long)in_stack_00000000 + 0x1a) = bStack0000000000000022;
  return;
}

