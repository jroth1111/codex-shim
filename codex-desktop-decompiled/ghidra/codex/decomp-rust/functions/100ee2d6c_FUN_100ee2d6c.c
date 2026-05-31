
/* WARNING: Removing unreachable block (ram,0x000100ee7af4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7b20) */
/* WARNING: Removing unreachable block (ram,0x000100ee7b04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee2d6c(void)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  long unaff_x19;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *unaff_x28;
  ulong in_xzr;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 *in_stack_000000c0;
  char *pcStack00000000000000c8;
  undefined1 *puStack00000000000000d0;
  char *in_stack_000010b0;
  
  puStack00000000000000d0 = &stack0x00002f70;
  pcStack00000000000000c8 = s_Error_killing_child__108ad38ee;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0x281) = 0;
  uVar11 = *(undefined8 *)(unaff_x19 + 600);
  puVar12 = *(undefined8 **)(unaff_x19 + 0x260);
  pcVar8 = (code *)*puVar12;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar11);
  }
  if (puVar12[1] != 0) {
    _free(uVar11);
  }
  *in_stack_000000c0 = 1;
  func_0x000100cdf9c4();
  *unaff_x28 = 1;
  FUN_100d93ec8(in_stack_000000b0);
  if (in_stack_000010b0 != (char *)0x0) {
    pcStack00000000000000c8 = in_stack_000010b0;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b639e48 - 1 < 2 ||
         ((bRam000000010b639e48 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha05bb2f61a50bf97E
                             ), cVar5 != '\0')))) &&
        (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha05bb2f61a50bf97E
                           ), (uVar7 & 1) != 0)))) {
      FUN_100ee9e50(&stack0x00002f70);
    }
    else {
      uVar11 = 
      ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha05bb2f61a50bf97E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00001800);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar11,puVar3,puVar2,&stack0x000023e0,&stack0x00002f70);
        }
      }
    }
    if (((ulong)pcStack00000000000000c8 & 3) == 1) {
      pcVar10 = pcStack00000000000000c8 + -1;
      uVar11 = *(undefined8 *)pcVar10;
      puVar12 = *(undefined8 **)(pcStack00000000000000c8 + 7);
      pcVar8 = (code *)*puVar12;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar12[1] != 0) {
        _free(uVar11);
      }
      _free(pcVar10);
    }
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
      ((bRam000000010b639e60 - 1 < 2 ||
       ((bRam000000010b639e60 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca31e44574026eeeE
                           ), cVar5 != '\0')))))) &&
     (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca31e44574026eeeE
                        ), (uVar7 & 1) != 0)) {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca31e44574026eeeE
               ,&stack0x000023e0);
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00001850);
      if (iVar6 != 0) {
        pcStack00000000000000c8 = &stack0x000023e0;
        puStack00000000000000d0 = (undefined1 *)CONCAT71(puStack00000000000000d0._1_7_,1);
        (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00003b00);
      }
    }
  }
  else {
    uVar11 = 
    ___ZN4rmcp7service11serve_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca31e44574026eeeE;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00001818);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar11,puVar3,puVar2,&stack0x000023e0,&stack0x00002f70);
      }
    }
  }
  uVar13 = *(undefined8 *)(unaff_x19 + 800);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x328);
  *(undefined1 *)(unaff_x19 + 0x22a) = 0;
  FUN_100d08598(unaff_x19 + 0x218);
  FUN_100d8a694(unaff_x19 + 0x1f8);
  func_0x000100e500e8(unaff_x19 + 0x158);
  FUN_100d88a98(unaff_x19 + 0xa0);
  FUN_100d1cbf4(unaff_x19 + 0xa8);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0xb0);
  lVar4 = **(long **)(unaff_x19 + 0xb0);
  **(long **)(unaff_x19 + 0xb0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0xb0);
  }
  FUN_100d98638(unaff_x19 + 0xb8);
  FUN_100d4bbf8(unaff_x19 + 0xe8);
  lVar4 = **(long **)(unaff_x19 + 0x118);
  **(long **)(unaff_x19 + 0x118) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(unaff_x19 + 0x118);
  }
  lVar9 = *(long *)(unaff_x19 + 0x120);
  LOAcquire();
  lVar4 = *(long *)(lVar9 + 0x1f0);
  *(long *)(lVar9 + 0x1f0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    LOAcquire();
    lVar4 = *(long *)(lVar9 + 0x88);
    *(long *)(lVar9 + 0x88) = lVar4 + 1;
    lVar4 = func_0x000100fca1bc(lVar9 + 0x80,lVar4);
    *(ulong *)(lVar4 + 0x6910) = *(ulong *)(lVar4 + 0x6910) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar9 + 0x110);
    LOAcquire();
    uVar7 = *puVar1;
    *puVar1 = uVar7 | 2;
    LORelease();
    if (uVar7 == 0) {
      lVar4 = *(long *)(lVar9 + 0x100);
      *(undefined8 *)(lVar9 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar9 + 0x108));
      }
    }
  }
  lVar4 = **(long **)(unaff_x19 + 0x120);
  **(long **)(unaff_x19 + 0x120) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17habd5cadfed2cfecbE(unaff_x19 + 0x120);
  }
  func_0x000100e4bffc(unaff_x19 + 0x128);
  in_stack_000000a8[1] = uVar13;
  *in_stack_000000a8 = uVar11;
  in_stack_000000a8[3] = uVar15;
  in_stack_000000a8[2] = uVar14;
  *(undefined1 *)(unaff_x19 + 0x228) = 1;
  return;
}

