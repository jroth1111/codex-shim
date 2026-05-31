
/* WARNING: Removing unreachable block (ram,0x0001005c66c8) */
/* WARNING: Removing unreachable block (ram,0x0001005c66fc) */
/* WARNING: Removing unreachable block (ram,0x0001005c6724) */
/* WARNING: Removing unreachable block (ram,0x0001005c6728) */
/* WARNING: Removing unreachable block (ram,0x0001005c67e4) */
/* WARNING: Removing unreachable block (ram,0x0001005c6818) */
/* WARNING: Removing unreachable block (ram,0x0001005c6840) */
/* WARNING: Removing unreachable block (ram,0x0001005c6844) */
/* WARNING: Removing unreachable block (ram,0x0001005c6850) */
/* WARNING: Removing unreachable block (ram,0x0001005c68ac) */
/* WARNING: Removing unreachable block (ram,0x0001005c68a0) */
/* WARNING: Removing unreachable block (ram,0x0001005c68cc) */
/* WARNING: Removing unreachable block (ram,0x0001005c68f8) */
/* WARNING: Removing unreachable block (ram,0x0001005c6950) */
/* WARNING: Removing unreachable block (ram,0x0001005c6958) */
/* WARNING: Removing unreachable block (ram,0x0001005c697c) */
/* WARNING: Removing unreachable block (ram,0x0001005c698c) */
/* WARNING: Removing unreachable block (ram,0x0001005c69a8) */
/* WARNING: Removing unreachable block (ram,0x0001005c35c0) */
/* WARNING: Removing unreachable block (ram,0x0001005c35e0) */
/* WARNING: Removing unreachable block (ram,0x0001005c3600) */
/* WARNING: Removing unreachable block (ram,0x0001005c3610) */
/* WARNING: Removing unreachable block (ram,0x0001005c3644) */
/* WARNING: Removing unreachable block (ram,0x0001005c3654) */
/* WARNING: Removing unreachable block (ram,0x0001005c3660) */
/* WARNING: Removing unreachable block (ram,0x0001005c3674) */
/* WARNING: Removing unreachable block (ram,0x0001005c3680) */
/* WARNING: Removing unreachable block (ram,0x0001005c36a0) */
/* WARNING: Removing unreachable block (ram,0x0001005c36a8) */
/* WARNING: Removing unreachable block (ram,0x0001005c36b0) */
/* WARNING: Removing unreachable block (ram,0x0001005c36b8) */
/* WARNING: Removing unreachable block (ram,0x0001005c36c4) */
/* WARNING: Removing unreachable block (ram,0x0001005c36cc) */
/* WARNING: Removing unreachable block (ram,0x0001005c36e4) */
/* WARNING: Removing unreachable block (ram,0x0001005c36ec) */
/* WARNING: Removing unreachable block (ram,0x0001005c3700) */
/* WARNING: Removing unreachable block (ram,0x0001005c3708) */
/* WARNING: Removing unreachable block (ram,0x0001005c371c) */
/* WARNING: Removing unreachable block (ram,0x0001005c3728) */
/* WARNING: Removing unreachable block (ram,0x0001005c35d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005c5a14(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long unaff_x19;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 *unaff_x23;
  long unaff_x27;
  long lVar15;
  long unaff_x28;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 *in_stack_000000f8;
  undefined8 *in_stack_00000b60;
  long in_stack_00000c78;
  undefined8 in_stack_00000c88;
  long in_stack_00000ca0;
  undefined8 in_stack_00000ca8;
  undefined8 in_stack_00000cb0;
  undefined4 in_stack_000083a0;
  undefined4 in_stack_000083a4;
  undefined4 in_stack_000083a8;
  undefined4 in_stack_000083ac;
  undefined4 in_stack_000083b0;
  undefined4 in_stack_000083b4;
  undefined4 in_stack_000083b8;
  undefined4 in_stack_000083bc;
  undefined4 in_stack_000083c0;
  undefined4 in_stack_000083c4;
  undefined4 in_stack_000083c8;
  undefined4 in_stack_000083cc;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000b60)();
  *(long *)(unaff_x19 + 0x2de8) = **(long **)(unaff_x19 + 0x2d08) + 0x6f8;
  *(undefined1 *)(unaff_x27 + 0x468) = 0;
  FUN_10057797c(&stack0x00000c78,unaff_x19 + 0x2de8);
  if (in_stack_00000c78 == -0x8000000000000000) {
    uVar6 = 7;
LAB_1005c6190:
    *in_stack_000000f8 = uVar6;
    *unaff_x23 = 5;
    *(undefined1 *)(unaff_x27 + 0x270) = 5;
    return 1;
  }
  *(undefined1 *)(unaff_x27 + 0x3db) = 1;
  uVar12 = *(undefined8 *)(unaff_x28 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x2d90) = *(undefined8 *)(unaff_x28 + 0x158);
  *(undefined8 *)(unaff_x19 + 0x2d88) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x2d98) = in_stack_00000c88;
  if ((((*(char *)(unaff_x27 + 0x468) == '\x03') && (*(char *)(unaff_x27 + 0x460) == '\x03')) &&
      (*(char *)(unaff_x27 + 0x458) == '\x03')) && (*(char *)(unaff_x27 + 0x410) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x2e18);
    if (*(long *)(unaff_x19 + 0x2e20) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x2e20) + 0x18))(*(undefined8 *)(unaff_x19 + 0x2e28));
    }
  }
  lVar7 = **(long **)(unaff_x19 + 0x2d08);
  *(long *)(unaff_x19 + 0x2df8) = lVar7 + 0x6f8;
  *(long *)(unaff_x19 + 0x2e00) = lVar7 + 0x1118;
  *(undefined1 *)(unaff_x27 + 0x409) = 0;
  FUN_100576380(&stack0x00000ca0,unaff_x19 + 0x2de8);
  if (in_stack_00000ca0 == -0x8000000000000000) {
    uVar6 = 8;
    goto LAB_1005c6190;
  }
  *(undefined1 *)(unaff_x27 + 0x3da) = 1;
  *(undefined8 *)(unaff_x19 + 0x2da8) = in_stack_00000ca8;
  *(long *)(unaff_x19 + 0x2da0) = in_stack_00000ca0;
  *(undefined8 *)(unaff_x19 + 0x2db0) = in_stack_00000cb0;
  FUN_100cce0d0(unaff_x19 + 0x2de8);
  *(long *)(unaff_x19 + 0x2de8) = **(long **)(unaff_x19 + 0x2d08) + 0x1118;
  *(undefined1 *)(unaff_x27 + 0x458) = 0;
  lVar7 = FUN_100fd3e50((undefined8 *)(unaff_x19 + 0x2de8));
  if (lVar7 == 0) {
    uVar6 = 9;
    goto LAB_1005c6190;
  }
  if (((*(char *)(unaff_x27 + 0x458) == '\x03') && (*(char *)(unaff_x27 + 0x450) == '\x03')) &&
     (*(char *)(unaff_x27 + 0x408) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x2e10);
    if (*(long *)(unaff_x19 + 0x2e18) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x2e18) + 0x18))(*(undefined8 *)(unaff_x19 + 0x2e20));
    }
  }
  if (*(long *)(lVar7 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00008380);
    *(undefined8 *)(lVar7 + 0x40) = param_1;
    *(undefined8 *)(lVar7 + 0x38) = 1;
    *(ulong *)(lVar7 + 0x50) = CONCAT44(in_stack_000083ac,in_stack_000083a8);
    *(ulong *)(lVar7 + 0x48) = CONCAT44(in_stack_000083a4,in_stack_000083a0);
    *(ulong *)(lVar7 + 0x60) = CONCAT44(in_stack_000083bc,in_stack_000083b8);
    *(ulong *)(lVar7 + 0x58) = CONCAT44(in_stack_000083b4,in_stack_000083b0);
    *(ulong *)(lVar7 + 0x70) = CONCAT44(in_stack_000083cc,in_stack_000083c8);
    *(ulong *)(lVar7 + 0x68) = CONCAT44(in_stack_000083c4,in_stack_000083c0);
    *(undefined1 **)(lVar7 + 0x30) = &stack0x0000ab20;
    *(long *)(lVar7 + 0x28) = 1;
  }
  plVar8 = *(long **)(lVar7 + 0x70);
  lVar2 = *plVar8;
  *plVar8 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1005c6dd4;
  *(long **)(unaff_x19 + 0x2db8) = plVar8;
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
  *(undefined8 *)(unaff_x19 + 0x2df0) = *(undefined8 *)(unaff_x19 + 0x2d58);
  *(undefined8 *)(unaff_x19 + 0x2de8) = *(undefined8 *)(unaff_x19 + 0x2d50);
  *(undefined8 *)(unaff_x19 + 0x2e00) = *(undefined8 *)(unaff_x19 + 0x2d68);
  *(undefined8 *)(unaff_x19 + 0x2df8) = *(undefined8 *)(unaff_x19 + 0x2d60);
  *(undefined8 *)(unaff_x19 + 0x2e08) = *(undefined8 *)(unaff_x19 + 0x2d70);
  *(long *)(unaff_x19 + 0x2e10) = *(long *)(unaff_x19 + 0x2db8) + 0x10;
  *(undefined1 *)(unaff_x27 + 0x480) = 0;
  lVar7 = FUN_100fd3e50(unaff_x19 + 0x2e10);
  if (lVar7 == 0) {
    uVar6 = 10;
    goto LAB_1005c6190;
  }
  if (((*(char *)(unaff_x27 + 0x480) == '\x03') && (*(char *)(unaff_x27 + 0x478) == '\x03')) &&
     (*(char *)(unaff_x27 + 0x430) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x2e38);
    if (*(long *)(unaff_x19 + 0x2e40) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x2e40) + 0x18))(*(undefined8 *)(unaff_x19 + 0x2e48));
    }
  }
  uVar16 = *(undefined8 *)(unaff_x19 + 0x2df0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x2de8);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e00);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x2df8);
  *(undefined8 *)(lVar7 + 0x180) = *(undefined8 *)(unaff_x19 + 0x2e08);
  *(undefined8 *)(lVar7 + 0x168) = uVar16;
  *(undefined8 *)(lVar7 + 0x160) = uVar12;
  *(undefined8 *)(lVar7 + 0x178) = uVar18;
  *(undefined8 *)(lVar7 + 0x170) = uVar17;
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
  *(undefined1 *)(unaff_x27 + 0x3db) = 0;
  puVar13 = (undefined8 *)(unaff_x19 + 0x2dc0);
  FUN_100e8fbb4(puVar13,&stack0x00008380);
  *(undefined1 *)(unaff_x27 + 0x3dd) = 1;
  *(undefined1 *)(unaff_x27 + 0x3da) = 0;
  lVar15 = *(long *)(unaff_x19 + 0x2da0);
  lVar7 = *(long *)(unaff_x19 + 0x2da8);
  uVar14 = *(ulong *)(unaff_x19 + 0x2db0);
  lVar2 = *(long *)(unaff_x19 + 0x2dd0);
  if ((ulong)(*(long *)(unaff_x19 + 0x2dc0) - lVar2) < uVar14) {
    thunk_FUN_108855060(puVar13,lVar2,uVar14,8,200);
    lVar2 = *(long *)(unaff_x19 + 0x2dd0);
  }
  _memcpy(*(long *)(unaff_x19 + 0x2dc8) + lVar2 * 200,lVar7,uVar14 * 200);
  *(ulong *)(unaff_x19 + 0x2dd0) = lVar2 + uVar14;
  if (lVar15 != 0) {
    _free(lVar7);
  }
  lVar2 = **(long **)(unaff_x19 + 0x2d08);
  lVar10 = *(long *)(unaff_x19 + 0x2db8);
  *(undefined1 *)(unaff_x27 + 0x3dd) = 0;
  *(undefined8 *)(unaff_x19 + 0x2df0) = *(undefined8 *)(unaff_x19 + 0x2dc8);
  *(undefined8 *)(unaff_x19 + 0x2de8) = *puVar13;
  *(undefined8 *)(unaff_x19 + 0x2df8) = *(undefined8 *)(unaff_x19 + 0x2dd0);
  *(long *)(unaff_x19 + 0x2e00) = lVar2 + 0x6f8;
  *(long *)(unaff_x19 + 0x2e08) = lVar10 + 0x10;
  *(undefined1 *)(unaff_x27 + 0x4a0) = 0;
  uVar4 = FUN_100577748(unaff_x19 + 0x2de8);
  if ((uVar4 & 1) != 0) {
    uVar6 = 0xb;
    goto LAB_1005c6190;
  }
  FUN_100d098c4(unaff_x19 + 0x2de8);
  *(long *)(unaff_x19 + 0x2de8) = **(long **)(unaff_x19 + 0x2d08) + 0x10;
  *(long *)(unaff_x19 + 0x2df0) = *(long *)(unaff_x19 + 0x2d10) + 0x10;
  *(long *)(unaff_x19 + 0x2df8) = unaff_x19 + 0x2d50;
  *(undefined1 *)(unaff_x27 + 0x438) = 0;
  uVar4 = FUN_100541264(unaff_x19 + 0x2de8);
  if ((uVar4 & 1) != 0) {
    uVar6 = 0xc;
    goto LAB_1005c6190;
  }
  if (*(char *)(unaff_x27 + 0x438) == '\x03') {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x2e28);
    puVar13 = *(undefined8 **)(unaff_x19 + 0x2e30);
    pcVar9 = (code *)*puVar13;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar12);
    }
    if (puVar13[1] != 0) {
      _free(uVar12);
    }
  }
  plVar8 = *(long **)(*(long *)(unaff_x19 + 0x2d10) + 0x7b8);
  lVar2 = *plVar8;
  *plVar8 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1005c6dd4;
  *(long **)(unaff_x19 + 0x2de8) = plVar8;
  *(undefined1 *)(unaff_x27 + 0x3dc) = 1;
  *(long *)(unaff_x19 + 0x2df0) = **(long **)(unaff_x19 + 0x2d08) + 0x1118;
  *(undefined1 *)(unaff_x27 + 0x460) = 0;
  lVar2 = FUN_100fd3e50(unaff_x19 + 0x2df0);
  if (lVar2 == 0) {
    uVar6 = 0xd;
    goto LAB_1005c6190;
  }
  if (((*(char *)(unaff_x27 + 0x460) == '\x03') && (*(char *)(unaff_x27 + 0x458) == '\x03')) &&
     (*(char *)(unaff_x27 + 0x410) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x2e18);
    if (*(long *)(unaff_x19 + 0x2e20) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x2e20) + 0x18))(*(undefined8 *)(unaff_x19 + 0x2e28));
    }
  }
  if (*(long *)(lVar2 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00008380);
    *(ulong *)(lVar2 + 0x40) = lVar7 + uVar14 * 200;
    *(long *)(lVar2 + 0x38) = lVar15;
    *(ulong *)(lVar2 + 0x50) = CONCAT44(in_stack_000083ac,in_stack_000083a8);
    *(ulong *)(lVar2 + 0x48) = CONCAT44(in_stack_000083a4,in_stack_000083a0);
    *(ulong *)(lVar2 + 0x60) = CONCAT44(in_stack_000083bc,in_stack_000083b8);
    *(ulong *)(lVar2 + 0x58) = CONCAT44(in_stack_000083b4,in_stack_000083b0);
    *(ulong *)(lVar2 + 0x70) = CONCAT44(in_stack_000083cc,in_stack_000083c8);
    *(ulong *)(lVar2 + 0x68) = CONCAT44(in_stack_000083c4,in_stack_000083c0);
    *(long *)(lVar2 + 0x30) = lVar7;
    *(long *)(lVar2 + 0x28) = lVar7;
  }
  lVar7 = **(long **)(unaff_x19 + 0x2d80);
  **(long **)(unaff_x19 + 0x2d80) = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005c6dd4;
  plVar8 = (long *)**(undefined8 **)(unaff_x19 + 0x2d08);
  lVar7 = *plVar8;
  *plVar8 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005c6dd4;
  plVar11 = *(long **)(unaff_x19 + 0x2de8);
  lVar7 = *plVar11;
  *plVar11 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005c6dd4;
  puVar13 = (undefined8 *)_malloc(0x20);
  if (puVar13 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_1005c6dd4;
  }
  puVar13[1] = 1;
  *puVar13 = 1;
  puVar13[3] = plVar11;
  puVar13[2] = plVar8;
  lVar7 = **(long **)(unaff_x19 + 0x2d10);
  **(long **)(unaff_x19 + 0x2d10) = lVar7 + 1;
  if ((lVar7 < 0) ||
     (lVar7 = **(long **)(unaff_x19 + 0x2d30), **(long **)(unaff_x19 + 0x2d30) = lVar7 + 1,
     lVar7 < 0)) goto LAB_1005c6dd4;
  __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
            (unaff_x19 + 0x2d78);
  __ZN10codex_core7session12turn_context11TurnContext38effective_reasoning_effort_for_tracing17h6aff010c206be8cbE
            (&stack0x00000c00,*(long *)(unaff_x19 + 0x2d10) + 0x10);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bRam000000010b62a4a8 - 1 < 2 ||
       ((bRam000000010b62a4a8 != 0 &&
        (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                           ), cVar3 != '\0')))) &&
      (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                          ), (uVar14 & 1) != 0)))) {
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&stack0x00000cd0,
               ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
               ,&stack0x00005c90);
  }
  else if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
    __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00005c90,&stack0x000035a0);
  }
  *(undefined1 *)(unaff_x27 + 0x3e1) = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x2d18);
  *(undefined8 *)(unaff_x28 + 0x68) = *(undefined8 *)(unaff_x19 + 0x2d20);
  *(undefined8 *)(unaff_x28 + 0x60) = uVar12;
  do {
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
  } while (bVar1);
  puVar5 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar5[9] == '\x01') {
LAB_1005c6570:
    _memcpy(&stack0x000035a0,&stack0x00000eb0,0x26e8);
    if (0x7ffffffffffffffe < *puVar5) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1005c6dd4;
    }
    *puVar5 = *puVar5 + 1;
    uVar14 = puVar5[1];
    _memcpy(&stack0x00005c90,&stack0x00000eb0,0x26e8);
    if (uVar14 != 2) {
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)puVar5[2];
        lVar7 = *plVar8;
        *plVar8 = lVar7 + 1;
        if ((-1 < lVar7) &&
           ((plVar8 = (long *)plVar8[0x5e], plVar8 == (long *)0x0 ||
            (lVar7 = *plVar8, *plVar8 = lVar7 + 1, -1 < lVar7)))) {
          _memcpy(&stack0x0000ab24,&stack0x000035a0,0x26d8);
          _memcpy((ulong)&stack0x00008380 | 0x34,&stack0x0000ab20,0x26dc);
          _posix_memalign(&stack0x00000be0,0x80,0x2780);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
        }
      }
      else {
        plVar8 = (long *)puVar5[2];
        lVar7 = *plVar8;
        *plVar8 = lVar7 + 1;
        if ((-1 < lVar7) &&
           ((plVar8 = (long *)plVar8[0x4a], plVar8 == (long *)0x0 ||
            (lVar7 = *plVar8, *plVar8 = lVar7 + 1, -1 < lVar7)))) {
          _memcpy(&stack0x0000ab24,&stack0x000035a0,0x26d8);
          _memcpy((ulong)&stack0x00008380 | 0x34,&stack0x0000ab20,0x26dc);
          _posix_memalign(&stack0x00000be0,0x80,0x2780);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
        }
      }
      goto LAB_1005c6dd4;
    }
    FUN_100dacee0(&stack0x00005c90);
    *puVar5 = *puVar5 - 1;
  }
  else {
    if ((char)puVar5[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar5,&DAT_100c35d48);
      *(undefined1 *)(puVar5 + 9) = 1;
      goto LAB_1005c6570;
    }
    FUN_100dacee0(&stack0x00000eb0);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00008380,&UNK_10b216f68);
LAB_1005c6dd4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1005c6dd8);
  (*pcVar9)();
}

