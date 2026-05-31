
void FUN_10094ac7c(void)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long unaff_x19;
  long *unaff_x20;
  char *unaff_x22;
  long unaff_x25;
  long unaff_x26;
  long lVar10;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_stack_00000060;
  undefined *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_00000128;
  long in_stack_00000180;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000190,s__no_active_process_for_process_h_108adde76,&stack0x00000060);
  lVar13 = in_stack_00000198;
  lVar4 = in_stack_00000190;
  in_stack_000001a8 = 0x8000000000000005;
  if (in_stack_00000190 == -0x8000000000000000) {
    *(long *)(unaff_x19 + 0x68) = in_stack_00000198;
    if (*unaff_x22 == '\0') {
      *unaff_x22 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
    }
    FUN_1060fa678();
    *(undefined8 *)(unaff_x25 + 0x138) = 1;
    *(undefined8 *)(unaff_x25 + 0x130) = 1;
    *(undefined8 *)(unaff_x25 + 0x168) = 0x8000000000000001;
    *(undefined8 *)(unaff_x25 + 0x160) = 0;
    plVar7 = (long *)_malloc(0xa0);
    if (plVar7 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
LAB_10094b184:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10094b188);
      (*pcVar3)();
    }
    lVar4 = *(long *)(unaff_x25 + 400);
    lVar5 = *(long *)(unaff_x25 + 0x1a8);
    lVar13 = *(long *)(unaff_x25 + 0x1a0);
    plVar7[0xd] = *(long *)(unaff_x25 + 0x198);
    plVar7[0xc] = lVar4;
    plVar7[0xf] = lVar5;
    plVar7[0xe] = lVar13;
    lVar4 = *(long *)(unaff_x25 + 0x1b0);
    lVar5 = *(long *)(unaff_x25 + 0x1c8);
    lVar13 = *(long *)(unaff_x25 + 0x1c0);
    plVar7[0x11] = *(long *)(unaff_x25 + 0x1b8);
    plVar7[0x10] = lVar4;
    plVar7[0x13] = lVar5;
    plVar7[0x12] = lVar13;
    lVar4 = *(long *)(unaff_x25 + 0x150);
    lVar5 = *(long *)(unaff_x25 + 0x168);
    lVar13 = *(long *)(unaff_x25 + 0x160);
    plVar7[5] = *(long *)(unaff_x25 + 0x158);
    plVar7[4] = lVar4;
    plVar7[7] = lVar5;
    plVar7[6] = lVar13;
    lVar4 = *(long *)(unaff_x25 + 0x170);
    lVar5 = *(long *)(unaff_x25 + 0x188);
    lVar13 = *(long *)(unaff_x25 + 0x180);
    plVar7[9] = *(long *)(unaff_x25 + 0x178);
    plVar7[8] = lVar4;
    plVar7[0xb] = lVar5;
    plVar7[10] = lVar13;
    lVar4 = *(long *)(unaff_x25 + 0x130);
    lVar5 = *(long *)(unaff_x25 + 0x148);
    lVar13 = *(long *)(unaff_x25 + 0x140);
    plVar7[1] = *(long *)(unaff_x25 + 0x138);
    *plVar7 = lVar4;
    plVar7[3] = lVar5;
    plVar7[2] = lVar13;
    lVar4 = *plVar7;
    *plVar7 = lVar4 + 1;
    if (lVar4 < 0) goto LAB_10094b184;
    *(undefined1 *)(unaff_x19 + 0x79) = 1;
    *(long **)(unaff_x19 + 0x70) = plVar7;
    *(undefined2 *)(unaff_x19 + 0x7a) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 1;
    *(long **)(unaff_x19 + 0x88) = plVar7;
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x100);
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x110);
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x108);
    *(long **)(unaff_x19 + 0xb0) = (long *)(unaff_x19 + 0x68);
    *(undefined1 *)(unaff_x19 + 0x168) = 0;
    FUN_100fcd9f4(&stack0x00000190,unaff_x19 + 0x80);
    uVar8 = in_stack_000001b8;
    lVar4 = in_stack_00000190;
    if (in_stack_00000190 == 3) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar9 = 4;
      goto LAB_10094b150;
    }
    uVar12 = *(undefined8 *)(unaff_x26 + 0x10);
    uVar11 = *(undefined8 *)(unaff_x26 + 8);
    uVar15 = *(undefined8 *)(unaff_x26 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x26 + 0x18);
    FUN_100d4fb00(unaff_x19 + 0x80);
    if (lVar4 != 2) {
      *(undefined8 *)(unaff_x26 + 0xb0) = uVar12;
      *(undefined8 *)(unaff_x26 + 0xa8) = uVar11;
      uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
      *(undefined8 *)(unaff_x26 + 0xc0) = uVar15;
      *(undefined8 *)(unaff_x26 + 0xb8) = uVar14;
      *(long *)(unaff_x29 + -0xc0) = lVar4;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar8;
      *(undefined8 *)(unaff_x29 + -0x90) = uVar11;
      *(undefined8 *)(unaff_x29 + -0x88) = uVar12;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x90;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_10192bd8c;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000190,s_process_is_no_longer_running_108adde9e,unaff_x29 + -0x80);
      in_stack_000001a8 = 0x8000000000000005;
      func_0x000100caa3b0(unaff_x29 + -0xc0);
      in_stack_00000088 = *(undefined8 *)(unaff_x26 + 0x38);
      in_stack_00000080 = *(undefined8 *)(unaff_x26 + 0x30);
      in_stack_00000098 = *(undefined8 *)(unaff_x26 + 0x48);
      in_stack_00000090 = *(undefined8 *)(unaff_x26 + 0x40);
      in_stack_000000a8 = *(undefined8 *)(unaff_x26 + 0x58);
      in_stack_000000a0 = *(undefined8 *)(unaff_x26 + 0x50);
      in_stack_000000b0 = 0xffffffffffff80a8;
      in_stack_00000068 = *(undefined **)(unaff_x26 + 0x18);
      in_stack_00000060 = *(long *)(unaff_x26 + 0x10);
      in_stack_00000078 = *(undefined8 *)(unaff_x26 + 0x28);
      in_stack_00000070 = *(undefined8 *)(unaff_x26 + 0x20);
      if (in_stack_00000190 == -0x8000000000000000) goto LAB_10094ae44;
      *(undefined8 *)(unaff_x25 + 0xf8) = in_stack_00000088;
      *(undefined8 *)(unaff_x25 + 0xf0) = in_stack_00000080;
      *(undefined8 *)(unaff_x25 + 0x108) = in_stack_00000098;
      *(undefined8 *)(unaff_x25 + 0x100) = in_stack_00000090;
      *(undefined8 *)(unaff_x25 + 0x118) = in_stack_000000a8;
      *(undefined8 *)(unaff_x25 + 0x110) = in_stack_000000a0;
      *(undefined **)(unaff_x25 + 0xd8) = in_stack_00000068;
      *(long *)(unaff_x25 + 0xd0) = in_stack_00000060;
      *(undefined8 *)(unaff_x25 + 0xe8) = in_stack_00000078;
      *(undefined8 *)(unaff_x25 + 0xe0) = in_stack_00000070;
      bVar2 = *(byte *)(unaff_x19 + 0x79);
      lVar4 = in_stack_00000190;
      lVar13 = in_stack_00000198;
joined_r0x00010094b064:
      in_stack_00000180 = -0x7f58;
      if ((bVar2 & 1) != 0) {
        in_stack_00000180 = -0x7f58;
        FUN_100d5c580(unaff_x19 + 0x70);
      }
      *(undefined1 *)(unaff_x19 + 0x79) = 0;
      *(undefined1 *)(unaff_x19 + 0x7b) = 0;
      plVar7 = (long *)(unaff_x19 + 0x68);
      lVar10 = *plVar7;
      LOAcquire();
      lVar5 = *(long *)(lVar10 + 0x1f0);
      *(long *)(lVar10 + 0x1f0) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        LOAcquire();
        lVar5 = *(long *)(lVar10 + 0x88);
        *(long *)(lVar10 + 0x88) = lVar5 + 1;
        lVar5 = func_0x000100fcac10(lVar10 + 0x80,lVar5);
        *(ulong *)(lVar5 + 0x610) = *(ulong *)(lVar5 + 0x610) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar10 + 0x110);
        LOAcquire();
        uVar6 = *puVar1;
        *puVar1 = uVar6 | 2;
        LORelease();
        if (uVar6 == 0) {
          lVar5 = *(long *)(lVar10 + 0x100);
          *(undefined8 *)(lVar10 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar10 + 0x108));
          }
        }
      }
      lVar5 = *(long *)*plVar7;
      *(long *)*plVar7 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E(plVar7);
      }
      goto LAB_10094b0f8;
    }
LAB_10094ae44:
    *(undefined1 *)(unaff_x19 + 0x79) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x70);
    FUN_101401228(&stack0x00000060,unaff_x19 + 0x80);
    lVar4 = in_stack_00000060;
    if (in_stack_00000060 == -0x7ffffffffffffffe) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar9 = 5;
      goto LAB_10094b150;
    }
    *(undefined8 *)(unaff_x25 + 0x98) = in_stack_00000090;
    *(undefined8 *)(unaff_x25 + 0x90) = in_stack_00000088;
    *(undefined8 *)(unaff_x25 + 0xa8) = in_stack_000000a0;
    *(undefined8 *)(unaff_x25 + 0xa0) = in_stack_00000098;
    *(undefined8 *)(unaff_x25 + 0xb8) = *(undefined8 *)(unaff_x25 + 0x50);
    *(undefined8 *)(unaff_x25 + 0xb0) = *(undefined8 *)(unaff_x25 + 0x48);
    *(undefined8 *)(unaff_x25 + 200) = *(undefined8 *)(unaff_x25 + 0x60);
    *(undefined8 *)(unaff_x25 + 0xc0) = *(undefined8 *)(unaff_x25 + 0x58);
    *(undefined8 *)(unaff_x25 + 0x78) = in_stack_00000070;
    *(undefined **)(unaff_x25 + 0x70) = in_stack_00000068;
    *(undefined8 *)(unaff_x25 + 0x88) = in_stack_00000080;
    *(undefined8 *)(unaff_x25 + 0x80) = in_stack_00000078;
    FUN_100d5c580(unaff_x19 + 0x80);
    lVar13 = in_stack_000001a0;
    if (lVar4 == -0x7fffffffffffffff) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x19 + 0x50);
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
      in_stack_00000060 = unaff_x29 + -0xc0;
      in_stack_00000068 = &DAT_10192bd8c;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000198,s_process_is_no_longer_running_108adde9e,&stack0x00000060);
      in_stack_000001b0 = 0x8000000000000005;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x26 + 0x50);
      uVar11 = *(undefined8 *)(unaff_x26 + 0x48);
      *(undefined8 *)(unaff_x25 + 0xf8) = *(undefined8 *)(unaff_x26 + 0x40);
      *(undefined8 *)(unaff_x25 + 0xf0) = uVar8;
      *(undefined8 *)(unaff_x25 + 0x108) = uVar12;
      *(undefined8 *)(unaff_x25 + 0x100) = uVar11;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x58);
      *(undefined8 *)(unaff_x25 + 0x118) = *(undefined8 *)(unaff_x26 + 0x60);
      *(undefined8 *)(unaff_x25 + 0x110) = uVar8;
      uVar11 = *(undefined8 *)(unaff_x26 + 0x30);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
      *(undefined8 *)(unaff_x25 + 0xd8) = *(undefined8 *)(unaff_x26 + 0x20);
      *(undefined8 *)(unaff_x25 + 0xd0) = uVar12;
      *(undefined8 *)(unaff_x25 + 0xe8) = uVar11;
      *(undefined8 *)(unaff_x25 + 0xe0) = uVar8;
      bVar2 = *(byte *)(unaff_x19 + 0x79);
      lVar4 = in_stack_00000198;
      lVar13 = in_stack_000001a0;
      goto joined_r0x00010094b064;
    }
    uVar8 = *(undefined8 *)(unaff_x25 + 0x70);
    *(undefined8 *)(unaff_x26 + 0x18) = *(undefined8 *)(unaff_x25 + 0x78);
    *(undefined8 *)(unaff_x26 + 0x10) = uVar8;
    *(undefined8 *)(unaff_x25 + 0xf8) = *(undefined8 *)(unaff_x25 + 0xa0);
    *(undefined8 *)(unaff_x25 + 0xf0) = *(undefined8 *)(unaff_x25 + 0x98);
    *(undefined8 *)(unaff_x25 + 0x108) = *(undefined8 *)(unaff_x25 + 0xb0);
    *(undefined8 *)(unaff_x25 + 0x100) = *(undefined8 *)(unaff_x25 + 0xa8);
    *(undefined8 *)(unaff_x25 + 0x118) = *(undefined8 *)(unaff_x25 + 0xc0);
    *(undefined8 *)(unaff_x25 + 0x110) = *(undefined8 *)(unaff_x25 + 0xb8);
    in_stack_00000180 = in_stack_00000128;
    *(undefined8 *)(unaff_x25 + 0xd8) = *(undefined8 *)(unaff_x25 + 0x80);
    *(undefined8 *)(unaff_x25 + 0xd0) = *(undefined8 *)(unaff_x25 + 0x78);
    *(undefined8 *)(unaff_x25 + 0xe8) = *(undefined8 *)(unaff_x25 + 0x90);
    *(undefined8 *)(unaff_x25 + 0xe0) = *(undefined8 *)(unaff_x25 + 0x88);
    *(undefined1 *)(unaff_x19 + 0x79) = 0;
    *(undefined1 *)(unaff_x19 + 0x7b) = 0;
    plVar7 = (long *)(unaff_x19 + 0x68);
    lVar10 = *plVar7;
    LOAcquire();
    lVar5 = *(long *)(lVar10 + 0x1f0);
    *(long *)(lVar10 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar10 + 0x88);
      *(long *)(lVar10 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcac10(lVar10 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x610) = *(ulong *)(lVar5 + 0x610) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar10 + 0x110);
      LOAcquire();
      uVar6 = *puVar1;
      *puVar1 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar5 = *(long *)(lVar10 + 0x100);
        *(undefined8 *)(lVar10 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar10 + 0x108));
        }
      }
    }
    lVar5 = *(long *)*plVar7;
    *(long *)*plVar7 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E(plVar7);
    }
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
      goto LAB_10094b120;
    }
  }
  else {
    *(undefined8 *)(unaff_x25 + 0xf8) = *(undefined8 *)(unaff_x25 + 0x168);
    *(undefined8 *)(unaff_x25 + 0xf0) = *(undefined8 *)(unaff_x25 + 0x160);
    *(undefined8 *)(unaff_x25 + 0x108) = *(undefined8 *)(unaff_x25 + 0x178);
    *(undefined8 *)(unaff_x25 + 0x100) = *(undefined8 *)(unaff_x25 + 0x170);
    *(undefined8 *)(unaff_x25 + 0x118) = *(undefined8 *)(unaff_x25 + 0x188);
    *(undefined8 *)(unaff_x25 + 0x110) = *(undefined8 *)(unaff_x25 + 0x180);
    in_stack_00000180 = -0x7f58;
    *(undefined8 *)(unaff_x25 + 0xd8) = *(undefined8 *)(unaff_x25 + 0x148);
    *(undefined8 *)(unaff_x25 + 0xd0) = *(undefined8 *)(unaff_x25 + 0x140);
    *(undefined8 *)(unaff_x25 + 0xe8) = *(undefined8 *)(unaff_x25 + 0x158);
    *(undefined8 *)(unaff_x25 + 0xe0) = *(undefined8 *)(unaff_x25 + 0x150);
    if (*unaff_x22 == '\0') {
      *unaff_x22 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
    }
    FUN_1060fa678();
LAB_10094b0f8:
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if (((*(byte *)(unaff_x19 + 0x7a) & 1) != 0) && (0 < *(long *)(unaff_x19 + 0xf8))) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
LAB_10094b120:
      _free(uVar8);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x7a) = 0;
  *unaff_x20 = lVar4;
  unaff_x20[1] = lVar13;
  lVar4 = *(long *)(unaff_x25 + 0xf0);
  lVar5 = *(long *)(unaff_x25 + 0x108);
  lVar13 = *(long *)(unaff_x25 + 0x100);
  unaff_x20[7] = *(long *)(unaff_x25 + 0xf8);
  unaff_x20[6] = lVar4;
  unaff_x20[9] = lVar5;
  unaff_x20[8] = lVar13;
  lVar4 = *(long *)(unaff_x25 + 0x110);
  unaff_x20[0xb] = *(long *)(unaff_x25 + 0x118);
  unaff_x20[10] = lVar4;
  unaff_x20[0xc] = in_stack_00000180;
  lVar4 = *(long *)(unaff_x25 + 0xd0);
  lVar5 = *(long *)(unaff_x25 + 0xe8);
  lVar13 = *(long *)(unaff_x25 + 0xe0);
  uVar9 = 1;
  unaff_x20[3] = *(long *)(unaff_x25 + 0xd8);
  unaff_x20[2] = lVar4;
  unaff_x20[5] = lVar5;
  unaff_x20[4] = lVar13;
LAB_10094b150:
  *(undefined1 *)(unaff_x19 + 0x78) = uVar9;
  return;
}

