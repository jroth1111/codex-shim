
void FUN_101413390(void)

{
  ulong uVar1;
  byte extraout_w8;
  byte extraout_w9;
  byte extraout_w10;
  long unaff_x19;
  undefined8 *puVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x23;
  ulong *unaff_x25;
  long unaff_x29;
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
  undefined *in_stack_00000090;
  ulong in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  in_stack_00000030 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000e0);
  in_stack_00000028 = 4;
  lVar4 = ((ulong)(unaff_x19 - unaff_x20) >> 5) + 1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100e077ec();
  }
  if (*(long *)(unaff_x29 + -0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xc0));
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
      uVar5 = in_stack_00000008;
      uVar3 = in_stack_00000010;
      unaff_x23 = in_stack_00000018;
      goto joined_r0x00010141346c;
    }
    in_stack_00000090 = &UNK_108cc1e8b;
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
    uVar5 = 0x8000000000000000;
  }
  else {
    if (in_stack_00000028 == 2) {
      FUN_10042f528();
      uVar5 = in_stack_00000008;
      uVar3 = in_stack_00000010;
      unaff_x23 = in_stack_00000018;
    }
    else {
      FUN_10048f1fc(&stack0x00000008,&stack0x00000070);
      uVar5 = in_stack_00000008;
      uVar3 = in_stack_00000010;
      unaff_x23 = in_stack_00000018;
    }
joined_r0x00010141346c:
    uVar1 = uVar3;
    if (uVar5 == 0x8000000000000003) goto LAB_101413800;
    in_stack_00000008 = uVar5;
    in_stack_00000010 = uVar3;
    in_stack_00000018 = unaff_x23;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 & 0x7fffffffffffffff;
      if (uVar1 < 2) {
        if (uVar1 != 0) {
          if (((uint)uVar3 >> 8 & 1) != 0) {
            uVar1 = FUN_1088561c0(&UNK_108ca7845,0x52);
            goto LAB_101413800;
          }
          uVar3 = uVar3 & 1;
          uVar5 = 0x8000000000000001;
          goto LAB_1014136e8;
        }
        goto LAB_1014135dc;
      }
      if (uVar1 == 2) {
        uVar5 = 0x8000000000000002;
        uVar3 = uVar3 & 1;
        goto LAB_1014136e8;
      }
    }
    if ((bStack0000000000000023 & 1) != 0) {
      in_stack_00000090 = (undefined *)uVar5;
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
      if (uVar5 != 0) {
        _free(uVar3);
      }
LAB_101413800:
      *unaff_x25 = 0x8000000000000004;
      unaff_x25[1] = uVar1;
      return;
    }
    bStack0000000000000020 = bStack0000000000000020 & 1;
    bStack0000000000000021 = bStack0000000000000021 & 1;
    bStack0000000000000022 = bStack0000000000000022 & 1;
  }
LAB_1014136e8:
  *unaff_x25 = uVar5;
  unaff_x25[1] = uVar3;
  unaff_x25[2] = unaff_x23;
  *(byte *)(unaff_x25 + 3) = bStack0000000000000020;
  *(byte *)((long)unaff_x25 + 0x19) = bStack0000000000000021;
  *(byte *)((long)unaff_x25 + 0x1a) = bStack0000000000000022;
  return;
}

