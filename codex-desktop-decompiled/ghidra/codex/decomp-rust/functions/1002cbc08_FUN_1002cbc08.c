
void FUN_1002cbc08(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x1;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x11;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  ulong extraout_x17;
  long *unaff_x19;
  undefined8 uVar11;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar12;
  undefined8 unaff_x23;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x29;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_Hinternal_error__entered_unreach_108ac8b8e,&stack0x000000a0,&UNK_10b1f61f8);
  thunk_FUN_1087d5474(unaff_x21 + 0x10,extraout_x1,0x19,1,1);
  lVar4 = *(long *)(unaff_x21 + 0x20);
  puVar1 = (undefined8 *)(*(long *)(unaff_x21 + 0x18) + lVar4);
  puVar1[1] = 0x6e6f432030303120;
  *puVar1 = 0x312e312f50545448;
  *(undefined8 *)((long)puVar1 + 0x11) = 0xa0d0a0d65756e69;
  *(undefined8 *)((long)puVar1 + 9) = 0x746e6f4320303031;
  *(long *)(unaff_x21 + 0x20) = lVar4 + 0x19;
  lVar6 = unaff_x29 + -0x68;
  uVar15 = *(ulong *)(unaff_x21 + 0x140);
  lVar4 = uVar15 - 2;
  if (uVar15 < 2) {
    lVar4 = 1;
  }
  if ((lVar4 == 0) || (lVar4 != 1)) {
LAB_1002cb868:
    uVar10 = *(undefined8 *)(unaff_x21 + 0x148);
    uVar11 = *(undefined8 *)(unaff_x21 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x21 + 0x158);
    uVar7 = *(undefined8 *)(unaff_x21 + 0x160);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x168);
    lVar2 = *(long *)(unaff_x21 + 0x170);
    unaff_x22 = *(ulong *)(unaff_x21 + 0x178);
    uVar12 = *(ulong *)(unaff_x21 + 0x180);
    uVar5 = *(ulong *)(unaff_x21 + 0x188);
    uVar13 = *(undefined8 *)(unaff_x21 + 400);
    uVar9 = *(undefined1 *)(unaff_x21 + 0x198);
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x21 + 0x199);
    *(undefined4 *)(lVar6 + 3) = *(undefined4 *)(unaff_x21 + 0x19c);
    lVar4 = *unaff_x25;
    if (lVar4 != 1) goto LAB_1002cb914;
LAB_1002cb91c:
    if ((*(ulong *)(unaff_x21 + 0x140) < 2) && (*(long *)(unaff_x21 + 0x170) != 0)) {
      plVar3 = *(long **)(unaff_x21 + 0x188);
      if (((ulong)plVar3 & 1) == 0) {
        lVar4 = plVar3[4];
        plVar3[4] = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          if (*plVar3 != 0) {
            _free(plVar3[1]);
          }
          goto LAB_1002cb9a8;
        }
      }
      else if (*(long *)(unaff_x21 + 0x180) + ((ulong)plVar3 >> 5) != 0) {
        plVar3 = (long *)(*(long *)(unaff_x21 + 0x170) - ((ulong)plVar3 >> 5));
LAB_1002cb9a8:
        _free(plVar3);
        lVar6 = unaff_x29 + -0x68;
      }
    }
  }
  else {
    uVar9 = *(undefined1 *)(unaff_x21 + 0x198);
    uVar7 = *(undefined8 *)(unaff_x21 + 0x160);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x168);
    lVar4 = *(long *)(unaff_x21 + 0x170);
    if (lVar4 == 0) {
      lVar2 = 0;
      uVar5 = extraout_x17;
    }
    else {
      unaff_x22 = *(ulong *)(unaff_x21 + 0x178);
      if (unaff_x22 == 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = _malloc(unaff_x22);
        if (lVar2 == 0) {
          FUN_107c03c64(1,unaff_x22);
          lVar6 = extraout_x11;
          goto LAB_1002cb868;
        }
      }
      _memcpy(lVar2,lVar4,unaff_x22);
      uVar5 = 0x40 - LZCOUNT(unaff_x22 >> 10);
      if (6 < uVar5) {
        uVar5 = 7;
      }
      uVar5 = uVar5 << 2 | 1;
    }
    lVar6 = unaff_x29 + -0x68;
    uVar13 = *(undefined8 *)(unaff_x21 + 400);
    uVar15 = uVar15 & 1;
    uVar10 = *(undefined8 *)(unaff_x21 + 0x148);
    uVar11 = *(undefined8 *)(unaff_x21 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x21 + 0x158);
    lVar4 = *unaff_x25;
    uVar12 = unaff_x22;
    if (lVar4 == 1) goto LAB_1002cb91c;
LAB_1002cb914:
    if (lVar4 == 2) goto LAB_1002cb91c;
  }
  *(undefined8 *)(unaff_x21 + 0x138) = 2;
  *(ulong *)(unaff_x21 + 0x140) = uVar15;
  *(undefined8 *)(unaff_x21 + 0x148) = uVar10;
  *(undefined8 *)(unaff_x21 + 0x150) = uVar11;
  *(undefined8 *)(unaff_x21 + 0x158) = uVar14;
  *(undefined8 *)(unaff_x21 + 0x160) = uVar7;
  *(undefined8 *)(unaff_x21 + 0x168) = uVar8;
  *(long *)(unaff_x21 + 0x170) = lVar2;
  *(ulong *)(unaff_x21 + 0x178) = unaff_x22;
  *(ulong *)(unaff_x21 + 0x180) = uVar12;
  *(ulong *)(unaff_x21 + 0x188) = uVar5;
  *(undefined8 *)(unaff_x21 + 400) = uVar13;
  *(undefined1 *)(unaff_x21 + 0x198) = uVar9;
  *(undefined4 *)(unaff_x21 + 0x199) = *(undefined4 *)(unaff_x29 + -0x68);
  *(undefined4 *)(unaff_x21 + 0x19c) = *(undefined4 *)(lVar6 + 3);
  FUN_1002cbedc(&stack0x00000040,unaff_x21 + 0x140,unaff_x23);
  if (in_stack_00000040 == 5) {
    *unaff_x19 = 6;
    return;
  }
  in_stack_000000a8 = in_stack_00000048;
  if (in_stack_00000040 == 4) {
LAB_1002cbaa8:
    *(long *)(unaff_x29 + -0x98) = in_stack_00000078;
    *(long *)(unaff_x29 + -0xa0) = in_stack_00000070;
    *(long *)(unaff_x29 + -0x88) = in_stack_00000088;
    *(long *)(unaff_x29 + -0x90) = in_stack_00000080;
    *(long *)(unaff_x29 + -0x78) = in_stack_00000098;
    *(long *)(unaff_x29 + -0x80) = in_stack_00000090;
    *(long *)(unaff_x29 + -0xb8) = in_stack_00000058;
    *(long *)(unaff_x29 + -0xc0) = in_stack_00000050;
    *(long *)(unaff_x29 + -0xa8) = in_stack_00000068;
    *(long *)(unaff_x29 + -0xb0) = in_stack_00000060;
    lVar4 = 4;
    in_stack_000000a0 = in_stack_00000040;
  }
  else {
    in_stack_000000a0 = in_stack_00000040;
    in_stack_000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    in_stack_000000e8 = in_stack_00000088;
    in_stack_000000e0 = in_stack_00000080;
    in_stack_000000f8 = in_stack_00000098;
    in_stack_000000f0 = in_stack_00000090;
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000b0 = in_stack_00000050;
    in_stack_000000c8 = in_stack_00000068;
    in_stack_000000c0 = in_stack_00000060;
    if (in_stack_00000040 != 3) goto LAB_1002cbaa8;
    lVar4 = *(ulong *)(unaff_x21 + 0x140) - 2;
    if (*(ulong *)(unaff_x21 + 0x140) < 2) {
      lVar4 = 1;
    }
    if (lVar4 == 0) {
      if (*(long *)(unaff_x21 + 0x148) == 0) goto LAB_1002cba7c;
LAB_1002cbbbc:
      if (in_stack_00000058 != 0) goto LAB_1002cbb7c;
      lVar4 = 4;
LAB_1002cbbdc:
      (**(code **)(in_stack_00000048 + 0x20))(&stack0x000000c0,in_stack_00000050,0);
      in_stack_000000a8 = extraout_x8;
      in_stack_000000a0 = 5;
    }
    else {
      if (lVar4 != 1) {
        if ((*(byte *)(unaff_x21 + 0x148) & 1) != 0) goto LAB_1002cba7c;
        goto LAB_1002cbbbc;
      }
      if (*(char *)(unaff_x21 + 0x198) != '\f') goto LAB_1002cbbbc;
LAB_1002cba7c:
      if (in_stack_00000058 == 0) {
        lVar4 = 3;
        goto LAB_1002cbbdc;
      }
      *(long *)(unaff_x29 + -0x98) = in_stack_00000078;
      *(long *)(unaff_x29 + -0xa0) = in_stack_00000070;
      *(long *)(unaff_x29 + -0x88) = in_stack_00000088;
      *(long *)(unaff_x29 + -0x90) = in_stack_00000080;
      *(long *)(unaff_x29 + -0x78) = in_stack_00000098;
      *(long *)(unaff_x29 + -0x80) = in_stack_00000090;
      *(long *)(unaff_x29 + -0xb8) = in_stack_00000058;
      *(long *)(unaff_x29 + -0xc0) = in_stack_00000050;
      *(long *)(unaff_x29 + -0xa8) = in_stack_00000068;
      *(long *)(unaff_x29 + -0xb0) = in_stack_00000060;
      lVar4 = 3;
      in_stack_000000a0 = 3;
    }
  }
  in_stack_000000d8 = *(long *)(unaff_x29 + -0x98);
  in_stack_000000d0 = *(long *)(unaff_x29 + -0xa0);
  in_stack_000000e8 = *(long *)(unaff_x29 + -0x88);
  in_stack_000000e0 = *(long *)(unaff_x29 + -0x90);
  in_stack_000000f8 = *(long *)(unaff_x29 + -0x78);
  in_stack_000000f0 = *(long *)(unaff_x29 + -0x80);
  in_stack_000000b8 = *(long *)(unaff_x29 + -0xb8);
  in_stack_000000b0 = *(long *)(unaff_x29 + -0xc0);
  in_stack_000000c8 = *(long *)(unaff_x29 + -0xa8);
  in_stack_000000c0 = *(long *)(unaff_x29 + -0xb0);
  if ((((*unaff_x25 == 1) || (*unaff_x25 == 2)) && (*(ulong *)(unaff_x21 + 0x140) < 2)) &&
     (*(long *)(unaff_x21 + 0x170) != 0)) {
    plVar3 = *(long **)(unaff_x21 + 0x188);
    if (((ulong)plVar3 & 1) == 0) {
      lVar6 = plVar3[4];
      plVar3[4] = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        if (*plVar3 != 0) {
          _free(plVar3[1]);
        }
        goto LAB_1002cbb60;
      }
    }
    else if (*(long *)(unaff_x21 + 0x180) + ((ulong)plVar3 >> 5) != 0) {
      plVar3 = (long *)(*(long *)(unaff_x21 + 0x170) - ((ulong)plVar3 >> 5));
LAB_1002cbb60:
      _free(plVar3);
    }
  }
  *unaff_x25 = lVar4;
  FUN_1002cbdd8(unaff_x21 + 0xb8);
  FUN_1002cb67c();
LAB_1002cbb7c:
  unaff_x19[5] = in_stack_000000c8;
  unaff_x19[4] = in_stack_000000c0;
  unaff_x19[7] = in_stack_000000d8;
  unaff_x19[6] = in_stack_000000d0;
  unaff_x19[9] = in_stack_000000e8;
  unaff_x19[8] = in_stack_000000e0;
  unaff_x19[0xb] = in_stack_000000f8;
  unaff_x19[10] = in_stack_000000f0;
  unaff_x19[1] = in_stack_000000a8;
  *unaff_x19 = in_stack_000000a0;
  unaff_x19[3] = in_stack_000000b8;
  unaff_x19[2] = in_stack_000000b0;
  return;
}

