
void FUN_100527494(void)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar6;
  int extraout_w8;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x19;
  undefined1 *unaff_x20;
  long lVar10;
  long *plVar11;
  long lVar12;
  long unaff_x27;
  ulong in_xzr;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 *in_stack_00000058;
  undefined1 *in_stack_00000060;
  long in_stack_00000068;
  undefined1 *in_stack_00000070;
  undefined1 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000b8;
  undefined1 *in_stack_000000c0;
  long in_stack_000000d0;
  undefined1 *in_stack_000000e0;
  long *plStack00000000000000e8;
  undefined8 in_stack_000000f8;
  long *in_stack_00000100;
  long *in_stack_00000118;
  long in_stack_00000368;
  long *in_stack_00000370;
  long *in_stack_00000378;
  undefined1 *in_stack_00000380;
  long *in_stack_00000388;
  long in_stack_00000390;
  long *in_stack_00000398;
  long *in_stack_000003a0;
  long in_stack_000003a8;
  long in_stack_000003b0;
  long in_stack_000003b8;
  long in_stack_000003c0;
  long in_stack_000003c8;
  long in_stack_000003d0;
  char *in_stack_000003d8;
  undefined1 *in_stack_000003e0;
  long in_stack_000003e8;
  long *in_stack_000003f0;
  long *in_stack_000003f8;
  long *in_stack_00000620;
  long in_stack_00000628;
  long in_stack_00000630;
  long in_stack_00000638;
  long in_stack_00000640;
  long in_stack_00000648;
  long *in_stack_00001d90;
  long in_stack_00001d98;
  long *in_stack_00001da0;
  long *in_stack_00001da8;
  long in_stack_00001db0;
  long *in_stack_00001ee0;
  long *in_stack_00001ee8;
  undefined1 *in_stack_00001ef0;
  long *in_stack_00001f20;
  undefined1 *in_stack_00001f28;
  long in_stack_00001fa0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001ee0,s__failed_to_build_websocket_reque_108ad9679,&stack0x00001f20);
  FUN_100de8b24(&stack0x00001fa0);
  lVar12 = 9;
LAB_10052901c:
  *(undefined1 *)(unaff_x19 + 0x829) = 0;
  if ((*(byte *)(unaff_x19 + 0x82a) & 1) != 0) {
    FUN_100def764(&stack0x00000910);
  }
  *(undefined1 *)(unaff_x19 + 0x82a) = 0;
  if ((*(byte *)(unaff_x19 + 0x82b) & 1) != 0) {
    FUN_100def764(&stack0x000008b0);
  }
  *(undefined1 *)(unaff_x19 + 0x82b) = 0;
  if (((*(byte *)(unaff_x19 + 0x82c) & 1) != 0) && (*(long *)(unaff_x19 + 0x6f8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x700));
  }
  if ((*(long *)(unaff_x19 + 0x710) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x710) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x718));
  }
  if ((*(long *)(unaff_x19 + 0x728) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x728) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x730));
  }
  *(undefined1 *)(unaff_x19 + 0x82c) = 0;
  lVar7 = *(long *)(unaff_x19 + 0x6a0);
  lVar10 = in_stack_000000d0;
  plStack00000000000000e8 = in_stack_00000398;
  plVar11 = in_stack_00001f20;
  puVar18 = in_stack_00001f28;
  lVar15 = in_stack_00001fa0;
  do {
    in_stack_000000d0 = lVar12;
    if (lVar7 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x6a8));
    }
    *in_stack_000000c0 = 1;
    FUN_100d577b0(lVar10);
    *(undefined4 *)(in_stack_000000b8 + 9) = 0;
    *in_stack_000000e0 = 1;
    FUN_100d0b574(unaff_x20);
    unaff_x20 = &stack0x00000300;
    if (in_stack_000000d0 != 0x12) {
      __ZN9codex_api10api_bridge13map_api_error17h397674ad8ce00b36E
                (&stack0x00000368,&stack0x00000588);
      in_stack_00000398 = plStack00000000000000e8;
      if (in_stack_00000368 == -0x7fffffffffffffe0) goto LAB_1005291ec;
      if (*(long *)(unaff_x19 + 800) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x328));
      }
      if (*(long *)(unaff_x19 + 0x338) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x340));
      }
      if (*(long *)(unaff_x19 + 0x380) != 0) {
        FUN_100cb56bc(unaff_x19 + 0x380);
      }
      FUN_100def764(unaff_x19 + 0x2c0);
      *(undefined1 *)(unaff_x19 + 0x3b3) = 0;
      FUN_100e33dfc(unaff_x19 + 0x290);
      FUN_100c964d4(unaff_x19 + 0x2a0);
      FUN_100e7c764(unaff_x19 + 0x2b0);
      *(undefined2 *)(unaff_x19 + 0x3b5) = 0;
      *(undefined1 *)(unaff_x19 + 0x3b7) = 0;
      FUN_100e3da24(unaff_x19 + 0x270);
      *(undefined1 *)(unaff_x19 + 0x3bb) = 0;
      lVar12 = **(long **)(unaff_x19 + 0x268);
      **(long **)(unaff_x19 + 0x268) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224(unaff_x19 + 0x268);
      }
      *(undefined1 *)(unaff_x19 + 0x3bc) = 0;
      FUN_100e69bec(unaff_x19 + 600);
      *(undefined1 *)(unaff_x19 + 0x3bd) = 0;
      FUN_100e64d84(unaff_x19 + 0x250);
      *(undefined1 *)(unaff_x19 + 0x3b8) = 0;
      *(undefined2 *)(unaff_x19 + 0x3be) = 0;
      *(undefined1 *)(unaff_x19 + 0x3c0) = 0;
      FUN_100e2c954(unaff_x19 + 0x248);
      *(undefined2 *)(unaff_x19 + 0x3c1) = 0;
      FUN_100e76b20(unaff_x19 + 0x240);
      *(undefined2 *)(unaff_x19 + 0x3c3) = 0;
      lVar12 = **(long **)(unaff_x19 + 0x220);
      **(long **)(unaff_x19 + 0x220) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafd5bc2c3ba3510bE(unaff_x19 + 0x220);
      }
      if ((*(byte *)(unaff_x19 + 0x3b4) & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1d0) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x1d8));
        }
        if ((*(long *)(unaff_x19 + 0x1e8) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x1e8) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x1f0));
        }
        if ((*(long *)(unaff_x19 + 0x200) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x200) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x208));
        }
      }
      *(undefined1 *)(unaff_x19 + 0x3b4) = 0;
      in_stack_00000100 = in_stack_000003f8;
      in_stack_000000e0 = (undefined1 *)in_stack_00000390;
LAB_100529520:
      *(undefined1 *)(unaff_x19 + 0x3c5) = 0;
      *(undefined1 *)(unaff_x19 + 0x3c6) = 0;
      *in_stack_00000118 = in_stack_00000368;
      in_stack_00000118[2] = (long)in_stack_00000378;
      in_stack_00000118[1] = (long)in_stack_00000370;
      in_stack_00000118[3] = (long)in_stack_00000380;
      in_stack_00000118[4] = (long)in_stack_00000388;
      in_stack_00000118[6] = (long)plStack00000000000000e8;
      in_stack_00000118[5] = (long)in_stack_000000e0;
      in_stack_00000118[8] = in_stack_000003a8;
      in_stack_00000118[7] = (long)in_stack_000003a0;
      in_stack_00000118[10] = in_stack_000003b8;
      in_stack_00000118[9] = in_stack_000003b0;
      in_stack_00000118[0xc] = in_stack_000003c8;
      in_stack_00000118[0xb] = in_stack_000003c0;
      in_stack_00000118[0xd] = in_stack_000003d0;
      in_stack_00000118[0xe] = (long)in_stack_000003d8;
      in_stack_00000118[0xf] = (long)in_stack_000003e0;
      in_stack_00000118[0x10] = in_stack_000003e8;
      uVar6 = 1;
      in_stack_00000118[0x11] = (long)in_stack_000003f0;
      in_stack_00000118[0x12] = (long)in_stack_00000100;
      goto LAB_100529584;
    }
    in_stack_00000368 = -0x7fffffffffffffe0;
    in_stack_00000370 = in_stack_00001ee0;
    in_stack_00000378 = in_stack_00001ee8;
    in_stack_00000380 = in_stack_00001ef0;
    in_stack_00000388 = in_stack_00001d90;
    in_stack_00000390 = in_stack_00001d98;
    in_stack_00000398 = in_stack_00001da0;
    in_stack_000003a0 = in_stack_00001da8;
    in_stack_000003a8 = in_stack_00001db0;
LAB_1005291ec:
    lVar12 = *in_stack_00000370;
    *in_stack_00000370 = lVar12 + 1;
    if ((lVar12 < 0) || (lVar12 = *in_stack_00000378, *in_stack_00000378 = lVar12 + 1, lVar12 < 0))
    goto LAB_10052a1ac;
    lVar12 = in_stack_00000388[0x55];
    in_stack_00000388[0x55] = lVar12 + 1;
    if (-1 < lVar12) {
      lVar12 = *in_stack_00000388;
      *in_stack_00000388 = lVar12 + 1;
      if (((lVar12 < 0) ||
          (lVar12 = *in_stack_00000398, *in_stack_00000398 = lVar12 + 1, lVar12 < 0)) ||
         (lVar12 = *in_stack_000003a0, *in_stack_000003a0 = lVar12 + 1, lVar12 < 0))
      goto LAB_10052a1ac;
      *(undefined4 *)((long)in_stack_00000100 + 0x15d) = 0;
      plVar9 = *(long **)(unaff_x19 + 0x270);
      lVar12 = plVar9[0x54];
      plVar9[0x54] = lVar12 + 1;
      if (-1 < lVar12) {
        lVar12 = *plVar9;
        *plVar9 = lVar12 + 1;
        if (((lVar12 < 0) ||
            (lVar12 = **(long **)(unaff_x19 + 0x278), **(long **)(unaff_x19 + 0x278) = lVar12 + 1,
            lVar12 < 0)) ||
           (lVar12 = **(long **)(unaff_x19 + 0x280), **(long **)(unaff_x19 + 0x280) = lVar12 + 1,
           lVar12 < 0)) goto LAB_10052a1ac;
        uVar5 = __ZN10codex_core21realtime_conversation25spawn_realtime_input_task17hc0e48f80e878880dE
                          (&stack0x00001080);
        FUN_100e84c38(&stack0x00000300);
        *(undefined8 *)(unaff_x19 + 0x3c8) = uVar5;
        *(undefined2 *)(unaff_x19 + 0x3b9) = 0x101;
        *(undefined8 *)(unaff_x19 + 0x3d0) = 0x8000000000000000;
        *(undefined1 **)(unaff_x19 + 0x3d8) = unaff_x20;
        *(undefined1 **)(unaff_x19 + 0x3e0) = in_stack_00001ef0;
        *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x19 + 0x1c8);
        *(undefined1 *)(unaff_x19 + 0x458) = 0;
        auVar27 = FUN_100fd3e50(unaff_x19 + 1000,in_stack_000000f8);
        uVar5 = auVar27._8_8_;
        in_stack_000003d8 = auVar27._0_8_;
        if (in_stack_000003d8 == (char *)0x0) {
          *in_stack_00000118 = -0x7fffffffffffffdf;
          uVar6 = 5;
          goto LAB_100529584;
        }
        if (((*(char *)(unaff_x19 + 0x458) == '\x03') && (*(char *)(unaff_x19 + 0x450) == '\x03'))
           && (*(char *)(unaff_x19 + 0x408) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x410);
          uVar5 = extraout_x1;
          if (*(long *)(unaff_x19 + 0x418) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x418) + 0x18))(*(undefined8 *)(unaff_x19 + 0x420));
            uVar5 = extraout_x1_00;
          }
        }
        *(undefined1 *)(unaff_x19 + 0x3c3) = 0;
        *(undefined1 *)(unaff_x19 + 0x3c1) = 0;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x248);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x240);
        cVar2 = *(char *)(unaff_x19 + 0x3b2);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x278);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x270);
        uVar24 = *(undefined8 *)(unaff_x19 + 0x288);
        uVar21 = *(undefined8 *)(unaff_x19 + 0x280);
        *(undefined2 *)(unaff_x19 + 0x3ba) = 0;
        in_stack_000003d0 = *(long *)(unaff_x19 + 0x3c8);
        plVar11 = *(long **)(unaff_x19 + 0x268);
        lVar12 = *plVar11;
        *plVar11 = lVar12 + 1;
        if (lVar12 < 0) goto LAB_10052a1ac;
        if (in_stack_000003d8[0x70] != '\x02') {
          func_0x000100e35050(in_stack_000003d8 + 0x28);
          uVar5 = extraout_x1_01;
        }
        in_stack_000003d8[0x28] = '\0';
        in_stack_000003d8[0x29] = '\0';
        in_stack_000003d8[0x2a] = '\0';
        in_stack_000003d8[0x2b] = '\0';
        in_stack_000003d8[0x2c] = '\0';
        in_stack_000003d8[0x2d] = '\0';
        in_stack_000003d8[0x2e] = '\0';
        in_stack_000003d8[0x2f] = '\0';
        *(undefined8 *)(in_stack_000003d8 + 0x38) = uVar16;
        *(undefined8 *)(in_stack_000003d8 + 0x30) = uVar13;
        *(long *)(in_stack_000003d8 + 0x40) = in_stack_000003d0;
        *(long **)(in_stack_000003d8 + 0x48) = plVar11;
        *(undefined8 *)(in_stack_000003d8 + 0x58) = uVar17;
        *(undefined8 *)(in_stack_000003d8 + 0x50) = uVar14;
        *(undefined8 *)(in_stack_000003d8 + 0x68) = uVar24;
        *(undefined8 *)(in_stack_000003d8 + 0x60) = uVar21;
        in_stack_000003d8[0x70] = cVar2;
        *(undefined2 *)(unaff_x19 + 0x3bc) = 0;
        in_stack_00000388 = *(long **)(unaff_x19 + 0x268);
        plStack00000000000000e8 = (long *)in_stack_00000100[1];
        in_stack_000000e0 = (undefined1 *)*in_stack_00000100;
        *(undefined1 *)(unaff_x19 + 0x3b9) = 0;
        in_stack_00000378 = *(long **)(unaff_x19 + 0x3d8);
        in_stack_00000370 = *(long **)(unaff_x19 + 0x3d0);
        in_stack_00000380 = *(undefined1 **)(unaff_x19 + 0x3e0);
        if (*in_stack_000003d8 == '\0') {
          *in_stack_000003d8 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (in_stack_000003d8,uVar5,1000000000);
        }
        FUN_1060fa678(in_stack_000003d8,1,in_stack_000003d8);
        *(undefined2 *)(unaff_x19 + 0x3b9) = 0;
        if ((*(byte *)(unaff_x19 + 0x3b3) & 1) != 0) {
          if (*(long *)(unaff_x19 + 800) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x328));
          }
          if (*(long *)(unaff_x19 + 0x338) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x340));
          }
          if (*(long *)(unaff_x19 + 0x380) != 0) {
            FUN_100cb56bc(unaff_x19 + 0x380);
          }
          FUN_100def764(unaff_x19 + 0x2c0);
        }
        *(undefined1 *)(unaff_x19 + 0x3b3) = 0;
        *(undefined4 *)((long)in_stack_00000100 + 0x15d) = 0;
        *(undefined4 *)((long)in_stack_00000100 + 0x163) = 0;
        *(undefined4 *)((long)in_stack_00000100 + 0x167) = 0;
        *(undefined2 *)(unaff_x19 + 0x3c3) = 0;
        lVar12 = **(long **)(unaff_x19 + 0x220);
        **(long **)(unaff_x19 + 0x220) = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafd5bc2c3ba3510bE(unaff_x19 + 0x220);
        }
        *(undefined1 *)(unaff_x19 + 0x3b4) = 0;
        in_stack_000003e0 = in_stack_00001ef0;
        in_stack_000003f0 = in_stack_00001ee8;
        in_stack_000003e8 = unaff_x27;
        in_stack_00000368 = -0x7fffffffffffffe0;
        in_stack_000003a0 = in_stack_00000620;
        in_stack_000003a8 = in_stack_00000628;
        in_stack_000003b0 = in_stack_00000630;
        in_stack_000003b8 = in_stack_00000638;
        in_stack_000003c0 = in_stack_00000640;
        in_stack_000003c8 = in_stack_00000648;
        goto LAB_100529520;
      }
    }
    __ZN3std7process5abort17hdc01e45e25b715e8E();
    if (extraout_w8 != 3) {
      FUN_107c05cc4(&UNK_10b23a730);
LAB_10052a1ac:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052a1b0);
      (*pcVar3)();
    }
    bVar4 = *(byte *)(unaff_x19 + 0xbc0);
    if (1 < bVar4) {
      if (bVar4 != 3) {
        FUN_107c05cc4(&UNK_10b23a748);
        goto LAB_10052a1ac;
      }
      bVar4 = *(byte *)(unaff_x19 + 0xb78);
      if (bVar4 < 3) {
        if (bVar4 != 0) {
          if (bVar4 == 1) {
            FUN_107c05cc0(&UNK_10b23a718);
          }
          else {
            FUN_107c05cc4(&UNK_10b23a718);
          }
          goto LAB_10052a1ac;
        }
        uVar8 = *(ulong *)(unaff_x19 + 0xb60);
        *(long **)(unaff_x19 + 0xb68) = *(long **)(unaff_x19 + 0xb58);
        *(ulong *)(unaff_x19 + 0xb70) = uVar8;
        lVar12 = **(long **)(unaff_x19 + 0xb58);
        if (*(ulong *)(lVar12 + 0x1e8) < uVar8) goto LAB_1005299b8;
        goto LAB_100529adc;
      }
      if (bVar4 != 3) goto LAB_100529b08;
      uVar8 = *(ulong *)(unaff_x19 + 0xb70);
      lVar12 = **(long **)(unaff_x19 + 0xb68);
      if (uVar8 <= *(ulong *)(lVar12 + 0x1e8)) goto LAB_100529adc;
LAB_1005299b8:
      *(undefined1 *)(unaff_x19 + 0xb78) = 1;
LAB_100529b68:
      *(undefined1 *)(unaff_x19 + 0xbc0) = 1;
      in_stack_00001ee0 = *(long **)(unaff_x19 + 0xb08);
      puVar18 = *(undefined1 **)(unaff_x19 + 0xb18);
      plVar11 = *(long **)(unaff_x19 + 0xb10);
      *(undefined2 *)(unaff_x19 + 0xbc8) = 1;
      if (in_stack_00001ee0 != (long *)0x8) goto LAB_100529c54;
LAB_100529ba4:
      uVar6 = 3;
LAB_100529cc8:
      *in_stack_00000058 = uVar6;
      *in_stack_00000060 = 3;
      *in_stack_00000070 = 3;
      uRam8000000000000020 = 3;
      *in_stack_00000098 = 3;
      *in_stack_000000c0 = 4;
      *in_stack_000000e0 = 3;
      *in_stack_00000118 = -0x7fffffffffffffdf;
      uVar6 = 4;
LAB_100529584:
      *(undefined1 *)(unaff_x19 + 0x3b0) = uVar6;
      return;
    }
    if (bVar4 != 0) {
      FUN_107c05cc0(&UNK_10b23a748);
      goto LAB_10052a1ac;
    }
    plVar9 = *(long **)(unaff_x19 + 0xb48);
    *(long **)(unaff_x19 + 0xb50) = plVar9;
    *(long **)(unaff_x19 + 0xb58) = plVar9;
    uVar8 = 1;
    *(undefined8 *)(unaff_x19 + 0xb60) = 1;
    *(undefined1 *)(unaff_x19 + 0xb78) = 0;
    *(long **)(unaff_x19 + 0xb68) = plVar9;
    *(undefined8 *)(unaff_x19 + 0xb70) = 1;
    lVar12 = *plVar9;
    if (*(long *)(lVar12 + 0x1e8) == 0) goto LAB_1005299b8;
LAB_100529adc:
    *(long *)(unaff_x19 + 0xb80) = lVar12 + 0x1c0;
    *(undefined8 *)(unaff_x19 + 0xb88) = 0;
    *(undefined8 *)(unaff_x19 + 0xba0) = 0;
    *(undefined8 *)(unaff_x19 + 0xb98) = 0;
    *(long *)(unaff_x19 + 0xb90) = lVar15;
    *(ulong *)(unaff_x19 + 0xba8) = uVar8;
    *(ulong *)(unaff_x19 + 0xbb0) = uVar8;
    *(undefined1 *)(unaff_x19 + 3000) = 0;
LAB_100529b08:
    bVar4 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                      (unaff_x19 + 0xb80,in_stack_000000f8);
    if (bVar4 == 2) {
      *(undefined1 *)(unaff_x19 + 0xb78) = 4;
      *(undefined1 *)(unaff_x19 + 0xbc0) = 3;
      *in_stack_00001ef0 = 3;
      goto LAB_100529ba4;
    }
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0xb80);
    if (*(long *)(unaff_x19 + 0xb88) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0xb88) + 0x18))(*(undefined8 *)(unaff_x19 + 0xb90));
    }
    *(undefined1 *)(unaff_x19 + 0xb78) = 1;
    if ((bVar4 & 1) != 0) goto LAB_100529b68;
    *(undefined1 *)(unaff_x19 + 0xbc0) = 1;
    *(undefined1 *)(unaff_x19 + 0xbc9) = 0;
    lVar19 = *(long *)(unaff_x19 + 0xb10);
    lVar15 = *(long *)(unaff_x19 + 0xb08);
    lVar25 = *(long *)(unaff_x19 + 0xb20);
    lVar22 = *(long *)(unaff_x19 + 0xb18);
    lVar20 = *(long *)(unaff_x19 + 0xb30);
    lVar7 = *(long *)(unaff_x19 + 0xb28);
    lVar26 = *(long *)(unaff_x19 + 0xb40);
    lVar23 = *(long *)(unaff_x19 + 0xb38);
    lVar10 = **(long **)(unaff_x19 + 0xb50);
    LOAcquire();
    uVar8 = *(ulong *)(lVar10 + 0x88);
    *(ulong *)(lVar10 + 0x88) = uVar8 + 1;
    lVar12 = FUN_100fca340(lVar10 + 0x80,uVar8);
    plVar9 = (long *)(lVar12 + (uVar8 & 0x1f) * 0x40);
    plVar9[5] = lVar20;
    plVar9[4] = lVar7;
    plVar9[7] = lVar26;
    plVar9[6] = lVar23;
    plVar9[1] = lVar19;
    *plVar9 = lVar15;
    plVar9[3] = lVar25;
    plVar9[2] = lVar22;
    *(ulong *)(lVar12 + 0x810) = *(ulong *)(lVar12 + 0x810) | 1L << (uVar8 & 0x1f);
    LORelease();
    puVar1 = (ulong *)(lVar10 + 0x110);
    LOAcquire();
    uVar8 = *puVar1;
    *puVar1 = uVar8 | 2;
    LORelease();
    if (uVar8 == 0) {
      lVar12 = *(long *)(lVar10 + 0x100);
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 8))(*(undefined8 *)(lVar10 + 0x108));
      }
    }
    *(undefined2 *)(unaff_x19 + 0xbc8) = 1;
    in_stack_00001ee0 = (long *)0x7;
LAB_100529c54:
    FUN_100d5ffcc(unaff_x27);
    if (in_stack_00001ee0 == (long *)0x7) {
      *(undefined1 *)(unaff_x19 + 0xab1) = 0;
      FUN_101401fa0(&stack0x00001fa0,unaff_x19 + 0xab8,in_stack_000000f8);
      if (lVar15 == 0x17) {
        uVar6 = 4;
        goto LAB_100529cc8;
      }
      FUN_100cf4538(unaff_x19 + 0xab8);
      in_stack_00001fa0 = 9;
      lVar10 = 9;
      if (lVar15 != 0x16) {
        FUN_100de8b24(&stack0x00001fa0);
        in_stack_00001fa0 = lVar15;
      }
    }
    else {
      func_0x000100e482b4(&stack0x00001ee0);
      FUN_100cf4538(unaff_x19 + 0xab8);
      in_stack_00001fa0 = 9;
      lVar10 = lVar15;
    }
    *(undefined2 *)(unaff_x19 + 0xab1) = 0;
    *(undefined1 *)(unaff_x19 + 0xab3) = 0;
    *(undefined1 *)(unaff_x19 + 0xab0) = 1;
    FUN_100da9a38(in_stack_00001ee8);
    *in_stack_00000060 = 1;
    if (in_stack_00001fa0 == 0x15) {
      *(undefined1 *)(unaff_x19 + 0xbd9) = 0;
      lVar12 = 0x12;
      in_stack_00001ee0 = (long *)0x1;
      in_stack_00001ef0 = &stack0x00001ee0;
      in_stack_00001f20 = plVar11;
      in_stack_00001f28 = puVar18;
      in_stack_00001fa0 = lVar10;
    }
    else {
      in_stack_00001f20 = (long *)&stack0x00001fa0;
      in_stack_00001f28 =
           &
           __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00001ee0,s__failed_to_send_realtime_request_108ad96e4,&stack0x00001f20);
      FUN_100de8b24(&stack0x00001fa0);
      if (((*(byte *)(unaff_x19 + 0xbd9) & 1) != 0) && (*(long *)(unaff_x19 + 0xa18) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0xa20));
      }
      *(undefined1 *)(unaff_x19 + 0xbd9) = 0;
      lVar12 = 9;
      in_stack_00001ef0 = puVar18;
      in_stack_00001ee8 = plVar11;
    }
    *(undefined1 *)(unaff_x19 + 0xbd8) = 1;
    *(undefined1 *)(unaff_x19 + 0xbf0) = 0;
    *(undefined1 *)(unaff_x19 + 0xbf1) = 1;
    FUN_100e79b6c(unaff_x19 + 0x920);
    *(undefined1 *)(unaff_x19 + 0xbfc) = 0;
    *(undefined1 *)(unaff_x19 + 0xbfa) = 1;
    FUN_100d31a40(in_stack_000000a0);
    unaff_x27 = in_stack_00000068;
    if (lVar12 != 0x12) break;
    in_stack_00001ee0 = *(long **)(unaff_x19 + 0x8c0);
    in_stack_00001ee8 = *(long **)(unaff_x19 + 0x8c8);
    in_stack_00001ef0 = *(undefined1 **)(unaff_x19 + 0x8d0);
    in_stack_00001db0 = *(long *)(unaff_x19 + 0x8f8);
    in_stack_00001d98 = *(long *)(unaff_x19 + 0x8e0);
    in_stack_00001d90 = *(long **)(unaff_x19 + 0x8d8);
    in_stack_00001da8 = *(long **)(unaff_x19 + 0x8f0);
    in_stack_00001da0 = *(long **)(unaff_x19 + 0x8e8);
    *(undefined1 *)(unaff_x19 + 0x82d) = 0;
    *(undefined1 *)(unaff_x19 + 0x82e) = 0;
    FUN_100de1f74(unaff_x19 + 0x838);
    if ((*(long *)(unaff_x19 + 0x8a8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x8a8) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x8b0));
    }
    *(undefined1 *)(unaff_x19 + 0x82f) = 0;
    *(undefined2 *)(unaff_x19 + 0x830) = 0;
    *(undefined2 *)(unaff_x19 + 0x829) = 0;
    *(undefined1 *)(unaff_x19 + 0x82b) = 0;
    if ((*(long *)(unaff_x19 + 0x710) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x710) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x718));
    }
    if ((*(long *)(unaff_x19 + 0x728) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x728) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x730));
    }
    *(undefined1 *)(unaff_x19 + 0x82c) = 0;
    lVar7 = *(long *)(unaff_x19 + 0x6a0);
    lVar12 = 0x12;
    lVar10 = in_stack_000000d0;
    plStack00000000000000e8 = in_stack_00000398;
    plVar11 = in_stack_00001f20;
    puVar18 = in_stack_00001f28;
    lVar15 = in_stack_00001fa0;
  } while( true );
  FUN_100e84c38(unaff_x19 + 0x8c0);
  *(undefined1 *)(unaff_x19 + 0x82d) = 0;
  *(undefined1 *)(unaff_x19 + 0x82e) = 0;
  FUN_100de1f74(unaff_x19 + 0x838);
  if ((*(long *)(unaff_x19 + 0x8a8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x8a8) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x8b0));
  }
  *(undefined1 *)(unaff_x19 + 0x82f) = 0;
  *(undefined2 *)(unaff_x19 + 0x830) = 0;
  if ((*(byte *)(unaff_x19 + 0x829) & 1) != 0) {
    FUN_100de01d8(unaff_x19 + 0x748);
  }
  goto LAB_10052901c;
}

