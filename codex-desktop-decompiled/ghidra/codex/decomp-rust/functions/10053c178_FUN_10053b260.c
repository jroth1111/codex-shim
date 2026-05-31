
/* WARNING: Removing unreachable block (ram,0x00010053be64) */
/* WARNING: Removing unreachable block (ram,0x00010053b548) */
/* WARNING: Removing unreachable block (ram,0x00010053b524) */
/* WARNING: Removing unreachable block (ram,0x00010053be40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10053b260(long *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  code *pcVar6;
  code *pcVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  uint uVar17;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  byte bVar18;
  undefined1 uVar19;
  code *pcVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar27;
  long *unaff_x22;
  long lVar28;
  undefined8 *puVar29;
  char *pcVar30;
  long *unaff_x26;
  undefined1 *unaff_x28;
  long unaff_x29;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined1 auVar44 [16];
  code *in_stack_00000070;
  code *in_stack_00000078;
  long *in_stack_00000080;
  char *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_00000098;
  char *in_stack_000000a0;
  code *in_stack_000000a8;
  code *in_stack_000000b0;
  code *in_stack_000000b8;
  code *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  char *in_stack_000000d0;
  undefined1 uStack00000000000000d8;
  undefined7 uStack00000000000000d9;
  code *pcStack00000000000000e0;
  code *pcStack00000000000000e8;
  long *plStack00000000000000f0;
  long *plStack00000000000000f8;
  code *in_stack_00000100;
  undefined *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  char *in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000168;
  ulong in_stack_00000170;
  char *in_stack_00000178;
  undefined8 *in_stack_00000180;
  undefined8 in_stack_00000188;
  long *in_stack_00000190;
  undefined *in_stack_00000198;
  char *in_stack_000001a0;
  undefined1 *in_stack_000001a8;
  code *in_stack_000001b0;
  code *in_stack_000001b8;
  code *in_stack_000001c0;
  code *in_stack_000001c8;
  undefined4 uStack00000000000001d0;
  undefined8 *in_stack_000001d8;
  char *in_stack_000001e0;
  undefined8 *in_stack_000001e8;
  
code_r0x00010053b260:
  *(char **)(unaff_x29 + -0x68) = s_task___didn_t_complete_gracefull_108ac0b3f;
  *(code ***)(unaff_x29 + -0x60) = &stack0x000001b0;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
  pcStack00000000000000e8 = (code *)(unaff_x29 + -0x78);
  pcStack00000000000000e0 = (code *)0x1;
  plStack00000000000000f0 = (long *)0x1;
  plStack00000000000000f8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000e0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar28 = *unaff_x22;
    in_stack_000000a8 = *(code **)(lVar28 + 0x20);
    in_stack_000000b0 = *(code **)(lVar28 + 0x28);
    in_stack_000000a0 = (char *)0x2;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000a0);
    if (iVar11 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar28,puVar3,puVar2,&stack0x000000a0,&stack0x000000e0);
    }
  }
LAB_10053b4a4:
  puVar12 = (ulong *)unaff_x19[0x5a];
  uVar8 = *puVar12;
  do {
    if ((uVar8 & 0x22) != 0) {
      bVar4 = false;
      in_stack_000001b0 = (code *)0x0;
      goto LAB_10053b56c;
    }
    if ((uVar8 & 1) == 0) {
      if (((uint)uVar8 >> 2 & 1) == 0) {
        if ((long)uVar8 < 0) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
          goto LAB_10053c5d0;
        }
        pcStack00000000000000e0 = (code *)(uVar8 + 100);
        bVar4 = true;
      }
      else {
        bVar4 = false;
        pcStack00000000000000e0 = (code *)(uVar8 | 0x20);
      }
    }
    else {
      bVar4 = false;
      pcStack00000000000000e0 = (code *)(uVar8 | 0x24);
    }
    in_stack_000001b0 = (code *)0x1;
    bVar1 = *puVar12 != uVar8;
    uVar8 = *puVar12;
  } while (bVar1);
  *puVar12 = (ulong)pcStack00000000000000e0;
LAB_10053b56c:
  if (bVar4) {
    (**(code **)(puVar12[2] + 8))();
  }
  pcVar20 = *(code **)unaff_x19[0x4c];
  uVar8 = *(ulong *)pcVar20;
  *(ulong *)pcVar20 = uVar8 + 1;
  if (-1 < (long)uVar8) {
    pcVar22 = (code *)unaff_x19[0x5c];
    uVar8 = *(ulong *)pcVar22;
    *(ulong *)pcVar22 = uVar8 + 1;
    if (-1 < (long)uVar8) {
      in_stack_000001b8 = (code *)0x1;
      in_stack_000001b0 = (code *)0x1;
      in_stack_000001c0 = pcVar20;
      in_stack_000001c8 = pcVar22;
      puVar13 = (undefined8 *)_malloc(0x20);
      if (puVar13 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      }
      else {
        puVar13[1] = in_stack_000001b8;
        *puVar13 = in_stack_000001b0;
        puVar13[3] = in_stack_000001c8;
        puVar13[2] = in_stack_000001c0;
        lVar21 = unaff_x19[0x61];
        lVar23 = unaff_x19[0x62];
        *(undefined1 *)((long)unaff_x19 + 0x49d) = 0;
        lVar28 = *(long *)unaff_x19[0x5b];
        *(long *)unaff_x19[0x5b] = lVar28 + 1;
        in_stack_00000168 = puVar13;
        if (-1 < lVar28) {
          auVar44 = (**(code **)(lVar23 + 0x38))
                              (lVar21 + (*(long *)(lVar23 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
          ;
          *(undefined1 (*) [16])(unaff_x19 + 0x94) = auVar44;
          iVar11 = (**(code **)(auVar44._8_8_ + 0x18))();
          if (iVar11 == 0) {
            lVar28 = unaff_x19[0x94];
            puVar13 = (undefined8 *)unaff_x19[0x95];
            pcVar20 = (code *)*puVar13;
            if (pcVar20 != (code *)0x0) {
              (*pcVar20)(lVar28);
            }
            if (puVar13[1] != 0) {
              _free(lVar28);
            }
            if (*(char *)((long)unaff_x19 + 0x49a) == '\0') {
              uVar14 = 0;
              lVar28 = *(long *)(unaff_x19[0x5b] + 0x798);
              if (*(char *)(lVar28 + 0x253e) == '\x01') {
                lVar21 = *(long *)(lVar28 + 0x2398);
                uVar14 = 1;
                if (lVar21 != 0) {
                  lVar28 = *(long *)(lVar28 + 0x23a0);
                  do {
                    uVar25 = (ulong)*(ushort *)(lVar21 + 10);
                    uVar8 = 0xffffffffffffffff;
                    pbVar24 = (byte *)(lVar21 + 0xc);
                    uVar26 = uVar25;
                    do {
                      if (uVar26 == 0) goto LAB_10053b6c4;
                      cVar9 = *pbVar24 < 0x15;
                      if (0x15 < *pbVar24) {
                        cVar9 = -1;
                      }
                      uVar26 = uVar26 - 1;
                      uVar8 = uVar8 + 1;
                      pbVar24 = pbVar24 + 1;
                    } while (cVar9 == '\x01');
                    uVar25 = uVar8;
                    if (cVar9 == '\0') {
                      uVar14 = 2;
                      break;
                    }
LAB_10053b6c4:
                    if (lVar28 == 0) goto LAB_10053c4d8;
                    lVar21 = *(long *)(lVar21 + uVar25 * 8 + 0x18);
                    lVar28 = lVar28 + -1;
                  } while( true );
                }
              }
              goto LAB_10053b6dc;
            }
            goto LAB_10053bb64;
          }
          uVar19 = 4;
          goto LAB_10053c4c8;
        }
      }
    }
  }
  goto LAB_10053c5d0;
LAB_10053c4d8:
  uVar14 = 1;
LAB_10053b6dc:
  plVar15 = unaff_x19 + 99;
  __ZN10codex_core5tasks31interrupted_turn_history_marker17he7bc66ac12bfe1bbE(plVar15,uVar14);
  if (*plVar15 != 0x11) {
    *(undefined1 *)((long)unaff_x19 + 0x49b) = 1;
    unaff_x19[0x88] = unaff_x19[0x70];
    unaff_x19[0x87] = unaff_x19[0x6f];
    unaff_x19[0x8a] = unaff_x19[0x72];
    unaff_x19[0x89] = unaff_x19[0x71];
    unaff_x19[0x84] = unaff_x19[0x6c];
    unaff_x19[0x83] = unaff_x19[0x6b];
    unaff_x19[0x86] = unaff_x19[0x6e];
    unaff_x19[0x85] = unaff_x19[0x6d];
    unaff_x19[0x90] = unaff_x19[0x78];
    unaff_x19[0x8f] = unaff_x19[0x77];
    unaff_x19[0x92] = unaff_x19[0x7a];
    unaff_x19[0x91] = unaff_x19[0x79];
    unaff_x19[0x8c] = unaff_x19[0x74];
    unaff_x19[0x8b] = unaff_x19[0x73];
    unaff_x19[0x8e] = unaff_x19[0x76];
    unaff_x19[0x8d] = unaff_x19[0x75];
    unaff_x19[0x7c] = unaff_x19[100];
    unaff_x19[0x7b] = *plVar15;
    unaff_x19[0x7e] = unaff_x19[0x66];
    unaff_x19[0x7d] = unaff_x19[0x65];
    unaff_x19[0x80] = unaff_x19[0x68];
    unaff_x19[0x7f] = unaff_x19[0x67];
    unaff_x19[0x82] = unaff_x19[0x6a];
    unaff_x19[0x81] = unaff_x19[0x69];
    unaff_x19[0x94] = *(long *)unaff_x19[0x4c] + 0x10;
    unaff_x19[0x95] = (long)(unaff_x19 + 0x7b);
    unaff_x19[0x96] = 1;
    unaff_x19[0x97] = unaff_x19[0x5b] + 0x10;
    *(undefined1 *)(unaff_x19 + 0xaa) = 0;
    iVar11 = FUN_1005a7410(unaff_x19 + 0x94);
    if (iVar11 != 0) {
      uVar19 = 5;
      goto LAB_10053c4c8;
    }
    if (((((char)unaff_x19[0xaa] == '\x03') && ((char)unaff_x19[0xa9] == '\x03')) &&
        ((char)unaff_x19[0xa8] == '\x03')) && ((char)unaff_x19[0x9f] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0xa0);
      if (unaff_x19[0xa1] != 0) {
        (**(code **)(unaff_x19[0xa1] + 0x18))(unaff_x19[0xa2]);
      }
    }
    lVar28 = *(long *)unaff_x19[0x4c];
    unaff_x19[0x157] = unaff_x19[0x8c];
    unaff_x19[0x156] = unaff_x19[0x8b];
    unaff_x19[0x159] = unaff_x19[0x8e];
    unaff_x19[0x158] = unaff_x19[0x8d];
    unaff_x19[0x15b] = unaff_x19[0x90];
    unaff_x19[0x15a] = unaff_x19[0x8f];
    unaff_x19[0x15d] = unaff_x19[0x92];
    unaff_x19[0x15c] = unaff_x19[0x91];
    unaff_x19[0x14f] = unaff_x19[0x84];
    unaff_x19[0x14e] = unaff_x19[0x83];
    unaff_x19[0x151] = unaff_x19[0x86];
    unaff_x19[0x150] = unaff_x19[0x85];
    unaff_x19[0x153] = unaff_x19[0x88];
    unaff_x19[0x152] = unaff_x19[0x87];
    unaff_x19[0x155] = unaff_x19[0x8a];
    unaff_x19[0x154] = unaff_x19[0x89];
    unaff_x19[0x147] = unaff_x19[0x7c];
    unaff_x19[0x146] = unaff_x19[0x7b];
    unaff_x19[0x149] = unaff_x19[0x7e];
    unaff_x19[0x148] = unaff_x19[0x7d];
    unaff_x19[0x14b] = unaff_x19[0x80];
    unaff_x19[0x14a] = unaff_x19[0x7f];
    *(undefined1 *)((long)unaff_x19 + 0x49b) = 0;
    unaff_x19[0x145] = 1;
    unaff_x19[0x14d] = unaff_x19[0x82];
    unaff_x19[0x14c] = unaff_x19[0x81];
    unaff_x19[0x94] = lVar28 + 0x10;
    unaff_x19[0x95] = (long)(unaff_x19 + 0x145);
    unaff_x19[0x96] = 1;
    *(undefined1 *)(unaff_x19 + 0x144) = 0;
    iVar11 = FUN_1005abe28(unaff_x19 + 0x94);
    if (iVar11 != 0) {
      uVar19 = 6;
      goto LAB_10053c4c8;
    }
    if ((char)unaff_x19[0x144] == '\x03') {
      FUN_100cba81c(unaff_x19 + 0x97);
    }
    FUN_100e068b8(unaff_x19 + 0x145);
    unaff_x19[0x94] = *(long *)unaff_x19[0x4c] + 0x10;
    *(undefined1 *)(unaff_x19 + 0x18e) = 0;
    auVar44 = FUN_1005a38b4(unaff_x19 + 0x94);
    uVar8 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) != 0) {
      uVar19 = 7;
      goto LAB_10053c4c8;
    }
    if ((char)unaff_x19[0x18e] == '\x03') {
      FUN_100c97ff8(unaff_x19 + 0x95);
    }
    if (uVar8 != 0) {
      in_stack_00000170 = uVar8;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62a580 - 1 < 2 ||
           ((bRam000000010b62a580 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                               ), cVar9 != '\0')))) &&
          (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                             ),
          lVar28 = 
          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
          , (uVar8 & 1) != 0)))) {
        in_stack_000001c8 =
             (code *)(
                     ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                     + 0x30);
        in_stack_000000a0 = (char *)&stack0x00000170;
        in_stack_000000a8 =
             (code *)&
                     __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        *(char **)(unaff_x29 + -0x68) = s_Efailed_to_flush_interrupted_tur_108ac0b6e;
        *(char ***)(unaff_x29 + -0x60) = &stack0x000000a0;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
        *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
        in_stack_000001b8 = (code *)(unaff_x29 + -0x78);
        in_stack_000001b0 = (code *)0x1;
        in_stack_000001c0 = (code *)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar28,&stack0x000001b0);
        lVar28 = 
        ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pcStack00000000000000e8 =
               *(code **)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                         + 0x20);
          plStack00000000000000f0 =
               *(long **)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                         + 0x28);
          pcStack00000000000000e0 = (code *)0x2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000e0);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar28,puVar3,puVar2,&stack0x000000e0,&stack0x000001b0);
          }
        }
      }
      else {
        lVar28 = 
        ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000180 =
               *(undefined8 **)
                (
                ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                + 0x20);
          in_stack_00000188 =
               *(undefined8 *)
                (
                ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                + 0x28);
          in_stack_00000178 = (char *)0x2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000178);
          if (iVar11 != 0) {
            plStack00000000000000f8 =
                 (long *)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdc442a3dff0a85edE
                         + 0x30);
            *(ulong **)(unaff_x29 + -0x78) = &stack0x00000170;
            *(undefined1 **)(unaff_x29 + -0x70) =
                 &
                 __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            in_stack_000001a8 = (undefined1 *)(unaff_x29 + -0x78);
            in_stack_000001a0 = s_Efailed_to_flush_interrupted_tur_108ac0b6e;
            in_stack_00000190 = (long *)&stack0x000001a0;
            in_stack_00000198 = &UNK_10b208fd0;
            pcStack00000000000000e8 = (code *)&stack0x00000190;
            pcStack00000000000000e0 = (code *)0x1;
            plStack00000000000000f0 = (long *)0x1;
            in_stack_000001e8 = in_stack_00000180;
            in_stack_000001e0 = in_stack_00000178;
            _uStack00000000000001d0 = *(code **)(lVar28 + 0x60);
            in_stack_000001d8 = *(undefined8 **)(lVar28 + 0x68);
            in_stack_000001b8 = *(code **)(lVar28 + 0x50);
            in_stack_000001c0 = *(code **)(lVar28 + 0x58);
            in_stack_000001b0 = (code *)0x1;
            if (in_stack_000001b8 == (code *)0x0) {
              in_stack_000001b0 = (code *)0x2;
            }
            *(code ***)(unaff_x29 + -0x68) = &stack0x000000e0;
            *(undefined1 *)(unaff_x29 + -0x60) = 1;
            in_stack_000000a0 = (char *)(unaff_x29 + -0x68);
            in_stack_000000a8 = (code *)&DAT_1061c2098;
            in_stack_000001c8 = (code *)0x1;
            if (_uStack00000000000001d0 == (code *)0x0) {
              in_stack_000001c8 = (code *)0x2;
            }
            (**(code **)(puVar2 + 0x20))(puVar3,&stack0x000001b0);
          }
        }
      }
      if ((in_stack_00000170 & 3) == 1) {
        puVar29 = (undefined8 *)(in_stack_00000170 - 1);
        uVar14 = *puVar29;
        puVar13 = *(undefined8 **)(in_stack_00000170 + 7);
        pcVar20 = (code *)*puVar13;
        if (pcVar20 != (code *)0x0) {
          (*pcVar20)(uVar14);
        }
        if (puVar13[1] != 0) {
          _free(uVar14);
        }
        _free(puVar29);
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x49b) = 0;
  }
LAB_10053bb64:
  unaff_x19[0x94] = *(long *)(unaff_x19[0x5b] + 2000) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xa4) = 0;
  FUN_1004f11d0(&stack0x000001b0,unaff_x19 + 0x94);
  pcVar7 = in_stack_000001c8;
  pcVar6 = in_stack_000001c0;
  pcVar22 = in_stack_000001b8;
  pcVar20 = in_stack_000001b0;
  if (in_stack_000001b0 == (code *)0x2) {
    uVar19 = 8;
  }
  else {
    if (((((char)unaff_x19[0xa4] == '\x03') && ((char)unaff_x19[0xa3] == '\x03')) &&
        ((char)unaff_x19[0xa2] == '\x03')) && ((char)unaff_x19[0x99] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x9a);
      if (unaff_x19[0x9b] != 0) {
        (**(code **)(unaff_x19[0x9b] + 0x18))(unaff_x19[0x9c]);
      }
    }
    uVar14 = *(undefined8 *)(unaff_x19[0x5b] + 0x248);
    puVar13 = *(undefined8 **)(unaff_x19[0x5b] + 0x250);
    pcVar30 = (char *)0x1;
    if ((puVar13 != (undefined8 *)0x0) &&
       (pcVar30 = (char *)_malloc(puVar13), pcVar30 == (char *)0x0)) {
      FUN_107c03c64(1,puVar13);
      goto LAB_10053c5d0;
    }
    _memcpy(pcVar30,uVar14,puVar13);
    *(undefined1 *)((long)unaff_x19 + 0x49c) = 1;
    in_stack_000001b8 = pcVar20;
    in_stack_000001c0 = pcVar22;
    in_stack_000001c8 = pcVar6;
    _uStack00000000000001d0 = pcVar7;
    in_stack_000001b0 = (code *)CONCAT44(in_stack_000001b0._4_4_,0x33);
    lVar28 = *(long *)unaff_x19[0x4c];
    lVar21 = unaff_x19[0x5b];
    *(undefined1 *)((long)unaff_x19 + 0x49c) = 0;
    in_stack_000001d8 = puVar13;
    in_stack_000001e0 = pcVar30;
    in_stack_000001e8 = puVar13;
    _memcpy(unaff_x19 + 0x94,&stack0x000001b0,0x1d8);
    unaff_x19[0xcf] = lVar28 + 0x10;
    unaff_x19[0xd0] = lVar21 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x149) = 0;
    iVar11 = FUN_10059e898(unaff_x19 + 0x94);
    if (iVar11 == 0) {
      FUN_100d1ddbc(unaff_x19 + 0x94);
      unaff_x19[0x94] = *(long *)unaff_x19[0x4c] + 0x5a8;
      *(undefined1 *)(unaff_x19 + 0xa2) = 0;
      pcVar30 = (char *)FUN_100fd3e50(unaff_x19 + 0x94);
      if (pcVar30 != (char *)0x0) {
        if ((((char)unaff_x19[0xa2] == '\x03') && ((char)unaff_x19[0xa1] == '\x03')) &&
           ((char)unaff_x19[0x98] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x99);
          if (unaff_x19[0x9a] != 0) {
            (**(code **)(unaff_x19[0x9a] + 0x18))(unaff_x19[0x9b]);
          }
        }
        __ZN10codex_core8guardian31GuardianRejectionCircuitBreaker10clear_turn17h3138867967f8f9a1E
                  (pcVar30 + 0x28,*(undefined8 *)(unaff_x19[0x5b] + 0x248),
                   *(undefined8 *)(unaff_x19[0x5b] + 0x250));
        if (*pcVar30 == '\0') {
          *pcVar30 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar30,extraout_x1_00,1000000000);
        }
        FUN_1060fa678(pcVar30,1,pcVar30);
        *(undefined2 *)((long)unaff_x19 + 0x49c) = 0;
        lVar28 = *(long *)unaff_x19[0x61];
        *(long *)unaff_x19[0x61] = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(unaff_x19 + 0x61);
        }
        if (unaff_x19[0x5e] != 0) {
          _free(unaff_x19[0x5f]);
        }
        lVar28 = *(long *)unaff_x19[0x56];
        *(long *)unaff_x19[0x56] = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x19 + 0x56);
        }
        plVar15 = unaff_x19 + 0x59;
        __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                  (plVar15);
        lVar28 = *(long *)*plVar15;
        *(long *)*plVar15 = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar15);
        }
        puVar12 = (ulong *)unaff_x19[0x5a];
        uVar8 = *puVar12;
        do {
          if ((uVar8 & 0x22) != 0) {
            bVar4 = false;
            in_stack_000001b0 = (code *)0x0;
            goto LAB_10053be88;
          }
          if ((uVar8 & 1) == 0) {
            if (((uint)uVar8 >> 2 & 1) == 0) {
              if ((long)uVar8 < 0) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
                goto LAB_10053c5d0;
              }
              pcStack00000000000000e0 = (code *)(uVar8 + 100);
              bVar4 = true;
            }
            else {
              bVar4 = false;
              pcStack00000000000000e0 = (code *)(uVar8 | 0x20);
            }
          }
          else {
            bVar4 = false;
            pcStack00000000000000e0 = (code *)(uVar8 | 0x24);
          }
          in_stack_000001b0 = (code *)0x1;
          bVar1 = *puVar12 != uVar8;
          uVar8 = *puVar12;
        } while (bVar1);
        *puVar12 = (ulong)pcStack00000000000000e0;
LAB_10053be88:
        if (bVar4) {
          (**(code **)(puVar12[2] + 8))();
        }
        plVar15 = (long *)unaff_x19[0x5a];
        if (*plVar15 == 0xcc) {
          *plVar15 = 0x84;
        }
        else {
          (**(code **)(plVar15[2] + 0x20))();
        }
        plVar15 = (long *)unaff_x19[0x5b];
        lVar28 = *plVar15;
        *plVar15 = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x5b);
        }
        lVar28 = *(long *)unaff_x19[0x5c];
        *(long *)unaff_x19[0x5c] = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(unaff_x19 + 0x5c);
        }
        if (unaff_x19[0x4d] != -0x8000000000000000) {
          func_0x000100df97c8(unaff_x19 + 0x4d);
        }
        do {
          *(undefined1 *)((long)unaff_x19 + 0x49e) = 0;
          *unaff_x28 = 1;
          FUN_100d2dd5c(unaff_x26);
          plVar15 = (long *)unaff_x19[0x37];
          if (plVar15 == (long *)unaff_x19[0x39]) {
            unaff_x19[0x1b] = -0x7fffffffffffffff;
LAB_10053bfd0:
            FUN_100e7c394(unaff_x19 + 0x36);
            if ((*(byte *)((long)unaff_x19 + 0xb9) & 1) != 0) {
              *(undefined1 *)((long)unaff_x19 + 0xba) = 0;
              in_stack_000001d8 = (undefined8 *)unaff_x19[0x31];
              _uStack00000000000001d0 = (code *)unaff_x19[0x30];
              in_stack_000001e8 = (undefined8 *)unaff_x19[0x33];
              in_stack_000001e0 = (char *)unaff_x19[0x32];
              lVar21 = unaff_x19[0x35];
              lVar28 = unaff_x19[0x34];
              in_stack_000001b8 = (code *)unaff_x19[0x2d];
              in_stack_000001b0 = (code *)unaff_x19[0x2c];
              in_stack_000001c8 = (code *)unaff_x19[0x2f];
              in_stack_000001c0 = (code *)unaff_x19[0x2e];
              if (*unaff_x19 != -0x8000000000000000) {
                FUN_100e00278();
              }
              *(undefined1 *)((long)unaff_x19 + 0xbb) = 1;
              unaff_x19[5] = (long)in_stack_000001d8;
              unaff_x19[4] = (long)_uStack00000000000001d0;
              unaff_x19[7] = (long)in_stack_000001e8;
              unaff_x19[6] = (long)in_stack_000001e0;
              unaff_x19[9] = lVar21;
              unaff_x19[8] = lVar28;
              unaff_x19[1] = (long)in_stack_000001b8;
              *unaff_x19 = (long)in_stack_000001b0;
              unaff_x19[3] = (long)in_stack_000001c8;
              unaff_x19[2] = (long)in_stack_000001c0;
            }
            *(undefined1 *)((long)unaff_x19 + 0xbc) = 0;
            if ((*(byte *)((long)unaff_x19 + 0xba) & 1) != 0) {
              FUN_100e00278(unaff_x19 + 0x2c);
            }
            *(undefined1 *)((long)unaff_x19 + 0xba) = 0;
            if (unaff_x19[0x15] == 0) goto LAB_10053c0a8;
            lVar23 = *(long *)unaff_x19[0x14];
            lVar28 = lVar23 + 0x10;
            lVar21 = *(long *)(unaff_x19[0x15] + 0x7b8) + 0x10;
            unaff_x19[0x1e] = lVar28;
            unaff_x19[0x1f] = lVar21;
            *(char *)((long)unaff_x19 + 0x101) = (char)unaff_x19[0x17];
            *(undefined1 *)((long)unaff_x19 + 0x102) = 0;
            *(char *)(unaff_x19 + 0x20) = (char)unaff_x19[0x17];
            unaff_x19[0x1c] = lVar28;
            unaff_x19[0x1d] = lVar21;
            lVar28 = *(long *)(lVar23 + 0x3c0);
            plVar15 = *(long **)(lVar28 + 0x30);
            lVar28 = *(long *)(lVar28 + 0x38);
            unaff_x19[0x18] = (long)plVar15;
            unaff_x19[0x19] = (long)(plVar15 + lVar28 * 2);
            if (plVar15 != plVar15 + lVar28 * 2) goto LAB_10053cdb4;
            goto LAB_10053c0a0;
          }
          unaff_x19[0x37] = (long)(plVar15 + 0x11);
          lVar28 = *plVar15;
          unaff_x19[0x1c] = plVar15[1];
          unaff_x19[0x1b] = lVar28;
          lVar28 = plVar15[6];
          lVar23 = plVar15[9];
          lVar21 = plVar15[8];
          lVar34 = plVar15[3];
          lVar33 = plVar15[2];
          lVar32 = plVar15[5];
          lVar31 = plVar15[4];
          unaff_x19[0x22] = plVar15[7];
          unaff_x19[0x21] = lVar28;
          unaff_x19[0x24] = lVar23;
          unaff_x19[0x23] = lVar21;
          unaff_x19[0x1e] = lVar34;
          unaff_x19[0x1d] = lVar33;
          unaff_x19[0x20] = lVar32;
          unaff_x19[0x1f] = lVar31;
          lVar31 = plVar15[0xd];
          lVar23 = plVar15[0xc];
          lVar21 = plVar15[0xf];
          lVar28 = plVar15[0xe];
          lVar33 = plVar15[0xb];
          lVar32 = plVar15[10];
          unaff_x19[0x2b] = plVar15[0x10];
          unaff_x19[0x28] = lVar31;
          unaff_x19[0x27] = lVar23;
          unaff_x19[0x2a] = lVar21;
          unaff_x19[0x29] = lVar28;
          unaff_x19[0x26] = lVar33;
          unaff_x19[0x25] = lVar32;
          if (unaff_x19[0x1b] == -0x7fffffffffffffff) goto LAB_10053bfd0;
          unaff_x26 = unaff_x19 + 0x3a;
          lVar28 = plVar15[0x10];
          lVar32 = plVar15[0xd];
          lVar31 = plVar15[0xc];
          lVar23 = plVar15[0xf];
          lVar21 = plVar15[0xe];
          lVar36 = plVar15[9];
          lVar35 = plVar15[8];
          lVar34 = plVar15[0xb];
          lVar33 = plVar15[10];
          lVar40 = plVar15[5];
          lVar39 = plVar15[4];
          lVar38 = plVar15[7];
          lVar37 = plVar15[6];
          lVar43 = *plVar15;
          lVar42 = plVar15[3];
          lVar41 = plVar15[2];
          unaff_x19[0x3b] = plVar15[1];
          unaff_x19[0x3a] = lVar43;
          unaff_x19[0x3d] = lVar42;
          unaff_x19[0x3c] = lVar41;
          unaff_x19[0x3f] = lVar40;
          unaff_x19[0x3e] = lVar39;
          unaff_x19[0x41] = lVar38;
          unaff_x19[0x40] = lVar37;
          unaff_x19[0x43] = lVar36;
          unaff_x19[0x42] = lVar35;
          unaff_x19[0x45] = lVar34;
          unaff_x19[0x44] = lVar33;
          unaff_x19[0x47] = lVar32;
          unaff_x19[0x46] = lVar31;
          unaff_x19[0x49] = lVar23;
          unaff_x19[0x48] = lVar21;
          unaff_x19[0x4a] = lVar28;
          unaff_x19[0x4b] = unaff_x19[0x14];
          *(char *)(unaff_x19 + 0x93) = (char)unaff_x19[0x17];
          unaff_x28 = (undefined1 *)((long)unaff_x19 + 0x499);
          *(undefined1 *)((long)unaff_x19 + 0x499) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x49b) = 0x1000000;
          unaff_x19[0x4c] = unaff_x19[0x14];
          unaff_x19[0x5a] = unaff_x19[0x47];
          unaff_x19[0x59] = unaff_x19[0x46];
          unaff_x19[0x5c] = unaff_x19[0x49];
          unaff_x19[0x5b] = unaff_x19[0x48];
          unaff_x19[0x5d] = unaff_x19[0x4a];
          unaff_x19[0x52] = unaff_x19[0x3f];
          unaff_x19[0x51] = unaff_x19[0x3e];
          unaff_x19[0x54] = unaff_x19[0x41];
          unaff_x19[0x53] = unaff_x19[0x40];
          unaff_x19[0x56] = unaff_x19[0x43];
          unaff_x19[0x55] = unaff_x19[0x42];
          unaff_x19[0x58] = unaff_x19[0x45];
          unaff_x19[0x57] = unaff_x19[0x44];
          unaff_x19[0x4e] = unaff_x19[0x3b];
          unaff_x19[0x4d] = *unaff_x26;
          unaff_x19[0x50] = unaff_x19[0x3d];
          unaff_x19[0x4f] = unaff_x19[0x3c];
          *(char *)((long)unaff_x19 + 0x49a) = (char)unaff_x19[0x17];
          pcVar20 = (code *)(unaff_x19 + 0x5e);
          uVar14 = *(undefined8 *)(unaff_x19[0x5b] + 0x248);
          lVar28 = 1;
          lVar21 = *(long *)(unaff_x19[0x5b] + 0x250);
          if ((lVar21 != 0) && (lVar28 = _malloc(lVar21), lVar28 == 0)) {
            FUN_107c03c64(1,lVar21);
            goto LAB_10053c5d0;
          }
          _memcpy(lVar28,uVar14,lVar21);
          unaff_x19[0x5e] = lVar21;
          unaff_x19[0x5f] = lVar28;
          unaff_x19[0x60] = lVar21;
          iVar11 = __ZN10tokio_util4sync18cancellation_token17CancellationToken12is_cancelled17hfcad7db0dfd3f315E
                             (unaff_x19 + 0x59);
          if (iVar11 == 0) goto LAB_10053ac94;
          if (*(ulong *)pcVar20 != 0) {
            _free(unaff_x19[0x5f]);
          }
          FUN_100e02180(unaff_x19 + 0x4d);
        } while( true );
      }
      uVar19 = 10;
    }
    else {
      uVar19 = 9;
    }
  }
  goto LAB_10053c4c8;
LAB_10053ac94:
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bRam000000010b62a550 - 1 < 2 ||
       ((bRam000000010b62a550 != 0 &&
        (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
                           ), cVar9 != '\0')))))) &&
     (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
                        ),
     lVar28 = 
     ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
     , (uVar8 & 1) != 0)) {
    plStack00000000000000f8 =
         (long *)(
                 ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
                 + 0x30);
    *(undefined **)(unaff_x29 + -0x68) = &UNK_108ca39ab;
    *(undefined8 *)(unaff_x29 + -0x60) = 0x2b;
    *(long **)(unaff_x29 + -0x78) = unaff_x19 + 0x5d;
    in_stack_000001b0 = (code *)(unaff_x29 + -0x68);
    in_stack_000001b8 = (code *)&UNK_10b208fd0;
    in_stack_000001c0 = (code *)(unaff_x29 + -0x78);
    in_stack_000001c8 = (code *)&UNK_10b2170a0;
    in_stack_000001d8 = (undefined8 *)&UNK_10b2170c0;
    pcStack00000000000000e8 = (code *)&stack0x000001b0;
    pcStack00000000000000e0 = (code *)0x1;
    plStack00000000000000f0 = (long *)0x3;
    _uStack00000000000001d0 = pcVar20;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar28,&stack0x000000e0);
    lVar28 = 
    ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000000a8 =
           *(code **)(
                     ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
                     + 0x20);
      in_stack_000000b0 =
           *(code **)(
                     ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
                     + 0x28);
      in_stack_000000a0 = (char *)0x5;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000a0);
      if (iVar11 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar28,puVar3,puVar2,&stack0x000000a0,&stack0x000000e0);
      }
    }
  }
  else {
    lVar28 = 
    ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000090 =
           *(undefined8 **)
            (
            ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
            + 0x20);
      in_stack_00000098 =
           *(undefined8 *)
            (
            ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
            + 0x28);
      in_stack_00000088 = (char *)0x5;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000088);
      if (iVar11 != 0) {
        in_stack_000000b8 =
             (code *)(
                     ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h53cf59aeb6f8728fE
                     + 0x30);
        in_stack_000001a0 = &UNK_108ca39ab;
        in_stack_000001a8 = (undefined1 *)0x2b;
        in_stack_00000190 = unaff_x19 + 0x5d;
        pcStack00000000000000e0 = (code *)&stack0x000001a0;
        pcStack00000000000000e8 = (code *)&UNK_10b208fd0;
        plStack00000000000000f0 = (long *)&stack0x00000190;
        plStack00000000000000f8 = (long *)&UNK_10b2170a0;
        in_stack_00000108 = &UNK_10b2170c0;
        in_stack_000000a8 = (code *)&stack0x000000e0;
        in_stack_000000a0 = (char *)0x1;
        in_stack_000000b0 = (code *)0x3;
        in_stack_000001e8 = in_stack_00000090;
        in_stack_000001e0 = in_stack_00000088;
        _uStack00000000000001d0 = *(code **)(lVar28 + 0x60);
        in_stack_000001d8 = *(undefined8 **)(lVar28 + 0x68);
        in_stack_000001b8 = *(code **)(lVar28 + 0x50);
        in_stack_000001c0 = *(code **)(lVar28 + 0x58);
        in_stack_000001b0 = (code *)0x1;
        if (in_stack_000001b8 == (code *)0x0) {
          in_stack_000001b0 = (code *)0x2;
        }
        *(char ***)(unaff_x29 + -0x78) = &stack0x000000a0;
        *(undefined1 *)(unaff_x29 + -0x70) = 1;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
        *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
        in_stack_000001c8 = (code *)0x1;
        if (_uStack00000000000001d0 == (code *)0x0) {
          in_stack_000001c8 = (code *)0x2;
        }
        in_stack_00000100 = pcVar20;
        (**(code **)(puVar2 + 0x20))(puVar3,&stack0x000001b0);
      }
    }
  }
  __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
            (unaff_x19 + 0x59);
  __ZN10codex_core13turn_metadata17TurnMetadataState26cancel_git_enrichment_task17h93a5efa85af081f4E
            (*(long *)(unaff_x19[0x5b] + 0x7b0) + 0x10);
  *(undefined1 *)((long)unaff_x19 + 0x49e) = 0;
  unaff_x19[0x61] = unaff_x19[0x57];
  unaff_x19[0x62] = unaff_x19[0x58];
  *(undefined1 *)(unaff_x19 + 0x94) = 0;
  in_stack_000000a0 = (char *)(unaff_x19[0x56] + 0x10);
  in_stack_000000a8 = (code *)(*(ulong *)in_stack_000000a0 >> 2);
  uStack00000000000000d8 = 0;
  in_stack_000000d0 = (char *)0x0;
  in_stack_000000b8 = (code *)0x0;
  in_stack_000000c0 = (code *)0x0;
  in_stack_000000b0 = (code *)0x0;
  __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(&stack0x000000e0,0,100000000,&UNK_10b2170e0);
  pbVar24 = (byte *)(unaff_x19 + 0x94);
  in_stack_000001b8 = in_stack_000000a8;
  in_stack_000001b0 = (code *)in_stack_000000a0;
  in_stack_000001c8 = in_stack_000000b8;
  in_stack_000001c0 = in_stack_000000b0;
  in_stack_000001e8 = (undefined8 *)CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
  in_stack_000001d8 = in_stack_000000c8;
  _uStack00000000000001d0 = in_stack_000000c0;
  in_stack_000001e0 = in_stack_000000d0;
  plVar15 = unaff_x19 + 0x95;
  unaff_x19[0x96] = (long)in_stack_000000a8;
  *plVar15 = (long)in_stack_000000a0;
  unaff_x19[0x98] = (long)in_stack_000000b8;
  unaff_x19[0x97] = (long)in_stack_000000b0;
  unaff_x19[0x9a] = (long)in_stack_000000c8;
  unaff_x19[0x99] = (long)in_stack_000000c0;
  unaff_x19[0x9c] = (long)in_stack_000001e8;
  unaff_x19[0x9b] = (long)in_stack_000000d0;
  unaff_x19[0xa6] = in_stack_00000128;
  unaff_x19[0xa5] = in_stack_00000120;
  unaff_x19[0xa8] = in_stack_00000138;
  unaff_x19[0xa7] = in_stack_00000130;
  unaff_x19[0xaa] = in_stack_00000148;
  unaff_x19[0xa9] = in_stack_00000140;
  unaff_x19[0x9e] = (long)pcStack00000000000000e8;
  unaff_x19[0x9d] = (long)pcStack00000000000000e0;
  unaff_x19[0xa0] = (long)plStack00000000000000f8;
  unaff_x19[0x9f] = (long)plStack00000000000000f0;
  unaff_x19[0xa2] = (long)in_stack_00000108;
  unaff_x19[0xa1] = (long)in_stack_00000100;
  unaff_x19[0xa4] = in_stack_00000118;
  unaff_x19[0xa3] = in_stack_00000110;
  unaff_x19[0xab] = (long)pbVar24;
  unaff_x19[0xac] = (long)plVar15;
  lVar28 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  if (*(char *)(lVar28 + 0x48) != '\x01') {
    if (*(char *)(lVar28 + 0x48) == '\x02') {
      FUN_107c05e20(&UNK_10b4cce20);
      goto LAB_10053c5d0;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar28,&DAT_100c35d48)
    ;
    *(undefined1 *)(lVar28 + 0x48) = 1;
  }
  if (*(char *)(lVar28 + 0x44) == '\x01' && *(char *)(lVar28 + 0x45) == '\0') {
    FUN_10610bbb4(*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
  }
  else {
    if ((*(uint *)(lVar28 + 0x38) & 1) == 0) {
      uVar10 = FUN_1060fcce0();
      uVar8 = extraout_x1;
    }
    else {
      uVar10 = *(uint *)(lVar28 + 0x3c);
      uVar8 = (ulong)*(uint *)(lVar28 + 0x40);
    }
    uVar10 = uVar10 ^ uVar10 << 0x11;
    uVar17 = (uint)uVar8;
    uVar10 = (uint)(uVar8 >> 0x10) & 0xffff ^ uVar10 >> 7 ^ uVar17 ^ uVar10;
    *(undefined4 *)(lVar28 + 0x38) = 1;
    *(uint *)(lVar28 + 0x3c) = uVar17;
    *(uint *)(lVar28 + 0x40) = uVar10;
    bVar18 = *pbVar24;
    if (-1 < (int)(uVar10 + uVar17)) {
      bVar5 = bVar18 & 1;
      if ((bVar18 & 1) == 0) {
        in_stack_000000b8 = (code *)(unaff_x19 + 0x97);
        in_stack_000000a0 = (char *)*plVar15;
        in_stack_000000a8 = (code *)(unaff_x19 + 0x9c);
        in_stack_000000b0 = (code *)(unaff_x19 + 0x96);
        iVar11 = FUN_1060fb82c(&stack0x000000a0,*unaff_x20);
        iVar27 = 0;
        bVar18 = 1;
        if (iVar11 != 0) {
          bVar18 = *pbVar24;
          goto LAB_10053b180;
        }
      }
      else {
LAB_10053b180:
        if ((bVar18 >> 1 & 1) != 0) goto LAB_10053b1ac;
        uVar8 = func_0x000106114748(unaff_x19 + 0x9d);
        iVar27 = 1;
        bVar18 = 2;
        if ((uVar8 & 1) != 0) goto LAB_10053c4c4;
      }
LAB_10053b19c:
      *pbVar24 = *pbVar24 | bVar18;
LAB_10053b1b4:
      pcStack00000000000000e0 = (code *)unaff_x19[0x95];
      pcStack00000000000000e8 = (code *)(unaff_x19 + 0x9c);
      plStack00000000000000f0 = unaff_x19 + 0x96;
      plStack00000000000000f8 = unaff_x19 + 0x97;
      FUN_1060fb5d4(&stack0x000000e0);
      if (unaff_x19[0x99] != 0) {
        (**(code **)(unaff_x19[0x99] + 0x18))(unaff_x19[0x9a]);
      }
      FUN_100de8a5c(unaff_x19 + 0x9d);
      if (iVar27 != 0) {
        if (iVar27 != 1) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b217110);
          goto LAB_10053c5d0;
        }
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          unaff_x22 = (long *)&
                              __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
          ;
          if (((bRam000000010b62a568 - 1 < 2) ||
              ((bRam000000010b62a568 != 0 &&
               (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
                                  ), cVar9 != '\0')))) &&
             (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
                                ), (uVar8 & 1) != 0)) goto code_r0x00010053b234;
        }
        lVar28 = 
        ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000158 =
               *(undefined8 **)
                (
                ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
                + 0x20);
          in_stack_00000160 =
               *(undefined8 *)
                (
                ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
                + 0x28);
          in_stack_00000150 = (char *)0x2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000150);
          if (iVar11 != 0) {
            in_stack_000000b8 =
                 (code *)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
                         + 0x30);
            pcStack00000000000000e0 = (code *)(unaff_x19 + 0x5e);
            pcStack00000000000000e8 = (code *)&DAT_10112965c;
            plStack00000000000000f0 = (long *)&UNK_108c98140;
            plStack00000000000000f8 =
                 (long *)&
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            in_stack_000001a8 = (undefined1 *)&stack0x000000e0;
            in_stack_000001a0 = s_task___didn_t_complete_gracefull_108ac0b3f;
            in_stack_00000190 = (long *)&stack0x000001a0;
            in_stack_00000198 = &UNK_10b208fd0;
            in_stack_000000a8 = (code *)&stack0x00000190;
            in_stack_000000a0 = (char *)0x1;
            in_stack_000000b0 = (code *)0x1;
            in_stack_000001e8 = in_stack_00000158;
            in_stack_000001e0 = in_stack_00000150;
            _uStack00000000000001d0 = *(code **)(lVar28 + 0x60);
            in_stack_000001d8 = *(undefined8 **)(lVar28 + 0x68);
            in_stack_000001b8 = *(code **)(lVar28 + 0x50);
            in_stack_000001c0 = *(code **)(lVar28 + 0x58);
            in_stack_000001b0 = (code *)0x1;
            if (in_stack_000001b8 == (code *)0x0) {
              in_stack_000001b0 = (code *)0x2;
            }
            *(char ***)(unaff_x29 + -0x78) = &stack0x000000a0;
            *(undefined1 *)(unaff_x29 + -0x70) = 1;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
            *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
            in_stack_000001c8 = (code *)0x1;
            if (_uStack00000000000001d0 == (code *)0x0) {
              in_stack_000001c8 = (code *)0x2;
            }
            (**(code **)(puVar2 + 0x20))(puVar3,&stack0x000001b0);
          }
        }
      }
      goto LAB_10053b4a4;
    }
    bVar5 = bVar18 & 2;
    if ((bVar18 >> 1 & 1) == 0) {
      iVar11 = func_0x000106114748(unaff_x19 + 0x9d);
      iVar27 = 1;
      bVar18 = 2;
      if (iVar11 == 0) goto LAB_10053b19c;
      bVar18 = *pbVar24;
    }
    if ((bVar18 & 1) == 0) {
      in_stack_000000b8 = (code *)(unaff_x19 + 0x97);
      in_stack_000000a0 = (char *)*plVar15;
      in_stack_000000a8 = (code *)(unaff_x19 + 0x9c);
      in_stack_000000b0 = (code *)(unaff_x19 + 0x96);
      uVar8 = FUN_1060fb82c(&stack0x000000a0,*unaff_x20);
      iVar27 = 0;
      bVar18 = 1;
      if ((uVar8 & 1) == 0) goto LAB_10053b19c;
      goto LAB_10053c4c4;
    }
LAB_10053b1ac:
    iVar27 = 2;
    if (bVar5 != 0) goto LAB_10053b1b4;
  }
LAB_10053c4c4:
  uVar19 = 3;
LAB_10053c4c8:
  *unaff_x28 = uVar19;
  uVar14 = 1;
  uVar19 = 4;
  goto LAB_10053cd80;
code_r0x00010053b234:
  param_1 = (long *)(
                    ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
                    + 0x30);
  in_stack_000001b0 = (code *)(unaff_x19 + 0x5e);
  in_stack_000001b8 = (code *)&DAT_10112965c;
  in_stack_000001c0 = (code *)&UNK_108c98140;
  in_stack_000001c8 =
       (code *)&
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  param_2 = 
  ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_17handle_task_abort28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c40e66942750118E
  ;
  goto code_r0x00010053b260;
  while( true ) {
    lVar28 = unaff_x19[0x1a];
    puVar13 = (undefined8 *)unaff_x19[0x1b];
    pcVar20 = (code *)*puVar13;
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(lVar28);
    }
    if (puVar13[1] != 0) {
      _free(lVar28);
    }
    plVar15 = (long *)unaff_x19[0x18];
    if (plVar15 == (long *)unaff_x19[0x19]) break;
LAB_10053cdb4:
    unaff_x19[0x18] = (long)(plVar15 + 2);
    in_stack_000001c0 = (code *)unaff_x19[0x1d];
    in_stack_000001b0 = (code *)(unaff_x19[0x1c] + 0x140);
    in_stack_000001b8 = (code *)(unaff_x19[0x1c] + 0x198);
    in_stack_000001c8 = (code *)CONCAT71(in_stack_000001c8._1_7_,(char)unaff_x19[0x20]);
    auVar44 = (**(code **)(plVar15[1] + 0x28))
                        (*plVar15 + (*(long *)(plVar15[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         &stack0x000001b0);
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar44;
    uVar8 = (**(code **)(auVar44._8_8_ + 0x18))();
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)((long)unaff_x19 + 0x102) = 3;
      uVar14 = 1;
      uVar19 = 5;
      goto LAB_10053cd80;
    }
  }
LAB_10053c0a0:
  *(undefined1 *)((long)unaff_x19 + 0x102) = 1;
LAB_10053c0a8:
  if (((*(byte *)((long)unaff_x19 + 0xb9) & 1) != 0) || ((char)unaff_x19[0x17] == '\0')) {
    in_stack_000001b8 = (code *)0x0;
    if (unaff_x19[0x15] != 0) {
      in_stack_000001b8 = (code *)(unaff_x19[0x15] + 0x10);
    }
    in_stack_000001b0 = (code *)0x7;
    auVar44 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                        (unaff_x19[0x14],&stack0x000001b0);
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar44;
    auVar44 = (**(code **)(auVar44._8_8_ + 0x18))();
    pcVar30 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) != 0) {
      uVar14 = 1;
      uVar19 = 6;
      goto LAB_10053cd80;
    }
    lVar28 = unaff_x19[0x18];
    puVar13 = (undefined8 *)unaff_x19[0x19];
    pcVar20 = (code *)*puVar13;
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(lVar28);
    }
    if (puVar13[1] != 0) {
      _free(lVar28);
    }
    if (pcVar30 != (char *)0x0) {
      in_stack_00000088 = pcVar30;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62a4f0 - 1 < 2 ||
           ((bRam000000010b62a4f0 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
                               ), cVar9 != '\0')))))) &&
         (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
                            ), (uVar8 & 1) != 0)) {
        in_stack_000001c8 =
             (code *)(
                     ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
                     + 0x30);
        pcStack00000000000000e0 = (code *)&stack0x00000088;
        pcStack00000000000000e8 =
             __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        in_stack_000000a8 = (code *)&stack0x000000e0;
        in_stack_000000a0 = s__failed_to_apply_goal_runtime_ab_108ac0aa7;
        in_stack_00000178 = (char *)&stack0x000000a0;
        in_stack_00000180 = (undefined8 *)&UNK_10b208fd0;
        in_stack_000001b8 = (code *)&stack0x00000178;
        in_stack_000001b0 = (code *)0x1;
        in_stack_000001c0 = (code *)0x1;
        FUN_10053ce94(&stack0x000001b0);
      }
      else {
        lVar28 = 
        ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000078 =
               *(code **)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
                         + 0x20);
          in_stack_00000080 =
               *(long **)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
                         + 0x28);
          in_stack_00000070 = (code *)0x2;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000070);
          if (iVar11 != 0) {
            in_stack_000001c8 =
                 (code *)(
                         ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_15abort_all_tasks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3b369282c08927c2E
                         + 0x30);
            in_stack_000000a0 = (char *)&stack0x00000088;
            in_stack_000000a8 =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            in_stack_00000180 = &stack0x000000a0;
            in_stack_00000178 = s__failed_to_apply_goal_runtime_ab_108ac0aa7;
            in_stack_00000150 = (char *)&stack0x00000178;
            in_stack_00000158 = (undefined8 *)&UNK_10b208fd0;
            in_stack_000001b8 = (code *)&stack0x00000150;
            in_stack_000001b0 = (code *)0x1;
            in_stack_000001c0 = (code *)0x1;
            pcStack00000000000000e8 = in_stack_00000078;
            pcStack00000000000000e0 = in_stack_00000070;
            plStack00000000000000f0 = in_stack_00000080;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar28,puVar3,puVar2,&stack0x000000e0,&stack0x000001b0);
          }
        }
      }
      (*(code *)**(undefined8 **)in_stack_00000088)();
    }
  }
  if (*unaff_x19 != -0x8000000000000000) {
    *(undefined1 *)((long)unaff_x19 + 0xbb) = 0;
    unaff_x19[0x1d] = unaff_x19[5];
    unaff_x19[0x1c] = unaff_x19[4];
    unaff_x19[0x1f] = unaff_x19[7];
    unaff_x19[0x1e] = unaff_x19[6];
    unaff_x19[0x21] = unaff_x19[9];
    unaff_x19[0x20] = unaff_x19[8];
    unaff_x19[0x19] = unaff_x19[1];
    unaff_x19[0x18] = *unaff_x19;
    unaff_x19[0x1b] = unaff_x19[3];
    unaff_x19[0x1a] = unaff_x19[2];
    unaff_x19[0x22] = *(long *)unaff_x19[0x14] + 0x6f8;
    unaff_x19[0x23] = (long)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0x33) = 0;
    unaff_x19[0x24] = unaff_x19[0x21] + 0x10;
    *(undefined1 *)(unaff_x19 + 0x32) = 0;
    pcVar30 = (char *)FUN_100fd3e50(unaff_x19 + 0x24);
    if (pcVar30 == (char *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x33) = 3;
      uVar14 = 1;
      uVar19 = 7;
      goto LAB_10053cd80;
    }
    if ((((char)unaff_x19[0x32] == '\x03') && ((char)unaff_x19[0x31] == '\x03')) &&
       ((char)unaff_x19[0x28] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x29);
      if (unaff_x19[0x2a] != 0) {
        (**(code **)(unaff_x19[0x2a] + 0x18))(unaff_x19[0x2b]);
      }
    }
    __ZN10codex_core5state4turn9TurnState21clear_pending_waiters17h86772ca264df5230E(pcVar30 + 0x28)
    ;
    uVar14 = *(undefined8 *)(pcVar30 + 0x38);
    pcVar30[0x38] = '\0';
    pcVar30[0x39] = '\0';
    pcVar30[0x3a] = '\0';
    pcVar30[0x3b] = '\0';
    pcVar30[0x3c] = '\0';
    pcVar30[0x3d] = '\0';
    pcVar30[0x3e] = '\0';
    pcVar30[0x3f] = '\0';
    FUN_100e37258(*(undefined8 *)(pcVar30 + 0x30),uVar14);
    if (*pcVar30 == '\0') {
      *pcVar30 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar30,extraout_x1_01,1000000000);
    }
    FUN_1060fa678(pcVar30,1,pcVar30);
    *(undefined1 *)(unaff_x19 + 0x33) = 1;
    FUN_100e00278(unaff_x19 + 0x18);
  }
  if (((char)unaff_x19[0x17] == '\0') && ((*(byte *)((long)unaff_x19 + 0xb9) & 1) != 0)) {
    lVar28 = unaff_x19[0x14];
    unaff_x19[0x18] = lVar28;
    plVar15 = unaff_x19 + 0xb0d;
    *(undefined1 *)plVar15 = 0;
    pcStack00000000000000e0 = (code *)0x0;
    pcStack00000000000000e8 = (code *)0x0;
    iVar11 = _getentropy(&stack0x000000e0,0x10);
    if (iVar11 != 0) {
      piVar16 = (int *)___error();
      iVar11 = 0x10001;
      if (0 < *piVar16) {
        iVar11 = -*piVar16;
      }
      in_stack_00000178 = (char *)CONCAT44(in_stack_00000178._4_4_,iVar11);
      in_stack_000001b0 = (code *)&stack0x00000178;
      in_stack_000001b8 =
           (code *)&
                   __ZN62__LT_getrandom__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hbded66845035e9f5E
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__could_not_retrieve_random_bytes_108b3c856,&stack0x000001b0,&UNK_10b4dc178);
LAB_10053c5d0:
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x10053c5d4);
      (*pcVar20)();
    }
    uVar8 = ((ulong)pcStack00000000000000e8 & 0xff00ff00ff000f00 | 0x4000) >> 8 |
            ((ulong)pcStack00000000000000e8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar25 = ((ulong)pcStack00000000000000e0 & 0x3f00ff00ff00ff00 | 0x8000000000000000) >> 8 |
             ((ulong)pcStack00000000000000e0 & 0xff00ff00ff00ff) << 8;
    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
    unaff_x19[0x19] = uVar8 >> 0x20 | uVar8 << 0x20;
    unaff_x19[0x1a] = uVar25 >> 0x20 | uVar25 << 0x20;
    pcStack00000000000000e0 = (code *)0x0;
    pcStack00000000000000e8 = (code *)0x1;
    plStack00000000000000f0 = (long *)0x0;
    FUN_10624142c(&stack0x000001b0,unaff_x19 + 0x19,0);
    thunk_FUN_108855060(&stack0x000000e0,0,0x24,1,1);
    pcVar20 = pcStack00000000000000e8 + (long)plStack00000000000000f0;
    *(code **)(pcVar20 + 8) = in_stack_000001b8;
    *(code **)pcVar20 = in_stack_000001b0;
    *(code **)(pcVar20 + 0x18) = in_stack_000001c8;
    *(code **)(pcVar20 + 0x10) = in_stack_000001c0;
    *(undefined4 *)(pcVar20 + 0x20) = uStack00000000000001d0;
    in_stack_000000b0 = (code *)((long)plStack00000000000000f0 + 0x24);
    in_stack_000000a8 = pcStack00000000000000e8;
    in_stack_000000a0 = (char *)pcStack00000000000000e0;
    unaff_x19[0x1c] = (long)pcStack00000000000000e8;
    unaff_x19[0x1b] = (long)pcStack00000000000000e0;
    unaff_x19[0x1d] = (long)in_stack_000000b0;
    unaff_x19[0x1e] = lVar28;
    *(undefined1 *)(unaff_x19 + 0x24) = 0;
    uVar8 = FUN_10053fea4(unaff_x19 + 0x1b);
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)plVar15 = 3;
      uVar14 = 1;
      uVar19 = 8;
      goto LAB_10053cd80;
    }
    FUN_100d77d58(unaff_x19 + 0x1b);
    *(undefined1 *)plVar15 = 1;
  }
  plVar15 = (long *)unaff_x19[0x15];
  if (plVar15 != (long *)0x0) {
    lVar28 = *plVar15;
    *plVar15 = lVar28 + -1;
    LORelease();
    if (lVar28 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
  }
  uVar14 = 0;
  *(undefined1 *)((long)unaff_x19 + 0xbb) = 0;
  uVar19 = 1;
LAB_10053cd80:
  *(undefined1 *)((long)unaff_x19 + 0xbd) = uVar19;
  return uVar14;
}

