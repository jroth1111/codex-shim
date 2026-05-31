
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005615c4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long unaff_x20;
  undefined **ppuVar11;
  long unaff_x21;
  ulong uVar12;
  undefined8 unaff_x23;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 *puStack_48f8;
  long *plStack_48f0;
  undefined8 *puStack_48e8;
  undefined8 uStack_48e0;
  undefined8 uStack_48d8;
  undefined8 uStack_48d0;
  undefined8 uStack_48c8;
  undefined8 uStack_48c0;
  undefined8 uStack_48b8;
  undefined8 uStack_48b0;
  undefined8 uStack_48a8;
  undefined8 uStack_48a0;
  undefined8 uStack_4898;
  undefined8 uStack_4890;
  undefined8 uStack_4888;
  undefined8 uStack_4880;
  undefined8 uStack_4878;
  undefined8 uStack_4870;
  undefined8 uStack_4868;
  undefined8 uStack_4860;
  undefined8 uStack_4858;
  undefined8 uStack_4850;
  undefined8 uStack_4848;
  undefined8 uStack_4840;
  undefined8 uStack_4838;
  undefined8 uStack_4830;
  undefined **ppuStack_4828;
  undefined8 uStack_4820;
  undefined1 auStack_4818 [1976];
  undefined8 uStack_4060;
  undefined1 auStack_3ec8 [2384];
  undefined1 auStack_3578 [80];
  undefined **ppuStack_3528;
  undefined8 uStack_3520;
  undefined1 auStack_3518 [1208];
  undefined8 uStack_3060;
  undefined8 uStack_2060;
  undefined1 auStack_1af8 [2712];
  undefined8 uStack_1060;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  char ***pppcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  char **ppcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  undefined8 **ppuStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_1060 = 0;
  uStack_2060 = 0;
  uStack_3060 = 0;
  uStack_4060 = 0;
  puVar15 = param_2 + 0x200;
  bVar4 = *(byte *)(param_2 + 0x235);
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      uVar9 = FUN_107c05cc0(&UNK_10b217748);
      if ((*(byte *)((long)puStack_48e8 + 0x1a9) & 1) != 0) {
        FUN_100e01cdc(&uStack_48e0);
      }
      *(undefined1 *)((long)puStack_48e8 + 0x1a9) = 0;
      FUN_100e76384(param_2 + 0x1f);
      *(undefined1 *)(puStack_48e8 + 0x35) = 2;
      __Unwind_Resume(uVar9);
      auVar18 = FUN_107c05ccc();
      puVar13 = auVar18._8_8_;
      puVar15 = auVar18._0_8_;
      lVar2 = *param_3;
      lVar3 = param_3[1];
      uVar12 = param_3[2];
      lVar14 = puVar13[5];
      if ((ulong)(puVar13[3] - lVar14) < uVar12) {
        thunk_FUN_108855060(puVar13 + 3,lVar14,uVar12,8,200);
        lVar14 = puVar13[5];
      }
      _memcpy(puVar13[4] + lVar14 * 200,lVar3,uVar12 * 200);
      puVar13[5] = lVar14 + uVar12;
      if (lVar2 != 0) {
        _free(lVar3);
      }
      uVar9 = puVar13[4];
      uVar17 = puVar13[7];
      uVar16 = puVar13[6];
      puVar15[5] = puVar13[5];
      puVar15[4] = uVar9;
      puVar15[7] = uVar17;
      puVar15[6] = uVar16;
      puVar15[8] = puVar13[8];
      uVar17 = *puVar13;
      uVar16 = puVar13[3];
      uVar9 = puVar13[2];
      puVar15[1] = puVar13[1];
      *puVar15 = uVar17;
      puVar15[3] = uVar16;
      puVar15[2] = uVar9;
      return;
    }
    lVar2 = param_2[0x1c];
    uStack_4830 = param_2[0x19];
    param_2[0x1d] = param_2[0x1a];
    param_2[0x1e] = param_2[0x1b];
    param_2[0x20] = param_2[1];
    param_2[0x1f] = *param_2;
    param_2[0x21] = param_2[2];
    *(undefined1 *)((long)param_2 + 0x11a9) = 1;
    uStack_4858 = param_2[0x14];
    uStack_4860 = param_2[0x13];
    uStack_4848 = param_2[0x16];
    uStack_4850 = param_2[0x15];
    uStack_4838 = param_2[0x18];
    uStack_4840 = param_2[0x17];
    uStack_4898 = param_2[0xc];
    uStack_48a0 = param_2[0xb];
    uStack_4888 = param_2[0xe];
    uStack_4890 = param_2[0xd];
    uStack_4878 = param_2[0x10];
    uStack_4880 = param_2[0xf];
    uStack_4868 = param_2[0x12];
    uStack_4870 = param_2[0x11];
    uStack_48d8 = param_2[4];
    uStack_48e0 = param_2[3];
    uStack_48c8 = param_2[6];
    uStack_48d0 = param_2[5];
    uStack_48b8 = param_2[8];
    uStack_48c0 = param_2[7];
    uStack_48a8 = param_2[10];
    uStack_48b0 = param_2[9];
    puVar8 = &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
    if (lRam000000010b62c4d8 == 0) {
      puVar13 = *(undefined8 **)(lRam000000010b62c4d0 + 0x10);
      unaff_x27 = param_2[0x1d];
      unaff_x28 = param_2[0x1e];
      unaff_x20 = ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
      unaff_x26 = lRam000000010b62c4d0;
    }
    else {
      puStack_d0 = &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
      ppuStack_3528 = &puStack_d0;
      __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                (0x10b62c4d8,1,&ppuStack_3528,&UNK_10b234158,&UNK_10b2340c8);
      puVar13 = *(undefined8 **)(lRam000000010b62c4d0 + 0x10);
      unaff_x27 = param_2[0x1d];
      unaff_x28 = param_2[0x1e];
      unaff_x20 = ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
      unaff_x26 = lRam000000010b62c4d0;
    }
    ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE = unaff_x20;
    lRam000000010b62c4d0 = unaff_x26;
    puStack_48f8 = param_1;
    plStack_48f0 = param_3;
    puStack_48e8 = puVar15;
    if (lVar2 == 0) {
      unaff_x21 = -0x8000000000000000;
    }
    else {
      unaff_x23 = *(undefined8 *)(lVar2 + 8);
      unaff_x21 = *(long *)(lVar2 + 0x10);
      if (unaff_x21 == 0) goto LAB_1005616f4;
      puVar8 = (undefined *)_malloc(unaff_x21);
      if (puVar8 == (undefined *)0x0) {
        FUN_107c03c64(1,unaff_x21);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1005616e0);
        (*pcVar5)();
      }
LAB_1005616f8:
      _memcpy(puVar8,unaff_x23,unaff_x21);
    }
    uVar9 = param_2[0x20];
    uVar16 = param_2[0x21];
    *(undefined1 *)((long)puStack_48e8 + 0x1a9) = 0;
    auVar18 = __ZN100__LT_codex_config__cloud_requirements__CloudRequirementsLoader_u20_as_u20_core__default__Default_GT_7default17h140615628771f262E
                        ();
    param_2[0x22] = unaff_x21;
    param_2[0x23] = puVar8;
    param_2[0x24] = unaff_x21;
    param_2[0x36] = uStack_4858;
    param_2[0x35] = uStack_4860;
    param_2[0x38] = uStack_4848;
    param_2[0x37] = uStack_4850;
    param_2[0x3a] = uStack_4838;
    param_2[0x39] = uStack_4840;
    param_2[0x2e] = uStack_4898;
    param_2[0x2d] = uStack_48a0;
    param_2[0x30] = uStack_4888;
    param_2[0x2f] = uStack_4890;
    param_2[0x32] = uStack_4878;
    param_2[0x31] = uStack_4880;
    param_2[0x34] = uStack_4868;
    param_2[0x33] = uStack_4870;
    param_2[0x26] = uStack_48d8;
    param_2[0x25] = uStack_48e0;
    param_2[0x28] = uStack_48c8;
    param_2[0x27] = uStack_48d0;
    param_2[0x2a] = uStack_48b8;
    param_2[0x29] = uStack_48c0;
    param_2[0x2c] = uStack_48a8;
    param_2[0x2b] = uStack_48b0;
    param_2[0x3b] = uStack_4830;
    param_2[0x3c] = unaff_x20 + ((long)puVar13 - 1U & 0xfffffffffffffff0) + 0x10;
    param_2[0x3d] = unaff_x26;
    param_2[0x3e] = unaff_x27;
    param_2[0x3f] = unaff_x28;
    param_2[0x40] = uVar9;
    param_2[0x41] = uVar16;
    param_2[0x42] = 1;
    param_2[0x43] = &UNK_10b2175d0;
    *(undefined1 (*) [16])(param_2 + 0x44) = auVar18;
    *(undefined1 *)(param_2 + 0x1aa) = 0;
    param_3 = plStack_48f0;
    param_1 = puStack_48f8;
    puVar15 = puStack_48e8;
  }
  else if (bVar4 != 3) {
    FUN_107c05cc4(&UNK_10b217748);
    puVar13 = param_1;
LAB_1005616f4:
    puVar8 = (undefined *)0x1;
    goto LAB_1005616f8;
  }
  FUN_10073ec38(&ppuStack_3528,param_2 + 0x22,param_3);
  uVar9 = uStack_3520;
  ppuVar11 = ppuStack_3528;
  if (ppuStack_3528 == (undefined **)0x3) {
    uVar10 = 3;
    *param_1 = 3;
    goto LAB_100561a3c;
  }
  _memcpy(auStack_3ec8,auStack_3518,0x950);
  FUN_100d2cf64(param_2 + 0x22);
  if (ppuVar11 == (undefined **)0x2) {
LAB_100561a10:
    *(undefined1 *)((long)puVar15 + 0x1a9) = 0;
    FUN_100e76384(param_2 + 0x1f);
    ppuVar11 = (undefined **)0x2;
    uStack_3520 = uVar9;
  }
  else {
    _memcpy(auStack_4818,auStack_3ec8,0x950);
    ppuStack_4828 = ppuVar11;
    uStack_4820 = uVar9;
    __ZN12codex_config5state16ConfigLayerStack16effective_config17hb81929d75e8817f7E
              (auStack_3578,&ppuStack_4828);
    __ZN10codex_core6config33deserialize_config_toml_with_base17h01d70c8e085e3b2eE
              (&ppuStack_3528,auStack_3578,param_2[0x1d],param_2[0x1e]);
    ppuVar11 = ppuStack_3528;
    if (ppuStack_3528 == (undefined **)0x2) {
      uStack_d8 = uStack_3520;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
         (((bRam000000010b62a8b8 - 1 < 2 ||
           ((bRam000000010b62a8b8 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                               ), cVar6 != '\0')))) &&
          (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                             ), iVar7 != 0)))) {
        lStack_b8 = ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                    + 0x30;
        puStack_90 = &uStack_d8;
        pcStack_88 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        ppuStack_98 = &puStack_90;
        pcStack_a0 = s__Failed_to_deserialize_overridde_108ac11d8;
        ppcStack_b0 = &pcStack_a0;
        puStack_a8 = &UNK_10b208fd0;
        pppcStack_c8 = &ppcStack_b0;
        puStack_d0 = (undefined *)0x1;
        uStack_c0 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                   ,&puStack_d0);
        lVar2 = 
        ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          uStack_78 = *(undefined8 *)
                       (
                       ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                       + 0x20);
          uStack_70 = *(undefined8 *)
                       (
                       ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                       + 0x28);
          uStack_80 = 1;
          puVar8 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar8 = &UNK_10b3c24c8;
          }
          puVar1 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar8 + 0x18))(puVar1,&uStack_80);
          if (iVar7 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar2,puVar1,puVar8,&uStack_80,&puStack_d0);
          }
        }
      }
      else {
        lVar2 = 
        ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          uStack_78 = *(undefined8 *)
                       (
                       ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                       + 0x20);
          uStack_70 = *(undefined8 *)
                       (
                       ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                       + 0x28);
          uStack_80 = 1;
          puVar8 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar8 = &UNK_10b3c24c8;
          }
          puVar1 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar8 + 0x18))(puVar1,&uStack_80);
          if (iVar7 != 0) {
            lStack_b8 = ___ZN10codex_core6config45load_config_as_toml_with_cli_and_load_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h13bdc4e936776496E
                        + 0x30;
            puStack_90 = &uStack_d8;
            pcStack_88 = 
            __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            ppuStack_98 = &puStack_90;
            pcStack_a0 = s__Failed_to_deserialize_overridde_108ac11d8;
            ppcStack_b0 = &pcStack_a0;
            puStack_a8 = &UNK_10b208fd0;
            pppcStack_c8 = &ppcStack_b0;
            puStack_d0 = (undefined *)0x1;
            uStack_c0 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar2,puVar1,puVar8,&uStack_80,&puStack_d0);
          }
        }
      }
      uVar9 = uStack_d8;
      FUN_100e05b5c(&ppuStack_4828);
      goto LAB_100561a10;
    }
    _memcpy(auStack_1af8,auStack_3518,0x1a20);
    FUN_100e05b5c(&ppuStack_4828);
    *(undefined1 *)((long)puVar15 + 0x1a9) = 0;
    FUN_100e76384(param_2 + 0x1f);
  }
  *param_1 = ppuVar11;
  param_1[1] = uStack_3520;
  _memcpy(param_1 + 2,auStack_1af8,0x1a20);
  uVar10 = 1;
LAB_100561a3c:
  *(undefined1 *)(puVar15 + 0x35) = uVar10;
  return;
}

