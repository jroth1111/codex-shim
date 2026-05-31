
/* WARNING: Removing unreachable block (ram,0x000100989014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100989a3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined3 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  char extraout_w8;
  byte bVar10;
  undefined1 uVar11;
  ulong uVar12;
  long unaff_x19;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x23;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong unaff_x24;
  char *pcVar21;
  ulong unaff_x26;
  char cVar22;
  ulong uVar23;
  long unaff_x29;
  byte bVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined1 *in_stack_00000020;
  long in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined3 uStack000000000000012c;
  undefined3 uStack0000000000000188;
  char *in_stack_00000190;
  undefined *in_stack_00000198;
  undefined8 in_stack_000001a0;
  char cStack00000000000001a8;
  undefined4 uStack00000000000001a9;
  undefined3 uStack00000000000001ad;
  undefined4 uStack00000000000001e0;
  undefined1 uStack00000000000001e7;
  undefined8 in_stack_000001e8;
  long in_stack_00000260;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  long in_stack_00000278;
  
  in_stack_00000198 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001e0);
  in_stack_00000190 = (char *)0x8000000000000006;
  uVar12 = unaff_x26 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x26) {
    uVar12 = 3;
  }
  uVar3 = in_stack_00000010;
  if (uVar12 == 3) {
joined_r0x0001009899f0:
    if (unaff_x26 != 0) {
      _free(uVar3);
    }
  }
  else if (uVar12 == 2) {
    uVar3 = *(ulong *)(unaff_x29 + -0xb0);
    lVar16 = *(long *)(unaff_x29 + -0xa8);
    unaff_x24 = in_stack_00000008;
    unaff_x26 = in_stack_00000010;
    if (lVar16 != 0) {
      puVar20 = (undefined8 *)(uVar3 + 8);
      do {
        if (puVar20[-1] != 0) {
          _free(*puVar20);
        }
        puVar20 = puVar20 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    goto joined_r0x0001009899f0;
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000260 != in_stack_00000018) {
    FUN_100de6690(&stack0x00000260);
  }
  if (((long)unaff_x24 < 0) && ((unaff_x24 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(&stack0x00000140);
  }
  if (in_stack_00000190 == (char *)0x8000000000000006) {
    *(undefined **)(unaff_x29 + -0x78) = in_stack_00000198;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b6280f8 - 1 < 2 ||
         ((bRam000000010b6280f8 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
                             ), cVar7 != '\0')))) &&
        (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
                           ),
        lVar16 = 
        ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
        , iVar8 != 0)))) {
      in_stack_00000278 =
           ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
           + 0x30;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x78;
      *(code **)(unaff_x29 + -0x98) =
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      *(char **)(unaff_x29 + -0xc0) = s__failed_to_deserialize_CommandEx_108acc65b;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
      *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xc0;
      *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
      in_stack_00000268 = unaff_x29 + -0xe0;
      in_stack_00000260 = 1;
      in_stack_00000270 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar16,&stack0x00000260);
      lVar16 = 
      ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_000001e8 =
             *(undefined8 *)
              (
              ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
              + 0x20);
        _uStack00000000000001e0 = 1;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001e0);
        if (iVar8 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar2,puVar1,&stack0x000001e0,&stack0x00000260);
        }
      }
    }
    else {
      lVar16 = 
      ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_000001e8 =
             *(undefined8 *)
              (
              ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
              + 0x20);
        _uStack00000000000001e0 = 1;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001e0);
        if (iVar8 != 0) {
          in_stack_00000278 =
               ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h25b2d31ec929df1bE
               + 0x30;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x78;
          *(code **)(unaff_x29 + -0x98) =
               __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
          ;
          *(char **)(unaff_x29 + -0xc0) = s__failed_to_deserialize_CommandEx_108acc65b;
          *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xc0;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
          in_stack_00000268 = unaff_x29 + -0xe0;
          in_stack_00000260 = 1;
          in_stack_00000270 = 1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar2,puVar1,&stack0x000001e0,&stack0x00000260);
        }
      }
    }
    plVar15 = *(long **)(unaff_x29 + -0x78);
    if (*plVar15 == 1) {
      FUN_100de21d4(plVar15 + 1);
    }
    else if ((*plVar15 == 0) && (plVar15[2] != 0)) {
      _free(plVar15[1]);
    }
    _free(plVar15);
    cVar7 = extraout_w8;
LAB_100988f9c:
    cVar22 = '\x03';
    pcVar21 = (char *)0x8000000000000004;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xe8) = in_stack_000001a0;
    *(undefined **)(unaff_x29 + -0xf0) = in_stack_00000198;
    uStack0000000000000188 = (undefined3)uStack00000000000001a9;
    uVar5 = uStack0000000000000188;
    _uStack0000000000000188 = uStack00000000000001a9;
    cVar7 = cStack00000000000001a8;
    if ((long)in_stack_00000190 < 0) {
      uVar12 = (ulong)in_stack_00000190 & 0x7fffffffffffffff;
      if (uVar12 < 3) {
        if (uVar12 == 0) {
          cVar22 = '\x04';
          pcVar21 = (char *)0x8000000000000000;
        }
        else if (uVar12 == 1) {
          cVar22 = '\x04';
          pcVar21 = (char *)0x8000000000000002;
        }
        else {
          in_stack_00000268 = *(long *)(unaff_x29 + -0xe8);
          in_stack_00000260 = *(long *)(unaff_x29 + -0xf0);
          _uStack00000000000001e0 =
               CONCAT43(CONCAT31(uStack00000000000001ad,uStack00000000000001a9._3_1_),uVar5);
          cVar22 = '\x04';
          pcVar21 = (char *)0x8000000000000001;
        }
      }
      else {
        if (uVar12 == 3) goto LAB_100988ef0;
        if (uVar12 == 4) goto LAB_100988f9c;
        cVar22 = '\x03';
        pcVar21 = (char *)0x8000000000000006;
      }
    }
    else {
LAB_100988ef0:
      in_stack_00000268 = *(long *)(unaff_x29 + -0xe8);
      in_stack_00000260 = *(long *)(unaff_x29 + -0xf0);
      cVar22 = '\x04' - cStack00000000000001a8;
      pcVar21 = in_stack_00000190;
    }
  }
  uStack000000000000012c = (undefined3)((ulong)_uStack00000000000001e0 >> 0x20);
  *(undefined1 *)(unaff_x19 + 0x414) = 1;
  *(char **)(unaff_x19 + 0x3f0) = pcVar21;
  *(long *)(unaff_x19 + 0x400) = in_stack_00000268;
  *(long *)(unaff_x19 + 0x3f8) = in_stack_00000260;
  *(char *)(unaff_x19 + 0x408) = cVar7;
  *(int *)(unaff_x19 + 0x40c) = (int)((ulong)_uStack00000000000001e0 >> 0x18);
  *(undefined4 *)(unaff_x19 + 0x409) = uStack00000000000001e0;
  *(char *)(unaff_x19 + 0x411) = cVar22;
  if (*(long *)(unaff_x19 + 0x298) == -0x8000000000000000) {
LAB_1009891ac:
    if ((cVar22 == '\x04') || (*(long *)(unaff_x19 + 0x2c8) == -0x8000000000000000)) {
LAB_1009891c8:
      lVar14 = *(long *)(unaff_x19 + 0x310);
      *(undefined1 *)(unaff_x19 + 0x419) = 0;
      lVar16 = *(long *)(unaff_x19 + 0x298);
      if (lVar16 == -0x8000000000000000) goto LAB_1009891e8;
LAB_1009893a8:
      lVar9 = *(long *)(unaff_x19 + 0x2a0);
      lVar17 = *(long *)(unaff_x19 + 0x2a8);
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
      lVar16 = 1;
      *(undefined1 *)(unaff_x19 + 0x41d) = 1;
      *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 0x308);
      *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x2d0);
      *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x2c8);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x278);
      lVar14 = *(long *)(unaff_x19 + 0x280);
      if ((lVar14 != 0) && (lVar16 = _malloc(lVar14), lVar16 == 0)) {
        func_0x0001087c9084(1,lVar14);
        goto LAB_100989bf8;
      }
      _memcpy(lVar16,uVar19,lVar14);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x2b8);
      lVar9 = *(long *)(unaff_x19 + 0x2c0);
      if (lVar9 == 0) {
        lVar17 = 1;
      }
      else {
        lVar17 = _malloc(lVar9);
        if (lVar17 == 0) {
          func_0x0001087c9084(1,lVar9);
          goto LAB_100989bf8;
        }
      }
      _memcpy(lVar17,uVar19,lVar9);
      *(undefined1 *)(unaff_x19 + 0x41d) = 0;
      *(undefined2 *)(unaff_x19 + 0x41b) = 0;
      *(long *)(unaff_x19 + 0x468) = lVar14;
      *(long *)(unaff_x19 + 0x470) = lVar16;
      *(long *)(unaff_x19 + 0x478) = lVar14;
      *(long *)(unaff_x19 + 0x480) = lVar9;
      *(long *)(unaff_x19 + 0x488) = lVar17;
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
      *(char *)(unaff_x19 + 0x539) = cVar22;
      *(undefined1 *)(unaff_x19 + 0x53a) = 0;
      uVar12 = FUN_10098fdd0(unaff_x19 + 0x468,in_stack_00000038);
      if ((uVar12 & 1) != 0) {
        uVar11 = 6;
        goto LAB_100989420;
      }
      FUN_100cf17d8(unaff_x19 + 0x468);
      *(undefined2 *)(unaff_x19 + 0x41b) = 0;
      *(undefined1 *)(unaff_x19 + 0x41d) = 0;
      lVar14 = *(long *)(unaff_x19 + 0x310);
      *(undefined1 *)(unaff_x19 + 0x419) = 0;
      lVar16 = *(long *)(unaff_x19 + 0x298);
      if (lVar16 != -0x8000000000000000) goto LAB_1009893a8;
LAB_1009891e8:
      uVar19 = *(undefined8 *)(unaff_x19 + 0x2b8);
      lVar17 = *(long *)(unaff_x19 + 0x2c0);
      if (lVar17 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar17);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar17);
LAB_100989bf8:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100989bfc);
          (*pcVar6)();
        }
      }
      _memcpy(lVar9,uVar19,lVar17);
      lVar16 = lVar17;
    }
    *(undefined1 *)(unaff_x19 + 0x41a) = 0;
    *(undefined1 *)(unaff_x19 + 0x414) = 0;
    *(undefined8 *)(unaff_x19 + 0x420) = 0x800000000000000a;
    *(long *)(unaff_x19 + 0x428) = lVar16;
    *(long *)(unaff_x19 + 0x430) = lVar9;
    *(long *)(unaff_x19 + 0x438) = lVar17;
    *(undefined8 *)(unaff_x19 + 0x448) = *(undefined8 *)(unaff_x19 + 0x278);
    *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x270);
    *(undefined8 *)(unaff_x19 + 0x450) = *(undefined8 *)(unaff_x19 + 0x280);
    *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 0x3f8);
    *(undefined8 *)(unaff_x19 + 0x458) = *(undefined8 *)(unaff_x19 + 0x3f0);
    *(undefined8 *)(unaff_x19 + 0x470) = *(undefined8 *)(unaff_x19 + 0x408);
    *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x400);
    *(long *)(unaff_x19 + 0x608) = lVar14 + 0x10;
    *(undefined1 *)(in_stack_00000028 + 0xf50) = 0;
    lVar16 = unaff_x19 + 0x420;
    FUN_1004f3438(&stack0x00000260,lVar16,*in_stack_00000038);
    if (in_stack_00000260 != -0x7fffffffffffffdf) {
      _uStack00000000000001e0 = in_stack_00000278;
      if (*(char *)(in_stack_00000028 + 0xf50) == '\0') {
LAB_1009894b4:
        FUN_100def028(lVar16);
      }
      else if (*(char *)(in_stack_00000028 + 0xf50) == '\x03') {
        if (*(char *)(in_stack_00000028 + 0xf48) == '\x03') {
          FUN_100e7ab5c(unaff_x19 + 0x800);
        }
        else if (*(char *)(in_stack_00000028 + 0xf48) == '\0') {
          lVar16 = unaff_x19 + 0x610;
          goto LAB_1009894b4;
        }
      }
      if (in_stack_00000260 == -0x7fffffffffffffe0) {
        if (in_stack_00000268 != 0) {
          _free(in_stack_00000270);
        }
      }
      else {
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
            ((bRam000000010b6280b0 - 1 < 2 ||
             ((bRam000000010b6280b0 != 0 &&
              (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                                 ), cVar7 != '\0')))))) &&
           (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                               ), (uVar12 & 1) != 0)) {
          lVar16 = ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                   + 0x30;
          *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000260;
          *(code **)(unaff_x29 + -0xb8) =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          *(char **)(unaff_x29 + -0xe0) = s_failed_to_submit_ExecApproval__108acc639;
          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xc0;
          in_stack_00000190 = (char *)(unaff_x29 - 0xe0);
          in_stack_00000198 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xa0) = 1;
          *(char ***)(unaff_x29 + -0x98) = &stack0x00000190;
          *(undefined8 *)(unaff_x29 + -0x90) = 1;
          *(long *)(unaff_x29 + -0x88) = lVar16;
          FUN_100991518(unaff_x29 + -0xa0);
        }
        else {
          lVar16 = 
          ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            uVar19 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server22bespoke_event_handling46on_command_execution_request_approval_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h605ac07ee0e5b95eE
                      + 0x20);
            uVar25 = *(undefined8 *)
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
            iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000002f8);
            if (iVar8 != 0) {
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
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar19;
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(undefined8 *)(unaff_x29 + -0xb0) = uVar25;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar2,puVar1,unaff_x29 + -0xc0,unaff_x29 + -0xa0);
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
      lVar16 = **(long **)(unaff_x19 + 0x338);
      **(long **)(unaff_x19 + 0x338) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x338);
      }
      lVar16 = **(long **)(unaff_x19 + 0x318);
      **(long **)(unaff_x19 + 0x318) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x318);
      }
      lVar16 = **(long **)(unaff_x19 + 800);
      **(long **)(unaff_x19 + 800) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc434be58f634db7bE(unaff_x19 + 800);
      }
      lVar16 = **(long **)(unaff_x19 + 0x310);
      **(long **)(unaff_x19 + 0x310) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
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
        lVar16 = lVar9;
        for (lVar14 = *(long *)(unaff_x19 + 0x308); lVar14 != 0; lVar14 = lVar14 + -1) {
          FUN_100e4af0c(lVar16);
          lVar16 = lVar16 + 0x50;
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
      lVar16 = **(long **)(unaff_x19 + 0x118);
      **(long **)(unaff_x19 + 0x118) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x118);
      }
      uVar19 = 0;
      uVar11 = 1;
      goto LAB_100989430;
    }
    uVar11 = 7;
  }
  else {
    *(long *)(unaff_x19 + 0x420) = *(long *)(unaff_x19 + 0x338) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x490) = 0;
    auVar26 = FUN_100fd3e50(unaff_x19 + 0x420,in_stack_00000038);
    uVar19 = auVar26._8_8_;
    pcVar21 = auVar26._0_8_;
    if (pcVar21 != (char *)0x0) {
      if (((*(char *)(unaff_x19 + 0x490) == '\x03') && (*(char *)(unaff_x19 + 0x488) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x440) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x448);
        uVar19 = extraout_x1;
        if (*(long *)(unaff_x19 + 0x450) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x450) + 0x18))(*(undefined8 *)(unaff_x19 + 0x458));
          uVar19 = extraout_x1_00;
        }
      }
      if (*(long *)(pcVar21 + 0x88) == 0) {
        bVar13 = false;
      }
      else {
        uVar18 = *(undefined8 *)(unaff_x19 + 0x2b8);
        lVar9 = *(long *)(unaff_x19 + 0x2c0);
        auVar26 = FUN_100e8dd9c(*(undefined8 *)(pcVar21 + 0x90),*(undefined8 *)(pcVar21 + 0x98),
                                uVar18,lVar9);
        uVar19 = auVar26._8_8_;
        lVar16 = 0;
        lVar14 = *(long *)(pcVar21 + 0x70);
        uVar3 = *(ulong *)(pcVar21 + 0x78);
        bVar10 = auVar26[7] >> 1;
        uVar23 = auVar26._0_8_ & uVar3;
        uVar25 = *(undefined8 *)(lVar14 + uVar23);
        uVar12 = CONCAT17(-((byte)((ulong)uVar25 >> 0x38) == bVar10),
                          CONCAT16(-((byte)((ulong)uVar25 >> 0x30) == bVar10),
                                   CONCAT15(-((byte)((ulong)uVar25 >> 0x28) == bVar10),
                                            CONCAT14(-((byte)((ulong)uVar25 >> 0x20) == bVar10),
                                                     CONCAT13(-((byte)((ulong)uVar25 >> 0x18) ==
                                                               bVar10),CONCAT12(-((byte)((ulong)
                                                  uVar25 >> 0x10) == bVar10),
                                                  CONCAT11(-((byte)((ulong)uVar25 >> 8) == bVar10),
                                                           -((byte)uVar25 == bVar10)))))))) &
                 0x8080808080808080;
        while( true ) {
          for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
            uVar4 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            lVar17 = lVar14 + (uVar23 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3
                              ) * -0x18;
            if ((lVar9 == *(long *)(lVar17 + -8)) &&
               (iVar8 = _memcmp(uVar18,*(undefined8 *)(lVar17 + -0x10),lVar9),
               uVar19 = extraout_x1_01, iVar8 == 0)) {
              bVar13 = true;
              goto LAB_100989180;
            }
          }
          bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar25 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar25 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar25 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar25 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar25 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar25 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar25 >> 8) ==
                                                                     -1),-((char)uVar25 == -1)))))))
                                      ),1);
          if ((bVar24 & 1) != 0) break;
          lVar16 = lVar16 + 8;
          uVar23 = uVar23 + lVar16 & uVar3;
          uVar25 = *(undefined8 *)(lVar14 + uVar23);
          uVar12 = CONCAT17(-((byte)((ulong)uVar25 >> 0x38) == bVar10),
                            CONCAT16(-((byte)((ulong)uVar25 >> 0x30) == bVar10),
                                     CONCAT15(-((byte)((ulong)uVar25 >> 0x28) == bVar10),
                                              CONCAT14(-((byte)((ulong)uVar25 >> 0x20) == bVar10),
                                                       CONCAT13(-((byte)((ulong)uVar25 >> 0x18) ==
                                                                 bVar10),CONCAT12(-((byte)((ulong)
                                                  uVar25 >> 0x10) == bVar10),
                                                  CONCAT11(-((byte)((ulong)uVar25 >> 8) == bVar10),
                                                           -((byte)uVar25 == bVar10)))))))) &
                   0x8080808080808080;
        }
        bVar13 = false;
      }
LAB_100989180:
      if (*pcVar21 == '\0') {
        *pcVar21 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar21,uVar19,1000000000);
      }
      FUN_1060fa678(pcVar21,1,pcVar21);
      cVar22 = *(char *)(unaff_x19 + 0x411);
      if (!bVar13) goto LAB_1009891ac;
      goto LAB_1009891c8;
    }
    uVar11 = 5;
  }
LAB_100989420:
  *in_stack_00000030 = uVar11;
  uVar11 = 3;
  uVar19 = 1;
LAB_100989430:
  *in_stack_00000020 = uVar11;
  return uVar19;
}

