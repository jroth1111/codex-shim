
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005610dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar6;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long lStack00000000000000c8;
  undefined1 *puStack00000000000000f8;
  undefined8 in_stack_00000110;
  long lStack0000000000000118;
  long lStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000180;
  
  *(undefined8 *)(unaff_x29 + -0x68) = in_x9;
  *(undefined **)(unaff_x29 + -0x60) = &DAT_100c7b3a0;
  *(char **)(unaff_x29 + -0x78) = s_Sconfigured_value_is_disallowed_b_108ac10a0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x68;
  puStack00000000000000f8 = &stack0x00000018;
  lStack00000000000000c8 = (long)&stack0x00000088 + 7;
  *(long *)(unaff_x29 + -0xe8) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0xe0) = &UNK_10b208fd0;
  *(undefined1 ***)(unaff_x29 + -0xd8) = &stack0x000000f8;
  *(undefined **)(unaff_x29 + -0xd0) = &UNK_10b217688;
  *(long **)(unaff_x29 + -200) = &stack0x000000c8;
  *(undefined **)(unaff_x29 + -0xc0) = &UNK_10b217728;
  *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x000000d8;
  *(undefined **)(unaff_x29 + -0xb0) = &UNK_10b2176c8;
  lStack0000000000000120 = unaff_x29 + -0xe8;
  lStack0000000000000118 = 1;
  uStack0000000000000128 = 4;
  uStack0000000000000130 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000118);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar6 = *unaff_x22;
    in_stack_000000b0 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_000000b8 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_000000a8 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000000a8);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,&stack0x000000a8,&stack0x00000118);
    }
  }
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000008;
  *(undefined **)(unaff_x29 + -0xe0) = &DAT_100c7b3a0;
  *(long *)(unaff_x29 + -0xd8) = (long)&stack0x00000088 + 7;
  *(undefined **)(unaff_x29 + -0xd0) = &DAT_1011dc720;
  *(undefined1 **)(unaff_x29 + -200) = &stack0x00000018;
  *(undefined **)(unaff_x29 + -0xc0) =
       &
       __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
  ;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000100,s_Configured_value_for______is_dis_108ac10f6,unaff_x29 + -0xe8);
  lVar6 = unaff_x21[2];
  if (lVar6 == *unaff_x21) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar5 = (undefined8 *)(unaff_x21[1] + lVar6 * 0x18);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x70);
  puVar5[1] = *(undefined8 *)(unaff_x26 + 0x78);
  *puVar5 = uVar4;
  puVar5[2] = in_stack_00000110;
  unaff_x21[2] = lVar6 + 1;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    in_stack_00000088._7_1_ =
         (**(code **)(*(long *)(unaff_x20 + 0x48) + 0x28))
                   (*(long *)(unaff_x20 + 0x40) +
                    (*(long *)(*(long *)(unaff_x20 + 0x48) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                    ,in_stack_00000088._7_1_);
  }
  in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,in_stack_00000088._7_1_);
  (**(code **)(*(long *)(unaff_x20 + 0x38) + 0x28))
            (unaff_x29 + -0xe8,
             *(long *)(unaff_x20 + 0x30) +
             (*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
             &stack0x000000a8);
  lVar6 = *(long *)(unaff_x29 + -0xe8);
  if (lVar6 != unaff_x25) {
    uVar7 = *(undefined8 *)(unaff_x27 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x27 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x27 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x27 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x27 + 0x58);
    *(undefined8 *)(unaff_x26 + 0xd8) = *(undefined8 *)(unaff_x27 + 0x50);
    *(undefined8 *)(unaff_x26 + 0xd0) = uVar8;
    *(undefined8 *)(unaff_x26 + 0xe8) = uVar10;
    *(undefined8 *)(unaff_x26 + 0xe0) = uVar9;
    in_stack_00000180 = *(undefined8 *)(unaff_x29 + -0x80);
    uVar8 = *(undefined8 *)(unaff_x27 + 8);
    uVar10 = *(undefined8 *)(unaff_x27 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x27 + 0x18);
    *(undefined8 *)(unaff_x26 + 0x98) = *(undefined8 *)(unaff_x27 + 0x10);
    *(undefined8 *)(unaff_x26 + 0x90) = uVar8;
    *(undefined8 *)(unaff_x26 + 0xa8) = uVar10;
    *(undefined8 *)(unaff_x26 + 0xa0) = uVar9;
    uVar8 = *(undefined8 *)(unaff_x27 + 0x28);
    *(undefined8 *)(unaff_x26 + 0xb8) = *(undefined8 *)(unaff_x27 + 0x30);
    *(undefined8 *)(unaff_x26 + 0xb0) = uVar8;
    *(undefined8 *)(unaff_x26 + 200) = uVar7;
    *(undefined8 *)(unaff_x26 + 0xc0) = uVar4;
    *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000008;
    *(undefined **)(unaff_x29 + -0xe0) = &DAT_100c7b3a0;
    *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000018;
    *(undefined **)(unaff_x29 + -0xd0) =
         &
         __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
    ;
    *(long **)(unaff_x29 + -200) = &stack0x00000118;
    *(undefined **)(unaff_x29 + -0xc0) =
         &
         __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
    ;
    lStack0000000000000118 = lVar6;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000a8,s_configured_value_for______is_dis_108ac115e,unaff_x29 + -0xe8);
    uVar4 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x000000a8);
    FUN_100e11d38(&stack0x00000118);
    *(undefined8 *)(unaff_x19 + 8) = uVar4;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x50) = in_stack_00000088._7_1_;
    *(undefined1 *)(unaff_x19 + 1) = 1;
  }
  *(bool *)unaff_x19 = lVar6 != unaff_x25;
  FUN_100e11d38(&stack0x00000018);
  return;
}

