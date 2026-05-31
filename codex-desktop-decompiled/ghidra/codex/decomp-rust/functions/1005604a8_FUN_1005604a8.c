
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005604a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar8;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 *puStack0000000000000130;
  long lStack0000000000000140;
  undefined1 *puStack0000000000000160;
  undefined8 in_stack_00000178;
  long lStack0000000000000180;
  undefined1 *puStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
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
  
  *(char **)(unaff_x29 + -0x70) = s_Sconfigured_value_is_disallowed_b_108ac10a0;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xb8;
  puStack0000000000000160 = &stack0x00000080;
  puStack0000000000000130 = &stack0x000000f0;
  lStack0000000000000140 = unaff_x20 + 0x48;
  puStack0000000000000188 = &stack0x000001f0;
  lStack0000000000000180 = 1;
  uStack0000000000000190 = 4;
  uStack0000000000000198 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000180);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar8 = *unaff_x22;
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xa0) = 2;
    *(undefined8 *)(unaff_x29 + -0x98) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xa0);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar8,puVar2,puVar1,unaff_x29 + -0xa0,&stack0x00000180);
    }
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000168,s_Configured_value_for______is_dis_108ac10f6,&stack0x000001f0);
  lVar8 = unaff_x21[2];
  if (lVar8 == *unaff_x21) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar7 = (undefined8 *)(unaff_x21[1] + lVar8 * 0x18);
  uVar6 = *(undefined8 *)(unaff_x26 + 0x78);
  puVar7[1] = *(undefined8 *)(unaff_x26 + 0x80);
  *puVar7 = uVar6;
  puVar7[2] = in_stack_00000178;
  unaff_x21[2] = lVar8 + 1;
  FUN_10072e0b8(&stack0x00000180);
  bVar4 = lStack0000000000000180 != unaff_x25;
  if (bVar4) {
    *(BADSPACEBASE **)(unaff_x29 + -0xa0) = register0x00000008;
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x27;
    *(undefined1 **)(unaff_x29 + -0x90) = &stack0x00000080;
    *(undefined **)(unaff_x29 + -0x88) =
         &
         __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
    ;
    *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000001f0;
    *(undefined **)(unaff_x29 + -0x78) =
         &
         __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xb8,s_configured_value_for______is_dis_108ac115e,unaff_x29 + -0xa0);
    uVar6 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,unaff_x29 + -0xb8);
    FUN_100e11d38(&stack0x000001f0);
    *(undefined8 *)(unaff_x19 + 8) = uVar6;
  }
  else {
    *(undefined1 *)(unaff_x19 + 1) = 1;
  }
  *(bool *)unaff_x19 = bVar4;
  FUN_100e11d38(&stack0x00000080);
  return;
}

