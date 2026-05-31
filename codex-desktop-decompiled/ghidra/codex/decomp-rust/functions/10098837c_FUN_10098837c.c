
/* WARNING: Removing unreachable block (ram,0x000100989014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10098837c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 extraout_w8;
  byte bVar11;
  undefined1 uVar12;
  long unaff_x19;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x25;
  undefined1 *unaff_x28;
  ulong uVar19;
  long unaff_x29;
  byte bVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined4 uStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char *in_stack_00000190;
  undefined *in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  *(char **)(unaff_x29 + -0xa0) = s_request_failed__108ac9ce2;
  *(undefined8 **)(unaff_x29 + -0x98) = &stack0x000001e0;
  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
  FUN_1009913d8(&stack0x00000260);
  cVar6 = '\x02';
  *(undefined1 *)(unaff_x19 + 0x414) = 1;
  *(long *)(unaff_x19 + 0x3f0) = unaff_x25 + -2;
  *(undefined8 *)(unaff_x19 + 0x400) = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0x3f8) = in_stack_00000130;
  *(undefined1 *)(unaff_x19 + 0x408) = extraout_w8;
  *(int *)(unaff_x19 + 0x40c) = (int)((ulong)_uStack0000000000000128 >> 0x18);
  *(undefined4 *)(unaff_x19 + 0x409) = uStack0000000000000128;
  *(undefined1 *)(unaff_x19 + 0x411) = 2;
  if (*(long *)(unaff_x19 + 0x298) == -0x8000000000000000) {
LAB_1009891ac:
    if ((cVar6 == '\x04') || (*(long *)(unaff_x19 + 0x2c8) == -0x8000000000000000)) {
LAB_1009891c8:
      lVar14 = *(long *)(unaff_x19 + 0x310);
      *(undefined1 *)(unaff_x19 + 0x419) = 0;
      lVar15 = *(long *)(unaff_x19 + 0x298);
      if (lVar15 == -0x8000000000000000) goto LAB_1009891e8;
LAB_1009893a8:
      lVar9 = *(long *)(unaff_x19 + 0x2a0);
      lVar16 = *(long *)(unaff_x19 + 0x2a8);
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x438) = *(undefined8 *)(unaff_x19 + 0x2e0);
      *(undefined8 *)(unaff_x19 + 0x430) = *(undefined8 *)(unaff_x19 + 0x2d8);
      *(undefined8 *)(unaff_x19 + 0x448) = *(undefined8 *)(unaff_x19 + 0x2f0);
      *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x2e8);
      *(undefined8 *)(unaff_x19 + 0x458) = *(undefined8 *)(unaff_x19 + 0x300);
      *(undefined8 *)(unaff_x19 + 0x450) = *(undefined8 *)(unaff_x19 + 0x2f8);
      *(undefined1 *)(unaff_x19 + 0x413) = 0;
      *(undefined2 *)(unaff_x19 + 0x41b) = 0x101;
      lVar15 = 1;
      *(undefined1 *)(unaff_x19 + 0x41d) = 1;
      *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 0x308);
      *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x2d0);
      *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x2c8);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x278);
      lVar14 = *(long *)(unaff_x19 + 0x280);
      if ((lVar14 != 0) && (lVar15 = _malloc(lVar14), lVar15 == 0)) {
        func_0x0001087c9084(1,lVar14);
        goto LAB_100989bf8;
      }
      _memcpy(lVar15,uVar18,lVar14);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2b8);
      lVar9 = *(long *)(unaff_x19 + 0x2c0);
      if (lVar9 == 0) {
        lVar16 = 1;
      }
      else {
        lVar16 = _malloc(lVar9);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,lVar9);
          goto LAB_100989bf8;
        }
      }
      _memcpy(lVar16,uVar18,lVar9);
      *(undefined1 *)(unaff_x19 + 0x41d) = 0;
      *(undefined2 *)(unaff_x19 + 0x41b) = 0;
      *(long *)(unaff_x19 + 0x468) = lVar14;
      *(long *)(unaff_x19 + 0x470) = lVar15;
      *(long *)(unaff_x19 + 0x478) = lVar14;
      *(long *)(unaff_x19 + 0x480) = lVar9;
      *(long *)(unaff_x19 + 0x488) = lVar16;
      *(long *)(unaff_x19 + 0x490) = lVar9;
      *(undefined8 *)(unaff_x19 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x428);
      *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x420);
      *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x430);
      *(undefined8 *)(unaff_x19 + 0x4b8) = *(undefined8 *)(unaff_x19 + 0x440);
      *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x438);
      *(undefined8 *)(unaff_x19 + 0x4c0) = *(undefined8 *)(unaff_x19 + 0x448);
      *(undefined8 *)(unaff_x19 + 0x4d8) = *(undefined8 *)(unaff_x19 + 0x460);
      *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(unaff_x19 + 0x458);
      *(undefined8 *)(unaff_x19 + 0x4c8) = *(undefined8 *)(unaff_x19 + 0x450);
      *(undefined8 *)(unaff_x19 + 0x4e0) = 0x8000000000000000;
      *(long *)(unaff_x19 + 0x4f8) = unaff_x19 + 0x288;
      *(long *)(unaff_x19 + 0x500) = unaff_x19 + 0x318;
      *(long *)(unaff_x19 + 0x508) = unaff_x19 + 0x338;
      *(undefined1 *)(unaff_x19 + 0x538) = 0;
      *(char *)(unaff_x19 + 0x539) = cVar6;
      *(undefined1 *)(unaff_x19 + 0x53a) = 0;
      unaff_x25 = -0x7ffffffffffffffa;
      uVar10 = FUN_10098fdd0(unaff_x19 + 0x468,in_stack_00000038);
      if ((uVar10 & 1) != 0) {
        uVar12 = 6;
        goto LAB_100989420;
      }
      FUN_100cf17d8(unaff_x19 + 0x468);
      *(undefined2 *)(unaff_x19 + 0x41b) = 0;
      *(undefined1 *)(unaff_x19 + 0x41d) = 0;
      lVar14 = *(long *)(unaff_x19 + 0x310);
      *(undefined1 *)(unaff_x19 + 0x419) = 0;
      lVar15 = *(long *)(unaff_x19 + 0x298);
      if (lVar15 != -0x8000000000000000) goto LAB_1009893a8;
LAB_1009891e8:
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2b8);
      lVar16 = *(long *)(unaff_x19 + 0x2c0);
      if (lVar16 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar16);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar16);
LAB_100989bf8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100989bfc);
          (*pcVar5)();
        }
      }
      _memcpy(lVar9,uVar18,lVar16);
      lVar15 = lVar16;
    }
    *(undefined1 *)(unaff_x19 + 0x41a) = 0;
    *(undefined1 *)(unaff_x19 + 0x414) = 0;
    *(long *)(unaff_x19 + 0x420) = unaff_x25 + 4;
    *(long *)(unaff_x19 + 0x428) = lVar15;
    *(long *)(unaff_x19 + 0x430) = lVar9;
    *(long *)(unaff_x19 + 0x438) = lVar16;
    *(undefined8 *)(unaff_x19 + 0x448) = *(undefined8 *)(unaff_x19 + 0x278);
    *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x270);
    *(undefined8 *)(unaff_x19 + 0x450) = *(undefined8 *)(unaff_x19 + 0x280);
    *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 0x3f8);
    *(undefined8 *)(unaff_x19 + 0x458) = *(undefined8 *)(unaff_x19 + 0x3f0);
    *(undefined8 *)(unaff_x19 + 0x470) = *(undefined8 *)(unaff_x19 + 0x408);
    *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x400);
    *(long *)(unaff_x19 + 0x608) = lVar14 + 0x10;
    *(undefined1 *)(in_stack_00000028 + 0xf50) = 0;
    lVar15 = unaff_x19 + 0x420;
    FUN_1004f3438(&stack0x00000260,lVar15,*in_stack_00000038);
    if (unaff_x25 != -0x1a) {
      in_stack_000001e0 = param_1;
      if (*(char *)(in_stack_00000028 + 0xf50) == '\0') {
LAB_1009894b4:
        FUN_100def028(lVar15);
      }
      else if (*(char *)(in_stack_00000028 + 0xf50) == '\x03') {
        if (*(char *)(in_stack_00000028 + 0xf48) == '\x03') {
          FUN_100e7ab5c(unaff_x19 + 0x800);
        }
        else if (*(char *)(in_stack_00000028 + 0xf48) == '\0') {
          lVar15 = unaff_x19 + 0x610;
          goto LAB_1009894b4;
        }
      }
      if (unaff_x25 == -0x19) {
        if (unaff_x29 != 0xc0) {
          _free(1);
        }
      }
      else {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
           (((bRam000000010b6280b0 - 1 < 2 ||
             ((bRam000000010b6280b0 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                                 ), cVar6 != '\0')))) &&
            (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                                ), (uVar10 & 1) != 0)))) {
          lVar15 = ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                   + 0x30;
          *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000260;
          *(code **)(unaff_x29 + -0xb8) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xe0) = s_failed_to_submit_ExecApproval__108acc639;
          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xc0;
          in_stack_00000190 = (char *)(unaff_x29 + -0xe0);
          in_stack_00000198 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xa0) = 1;
          *(char ***)(unaff_x29 + -0x98) = &stack0x00000190;
          *(undefined8 *)(unaff_x29 + -0x90) = 1;
          *(long *)(unaff_x29 + -0x88) = lVar15;
          FUN_100991518(unaff_x29 + -0xa0);
        }
        else {
          lVar15 = 
          ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            uVar18 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                      + 0x20);
            uVar21 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                      + 0x28);
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000002f8);
            if (iVar7 != 0) {
              lVar14 = ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                       + 0x30;
              *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000260;
              *(code **)(unaff_x29 + -0xd8) =
                   __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
              ;
              in_stack_00000198 = (undefined *)(unaff_x29 + -0xe0);
              in_stack_00000190 = s_failed_to_submit_ExecApproval__108acc639;
              *(char ***)(unaff_x29 + -0xf0) = &stack0x00000190;
              *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b208fd0;
              *(undefined8 *)(unaff_x29 + -0xa0) = 1;
              *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0xf0;
              *(undefined8 *)(unaff_x29 + -0x90) = 1;
              *(long *)(unaff_x29 + -0x88) = lVar14;
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar18;
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(undefined8 *)(unaff_x29 + -0xb0) = uVar21;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar15,puVar2,puVar1,unaff_x29 + -0xc0,unaff_x29 + -0xa0);
            }
          }
        }
        FUN_100df5738(&stack0x00000260);
      }
      *(undefined1 *)(unaff_x19 + 0x414) = 0;
      if (*(long *)(unaff_x19 + 0x388) != -0x7fffffffffffffff) {
        *(undefined1 *)(unaff_x19 + 0x412) = 0;
      }
      *(undefined1 *)(unaff_x19 + 0x412) = 0;
      *(undefined2 *)(unaff_x19 + 0x415) = 0;
      *(undefined1 *)(unaff_x19 + 0x417) = 0;
      lVar15 = **(long **)(unaff_x19 + 0x338);
      **(long **)(unaff_x19 + 0x338) = lVar15 + -1;
      LORelease();
      if (lVar15 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x338);
      }
      lVar15 = **(long **)(unaff_x19 + 0x318);
      **(long **)(unaff_x19 + 0x318) = lVar15 + -1;
      LORelease();
      if (lVar15 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x318);
      }
      lVar15 = **(long **)(unaff_x19 + 800);
      **(long **)(unaff_x19 + 800) = lVar15 + -1;
      LORelease();
      if (lVar15 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc434be58f634db7bE(unaff_x19 + 800);
      }
      lVar15 = **(long **)(unaff_x19 + 0x310);
      **(long **)(unaff_x19 + 0x310) = lVar15 + -1;
      LORelease();
      if (lVar15 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x310);
      }
      *(undefined1 *)(unaff_x19 + 0x418) = 0;
      if ((*(long *)(unaff_x19 + 0x2c8) != -0x8000000000000000) &&
         ((*(byte *)(unaff_x19 + 0x413) & 1) != 0)) {
        if (*(long *)(unaff_x19 + 0x2c8) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x2d0));
        }
        if (*(long *)(unaff_x19 + 0x2e0) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x2e8));
        }
        lVar9 = *(long *)(unaff_x19 + 0x300);
        lVar15 = lVar9;
        for (lVar14 = *(long *)(unaff_x19 + 0x308); lVar14 != 0; lVar14 = lVar14 + -1) {
          FUN_100e4af0c(lVar15);
          lVar15 = lVar15 + 0x50;
        }
        if (*(long *)(unaff_x19 + 0x2f8) != 0) {
          _free(lVar9);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x413) = 0;
      if (*(long *)(unaff_x19 + 0x2b0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x2b8));
      }
      *(undefined1 *)(unaff_x19 + 0x419) = 0;
      *(undefined1 *)(unaff_x19 + 0x41a) = 0;
      *(undefined1 *)(unaff_x19 + 0x410) = 1;
      FUN_100d1edf8();
      lVar15 = **(long **)(unaff_x19 + 0x118);
      **(long **)(unaff_x19 + 0x118) = lVar15 + -1;
      LORelease();
      if (lVar15 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x118);
      }
      uVar18 = 0;
      uVar12 = 1;
      goto LAB_100989430;
    }
    uVar12 = 7;
  }
  else {
    *(long *)(unaff_x19 + 0x420) = *(long *)(unaff_x19 + 0x338) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x490) = 0;
    auVar22 = FUN_100fd3e50(unaff_x19 + 0x420,in_stack_00000038);
    uVar18 = auVar22._8_8_;
    pcVar8 = auVar22._0_8_;
    if (pcVar8 != (char *)0x0) {
      if (((*(char *)(unaff_x19 + 0x490) == '\x03') && (*(char *)(unaff_x19 + 0x488) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x440) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x448);
        uVar18 = extraout_x1;
        if (*(long *)(unaff_x19 + 0x450) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x450) + 0x18))(*(undefined8 *)(unaff_x19 + 0x458));
          uVar18 = extraout_x1_00;
        }
      }
      if (*(long *)(pcVar8 + 0x88) == 0) {
        bVar13 = false;
      }
      else {
        uVar17 = *(undefined8 *)(unaff_x19 + 0x2b8);
        lVar9 = *(long *)(unaff_x19 + 0x2c0);
        auVar22 = FUN_100e8dd9c(*(undefined8 *)(pcVar8 + 0x90),*(undefined8 *)(pcVar8 + 0x98),uVar17
                                ,lVar9);
        uVar18 = auVar22._8_8_;
        lVar15 = 0;
        lVar14 = *(long *)(pcVar8 + 0x70);
        uVar3 = *(ulong *)(pcVar8 + 0x78);
        bVar11 = auVar22[7] >> 1;
        uVar19 = auVar22._0_8_ & uVar3;
        uVar21 = *(undefined8 *)(lVar14 + uVar19);
        uVar10 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar11),
                          CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar11),
                                   CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar11),
                                            CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar11),
                                                     CONCAT13(-((byte)((ulong)uVar21 >> 0x18) ==
                                                               bVar11),CONCAT12(-((byte)((ulong)
                                                  uVar21 >> 0x10) == bVar11),
                                                  CONCAT11(-((byte)((ulong)uVar21 >> 8) == bVar11),
                                                           -((byte)uVar21 == bVar11)))))))) &
                 0x8080808080808080;
        while( true ) {
          for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
            uVar4 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            lVar16 = lVar14 + (uVar19 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3
                              ) * -0x18;
            if ((lVar9 == *(long *)(lVar16 + -8)) &&
               (iVar7 = _memcmp(uVar17,*(undefined8 *)(lVar16 + -0x10),lVar9),
               uVar18 = extraout_x1_01, iVar7 == 0)) {
              bVar13 = true;
              goto LAB_100989174;
            }
          }
          bVar20 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar21 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar21 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar21 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar21 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar21 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar21 >> 8) ==
                                                                     -1),-((char)uVar21 == -1)))))))
                                      ),1);
          if ((bVar20 & 1) != 0) break;
          lVar15 = lVar15 + 8;
          uVar19 = uVar19 + lVar15 & uVar3;
          uVar21 = *(undefined8 *)(lVar14 + uVar19);
          uVar10 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar11),
                            CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar11),
                                     CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar11),
                                              CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar11),
                                                       CONCAT13(-((byte)((ulong)uVar21 >> 0x18) ==
                                                                 bVar11),CONCAT12(-((byte)((ulong)
                                                  uVar21 >> 0x10) == bVar11),
                                                  CONCAT11(-((byte)((ulong)uVar21 >> 8) == bVar11),
                                                           -((byte)uVar21 == bVar11)))))))) &
                   0x8080808080808080;
        }
        bVar13 = false;
LAB_100989174:
        unaff_x25 = -0x7ffffffffffffffa;
      }
      if (*pcVar8 == '\0') {
        *pcVar8 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar8,uVar18,1000000000)
        ;
      }
      FUN_1060fa678(pcVar8,1,pcVar8);
      cVar6 = *(char *)(unaff_x19 + 0x411);
      if (!bVar13) goto LAB_1009891ac;
      goto LAB_1009891c8;
    }
    uVar12 = 5;
  }
LAB_100989420:
  *in_stack_00000030 = uVar12;
  uVar12 = 3;
  uVar18 = 1;
LAB_100989430:
  *unaff_x28 = uVar12;
  return uVar18;
}

