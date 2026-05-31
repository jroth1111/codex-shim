
/* WARNING: Removing unreachable block (ram,0x0001008f5f10) */
/* WARNING: Removing unreachable block (ram,0x0001008f5d8c) */

void FUN_1008f5ad4(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x26;
  char *pcVar10;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  ulong in_stack_00000738;
  long in_stack_00000a80;
  undefined8 *in_stack_00000a88;
  ulong in_stack_00000a90;
  undefined8 in_stack_00000aa0;
  long in_stack_00000aa8;
  undefined8 *in_stack_00000ab0;
  ulong in_stack_00000ab8;
  undefined8 in_stack_00000ac0;
  undefined8 in_stack_00000ac8;
  undefined8 in_stack_00000ad0;
  undefined8 in_stack_00000ad8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000a80,s_invalid_thread_id__108aca2c9,&stack0x00000968);
  if (in_stack_00000a80 == -0x8000000000000000) {
    *(undefined8 **)(unaff_x19 + 400) = in_stack_00000a88;
    *(ulong *)(unaff_x19 + 0x198) = in_stack_00000a90;
    auVar18 = FUN_1033f63d0(*(undefined8 *)(unaff_x19 + 0x180),*(undefined8 *)(unaff_x19 + 0x188));
    lVar6 = auVar18._8_8_;
    if (lVar6 == 0) {
LAB_1008f5bd4:
      in_stack_00000a88 = (undefined8 *)_malloc(0x1d);
      if (in_stack_00000a88 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x1d);
        goto LAB_1008f6784;
      }
      uVar8 = 0;
      in_stack_00000a88[1] = 0x7473756d20656d61;
      *in_stack_00000a88 = 0x6e20646165726874;
      *(undefined8 *)((long)in_stack_00000a88 + 0x15) = 0x7974706d65206562;
      *(undefined8 *)((long)in_stack_00000a88 + 0xd) = 0x20746f6e20747375;
      in_stack_00000a80 = 0x1d;
      in_stack_00000a90 = 0x1d;
      lVar6 = *(long *)(unaff_x19 + 0x178);
      goto joined_r0x0001008f5ee0;
    }
    lVar3 = _malloc(lVar6);
    if (lVar3 == 0) {
      func_0x0001087c9084(1,lVar6);
      goto LAB_1008f6784;
    }
    _memcpy(lVar3,auVar18._0_8_,lVar6);
    if (lVar6 == -0x8000000000000000) goto LAB_1008f5bd4;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(long *)(unaff_x19 + 0x1a0) = lVar6;
    *(long *)(unaff_x19 + 0x1a8) = lVar3;
    *(long *)(unaff_x19 + 0x1b0) = lVar6;
    *(undefined8 *)(unaff_x19 + 0x1c0) = *(undefined8 *)(unaff_x19 + 0x158);
    *(undefined1 *)(unaff_x19 + 0x220) = 0;
    FUN_100918408(&stack0x00000a80,unaff_x19 + 0x1c0,in_stack_00000008);
    if ((*(char *)(unaff_x19 + 0x220) == '\x03') && (*(char *)(unaff_x19 + 0x218) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x1d8);
      if (*(long *)(unaff_x19 + 0x1e0) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x1e0) + 0x18))(*(undefined8 *)(unaff_x19 + 0x1e8));
      }
    }
    *(undefined8 **)(unaff_x19 + 0x1c0) = in_stack_00000a88;
    *(int *)(unaff_x19 + 0x1c8) = (int)in_stack_00000a90;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x158) + 0x188);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x198);
    uVar11 = *(undefined8 *)(unaff_x19 + 400);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x1a8);
    lVar6 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar6 == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = _malloc(lVar6);
      if (lVar4 == 0) {
        func_0x0001087c9084(1,lVar6);
        goto LAB_1008f6784;
      }
    }
    _memcpy(lVar4,uVar7,lVar6);
    *(undefined8 *)(unaff_x19 + 0x2d8) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x200) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x218) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x230) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x248) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x260) = 0x8000000000000000;
    *(undefined4 *)(unaff_x19 + 0x400) = 0;
    *(undefined4 *)(unaff_x19 + 0x40c) = 0;
    *(undefined8 *)(unaff_x19 + 0x3a0) = 0x800000000000000e;
    *(undefined8 *)(unaff_x19 + 0x2f0) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x308) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 800) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x278) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x290) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x380) = 0x8000000000000003;
    *(undefined8 *)(unaff_x19 + 0x1d0) = 0;
    *(undefined8 *)(unaff_x19 + 0x2a8) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x338) = 0x8000000000000002;
    *(undefined4 *)(unaff_x19 + 0x418) = 0x7060402;
    *(undefined8 *)(unaff_x19 + 0x2c0) = 0x8000000000000000;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x26 + 0x50) = *(undefined8 *)(unaff_x19 + 0x220);
    *(undefined8 *)(unaff_x26 + 0x48) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x248);
    *(undefined8 *)(unaff_x26 + 0x80) = *(undefined8 *)(unaff_x19 + 0x250);
    *(undefined8 *)(unaff_x26 + 0x78) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x278);
    *(undefined8 *)(unaff_x26 + 0xb0) = *(undefined8 *)(unaff_x19 + 0x280);
    *(undefined8 *)(unaff_x26 + 0xa8) = uVar7;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x1d8);
    lVar12 = *(long *)(unaff_x19 + 0x1d0);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x1e8);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x1e0);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x1f0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x26 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x2b0);
    *(undefined8 *)(unaff_x26 + 0xd8) = uVar7;
    _memcpy(&stack0x00000968,&stack0x00000a80,0x108);
    _memcpy(unaff_x19 + 0x420,&stack0x00000968,0x108);
    *(long *)(unaff_x19 + 0x528) = lVar6;
    *(long *)(unaff_x19 + 0x530) = lVar4;
    *(long *)(unaff_x19 + 0x538) = lVar6;
    *(undefined8 *)(unaff_x19 + 0x548) = *(undefined8 *)(unaff_x19 + 0x2f8);
    *(undefined8 *)(unaff_x19 + 0x540) = *(undefined8 *)(unaff_x19 + 0x2f0);
    *(undefined8 *)(unaff_x19 + 0x550) = *(undefined8 *)(unaff_x19 + 0x300);
    *(undefined8 *)(unaff_x19 + 0x560) = *(undefined8 *)(unaff_x19 + 0x310);
    *(undefined8 *)(unaff_x19 + 0x558) = *(undefined8 *)(unaff_x19 + 0x308);
    *(undefined8 *)(unaff_x19 + 0x568) = *(undefined8 *)(unaff_x19 + 0x318);
    *(undefined8 *)(unaff_x19 + 0x578) = *(undefined8 *)(unaff_x19 + 0x328);
    *(undefined8 *)(unaff_x19 + 0x570) = *(undefined8 *)(unaff_x19 + 800);
    *(undefined8 *)(unaff_x19 + 0x580) = *(undefined8 *)(unaff_x19 + 0x330);
    *(undefined8 *)(unaff_x19 + 0x5c8) = *(undefined8 *)(unaff_x19 + 0x378);
    *(undefined8 *)(unaff_x19 + 0x5b0) = *(undefined8 *)(unaff_x19 + 0x360);
    *(undefined8 *)(unaff_x19 + 0x5a8) = *(undefined8 *)(unaff_x19 + 0x358);
    *(undefined8 *)(unaff_x19 + 0x5c0) = *(undefined8 *)(unaff_x19 + 0x370);
    *(undefined8 *)(unaff_x19 + 0x5b8) = *(undefined8 *)(unaff_x19 + 0x368);
    *(undefined8 *)(unaff_x19 + 0x590) = *(undefined8 *)(unaff_x19 + 0x340);
    *(undefined8 *)(unaff_x19 + 0x588) = *(undefined8 *)(unaff_x19 + 0x338);
    *(undefined8 *)(unaff_x19 + 0x5a0) = *(undefined8 *)(unaff_x19 + 0x350);
    *(undefined8 *)(unaff_x19 + 0x598) = *(undefined8 *)(unaff_x19 + 0x348);
    *(undefined8 *)(unaff_x19 + 0x5d8) = *(undefined8 *)(unaff_x19 + 0x388);
    *(undefined8 *)(unaff_x19 + 0x5d0) = *(undefined8 *)(unaff_x19 + 0x380);
    *(undefined8 *)(unaff_x19 + 0x5e8) = *(undefined8 *)(unaff_x19 + 0x398);
    *(undefined8 *)(unaff_x19 + 0x5e0) = *(undefined8 *)(unaff_x19 + 0x390);
    *(undefined8 *)(unaff_x19 + 0x5f8) = *(undefined8 *)(unaff_x19 + 0x3a8);
    *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)(unaff_x19 + 0x3a0);
    *(undefined8 *)(unaff_x19 + 0x648) = *(undefined8 *)(unaff_x19 + 0x3f8);
    *(undefined8 *)(unaff_x19 + 0x640) = *(undefined8 *)(unaff_x19 + 0x3f0);
    *(undefined8 *)(unaff_x19 + 0x638) = *(undefined8 *)(unaff_x19 + 1000);
    *(undefined8 *)(unaff_x19 + 0x630) = *(undefined8 *)(unaff_x19 + 0x3e0);
    *(undefined8 *)(unaff_x19 + 0x628) = *(undefined8 *)(unaff_x19 + 0x3d8);
    *(undefined8 *)(unaff_x19 + 0x620) = *(undefined8 *)(unaff_x19 + 0x3d0);
    *(undefined8 *)(unaff_x19 + 0x618) = *(undefined8 *)(unaff_x19 + 0x3c8);
    *(undefined8 *)(unaff_x19 + 0x610) = *(undefined8 *)(unaff_x19 + 0x3c0);
    *(undefined8 *)(unaff_x19 + 0x608) = *(undefined8 *)(unaff_x19 + 0x3b8);
    *(undefined8 *)(unaff_x19 + 0x600) = *(undefined8 *)(unaff_x19 + 0x3b0);
    *(undefined4 *)(unaff_x19 + 0x658) = *(undefined4 *)(unaff_x19 + 0x408);
    *(undefined8 *)(unaff_x19 + 0x650) = *(undefined8 *)(unaff_x19 + 0x400);
    *(undefined4 *)(unaff_x19 + 0x664) = *(undefined4 *)(unaff_x19 + 0x414);
    *(undefined8 *)(unaff_x19 + 0x65c) = *(undefined8 *)(unaff_x19 + 0x40c);
    *(undefined2 *)(unaff_x19 + 0x668) = 0x402;
    *(undefined1 *)(unaff_x19 + 0x66a) = 6;
    *(undefined1 *)(unaff_x19 + 0x66f) = *(undefined1 *)(unaff_x19 + 0x41f);
    *(undefined4 *)(unaff_x19 + 0x66b) = *(undefined4 *)(unaff_x19 + 0x41b);
    *(long *)(unaff_x19 + 0x670) = lVar3 + 0x10;
    *(undefined8 *)(unaff_x19 + 0x680) = uVar13;
    *(undefined8 *)(unaff_x19 + 0x678) = uVar11;
    *(undefined2 *)(unaff_x19 + 0x990) = 0;
    FUN_10050ee40(&stack0x00000a80,unaff_x19 + 0x420,in_stack_00000008);
    if (lVar12 == 3) {
      *in_stack_00000018 = 4;
      goto LAB_1008f6368;
    }
    _memcpy(&stack0x00000cf8,&stack0x00000b20,0x1d8);
    FUN_100cd475c(unaff_x19 + 0x420);
    if (lVar12 == 2) {
      __ZN16codex_app_server18request_processors16thread_processor23core_thread_write_error17h06f7f68395fcb947E
                (&stack0x000006d8,&UNK_108cb2a5f,0xf,&stack0x00000ed0);
      uVar8 = in_stack_00000ab8 >> 0x20;
      in_stack_00000a90 = in_stack_00000ab8 & 0xffffffff;
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000ad0;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000ac8;
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000710;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000ad8;
      *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000720;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000718;
      *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000730;
      *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000728;
      lVar6 = *(long *)(unaff_x19 + 0x2d8);
      uVar7 = extraout_x1;
      if (((lVar6 != -0x7fffffffffffffff) && (lVar6 != -0x8000000000000000)) && (lVar6 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x2e0));
        uVar7 = extraout_x1_00;
      }
      iVar1 = *(int *)(unaff_x19 + 0x1c8);
      if (iVar1 != 0) {
        pcVar10 = *(char **)(unaff_x19 + 0x1c0);
        if (*pcVar10 == '\0') {
          *pcVar10 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar10,uVar7,1000000000);
        }
        FUN_1060fa678(pcVar10,iVar1,pcVar10);
      }
      if (*(long *)(unaff_x19 + 0x1a0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x1a8));
      }
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      lVar6 = *(long *)(unaff_x19 + 0x178);
      goto joined_r0x0001008f5ee0;
    }
    _memcpy(&stack0x00000770,&stack0x00000cf8,0x1d8);
    _memcpy(&stack0x000004c8,&stack0x00000740,0x208);
    FUN_100e0ce70(&stack0x00000458);
    lVar6 = *(long *)(unaff_x19 + 0x2d8);
    if (((lVar6 != -0x7fffffffffffffff) && (lVar6 != -0x8000000000000000)) && (lVar6 != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x2e0));
    }
    in_stack_00000ab0 = (undefined8 *)0x0;
    in_stack_00000a90 = 1;
    FUN_10624142c(&stack0x00000a80,unaff_x19 + 400,0);
    FUN_108855060(&stack0x000006d0,0,0x24,1,1);
    uRam0000000000000021 = (undefined4)uVar16;
    lRam0000000000000001 = lVar12;
    uRam0000000000000009 = uVar14;
    uRam0000000000000011 = uVar15;
    uRam0000000000000019 = uVar17;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x1a0);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x19 + 0x1a8);
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x19 + 0x1b0);
    in_stack_00000738 = (ulong)*(uint *)(unaff_x19 + 0x1c8);
    if (*(uint *)(unaff_x19 + 0x1c8) != 0) {
      pcVar10 = *(char **)(unaff_x19 + 0x1c0);
      if (*pcVar10 == '\0') {
        *pcVar10 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar10,extraout_x1_01,1000000000);
      }
      FUN_1060fa678(pcVar10,in_stack_00000738,pcVar10);
    }
    in_stack_00000ac0 = 0x24;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
    if (*(long *)(unaff_x19 + 0x178) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x180));
    }
    if (*(long *)(unaff_x19 + 0x160) != 0) {
      uVar8 = 0;
      in_stack_00000aa8 = -0x8000000000000000;
      goto LAB_1008f5c40;
    }
    uStack0000000000000028 = *(undefined8 *)(unaff_x29 + -0x98);
    uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0xa0);
    uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -0x88);
    uStack0000000000000030 = *(undefined8 *)(unaff_x29 + -0x90);
    uStack0000000000000048 = *(undefined8 *)(unaff_x29 + -0x78);
    uStack0000000000000040 = *(undefined8 *)(unaff_x29 + -0x80);
    uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x68);
    uStack0000000000000050 = *(undefined8 *)(unaff_x29 + -0x70);
    *in_stack_00000018 = 1;
    in_stack_00000aa8 = -0x8000000000000000;
  }
  else {
    *(long *)(unaff_x29 + -0x98) = in_stack_00000aa8;
    *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000aa0;
    *(ulong *)(unaff_x29 + -0x88) = in_stack_00000ab8;
    *(undefined8 **)(unaff_x29 + -0x90) = in_stack_00000ab0;
    *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000ac8;
    *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000ac0;
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000ad8;
    *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000ad0;
    uVar8 = in_stack_00000a90 >> 0x20;
    lVar6 = *(long *)(unaff_x19 + 0x178);
joined_r0x0001008f5ee0:
    in_stack_00000738 = 0xffffffffffff80a8;
    in_stack_00000ac0 = 0x8000000000000005;
    in_stack_00000aa8 = in_stack_00000a80;
    in_stack_00000ab0 = in_stack_00000a88;
joined_r0x0001008f5ee0:
    if (lVar6 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x180));
    }
    if (*(long *)(unaff_x19 + 0x160) != 0) {
LAB_1008f5c40:
      _free(*(undefined8 *)(unaff_x19 + 0x168));
    }
    uStack0000000000000028 = *(undefined8 *)(unaff_x29 + -0x98);
    uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0xa0);
    uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -0x88);
    uStack0000000000000030 = *(undefined8 *)(unaff_x29 + -0x90);
    uStack0000000000000048 = *(undefined8 *)(unaff_x29 + -0x78);
    uStack0000000000000040 = *(undefined8 *)(unaff_x29 + -0x80);
    uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x68);
    uStack0000000000000050 = *(undefined8 *)(unaff_x29 + -0x70);
    *in_stack_00000018 = 1;
    if (in_stack_00000aa8 == -0x7fffffffffffffff) {
LAB_1008f6368:
      *unaff_x20 = 0x8000000000000071;
      uVar5 = 3;
      goto LAB_1008f6370;
    }
    in_stack_00000a90 = in_stack_00000a90 & 0xffffffff | uVar8 << 0x20;
  }
  plVar9 = (long *)(unaff_x19 + 0x80);
  *plVar9 = in_stack_00000aa8;
  *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000ab0;
  *(ulong *)(unaff_x19 + 0x90) = in_stack_00000a90;
  *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000ac0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uStack0000000000000028;
  *(undefined8 *)(unaff_x19 + 0xa0) = uStack0000000000000020;
  *(undefined8 *)(unaff_x19 + 0xb8) = uStack0000000000000038;
  *(undefined8 *)(unaff_x19 + 0xb0) = uStack0000000000000030;
  *(undefined8 *)(unaff_x19 + 200) = uStack0000000000000048;
  *(undefined8 *)(unaff_x19 + 0xc0) = uStack0000000000000040;
  *(undefined8 *)(unaff_x19 + 0xd8) = uStack0000000000000058;
  *(undefined8 *)(unaff_x19 + 0xd0) = uStack0000000000000050;
  *(ulong *)(unaff_x19 + 0xe0) = in_stack_00000738;
  FUN_100d63c78(unaff_x27);
  if (*plVar9 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0x119) = 1;
    *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0xa8);
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x58) + 400);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
    if (*(long *)(unaff_x19 + 0x60) == -0x8000000000000000) {
      lVar4 = *(long *)(unaff_x19 + 0x68);
      lVar3 = *(long *)(unaff_x19 + 0x70);
      lVar12 = -0x8000000000000000;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x68);
      lVar3 = *(long *)(unaff_x19 + 0x70);
      if (lVar3 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar3);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar3);
LAB_1008f6784:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f6788);
          (*pcVar2)();
        }
      }
      _memcpy(lVar4,uVar11,lVar3);
      lVar12 = lVar3;
    }
    lVar6 = lVar6 + 0x10;
    *(long *)(unaff_x19 + 0x120) = lVar12;
    *(long *)(unaff_x27 + 8) = lVar4;
    *(long *)(unaff_x27 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x19 + 0x138) = uVar7;
    *(long *)(unaff_x19 + 0x140) = lVar6;
    *(undefined1 *)(unaff_x19 + 0xf48) = 0;
    *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x128);
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x130);
    *(undefined8 *)(unaff_x19 + 0x168) = 0x8000000000000008;
    *(long *)(unaff_x19 + 0x520) = lVar6;
    *(undefined1 *)(unaff_x19 + 0x5b8) = 0;
    uVar8 = FUN_100892e70(unaff_x19 + 0x148,in_stack_00000008);
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0xf48) = 3;
      *unaff_x20 = 0x8000000000000071;
      uVar5 = 4;
      goto LAB_1008f6370;
    }
    FUN_100cf6de0(unaff_x19 + 0x148);
    *(undefined1 *)(unaff_x19 + 0xf48) = 1;
    if (*(long *)(unaff_x19 + 0xe8) != -0x8000000000000000) {
      *(undefined2 *)(unaff_x19 + 0x119) = 0x100;
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x58) + 400) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x11a) = 0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0x8000000000000007;
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xf0);
      *(long *)(unaff_x19 + 0x128) = *(long *)(unaff_x19 + 0xe8);
      *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x110);
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0x108);
      *(long *)(unaff_x19 + 0x318) = lVar6;
      *(undefined1 *)(unaff_x19 + 0xdf0) = 0;
      _memcpy(unaff_x19 + 800,unaff_x19 + 0x120,0x1f8);
      *(long *)(unaff_x19 + 0x518) = lVar6;
      *(undefined8 *)(unaff_x19 + 0x520) = 8;
      *(undefined8 *)(unaff_x19 + 0x528) = 0;
      *(undefined1 *)(unaff_x19 + 0x730) = 0;
      uVar8 = FUN_100897c70(unaff_x19 + 800,in_stack_00000008);
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0xdf0) = 3;
        *unaff_x20 = 0x8000000000000071;
        uVar5 = 5;
        goto LAB_1008f6370;
      }
      FUN_100d40d08(unaff_x19 + 800);
      *(undefined1 *)(unaff_x19 + 0xdf0) = 1;
      *(undefined1 *)(unaff_x19 + 0x11a) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x119) = 0;
    uVar7 = 0x800000000000006f;
    uVar8 = *(ulong *)(unaff_x19 + 0x60);
  }
  else {
    in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 200);
    in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0xc0);
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0xd8);
    in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0xd0);
    in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0xe0);
    in_stack_00000068 = *(undefined8 *)(unaff_x19 + 0x88);
    in_stack_00000060 = *plVar9;
    in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x98);
    in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x90);
    in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0xa8);
    in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xa0);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0xb8);
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar7 = 0x8000000000000070;
    uVar8 = *(ulong *)(unaff_x19 + 0x60);
  }
  if ((uVar8 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x68));
  }
  *unaff_x20 = uVar7;
  _memcpy(unaff_x20 + 1,&stack0x00000060,0x3b0);
  uVar5 = 1;
LAB_1008f6370:
  *(undefined1 *)(unaff_x19 + 0x118) = uVar5;
  return;
}

