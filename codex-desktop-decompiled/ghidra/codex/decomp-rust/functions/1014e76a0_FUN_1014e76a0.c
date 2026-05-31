
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014e76a0(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  code *pcVar9;
  ulong *unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  long *unaff_x22;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  char *unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  char in_wzr;
  undefined1 auVar17 [16];
  ulong in_stack_00000010;
  undefined8 *in_stack_00000018;
  ulong in_stack_00000020;
  char *in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 *in_stack_00000048;
  char *pcStack0000000000000058;
  undefined8 *puStack0000000000000060;
  ulong in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  char *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  ulong in_stack_000000b0;
  char *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  ulong in_stack_000000c8;
  undefined8 *puStack00000000000000d0;
  undefined8 *puStack00000000000000d8;
  undefined *puStack00000000000000e0;
  ulong uStack00000000000000e8;
  undefined8 *in_stack_000000f0;
  ulong in_stack_000000f8;
  char *in_stack_00000100;
  undefined8 *in_stack_00000108;
  ulong in_stack_00000110;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  char *in_stack_00000120;
  long in_stack_00000128;
  
  puStack0000000000000060 = &stack0x00000010;
  pcStack0000000000000058 = s_upgrading_this__108adbef5;
  *(char ***)(unaff_x29 + -0x70) = &stack0x00000058;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  puStack00000000000000d8 = (undefined8 *)(unaff_x29 + -0x70);
  puStack00000000000000d0 = (undefined8 *)0x1;
  puStack00000000000000e0 = (undefined *)0x1;
  uStack00000000000000e8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000d0);
  uVar10 = extraout_x1;
  if ((*unaff_x27 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar11 = *unaff_x22;
    in_stack_000000a8 = *(undefined8 **)(lVar11 + 0x20);
    in_stack_000000b0 = *(ulong *)(lVar11 + 0x28);
    in_stack_000000a0 = 5;
    puVar13 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar13 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar13 + 0x18))(puVar3,&stack0x000000a0);
    uVar10 = extraout_x1_00;
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar11,puVar3,puVar13,&stack0x000000a0,&stack0x000000d0);
      uVar10 = extraout_x1_01;
    }
  }
  lVar11 = *(long *)(unaff_x29 + -0x80);
  pcVar2 = (char *)(lVar11 + 0x10);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar2,uVar10,1000000000);
  }
  lVar11 = *(long *)(lVar11 + 0x18);
  if (*pcVar2 == '\x01') {
    *pcVar2 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar2,0);
  }
  if (lVar11 == 0) {
    puVar8 = (undefined8 *)_malloc(0x10);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x10);
      goto LAB_1014e78e0;
    }
    *puVar8 = &UNK_108cd9610;
    puVar8[1] = 0x21;
    lVar11 = **(long **)(unaff_x29 + -0x80);
    **(long **)(unaff_x29 + -0x80) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h70a20729cb521f7bE(unaff_x29 + -0x80);
      puVar13 = &UNK_10b209930;
    }
    else {
      puVar13 = &UNK_10b209930;
    }
  }
  else {
    puVar8 = (undefined8 *)0x0;
    puVar13 = *(undefined **)(unaff_x29 + -0x80);
  }
  puVar1 = unaff_x19 + 0x31;
  unaff_x19[0x31] = (ulong)puVar8;
  unaff_x19[0x32] = (ulong)puVar13;
  *(undefined1 *)(unaff_x19 + 0x34) = 0;
  if (puVar8 == (undefined8 *)0x0) {
    unaff_x19[0x33] = (ulong)puVar13;
    __ZN82__LT_rama_http__io__upgrade__OnUpgrade_u20_as_u20_core__future__future__Future_GT_4poll17h826fd1cf3c4d22e7E
              (&stack0x000000d0,unaff_x19 + 0x33);
    puVar13 = puStack00000000000000e0;
    puVar8 = puStack00000000000000d8;
    uVar14 = (ulong)puStack00000000000000d0;
    if (puStack00000000000000d0 == (undefined8 *)0x8000000000000001) {
      *(undefined1 *)(unaff_x19 + 0x34) = 3;
      uVar10 = 1;
      *(undefined1 *)(unaff_x19 + 0x30) = 3;
      uVar14 = *unaff_x19;
      goto joined_r0x0001014e73c8;
    }
    in_stack_000000a8 = in_stack_000000f0;
    in_stack_000000a0 = uStack00000000000000e8;
    in_stack_000000b8 = in_stack_00000100;
    in_stack_000000b0 = in_stack_000000f8;
    in_stack_000000c8 = in_stack_00000110;
    in_stack_000000c0 = in_stack_00000108;
    lVar11 = *(long *)unaff_x19[0x33];
    *(long *)unaff_x19[0x33] = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h70a20729cb521f7bE(unaff_x19 + 0x33);
    }
  }
  else {
    uVar14 = 0x8000000000000000;
  }
  in_stack_00000018 = in_stack_000000a8;
  in_stack_00000010 = in_stack_000000a0;
  in_stack_00000028 = in_stack_000000b8;
  in_stack_00000020 = in_stack_000000b0;
  in_stack_00000038 = in_stack_000000c8;
  in_stack_00000030 = in_stack_000000c0;
  *(undefined1 *)(unaff_x19 + 0x34) = 1;
  unaff_x19[0x27] = uVar14;
  unaff_x19[0x28] = (ulong)puVar8;
  unaff_x19[0x29] = (ulong)puVar13;
  unaff_x19[0x2b] = (ulong)in_stack_000000a8;
  unaff_x19[0x2a] = in_stack_000000a0;
  unaff_x19[0x2d] = (ulong)in_stack_000000b8;
  unaff_x19[0x2c] = in_stack_000000b0;
  unaff_x19[0x2f] = in_stack_000000c8;
  unaff_x19[0x2e] = (ulong)in_stack_000000c0;
  FUN_100d2a208(puVar1);
  if (unaff_x19[0x27] == 0x8000000000000000) {
    in_stack_00000048 = (undefined8 *)unaff_x19[0x29];
    in_stack_00000040 = unaff_x19[0x28];
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
       (((bRam000000010b636000 - 1 < 2 ||
         ((bRam000000010b636000 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
                             ), cVar5 != '\0')))) &&
        (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
                            ),
        lVar11 = 
        ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
        , (uVar14 & 1) != 0)))) {
      uStack00000000000000e8 =
           ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
           + 0x30;
      pcStack0000000000000058 = (char *)&stack0x00000040;
      puStack0000000000000060 =
           (undefined8 *)
           &
           __ZN74__LT_rama_error__ext__wrapper__OpaqueError_u20_as_u20_core__fmt__Debug_GT_3fmt17h5c47b127bdf2312bE
      ;
      *(char **)(unaff_x29 + -0x70) = s_upgrade_error__108acd48a;
      *(char ***)(unaff_x29 + -0x68) = &stack0x00000058;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
      puStack00000000000000d8 = (undefined8 *)(unaff_x29 + -0x80);
      puStack00000000000000d0 = (undefined8 *)0x1;
      puStack00000000000000e0 = (undefined *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar11,&stack0x000000d0);
      lVar11 = 
      ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
      ;
      if ((*unaff_x27 == '\0') && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_000000a8 =
             *(undefined8 **)
              (
              ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
              + 0x20);
        in_stack_000000b0 =
             *(ulong *)(
                       ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
                       + 0x28);
        in_stack_000000a0 = 1;
        puVar13 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar13 + 0x18))(puVar3,&stack0x000000a0);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar11,puVar3,puVar13,&stack0x000000a0,&stack0x000000d0);
        }
      }
    }
    else {
      lVar11 = 
      ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
      ;
      if ((*unaff_x27 == '\0') && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        puStack0000000000000060 =
             *(undefined8 **)
              (
              ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
              + 0x20);
        in_stack_00000068 =
             *(ulong *)(
                       ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
                       + 0x28);
        pcStack0000000000000058 = (char *)0x1;
        puVar13 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar13 + 0x18))(puVar3,&stack0x00000058);
        if (iVar6 != 0) {
          in_stack_000000b8 =
               (char *)(
                       ___ZN173__LT_rama_http_backend__server__layer__upgrade__service__UpgradeService_LT_S_C_O_GT__u20_as_u20_rama_core__service__svc__Service_LT_rama_http_types__request__Request_GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb58e39848623b831E
                       + 0x30);
          in_stack_00000090 = &stack0x00000040;
          in_stack_00000098 =
               &
               __ZN74__LT_rama_error__ext__wrapper__OpaqueError_u20_as_u20_core__fmt__Debug_GT_3fmt17h5c47b127bdf2312bE
          ;
          in_stack_00000088 = &stack0x00000090;
          in_stack_00000080 = s_upgrade_error__108acd48a;
          in_stack_00000070 = &stack0x00000080;
          in_stack_00000078 = &UNK_10b208fd0;
          in_stack_000000a8 = &stack0x00000070;
          in_stack_000000a0 = 1;
          in_stack_000000b0 = 1;
          in_stack_000000f0 = *(undefined8 **)(lVar11 + 0x60);
          in_stack_000000f8 = *(ulong *)(lVar11 + 0x68);
          puStack00000000000000d8 = *(undefined8 **)(lVar11 + 0x50);
          puStack00000000000000e0 = *(undefined **)(lVar11 + 0x58);
          puStack00000000000000d0 = (undefined8 *)0x1;
          if (puStack00000000000000d8 == (undefined8 *)0x0) {
            puStack00000000000000d0 = (undefined8 *)0x2;
          }
          uStack0000000000000118 = *(undefined4 *)(lVar11 + 8);
          uStack000000000000011c = *(undefined4 *)(lVar11 + 0xc);
          *(ulong **)(unaff_x29 + -0x80) = &stack0x000000a0;
          *(undefined1 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
          uStack00000000000000e8 = 1;
          if (in_stack_000000f0 == (undefined8 *)0x0) {
            uStack00000000000000e8 = 2;
          }
          in_stack_00000108 = puStack0000000000000060;
          in_stack_00000100 = pcStack0000000000000058;
          in_stack_00000110 = in_stack_00000068;
          in_stack_00000128 = unaff_x29 + -0x70;
          in_stack_00000120 = s__108b39f4f;
          (**(code **)(puVar13 + 0x20))(puVar3,&stack0x000000d0);
        }
      }
    }
    puVar8 = in_stack_00000048;
    uVar14 = in_stack_00000040;
    if ((code *)*in_stack_00000048 != (code *)0x0) {
      (*(code *)*in_stack_00000048)(in_stack_00000040);
    }
    if (puVar8[1] != 0) {
      _free(uVar14);
    }
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x181) = 1;
    unaff_x19[0x32] = unaff_x19[0x28];
    *puVar1 = unaff_x19[0x27];
    unaff_x19[0x39] = unaff_x19[0x2f];
    unaff_x19[0x36] = unaff_x19[0x2c];
    unaff_x19[0x35] = unaff_x19[0x2b];
    unaff_x19[0x38] = unaff_x19[0x2e];
    unaff_x19[0x37] = unaff_x19[0x2d];
    unaff_x19[0x34] = unaff_x19[0x2a];
    unaff_x19[0x33] = unaff_x19[0x29];
    uVar14 = unaff_x19[0x13];
    lVar11 = uVar14 << 5;
    if (uVar14 == 0) {
      lVar7 = 8;
    }
    else {
      puVar8 = (undefined8 *)unaff_x19[0x12];
      lVar7 = _malloc(lVar11);
      if (lVar7 == 0) {
        func_0x0001087c9084(8,lVar11);
LAB_1014e78e0:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1014e78e4);
        (*pcVar9)();
      }
      uVar15 = 0;
      lVar12 = lVar11;
      puVar16 = (undefined8 *)(lVar7 + 0x10);
      puStack00000000000000d0 = (undefined8 *)uVar14;
      puStack00000000000000d8 = (undefined8 *)lVar7;
      do {
        if (lVar12 == 0) break;
        auVar17 = (**(code **)(puVar8[1] + 0x30))(*puVar8);
        uVar15 = uVar15 + 1;
        *(undefined1 (*) [16])(puVar16 + -2) = auVar17;
        puVar4 = puVar8 + 3;
        uVar10 = puVar8[2];
        puVar8 = puVar8 + 4;
        puVar16[1] = *puVar4;
        *puVar16 = uVar10;
        lVar12 = lVar12 + -0x20;
        puVar16 = puVar16 + 4;
      } while (uVar14 != uVar15);
      unaff_x27 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    }
    uStack00000000000000e8 = lVar7 + uVar14 * 0x20;
    uVar15 = unaff_x19[0x33];
    puStack00000000000000d0 = (undefined8 *)lVar7;
    puStack00000000000000d8 = (undefined8 *)lVar7;
    puStack00000000000000e0 = (undefined *)uVar14;
    if (*puVar1 - uVar15 < uVar14) {
      FUN_108a2e538(puVar1,uVar15,uVar14);
      uVar15 = unaff_x19[0x33];
    }
    _memcpy(unaff_x19[0x32] + uVar15 * 0x20,lVar7,lVar11);
    unaff_x19[0x33] = uVar15 + uVar14;
    uStack00000000000000e8 = lVar7;
    FUN_105a20ad0(&stack0x000000d0);
    *(undefined1 *)((long)unaff_x19 + 0x181) = 0;
    puStack00000000000000d8 = (undefined8 *)unaff_x19[0x32];
    puStack00000000000000d0 = (undefined8 *)*puVar1;
    uStack00000000000000e8 = unaff_x19[0x34];
    puStack00000000000000e0 = (undefined *)unaff_x19[0x33];
    in_stack_000000f8 = unaff_x19[0x36];
    in_stack_000000f0 = (undefined8 *)unaff_x19[0x35];
    in_stack_00000108 = (undefined8 *)unaff_x19[0x38];
    in_stack_00000100 = (char *)unaff_x19[0x37];
    in_stack_00000110 = unaff_x19[0x39];
    auVar17 = (**(code **)(unaff_x19[0x26] + 0x18))
                        (unaff_x19[0x25] +
                         (*(long *)(unaff_x19[0x26] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         &stack0x000000d0);
    *(undefined1 (*) [16])(unaff_x19 + 0x3a) = auVar17;
    uVar14 = (**(code **)(auVar17._8_8_ + 0x18))(auVar17._0_8_,unaff_x28);
    if ((uVar14 & 1) != 0) {
      uVar10 = 1;
      *(undefined1 *)(unaff_x19 + 0x30) = 4;
      uVar14 = *unaff_x19;
      goto joined_r0x0001014e73c8;
    }
    uVar14 = unaff_x19[0x3a];
    puVar8 = (undefined8 *)unaff_x19[0x3b];
    pcVar9 = (code *)*puVar8;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar14);
    }
    if (puVar8[1] != 0) {
      _free(uVar14);
    }
    *(undefined1 *)((long)unaff_x19 + 0x181) = 0;
  }
  FUN_100df6754(unaff_x20);
  uVar14 = unaff_x19[0x23];
  puVar8 = (undefined8 *)unaff_x19[0x24];
  pcVar9 = (code *)*puVar8;
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(uVar14);
  }
  if (puVar8[1] != 0) {
    _free(uVar14);
  }
  lVar11 = *(long *)unaff_x19[0x25];
  *(long *)unaff_x19[0x25] = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x25);
  }
  uVar10 = 0;
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  uVar14 = *unaff_x19;
joined_r0x0001014e73c8:
  if (uVar14 != 2) {
    uVar15 = unaff_x19[1];
    if ((uVar14 & 1) != 0) {
      uVar15 = uVar15 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar15,unaff_x19 + 3);
  }
  if ((*unaff_x27 == '\0') && (uVar14 = unaff_x19[4], uVar14 != 0)) {
    in_stack_000000a0 = *(undefined8 *)(uVar14 + 0x10);
    in_stack_000000a8 = *(undefined8 **)(uVar14 + 0x18);
    puStack00000000000000d0 = &stack0x000000a0;
    puStack00000000000000d8 = (undefined8 *)&DAT_100c7b3a0;
    FUN_1011d7d74();
  }
  return uVar10;
}

