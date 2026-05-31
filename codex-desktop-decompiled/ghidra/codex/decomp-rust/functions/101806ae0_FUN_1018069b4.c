
void FUN_1018069b4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long lVar7;
  long unaff_x24;
  undefined1 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 uStack00000000000000a8;
  undefined1 *puStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  char *pcStack00000000000000c8;
  undefined1 *puStack00000000000000d0;
  undefined *puStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  long lStack00000000000000f0;
  undefined8 in_stack_00000110;
  undefined1 *puStack0000000000000118;
  undefined *puStack0000000000000120;
  undefined1 *puStack0000000000000128;
  undefined *puStack0000000000000130;
  undefined1 *puStack0000000000000138;
  undefined *puStack0000000000000140;
  undefined1 *puStack0000000000000148;
  undefined *puStack0000000000000150;
  undefined8 in_stack_00000180;
  
  puStack00000000000000d0 = &stack0x000000d8;
  pcStack00000000000000c8 = s_Sconfigured_value_is_disallowed_b_108ac10a0;
  puStack00000000000000e8 = &stack0x00000018;
  puStack00000000000000e0 = &DAT_10192d9a4;
  lStack00000000000000f0 = (long)&stack0x00000088 + 7;
  puStack0000000000000118 = (undefined1 *)&stack0x000000c8;
  puStack0000000000000120 = &UNK_10b25d1e8;
  puStack0000000000000128 = (undefined1 *)&stack0x000000e8;
  puStack0000000000000130 = &UNK_10b25e5b8;
  puStack0000000000000138 = (undefined1 *)&stack0x000000f0;
  puStack0000000000000140 = &UNK_10b25e618;
  puStack0000000000000148 = &stack0x000000f8;
  puStack0000000000000150 = &UNK_10b25e5f8;
  puStack00000000000000b0 = (undefined1 *)&stack0x00000118;
  uStack00000000000000a8 = 1;
  uStack00000000000000b8 = 4;
  lVar7 = *(long *)(unaff_x24 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x24 + 0x68);
  lVar3 = *(long *)(unaff_x24 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x24 + 0x58);
  uVar4 = 1;
  if (lVar3 == 0) {
    uVar4 = 2;
  }
  uVar1 = *(undefined4 *)(unaff_x24 + 8);
  uVar2 = *(undefined4 *)(unaff_x24 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x78) = &stack0x000000a8;
  *(undefined1 *)(unaff_x29 + -0x70) = 1;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
  uVar11 = 1;
  if (lVar7 == 0) {
    uVar11 = 2;
  }
  uVar8 = *unaff_x26;
  *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x26[1];
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_000000a0;
  *(char **)(unaff_x29 + -0x98) = s__108b39f4f;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x68;
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar4;
  *(long *)(unaff_x29 + -0xe0) = lVar3;
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar10;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar11;
  *(long *)(unaff_x29 + -200) = lVar7;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar9;
  *(undefined4 *)(unaff_x29 + -0xa0) = uVar1;
  *(undefined4 *)(unaff_x29 + -0x9c) = uVar2;
  uStack00000000000000c0 = param_1;
  (**(code **)(unaff_x23 + 0x20))();
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000008;
  *(undefined **)(unaff_x29 + -0xe0) = &DAT_10192d9a4;
  *(long *)(unaff_x29 + -0xd8) = (long)&stack0x00000088 + 7;
  *(undefined **)(unaff_x29 + -0xd0) = &DAT_1017f5818;
  *(undefined1 **)(unaff_x29 + -200) = &stack0x00000018;
  *(undefined **)(unaff_x29 + -0xc0) =
       &
       __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
  ;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000100,s_Configured_value_for______is_dis_108ac10f6,unaff_x29 + -0xe8);
  lVar7 = unaff_x21[2];
  if (lVar7 == *unaff_x21) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE();
  }
  puVar5 = (undefined8 *)(unaff_x21[1] + lVar7 * 0x18);
  uVar4 = unaff_x26[0xe];
  puVar5[1] = unaff_x26[0xf];
  *puVar5 = uVar4;
  puVar5[2] = in_stack_00000110;
  unaff_x21[2] = lVar7 + 1;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    in_stack_00000088._7_1_ =
         (**(code **)(*(long *)(unaff_x20 + 0x48) + 0x28))
                   (*(long *)(unaff_x20 + 0x40) +
                    (*(long *)(*(long *)(unaff_x20 + 0x48) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                    ,in_stack_00000088._7_1_);
  }
  uStack00000000000000a8 = CONCAT71(uStack00000000000000a8._1_7_,in_stack_00000088._7_1_);
  (**(code **)(*(long *)(unaff_x20 + 0x38) + 0x28))
            (unaff_x29 + -0xe8,
             *(long *)(unaff_x20 + 0x30) +
             (*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
             &stack0x000000a8);
  puVar6 = *(undefined1 **)(unaff_x29 + -0xe8);
  if (puVar6 != unaff_x25) {
    uVar9 = *(undefined8 *)(unaff_x27 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x27 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x27 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x27 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x27 + 0x58);
    unaff_x26[0x1b] = *(undefined8 *)(unaff_x27 + 0x50);
    unaff_x26[0x1a] = uVar10;
    unaff_x26[0x1d] = uVar8;
    unaff_x26[0x1c] = uVar11;
    in_stack_00000180 = *(undefined8 *)(unaff_x29 + -0x80);
    uVar10 = *(undefined8 *)(unaff_x27 + 8);
    uVar8 = *(undefined8 *)(unaff_x27 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x27 + 0x18);
    unaff_x26[0x13] = *(undefined8 *)(unaff_x27 + 0x10);
    unaff_x26[0x12] = uVar10;
    unaff_x26[0x15] = uVar8;
    unaff_x26[0x14] = uVar11;
    uVar10 = *(undefined8 *)(unaff_x27 + 0x28);
    unaff_x26[0x17] = *(undefined8 *)(unaff_x27 + 0x30);
    unaff_x26[0x16] = uVar10;
    unaff_x26[0x19] = uVar9;
    unaff_x26[0x18] = uVar4;
    *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000008;
    *(undefined **)(unaff_x29 + -0xe0) = &DAT_10192d9a4;
    *(undefined1 **)(unaff_x29 + -0xd8) = &stack0x00000018;
    *(undefined **)(unaff_x29 + -0xd0) =
         &
         __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
    ;
    *(undefined1 ***)(unaff_x29 + -200) = &stack0x00000118;
    *(undefined **)(unaff_x29 + -0xc0) =
         &
         __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
    ;
    puStack0000000000000118 = puVar6;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000a8,s_configured_value_for______is_dis_108ac115e,unaff_x29 + -0xe8);
    uVar4 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x000000a8);
    FUN_101957248(&stack0x00000118);
    *(undefined8 *)(unaff_x19 + 8) = uVar4;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x50) = in_stack_00000088._7_1_;
    *(undefined1 *)(unaff_x19 + 1) = 1;
  }
  *(bool *)unaff_x19 = puVar6 != unaff_x25;
  FUN_101957248(&stack0x00000018);
  return;
}

