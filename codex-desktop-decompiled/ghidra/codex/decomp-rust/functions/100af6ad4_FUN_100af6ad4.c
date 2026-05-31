
void FUN_100af6ad4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  code *pcVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x28;
  undefined8 *puVar13;
  long unaff_x29;
  undefined8 uVar14;
  uint uStack0000000000000024;
  undefined1 uStack00000000000000c4;
  undefined2 uStack00000000000000cc;
  undefined8 uStack0000000000000180;
  undefined1 *puStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  ulong in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  ushort in_stack_00000290;
  undefined2 in_stack_00000296;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined2 in_stack_000002b0;
  undefined1 in_stack_000002b2;
  undefined1 in_stack_000002b7;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  
  puStack0000000000000188 = &stack0x00000410;
  uStack0000000000000180 = 1;
  uStack0000000000000190 = 1;
  uStack0000000000000198 = param_1;
  FUN_100afa270(&stack0x00000180);
  lVar12 = *(long *)(unaff_x19 + 0x220);
  *(undefined1 *)(unaff_x19 + 0x324) = 0;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x250);
  uVar11 = *(undefined8 *)(unaff_x19 + 600);
  uVar3 = *(undefined2 *)(unaff_x19 + 0x240);
  FUN_100aed2f0(&stack0x00000240,*(undefined8 *)(unaff_x19 + 0x188),*(undefined8 *)(unaff_x19 + 400)
               );
  puVar4 = (undefined4 *)_malloc(7);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,7);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100af935c);
    (*pcVar6)();
  }
  *(undefined4 *)((long)puVar4 + 3) = 0x5443454e;
  *puVar4 = 0x4e4e4f43;
  puStack0000000000000188 = (undefined1 *)unaff_x28[1];
  uStack0000000000000180 = *unaff_x28;
  *(undefined8 *)(unaff_x19 + 0x338) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x340) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x348) = uVar11;
  *(undefined1 **)(unaff_x19 + 0x358) = puStack0000000000000188;
  *(undefined8 *)(unaff_x19 + 0x350) = uStack0000000000000180;
  *(undefined8 *)(unaff_x19 + 0x360) = in_stack_00000250;
  *(undefined8 *)(unaff_x19 + 0x368) = 7;
  *(undefined4 **)(unaff_x19 + 0x370) = puVar4;
  *(undefined8 *)(unaff_x19 + 0x378) = 7;
  *(long *)(unaff_x19 + 0x380) = lVar12 + 0x10;
  *(undefined8 *)(unaff_x19 + 0x388) = 0;
  *(undefined2 *)(unaff_x19 + 0xc08) = uVar3;
  *(undefined2 *)(unaff_x19 + 0xc0c) = 1;
  FUN_100afdc64(&stack0x00000240,unaff_x19 + 0x338);
  if (in_stack_00000240 == 3) {
    uVar5 = 4;
    *unaff_x20 = 4;
  }
  else {
    uVar11 = unaff_x28[5];
    uVar9 = unaff_x28[4];
    uStack0000000000000024 = (uint)in_stack_00000290;
    uVar1 = *(undefined4 *)((long)unaff_x28 + 0x52);
    uVar2 = *(undefined4 *)((long)unaff_x28 + 0x73);
    uVar14 = unaff_x28[0x10];
    uVar10 = unaff_x28[0xf];
    uStack00000000000000c4 = in_stack_000002b7;
    uStack00000000000000cc = in_stack_00000296;
    FUN_100cb4c6c(unaff_x19 + 0x338);
    *(undefined4 *)(unaff_x29 + -0x78) = uVar1;
    *(undefined2 *)(unaff_x29 + -0x74) = uStack00000000000000cc;
    *(undefined4 *)(unaff_x29 + -0x80) = uVar2;
    *(undefined1 *)(unaff_x29 + -0x7c) = uStack00000000000000c4;
    if ((*(long *)(unaff_x19 + 0x260) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x260) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x268));
    }
    if (((*(byte *)(unaff_x19 + 0x324) & 1) != 0) && (*(long *)(unaff_x19 + 0x248) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x250));
    }
    *(undefined1 *)(unaff_x19 + 0x324) = 0;
    if ((*(byte *)(unaff_x19 + 0x228) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x228))) {
      lVar12 = **(long **)(unaff_x19 + 0x230);
      **(long **)(unaff_x19 + 0x230) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x230);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x325) = 0;
    lVar12 = **(long **)(unaff_x19 + 0x220);
    **(long **)(unaff_x19 + 0x220) = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x220);
    }
    FUN_100df6754(unaff_x19 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x210);
    puVar13 = *(undefined8 **)(unaff_x19 + 0x218);
    pcVar6 = (code *)*puVar13;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar8);
    }
    if (puVar13[1] != 0) {
      _free(uVar8);
    }
    *(undefined1 *)(unaff_x19 + 0x326) = 0;
    plVar7 = *(long **)(unaff_x19 + 0x110);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      *plVar7 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
      }
    }
    unaff_x20[6] = uVar11;
    unaff_x20[5] = uVar9;
    unaff_x20[0x11] = uVar14;
    unaff_x20[0x10] = uVar10;
    unaff_x20[0x1a] = in_stack_00000478;
    unaff_x20[0x19] = in_stack_00000470;
    unaff_x20[0x18] = in_stack_00000468;
    unaff_x20[0x17] = in_stack_00000460;
    unaff_x20[0x16] = in_stack_00000458;
    unaff_x20[0x15] = in_stack_00000450;
    unaff_x20[0x14] = in_stack_00000448;
    unaff_x20[0x13] = in_stack_00000440;
    unaff_x20[0x20] = in_stack_000004a8;
    unaff_x20[0x1f] = in_stack_000004a0;
    unaff_x20[0x1e] = in_stack_00000498;
    unaff_x20[0x1d] = in_stack_00000490;
    unaff_x20[0x1c] = in_stack_00000488;
    unaff_x20[0x1b] = in_stack_00000480;
    unaff_x20[0x26] = in_stack_000004d8;
    unaff_x20[0x25] = in_stack_000004d0;
    unaff_x20[0x28] = in_stack_000004e8;
    unaff_x20[0x27] = in_stack_000004e0;
    unaff_x20[0x22] = in_stack_000004b8;
    unaff_x20[0x21] = in_stack_000004b0;
    unaff_x20[0x24] = in_stack_000004c8;
    unaff_x20[0x23] = in_stack_000004c0;
    unaff_x20[0x2e] = in_stack_00000518;
    unaff_x20[0x2d] = in_stack_00000510;
    unaff_x20[0x30] = in_stack_00000528;
    unaff_x20[0x2f] = in_stack_00000520;
    *unaff_x20 = 3;
    unaff_x20[1] = in_stack_00000240 & 0xff;
    unaff_x20[2] = in_stack_00000248;
    unaff_x20[3] = in_stack_00000250;
    unaff_x20[4] = in_stack_00000258;
    unaff_x20[7] = in_stack_00000270;
    unaff_x20[8] = in_stack_00000278;
    unaff_x20[9] = in_stack_00000280;
    unaff_x20[10] = in_stack_00000288;
    *(short *)(unaff_x20 + 0xb) = (short)uStack0000000000000024;
    *(undefined4 *)((long)unaff_x20 + 0x5a) = *(undefined4 *)(unaff_x29 + -0x78);
    *(undefined2 *)((long)unaff_x20 + 0x5e) = *(undefined2 *)(unaff_x29 + -0x74);
    unaff_x20[0xc] = in_stack_00000298;
    unaff_x20[0xd] = in_stack_000002a0;
    unaff_x20[0xe] = in_stack_000002a8;
    *(undefined2 *)(unaff_x20 + 0xf) = in_stack_000002b0;
    *(undefined1 *)((long)unaff_x20 + 0x7a) = in_stack_000002b2;
    *(undefined1 *)((long)unaff_x20 + 0x7f) = *(undefined1 *)(unaff_x29 + -0x7c);
    *(undefined4 *)((long)unaff_x20 + 0x7b) = *(undefined4 *)(unaff_x29 + -0x80);
    unaff_x20[0x12] = in_stack_000002c8;
    unaff_x20[0x31] = in_stack_00000530;
    uVar5 = 1;
    unaff_x20[0x2a] = in_stack_000004f8;
    unaff_x20[0x29] = in_stack_000004f0;
    unaff_x20[0x2c] = in_stack_00000508;
    unaff_x20[0x2b] = in_stack_00000500;
  }
  *(undefined1 *)(unaff_x19 + 800) = uVar5;
  return;
}

