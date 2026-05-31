
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100538ba0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined1 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x19;
  ulong uVar17;
  long lVar18;
  long *unaff_x27;
  long unaff_x28;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long *in_stack_00000078;
  undefined *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  long *in_stack_00000108;
  long *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 *in_stack_00000140;
  undefined *in_stack_00000148;
  undefined8 in_stack_00000150;
  long *in_stack_00000158;
  long in_stack_00000160;
  undefined8 *in_stack_00000170;
  undefined *in_stack_00000178;
  undefined8 in_stack_00000180;
  long *in_stack_00000188;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 *in_stack_000001b8;
  undefined *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long *in_stack_000001d0;
  long in_stack_000001d8;
  undefined1 *in_stack_000001e0;
  undefined *in_stack_000001e8;
  undefined8 *in_stack_00002928;
  undefined1 *in_stack_00002930;
  undefined8 in_stack_00002938;
  long in_stack_00002940;
  undefined8 in_stack_00002948;
  undefined8 in_stack_00002950;
  long *in_stack_00005028;
  long in_stack_00005030;
  undefined1 *in_stack_00005038;
  undefined *in_stack_00005040;
  long *in_stack_000076e8;
  undefined *puVar24;
  undefined8 in_stack_00007720;
  undefined8 in_stack_00007728;
  undefined1 *in_stack_00007730;
  undefined *in_stack_00007738;
  undefined8 in_stack_00007740;
  undefined8 in_stack_00007748;
  
  *(undefined1 **)(unaff_x28 + 0x2790) = &stack0x00000240;
  *(undefined **)(unaff_x28 + 0x2798) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000170)();
  *(long *)(unaff_x19 + 0x108) = **(long **)(unaff_x19 + 0x28) + 0x6f8;
  *(undefined1 *)(unaff_x19 + 0x188) = 0;
  FUN_10057797c(&stack0x000000c8,unaff_x19 + 0x108);
  uVar5 = 1;
  if (in_stack_000000c8 == -0x8000000000000000) {
    uVar10 = 7;
    goto LAB_100539b18;
  }
  *(undefined1 *)(unaff_x19 + 0xfb) = 1;
  *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_000000d0;
  *(long *)(unaff_x19 + 0xa8) = in_stack_000000c8;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_000000d8;
  if ((((*(char *)(unaff_x19 + 0x188) == '\x03') && (*(char *)(unaff_x19 + 0x180) == '\x03')) &&
      (*(char *)(unaff_x19 + 0x178) == '\x03')) && (*(char *)(unaff_x19 + 0x130) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x138);
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x140) + 0x18))(*(undefined8 *)(unaff_x19 + 0x148));
    }
  }
  lVar11 = **(long **)(unaff_x19 + 0x28);
  *(long *)(unaff_x19 + 0x118) = lVar11 + 0x6f8;
  *(long *)(unaff_x19 + 0x120) = lVar11 + 0x1118;
  *(undefined1 *)(unaff_x19 + 0x129) = 0;
  FUN_100576380(&stack0x000000e0,unaff_x19 + 0x108);
  uVar5 = 1;
  if (in_stack_000000e0 == -0x8000000000000000) {
    uVar10 = 8;
    goto LAB_100539b18;
  }
  *(undefined1 *)(unaff_x19 + 0xfa) = 1;
  *(undefined8 *)(unaff_x19 + 200) = in_stack_000000e8;
  *(long *)(unaff_x19 + 0xc0) = in_stack_000000e0;
  *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_000000f0;
  FUN_100cce0d0(unaff_x19 + 0x108);
  *(long *)(unaff_x19 + 0x108) = **(long **)(unaff_x19 + 0x28) + 0x1118;
  *(undefined1 *)(unaff_x19 + 0x178) = 0;
  auVar23 = FUN_100fd3e50((undefined8 *)(unaff_x19 + 0x108));
  uVar5 = auVar23._8_8_;
  pcVar7 = auVar23._0_8_;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 1;
    uVar10 = 9;
    goto LAB_100539b18;
  }
  if (((*(char *)(unaff_x19 + 0x178) == '\x03') && (*(char *)(unaff_x19 + 0x170) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x128) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x130);
    uVar5 = extraout_x1;
    if (*(long *)(unaff_x19 + 0x138) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x138) + 0x18))(*(undefined8 *)(unaff_x19 + 0x140));
      uVar5 = extraout_x1_00;
    }
  }
  if (*(long *)(pcVar7 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00007700);
    *(undefined8 *)(pcVar7 + 0x40) = param_1;
    pcVar7[0x38] = '\x01';
    pcVar7[0x39] = '\0';
    pcVar7[0x3a] = '\0';
    pcVar7[0x3b] = '\0';
    pcVar7[0x3c] = '\0';
    pcVar7[0x3d] = '\0';
    pcVar7[0x3e] = '\0';
    pcVar7[0x3f] = '\0';
    *(undefined8 *)(pcVar7 + 0x50) = in_stack_00007728;
    *(undefined8 *)(pcVar7 + 0x48) = in_stack_00007720;
    *(undefined **)(pcVar7 + 0x60) = in_stack_00007738;
    *(undefined1 **)(pcVar7 + 0x58) = in_stack_00007730;
    *(undefined8 *)(pcVar7 + 0x70) = in_stack_00007748;
    *(undefined8 *)(pcVar7 + 0x68) = in_stack_00007740;
    *(undefined1 **)(pcVar7 + 0x30) = &stack0x00009e90;
    *(long *)(pcVar7 + 0x28) = 1;
    uVar5 = extraout_x1_01;
  }
  plVar16 = *(long **)(pcVar7 + 0x70);
  lVar11 = *plVar16;
  *plVar16 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_100539dc4;
  *(long **)(unaff_x19 + 0xd8) = plVar16;
  if (*pcVar7 == '\0') {
    *pcVar7 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar5,1000000000);
  }
  FUN_1060fa678(pcVar7,1,pcVar7);
  *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0x90);
  *(long *)(unaff_x19 + 0x130) = *(long *)(unaff_x19 + 0xd8) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x1a0) = 0;
  auVar23 = FUN_100fd3e50(unaff_x19 + 0x130);
  uVar5 = auVar23._8_8_;
  pcVar7 = auVar23._0_8_;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 1;
    uVar10 = 10;
    goto LAB_100539b18;
  }
  if (((*(char *)(unaff_x19 + 0x1a0) == '\x03') && (*(char *)(unaff_x19 + 0x198) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x150) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x158);
    uVar5 = extraout_x1_02;
    if (*(long *)(unaff_x19 + 0x160) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x160) + 0x18))(*(undefined8 *)(unaff_x19 + 0x168));
      uVar5 = extraout_x1_03;
    }
  }
  uVar20 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x108);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x118);
  *(undefined8 *)(pcVar7 + 0x180) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(pcVar7 + 0x168) = uVar20;
  *(undefined8 *)(pcVar7 + 0x160) = uVar19;
  *(undefined8 *)(pcVar7 + 0x178) = uVar22;
  *(undefined8 *)(pcVar7 + 0x170) = uVar21;
  if (*pcVar7 == '\0') {
    *pcVar7 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar5,1000000000);
  }
  FUN_1060fa678(pcVar7,1,pcVar7);
  *(undefined1 *)(unaff_x19 + 0xfb) = 0;
  FUN_100e8fbb4(unaff_x19 + 0xe0,&stack0x00007700);
  *(undefined1 *)(unaff_x19 + 0xfd) = 1;
  *(undefined1 *)(unaff_x19 + 0xfa) = 0;
  lVar11 = *(long *)(unaff_x19 + 0xc0);
  lVar2 = *(long *)(unaff_x19 + 200);
  uVar17 = *(ulong *)(unaff_x19 + 0xd0);
  lVar18 = *(long *)(unaff_x19 + 0xf0);
  if ((ulong)(*(long *)(unaff_x19 + 0xe0) - lVar18) < uVar17) {
    thunk_FUN_108855060(unaff_x19 + 0xe0,lVar18,uVar17,8,200);
    lVar18 = *(long *)(unaff_x19 + 0xf0);
  }
  _memcpy(*(long *)(unaff_x19 + 0xe8) + lVar18 * 200,lVar2,uVar17 * 200);
  *(ulong *)(unaff_x19 + 0xf0) = lVar18 + uVar17;
  if (lVar11 != 0) {
    _free(lVar2);
  }
  lVar18 = **(long **)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x19 + 0xfd) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0xf0);
  *(long *)(unaff_x19 + 0x120) = lVar18 + 0x6f8;
  *(long *)(unaff_x19 + 0x128) = *(long *)(unaff_x19 + 0xd8) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x1c0) = 0;
  uVar6 = FUN_100577748(unaff_x19 + 0x108);
  if ((uVar6 & 1) != 0) {
    uVar5 = 1;
    uVar10 = 0xb;
    goto LAB_100539b18;
  }
  FUN_100d098c4(unaff_x19 + 0x108);
  *(long *)(unaff_x19 + 0x108) = **(long **)(unaff_x19 + 0x28) + 0x10;
  *(long *)(unaff_x19 + 0x110) = *(long *)(unaff_x19 + 0x30) + 0x10;
  *(long *)(unaff_x19 + 0x118) = unaff_x19 + 0x70;
  *(undefined1 *)(unaff_x19 + 0x158) = 0;
  uVar6 = FUN_100541264(unaff_x19 + 0x108);
  if ((uVar6 & 1) != 0) {
    uVar5 = 1;
    uVar10 = 0xc;
    goto LAB_100539b18;
  }
  if (*(char *)(unaff_x19 + 0x158) == '\x03') {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x148);
    puVar8 = *(undefined8 **)(unaff_x19 + 0x150);
    pcVar12 = (code *)*puVar8;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar5);
    }
    if (puVar8[1] != 0) {
      _free(uVar5);
    }
  }
  plVar16 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x7b8);
  lVar18 = *plVar16;
  *plVar16 = lVar18 + 1;
  if (lVar18 < 0) goto LAB_100539dc4;
  *(long **)(unaff_x19 + 0x108) = plVar16;
  *(undefined1 *)(unaff_x19 + 0xfc) = 1;
  *(long *)(unaff_x19 + 0x110) = **(long **)(unaff_x19 + 0x28) + 0x1118;
  *(undefined1 *)(unaff_x19 + 0x180) = 0;
  pcVar7 = (char *)FUN_100fd3e50(unaff_x19 + 0x110);
  if (pcVar7 == (char *)0x0) {
    uVar5 = 1;
    uVar10 = 0xd;
    goto LAB_100539b18;
  }
  if (((*(char *)(unaff_x19 + 0x180) == '\x03') && (*(char *)(unaff_x19 + 0x178) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x130) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x138);
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x140) + 0x18))(*(undefined8 *)(unaff_x19 + 0x148));
    }
  }
  plVar16 = (long *)(pcVar7 + 0x28);
  if (*plVar16 == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00007700);
    *(ulong *)(pcVar7 + 0x40) = lVar2 + uVar17 * 200;
    *(long *)(pcVar7 + 0x38) = lVar11;
    *(undefined8 *)(pcVar7 + 0x50) = in_stack_00007728;
    *(undefined8 *)(pcVar7 + 0x48) = in_stack_00007720;
    *(undefined **)(pcVar7 + 0x60) = in_stack_00007738;
    *(undefined1 **)(pcVar7 + 0x58) = in_stack_00007730;
    *(undefined8 *)(pcVar7 + 0x70) = in_stack_00007748;
    *(undefined8 *)(pcVar7 + 0x68) = in_stack_00007740;
    *(long *)(pcVar7 + 0x30) = lVar2;
    *plVar16 = lVar2;
  }
  plVar13 = *(long **)(unaff_x19 + 0xa0);
  lVar11 = *plVar13;
  *plVar13 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_100539dc4;
  plVar14 = (long *)**(undefined8 **)(unaff_x19 + 0x28);
  lVar11 = *plVar14;
  *plVar14 = lVar11 + 1;
  in_stack_000000f8 = plVar13;
  if (lVar11 < 0) goto LAB_100539dc4;
  plVar13 = *(long **)(unaff_x19 + 0x108);
  lVar11 = *plVar13;
  *plVar13 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_100539dc4;
  puVar8 = (undefined8 *)_malloc(0x20);
  if (puVar8 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_100539dc4;
  }
  puVar8[1] = 1;
  *puVar8 = 1;
  puVar8[3] = plVar13;
  puVar8[2] = plVar14;
  plVar14 = (long *)(unaff_x19 + 0x30);
  plVar13 = (long *)*plVar14;
  lVar11 = *plVar13;
  *plVar13 = lVar11 + 1;
  in_stack_00000100 = puVar8;
  if (lVar11 < 0) goto LAB_100539dc4;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x58);
  plVar15 = *(long **)(unaff_x19 + 0x50);
  lVar11 = *plVar15;
  *plVar15 = lVar11 + 1;
  in_stack_00000108 = plVar13;
  if (lVar11 < 0) goto LAB_100539dc4;
  in_stack_00000110 = plVar15;
  in_stack_00000118 = uVar5;
  in_stack_00000120 =
       __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                 (unaff_x19 + 0x98);
  __ZN10codex_core7session12turn_context11TurnContext38effective_reasoning_effort_for_tracing17h6aff010c206be8cbE
            (&stack0x00000128,*plVar14 + 0x10);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bRam000000010b62a4a8 - 1 < 2 ||
       ((bRam000000010b62a4a8 != 0 &&
        (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                           ), cVar3 != '\0')))) &&
      (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                          ),
      lVar11 = 
      ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
      , (uVar17 & 1) != 0)))) {
    in_stack_00005028 =
         (long *)(
                 ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                 + 0x30);
    in_stack_00000170 = (undefined8 *)(**(long **)(unaff_x19 + 0x28) + 0x790);
    *(long *)(unaff_x28 + 0x2790) = *(long *)(unaff_x19 + 0x30) + 0x240;
    in_stack_00002928 = &stack0x00000128;
    in_stack_00007730 = &stack0x00000240;
    in_stack_00007738 = &UNK_10b215b00;
    in_stack_000000b8 = &stack0x00007700;
    puVar8 = (undefined8 *)0x1;
    in_stack_000000c0 = 0xb;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E(&stack0x00000140,lVar11,&stack0x00005010);
  }
  else {
    in_stack_00005030 =
         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
    ;
    puVar8 = (undefined8 *)0x2;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      in_stack_00002940 =
           ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
           + 0x30;
      lVar11 = *(long *)(unaff_x19 + 0x30);
      *(long *)(unaff_x28 + 0x4e70) = **(long **)(unaff_x19 + 0x28) + 0x790;
      in_stack_00000170 = (undefined8 *)(lVar11 + 0x240);
      *(long *)(unaff_x28 + 0x2790) = lVar11 + 0x40;
      in_stack_00007730 = &stack0x00009e90;
      in_stack_00007738 = &UNK_10b215b00;
      in_stack_00002930 = &stack0x00007700;
      in_stack_00002928 = (undefined8 *)0x1;
      in_stack_00002938 = 0xb;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00005010,&stack0x00002928);
    }
    in_stack_00000160 = in_stack_00005030;
    in_stack_00000140 = puVar8;
    in_stack_00000148 = in_stack_000000b8;
    in_stack_00000150 = in_stack_000000c0;
    in_stack_00000158 = in_stack_00005028;
  }
  *(undefined1 *)(unaff_x19 + 0x101) = 0;
  in_stack_000001a0 = *(undefined8 *)(unaff_x19 + 0x40);
  in_stack_00000198 = *(undefined8 *)(unaff_x19 + 0x38);
  in_stack_000001a8 = *(undefined8 *)(unaff_x19 + 0x48);
  in_stack_00000178 = in_stack_00000148;
  in_stack_00000170 = in_stack_00000140;
  in_stack_00000188 = in_stack_00000158;
  in_stack_00000180 = in_stack_00000150;
  in_stack_00000190 = in_stack_00000160;
  do {
    lVar11 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar11;
  } while (bVar1);
  puVar9 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar9[9] != '\x01') {
    if ((char)puVar9[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar9,&DAT_100c35d48);
      *(undefined1 *)(puVar9 + 9) = 1;
      goto LAB_10053963c;
    }
    FUN_100dacee0(&stack0x00000240);
LAB_1005394e8:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00007700,&UNK_10b216f68);
    goto LAB_100539dc4;
  }
LAB_10053963c:
  _memcpy(&stack0x00002928,&stack0x00000240,0x26e8);
  if (0x7ffffffffffffffe < *puVar9) {
    FUN_107c05c9c(&UNK_10b2435a0);
    goto LAB_100539dc4;
  }
  *puVar9 = *puVar9 + 1;
  uVar17 = puVar9[1];
  _memcpy(&stack0x00005010,&stack0x00000240,0x26e8);
  if (uVar17 == 2) {
    FUN_100dacee0(&stack0x00005010);
    *puVar9 = *puVar9 - 1;
    goto LAB_1005394e8;
  }
  lVar11 = *in_stack_000076e8;
  if ((uVar17 & 1) == 0) {
    plVar13 = (long *)puVar9[2];
    lVar2 = *plVar13;
    *plVar13 = lVar2 + 1;
    if ((lVar2 < 0) ||
       ((plVar15 = (long *)plVar13[0x5e], plVar15 != (long *)0x0 &&
        (lVar2 = *plVar15, *plVar15 = lVar2 + 1, lVar2 < 0)))) goto LAB_100539dc4;
    _memcpy(&stack0x00009e94,&stack0x00002928,0x26d8);
    puVar24 = &UNK_10b23fe70;
    *(undefined4 *)(unaff_x28 + 0x30) = 0;
    _memcpy((ulong)&stack0x00007700 | 0x34,&stack0x00009e90,0x26dc);
    *(undefined8 *)(unaff_x28 + 10000) = 0;
    *(undefined8 *)(unaff_x28 + 0x2720) = 0;
    *(undefined8 *)(unaff_x28 + 0x2718) = 0;
    *(undefined8 *)(unaff_x28 + 0x4e70) = 0;
    iVar4 = _posix_memalign(&stack0x0000c570,0x80,0x2780);
    if ((iVar4 != 0) || (lVar2 = *(long *)(unaff_x28 + 0x4e70), lVar2 == 0)) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
      goto LAB_100539dc4;
    }
    _memcpy(lVar2,&stack0x00007700,0x2780);
    lVar2 = FUN_1010e2658(plVar13 + 0x2d,lVar2,lVar2);
    if (plVar13[0x5c] != 0) {
      (**(code **)(plVar13[0x5d] + 0x28))
                (plVar13[0x5c] + (*(long *)(plVar13[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                 &stack0x00007700);
    }
    if (lVar2 != 0) {
      __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                (puVar9 + 2,lVar2);
    }
  }
  else {
    plVar13 = (long *)puVar9[2];
    lVar2 = *plVar13;
    *plVar13 = lVar2 + 1;
    if ((lVar2 < 0) ||
       ((plVar15 = (long *)plVar13[0x4a], plVar15 != (long *)0x0 &&
        (lVar2 = *plVar15, *plVar15 = lVar2 + 1, lVar2 < 0)))) goto LAB_100539dc4;
    _memcpy(&stack0x00009e94,&stack0x00002928,0x26d8);
    puVar24 = &UNK_10b2428f0;
    *(undefined4 *)(unaff_x28 + 0x30) = 0;
    _memcpy((ulong)&stack0x00007700 | 0x34,&stack0x00009e90,0x26dc);
    *(undefined8 *)(unaff_x28 + 10000) = 0;
    *(undefined8 *)(unaff_x28 + 0x2720) = 0;
    *(undefined8 *)(unaff_x28 + 0x2718) = 0;
    *(undefined8 *)(unaff_x28 + 0x4e70) = 0;
    iVar4 = _posix_memalign(&stack0x0000c570,0x80,0x2780);
    if ((iVar4 != 0) || (lVar2 = *(long *)(unaff_x28 + 0x4e70), lVar2 == 0)) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
      goto LAB_100539dc4;
    }
    _memcpy(lVar2,&stack0x00007700,0x2780);
    lVar2 = FUN_1010e2658(plVar13 + 0x11,lVar2,lVar2);
    if (plVar13[0x48] != 0) {
      (**(code **)(plVar13[0x49] + 0x28))
                (plVar13[0x48] + (*(long *)(plVar13[0x49] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                 &stack0x00007700);
    }
    if (lVar2 != 0) {
      FUN_10610fa38(plVar13 + 2,lVar2,0);
    }
  }
  *puVar9 = *puVar9 - 1;
  lVar2 = *plVar14;
  if (*(long *)(lVar2 + 0x378) == 0) {
    in_stack_00002940 = 4;
    in_stack_00000078 = unaff_x27;
LAB_1005399f4:
    *in_stack_00000078 = in_stack_00002940;
LAB_100539a0c:
    FUN_100e0f4b8(&stack0x00007708);
    lVar11 = -0x8000000000000000;
  }
  else {
    FUN_1048757a8(&stack0x00002928,lVar2 + 600,8,0);
    if (in_stack_00002928 != (undefined8 *)0xb) {
      *(undefined8 *)(unaff_x28 + 0x30) = in_stack_00002950;
      *(undefined8 *)(unaff_x28 + 0x28) = in_stack_00002948;
      goto LAB_1005399f4;
    }
    __ZN10codex_otel7metrics6client13MetricsClient11start_timer17ha8009a259040414bE
              (&stack0x00007700,lVar2 + 0x378,&UNK_108ca38f9,0x1a,in_stack_00002938);
    if (in_stack_00002930 != (undefined1 *)0x0) {
      _free(in_stack_00002938);
    }
    if (lVar11 == -0x8000000000000000) goto LAB_100539a0c;
    puVar8 = (undefined8 *)0x0;
    in_stack_000000c0 = 0;
    in_stack_000000b8 = puVar24;
    in_stack_00005028 = plVar13;
    in_stack_00005030 = lVar11;
    in_stack_00005038 = in_stack_00007730;
    in_stack_00005040 = in_stack_00007738;
  }
  *(undefined2 *)(unaff_x19 + 0xfe) = 0;
  *(undefined1 *)(unaff_x19 + 0x100) = 0;
  lVar2 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar2 + 1;
  if (-1 < lVar2) {
    *(undefined1 *)(unaff_x19 + 0xfc) = 0;
    in_stack_000001b0 = lVar11;
    in_stack_000001b8 = puVar8;
    in_stack_000001c0 = in_stack_000000b8;
    in_stack_000001c8 = in_stack_000000c0;
    in_stack_000001d0 = in_stack_00005028;
    in_stack_000001d8 = in_stack_00005030;
    in_stack_000001e0 = in_stack_00005038;
    in_stack_000001e8 = in_stack_00005040;
    __ZN10codex_core5state4turn10ActiveTurn8add_task17hd541bdb7f29e2014E(plVar16,&stack0x000001b0);
    uVar5 = extraout_x1_04;
    if (in_stack_00000128 != 0) {
      _free(in_stack_00000130);
      uVar5 = extraout_x1_05;
    }
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar5,1000000000);
    }
    FUN_1060fa678(pcVar7,1,pcVar7);
    *(undefined2 *)(unaff_x19 + 0xfc) = 0;
    lVar11 = **(long **)(unaff_x19 + 0xd8);
    **(long **)(unaff_x19 + 0xd8) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6b4c();
    }
    *(undefined2 *)(unaff_x19 + 0xfa) = 0;
    *(undefined4 *)(unaff_x19 + 0xfe) = 0;
    lVar11 = **(long **)(unaff_x19 + 0x30);
    **(long **)(unaff_x19 + 0x30) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(plVar14);
    }
    uVar5 = 0;
    uVar10 = 1;
LAB_100539b18:
    *(undefined1 *)(unaff_x19 + 0xf8) = uVar10;
    return uVar5;
  }
LAB_100539dc4:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100539dc8);
  (*pcVar12)();
}

