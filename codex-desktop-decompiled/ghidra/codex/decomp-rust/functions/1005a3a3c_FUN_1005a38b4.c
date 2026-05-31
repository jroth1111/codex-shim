
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1005a38b4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 extraout_x1_01;
  undefined1 uVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_1b0;
  undefined ***pppuStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined ***pppuStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 ***pppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  char *pcStack_f0;
  undefined1 ***pppuStack_e8;
  undefined1 *puStack_e0;
  undefined1 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  char cStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar3 = *(byte *)(param_1 + 0xfa);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b2180c0,param_2,param_2);
LAB_1005a39d8:
      FUN_107c05cc4(&UNK_10b2180c0);
      *(undefined1 *)(param_1 + 0xfa) = 2;
      uVar10 = __Unwind_Resume();
      FUN_100c97ff8(param_1 + 1);
      *(undefined1 *)(param_1 + 0xfa) = 2;
      auVar17 = __Unwind_Resume(uVar10);
      uVar10 = auVar17._8_8_;
      puVar8 = auVar17._0_8_;
      bVar3 = *(byte *)((long)puVar8 + 0x11);
      if (bVar3 < 3) {
        if (bVar3 != 0) {
          if (bVar3 == 1) {
            FUN_107c05cc0(&UNK_10b2180d8);
          }
          FUN_107c05cc4();
LAB_1005a3f58:
          FUN_107c05cc0(&UNK_10b217c40);
LAB_1005a3f74:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a3f78);
          (*pcVar4)();
        }
        *puVar8 = puVar8[1];
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
            ((bRam000000010b62abb8 - 1 < 2 ||
             ((bRam000000010b62abb8 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                                 ), cVar6 != '\0')))))) &&
           (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                               ), (uVar11 & 1) != 0)) {
          lStack_198 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                       + 0x30;
          puStack_180 = &UNK_108ca6603;
          uStack_178 = 0x5d;
          ppuStack_190 = &puStack_180;
          puStack_188 = &UNK_10b208fd0;
          pppuStack_1a8 = &ppuStack_190;
          uStack_1b0 = 1;
          uStack_1a0 = 1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                     ,&uStack_1b0);
          lVar15 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_150 = *(undefined8 *)
                          (
                          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                          + 0x20);
            uStack_148 = *(undefined8 *)
                          (
                          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                          + 0x28);
            puStack_158 = (undefined *)0x3;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&puStack_158);
            if (iVar7 != 0) {
              lStack_120 = *(long *)(lVar15 + 0x60);
              uStack_118 = *(undefined8 *)(lVar15 + 0x68);
              pppuStack_138 = *(undefined1 ****)(lVar15 + 0x50);
              uStack_130 = *(undefined8 *)(lVar15 + 0x58);
              uStack_140 = 1;
              if (pppuStack_138 == (undefined1 ***)0x0) {
                uStack_140 = 2;
              }
              uStack_f8 = *(undefined4 *)(lVar15 + 8);
              uStack_f4 = *(undefined4 *)(lVar15 + 0xc);
              uStack_d8 = 1;
              ppuStack_d0 = &puStack_e0;
              puStack_c8 = &DAT_1061c2098;
              lStack_128 = 1;
              if (lStack_120 == 0) {
                lStack_128 = 2;
              }
              uStack_108 = uStack_150;
              puStack_110 = puStack_158;
              uStack_100 = uStack_148;
              pppuStack_e8 = &ppuStack_d0;
              pcStack_f0 = s__108b39f4f;
              puStack_e0 = (undefined1 *)&uStack_1b0;
              (**(code **)(puVar1 + 0x20))(puVar2,&uStack_140);
            }
          }
        }
        else {
          lVar15 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppuStack_168 =
                 *(undefined ****)
                  (
                  ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                  + 0x20);
            uStack_160 = *(undefined8 *)
                          (
                          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                          + 0x28);
            uStack_170 = 3;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_170);
            if (iVar7 != 0) {
              lStack_128 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_14interrupt_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h402de511e4783dc8E
                           + 0x30;
              puStack_158 = &UNK_108ca6603;
              uStack_150 = 0x5d;
              ppuStack_d0 = &puStack_158;
              puStack_c8 = &UNK_10b208fd0;
              pppuStack_138 = &ppuStack_d0;
              uStack_140 = 1;
              uStack_130 = 1;
              pppuStack_1a8 = pppuStack_168;
              uStack_1b0 = uStack_170;
              uStack_1a0 = uStack_160;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar15,puVar2,puVar1,&uStack_1b0,&uStack_140);
            }
          }
        }
        puVar8[3] = *(long *)*puVar8 + 0x1118;
        *(undefined1 *)(puVar8 + 0x11) = 0;
LAB_1005a3d2c:
        auVar17 = FUN_100fd3e50(puVar8 + 3,uVar10);
        uVar13 = auVar17._8_8_;
        pcVar12 = auVar17._0_8_;
        if (pcVar12 == (char *)0x0) {
          bVar5 = true;
          uVar14 = 3;
          goto LAB_1005a3edc;
        }
        if (((*(char *)(puVar8 + 0x11) == '\x03') && (*(char *)(puVar8 + 0x10) == '\x03')) &&
           (*(char *)(puVar8 + 7) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar8 + 8);
          uVar13 = extraout_x1;
          if (puVar8[9] != 0) {
            (**(code **)(puVar8[9] + 0x18))(puVar8[10]);
            uVar13 = extraout_x1_00;
          }
        }
        *(bool *)(puVar8 + 2) = *(long *)(pcVar12 + 0x28) != -0x8000000000000000;
        if (*pcVar12 == '\0') {
          *pcVar12 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar12,uVar13,1000000000);
        }
        FUN_1060fa678(pcVar12,1,pcVar12);
        puVar8[0x19] = *puVar8;
        *(undefined2 *)((long)puVar8 + 0xd5) = 0;
LAB_1005a3dc4:
        uVar11 = FUN_10053a5e0(puVar8 + 3,uVar10);
        if ((uVar11 & 1) != 0) {
          bVar5 = true;
          uVar14 = 4;
          goto LAB_1005a3edc;
        }
        func_0x000100d2545c(puVar8 + 3);
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          bVar5 = false;
          uVar14 = 1;
          goto LAB_1005a3edc;
        }
        lVar15 = *(long *)*puVar8 + 0x10;
        *(undefined1 *)(puVar8 + 0x13) = 0;
        puVar8[3] = lVar15;
LAB_1005a3e24:
        puVar8[4] = lVar15 + 0x408;
        *(undefined1 *)(puVar8 + 0x12) = 0;
      }
      else {
        if (bVar3 == 3) goto LAB_1005a3d2c;
        if (bVar3 == 4) goto LAB_1005a3dc4;
        bVar3 = *(byte *)(puVar8 + 0x13);
        if (bVar3 < 2) {
          if (bVar3 != 0) goto LAB_1005a3f58;
          lVar15 = puVar8[3];
          goto LAB_1005a3e24;
        }
        if (bVar3 != 3) {
          FUN_107c05cc4(&UNK_10b217c40);
          goto LAB_1005a3f74;
        }
      }
      pcVar12 = (char *)FUN_100fd3e50(puVar8 + 4,uVar10);
      bVar5 = pcVar12 == (char *)0x0;
      if (pcVar12 == (char *)0x0) {
        uVar14 = 5;
        uVar16 = 3;
      }
      else {
        if (((*(char *)(puVar8 + 0x12) == '\x03') && (*(char *)(puVar8 + 0x11) == '\x03')) &&
           (*(char *)(puVar8 + 8) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar8 + 9);
          if (puVar8[10] != 0) {
            (**(code **)(puVar8[10] + 0x18))(puVar8[0xb]);
          }
        }
        __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
                  (pcVar12 + 0x28);
        if (*pcVar12 == '\0') {
          *pcVar12 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar12,extraout_x1_01,1000000000);
        }
        uVar16 = 1;
        FUN_1060fa678(pcVar12,1,pcVar12);
        uVar14 = 1;
      }
      *(undefined1 *)(puVar8 + 0x13) = uVar16;
LAB_1005a3edc:
      *(undefined1 *)((long)puVar8 + 0x11) = uVar14;
      return bVar5;
    }
    if (*(char *)(*param_1 + 0x358) == '\x02') goto LAB_1005a398c;
    param_1[1] = *param_1 + 0x330;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else if (bVar3 != 3) goto LAB_1005a39d8;
  FUN_100a84cdc(&cStack_60,param_1 + 1);
  if (cStack_60 == '\x06') {
    *(undefined1 *)(param_1 + 0xfa) = 3;
    return true;
  }
  uStack_40 = CONCAT71(uStack_5f,cStack_60);
  uStack_38 = uStack_58;
  uStack_28 = uStack_48;
  uStack_30 = uStack_50;
  FUN_100c97ff8(param_1 + 1);
  if ((char)uStack_40 == '\x05') {
LAB_1005a398c:
    *(undefined1 *)(param_1 + 0xfa) = 1;
    return false;
  }
  puVar8 = (undefined8 *)_malloc(0x20);
  if (puVar8 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
  }
  else {
    puVar8[1] = uStack_38;
    *puVar8 = uStack_40;
    puVar8[3] = uStack_28;
    puVar8[2] = uStack_30;
    plVar9 = (long *)_malloc(0x18);
    if (plVar9 != (long *)0x0) {
      *plVar9 = (long)puVar8;
      plVar9[1] = (long)&UNK_10b238910;
      *(undefined1 *)(plVar9 + 2) = 0x28;
      goto LAB_1005a398c;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a39cc);
  (*pcVar4)();
}

