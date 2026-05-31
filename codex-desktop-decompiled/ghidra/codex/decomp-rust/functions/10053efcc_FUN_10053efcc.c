
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10053efcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 uVar8;
  code *pcVar9;
  long unaff_x19;
  long lVar10;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  
  *(char **)(unaff_x29 + -0xa0) = s_2failed_to_apply_goal_runtime_tu_108ac0ad4;
  *(undefined8 **)(unaff_x29 + -0x98) = &stack0x00000070;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
  FUN_10053fd68(&stack0x00000200);
  (**(code **)**(undefined8 **)(unaff_x29 + -0xc0))();
  uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x248);
  lVar10 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x250);
  if (lVar10 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lVar10);
    if (lVar6 == 0) {
      FUN_107c03c64(1,lVar10);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10053f518);
      (*pcVar9)();
    }
  }
  _memcpy(lVar6,uVar14,lVar10);
  *(undefined2 *)(unaff_x19 + 0x2e6) = 0x100;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x2b0);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x2c8);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x2c0);
  *(undefined8 *)(unaff_x26 + 0x28) = *(undefined8 *)(unaff_x19 + 0x2b8);
  *(undefined8 *)(unaff_x26 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x26 + 0x38) = uVar16;
  *(undefined8 *)(unaff_x26 + 0x30) = uVar15;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x2d0);
  *(undefined8 *)(unaff_x26 + 0x48) = *(undefined8 *)(unaff_x19 + 0x2d8);
  *(undefined8 *)(unaff_x26 + 0x40) = uVar14;
  lVar10 = *(long *)(unaff_x19 + 0x30);
  lVar6 = **(long **)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x19 + 0x2e7) = 0;
  _memcpy(unaff_x19 + 0x2e8,&stack0x00000200,0x1d8);
  *(long *)(unaff_x19 + 0x4c0) = lVar6 + 0x10;
  *(long *)(unaff_x19 + 0x4c8) = lVar10 + 0x10;
  *(undefined1 *)(unaff_x19 + 0x890) = 0;
  iVar4 = FUN_10059e898(unaff_x19 + 0x2e8);
  if (iVar4 != 0) {
    uVar14 = 1;
    uVar8 = 0xf;
    goto LAB_10053f9a8;
  }
  FUN_100d1ddbc(unaff_x19 + 0x2e8);
  *(long *)(unaff_x19 + 0x2e8) = **(long **)(unaff_x19 + 0x28) + 0x5a8;
  *(undefined1 *)(unaff_x19 + 0x358) = 0;
  pcVar7 = (char *)FUN_100fd3e50(unaff_x19 + 0x2e8);
  if (pcVar7 == (char *)0x0) {
    uVar14 = 1;
    uVar8 = 0x10;
    goto LAB_10053f9a8;
  }
  if (((*(char *)(unaff_x19 + 0x358) == '\x03') && (*(char *)(unaff_x19 + 0x350) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x308) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x310);
    if (*(long *)(unaff_x19 + 0x318) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x318) + 0x18))(*(undefined8 *)(unaff_x19 + 800));
    }
  }
  __ZN10codex_core8guardian31GuardianRejectionCircuitBreaker10clear_turn17h3138867967f8f9a1E
            (pcVar7 + 0x28,*(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x248),
             *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x250));
  if (*pcVar7 == '\0') {
    *pcVar7 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar7,extraout_x1,1000000000);
  }
  FUN_1060fa678(pcVar7,1,pcVar7);
  if ((*(byte *)(unaff_x19 + 0x2e1) & 1) == 0) {
LAB_10053f36c:
    *(undefined1 *)(unaff_x19 + 0x2e7) = 0;
    plVar13 = *(long **)(unaff_x19 + 0xa0);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      *plVar13 = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6b4c();
      }
    }
    if ((*(byte *)(unaff_x19 + 0x2e5) & 1) != 0) {
      uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
      FUN_100e37258(uVar14,*(undefined8 *)(unaff_x19 + 0x60));
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        _free(uVar14);
      }
    }
  }
  else {
    *(long *)(unaff_x19 + 0x2e8) = **(long **)(unaff_x19 + 0x28) + 0x1118;
    *(undefined1 *)(unaff_x19 + 0x358) = 0;
    auVar17 = FUN_100fd3e50(unaff_x19 + 0x2e8);
    uVar14 = auVar17._8_8_;
    pcVar7 = auVar17._0_8_;
    if (pcVar7 == (char *)0x0) {
      uVar14 = 1;
      uVar8 = 0x11;
      goto LAB_10053f9a8;
    }
    if (((*(char *)(unaff_x19 + 0x358) == '\x03') && (*(char *)(unaff_x19 + 0x350) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x308) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x310);
      uVar14 = extraout_x1_00;
      if (*(long *)(unaff_x19 + 0x318) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x318) + 0x18))(*(undefined8 *)(unaff_x19 + 800));
        uVar14 = extraout_x1_01;
      }
    }
    plVar13 = (long *)(pcVar7 + 0x28);
    if (((*plVar13 == -0x8000000000000000) || (*(long *)(pcVar7 + 0x58) != 0)) ||
       ((*(long *)(unaff_x19 + 0xa0) == 0 ||
        (*(long *)(pcVar7 + 0x70) != *(long *)(unaff_x19 + 0xa0))))) {
      bVar11 = false;
      cVar3 = *pcVar7;
      if (cVar3 == '\0') {
        *pcVar7 = '\x01';
      }
    }
    else {
      FUN_100e00278(plVar13);
      *plVar13 = -0x8000000000000000;
      bVar11 = true;
      cVar3 = *pcVar7;
      uVar14 = extraout_x1_02;
      if (cVar3 == '\0') {
        *pcVar7 = '\x01';
      }
    }
    if (cVar3 != '\0') {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar14,1000000000);
    }
    FUN_1060fa678(pcVar7,1,pcVar7);
    if (bVar11) {
      in_stack_00000070 = 6;
      auVar17 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                          (*(undefined8 *)(unaff_x19 + 0x28),&stack0x00000070);
      *(undefined1 (*) [16])(unaff_x19 + 0x2e8) = auVar17;
      auVar17 = (**(code **)(auVar17._8_8_ + 0x18))();
      if ((auVar17._0_8_ & 1) != 0) {
        uVar14 = 1;
        uVar8 = 0x12;
        goto LAB_10053f9a8;
      }
      uVar14 = *(undefined8 *)(unaff_x19 + 0x2e8);
      puVar12 = *(undefined8 **)(unaff_x19 + 0x2f0);
      pcVar9 = (code *)*puVar12;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar14);
      }
      if (puVar12[1] != 0) {
        _free(uVar14);
      }
      if (auVar17._8_8_ != 0) {
        *(long *)(unaff_x29 + -0xe0) = auVar17._8_8_;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b62a508 - 1 < 2 ||
             ((bRam000000010b62a508 != 0 &&
              (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
                                 ), cVar3 != '\0')))) &&
            (uVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
                               ), (uVar5 & 1) != 0)))) {
          in_stack_00000088 =
               ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
               + 0x30;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
          *(code **)(unaff_x29 + -0x98) =
               __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
          ;
          *(char **)(unaff_x29 + -0x78) = s_3failed_to_apply_goal_runtime_ma_108ac0b09;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xa0;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x78;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
          in_stack_00000078 = unaff_x29 + -0xb0;
          in_stack_00000070 = 1;
          in_stack_00000080 = 1;
          FUN_10053faf0(&stack0x00000070);
        }
        else {
          lVar10 = 
          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar14 = *(undefined8 *)
                      (
                      ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
                      + 0x20);
            uVar15 = *(undefined8 *)
                      (
                      ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0xd8) = 2;
            *(undefined8 *)(unaff_x29 + -0xd0) = uVar14;
            *(undefined8 *)(unaff_x29 + -200) = uVar15;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xd8);
            if (iVar4 != 0) {
              in_stack_00000088 =
                   ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_16on_task_finished28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1666402ba3b3b121E
                   + 0x30;
              *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xe0;
              *(code **)(unaff_x29 + -0x70) =
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              *(char **)(unaff_x29 + -0xb0) = s_3failed_to_apply_goal_runtime_ma_108ac0b09;
              *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x78;
              *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xb0;
              *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
              in_stack_00000078 = unaff_x29 + -0xc0;
              in_stack_00000070 = 1;
              in_stack_00000080 = 1;
              uVar14 = *(undefined8 *)(unaff_x26 + 0x200);
              *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x26 + 0x208);
              *(undefined8 *)(unaff_x29 + -0xa0) = uVar14;
              *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -200);
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar10,puVar2,puVar1,unaff_x29 + -0xa0,&stack0x00000070);
            }
          }
        }
        (**(code **)**(undefined8 **)(unaff_x29 + -0xe0))();
      }
      goto LAB_10053f36c;
    }
    *(undefined1 *)(unaff_x19 + 0x2e7) = 0;
    plVar13 = *(long **)(unaff_x19 + 0xa0);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      *plVar13 = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6b4c();
      }
    }
    if ((*(byte *)(unaff_x19 + 0x2e5) & 1) != 0) {
      FUN_100e5bd48(unaff_x19 + 0x50);
    }
  }
  *(undefined2 *)(unaff_x19 + 0x2e5) = 0;
  lVar10 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
  }
  uVar14 = 0;
  uVar8 = 1;
LAB_10053f9a8:
  *(undefined1 *)(unaff_x19 + 0x2e0) = uVar8;
  return uVar14;
}

