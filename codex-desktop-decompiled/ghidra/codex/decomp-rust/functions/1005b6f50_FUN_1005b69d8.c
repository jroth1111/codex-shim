
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005b69d8(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined1 uVar16;
  code *pcVar17;
  undefined1 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long extraout_x13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar23;
  char *pcVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long *unaff_x24;
  undefined8 *puVar29;
  long lVar30;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  long *plStack0000000000000060;
  long *plStack0000000000000068;
  long *plStack0000000000000070;
  long lStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000130;
  long in_stack_000006d8;
  undefined8 in_stack_000006e0;
  long *plVar13;
  
  *(char **)(unaff_x29 + -0xb0) = s_Qfailed_to_apply_execpolicy_netw_108ac1c8a;
  *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x000006c0;
  plStack0000000000000068 = (long *)&stack0x00000230;
  plStack0000000000000060 = (long *)0x1;
  plStack0000000000000070 = (long *)0x1;
  lStack0000000000000078 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0x149) = 0;
  _memcpy(unaff_x19 + 0x10f,unaff_x19 + 0xd5,0x1c8);
  puVar26 = *(undefined8 **)(unaff_x29 + -0xc0);
  puVar27 = puVar26;
  if (((ulong)puVar26 & 3) == 1) {
    puVar27 = (undefined8 *)((long)puVar26 + -1);
    unaff_x24 = (long *)*puVar27;
    puVar26 = *(undefined8 **)((long)puVar26 + 7);
    pcVar17 = (code *)*puVar26;
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)(unaff_x24);
    }
    if (puVar26[1] != 0) {
      _free(unaff_x24);
    }
    _free(puVar27);
  }
  plStack0000000000000060 = (long *)(unaff_x19[2] + 0x5f0);
  auVar46 = FUN_101496fa8(&stack0x00000060);
  plStack0000000000000068 = auVar46._8_8_;
  plVar13 = auVar46._0_8_;
  plStack0000000000000060 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    if (plStack0000000000000068 == (long *)0x0) {
      if (*plVar13 == 0) {
        *plVar13 = 3;
      }
    }
    else {
      lVar9 = *plStack0000000000000068;
      *plStack0000000000000068 = lVar9 + 1;
      if (lVar9 < 0) goto LAB_1005b7870;
      if ((long *)*plVar13 == plStack0000000000000068 + 2) {
        *plVar13 = 3;
      }
      else {
        lVar9 = *plStack0000000000000068;
        *plStack0000000000000068 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&stack0x00000550);
        }
      }
    }
  }
  plVar13 = plStack0000000000000068;
  *unaff_x20 = plStack0000000000000068;
  if (plStack0000000000000068 == (long *)0x0) {
    lVar8 = unaff_x19[0x10e];
    __ZN10codex_core7session7session20SessionConfiguration18permission_profile17h1131facd9cf2e40eE()
    ;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    lVar9 = unaff_x19[2];
    if (*(char *)(lVar9 + 0x611) == '\x01') {
      lVar30 = **(long **)(lVar9 + 0x3d8);
      **(long **)(lVar9 + 0x3d8) = lVar30 + 1;
      if (lVar30 < 0) goto LAB_1005b7870;
      auVar46 = __ZN10codex_core5tools16network_approval30build_blocked_request_observer17h2fe3cc5dff1f4eeeE
                          (*(undefined8 *)(lVar9 + 0x3d8));
      lVar9 = unaff_x19[2];
      uVar16 = *(undefined1 *)(lVar9 + 0x611);
    }
    else {
      uVar16 = 0;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = puVar27;
      auVar46 = auVar46 << 0x40;
    }
    FUN_1015065f8(&stack0x00000060,lVar9 + 600);
    uVar35 = *(undefined8 *)(unaff_x26 + 0xb8);
    uVar32 = *(undefined8 *)(unaff_x26 + 0xb0);
    uVar41 = *(undefined8 *)(unaff_x26 + 200);
    uVar37 = *(undefined8 *)(unaff_x26 + 0xc0);
    uVar34 = *(undefined8 *)(unaff_x26 + 0x98);
    uVar31 = *(undefined8 *)(unaff_x26 + 0x90);
    uVar43 = *(undefined8 *)(unaff_x26 + 0xa0);
    uVar42 = *(undefined8 *)(unaff_x26 + 0x78);
    uVar38 = *(undefined8 *)(unaff_x26 + 0x70);
    uVar45 = *(undefined8 *)(unaff_x26 + 0x88);
    uVar44 = *(undefined8 *)(unaff_x26 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x29 + -0xa8);
    unaff_x19[0x164] = *(undefined8 *)(unaff_x26 + 0xa8);
    unaff_x19[0x163] = uVar43;
    unaff_x19[0x166] = uVar35;
    unaff_x19[0x165] = uVar32;
    unaff_x19[0x168] = uVar41;
    unaff_x19[0x167] = uVar37;
    unaff_x19[0x169] = in_stack_00000130;
    unaff_x19[0x15c] = in_stack_000000c8;
    unaff_x19[0x15b] = in_stack_000000c0;
    unaff_x19[0x15e] = uVar42;
    unaff_x19[0x15d] = uVar38;
    unaff_x19[0x160] = uVar45;
    unaff_x19[0x15f] = uVar44;
    unaff_x19[0x162] = uVar34;
    unaff_x19[0x161] = uVar31;
    unaff_x19[0x154] = in_stack_00000088;
    unaff_x19[0x153] = in_stack_00000080;
    unaff_x19[0x156] = in_stack_00000098;
    unaff_x19[0x155] = in_stack_00000090;
    unaff_x19[0x158] = in_stack_000000a8;
    unaff_x19[0x157] = in_stack_000000a0;
    unaff_x19[0x15a] = in_stack_000000b8;
    unaff_x19[0x159] = in_stack_000000b0;
    unaff_x19[0x150] = plStack0000000000000068;
    unaff_x19[0x14f] = plStack0000000000000060;
    unaff_x19[0x152] = lStack0000000000000078;
    unaff_x19[0x151] = plStack0000000000000070;
    unaff_x19[0x16a] = unaff_x19 + 0x10f;
    unaff_x19[0x16b] = lVar8 + 0x10;
    unaff_x19[0x16c] = unaff_x20;
    unaff_x19[0x16d] = 0;
    unaff_x19[0x16e] = uVar14;
    *(undefined1 (*) [16])(unaff_x19 + 0x16f) = auVar46;
    *(undefined1 *)(unaff_x28 + 0x4c8) = uVar16;
    *(undefined1 *)(unaff_x28 + 0x4c9) = 0;
    FUN_1005b142c(&stack0x00000060,unaff_x19 + 0x14f);
    lVar9 = in_stack_000000e8;
    plVar13 = plStack0000000000000060;
    if (in_stack_000000e8 == -0x7fffffffffffffff) {
      uVar14 = 1;
      uVar16 = 6;
      goto LAB_1005b74e0;
    }
    *(undefined8 *)(unaff_x26 + 0x498) = in_stack_000000b0;
    *(undefined8 *)(unaff_x26 + 0x490) = in_stack_000000a8;
    *(undefined8 *)(unaff_x26 + 0x4a8) = in_stack_000000c0;
    *(undefined8 *)(unaff_x26 + 0x4a0) = in_stack_000000b8;
    *(undefined8 *)(unaff_x26 + 0x4b8) = *(undefined8 *)(unaff_x26 + 0x70);
    *(undefined8 *)(unaff_x26 + 0x4b0) = *(undefined8 *)(unaff_x26 + 0x68);
    *(undefined8 *)(unaff_x26 + 0x4c8) = *(undefined8 *)(unaff_x26 + 0x80);
    *(undefined8 *)(unaff_x26 + 0x4c0) = *(undefined8 *)(unaff_x26 + 0x78);
    *(long **)(unaff_x26 + 0x458) = plStack0000000000000070;
    *(long **)(unaff_x26 + 0x450) = plStack0000000000000068;
    *(undefined8 *)(unaff_x26 + 0x468) = in_stack_00000080;
    *(long *)(unaff_x26 + 0x460) = lStack0000000000000078;
    *(undefined8 *)(unaff_x26 + 0x478) = in_stack_00000090;
    *(undefined8 *)(unaff_x26 + 0x470) = in_stack_00000088;
    *(undefined8 *)(unaff_x26 + 0x488) = in_stack_000000a0;
    *(undefined8 *)(unaff_x26 + 0x480) = in_stack_00000098;
    *(undefined8 *)(unaff_x26 + 0x438) = *(undefined8 *)(unaff_x26 + 0xa8);
    *(undefined8 *)(unaff_x26 + 0x430) = *(undefined8 *)(unaff_x26 + 0xa0);
    *(undefined8 *)(unaff_x26 + 0x428) = *(undefined8 *)(unaff_x26 + 0x98);
    *(undefined8 *)(unaff_x26 + 0x420) = *(undefined8 *)(unaff_x26 + 0x90);
    FUN_100d5661c(unaff_x19 + 0x14f);
    if (lVar9 == -0x8000000000000000) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62ae58 - 1 < 2 ||
           ((bRam000000010b62ae58 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85e1b242c07618d5E
                                ), cVar10 != '\0')))) &&
          (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85e1b242c07618d5E
                              ), (uVar15 & 1) != 0)))) {
        lStack0000000000000078 =
             ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85e1b242c07618d5E
             + 0x30;
        *(char **)(unaff_x29 + -0xb0) = s__failed_to_start_managed_network_108ac1d63;
        *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x000006c0;
        plStack0000000000000068 = (long *)&stack0x00000230;
        plStack0000000000000060 = (long *)0x1;
        plStack0000000000000070 = (long *)0x1;
        FUN_1005b8434(&stack0x00000060);
      }
      else {
        lVar9 = 
        ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85e1b242c07618d5E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar14 = *(undefined8 *)
                    (
                    ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85e1b242c07618d5E
                    + 0x20);
          puVar5 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_10b3c24c8;
          }
          puVar6 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar6 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar5 + 0x18))(puVar6,&stack0x00000538);
          if (iVar11 != 0) {
            lStack0000000000000078 =
                 ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h85e1b242c07618d5E
                 + 0x30;
            *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000278;
            *(code **)(unaff_x29 + -0xa8) =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000230;
            *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
            plStack0000000000000068 = (long *)(unaff_x29 + -0xc0);
            plStack0000000000000060 = (long *)0x1;
            plStack0000000000000070 = (long *)0x1;
            unaff_x27[1] = uVar14;
            *unaff_x27 = 2;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar9,puVar6,puVar5,&stack0x000006c0,&stack0x00000060);
          }
        }
      }
      (**(code **)*plVar13)();
    }
    else {
      in_stack_000000c0 = *(undefined8 *)(unaff_x26 + 0x498);
      in_stack_000000b8 = *(undefined8 *)(unaff_x26 + 0x490);
      *(undefined8 *)(unaff_x26 + 0x70) = *(undefined8 *)(unaff_x26 + 0x4a8);
      *(undefined8 *)(unaff_x26 + 0x68) = *(undefined8 *)(unaff_x26 + 0x4a0);
      *(undefined8 *)(unaff_x26 + 0x80) = *(undefined8 *)(unaff_x26 + 0x4b8);
      *(undefined8 *)(unaff_x26 + 0x78) = *(undefined8 *)(unaff_x26 + 0x4b0);
      *(undefined8 *)(unaff_x26 + 0x90) = *(undefined8 *)(unaff_x26 + 0x4c8);
      *(undefined8 *)(unaff_x26 + 0x88) = *(undefined8 *)(unaff_x26 + 0x4c0);
      in_stack_00000080 = *(undefined8 *)(unaff_x26 + 0x458);
      lStack0000000000000078 = *(long *)(unaff_x26 + 0x450);
      in_stack_00000090 = *(undefined8 *)(unaff_x26 + 0x468);
      in_stack_00000088 = *(undefined8 *)(unaff_x26 + 0x460);
      in_stack_000000a0 = *(undefined8 *)(unaff_x26 + 0x478);
      in_stack_00000098 = *(undefined8 *)(unaff_x26 + 0x470);
      in_stack_000000b0 = *(undefined8 *)(unaff_x26 + 0x488);
      in_stack_000000a8 = *(undefined8 *)(unaff_x26 + 0x480);
      uVar14 = *(undefined8 *)(unaff_x26 + 0x420);
      unaff_x27[2] = *(undefined8 *)(unaff_x26 + 0x428);
      unaff_x27[1] = uVar14;
      uVar14 = *(undefined8 *)(unaff_x26 + 0x430);
      unaff_x27[4] = *(undefined8 *)(unaff_x26 + 0x438);
      unaff_x27[3] = uVar14;
      lVar8 = unaff_x19[2];
      plStack0000000000000068 = (long *)0x1;
      plStack0000000000000060 = (long *)0x1;
      plStack0000000000000070 = plVar13;
      puVar27 = (undefined8 *)_malloc(0x98);
      if (puVar27 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x98);
        goto LAB_1005b7870;
      }
      uVar32 = *(undefined8 *)(unaff_x26 + 0x78);
      uVar14 = *(undefined8 *)(unaff_x26 + 0x70);
      uVar37 = *(undefined8 *)(unaff_x26 + 0x88);
      uVar35 = *(undefined8 *)(unaff_x26 + 0x80);
      puVar27[0xd] = in_stack_000000c8;
      puVar27[0xc] = in_stack_000000c0;
      puVar27[0xf] = uVar32;
      puVar27[0xe] = uVar14;
      puVar27[0x11] = uVar37;
      puVar27[0x10] = uVar35;
      puVar27[0x12] = in_stack_000000f0;
      puVar27[5] = in_stack_00000088;
      puVar27[4] = in_stack_00000080;
      puVar27[7] = in_stack_00000098;
      puVar27[6] = in_stack_00000090;
      puVar27[9] = in_stack_000000a8;
      puVar27[8] = in_stack_000000a0;
      puVar27[0xb] = in_stack_000000b8;
      puVar27[10] = in_stack_000000b0;
      puVar27[1] = plStack0000000000000068;
      *puVar27 = plStack0000000000000060;
      puVar27[3] = lStack0000000000000078;
      puVar27[2] = plStack0000000000000070;
      plVar13 = (long *)(lVar8 + 0x5f0);
      LOAcquire();
      lVar30 = *plVar13;
      *plVar13 = (long)(puVar27 + 2);
      LORelease();
      FUN_100710558(lVar8 + 0x5f8,lVar30);
      plStack0000000000000060 = (long *)(lVar30 + -0x10);
      plVar13 = (long *)0x0;
      if (lVar30 != 0) {
        lVar8 = *plStack0000000000000060;
        *plStack0000000000000060 = lVar8 + -1;
        LORelease();
        plVar13 = plStack0000000000000060;
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&stack0x00000060);
          plVar13 = plStack0000000000000060;
        }
      }
      plStack0000000000000060 = plVar13;
      if (lVar9 != 0) {
        _free(auVar46._8_8_);
      }
      if (in_stack_000006d8 != 0) {
        _free(in_stack_000006e0);
      }
    }
    uVar15 = unaff_x19[0x14a];
    bVar7 = uVar15 != 0x8000000000000000;
    if (uVar15 < 0x8000000000000001) {
      uVar15 = 0;
    }
    if ((bVar7) && ((uVar15 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(unaff_x19 + 0x14a);
    }
    FUN_100e4119c(unaff_x19 + 0x10f);
    lVar9 = *(long *)unaff_x19[0x10e];
    *(long *)unaff_x19[0x10e] = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h651c099e6cbbe2daE(unaff_x19 + 0x10e);
    }
    if ((*(byte *)(unaff_x19 + 0x149) & 1) != 0) {
      FUN_100e4119c(unaff_x19 + 0xd5);
    }
  }
  else {
    unaff_x19[0x14b] = plStack0000000000000068;
    plVar1 = plStack0000000000000068 + 2;
    unaff_x19[0x2d1] = unaff_x19 + 0x10f;
    unaff_x19[0x2d2] = plVar1;
    *(undefined1 *)(unaff_x28 + 0x699) = 0;
    plVar2 = unaff_x19 + 0x14c;
    *(undefined1 *)(unaff_x28 + 0x698) = 0;
    __ZN10codex_core6config18network_proxy_spec16NetworkProxySpec27build_config_state_for_spec17h740cb2e11bd853efE
              (&stack0x00000060);
    plVar20 = plStack0000000000000068;
    if (plStack0000000000000060 != (long *)0x2) {
      _memcpy(&stack0x00000560,&stack0x00000070,0x158);
      *(undefined1 *)(unaff_x28 + 0x698) = 1;
      plVar20 = (long *)plVar13[10];
      lVar9 = *plVar20;
      *plVar20 = lVar9 + 1;
      if (lVar9 < 0) goto LAB_1005b7870;
      lVar9 = plVar13[0xf];
      plVar19 = (long *)plVar13[0xb];
      lVar8 = *plVar19;
      *plVar19 = lVar8 + 1;
      if ((lVar8 < 0) ||
         ((plVar21 = (long *)plVar13[0xc], plVar21 != (long *)0x0 &&
          (lVar8 = *plVar21, *plVar21 = lVar8 + 1, lVar8 < 0)))) goto LAB_1005b7870;
      plVar22 = (long *)plVar13[0xd];
      lVar8 = extraout_x13;
      if (plVar22 != (long *)0x0) {
        lVar8 = *plVar22;
        *plVar22 = lVar8 + 1;
        if (lVar8 < 0) goto LAB_1005b7870;
        lVar8 = plVar13[0xe];
      }
      unaff_x19[0x154] = plVar20;
      lVar30 = *plVar1;
      lVar39 = plVar13[5];
      lVar33 = plVar13[4];
      unaff_x19[0x14d] = plVar13[3];
      *plVar2 = lVar30;
      unaff_x19[0x14f] = lVar39;
      unaff_x19[0x14e] = lVar33;
      lVar33 = plVar13[7];
      lVar30 = plVar13[6];
      lVar39 = plVar13[8];
      unaff_x19[0x153] = plVar13[9];
      unaff_x19[0x152] = lVar39;
      unaff_x19[0x151] = lVar33;
      unaff_x19[0x150] = lVar30;
      *(char *)(unaff_x19 + 0x159) = (char)lVar9;
      unaff_x19[0x155] = plVar19;
      unaff_x19[0x156] = plVar21;
      unaff_x19[0x157] = plVar22;
      unaff_x19[0x158] = lVar8;
      *(undefined1 *)(unaff_x28 + 0x698) = 0;
      puVar27 = unaff_x19 + 0x15a;
      _memcpy(puVar27,&stack0x00000550,0x168);
      unaff_x19[0x187] = plVar2;
      puVar26 = unaff_x19 + 0x1b6;
      *(undefined1 *)(unaff_x19 + 0x1b6) = 0;
      unaff_x19[0x188] = plVar2;
      *(undefined2 *)((long)unaff_x19 + 0xdb1) = 1;
      _memcpy(unaff_x19 + 0x189,puVar27,0x168);
      unaff_x19[0x1b7] = unaff_x19[0x154] + 0x10;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      FUN_100b12614(&stack0x00000060,unaff_x19 + 0x1b7);
      uVar45 = in_stack_000000c8;
      uVar44 = in_stack_000000c0;
      uVar43 = in_stack_000000b8;
      uVar42 = in_stack_000000b0;
      uVar41 = in_stack_000000a8;
      uVar38 = in_stack_000000a0;
      uVar37 = in_stack_00000098;
      uVar35 = in_stack_00000090;
      uVar32 = in_stack_00000088;
      uVar14 = in_stack_00000080;
      lVar9 = lStack0000000000000078;
      plVar20 = plStack0000000000000070;
      plVar1 = plStack0000000000000068;
      plVar13 = plStack0000000000000060;
      if (plStack0000000000000060 == (long *)0x3) {
        *(undefined1 *)puVar26 = 3;
        bVar7 = true;
      }
      else {
        uVar34 = *(undefined8 *)(unaff_x26 + 0x78);
        uVar31 = *(undefined8 *)(unaff_x26 + 0x70);
        uVar40 = *(undefined8 *)(unaff_x26 + 0x88);
        uVar36 = *(undefined8 *)(unaff_x26 + 0x80);
        if (*(char *)(unaff_x19 + 0x1b9) == '\x04') {
          if ((*(char *)(unaff_x19 + 0x1c5) == '\x03') && (*(char *)(unaff_x19 + 0x1c4) == '\x03'))
          {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x1bc);
            if (unaff_x19[0x1bd] != 0) {
              (**(code **)(unaff_x19[0x1bd] + 0x18))(unaff_x19[0x1be]);
            }
          }
        }
        else if (*(char *)(unaff_x19 + 0x1b9) == '\x03') {
          FUN_100cd5a2c(unaff_x19 + 0x1ba);
        }
        unaff_x24 = plVar1;
        if (plVar13 == (long *)0x2) {
LAB_1005b7184:
          if ((*(byte *)((long)unaff_x19 + 0xdb1) & 1) != 0) {
            FUN_100e1376c(unaff_x19 + 0x189);
          }
        }
        else {
          unaff_x19[0x2bf] = plVar13;
          unaff_x19[0x2c0] = plVar1;
          unaff_x19[0x2ca] = uVar43;
          unaff_x19[0x2c9] = uVar42;
          unaff_x19[0x2cc] = uVar45;
          unaff_x19[0x2cb] = uVar44;
          unaff_x19[0x2ce] = uVar34;
          unaff_x19[0x2cd] = uVar31;
          unaff_x19[0x2d0] = uVar40;
          unaff_x19[0x2cf] = uVar36;
          unaff_x19[0x2c2] = lVar9;
          unaff_x19[0x2c1] = plVar20;
          unaff_x19[0x2c4] = uVar32;
          unaff_x19[0x2c3] = uVar14;
          unaff_x19[0x2c6] = uVar37;
          unaff_x19[0x2c5] = uVar35;
          unaff_x19[0x2c8] = uVar41;
          unaff_x19[0x2c7] = uVar38;
          if (*(char *)(unaff_x19 + 0x199) != *(char *)(unaff_x28 + 0x678)) {
            unaff_x24 = (long *)FUN_107c058fc(&UNK_108cb866d,0x30);
LAB_1005b7178:
            FUN_100e2ac5c(unaff_x19 + 0x2bf);
            goto LAB_1005b7184;
          }
          if ((unaff_x19[399] != unaff_x19[0x2c5]) ||
             (iVar11 = _memcmp(unaff_x19[0x18e],unaff_x19[0x2c4]), iVar11 != 0)) {
            unaff_x24 = (long *)FUN_107c058fc(&UNK_108cb863b,0x32);
            goto LAB_1005b7178;
          }
          if ((unaff_x19[0x192] != unaff_x19[0x2c8]) ||
             (iVar11 = _memcmp(unaff_x19[0x191],unaff_x19[0x2c7]), iVar11 != 0)) {
            unaff_x24 = (long *)FUN_107c058fc(&UNK_108cb8609,0x32);
            goto LAB_1005b7178;
          }
          if (*(char *)((long)unaff_x19 + 0xcc9) != *(char *)(unaff_x28 + 0x679)) {
            unaff_x24 = (long *)FUN_107c058fc(&UNK_108cb85d3,0x36);
            goto LAB_1005b7178;
          }
          if (*(char *)((long)unaff_x19 + 0xcca) != *(char *)(unaff_x28 + 0x67a)) {
            unaff_x24 = (long *)FUN_107c058fc(&UNK_108cb8599,0x3a);
            goto LAB_1005b7178;
          }
          __ZN19codex_network_proxy5proxy27NetworkProxyRuntimeSettings11from_config17h4ac54af37251c845E
                    (unaff_x19 + 0x1b7,unaff_x19 + 0x189);
          *(undefined1 *)((long)unaff_x19 + 0xdb2) = 1;
          lVar9 = *(long *)(unaff_x19[0x188] + 0x40) + 0x10;
          *(undefined1 *)((long)unaff_x19 + 0xdb1) = 0;
          puVar29 = unaff_x19 + 0x1ba;
          _memcpy(puVar29,unaff_x19 + 0x189,0x168);
          unaff_x19[0x1e7] = lVar9;
          puVar18 = (undefined1 *)(unaff_x28 + 0xb0);
          *puVar18 = 0;
          unaff_x19[0x1e8] = lVar9;
          *(undefined2 *)(unaff_x28 + 0xb1) = 0x101;
          _memcpy(unaff_x19 + 0x1e9,puVar29,0x168);
          unaff_x19[0x29f] = lVar9;
          *(undefined1 *)(unaff_x28 + 0x503) = 0;
          auVar46 = FUN_100b14e84(unaff_x19 + 0x217);
          unaff_x24 = auVar46._8_8_;
          if ((auVar46._0_8_ & 1) == 0) {
            FUN_100cd5a2c(unaff_x19 + 0x217);
            if (unaff_x24 == (long *)0x0) {
              unaff_x19[0x217] = *(long *)(unaff_x19[0x1e8] + 0xd8) + 0x10;
              *(undefined1 *)(unaff_x28 + 0x110) = 0;
              FUN_100fd5070(&stack0x00000060,unaff_x19 + 0x217);
              plVar1 = plStack0000000000000068;
              plVar13 = plStack0000000000000060;
              if (plStack0000000000000060 == (long *)0x0) {
                uVar16 = 4;
                goto LAB_1005b68dc;
              }
              uVar15 = (ulong)plStack0000000000000070 & 0xffffffff;
              if ((*(char *)(unaff_x28 + 0x110) == '\x03') &&
                 (*(char *)(unaff_x28 + 0x108) == '\x03')) {
                __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                          (unaff_x19 + 0x219);
                if (unaff_x19[0x21a] != 0) {
                  (**(code **)(unaff_x19[0x21a] + 0x18))(unaff_x19[0x21b]);
                }
              }
              __ZN19codex_network_proxy7runtime18log_policy_changes17haca5f38b437b314eE
                        (plVar1,unaff_x19 + 0x1e9);
              FUN_1014aa240(&stack0x00000060,plVar1 + 0x1a);
              uVar25 = unaff_x19[0x206];
              uVar23 = unaff_x19[0x203];
              if (uVar25 != 0) {
                uVar28 = 0;
                if (uVar23 <= (ulong)unaff_x19[0x205]) {
                  uVar28 = uVar23;
                }
                lVar8 = unaff_x19[0x205] - uVar28;
                uVar28 = uVar23 - lVar8;
                lVar9 = 0;
                if (uVar28 <= uVar25) {
                  lVar9 = uVar25 - uVar28;
                }
                uVar4 = uVar23;
                if (uVar25 <= uVar28) {
                  uVar4 = lVar8 + uVar25;
                }
                lVar30 = unaff_x19[0x204];
                lVar33 = uVar4 - lVar8;
                if (lVar33 != 0) {
                  lVar8 = lVar30 + lVar8 * 0xb8;
                  do {
                    func_0x000100e1ce88(lVar8);
                    lVar8 = lVar8 + 0xb8;
                    lVar33 = lVar33 + -1;
                  } while (lVar33 != 0);
                }
                if (uVar28 < uVar25) {
                  do {
                    func_0x000100e1ce88(lVar30);
                    lVar30 = lVar30 + 0xb8;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
              }
              if (uVar23 != 0) {
                _free(unaff_x19[0x204]);
              }
              *(undefined1 *)(unaff_x28 + 0xb2) = 1;
              unaff_x19[0x204] = plStack0000000000000068;
              unaff_x19[0x203] = plStack0000000000000060;
              unaff_x19[0x206] = lStack0000000000000078;
              unaff_x19[0x205] = plStack0000000000000070;
              unaff_x19[0x215] = plVar1[0x2c];
              *(undefined2 *)(unaff_x28 + 0xb1) = 0;
              _memcpy(&stack0x00000060,unaff_x19 + 0x1e9,0x168);
              FUN_100e1376c(plVar1);
              _memcpy(plVar1,&stack0x00000060,0x168);
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
                  ((bRam000000010b62ed20 - 1 < 2 ||
                   ((bRam000000010b62ed20 != 0 &&
                    (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                                        ), cVar10 != '\0')))))) &&
                 (uVar23 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                                     ), (uVar23 & 1) != 0)) {
                lStack0000000000000078 =
                     ___ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                     + 0x30;
                *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000230;
                *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
                plStack0000000000000068 = (long *)(unaff_x29 + -0xc0);
                plStack0000000000000060 = (long *)0x1;
                plStack0000000000000070 = (long *)0x1;
                FUN_100b15d10(&stack0x00000060);
              }
              else {
                lVar9 = 
                ___ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar14 = *(undefined8 *)
                            (
                            ___ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                            + 0x20);
                  uVar32 = *(undefined8 *)
                            (
                            ___ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                            + 0x28);
                  *(undefined8 *)(unaff_x29 + -0xb0) = 3;
                  *(undefined8 *)(unaff_x29 + -0xa8) = uVar14;
                  *(undefined8 *)(unaff_x29 + -0xa0) = uVar32;
                  puVar5 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar5 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar11 = (**(code **)(puVar5 + 0x18))(puVar6,unaff_x29 + -0xb0);
                  if (iVar11 != 0) {
                    lStack0000000000000078 =
                         ___ZN19codex_network_proxy7runtime17NetworkProxyState20replace_config_state28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h43fae727e7d265f5E
                         + 0x30;
                    *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x00000230;
                    *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
                    plStack0000000000000068 = (long *)(unaff_x29 + -0xc0);
                    plStack0000000000000060 = (long *)0x1;
                    plStack0000000000000070 = (long *)0x1;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar9,puVar6,puVar5,unaff_x29 + -0xb0,&stack0x00000060);
                  }
                }
              }
              __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(plVar13,uVar15)
              ;
              unaff_x24 = (long *)0x0;
              *(undefined2 *)(unaff_x28 + 0xb1) = 0;
            }
            else {
              FUN_100e1376c(unaff_x19 + 0x1e9);
              *(undefined2 *)(unaff_x28 + 0xb1) = 0;
            }
            bVar7 = false;
            *puVar18 = 1;
          }
          else {
            uVar16 = 3;
            unaff_x24 = plVar1;
LAB_1005b68dc:
            *puVar18 = uVar16;
            bVar7 = true;
          }
          if (bVar7) {
            *(undefined1 *)puVar26 = 4;
            bVar7 = true;
            goto LAB_1005b71a8;
          }
          FUN_100ce17bc(puVar29);
          if (unaff_x24 != (long *)0x0) {
            lVar9 = *(long *)unaff_x19[0x1b7];
            *(long *)unaff_x19[0x1b7] = lVar9 + -1;
            LORelease();
            if (lVar9 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d6cf5d6383abd98E(unaff_x19 + 0x1b7);
            }
            *(undefined1 *)((long)unaff_x19 + 0xdb2) = 0;
            goto LAB_1005b7178;
          }
          lVar9 = *(long *)(unaff_x19[0x188] + 0x48);
          puVar3 = (ulong *)(lVar9 + 0x10);
          LOAcquire();
          uVar15 = *puVar3;
          *puVar3 = uVar15 | 1;
          if ((uVar15 & 1) != 0) {
            FUN_107c05e00(puVar3,1);
          }
          if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
              0x7fffffffffffffff) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = FUN_107c05e34();
            uVar12 = uVar12 ^ 1;
          }
          *(undefined1 *)((long)unaff_x19 + 0xdb2) = 0;
          plStack0000000000000068 = (long *)unaff_x19[0x1b8];
          plStack0000000000000060 = (long *)unaff_x19[0x1b7];
          plStack0000000000000070 = (long *)unaff_x19[0x1b9];
          puVar29 = (undefined8 *)(lVar9 + 0x20);
          lVar8 = *(long *)*puVar29;
          *(long *)*puVar29 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d6cf5d6383abd98E(puVar29);
          }
          *(long **)(lVar9 + 0x28) = plStack0000000000000068;
          *puVar29 = plStack0000000000000060;
          *(long **)(lVar9 + 0x30) = plStack0000000000000070;
          if ((((uVar12 & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar15 = FUN_107c05e34(), (uVar15 & 1) == 0)) {
            *(undefined1 *)(lVar9 + 0x18) = 1;
          }
          if (*puVar3 == 1) {
            *puVar3 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar3);
          }
          *(undefined1 *)((long)unaff_x19 + 0xdb2) = 0;
          FUN_100e2ac5c(unaff_x19 + 0x2bf);
          unaff_x24 = (long *)0x0;
        }
        *(undefined1 *)((long)unaff_x19 + 0xdb1) = 0;
        bVar7 = false;
        *(undefined1 *)puVar26 = 1;
      }
LAB_1005b71a8:
      if (bVar7) {
        *(undefined1 *)(unaff_x28 + 0x699) = 3;
        uVar14 = 1;
        uVar16 = 5;
        goto LAB_1005b74e0;
      }
      FUN_100ccbe44(puVar27);
      if (unaff_x24 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        *(long **)(unaff_x29 + -0xb0) = unaff_x24;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000060,s__failed_to_update_network_proxy_s_108ac1077,&stack0x000006c0);
        plVar20 = plStack0000000000000070;
        plVar1 = plStack0000000000000068;
        plVar13 = plStack0000000000000060;
        puVar27 = (undefined8 *)_malloc(0x18);
        if (puVar27 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_1005b7870:
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1005b7874);
          (*pcVar17)();
        }
        *puVar27 = plVar13;
        puVar27[1] = plVar1;
        puVar27[2] = plVar20;
        puVar26 = (undefined8 *)_malloc(0x18);
        if (puVar26 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_1005b7870;
        }
        *puVar26 = puVar27;
        puVar26[1] = &UNK_10b209118;
        *(undefined1 *)(puVar26 + 2) = 0x28;
        (**(code **)**(undefined8 **)(unaff_x29 + -0xb0))();
        plVar20 = (long *)((long)puVar26 + 1);
      }
      FUN_100e0f38c(plVar2);
    }
    *(undefined1 *)(unaff_x28 + 0x698) = 0;
    *(undefined1 *)(unaff_x28 + 0x699) = 1;
    if (plVar20 == (long *)0x0) {
LAB_1005b7430:
      lVar9 = *(long *)unaff_x19[0x14b];
      *(long *)unaff_x19[0x14b] = lVar9 + -1;
      LORelease();
    }
    else {
      *(long **)(unaff_x29 + -0xc0) = plVar20;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62ae88 - 1 < 2 ||
           ((bRam000000010b62ae88 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf22ed536e7c24086E
                                ), cVar10 != '\0')))) &&
          (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf22ed536e7c24086E
                              ), (uVar15 & 1) != 0)))) {
        lStack0000000000000078 =
             ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf22ed536e7c24086E
             + 0x30;
        *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x000006c0;
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
        plStack0000000000000068 = (long *)(unaff_x29 + -0xb0);
        plStack0000000000000060 = (long *)0x1;
        plStack0000000000000070 = (long *)0x1;
        FUN_1005b807c(&stack0x00000060);
      }
      else {
        lVar9 = 
        ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf22ed536e7c24086E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar5 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_10b3c24c8;
          }
          puVar6 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar6 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar5 + 0x18))(puVar6,&stack0x00000468);
          if (iVar11 != 0) {
            lStack0000000000000078 =
                 ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_60refresh_managed_network_proxy_for_current_permission_profile28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf22ed536e7c24086E
                 + 0x30;
            *(char **)(unaff_x29 + -0xb0) = s_<failed_to_refresh_managed_netwo_108ac1d24;
            *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x000006c0;
            plStack0000000000000068 = (long *)&stack0x00000230;
            plStack0000000000000060 = (long *)0x1;
            plStack0000000000000070 = (long *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar9,puVar6,puVar5,&stack0x00000550,&stack0x00000060);
          }
        }
      }
      uVar15 = *(ulong *)(unaff_x29 + -0xc0);
      if ((uVar15 & 3) != 1) goto LAB_1005b7430;
      uVar14 = *(undefined8 *)(uVar15 - 1);
      puVar27 = *(undefined8 **)(uVar15 + 7);
      pcVar17 = (code *)*puVar27;
      if (pcVar17 != (code *)0x0) {
        (*pcVar17)(uVar14);
      }
      if (puVar27[1] != 0) {
        _free(uVar14);
      }
      _free((undefined8 *)(uVar15 - 1));
      lVar9 = *(long *)unaff_x19[0x14b];
      *(long *)unaff_x19[0x14b] = lVar9 + -1;
      LORelease();
    }
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(unaff_x19 + 0x14b);
    }
    FUN_100e4119c(unaff_x19 + 0x10f);
    lVar9 = *(long *)unaff_x19[0x10e];
    *(long *)unaff_x19[0x10e] = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h651c099e6cbbe2daE(unaff_x19 + 0x10e);
    }
    if (*(char *)(unaff_x19 + 0x149) == '\x01') {
      FUN_100e4119c(unaff_x19 + 0xd5);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x149) = 0;
  FUN_100e4119c(unaff_x19 + 0x9c);
  FUN_100e2d09c(unaff_x19 + 3);
  iVar11 = *(int *)(unaff_x19 + 1);
  uVar16 = 1;
  if (iVar11 == 0) {
    uVar14 = 0;
  }
  else {
    pcVar24 = (char *)*unaff_x19;
    if (*pcVar24 == '\0') {
      *pcVar24 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar24,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar24,iVar11,pcVar24);
    uVar14 = 0;
    uVar16 = 1;
  }
LAB_1005b74e0:
  *(undefined1 *)((long)unaff_x19 + 0xa49) = uVar16;
  return uVar14;
}

