
/* WARNING: Removing unreachable block (ram,0x0001005f1bf8) */
/* WARNING: Removing unreachable block (ram,0x0001005f1c2c) */
/* WARNING: Removing unreachable block (ram,0x0001005f1c54) */
/* WARNING: Removing unreachable block (ram,0x0001005f1c58) */
/* WARNING: Removing unreachable block (ram,0x0001005f1d10) */
/* WARNING: Removing unreachable block (ram,0x0001005f1d44) */
/* WARNING: Removing unreachable block (ram,0x0001005f1d6c) */
/* WARNING: Removing unreachable block (ram,0x0001005f1d70) */
/* WARNING: Removing unreachable block (ram,0x0001005f1d7c) */
/* WARNING: Removing unreachable block (ram,0x0001005f1dd4) */
/* WARNING: Removing unreachable block (ram,0x0001005f1dc8) */
/* WARNING: Removing unreachable block (ram,0x0001005f1df4) */
/* WARNING: Removing unreachable block (ram,0x0001005f1e1c) */
/* WARNING: Removing unreachable block (ram,0x0001005f1e7c) */
/* WARNING: Removing unreachable block (ram,0x0001005f1e84) */
/* WARNING: Removing unreachable block (ram,0x0001005f1ea8) */
/* WARNING: Removing unreachable block (ram,0x0001005f1eb4) */
/* WARNING: Removing unreachable block (ram,0x0001005f1ecc) */
/* WARNING: Removing unreachable block (ram,0x0001005f1ed8) */
/* WARNING: Removing unreachable block (ram,0x0001005f1f0c) */
/* WARNING: Removing unreachable block (ram,0x0001005f19c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005f0b20(undefined8 param_1)

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
  long *plVar10;
  long unaff_x19;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *unaff_x26;
  long lVar14;
  undefined8 *unaff_x28;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *in_stack_00000040;
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
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 *in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00005018;
  undefined8 in_stack_00005020;
  undefined8 in_stack_00005028;
  undefined8 in_stack_00007720;
  undefined8 in_stack_00007728;
  undefined8 in_stack_00007730;
  undefined8 in_stack_00007738;
  undefined8 in_stack_00007740;
  undefined8 in_stack_00007748;
  
  FUN_10053a4a4(&stack0x00007700);
  (**(code **)*in_stack_00000170)();
  *(long *)(unaff_x19 + 0x210) = **(long **)(unaff_x19 + 0x130) + 0x6f8;
  *(undefined1 *)(unaff_x19 + 0x290) = 0;
  FUN_10057797c(&stack0x000000c8,unaff_x19 + 0x210);
  if (in_stack_000000c8 == -0x8000000000000000) {
    uVar6 = 7;
LAB_1005f1380:
    *in_stack_00000040 = uVar6;
    *unaff_x26 = 5;
    *(undefined1 *)(unaff_x19 + 0x60) = 5;
    return 1;
  }
  *(undefined1 *)(unaff_x19 + 0x203) = 1;
  *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_000000d0;
  *(long *)(unaff_x19 + 0x1b0) = in_stack_000000c8;
  *(undefined8 *)(unaff_x19 + 0x1c0) = in_stack_000000d8;
  if ((((*(char *)(unaff_x19 + 0x290) == '\x03') && (*(char *)(unaff_x19 + 0x288) == '\x03')) &&
      (*(char *)(unaff_x19 + 0x280) == '\x03')) && (*(char *)(unaff_x19 + 0x238) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x240);
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x248) + 0x18))(*(undefined8 *)(unaff_x19 + 0x250));
    }
  }
  lVar7 = **(long **)(unaff_x19 + 0x130);
  *(long *)(unaff_x19 + 0x220) = lVar7 + 0x6f8;
  *(long *)(unaff_x19 + 0x228) = lVar7 + 0x1118;
  *(undefined1 *)(unaff_x19 + 0x231) = 0;
  FUN_100576380(&stack0x000000e0,unaff_x19 + 0x210);
  if (in_stack_000000e0 == -0x8000000000000000) {
    uVar6 = 8;
    goto LAB_1005f1380;
  }
  *(undefined1 *)(unaff_x19 + 0x202) = 1;
  *(undefined8 *)(unaff_x19 + 0x1d8) = in_stack_000000f0;
  *(undefined8 *)(unaff_x19 + 0x1d0) = in_stack_000000e8;
  *(long *)(unaff_x19 + 0x1c8) = in_stack_000000e0;
  FUN_100cce0d0(unaff_x19 + 0x210);
  *(long *)(unaff_x19 + 0x210) = **(long **)(unaff_x19 + 0x130) + 0x1118;
  *(undefined1 *)(unaff_x19 + 0x280) = 0;
  lVar7 = FUN_100fd3e50((undefined8 *)(unaff_x19 + 0x210));
  if (lVar7 == 0) {
    uVar6 = 9;
    goto LAB_1005f1380;
  }
  if (((*(char *)(unaff_x19 + 0x280) == '\x03') && (*(char *)(unaff_x19 + 0x278) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x230) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x238);
    if (*(long *)(unaff_x19 + 0x240) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x240) + 0x18))(*(undefined8 *)(unaff_x19 + 0x248));
    }
  }
  if (*(long *)(lVar7 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00007700);
    *(undefined8 *)(lVar7 + 0x40) = param_1;
    *(undefined8 *)(lVar7 + 0x38) = 1;
    *(undefined8 *)(lVar7 + 0x50) = in_stack_00007728;
    *(undefined8 *)(lVar7 + 0x48) = in_stack_00007720;
    *(undefined8 *)(lVar7 + 0x60) = in_stack_00007738;
    *(undefined8 *)(lVar7 + 0x58) = in_stack_00007730;
    *(undefined8 *)(lVar7 + 0x70) = in_stack_00007748;
    *(undefined8 *)(lVar7 + 0x68) = in_stack_00007740;
    *(undefined1 **)(lVar7 + 0x30) = &stack0x00000240;
    *(long *)(lVar7 + 0x28) = 1;
  }
  plVar8 = *(long **)(lVar7 + 0x70);
  lVar2 = *plVar8;
  *plVar8 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1005f25d0;
  *(long **)(unaff_x19 + 0x1e0) = plVar8;
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
  *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x198);
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x180);
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x178);
  *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 400);
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x188);
  *(long *)(unaff_x19 + 0x238) = *(long *)(unaff_x19 + 0x1e0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
  lVar7 = FUN_100fd3e50(unaff_x19 + 0x238);
  if (lVar7 == 0) {
    uVar6 = 10;
    goto LAB_1005f1380;
  }
  if (((*(char *)(unaff_x19 + 0x2a8) == '\x03') && (*(char *)(unaff_x19 + 0x2a0) == '\x03')) &&
     (*(char *)(unaff_x19 + 600) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x268) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x268) + 0x18))(*(undefined8 *)(unaff_x19 + 0x270));
    }
  }
  uVar15 = *(undefined8 *)(unaff_x19 + 0x218);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x210);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x228);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x220);
  *(undefined8 *)(lVar7 + 0x180) = *(undefined8 *)(unaff_x19 + 0x230);
  *(undefined8 *)(lVar7 + 0x168) = uVar15;
  *(undefined8 *)(lVar7 + 0x160) = uVar13;
  *(undefined8 *)(lVar7 + 0x178) = uVar17;
  *(undefined8 *)(lVar7 + 0x170) = uVar16;
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
  *(undefined1 *)(unaff_x19 + 0x203) = 0;
  puVar11 = (undefined8 *)(unaff_x19 + 0x1e8);
  FUN_100e8fbb4(puVar11,&stack0x00007700);
  *(undefined1 *)(unaff_x19 + 0x205) = 1;
  *(undefined1 *)(unaff_x19 + 0x202) = 0;
  lVar7 = *(long *)(unaff_x19 + 0x1c8);
  lVar2 = *(long *)(unaff_x19 + 0x1d0);
  uVar12 = *(ulong *)(unaff_x19 + 0x1d8);
  lVar14 = *(long *)(unaff_x19 + 0x1f8);
  if ((ulong)(*(long *)(unaff_x19 + 0x1e8) - lVar14) < uVar12) {
    thunk_FUN_108855060(puVar11,lVar14,uVar12,8,200);
    lVar14 = *(long *)(unaff_x19 + 0x1f8);
  }
  _memcpy(*(long *)(unaff_x19 + 0x1f0) + lVar14 * 200,lVar2,uVar12 * 200);
  *(ulong *)(unaff_x19 + 0x1f8) = lVar14 + uVar12;
  if (lVar7 != 0) {
    _free(lVar2);
  }
  lVar14 = **(long **)(unaff_x19 + 0x130);
  *(undefined1 *)(unaff_x19 + 0x205) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x210) = *puVar11;
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x1f8);
  *(long *)(unaff_x19 + 0x228) = lVar14 + 0x6f8;
  *(long *)(unaff_x19 + 0x230) = *(long *)(unaff_x19 + 0x1e0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
  uVar4 = FUN_100577748(unaff_x19 + 0x210);
  if ((uVar4 & 1) != 0) {
    uVar6 = 0xb;
    goto LAB_1005f1380;
  }
  FUN_100d098c4(unaff_x19 + 0x210);
  *(long *)(unaff_x19 + 0x210) = **(long **)(unaff_x19 + 0x130) + 0x10;
  *(long *)(unaff_x19 + 0x218) = *(long *)(unaff_x19 + 0x138) + 0x10;
  *(long *)(unaff_x19 + 0x220) = unaff_x19 + 0x178;
  *(undefined1 *)(unaff_x19 + 0x260) = 0;
  uVar4 = FUN_100541264(unaff_x19 + 0x210);
  if ((uVar4 & 1) != 0) {
    uVar6 = 0xc;
    goto LAB_1005f1380;
  }
  if (*(char *)(unaff_x19 + 0x260) == '\x03') {
    uVar13 = *(undefined8 *)(unaff_x19 + 0x250);
    puVar11 = *(undefined8 **)(unaff_x19 + 600);
    pcVar9 = (code *)*puVar11;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar13);
    }
    if (puVar11[1] != 0) {
      _free(uVar13);
    }
  }
  plVar8 = *(long **)(*(long *)(unaff_x19 + 0x138) + 0x7b8);
  lVar14 = *plVar8;
  *plVar8 = lVar14 + 1;
  if (lVar14 < 0) goto LAB_1005f25d0;
  *(long **)(unaff_x19 + 0x210) = plVar8;
  *(undefined1 *)(unaff_x19 + 0x204) = 1;
  *(long *)(unaff_x19 + 0x218) = **(long **)(unaff_x19 + 0x130) + 0x1118;
  *(undefined1 *)(unaff_x19 + 0x288) = 0;
  lVar14 = FUN_100fd3e50(unaff_x19 + 0x218);
  if (lVar14 == 0) {
    uVar6 = 0xd;
    goto LAB_1005f1380;
  }
  if (((*(char *)(unaff_x19 + 0x288) == '\x03') && (*(char *)(unaff_x19 + 0x280) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x238) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x240);
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x248) + 0x18))(*(undefined8 *)(unaff_x19 + 0x250));
    }
  }
  if (*(long *)(lVar14 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00007700);
    *(ulong *)(lVar14 + 0x40) = lVar2 + uVar12 * 200;
    *(long *)(lVar14 + 0x38) = lVar7;
    *(undefined8 *)(lVar14 + 0x50) = in_stack_00007728;
    *(undefined8 *)(lVar14 + 0x48) = in_stack_00007720;
    *(undefined8 *)(lVar14 + 0x60) = in_stack_00007738;
    *(undefined8 *)(lVar14 + 0x58) = in_stack_00007730;
    *(undefined8 *)(lVar14 + 0x70) = in_stack_00007748;
    *(undefined8 *)(lVar14 + 0x68) = in_stack_00007740;
    *(long *)(lVar14 + 0x30) = lVar2;
    *(long *)(lVar14 + 0x28) = lVar2;
  }
  plVar8 = *(long **)(unaff_x19 + 0x1a8);
  lVar7 = *plVar8;
  *plVar8 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005f25d0;
  plVar10 = (long *)**(undefined8 **)(unaff_x19 + 0x130);
  lVar7 = *plVar10;
  *plVar10 = lVar7 + 1;
  in_stack_000000f8 = plVar8;
  if (lVar7 < 0) goto LAB_1005f25d0;
  plVar8 = *(long **)(unaff_x19 + 0x210);
  lVar7 = *plVar8;
  *plVar8 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005f25d0;
  puVar11 = (undefined8 *)_malloc(0x20);
  if (puVar11 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_1005f25d0;
  }
  puVar11[1] = 1;
  *puVar11 = 1;
  puVar11[3] = plVar8;
  puVar11[2] = plVar10;
  plVar8 = *(long **)(unaff_x19 + 0x138);
  lVar7 = *plVar8;
  *plVar8 = lVar7 + 1;
  in_stack_00000100 = puVar11;
  if (lVar7 < 0) goto LAB_1005f25d0;
  uVar13 = unaff_x28[1];
  plVar10 = (long *)*unaff_x28;
  lVar7 = *plVar10;
  *plVar10 = lVar7 + 1;
  in_stack_00000108 = plVar8;
  if (lVar7 < 0) goto LAB_1005f25d0;
  in_stack_00000110 = plVar10;
  in_stack_00000118 = uVar13;
  in_stack_00000120 =
       __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                 (unaff_x19 + 0x1a0);
  __ZN10codex_core7session12turn_context11TurnContext38effective_reasoning_effort_for_tracing17h6aff010c206be8cbE
            (&stack0x00000128,*(long *)(unaff_x19 + 0x138) + 0x10);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bRam000000010b62a4a8 - 1 < 2 ||
       ((bRam000000010b62a4a8 != 0 &&
        (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                           ), cVar3 != '\0')))) &&
      (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                          ), (uVar12 & 1) != 0)))) {
    in_stack_00000170 = (undefined8 *)(**(long **)(unaff_x19 + 0x130) + 0x790);
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&stack0x00000140,
               ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
               ,&stack0x00005010);
  }
  else {
    uVar13 = 
    ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
    ;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      in_stack_00000170 = (undefined8 *)(*(long *)(unaff_x19 + 0x138) + 0x240);
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00005010,&stack0x00002928);
    }
    in_stack_00000160 = uVar13;
    in_stack_00000140 = (undefined8 *)0x2;
    in_stack_00000148 = in_stack_00005018;
    in_stack_00000150 = in_stack_00005020;
    in_stack_00000158 = in_stack_00005028;
  }
  *(undefined1 *)(unaff_x19 + 0x209) = 0;
  in_stack_000001a0 = *(undefined8 *)(unaff_x19 + 0x148);
  in_stack_00000198 = *(undefined8 *)(unaff_x19 + 0x140);
  in_stack_000001a8 = *(undefined8 *)(unaff_x19 + 0x150);
  in_stack_00000178 = in_stack_00000148;
  in_stack_00000170 = in_stack_00000140;
  in_stack_00000188 = in_stack_00000158;
  in_stack_00000180 = in_stack_00000150;
  in_stack_00000190 = in_stack_00000160;
  do {
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
  } while (bVar1);
  puVar5 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar5[9] == '\x01') {
LAB_1005f1aa4:
    _memcpy(&stack0x00002928,&stack0x00000240,0x26e8);
    if (0x7ffffffffffffffe < *puVar5) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1005f25d0;
    }
    *puVar5 = *puVar5 + 1;
    uVar12 = puVar5[1];
    _memcpy(&stack0x00005010,&stack0x00000240,0x26e8);
    if (uVar12 != 2) {
      if ((uVar12 & 1) == 0) {
        plVar8 = (long *)puVar5[2];
        lVar7 = *plVar8;
        *plVar8 = lVar7 + 1;
        if ((-1 < lVar7) &&
           ((plVar8 = (long *)plVar8[0x5e], plVar8 == (long *)0x0 ||
            (lVar7 = *plVar8, *plVar8 = lVar7 + 1, -1 < lVar7)))) {
          _memcpy(&stack0x00009e94,&stack0x00002928,0x26d8);
          _memcpy((ulong)&stack0x00007700 | 0x34,&stack0x00009e90,0x26dc);
          _posix_memalign(&stack0x0000c570,0x80,0x2780);
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
          _memcpy(&stack0x00009e94,&stack0x00002928,0x26d8);
          _memcpy((ulong)&stack0x00007700 | 0x34,&stack0x00009e90,0x26dc);
          _posix_memalign(&stack0x0000c570,0x80,0x2780);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
        }
      }
      goto LAB_1005f25d0;
    }
    FUN_100dacee0(&stack0x00005010);
    *puVar5 = *puVar5 - 1;
  }
  else {
    if ((char)puVar5[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar5,&DAT_100c35d48);
      *(undefined1 *)(puVar5 + 9) = 1;
      goto LAB_1005f1aa4;
    }
    FUN_100dacee0(&stack0x00000240);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00007700,&UNK_10b216f68);
LAB_1005f25d0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1005f25d4);
  (*pcVar9)();
}

