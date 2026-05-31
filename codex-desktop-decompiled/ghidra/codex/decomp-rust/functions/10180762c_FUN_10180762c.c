
void FUN_10180762c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long lVar4;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000128;
  char *pcStack0000000000000130;
  undefined1 *puStack0000000000000138;
  undefined1 *puStack0000000000000150;
  undefined8 *puStack0000000000000158;
  long lStack0000000000000160;
  undefined8 in_stack_00000178;
  undefined1 *puStack0000000000000180;
  undefined *puStack0000000000000188;
  undefined1 *puStack0000000000000190;
  undefined *puStack0000000000000198;
  undefined1 *puStack00000000000001a0;
  undefined *puStack00000000000001a8;
  undefined1 *puStack00000000000001b0;
  undefined *puStack00000000000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  puStack0000000000000138 = &stack0x00000140;
  pcStack0000000000000130 = s_Sconfigured_value_is_disallowed_b_108ac10a0;
  puStack0000000000000150 = &stack0x00000080;
  puStack0000000000000158 = &stack0x000000f0;
  lStack0000000000000160 = unaff_x20 + 0x48;
  puStack0000000000000180 = (undefined1 *)&stack0x00000130;
  puStack0000000000000188 = &UNK_10b25d1e8;
  puStack0000000000000190 = (undefined1 *)&stack0x00000150;
  puStack0000000000000198 = &UNK_10b25e5b8;
  puStack00000000000001a0 = (undefined1 *)&stack0x00000158;
  puStack00000000000001a8 = &UNK_10b25e658;
  puStack00000000000001b0 = (undefined1 *)&stack0x00000160;
  puStack00000000000001b8 = &UNK_10b25e5f8;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined1 ***)(unaff_x29 + -0x98) = &stack0x00000180;
  *(undefined8 *)(unaff_x29 + -0x90) = 4;
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa0;
  *(undefined1 *)(unaff_x29 + -0x68) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0xb0) = &DAT_1061c2098;
  (**(code **)(unaff_x23 + 0x20))();
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000168,s_Configured_value_for______is_dis_108ac10f6,&stack0x000001f0);
  lVar4 = unaff_x21[2];
  if (lVar4 == *unaff_x21) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar3 = (undefined8 *)(unaff_x21[1] + lVar4 * 0x18);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x78);
  puVar3[1] = *(undefined8 *)(unaff_x26 + 0x80);
  *puVar3 = uVar2;
  puVar3[2] = in_stack_00000178;
  unaff_x21[2] = lVar4 + 1;
  FUN_1018490a4(&stack0x00000180);
  bVar1 = puStack0000000000000180 != unaff_x25;
  if (bVar1) {
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
    uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,unaff_x29 + -0xb8);
    FUN_101957248(&stack0x000001f0);
    *(undefined8 *)(unaff_x19 + 8) = uVar2;
  }
  else {
    *(undefined1 *)(unaff_x19 + 1) = 1;
  }
  *(bool *)unaff_x19 = bVar1;
  FUN_101957248(&stack0x00000080);
  return;
}

