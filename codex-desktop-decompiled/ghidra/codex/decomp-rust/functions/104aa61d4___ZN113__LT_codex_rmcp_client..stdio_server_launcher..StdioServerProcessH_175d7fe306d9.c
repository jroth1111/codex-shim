
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN113__LT_codex_rmcp_client__stdio_server_launcher__StdioServerProcessHandleInner_u20_as_u20_core__ops__drop__Drop_GT_4drop17h231b72e0b9950fbdE
               (long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  long *****ppppplVar8;
  long lVar9;
  long ****pppplVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  undefined *puVar14;
  ulong *puVar15;
  uint *puVar16;
  long *******ppppppplVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong extraout_x10;
  undefined8 *puVar23;
  ulong uVar24;
  long *******unaff_x21;
  undefined8 uVar25;
  long *plVar26;
  undefined8 *puVar27;
  long ******unaff_x24;
  long ******pppppplVar28;
  char *pcVar29;
  undefined1 auVar30 [16];
  long ******pppppplStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long **pplStack_1b0;
  undefined *puStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long ***ppplStack_178;
  undefined1 auStack_170 [8];
  long *****ppppplStack_168;
  long *plStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long *******ppppppplStack_148;
  undefined *puStack_140;
  long *******ppppppplStack_138;
  long ******pppppplStack_130;
  char *pcStack_128;
  long ******pppppplStack_120;
  long lStack_118;
  long ******pppppplStack_110;
  long *******ppppppplStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long *******ppppppplStack_e8;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  long ******pppppplStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long ******pppppplStack_c0;
  long *******ppppppplStack_b8;
  long ******pppppplStack_b0;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  long *****ppppplStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  char **ppcStack_68;
  
  LOAcquire();
  cVar12 = *(char *)(param_1 + 0x28);
  *(char *)(param_1 + 0x28) = '\x01';
  LORelease();
  if (cVar12 != '\0') {
    return;
  }
  pppppplVar28 = *(long *******)(param_1 + 0x18);
  if (pppppplVar28 == (long ******)0x0) {
    if (*(int *)(param_1 + 0x20) != 1) {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    auStack_170._4_4_ = uVar4;
    iVar13 = _killpg(uVar4,0xf);
    if (iVar13 != -1) {
      pcStack_128 = (char *)0x8000000000000000;
      ppppppplStack_148 = (long *******)0x0;
      if (___ZN3std6thread9lifecycle15spawn_unchecked28__u7b__u7b_closure_u7d__u7d_3MIN17h98e545dec0908d05E
          != 0) {
        uVar18 = ___ZN3std6thread9lifecycle15spawn_unchecked28__u7b__u7b_closure_u7d__u7d_3MIN17h98e545dec0908d05E
                 - 1;
        ppppppplVar17 = unaff_x21;
        while (lRam000000010b66feb0 == -1) {
          func_0x000108a82a30();
          uVar18 = extraout_x10;
LAB_104aa65fc:
          unaff_x21 = ppppppplVar17;
          if (unaff_x24 != (long ******)0x0) {
            _free(ppppppplVar17);
          }
LAB_104aa6608:
          ___ZN3std6thread9lifecycle15spawn_unchecked28__u7b__u7b_closure_u7d__u7d_3MIN17h98e545dec0908d05E
               = uVar18 + 1;
          ppppppplVar17 = unaff_x21;
        }
        lRam000000010b66feb0 = lRam000000010b66feb0 + 1;
        ppppppplStack_138 =
             (long *******)
             __ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE
                       (lRam000000010b66feb0,&pcStack_128);
        __ZN3std6thread9spawnhook15run_spawn_hooks17hdfeefc8b67d6d5b2E
                  (&pppppplStack_110,&ppppppplStack_138);
        ppppppplStack_b8 = (long *******)0x1;
        pppppplStack_c0 = (long ******)0x1;
        pppppplStack_b0 = (long ******)0x0;
        pppppplStack_a8 = (long ******)0x0;
        pppppplVar28 = (long ******)_malloc(0x30);
        if (pppppplVar28 == (long ******)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
        }
        else {
          pppppplVar28[1] = (long *****)ppppppplStack_b8;
          *pppppplVar28 = (long *****)pppppplStack_c0;
          pppppplVar28[3] = (long *****)pppppplStack_a8;
          pppppplVar28[2] = (long *****)pppppplStack_b0;
          pppppplVar28[5] = ppppplStack_98;
          pppppplVar28[4] = (long *****)pppppplStack_a0;
          ppppplVar8 = *pppppplVar28;
          *pppppplVar28 = (long *****)((long)ppppplVar8 + 1);
          if (-1 < (long)ppppplVar8) {
            ppppppplStack_e8 = ppppppplStack_108;
            pppppplStack_f0 = pppppplStack_110;
            pppppplStack_d8 = pppppplStack_f8;
            pppppplStack_e0 = pppppplStack_100;
            ppppplVar8 = pppppplVar28[2];
            pppppplStack_d0 = pppppplVar28;
            uStack_c8 = uVar4;
            if ((ppppplVar8 == (long *****)0x0) ||
               (pppplVar10 = ppppplVar8[3], ppppplVar8[3] = (long ****)((long)pppplVar10 + 1),
               -1 < (long)pppplVar10)) {
              ppppplStack_98 = (long *****)CONCAT44(uStack_c4,uVar4);
              ppppppplStack_b8 = ppppppplStack_108;
              pppppplStack_c0 = pppppplStack_110;
              pppppplStack_a8 = pppppplStack_f8;
              pppppplStack_b0 = pppppplStack_100;
              pppppplStack_a0 = pppppplVar28;
              ppppppplVar17 = (long *******)_malloc(0x30);
              if (ppppppplVar17 == (long *******)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
              }
              else {
                ppppppplVar17[1] = (long ******)ppppppplStack_e8;
                *ppppppplVar17 = pppppplStack_f0;
                ppppppplVar17[3] = pppppplStack_d8;
                ppppppplVar17[2] = pppppplStack_e0;
                ppppppplVar17[5] = (long ******)CONCAT44(uStack_c4,uStack_c8);
                ppppppplVar17[4] = pppppplStack_d0;
                ppppplVar8 = (long *****)*ppppppplStack_138;
                *ppppppplStack_138 = (long ******)((long)ppppplVar8 + 1);
                if (-1 < (long)ppppplVar8) {
                  pppppplStack_c0 = (long ******)ppppppplStack_138;
                  pppppplStack_b0 = (long ******)&UNK_10b349480;
                  ppppppplStack_b8 = ppppppplVar17;
                  plVar26 = (long *)_malloc(0x18);
                  if (plVar26 == (long *)0x0) {
                    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                  }
                  else {
                    plVar26[1] = (long)ppppppplStack_b8;
                    *plVar26 = (long)pppppplStack_c0;
                    plVar26[2] = (long)pppppplStack_b0;
                    auVar30 = __ZN3std3sys6thread4unix6Thread3new17he9ae4380936b92ccE
                                        (uVar18,plVar26);
                    ppppppplVar17 = ppppppplStack_138;
                    auVar30._8_8_ = auVar30._8_8_;
                    if ((auVar30._0_8_ & 1) == 0) {
                      pppppplStack_c0 = (long ******)ppppppplStack_138;
                      ppppppplStack_b8 = (long *******)pppppplVar28;
                      pppppplStack_b0 = auVar30._8_8_;
                      _pthread_detach(auVar30._8_8_);
                      ppppplVar8 = (long *****)*ppppppplVar17;
                      *ppppppplVar17 = (long ******)((long)ppppplVar8 + -1);
                      LORelease();
                      if (ppppplVar8 == (long *****)0x1) {
                        DataMemoryBarrier(2,1);
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E
                                  (&pppppplStack_c0);
                      }
                      ppppplVar8 = (long *****)*ppppppplStack_b8;
                      *ppppppplStack_b8 = (long ******)((long)ppppplVar8 + -1);
                      LORelease();
                      if (ppppplVar8 != (long *****)0x1) {
                        return;
                      }
                      DataMemoryBarrier(2,1);
                      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46f473b995dcda96E
                                (&ppppppplStack_b8);
                      return;
                    }
                    ppppplVar8 = *pppppplVar28;
                    *pppppplVar28 = (long *****)((long)ppppplVar8 + -1);
                    LORelease();
                    if (ppppplVar8 == (long *****)0x1) {
                      DataMemoryBarrier(2,1);
                      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46f473b995dcda96E
                                (&stack0xffffffffffffffa0);
                    }
                    ppppplVar8 = (long *****)*ppppppplStack_138;
                    *ppppppplStack_138 = (long ******)((long)ppppplVar8 + -1);
                    LORelease();
                    if (ppppplVar8 == (long *****)0x1) {
                      DataMemoryBarrier(2,1);
                      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E
                                (&ppppppplStack_138);
                    }
                    pppppplStack_c0 = auVar30._8_8_;
                    func_0x000108a07a3c(&UNK_108e68b0d,0x16,&pppppplStack_c0,&UNK_10b3495c8,
                                        &UNK_10b348278);
                  }
                }
              }
            }
            else {
              func_0x000108a82a80(ppppplVar8 + 2);
            }
          }
        }
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x104aa68c4);
        (*pcVar7)();
      }
      __ZN3std3env7_var_os17h6bd9111edd9950c4E(&pppppplStack_f0,&UNK_108e69c98,0xe);
      ppppppplVar17 = ppppppplStack_e8;
      unaff_x24 = pppppplStack_f0;
      if (pppppplStack_f0 == (long ******)0x8000000000000000) {
        uVar18 = 0x200000;
        goto LAB_104aa6608;
      }
      func_0x0001055bf348(&pppppplStack_c0,ppppppplStack_e8,pppppplStack_e0);
      if (((int)pppppplStack_c0 != 1) && (pppppplStack_b0 != (long ******)0x0)) {
        if (pppppplStack_b0 == (long ******)0x1) {
          bVar5 = *(byte *)ppppppplStack_b8;
          uVar18 = 0x200000;
          if (bVar5 == 0x2b) goto LAB_104aa65fc;
          if (bVar5 == 0x2d) goto LAB_104aa65fc;
        }
        else {
          bVar5 = *(byte *)ppppppplStack_b8;
        }
        if (bVar5 == 0x2b) {
          ppppppplStack_b8 = (long *******)((long)ppppppplStack_b8 + 1);
        }
        uVar20 = (long)pppppplStack_b0 - (ulong)(bVar5 == 0x2b);
        if (0x10 < uVar20) {
          uVar21 = 0;
          uVar24 = 0x200000;
          do {
            uVar18 = uVar21;
            if (uVar20 == 0) goto LAB_104aa65fc;
            uVar6 = *(byte *)ppppppplStack_b8 - 0x30;
            uVar18 = uVar24;
            if (9 < uVar6) goto LAB_104aa65fc;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar21;
            uVar22 = uVar21 * 10;
            uVar21 = uVar22 + uVar6;
            if (SUB168(auVar30 * ZEXT816(10),8) != 0) goto LAB_104aa65fc;
            uVar20 = uVar20 - 1;
            ppppppplStack_b8 = (long *******)((long)ppppppplStack_b8 + 1);
            if (CARRY8(uVar22,(ulong)uVar6)) goto LAB_104aa65fc;
          } while( true );
        }
        uVar18 = 0;
        while( true ) {
          if (uVar20 == 0) goto LAB_104aa65fc;
          if (9 < *(byte *)ppppppplStack_b8 - 0x30) break;
          uVar18 = uVar18 * 10 + (ulong)(*(byte *)ppppppplStack_b8 - 0x30);
          uVar20 = uVar20 - 1;
          ppppppplStack_b8 = (long *******)((long)ppppppplStack_b8 + 1);
        }
      }
      uVar18 = 0x200000;
      goto LAB_104aa65fc;
    }
    puVar16 = (uint *)___error();
    ppppplVar8 = (long *****)((ulong)*puVar16 << 0x20 | 2);
    cVar12 = FUN_10558e11c(ppppplVar8);
    if (cVar12 != '\0') {
      ppppplStack_168 = ppppplVar8;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62f798 - 1 < 2 ||
           ((bRam000000010b62f798 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (0x10b62f788), cVar12 != '\0')))) &&
          (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b62f788), iVar13 != 0)))) {
        pppppplStack_d8 = (long ******)(lRam000000010b62f788 + 0x30);
        pppppplStack_c0 = (long ******)(auStack_170 + 4);
        ppppppplStack_b8 =
             (long *******)
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        pppppplStack_b0 = &ppppplStack_168;
        pppppplStack_a8 =
             (long ******)
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        pppppplStack_120 = (long ******)&pppppplStack_c0;
        pcStack_128 = s__Failed_to_terminate_MCP_process_108b0574d;
        pppppplStack_f0 = (long ******)0x1;
        ppppppplStack_e8 = (long *******)&stack0xffffffffffffffa0;
        pppppplStack_e0 = (long ******)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b62f788,&pppppplStack_f0);
        lVar9 = lRam000000010b62f788;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppppplStack_108 = *(long ********)(lRam000000010b62f788 + 0x20);
          pppppplStack_100 = *(long *******)(lRam000000010b62f788 + 0x28);
          pppppplStack_110 = (long ******)0x2;
          puVar14 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar14 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar13 = (**(code **)(puVar14 + 0x18))(puVar3,&pppppplStack_110);
          if (iVar13 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar9,puVar3,puVar14,&pppppplStack_110,&pppppplStack_f0);
          }
        }
      }
      else {
        lVar9 = lRam000000010b62f788;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          lStack_158 = *(long *)(lRam000000010b62f788 + 0x20);
          uStack_150 = *(long *)(lRam000000010b62f788 + 0x28);
          plStack_160 = (long *)0x2;
          puVar14 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar14 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar13 = (**(code **)(puVar14 + 0x18))(puVar3,&plStack_160);
          if (iVar13 != 0) {
            pppppplStack_f8 = (long ******)(lRam000000010b62f788 + 0x30);
            pppppplStack_f0 = (long ******)(auStack_170 + 4);
            pppppplStack_e0 = &ppppplStack_168;
            ppppppplStack_e8 =
                 (long *******)
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
            ;
            pppppplStack_d8 =
                 (long ******)
                 __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            pppppplStack_130 = (long ******)&pppppplStack_f0;
            ppppppplStack_138 = (long *******)s__Failed_to_terminate_MCP_process_108b0574d;
            ppppppplStack_148 = (long *******)&ppppppplStack_138;
            puStack_140 = &UNK_10b347048;
            ppppppplStack_108 = (long *******)&ppppppplStack_148;
            pppppplStack_110 = (long ******)0x1;
            pppppplStack_100 = (long ******)0x1;
            pppppplStack_a0 = *(long *******)(lVar9 + 0x60);
            ppppplStack_98 = *(long ******)(lVar9 + 0x68);
            ppppppplStack_b8 = *(long ********)(lVar9 + 0x50);
            pppppplStack_b0 = *(long *******)(lVar9 + 0x58);
            pppppplStack_c0 = (long ******)0x1;
            if (ppppppplStack_b8 == (long *******)0x0) {
              pppppplStack_c0 = (long ******)0x2;
            }
            uStack_78 = *(undefined4 *)(lVar9 + 8);
            uStack_74 = *(undefined4 *)(lVar9 + 0xc);
            pcStack_128 = &stack0xffffffffffffffa0;
            pppppplStack_120 = (long ******)&DAT_1061c2098;
            pppppplStack_a8 = (long ******)0x1;
            if (pppppplStack_a0 == (long ******)0x0) {
              pppppplStack_a8 = (long ******)0x2;
            }
            lStack_88 = lStack_158;
            plStack_90 = plStack_160;
            lStack_80 = uStack_150;
            ppcStack_68 = &pcStack_128;
            pcStack_70 = s__108b39f4f;
            (**(code **)(puVar14 + 0x20))(puVar3,&pppppplStack_c0);
          }
        }
      }
      if (((ulong)ppppplStack_168 & 3) == 1) {
        puVar23 = (undefined8 *)((long)ppppplStack_168 - 1);
        uVar25 = *puVar23;
        puVar27 = *(undefined8 **)((long)ppppplStack_168 + 7);
        pcVar7 = (code *)*puVar27;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar25);
        }
        if (puVar27[1] != 0) {
          _free(uVar25);
        }
        _free(puVar23);
      }
    }
    return;
  }
  ppppplVar8 = *pppppplVar28;
  *pppppplVar28 = (long *****)((long)ppppplVar8 + 1);
  if (-1 < (long)ppppplVar8) {
    pcVar29 = *(char **)(param_1 + 0x20);
    uVar25 = *(undefined8 *)(param_1 + 8);
    ppppppplVar17 = *(long ********)(param_1 + 0x10);
    pppppplStack_1d8 = pppppplVar28;
    pcStack_1d0 = pcVar29;
    if (ppppppplVar17 == (long *******)0x0) {
      puVar14 = (undefined *)0x1;
    }
    else {
      puVar14 = (undefined *)_malloc(ppppppplVar17);
      if (puVar14 == (undefined *)0x0) {
        func_0x0001087c9084(1,ppppppplVar17);
        goto LAB_104a93788;
      }
    }
    _memcpy(puVar14,uVar25,ppppppplVar17);
    puVar15 = (ulong *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
    if ((char)puVar15[9] != '\x01') {
      if ((char)puVar15[9] == '\x02') goto joined_r0x000104a93208;
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar15,&DAT_1060edbcc);
      *(undefined1 *)(puVar15 + 9) = 1;
    }
    uVar18 = *puVar15;
    if (uVar18 < 0x7fffffffffffffff) {
      *puVar15 = uVar18 + 1;
      uVar20 = puVar15[1];
      if (uVar20 == 2) {
        *puVar15 = uVar18;
joined_r0x000104a93208:
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
            ((bRam000000010b62f5a0 - 1 < 2 ||
             ((bRam000000010b62f5a0 != 0 &&
              (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (0x10b62f590), cVar12 != '\0')))))) &&
           (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (lRam000000010b62f590), iVar13 != 0)) {
          ppppplStack_168 = (long *****)(lRam000000010b62f590 + 0x30);
          plStack_188 = (long *)&DAT_104b149a8;
          plStack_198 = &lStack_190;
          plStack_1a0 = (long *)s_BCould_not_schedule_remote_MCP_s_108b053da;
          pplStack_1b0 = &plStack_1a0;
          puStack_1a8 = &UNK_10b347048;
          ppplStack_178 = &pplStack_1b0;
          lStack_180 = 1;
          auStack_170 = (undefined1  [8])0x1;
          lStack_190 = param_1;
          func_0x000104a93d5c(&lStack_180);
        }
        else {
          lVar9 = lRam000000010b62f590;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_1c0 = *(undefined8 *)(lRam000000010b62f590 + 0x20);
            uStack_1b8 = *(undefined8 *)(lRam000000010b62f590 + 0x28);
            uStack_1c8 = 2;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar13 = (**(code **)(puVar3 + 0x18))(puVar2,&uStack_1c8);
            if (iVar13 != 0) {
              ppppplStack_168 = (long *****)(lRam000000010b62f590 + 0x30);
              plStack_188 = (long *)&DAT_104b149a8;
              plStack_198 = &lStack_190;
              plStack_1a0 = (long *)s_BCould_not_schedule_remote_MCP_s_108b053da;
              pplStack_1b0 = &plStack_1a0;
              puStack_1a8 = &UNK_10b347048;
              ppplStack_178 = &pplStack_1b0;
              lStack_180 = 1;
              auStack_170 = (undefined1  [8])0x1;
              lStack_190 = param_1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar9,puVar2,puVar3,&uStack_1c8,&lStack_180);
            }
          }
        }
        if (ppppppplVar17 != (long *******)0x0) {
          _free(puVar14);
        }
        ppppplVar8 = *pppppplVar28;
        *pppppplVar28 = (long *****)((long)ppppplVar8 + -1);
        LORelease();
        if (ppppplVar8 == (long *****)0x1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hce82b7456c5d2d0fE(&pppppplStack_1d8);
        }
        return;
      }
      plVar26 = (long *)puVar15[2];
      lVar9 = *plVar26;
      *plVar26 = lVar9 + 1;
      if ((uVar20 & 1) == 0) {
        if (lVar9 < 0) goto LAB_104a93788;
        lStack_190 = 0;
      }
      else {
        if (lVar9 < 0) goto LAB_104a93788;
        lStack_190 = 1;
      }
      *puVar15 = *puVar15 - 1;
      do {
        lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar11 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar11;
      } while (bVar1);
      lVar11 = *plVar26;
      *plVar26 = lVar11 + 1;
      plStack_188 = plVar26;
      if (lStack_190 == 0) {
        if (-1 < lVar11) {
          plVar19 = (long *)plVar26[0x5e];
          if (plVar19 == (long *)0x0) {
            ppppppplStack_e8 = (long *******)0x0;
            pppppplStack_e0 = (long ******)0x0;
          }
          else {
            lVar11 = *plVar19;
            *plVar19 = lVar11 + 1;
            if (lVar11 < 0) goto LAB_104a93788;
            pppppplStack_e0 = (long ******)plVar26[0x5f];
            ppppppplStack_e8 = (long *******)plVar26[0x5e];
          }
          lStack_180 = 0xcc;
          ppplStack_178 = (long ***)0x0;
          auStack_170 = (undefined1  [8])&UNK_10b34a518;
          ppppplStack_168 = (long *****)0x0;
          lStack_158 = lVar9;
          uStack_150 = (ulong)uStack_150._4_4_ << 0x20;
          pppppplStack_110 = (long ******)((ulong)pppppplStack_110._1_7_ << 8);
          pppppplStack_100 = (long ******)0x0;
          pppppplStack_f8 = (long ******)0x0;
          ppppppplStack_108 = (long *******)0x0;
          plStack_1a0 = (long *)0x0;
          plStack_160 = plVar26;
          ppppppplStack_148 = ppppppplVar17;
          puStack_140 = puVar14;
          ppppppplStack_138 = ppppppplVar17;
          pppppplStack_130 = pppppplVar28;
          pcStack_128 = pcVar29;
          iVar13 = _posix_memalign(&plStack_1a0,0x80,0x100);
          plVar19 = plStack_1a0;
          if ((iVar13 == 0) && (plStack_1a0 != (long *)0x0)) {
            plStack_1a0[0x13] = (long)ppppppplStack_e8;
            plStack_1a0[0x12] = (long)pppppplStack_f0;
            plStack_1a0[0x15] = (long)pppppplStack_d8;
            plStack_1a0[0x14] = (long)pppppplStack_e0;
            plStack_1a0[0x17] = CONCAT44(uStack_c4,uStack_c8);
            plStack_1a0[0x16] = (long)pppppplStack_d0;
            plStack_1a0[3] = (long)ppppplStack_168;
            plStack_1a0[2] = (long)auStack_170;
            plStack_1a0[5] = lStack_158;
            plStack_1a0[4] = (long)plStack_160;
            plStack_1a0[7] = (long)ppppppplStack_148;
            plStack_1a0[6] = uStack_150;
            plStack_1a0[1] = (long)ppplStack_178;
            *plStack_1a0 = lStack_180;
            plStack_1a0[0xd] = lStack_118;
            plStack_1a0[0xc] = (long)pppppplStack_120;
            plStack_1a0[0xf] = (long)ppppppplStack_108;
            plStack_1a0[0xe] = (long)pppppplStack_110;
            plStack_1a0[9] = (long)ppppppplStack_138;
            plStack_1a0[8] = (long)puStack_140;
            plStack_1a0[0xb] = (long)pcStack_128;
            plStack_1a0[10] = (long)pppppplStack_130;
            plStack_1a0[0x11] = (long)pppppplStack_f8;
            plStack_1a0[0x10] = (long)pppppplStack_100;
            plStack_1a0[0x1d] = (long)ppppplStack_98;
            plStack_1a0[0x1c] = (long)pppppplStack_a0;
            plStack_1a0[0x1f] = lStack_88;
            plStack_1a0[0x1e] = (long)plStack_90;
            plStack_1a0[0x19] = (long)ppppppplStack_b8;
            plStack_1a0[0x18] = (long)pppppplStack_c0;
            plStack_1a0[0x1b] = (long)pppppplStack_a8;
            plStack_1a0[0x1a] = (long)pppppplStack_b0;
            lVar11 = FUN_104b13110(plVar26 + 0x2d,plStack_1a0,plStack_1a0);
            lStack_180 = lVar9;
            if (plVar26[0x5c] != 0) {
              (**(code **)(plVar26[0x5d] + 0x28))
                        (plVar26[0x5c] + (*(long *)(plVar26[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&lStack_180);
            }
            if (lVar11 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (&plStack_188,lVar11);
            }
            goto LAB_104a93638;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
        }
      }
      else if (-1 < lVar11) {
        plVar19 = (long *)plVar26[0x4a];
        if (plVar19 == (long *)0x0) {
          ppppppplStack_e8 = (long *******)0x0;
          pppppplStack_e0 = (long ******)0x0;
        }
        else {
          lVar11 = *plVar19;
          *plVar19 = lVar11 + 1;
          if (lVar11 < 0) goto LAB_104a93788;
          pppppplStack_e0 = (long ******)plVar26[0x4b];
          ppppppplStack_e8 = (long *******)plVar26[0x4a];
        }
        lStack_180 = 0xcc;
        ppplStack_178 = (long ***)0x0;
        auStack_170 = (undefined1  [8])&UNK_10b34a338;
        ppppplStack_168 = (long *****)0x0;
        lStack_158 = lVar9;
        uStack_150 = (ulong)uStack_150._4_4_ << 0x20;
        pppppplStack_110 = (long ******)((ulong)pppppplStack_110._1_7_ << 8);
        pppppplStack_100 = (long ******)0x0;
        pppppplStack_f8 = (long ******)0x0;
        ppppppplStack_108 = (long *******)0x0;
        plStack_1a0 = (long *)0x0;
        plStack_160 = plVar26;
        ppppppplStack_148 = ppppppplVar17;
        puStack_140 = puVar14;
        ppppppplStack_138 = ppppppplVar17;
        pppppplStack_130 = pppppplVar28;
        pcStack_128 = pcVar29;
        iVar13 = _posix_memalign(&plStack_1a0,0x80,0x100);
        plVar19 = plStack_1a0;
        if ((iVar13 == 0) && (plStack_1a0 != (long *)0x0)) {
          plStack_1a0[0x13] = (long)ppppppplStack_e8;
          plStack_1a0[0x12] = (long)pppppplStack_f0;
          plStack_1a0[0x15] = (long)pppppplStack_d8;
          plStack_1a0[0x14] = (long)pppppplStack_e0;
          plStack_1a0[0x17] = CONCAT44(uStack_c4,uStack_c8);
          plStack_1a0[0x16] = (long)pppppplStack_d0;
          plStack_1a0[3] = (long)ppppplStack_168;
          plStack_1a0[2] = (long)auStack_170;
          plStack_1a0[5] = lStack_158;
          plStack_1a0[4] = (long)plStack_160;
          plStack_1a0[7] = (long)ppppppplStack_148;
          plStack_1a0[6] = uStack_150;
          plStack_1a0[1] = (long)ppplStack_178;
          *plStack_1a0 = lStack_180;
          plStack_1a0[0xd] = lStack_118;
          plStack_1a0[0xc] = (long)pppppplStack_120;
          plStack_1a0[0xf] = (long)ppppppplStack_108;
          plStack_1a0[0xe] = (long)pppppplStack_110;
          plStack_1a0[9] = (long)ppppppplStack_138;
          plStack_1a0[8] = (long)puStack_140;
          plStack_1a0[0xb] = (long)pcStack_128;
          plStack_1a0[10] = (long)pppppplStack_130;
          plStack_1a0[0x11] = (long)pppppplStack_f8;
          plStack_1a0[0x10] = (long)pppppplStack_100;
          plStack_1a0[0x1d] = (long)ppppplStack_98;
          plStack_1a0[0x1c] = (long)pppppplStack_a0;
          plStack_1a0[0x1f] = lStack_88;
          plStack_1a0[0x1e] = (long)plStack_90;
          plStack_1a0[0x19] = (long)ppppppplStack_b8;
          plStack_1a0[0x18] = (long)pppppplStack_c0;
          plStack_1a0[0x1b] = (long)pppppplStack_a8;
          plStack_1a0[0x1a] = (long)pppppplStack_b0;
          lVar11 = FUN_104b13110(plVar26 + 0x11,plStack_1a0,plStack_1a0);
          lStack_180 = lVar9;
          if (plVar26[0x48] != 0) {
            (**(code **)(plVar26[0x49] + 0x28))
                      (plVar26[0x48] + (*(long *)(plVar26[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10,&lStack_180);
          }
          if (lVar11 != 0) {
            FUN_10610fa38(plVar26 + 2,lVar11,0);
          }
LAB_104a93638:
          if (*plVar19 == 0xcc) {
            *plVar19 = 0x84;
          }
          else {
            (**(code **)(plVar19[2] + 0x20))(plVar19);
          }
          if (lStack_190 != 0) {
            lVar9 = *plStack_188;
            *plStack_188 = lVar9 + -1;
            LORelease();
            if (lVar9 != 1) {
              return;
            }
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_188);
            return;
          }
          lVar9 = *plStack_188;
          *plStack_188 = lVar9 + -1;
          LORelease();
          if (lVar9 != 1) {
            return;
          }
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_188);
          return;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
      }
    }
    else {
      func_0x000108a07858(&UNK_10b4ce0a8);
    }
  }
LAB_104a93788:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104a9378c);
  (*pcVar7)();
}

