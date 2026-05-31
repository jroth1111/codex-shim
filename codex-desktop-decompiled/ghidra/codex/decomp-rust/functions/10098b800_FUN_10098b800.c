
/* WARNING: Removing unreachable block (ram,0x00010098bdb8) */
/* WARNING: Removing unreachable block (ram,0x00010098bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010098bd40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10098b800(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000280;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  FUN_10098fc90(&stack0x00000340);
  pauVar6 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar6[1][0] == '\x01') {
    auVar24 = *pauVar6;
  }
  else {
    auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auVar24._8_8_;
    pauVar6[1][0] = 1;
    unaff_x28 = &stack0x00000340;
  }
  *(long *)*pauVar6 = auVar24._0_8_ + 1;
  *(undefined1 *)(unaff_x19 + 0x1fa) = 0;
  *(undefined1 *)(unaff_x19 + 0x200) = 0;
  *(undefined8 *)(unaff_x19 + 0x208) = 0x800000000000000d;
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x230) = 0;
  *(undefined **)(unaff_x19 + 0x228) = &UNK_108c56c70;
  *(undefined8 *)(unaff_x19 + 0x240) = 0;
  *(undefined8 *)(unaff_x19 + 0x238) = 0;
  *(undefined1 (*) [16])(unaff_x19 + 0x248) = auVar24;
  *(long *)(unaff_x19 + 0x3f0) = *(long *)(unaff_x19 + 0x138) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xee0) = 0;
  lVar3 = unaff_x19 + 0x208;
  FUN_1004f3438(&stack0x00000340,lVar3,*unaff_x21);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x28 + 0x58);
  uVar20 = *(undefined8 *)(unaff_x28 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x28 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x28 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x28 + 0x78);
  uVar21 = *(undefined8 *)(unaff_x28 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x28 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x28 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x28 + 0x18);
  uVar22 = *(undefined8 *)(unaff_x28 + 0x30);
  uVar18 = *(undefined8 *)(unaff_x28 + 0x28);
  uVar15 = *(undefined8 *)(unaff_x28 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x38);
  uVar23 = *(undefined8 *)(unaff_x28 + 0x50);
  uVar19 = *(undefined8 *)(unaff_x28 + 0x48);
  if (*(char *)(unaff_x19 + 0xee0) != '\0') {
    if (*(char *)(unaff_x19 + 0xee0) != '\x03') goto LAB_10098bdac;
    if (*(char *)(unaff_x19 + 0xed8) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x5e8);
      goto LAB_10098bdac;
    }
    if (*(char *)(unaff_x19 + 0xed8) != '\0') goto LAB_10098bdac;
    lVar3 = unaff_x19 + 0x3f8;
  }
  FUN_100def028(lVar3);
LAB_10098bdac:
  *(undefined8 *)(unaff_x28 + 0x60) = uVar12;
  *(undefined8 *)(unaff_x28 + 0x58) = uVar8;
  *(undefined8 *)(unaff_x28 + 0x70) = uVar20;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar16;
  *(undefined8 *)(unaff_x28 + 0x80) = uVar13;
  *(undefined8 *)(unaff_x28 + 0x78) = uVar9;
  *(undefined8 *)(unaff_x28 + 0x90) = uVar21;
  *(undefined8 *)(unaff_x28 + 0x88) = uVar17;
  *(undefined8 *)(unaff_x28 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x28 + 0x18) = uVar10;
  *(undefined8 *)(unaff_x28 + 0x30) = uVar22;
  *(undefined8 *)(unaff_x28 + 0x28) = uVar18;
  *(undefined8 *)(unaff_x28 + 0x40) = uVar15;
  *(undefined8 *)(unaff_x28 + 0x38) = uVar11;
  *(undefined8 *)(unaff_x28 + 0x50) = uVar23;
  *(undefined8 *)(unaff_x28 + 0x48) = uVar19;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b627fa8 - 1 < 2 ||
       ((bRam000000010b627fa8 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc811fc69ca4fff70E
                           ), cVar4 != '\0')))) &&
      (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc811fc69ca4fff70E
                         ), (uVar7 & 1) != 0)))) {
    *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000340;
    *(code **)(unaff_x29 + -0xa8) =
         __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
    ;
    *(char **)(unaff_x29 + -0xe0) = s__failed_to_submit_UserInputAnswe_108acc54e;
    *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xb0;
    FUN_10098fb50(&stack0x00000280);
  }
  else {
    lVar3 = 
    ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc811fc69ca4fff70E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      uVar8 = *(undefined8 *)
               (
               ___ZN16codex_app_server22bespoke_event_handling30on_request_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc811fc69ca4fff70E
               + 0x28);
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000208);
      if (iVar5 != 0) {
        *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000340;
        *(code **)(unaff_x29 + -0xd8) =
             __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
        ;
        *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000220;
        *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
        uVar9 = *(undefined8 *)(unaff_x24 + 0x160);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x24 + 0x168);
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar8;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar3,puVar2,puVar1,unaff_x29 + -0xb0,&stack0x00000280);
      }
    }
  }
  FUN_100df5738(&stack0x00000340);
  *(undefined1 *)(unaff_x19 + 0x200) = 0;
  if (*(long *)(unaff_x19 + 400) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  *(undefined2 *)(unaff_x19 + 0x1fb) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fd) = 0;
  lVar3 = **(long **)(unaff_x19 + 0x140);
  **(long **)(unaff_x19 + 0x140) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x140);
  }
  lVar3 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x138);
  }
  *(undefined1 *)(unaff_x19 + 0x1fe) = 0;
  if (((*(byte *)(unaff_x19 + 0x1fa) & 1) != 0) && (*(long *)(unaff_x19 + 0x120) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x128));
  }
  *(undefined1 *)(unaff_x19 + 0x1fa) = 0;
  *unaff_x27 = 1;
  FUN_100cecd1c(unaff_x26);
  *(undefined1 *)(unaff_x19 + 0xf50) = 1;
  return 0;
}

