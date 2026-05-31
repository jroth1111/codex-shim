
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c8ebc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1c8;
  char ***pppcStack_1c0;
  char ***pppcStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  char **ppcStack_1a0;
  undefined *puStack_198;
  char *pcStack_190;
  ulong **ppuStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  char ***pppcStack_170;
  char ***pppcStack_168;
  undefined8 uStack_160;
  char ***pppcStack_158;
  char ***pppcStack_150;
  undefined8 uStack_148;
  ulong *puStack_140;
  char ****ppppcStack_138;
  ulong *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  char ***pppcStack_108;
  char ***pppcStack_100;
  undefined8 uStack_f8;
  char ***pppcStack_f0;
  undefined *puStack_e8;
  ulong *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char ***pppcStack_c0;
  char ***pppcStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  char ****ppppcStack_98;
  char ****ppppcStack_90;
  undefined *puStack_88;
  char ****ppppcStack_80;
  char ***pppcStack_78;
  
  bVar3 = *(byte *)(param_2 + 0xc);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        FUN_107c05cc0(&UNK_10b21de50);
      }
      FUN_107c05cc4();
LAB_1006c9820:
      FUN_107c05cc0(&UNK_10b23a3a0);
LAB_1006c982c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1006c9830);
      (*pcVar11)();
    }
    uStack_1d8 = param_2[5];
    uStack_1e0 = param_2[4];
    *(undefined1 *)((long)param_2 + 0x61) = 1;
    param_2[7] = param_2[1];
    param_2[6] = *param_2;
    param_2[8] = param_2[2];
    if (10000 < (ulong)param_2[2]) {
      __ZN11codex_hooks12output_spill16hook_output_path17hb99959217b8c3092E
                (param_2 + 9,param_2[3],&uStack_1e0);
      func_0x0001055614c0(param_2 + 0xd,param_2 + 9);
      if (param_2[0xd] != -0x8000000000000000) {
        param_2[0x11] = param_2[0xe];
        param_2[0x10] = param_2[0xd];
        param_2[0x12] = param_2[0xf];
        param_2[0x13] = param_2[0x11];
        param_2[0x14] = param_2[0xf];
        *(undefined1 *)(param_2 + 0x1c) = 0;
        goto LAB_1006c8f00;
      }
LAB_1006c9238:
      uVar12 = param_2[10];
      uVar16 = param_2[0xb];
      param_2[0x1f] = uVar12;
      param_2[0x20] = uVar16;
      param_2[0x21] = param_2 + 6;
      *(undefined2 *)(param_2 + 0x22) = 0;
      param_2[0x1d] = uVar12;
      param_2[0x1e] = uVar16;
      uVar14 = param_2[7];
      lVar10 = param_2[8];
      if (lVar10 == 0) goto LAB_1006c9260;
LAB_1006c8f98:
      lVar15 = _malloc(lVar10);
      if (lVar15 == 0) {
        FUN_107c03c64(1,lVar10);
        goto LAB_1006c982c;
      }
LAB_1006c9264:
      _memcpy(lVar15,uVar14,lVar10);
      param_2[0xd] = 0;
      param_2[0xe] = lVar10;
      param_2[0xf] = lVar15;
      param_2[0x10] = lVar10;
      param_2[0x11] = uVar12;
      param_2[0x12] = uVar16;
      *(undefined1 *)((long)param_2 + 0xe1) = 0;
      goto LAB_1006c9288;
    }
    *(undefined1 *)((long)param_2 + 0x61) = 0;
    uStack_118 = param_2[1];
    uStack_120 = *param_2;
    uStack_110 = param_2[2];
LAB_1006c977c:
    if ((*(byte *)((long)param_2 + 0x61) & 1) != 0) goto LAB_1006c9784;
  }
  else {
    if (bVar3 == 3) {
LAB_1006c8f00:
      auVar17 = FUN_100fbf014(param_2 + 0x13,param_3);
      uVar6 = auVar17._8_8_;
      if ((auVar17._0_8_ & 1) != 0) {
        *param_1 = 0x8000000000000000;
        uVar9 = 3;
        goto LAB_1006c97ac;
      }
      if (*(char *)(param_2 + 0x1c) == '\x03') {
        if (*(char *)(param_2 + 0x1b) == '\x03') {
          plVar7 = (long *)param_2[0x1a];
          if (*plVar7 == 0xcc) {
            *plVar7 = 0x84;
          }
          else {
            (**(code **)(plVar7[2] + 0x20))();
          }
        }
        else if ((*(char *)(param_2 + 0x1b) == '\0') && (param_2[0x17] != 0)) {
          _free(param_2[0x18]);
        }
      }
      if (uVar6 == 0) {
        if (param_2[0x10] != 0) {
          _free(param_2[0x11]);
        }
        goto LAB_1006c9238;
      }
      uStack_1c8 = uVar6;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62cc58 - 1 < 2 ||
           ((bRam000000010b62cc58 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                               ), cVar4 != '\0')))) &&
          (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                             ), (uVar6 & 1) != 0)))) {
        lStack_1a8 = ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                     + 0x30;
        uStack_180 = param_2[0x11];
        uStack_178 = param_2[0x12];
        puStack_140 = &uStack_180;
        ppppcStack_138 =
             (char ****)
             &
             __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        puStack_130 = &uStack_1c8;
        pcStack_128 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        ppuStack_188 = &puStack_140;
        pcStack_190 = s__failed_to_create_hook_output_di_108ac2fb8;
        ppcStack_1a0 = &pcStack_190;
        puStack_198 = &UNK_10b208fd0;
        pppcStack_1b8 = &ppcStack_1a0;
        pppcStack_1c0 = (char ***)0x1;
        uStack_1b0 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                   ,&pppcStack_1c0);
        lVar10 = 
        ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_100 =
               *(char ****)
                (
                ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                + 0x20);
          uStack_f8 = *(undefined8 *)
                       (
                       ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                       + 0x28);
          pppcStack_108 = (char ***)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pppcStack_108);
          if (iVar5 != 0) {
            lStack_d0 = *(long *)(lVar10 + 0x60);
            uStack_c8 = *(undefined8 *)(lVar10 + 0x68);
            puStack_e8 = *(undefined **)(lVar10 + 0x50);
            puStack_e0 = *(ulong **)(lVar10 + 0x58);
            pppcStack_f0 = (char ***)0x1;
            if (puStack_e8 == (undefined *)0x0) {
              pppcStack_f0 = (char ***)0x2;
            }
            uStack_a8 = *(undefined4 *)(lVar10 + 8);
            uStack_a4 = *(undefined4 *)(lVar10 + 0xc);
            ppppcStack_90 = &pppcStack_1c0;
            puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
            ppppcStack_80 = (char ****)&ppppcStack_90;
            pppcStack_78 = (char ***)&DAT_1061c2098;
            pcStack_d8 = (code *)0x1;
            if (lStack_d0 == 0) {
              pcStack_d8 = (code *)0x2;
            }
            pppcStack_b8 = pppcStack_100;
            pppcStack_c0 = pppcStack_108;
            uStack_b0 = uStack_f8;
            ppppcStack_98 = (char ****)&ppppcStack_80;
            pcStack_a0 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&pppcStack_f0);
          }
        }
      }
      else {
        lVar10 = 
        ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_168 =
               *(char ****)
                (
                ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                + 0x20);
          uStack_160 = *(undefined8 *)
                        (
                        ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                        + 0x28);
          pppcStack_170 = (char ***)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pppcStack_170);
          if (iVar5 != 0) {
            pcStack_128 = (code *)(
                                  ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h465a9ae479d07b0eE
                                  + 0x30);
            pppcStack_108 = (char ***)param_2[0x11];
            pppcStack_100 = (char ***)param_2[0x12];
            pppcStack_f0 = (char ***)&pppcStack_108;
            puStack_e8 = &
                         __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            puStack_e0 = &uStack_1c8;
            pcStack_d8 = 
            __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            pppcStack_78 = (char ***)&pppcStack_f0;
            ppppcStack_80 = (char ****)s__failed_to_create_hook_output_di_108ac2fb8;
            ppppcStack_90 = (char ****)&ppppcStack_80;
            puStack_88 = &UNK_10b208fd0;
            ppppcStack_138 = (char ****)&ppppcStack_90;
            puStack_140 = (ulong *)0x1;
            puStack_130 = (ulong *)0x1;
            pppcStack_1b8 = pppcStack_168;
            pppcStack_1c0 = pppcStack_170;
            uStack_1b0 = uStack_160;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar10,puVar2,puVar1,&pppcStack_1c0,&puStack_140);
          }
        }
      }
      __ZN29codex_utils_output_truncation23formatted_truncate_text17he19146bdd1b92767E
                (&uStack_120,param_2[7],param_2[8],1,0x9c4);
      if ((uStack_1c8 & 3) == 1) {
        puVar8 = (undefined8 *)(uStack_1c8 - 1);
        uVar12 = *puVar8;
        puVar13 = *(undefined8 **)(uStack_1c8 + 7);
        pcVar11 = (code *)*puVar13;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar12);
        }
        if (puVar13[1] != 0) {
          _free(uVar12);
        }
        _free(puVar8);
        lVar10 = param_2[0x10];
      }
      else {
        lVar10 = param_2[0x10];
      }
      if (lVar10 != 0) {
        puVar8 = (undefined8 *)param_2[0x11];
LAB_1006c9768:
        _free(puVar8);
      }
LAB_1006c976c:
      if (param_2[9] != 0) {
        _free(param_2[10]);
      }
      goto LAB_1006c977c;
    }
    bVar3 = *(byte *)((long)param_2 + 0x111);
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        uVar12 = param_2[0x1f];
        uVar16 = param_2[0x20];
        param_2[0x1d] = uVar12;
        param_2[0x1e] = uVar16;
        *(undefined1 *)(param_2 + 0x22) = 0;
        uVar14 = *(undefined8 *)(param_2[0x21] + 8);
        lVar10 = *(long *)(param_2[0x21] + 0x10);
        if (lVar10 != 0) goto LAB_1006c8f98;
LAB_1006c9260:
        lVar15 = 1;
        goto LAB_1006c9264;
      }
      goto LAB_1006c9820;
    }
    if (bVar3 != 3) {
      FUN_107c05cc4(&UNK_10b23a3a0);
      goto LAB_1006c982c;
    }
LAB_1006c9288:
    auVar17 = FUN_100fc1398(param_2 + 0xd,param_3);
    uVar6 = auVar17._8_8_;
    if ((auVar17._0_8_ & 1) != 0) {
      *(undefined1 *)((long)param_2 + 0x111) = 3;
      *param_1 = 0x8000000000000000;
      uVar9 = 4;
      goto LAB_1006c97ac;
    }
    if (*(char *)((long)param_2 + 0xe1) == '\x03') {
      if (*(char *)(param_2 + 0x1b) == '\x03') {
        plVar7 = (long *)param_2[0x1a];
        if (*plVar7 == 0xcc) {
          *plVar7 = 0x84;
        }
        else {
          (**(code **)(plVar7[2] + 0x20))();
        }
      }
      else if (*(char *)(param_2 + 0x1b) == '\0') {
        if (param_2[0x13] != 0) {
          _free(param_2[0x14]);
        }
        if (param_2[0x16] == 0) {
          if (param_2[0x17] != 0) {
            _free(param_2[0x18]);
          }
        }
        else {
          (**(code **)(param_2[0x16] + 0x20))(param_2 + 0x19,param_2[0x17],param_2[0x18]);
        }
      }
      *(undefined1 *)(param_2 + 0x1c) = 0;
    }
    else if (*(char *)((long)param_2 + 0xe1) == '\0') {
      lVar10 = param_2[0xd];
      if (lVar10 == 0) {
        if (param_2[0xe] != 0) {
          _free(param_2[0xf]);
        }
      }
      else {
        (**(code **)(lVar10 + 0x20))(param_2 + 0x10,param_2[0xe],param_2[0xf]);
      }
    }
    *(undefined2 *)(param_2 + 0x22) = 0x100;
    if (uVar6 != 0) {
      uStack_180 = uVar6;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62cc40 - 1 < 2 ||
           ((bRam000000010b62cc40 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
                               ), cVar4 != '\0')))))) &&
         (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
                            ), (uVar6 & 1) != 0)) {
        pcStack_128 = (code *)(
                              ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
                              + 0x30);
        pppcStack_1c0 = (char ***)param_2[10];
        pppcStack_1b8 = (char ***)param_2[0xb];
        pppcStack_f0 = (char ***)&pppcStack_1c0;
        puStack_e8 = &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        puStack_e0 = &uStack_180;
        pcStack_d8 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        pppcStack_100 = (char ***)&pppcStack_f0;
        pppcStack_108 = (char ***)s_failed_to_write_hook_output___108ac2fe6;
        ppppcStack_80 = &pppcStack_108;
        pppcStack_78 = (char ***)&UNK_10b208fd0;
        ppppcStack_138 = (char ****)&ppppcStack_80;
        puStack_140 = (ulong *)0x1;
        puStack_130 = (ulong *)0x1;
        FUN_1006c9968(&puStack_140);
      }
      else {
        lVar10 = 
        ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_150 =
               *(char ****)
                (
                ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
                + 0x20);
          uStack_148 = *(undefined8 *)
                        (
                        ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
                        + 0x28);
          pppcStack_158 = (char ***)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&pppcStack_158);
          if (iVar5 != 0) {
            pcStack_128 = (code *)(
                                  ___ZN11codex_hooks12output_spill17HookOutputSpiller16maybe_spill_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h05ee9e08b8359c12E
                                  + 0x30);
            pppcStack_108 = (char ***)param_2[10];
            pppcStack_100 = (char ***)param_2[0xb];
            pppcStack_f0 = (char ***)&pppcStack_108;
            puStack_e8 = &
                         __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            puStack_e0 = &uStack_180;
            pcStack_d8 = 
            __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            pppcStack_78 = (char ***)&pppcStack_f0;
            ppppcStack_80 = (char ****)s_failed_to_write_hook_output___108ac2fe6;
            ppppcStack_90 = (char ****)&ppppcStack_80;
            puStack_88 = &UNK_10b208fd0;
            ppppcStack_138 = (char ****)&ppppcStack_90;
            puStack_140 = (ulong *)0x1;
            puStack_130 = (ulong *)0x1;
            pppcStack_1b8 = pppcStack_150;
            pppcStack_1c0 = pppcStack_158;
            uStack_1b0 = uStack_148;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar10,puVar2,puVar1,&pppcStack_1c0,&puStack_140);
          }
        }
      }
      __ZN29codex_utils_output_truncation23formatted_truncate_text17he19146bdd1b92767E
                (&uStack_120,param_2[7],param_2[8],1,0x9c4);
      if ((uStack_180 & 3) == 1) {
        puVar8 = (undefined8 *)(uStack_180 - 1);
        uVar12 = *puVar8;
        puVar13 = *(undefined8 **)(uStack_180 + 7);
        pcVar11 = (code *)*puVar13;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar12);
        }
        if (puVar13[1] != 0) {
          _free(uVar12);
        }
        goto LAB_1006c9768;
      }
      goto LAB_1006c976c;
    }
    __ZN11codex_hooks12output_spill27spilled_hook_output_preview17h06282bfb46d3b92cE
              (&uStack_120,param_2[7],param_2[8],param_2 + 9);
    if (param_2[9] != 0) {
      _free(param_2[10]);
    }
LAB_1006c9784:
    if (param_2[6] != 0) {
      _free(param_2[7]);
    }
  }
  *(undefined1 *)((long)param_2 + 0x61) = 0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[2] = uStack_110;
  uVar9 = 1;
LAB_1006c97ac:
  *(undefined1 *)(param_2 + 0xc) = uVar9;
  return;
}

