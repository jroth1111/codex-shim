
undefined8 FUN_101196ecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x19;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000008;
  long in_stack_000027a0;
  undefined8 in_stack_000027a8;
  undefined8 in_stack_000027b0;
  undefined8 in_stack_000027b8;
  undefined8 in_stack_000027c0;
  undefined8 in_stack_000027c8;
  undefined8 in_stack_000027d0;
  undefined8 in_stack_000027d8;
  undefined8 in_stack_000027e0;
  undefined8 in_stack_000027e8;
  undefined8 in_stack_000027f0;
  undefined8 in_stack_000027f8;
  undefined8 in_stack_00002800;
  undefined8 in_stack_00004f30;
  undefined8 in_stack_00004f38;
  undefined8 in_stack_00004f40;
  undefined8 in_stack_000075d0;
  undefined8 in_stack_000075d8;
  undefined8 in_stack_000075e0;
  undefined8 in_stack_000075e8;
  undefined8 in_stack_000075f0;
  undefined8 in_stack_000075f8;
  undefined8 in_stack_00007600;
  undefined8 in_stack_00007608;
  undefined8 in_stack_00007610;
  undefined8 in_stack_00007618;
  undefined8 in_stack_00007620;
  undefined8 in_stack_00007628;
  undefined8 in_stack_00007630;
  undefined8 in_stack_00007638;
  undefined8 in_stack_00007640;
  undefined8 in_stack_00007648;
  undefined8 in_stack_00007650;
  undefined8 in_stack_00007658;
  undefined8 in_stack_00007660;
  
  uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                    (unaff_x29 + -0xd0,param_2,s__108ade8cb,unaff_x29 + -0x70);
  if ((uVar4 & 1) != 0) {
    func_0x000108a07a3c(&UNK_108cc3daa,0x37,unaff_x29 + -0x70,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011974e0);
    (*pcVar2)();
  }
  unaff_x26[7] = 0;
  _memcpy(&stack0x000027a0,&stack0x00004f48,0x2548);
  _memcpy(&stack0x00004d00,&stack0x00007490,0x140);
  *(undefined4 *)(unaff_x26 + 3) = 0;
  _memcpy(&stack0x00007710,&stack0x000027a0,0x26c8);
  _memcpy(unaff_x19 + 0x4f60,&stack0x00007710,0x26c8);
  *(undefined8 *)(unaff_x19 + 0x7640) = in_stack_00004f38;
  *(undefined8 *)(unaff_x19 + 0x7638) = in_stack_00004f30;
  *(undefined8 *)(unaff_x19 + 0x76b8) = in_stack_00007638;
  *(undefined8 *)(unaff_x19 + 0x76b0) = in_stack_00007630;
  *(undefined8 *)(unaff_x19 + 0x76c8) = in_stack_00007648;
  *(undefined8 *)(unaff_x19 + 0x76c0) = in_stack_00007640;
  *(undefined8 *)(unaff_x19 + 0x76d8) = in_stack_00007658;
  *(undefined8 *)(unaff_x19 + 0x76d0) = in_stack_00007650;
  *(undefined8 *)(unaff_x19 + 0x7678) = in_stack_000075f8;
  *(undefined8 *)(unaff_x19 + 0x7670) = in_stack_000075f0;
  *(undefined8 *)(unaff_x19 + 0x7688) = in_stack_00007608;
  *(undefined8 *)(unaff_x19 + 0x7680) = in_stack_00007600;
  *(undefined8 *)(unaff_x19 + 0x7698) = in_stack_00007618;
  *(undefined8 *)(unaff_x19 + 0x7690) = in_stack_00007610;
  *(undefined8 *)(unaff_x19 + 0x76a8) = in_stack_00007628;
  *(undefined8 *)(unaff_x19 + 0x76a0) = in_stack_00007620;
  *(undefined8 *)(unaff_x19 + 0x7658) = in_stack_000075d8;
  *(undefined8 *)(unaff_x19 + 0x7650) = in_stack_000075d0;
  *(undefined8 *)(unaff_x19 + 0x7628) = unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x7630) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x7648) = in_stack_00004f40;
  *(undefined8 *)(unaff_x19 + 0x76e0) = in_stack_00007660;
  *(undefined8 *)(unaff_x19 + 0x7668) = in_stack_000075e8;
  *(undefined8 *)(unaff_x19 + 0x7660) = in_stack_000075e0;
  *unaff_x25 = 0;
  puVar1 = (undefined8 *)(unaff_x19 + 0x4f60);
  FUN_1008bf9c0(&stack0x000027a0,puVar1);
  if (in_stack_000027a0 == -0x7fffffffffffffff) {
    uVar6 = 3;
  }
  else {
    unaff_x26[2] = 1;
    FUN_100d57de4(puVar1);
    lVar3 = *(long *)(unaff_x19 + 0x4f30) + 0x10;
    *(undefined2 *)(unaff_x26 + 1) = 0;
    *(undefined8 *)(unaff_x19 + 0x4fc8) = in_stack_000027e8;
    *(undefined8 *)(unaff_x19 + 0x4fc0) = in_stack_000027e0;
    *(undefined8 *)(unaff_x19 + 0x4fd8) = in_stack_000027f8;
    *(undefined8 *)(unaff_x19 + 0x4fd0) = in_stack_000027f0;
    *(undefined8 *)(unaff_x19 + 0x4fe0) = in_stack_00002800;
    *(undefined8 *)(unaff_x19 + 0x4f88) = in_stack_000027a8;
    *(long *)(unaff_x19 + 0x4f80) = in_stack_000027a0;
    *(undefined8 *)(unaff_x19 + 0x4f98) = in_stack_000027b8;
    *(undefined8 *)(unaff_x19 + 0x4f90) = in_stack_000027b0;
    *(undefined8 *)(unaff_x19 + 0x4fa8) = in_stack_000027c8;
    *(undefined8 *)(unaff_x19 + 0x4fa0) = in_stack_000027c0;
    *(undefined8 *)(unaff_x19 + 0x4fb8) = in_stack_000027d8;
    *(undefined8 *)(unaff_x19 + 0x4fb0) = in_stack_000027d0;
    *(undefined8 *)(unaff_x19 + 0x4f68) = *(undefined8 *)(unaff_x19 + 0x4f40);
    *puVar1 = *(undefined8 *)(unaff_x19 + 0x4f38);
    *(undefined8 *)(unaff_x19 + 0x4f78) = *(undefined8 *)(unaff_x19 + 0x4f50);
    *(undefined8 *)(unaff_x19 + 0x4f70) = *(undefined8 *)(unaff_x19 + 0x4f48);
    *(long *)(unaff_x19 + 0x4fe8) = lVar3;
    unaff_x26[0x100] = 0;
    *(undefined8 *)(unaff_x19 + 0x4ff8) = *(undefined8 *)(unaff_x19 + 0x4f88);
    *(undefined8 *)(unaff_x19 + 0x4ff0) = *(undefined8 *)(unaff_x19 + 0x4f80);
    *(undefined8 *)(unaff_x19 + 0x5028) = *(undefined8 *)(unaff_x19 + 0x4fb8);
    *(undefined8 *)(unaff_x19 + 0x5020) = *(undefined8 *)(unaff_x19 + 0x4fb0);
    *(undefined8 *)(unaff_x19 + 0x5038) = *(undefined8 *)(unaff_x19 + 0x4fc8);
    *(undefined8 *)(unaff_x19 + 0x5030) = *(undefined8 *)(unaff_x19 + 0x4fc0);
    *(undefined8 *)(unaff_x19 + 0x5048) = *(undefined8 *)(unaff_x19 + 0x4fd8);
    *(undefined8 *)(unaff_x19 + 0x5040) = *(undefined8 *)(unaff_x19 + 0x4fd0);
    *(undefined8 *)(unaff_x19 + 0x5050) = *(undefined8 *)(unaff_x19 + 0x4fe0);
    *(undefined8 *)(unaff_x19 + 0x5008) = *(undefined8 *)(unaff_x19 + 0x4f98);
    *(undefined8 *)(unaff_x19 + 0x5000) = *(undefined8 *)(unaff_x19 + 0x4f90);
    *(undefined8 *)(unaff_x19 + 0x5018) = *(undefined8 *)(unaff_x19 + 0x4fa8);
    *(undefined8 *)(unaff_x19 + 0x5010) = *(undefined8 *)(unaff_x19 + 0x4fa0);
    if (*(long *)(unaff_x19 + 0x4ff0) == -0x8000000000000000) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x4f90);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x4f88);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x4fa0);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x4f98);
      *(undefined8 *)(unaff_x29 + -200) = uVar10;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar7;
      uVar11 = *(undefined8 *)(unaff_x19 + 0x4fb0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x4fa8);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x4f68);
      uVar12 = *puVar1;
      uVar15 = *(undefined8 *)(unaff_x19 + 0x4f78);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x4f70);
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar11;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar9;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar13;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar12;
      *(undefined8 *)(unaff_x29 + -0x88) = uVar15;
      *(undefined8 *)(unaff_x29 + -0x90) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x50a8) = uVar15;
      *(undefined8 *)(unaff_x19 + 0x50a0) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x5098) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x5090) = uVar12;
      *(undefined8 *)(unaff_x19 + 0x5088) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x5080) = uVar9;
      *(undefined8 *)(unaff_x19 + 0x5078) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x5070) = uVar7;
      *(undefined8 *)(unaff_x19 + 0x5068) = uVar10;
      *(undefined8 *)(unaff_x19 + 0x5060) = uVar5;
      *(long *)(unaff_x19 + 0x50b0) = lVar3;
      unaff_x26[0xf60] = 0;
      *(undefined8 *)(unaff_x19 + 0x50d0) = *(undefined8 *)(unaff_x19 + 0x50a8);
      *(undefined8 *)(unaff_x19 + 0x50c8) = *(undefined8 *)(unaff_x19 + 0x50a0);
      *(undefined8 *)(unaff_x19 + 0x50e8) = *(undefined8 *)(unaff_x19 + 0x5068);
      *(undefined8 *)(unaff_x19 + 0x50e0) = *(undefined8 *)(unaff_x19 + 0x5060);
      *(undefined8 *)(unaff_x19 + 0x50b8) = *(undefined8 *)(unaff_x19 + 0x5090);
      *(undefined8 *)(unaff_x19 + 0x50c0) = *(undefined8 *)(unaff_x19 + 0x5098);
      *(undefined8 *)(unaff_x19 + 0x50d8) = 0x800000000000004d;
      *(undefined8 *)(unaff_x19 + 0x50f8) = *(undefined8 *)(unaff_x19 + 0x5078);
      *(undefined8 *)(unaff_x19 + 0x50f0) = *(undefined8 *)(unaff_x19 + 0x5070);
      *(undefined8 *)(unaff_x19 + 0x5108) = *(undefined8 *)(unaff_x19 + 0x5088);
      *(undefined8 *)(unaff_x19 + 0x5100) = *(undefined8 *)(unaff_x19 + 0x5080);
      *(long *)(unaff_x19 + 0x5490) = lVar3;
      unaff_x26[0x5d0] = 0;
      uVar4 = FUN_100892e70(unaff_x19 + 0x50b8);
      if ((uVar4 & 1) == 0) {
        FUN_100cf6de0(unaff_x19 + 0x50b8);
        unaff_x26[0xf60] = 1;
        FUN_100d92d1c((undefined8 *)(unaff_x19 + 0x5060));
LAB_1011973a4:
        uVar6 = 1;
        unaff_x26[0x100] = 1;
        unaff_x26[5] = 0;
        *(undefined2 *)(unaff_x26 + 6) = 0;
        *(undefined4 *)(unaff_x26 + 1) = 0;
        lVar3 = **(long **)(unaff_x19 + 0x4f30);
        **(long **)(unaff_x19 + 0x4f30) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x4f30);
        }
        *unaff_x26 = 1;
        FUN_100d4cc44();
        uVar5 = 0;
        goto LAB_1011973ec;
      }
      uVar6 = 3;
      unaff_x26[0xf60] = 3;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x4fe0);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x4fc8);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x4fc0);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x4fd8);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x4fd0);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x4f88);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x4f80);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x4f98);
      uVar15 = *(undefined8 *)(unaff_x19 + 0x4f90);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x4fa8);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x4fa0);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x4fb8);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x4fb0);
      uVar9 = *puVar1;
      uVar21 = *(undefined8 *)(unaff_x19 + 0x4f78);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x4f70);
      *(undefined8 *)(unaff_x28 + 0x70) = *(undefined8 *)(unaff_x19 + 0x4f68);
      *(undefined8 *)(unaff_x28 + 0x68) = uVar9;
      *(undefined8 *)(unaff_x28 + 0x80) = uVar21;
      *(undefined8 *)(unaff_x28 + 0x78) = uVar17;
      *(undefined8 *)(unaff_x19 + 0x50b8) = uVar18;
      *(undefined8 *)(unaff_x19 + 0x50b0) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x50c8) = in_stack_000027e8;
      *(undefined8 *)(unaff_x19 + 0x50c0) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x50d8) = in_stack_000027f8;
      *(undefined8 *)(unaff_x19 + 0x50d0) = in_stack_000027f0;
      *(undefined8 *)(unaff_x19 + 0x5078) = uVar19;
      *(undefined8 *)(unaff_x19 + 0x5070) = uVar15;
      *(undefined8 *)(unaff_x19 + 0x5088) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x5080) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x5098) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x5090) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x50a8) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x50a0) = uVar10;
      *(undefined8 *)(unaff_x19 + 0x50e0) = in_stack_00002800;
      *(undefined8 *)(unaff_x19 + 0x5068) = uVar12;
      *(undefined8 *)(unaff_x19 + 0x5060) = uVar7;
      *(long *)(unaff_x19 + 0x50e8) = lVar3;
      unaff_x26[0x1c0] = 0;
      uVar4 = FUN_1008927b8(unaff_x19 + 0x5060);
      if ((uVar4 & 1) == 0) {
        FUN_100d84c5c(unaff_x19 + 0x5060);
        goto LAB_1011973a4;
      }
      uVar6 = 4;
    }
    unaff_x26[0x100] = uVar6;
    uVar6 = 4;
  }
  *unaff_x26 = uVar6;
  uVar6 = 3;
  uVar5 = 1;
LAB_1011973ec:
  unaff_x25[8] = uVar6;
  return uVar5;
}

