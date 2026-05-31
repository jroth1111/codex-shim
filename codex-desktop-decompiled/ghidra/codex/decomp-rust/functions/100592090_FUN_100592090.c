
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100592090(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  undefined8 *in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 *in_stack_0000c900;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_0000c900)();
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b62ab28 - 1 < 2 ||
       ((bRam000000010b62ab28 != 0 &&
        (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h16ec20dfd6d466fdE
                           ), unaff_x19 = in_stack_00000188, cVar6 != '\0')))) &&
      (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h16ec20dfd6d466fdE
                         ), (uVar8 & 1) != 0)))) {
    FUN_10059e23c(&stack0x00007f40);
  }
  else {
    uVar4 = 
    ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h16ec20dfd6d466fdE
    ;
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
      iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000258);
      if (iVar7 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar4,puVar3,puVar2,&stack0x00004330,&stack0x00007f40);
      }
    }
  }
  FUN_100df5738(unaff_x19 + 0xac8);
  FUN_100e08e20(unaff_x19 + 0x268);
  puVar1 = (undefined8 *)(unaff_x19 + 0x260);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (puVar1);
  lVar5 = *(long *)*puVar1;
  *(long *)*puVar1 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
  }
  lVar9 = *(long *)(unaff_x19 + 0x250);
  lVar5 = lVar9;
  for (lVar10 = *(long *)(unaff_x19 + 600); lVar10 != 0; lVar10 = lVar10 + -1) {
    FUN_100e06c08(lVar5);
    lVar5 = lVar5 + 0x38;
  }
  if (*(long *)(unaff_x19 + 0x248) != 0) {
    _free(lVar9);
  }
  lVar5 = **(long **)(unaff_x19 + 0x240);
  **(long **)(unaff_x19 + 0x240) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(unaff_x19 + 0x240);
  }
  lVar5 = **(long **)(unaff_x19 + 0x238);
  **(long **)(unaff_x19 + 0x238) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x238);
  }
  lVar5 = **(long **)(unaff_x19 + 0x230);
  **(long **)(unaff_x19 + 0x230) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(unaff_x19 + 0x230);
  }
  *in_stack_00000180 = 0x8000000000000000;
  in_stack_00000180[2] = in_stack_00000508;
  in_stack_00000180[1] = in_stack_00000500;
  *(undefined1 *)(unaff_x19 + 0xab0) = 1;
  return;
}

