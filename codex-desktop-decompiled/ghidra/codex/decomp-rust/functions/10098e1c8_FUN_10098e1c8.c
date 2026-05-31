
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10098e1c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x19;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000130;
  undefined1 in_stack_00000138;
  undefined8 in_stack_00000170;
  long in_stack_000001c0;
  long in_stack_000001c8;
  undefined8 in_stack_000001d0;
  long in_stack_000001d8;
  
  *(char **)(unaff_x29 + -0x78) = s__request_failed_with_client_erro_108ac9cbd;
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000100;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  uVar12 = *(undefined8 *)(unaff_x27 + 0x50);
  *(undefined8 *)(unaff_x26 + 0xf8) = *(undefined8 *)(unaff_x27 + 0x58);
  *(undefined8 *)(unaff_x26 + 0xf0) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000d0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  __ZN16codex_app_server13dynamic_tools17fallback_response17hbc01028dbe995bd1E
            (&stack0x00000140,&UNK_108cb2278,0x1b);
  if (in_stack_000001d8 != unaff_x28) {
    FUN_100de6690(&stack0x000001d8);
  }
  if (in_stack_000001c0 != 0) {
    _free(in_stack_000001c8);
  }
  uVar12 = *(undefined8 *)(unaff_x27 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x27 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x27 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x27 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar13;
  uVar12 = *(undefined8 *)(unaff_x27 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x27 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar12;
  *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_00000170;
  func_0x0001011450d4(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x100),
                      *(undefined8 *)(unaff_x19 + 0x108));
  in_stack_00000138 = *(undefined1 *)(unaff_x19 + 0x110);
  *(undefined8 *)(unaff_x27 + 0x98) = *(undefined8 *)(unaff_x27 + 0x158);
  *(undefined8 *)(unaff_x27 + 0x90) = *(undefined8 *)(unaff_x27 + 0x150);
  in_stack_00000110 = in_stack_000001d0;
  uVar13 = *(undefined8 *)(unaff_x27 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x27 + 0x90);
  lVar11 = 1;
  *(undefined2 *)(unaff_x19 + 0xda) = 1;
  *(undefined8 *)(unaff_x27 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x27 + 0xb0) = uVar12;
  in_stack_00000130 = in_stack_000001d0;
  lVar4 = *(long *)(unaff_x19 + 0x60);
  lVar10 = *(long *)(unaff_x19 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
  if ((lVar4 != 0) && (lVar11 = _malloc(lVar4), lVar11 == 0)) {
    func_0x0001087c9084(1,lVar4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10098e560);
    (*pcVar3)();
  }
  _memcpy(lVar11,uVar12,lVar4);
  *(undefined1 *)(unaff_x19 + 0xda) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0x800000000000000f;
  *(long *)(unaff_x19 + 0x120) = lVar4;
  *(long *)(unaff_x19 + 0x128) = lVar11;
  *(long *)(unaff_x19 + 0x130) = lVar4;
  uVar12 = *(undefined8 *)(unaff_x27 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x27 + 200);
  uVar13 = *(undefined8 *)(unaff_x27 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x27 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x150) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar13;
  *(long *)(unaff_x19 + 0x300) = lVar10 + 0x10;
  *(undefined1 *)(unaff_x19 + 0xdf0) = 0;
  lVar4 = unaff_x19 + 0x118;
  FUN_1004f3438(&stack0x000001c0,lVar4,*unaff_x21);
  uVar12 = in_stack_000001d0;
  lVar11 = in_stack_000001c8;
  lVar10 = in_stack_000001c0;
  if (in_stack_000001c0 == unaff_x28 + 0x1c) {
    *unaff_x25 = 4;
    uVar8 = 3;
    uVar12 = 1;
    goto LAB_10098e310;
  }
  uVar13 = *(undefined8 *)(unaff_x26 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x26 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x26 + 0x68);
  *(undefined8 *)(unaff_x27 + 0x118) = *(undefined8 *)(unaff_x26 + 0x60);
  *(undefined8 *)(unaff_x27 + 0x110) = uVar13;
  *(undefined8 *)(unaff_x27 + 0x128) = uVar15;
  *(undefined8 *)(unaff_x27 + 0x120) = uVar14;
  uVar13 = *(undefined8 *)(unaff_x26 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x26 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x26 + 0x88);
  *(undefined8 *)(unaff_x27 + 0x138) = *(undefined8 *)(unaff_x26 + 0x80);
  *(undefined8 *)(unaff_x27 + 0x130) = uVar13;
  *(undefined8 *)(unaff_x27 + 0x148) = uVar15;
  *(undefined8 *)(unaff_x27 + 0x140) = uVar14;
  uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x26 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x26 + 0x28);
  *(undefined8 *)(unaff_x27 + 0xd8) = *(undefined8 *)(unaff_x26 + 0x20);
  *(undefined8 *)(unaff_x27 + 0xd0) = uVar13;
  *(undefined8 *)(unaff_x27 + 0xe8) = uVar15;
  *(undefined8 *)(unaff_x27 + 0xe0) = uVar14;
  uVar13 = *(undefined8 *)(unaff_x26 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x26 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x26 + 0x48);
  *(undefined8 *)(unaff_x27 + 0xf8) = *(undefined8 *)(unaff_x26 + 0x40);
  *(undefined8 *)(unaff_x27 + 0xf0) = uVar13;
  *(undefined8 *)(unaff_x27 + 0x108) = uVar15;
  *(undefined8 *)(unaff_x27 + 0x100) = uVar14;
  if (*(char *)(unaff_x19 + 0xdf0) == '\0') {
LAB_10098dfb8:
    FUN_100def028(lVar4);
  }
  else if (*(char *)(unaff_x19 + 0xdf0) == '\x03') {
    if (*(char *)(unaff_x19 + 0xde8) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x4f8);
    }
    else if (*(char *)(unaff_x19 + 0xde8) == '\0') {
      lVar4 = unaff_x19 + 0x308;
      goto LAB_10098dfb8;
    }
  }
  if (lVar10 == unaff_x28 + 0x1b) {
    if (lVar11 != 0) {
      _free(uVar12);
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x27 + 0x110);
    uVar15 = *(undefined8 *)(unaff_x27 + 0x128);
    uVar14 = *(undefined8 *)(unaff_x27 + 0x120);
    *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)(unaff_x27 + 0x118);
    *(undefined8 *)(unaff_x26 + 0x58) = uVar13;
    *(undefined8 *)(unaff_x26 + 0x70) = uVar15;
    *(undefined8 *)(unaff_x26 + 0x68) = uVar14;
    uVar13 = *(undefined8 *)(unaff_x27 + 0x130);
    uVar15 = *(undefined8 *)(unaff_x27 + 0x148);
    uVar14 = *(undefined8 *)(unaff_x27 + 0x140);
    *(undefined8 *)(unaff_x26 + 0x80) = *(undefined8 *)(unaff_x27 + 0x138);
    *(undefined8 *)(unaff_x26 + 0x78) = uVar13;
    *(undefined8 *)(unaff_x26 + 0x90) = uVar15;
    *(undefined8 *)(unaff_x26 + 0x88) = uVar14;
    uVar13 = *(undefined8 *)(unaff_x27 + 0xd0);
    uVar15 = *(undefined8 *)(unaff_x27 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x27 + 0xe0);
    *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(unaff_x27 + 0xd8);
    *(undefined8 *)(unaff_x26 + 0x18) = uVar13;
    *(undefined8 *)(unaff_x26 + 0x30) = uVar15;
    *(undefined8 *)(unaff_x26 + 0x28) = uVar14;
    uVar13 = *(undefined8 *)(unaff_x27 + 0xf0);
    uVar15 = *(undefined8 *)(unaff_x27 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x27 + 0x100);
    *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)(unaff_x27 + 0xf8);
    *(undefined8 *)(unaff_x26 + 0x38) = uVar13;
    *(undefined8 *)(unaff_x26 + 0x50) = uVar15;
    *(undefined8 *)(unaff_x26 + 0x48) = uVar14;
    in_stack_000001c0 = lVar10;
    in_stack_000001c8 = lVar11;
    in_stack_000001d0 = uVar12;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b627498 - 1 < 2 ||
         ((bRam000000010b627498 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                             ), cVar5 != '\0')))) &&
        (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                           ),
        lVar4 = 
        ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
        , (uVar7 & 1) != 0)))) {
      lVar10 = ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
               + 0x30;
      *(long **)(unaff_x29 + -0x78) = &stack0x000001c0;
      *(code **)(unaff_x29 + -0x70) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      *(char **)(unaff_x29 + -0xa0) = s__failed_to_submit_DynamicToolRes_108ac9cf5;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x78;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = lVar10;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar4,unaff_x29 + -0xd0);
      lVar4 = 
      ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar12 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                  + 0x20);
        uVar13 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0x90) = 1;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar12;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar13;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x90);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar2,puVar1,unaff_x29 + -0x90,unaff_x29 + -0xd0);
        }
      }
    }
    else {
      lVar4 = 
      ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar12 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                  + 0x20);
        uVar13 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xe8) = 1;
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar12;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar13;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xe8);
        if (iVar6 != 0) {
          lVar10 = ___ZN16codex_app_server13dynamic_tools16on_call_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7e56a35b728f86feE
                   + 0x30;
          *(long **)(unaff_x29 + -0x78) = &stack0x000001c0;
          *(code **)(unaff_x29 + -0x70) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xa0) = s__failed_to_submit_DynamicToolRes_108ac9cf5;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x78;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long *)(unaff_x29 + -0xb8) = lVar10;
          uVar12 = *(undefined8 *)(unaff_x29 + -0xe8);
          *(undefined8 *)(unaff_x26 + 0xf8) = *(undefined8 *)(unaff_x29 + -0xe0);
          *(undefined8 *)(unaff_x26 + 0xf0) = uVar12;
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xd8);
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar2,puVar1,unaff_x29 + -0x90,unaff_x29 + -0xd0);
        }
      }
    }
    FUN_100df5738(&stack0x000001c0);
  }
  *(undefined2 *)(unaff_x19 + 0xda) = 0;
  if ((*(long *)(unaff_x19 + 0xe0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xe0) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xe8));
  }
  lVar4 = *(long *)(unaff_x19 + 0x100);
  lVar10 = *(long *)(unaff_x19 + 0x108);
  if (lVar10 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    do {
      if (puVar9[-1] != 0) {
        _free(*puVar9);
      }
      puVar9 = puVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    _free(lVar4);
  }
  if (*(long *)(unaff_x19 + 0x70) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  *(undefined1 *)(unaff_x19 + 0xdc) = 0;
  lVar4 = **(long **)(unaff_x19 + 0x68);
  **(long **)(unaff_x19 + 0x68) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  uVar8 = 1;
  *unaff_x25 = 1;
  FUN_100e88a10(in_stack_00000000);
  uVar12 = 0;
LAB_10098e310:
  *(undefined1 *)(unaff_x19 + 0xdf8) = uVar8;
  return uVar12;
}

