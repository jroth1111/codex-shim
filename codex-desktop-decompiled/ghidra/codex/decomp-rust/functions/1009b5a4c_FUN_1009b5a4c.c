
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b5a4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  undefined1 uVar10;
  undefined1 *unaff_x20;
  undefined8 uVar11;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  undefined *in_stack_00000108;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long lStack00000000000001a0;
  long lStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  
  *(char **)(unaff_x29 + -0xa8) = s_request_failed__108ac9ce2;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x88;
  *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa8;
  *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
  lStack00000000000001a8 = unaff_x29 + -0xd0;
  lStack00000000000001a0 = 1;
  uStack00000000000001b0 = 1;
  uStack0000000000000128 = in_stack_000000d8;
  uStack0000000000000120 = in_stack_000000d0;
  uStack0000000000000130 = in_stack_000000e0;
  uStack00000000000001b8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar5 = *(long *)(unaff_x19 + 0x60);
  lVar3 = *(long *)(unaff_x19 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x58);
  if (lVar5 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = _malloc(lVar5);
    if (lVar8 == 0) {
      func_0x0001087c9084(1,lVar5);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b65ac);
      (*pcVar4)();
    }
  }
  _memcpy(lVar8,uVar11,lVar5);
  *(long *)(unaff_x19 + 0xc0) = unaff_x26 + 6;
  *(long *)(unaff_x19 + 200) = lVar5;
  *(long *)(unaff_x19 + 0xd0) = lVar8;
  *(long *)(unaff_x19 + 0xd8) = lVar5;
  *(long *)(unaff_x19 + 0xe0) = unaff_x26 + -1;
  *(long *)(unaff_x19 + 0x2a8) = lVar3 + 0x10;
  *(undefined1 *)(unaff_x19 + 0xd98) = 0;
  lVar5 = unaff_x19 + 0xc0;
  FUN_1004f3438(&stack0x000001a0,lVar5,in_stack_00000030);
  uVar11 = uStack00000000000001b0;
  lVar8 = lStack00000000000001a8;
  lVar3 = lStack00000000000001a0;
  if (lStack00000000000001a0 == unaff_x26 + 0x1c) {
    *unaff_x20 = 4;
    uVar10 = 3;
    uVar11 = 1;
    goto LAB_1009b6214;
  }
  in_stack_00000168 = *(undefined8 *)(unaff_x28 + 0x60);
  in_stack_00000160 = *(undefined8 *)(unaff_x28 + 0x58);
  in_stack_00000178 = *(undefined8 *)(unaff_x28 + 0x70);
  in_stack_00000170 = *(undefined8 *)(unaff_x28 + 0x68);
  in_stack_00000188 = *(undefined8 *)(unaff_x28 + 0x80);
  in_stack_00000180 = *(undefined8 *)(unaff_x28 + 0x78);
  in_stack_00000198 = *(undefined8 *)(unaff_x28 + 0x90);
  in_stack_00000190 = *(undefined8 *)(unaff_x28 + 0x88);
  uStack0000000000000128 = *(undefined8 *)(unaff_x28 + 0x20);
  uStack0000000000000120 = *(undefined8 *)(unaff_x28 + 0x18);
  in_stack_00000138 = *(undefined8 *)(unaff_x28 + 0x30);
  uStack0000000000000130 = *(undefined8 *)(unaff_x28 + 0x28);
  in_stack_00000148 = *(undefined8 *)(unaff_x28 + 0x40);
  in_stack_00000140 = *(undefined8 *)(unaff_x28 + 0x38);
  in_stack_00000158 = *(undefined8 *)(unaff_x28 + 0x50);
  in_stack_00000150 = *(undefined8 *)(unaff_x28 + 0x48);
  if (*(char *)(unaff_x19 + 0xd98) == '\0') {
LAB_1009b58d4:
    FUN_100def028(lVar5);
  }
  else if (*(char *)(unaff_x19 + 0xd98) == '\x03') {
    if (*(char *)(unaff_x19 + 0xd90) == '\x03') {
      FUN_100e7ab5c(unaff_x19 + 0x4a0);
    }
    else if (*(char *)(unaff_x19 + 0xd90) == '\0') {
      lVar5 = unaff_x19 + 0x2b0;
      goto LAB_1009b58d4;
    }
  }
  if (lVar3 == unaff_x26 + 0x1b) {
    if (lVar8 != 0) {
      _free(uVar11);
    }
  }
  else {
    *(undefined8 *)(unaff_x28 + 0x60) = in_stack_00000168;
    *(undefined8 *)(unaff_x28 + 0x58) = in_stack_00000160;
    *(undefined8 *)(unaff_x28 + 0x70) = in_stack_00000178;
    *(undefined8 *)(unaff_x28 + 0x68) = in_stack_00000170;
    *(undefined8 *)(unaff_x28 + 0x80) = in_stack_00000188;
    *(undefined8 *)(unaff_x28 + 0x78) = in_stack_00000180;
    *(undefined8 *)(unaff_x28 + 0x90) = in_stack_00000198;
    *(undefined8 *)(unaff_x28 + 0x88) = in_stack_00000190;
    *(undefined8 *)(unaff_x28 + 0x20) = uStack0000000000000128;
    *(undefined8 *)(unaff_x28 + 0x18) = uStack0000000000000120;
    *(undefined8 *)(unaff_x28 + 0x30) = in_stack_00000138;
    *(undefined8 *)(unaff_x28 + 0x28) = uStack0000000000000130;
    *(undefined8 *)(unaff_x28 + 0x40) = in_stack_00000148;
    *(undefined8 *)(unaff_x28 + 0x38) = in_stack_00000140;
    *(undefined8 *)(unaff_x28 + 0x50) = in_stack_00000158;
    *(undefined8 *)(unaff_x28 + 0x48) = in_stack_00000150;
    lStack00000000000001a0 = lVar3;
    lStack00000000000001a8 = lVar8;
    uStack00000000000001b0 = uVar11;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b62da78 - 1 < 2 ||
         ((bRam000000010b62da78 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
                             ), cVar6 != '\0')))) &&
        (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
                           ), (uVar9 & 1) != 0)))) {
      lVar5 = ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
              + 0x30;
      *(long **)(unaff_x29 + -0xa8) = &stack0x000001a0;
      *(code **)(unaff_x29 + -0xa0) =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      *(char **)(unaff_x29 + -0xd0) = s__failed_to_submit_denied_PatchAp_108accd8e;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa8;
      in_stack_00000100 = unaff_x29 + -0xd0;
      in_stack_00000108 = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0x88) = 1;
      *(long **)(unaff_x29 + -0x80) = &stack0x00000100;
      *(undefined8 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = lVar5;
      FUN_1009b5048(unaff_x29 + -0x88);
    }
    else {
      lVar5 = 
      ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_000000f0 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
              + 0x20);
        in_stack_000000f8 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
              + 0x28);
        in_stack_000000e8 = 1;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000000e8);
        if (iVar7 != 0) {
          lVar3 = ___ZN16codex_mcp_server14patch_approval26on_patch_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa5d27391f95dacaE
                  + 0x30;
          *(long **)(unaff_x29 + -0xa8) = &stack0x000001a0;
          *(code **)(unaff_x29 + -0xa0) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xd0) = s__failed_to_submit_denied_PatchAp_108accd8e;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa8;
          in_stack_00000100 = unaff_x29 + -0xd0;
          in_stack_00000108 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0x88) = 1;
          *(long **)(unaff_x29 + -0x80) = &stack0x00000100;
          *(undefined8 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = lVar3;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar5,puVar2,puVar1,&stack0x000000e8,unaff_x29 + -0x88);
        }
      }
    }
    FUN_100df5738(&stack0x000001a0);
  }
  lVar5 = **(long **)(unaff_x19 + 0x68);
  **(long **)(unaff_x19 + 0x68) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  uVar10 = 1;
  *(undefined2 *)(unaff_x19 + 0xb8) = 1;
  FUN_100cc5b38(unaff_x27);
  uVar11 = 0;
LAB_1009b6214:
  *(undefined1 *)(unaff_x19 + 0xdc0) = uVar10;
  return uVar11;
}

