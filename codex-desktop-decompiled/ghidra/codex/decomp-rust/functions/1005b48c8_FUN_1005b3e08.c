
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005b3e08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long **pplVar5;
  code *pcVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 uVar13;
  ulong uVar14;
  long *plVar15;
  long ***ppplVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  char *pcStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  long **pplStack_1a0;
  long ***ppplStack_170;
  char ***pppcStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  char **ppcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  undefined8 **ppuStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long ***ppplStack_c8;
  char ***pppcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  long ***ppplStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long **pplStack_60;
  undefined *puStack_58;
  
  bVar4 = *(byte *)(param_1 + 0x13);
  if (bVar4 < 3) {
    if (bVar4 != 0) {
      if (bVar4 == 1) {
        FUN_107c05cc0(&UNK_10b2187a0);
      }
      uVar11 = FUN_107c05cc4();
      plVar19 = (long *)param_1[0x1d];
      if (plVar19 != (long *)0x0) {
        lVar18 = *plVar19;
        *plVar19 = lVar18 + -1;
        LORelease();
        if (lVar18 == 1) {
          DataMemoryBarrier(2,1);
          func_0x0001034c6b4c();
        }
      }
      if ((param_1[0x14] != -0x8000000000000000) && ((*(byte *)((long)param_1 + 0x9c) & 1) != 0)) {
        FUN_100e2d5f4();
      }
      *(undefined1 *)((long)param_1 + 0x9c) = 0;
      if (((*(byte *)((long)param_1 + 0x99) & 1) != 0) && (param_1[0xc] != -0x8000000000000000)) {
        FUN_100e79780();
      }
      *(undefined2 *)(param_1 + 0x13) = 2;
      __Unwind_Resume(uVar11);
      FUN_107c05ccc();
      uVar11 = FUN_107c05ccc();
      pplStack_1a0 = &plStack_e8;
      uVar12 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                         (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2cec1ba6c84388bcE
                          ,uVar11);
      lVar18 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2cec1ba6c84388bcE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_230 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2cec1ba6c84388bcE
                      + 0x20);
        uStack_228 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2cec1ba6c84388bcE
                      + 0x28);
        uStack_238 = 2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        uVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_238);
        if ((int)uVar12 != 0) {
          lStack_200 = *(long *)(lVar18 + 0x60);
          uStack_1f8 = *(undefined8 *)(lVar18 + 0x68);
          lStack_218 = *(long *)(lVar18 + 0x50);
          uStack_210 = *(undefined8 *)(lVar18 + 0x58);
          uStack_220 = 1;
          if (lStack_218 == 0) {
            uStack_220 = 2;
          }
          uStack_1d8 = *(undefined4 *)(lVar18 + 8);
          uStack_1d4 = *(undefined4 *)(lVar18 + 0xc);
          uStack_1b8 = 1;
          puStack_1b0 = &uStack_1c0;
          puStack_1a8 = &DAT_1061c2098;
          uStack_208 = 1;
          if (lStack_200 == 0) {
            uStack_208 = 2;
          }
          uStack_1e8 = uStack_230;
          uStack_1f0 = uStack_238;
          uStack_1e0 = uStack_228;
          ppuStack_1c8 = &puStack_1b0;
          pcStack_1d0 = s__108b39f4f;
          uStack_1c0 = uVar11;
          uVar12 = (**(code **)(puVar2 + 0x20))(puVar3,&uStack_220);
        }
      }
      return uVar12;
    }
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    *(undefined2 *)((long)param_1 + 0x9a) = 0;
    param_1[0xd] = param_1[1];
    param_1[0xc] = *param_1;
    param_1[0xf] = param_1[3];
    param_1[0xe] = param_1[2];
    param_1[10] = param_1[7];
    param_1[9] = param_1[6];
    param_1[0xb] = param_1[8];
    *(undefined1 *)((long)param_1 + 0x99) = 1;
    param_1[0x11] = param_1[5];
    param_1[0x10] = param_1[4];
    param_1[0x14] = param_1[6] + 0x1108;
    *(undefined1 *)(param_1 + 0x22) = 0;
LAB_1005b3e98:
    auVar20 = FUN_100fd3e50(param_1 + 0x14,param_2);
    uVar11 = auVar20._8_8_;
    if (auVar20._0_8_ == 0) {
      uVar11 = 1;
      uVar13 = 3;
      goto LAB_1005b45e0;
    }
    param_1[0x12] = auVar20._0_8_;
    if (((*(char *)(param_1 + 0x22) == '\x03') && (*(char *)(param_1 + 0x21) == '\x03')) &&
       (*(char *)(param_1 + 0x18) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x19);
      uVar11 = extraout_x1;
      if (param_1[0x1a] != 0) {
        (**(code **)(param_1[0x1a] + 0x18))(param_1[0x1b]);
        uVar11 = extraout_x1_00;
      }
    }
    pcVar17 = (char *)param_1[0x12];
    lVar18 = -0x8000000000000000;
    if (*(long *)(pcVar17 + 0x28) == -0x8000000000000000) {
      plVar19 = (long *)0x0;
    }
    else {
      param_1[0x14] = pcVar17 + 0x28;
      param_1[0x15] = *(long *)(pcVar17 + 0x70) + 0x10;
      *(undefined1 *)(param_1 + 0x23) = 0;
LAB_1005b3f2c:
      pcVar17 = (char *)FUN_100fd3e50(param_1 + 0x15,param_2);
      if (pcVar17 == (char *)0x0) {
        uVar11 = 1;
        uVar13 = 4;
        goto LAB_1005b45e0;
      }
      if (((*(char *)(param_1 + 0x23) == '\x03') && (*(char *)(param_1 + 0x22) == '\x03')) &&
         (*(char *)(param_1 + 0x19) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x1a);
        if (param_1[0x1b] != 0) {
          (**(code **)(param_1[0x1b] + 0x18))(param_1[0x1c]);
        }
      }
      __ZN10codex_core5state4turn9TurnState34remove_pending_request_permissions17hdf985f21f0d8bc91E
                (&lStack_d0,pcVar17 + 0x28,param_1[10],param_1[0xb]);
      lVar18 = lStack_d0;
      if (lStack_d0 == -0x8000000000000000) {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = *(long **)(param_1[0x14] + 0x48);
        lVar7 = *plVar19;
        *plVar19 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_1005b4644;
      }
      pppcStack_168 = pppcStack_c0;
      ppplStack_170 = ppplStack_c8;
      lStack_158 = lStack_b0;
      lStack_160 = lStack_b8;
      plStack_148 = plStack_a0;
      lStack_150 = lStack_a8;
      uStack_138 = uStack_90;
      puStack_140 = puStack_98;
      if (*pcVar17 == '\0') {
        *pcVar17 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar17,extraout_x1_01,1000000000);
      }
      FUN_1060fa678(pcVar17,1,pcVar17);
      pcVar17 = (char *)param_1[0x12];
      uVar11 = extraout_x1_02;
    }
    if (*pcVar17 == '\0') {
      *pcVar17 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar17,uVar11,1000000000);
    }
    FUN_1060fa678(pcVar17,1,pcVar17);
    param_1[0x14] = lVar18;
    param_1[0x16] = pppcStack_168;
    param_1[0x15] = ppplStack_170;
    param_1[0x18] = lStack_158;
    param_1[0x17] = lStack_160;
    param_1[0x1a] = plStack_148;
    param_1[0x19] = lStack_150;
    *(undefined1 *)((long)param_1 + 0x9c) = 1;
    param_1[0x1d] = plVar19;
    param_1[0x1c] = uStack_138;
    param_1[0x1b] = puStack_140;
    if (lVar18 != -0x8000000000000000) {
      *(undefined2 *)((long)param_1 + 0x9b) = 1;
      param_1[0x23] = param_1[0x19];
      param_1[0x22] = param_1[0x18];
      param_1[0x25] = param_1[0x1b];
      param_1[0x24] = param_1[0x1a];
      param_1[0x26] = param_1[0x1c];
      param_1[0x1f] = param_1[0x15];
      param_1[0x1e] = param_1[0x14];
      param_1[0x21] = param_1[0x17];
      param_1[0x20] = param_1[0x16];
      pppcStack_168 = (char ***)param_1[0x18];
      ppplStack_170 = (long ***)param_1[0x17];
      lStack_158 = param_1[0x1a];
      lStack_160 = param_1[0x19];
      lStack_150 = param_1[0x1b];
      *(undefined1 *)((long)param_1 + 0x99) = 0;
      ppplStack_c8 = (long ***)param_1[0xd];
      lStack_d0 = param_1[0xc];
      lStack_b8 = param_1[0xf];
      pppcStack_c0 = (char ***)param_1[0xe];
      lStack_a8 = param_1[0x11];
      lStack_b0 = param_1[0x10];
      __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38normalize_request_permissions_response17h4da086b35e5c8befE
                (param_1 + 0x27,&ppplStack_170,&lStack_d0,param_1[0x1f],param_1[0x20]);
      *(undefined1 *)((long)param_1 + 0x9a) = 1;
      puVar1 = (undefined8 *)0x0;
      if (param_1[0x1d] != 0) {
        puVar1 = param_1 + 0x1d;
      }
      param_1[0x2d] = param_1[9];
      param_1[0x2e] = param_1 + 0x27;
      param_1[0x2f] = puVar1;
      *(undefined1 *)(param_1 + 0x31) = 0;
      goto LAB_1005b426c;
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62adb0 - 1 < 2 ||
         ((bRam000000010b62adb0 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                             ), cVar8 != '\0')))) &&
        (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                            ), (uVar10 & 1) != 0)))) {
      lStack_158 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                   + 0x30;
      puStack_110 = param_1 + 10;
      puStack_108 = &DAT_100c7b3a0;
      ppuStack_118 = &puStack_110;
      pcStack_120 = s_2No_pending_request_permissions_f_108ac1bb0;
      ppcStack_130 = &pcStack_120;
      puStack_128 = &UNK_10b208fd0;
      pppcStack_168 = &ppcStack_130;
      ppplStack_170 = (long ***)0x1;
      lStack_160 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                 ,&ppplStack_170);
      lVar18 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_e0 = *(undefined1 **)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                      + 0x20);
        uStack_d8 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                     + 0x28);
        plStack_e8 = (long *)0x2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar2 + 0x18))(puVar3,&plStack_e8);
        if (iVar9 != 0) {
          lStack_b0 = *(long *)(lVar18 + 0x60);
          lStack_a8 = *(long *)(lVar18 + 0x68);
          ppplStack_c8 = *(long ****)(lVar18 + 0x50);
          pppcStack_c0 = *(char ****)(lVar18 + 0x58);
          lStack_d0 = 1;
          if (ppplStack_c8 == (long ***)0x0) {
            lStack_d0 = 2;
          }
          uStack_88 = *(undefined4 *)(lVar18 + 8);
          uStack_84 = *(undefined4 *)(lVar18 + 0xc);
          uStack_68 = 1;
          pplStack_60 = &plStack_70;
          puStack_58 = &DAT_1061c2098;
          lStack_b8 = 1;
          if (lStack_b0 == 0) {
            lStack_b8 = 2;
          }
          puStack_98 = puStack_e0;
          plStack_a0 = plStack_e8;
          uStack_90 = uStack_d8;
          ppplStack_78 = &pplStack_60;
          pcStack_80 = s__108b39f4f;
          plStack_70 = (long *)&ppplStack_170;
          (**(code **)(puVar2 + 0x20))(puVar3,&lStack_d0);
        }
      }
    }
    else {
      lVar18 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_f8 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                     + 0x20);
        uStack_f0 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                     + 0x28);
        uStack_100 = 2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_100);
        if (iVar9 != 0) {
          lStack_b8 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35notify_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h516fb649d9760204E
                      + 0x30;
          ppplStack_170 = (long ***)(param_1 + 10);
          pppcStack_168 = (char ***)&DAT_100c7b3a0;
          plStack_e8 = (long *)s_2No_pending_request_permissions_f_108ac1bb0;
          pplStack_60 = &plStack_e8;
          puStack_58 = &UNK_10b208fd0;
          ppplStack_c8 = &pplStack_60;
          lStack_d0 = 1;
          pppcStack_c0 = (char ***)0x1;
          puStack_e0 = (undefined1 *)&ppplStack_170;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar18,puVar3,puVar2,&uStack_100,&lStack_d0);
        }
      }
    }
  }
  else {
    if (bVar4 == 3) goto LAB_1005b3e98;
    if (bVar4 == 4) goto LAB_1005b3f2c;
LAB_1005b426c:
    uVar10 = FUN_1005b4c7c(param_1 + 0x2d,param_2);
    if ((uVar10 & 1) != 0) {
      uVar11 = 1;
      uVar13 = 5;
      goto LAB_1005b45e0;
    }
    FUN_100d77c68(param_1 + 0x2d);
    *(undefined2 *)((long)param_1 + 0x9a) = 0;
    plVar19 = (long *)param_1[0x26];
    ppplStack_c8 = (long ***)param_1[0x28];
    lStack_d0 = param_1[0x27];
    lStack_b8 = param_1[0x2a];
    pppcStack_c0 = (char ***)param_1[0x29];
    lStack_a8 = param_1[0x2c];
    lStack_b0 = param_1[0x2b];
    pplStack_60 = (long **)0x0;
    if (plVar19 == (long *)0x0) {
      FUN_107c05cb0(&UNK_10b23a928);
LAB_1005b4644:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005b4648);
      (*pcVar6)();
    }
    plVar15 = plVar19 + 2;
    plStack_e8 = plVar19;
    if (-0x7fffffffffffffff < *plVar15) {
      FUN_100e79780(plVar15);
    }
    plVar19[3] = (long)ppplStack_c8;
    *plVar15 = lStack_d0;
    plVar19[5] = lStack_b8;
    plVar19[4] = (long)pppcStack_c0;
    plVar19[7] = lStack_a8;
    plVar19[6] = lStack_b0;
    uVar10 = plVar19[0xc];
    do {
      uVar14 = uVar10;
      if (((uint)uVar14 >> 2 & 1) != 0) goto LAB_1005b4314;
      uVar10 = plVar19[0xc];
    } while (uVar10 != uVar14);
    plVar19[0xc] = uVar14 | 2;
LAB_1005b4314:
    if ((uVar14 & 5) == 1) {
      (**(code **)(plVar19[10] + 0x10))(plVar19[0xb]);
    }
    if (((uint)uVar14 >> 2 & 1) == 0) {
      ppplStack_170 = (long ***)0x8000000000000001;
      lVar18 = *plStack_e8;
      *plStack_e8 = lVar18 + -1;
      LORelease();
      if (lVar18 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h14a9bf9e47e49a20E(&plStack_e8);
      }
      pplVar5 = pplStack_60;
      if (pplStack_60 != (long **)0x0) {
        plVar19 = pplStack_60[0xc];
        do {
          plVar15 = plVar19;
          if (((uint)plVar15 >> 2 & 1) != 0) goto LAB_1005b4388;
          plVar19 = pplStack_60[0xc];
        } while (plVar19 != plVar15);
        pplStack_60[0xc] = (long *)((ulong)plVar15 | 2);
LAB_1005b4388:
        if (((ulong)plVar15 & 5) == 1) {
          (*(code *)pplStack_60[10][2])(pplStack_60[0xb]);
        }
        plVar19 = *pplVar5;
        *pplVar5 = (long *)((long)plVar19 + -1);
        LORelease();
        if (plVar19 == (long *)0x1) {
          ppplVar16 = (long ***)0x8000000000000001;
LAB_1005b4464:
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h14a9bf9e47e49a20E(&pplStack_60);
          goto LAB_1005b4470;
        }
      }
    }
    else {
      ppplVar16 = (long ***)plStack_e8[2];
      plStack_e8[2] = -0x7fffffffffffffff;
      if (ppplVar16 == (long ***)0x8000000000000001) {
        FUN_107c05cb0(&UNK_10b23a940);
        goto LAB_1005b4644;
      }
      lStack_160 = plStack_e8[4];
      pppcStack_168 = (char ***)plStack_e8[3];
      lStack_150 = plStack_e8[6];
      lStack_158 = plStack_e8[5];
      plStack_148 = (long *)plStack_e8[7];
      lVar18 = *plStack_e8;
      *plStack_e8 = lVar18 + -1;
      LORelease();
      ppplStack_170 = ppplVar16;
      if (lVar18 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h14a9bf9e47e49a20E(&plStack_e8);
      }
      pplVar5 = pplStack_60;
      if (pplStack_60 != (long **)0x0) {
        plVar19 = pplStack_60[0xc];
        do {
          plVar15 = plVar19;
          if (((uint)plVar15 >> 2 & 1) != 0) goto LAB_1005b4438;
          plVar19 = pplStack_60[0xc];
        } while (plVar19 != plVar15);
        pplStack_60[0xc] = (long *)((ulong)plVar15 | 2);
LAB_1005b4438:
        if (((ulong)plVar15 & 5) == 1) {
          (*(code *)pplStack_60[10][2])(pplStack_60[0xb]);
        }
        plVar19 = *pplVar5;
        *pplVar5 = (long *)((long)plVar19 + -1);
        LORelease();
        if (plVar19 == (long *)0x1) goto LAB_1005b4464;
      }
LAB_1005b4470:
      if (-0x7fffffffffffffff < (long)ppplVar16) {
        FUN_100e79780(&ppplStack_170);
      }
    }
    *(undefined1 *)((long)param_1 + 0x9a) = 0;
    if (param_1[0x1e] != 0) {
      _free(param_1[0x1f]);
    }
    *(undefined1 *)((long)param_1 + 0x9b) = 0;
  }
  plVar19 = (long *)param_1[0x1d];
  if (plVar19 != (long *)0x0) {
    lVar18 = *plVar19;
    *plVar19 = lVar18 + -1;
    LORelease();
    if (lVar18 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6b4c();
    }
  }
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  if (((*(byte *)((long)param_1 + 0x99) & 1) != 0) && (param_1[0xc] != -0x8000000000000000)) {
    FUN_100e79780();
  }
  uVar11 = 0;
  *(undefined1 *)((long)param_1 + 0x99) = 0;
  uVar13 = 1;
LAB_1005b45e0:
  *(undefined1 *)(param_1 + 0x13) = uVar13;
  return uVar11;
}

