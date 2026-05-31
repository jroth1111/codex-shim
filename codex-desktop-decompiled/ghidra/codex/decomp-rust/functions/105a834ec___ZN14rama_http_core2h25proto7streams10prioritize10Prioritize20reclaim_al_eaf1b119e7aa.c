
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize20reclaim_all_capacity17h9b0c73ff0c098359E
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  int ***pppiVar18;
  undefined *puVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  int ***unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  int iVar24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  code *unaff_x30;
  long lVar25;
  undefined1 auVar26 [12];
  undefined1 auStack_218 [244];
  undefined4 uStack_124;
  undefined1 auStack_120 [8];
  int ***pppiStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f0 [8];
  int ***pppiStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  int **ppiStack_c8;
  undefined *puStack_c0;
  long **pplStack_b8;
  undefined *puStack_b0;
  undefined4 *puStack_a8;
  undefined *puStack_a0;
  long **pplStack_98;
  undefined *puStack_90;
  int *piStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  uint uStack_28;
  int iStack_24;
  int *piStack_20;
  undefined *puStack_18;
  
  uStack_28 = *(uint *)(param_2 + 1);
  iStack_24 = *(int *)((long)param_2 + 0xc);
  if ((((ulong)uStack_28 < *(ulong *)(*param_2 + 0x10)) &&
      (plVar21 = (long *)(*(long *)(*param_2 + 8) + (ulong)uStack_28 * 0x158), *plVar21 != 2)) &&
     (*(int *)((long)plVar21 + 0x13c) == iStack_24)) {
    iVar17 = *(int *)((long)plVar21 + 0x9c);
    if (iVar17 < 1) {
      return param_1;
    }
    *(undefined4 *)((long)plVar21 + 0x9c) = 0;
    puVar13 = (undefined1 *)register0x00000008;
code_r0x000105a83b58:
    *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
    *(int ****)(puVar13 + -0x30) = unaff_x22;
    *(undefined **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar13 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar13 + -0x10) = unaff_x29;
    *(code **)(puVar13 + -8) = unaff_x30;
    *(undefined8 *)(puVar13 + -0x1a0) = param_3;
    *(int *)(puVar13 + -0x194) = iVar17;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar15 = bRam000000010b636960, bRam000000010b636960 - 1 < 2 ||
         ((bRam000000010b636960 != 0 &&
          (bVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                              ), bVar15 != 0)))))) &&
       (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                            ,bVar15), iVar17 != 0)) {
      *(undefined1 **)(puVar13 + -0x138) = puVar13 + -0x194;
      *(undefined **)(puVar13 + -0x130) = &UNK_10b3fcb70;
      *(undefined8 *)(puVar13 + -0xe0) = 1;
      *(undefined1 **)(puVar13 + -0xd8) = puVar13 + -0x138;
      *(undefined8 *)(puVar13 + -0xd0) = 1;
      *(long *)(puVar13 + -200) =
           ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
           + 0x30;
      __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                (puVar13 + -400,
                 ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                 ,puVar13 + -0xe0);
      uVar22 = *(ulong *)(puVar13 + -400);
    }
    else {
      *(undefined8 *)(puVar13 + -0xe0) = 2;
      *(long *)(puVar13 + -0xc0) =
           ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
      ;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        *(undefined1 **)(puVar13 + -0x138) = puVar13 + -0x194;
        *(undefined **)(puVar13 + -0x130) = &UNK_10b3fcb70;
        *(undefined8 *)(puVar13 + -400) = 1;
        *(undefined1 **)(puVar13 + -0x188) = puVar13 + -0x138;
        *(undefined8 *)(puVar13 + -0x180) = 1;
        *(long *)(puVar13 + -0x178) =
             ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
             + 0x30;
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(puVar13 + -0xe0,puVar13 + -400);
      }
      *(undefined8 *)(puVar13 + -0x188) = *(undefined8 *)(puVar13 + -0xd8);
      *(undefined8 *)(puVar13 + -400) = *(undefined8 *)(puVar13 + -0xe0);
      *(undefined8 *)(puVar13 + -0x178) = *(undefined8 *)(puVar13 + -200);
      *(undefined8 *)(puVar13 + -0x180) = *(undefined8 *)(puVar13 + -0xd0);
      *(undefined8 *)(puVar13 + -0x170) = *(undefined8 *)(puVar13 + -0xc0);
      uVar22 = *(ulong *)(puVar13 + -400);
    }
    if (uVar22 != 2) {
      lVar20 = *(long *)(puVar13 + -0x188);
      if ((uVar22 & 1) != 0) {
        lVar20 = lVar20 + (*(long *)(*(long *)(puVar13 + -0x180) + 0x10) - 1U & 0xfffffffffffffff0)
                 + 0x10;
      }
      (**(code **)(*(long *)(puVar13 + -0x180) + 0x60))(lVar20,puVar13 + -0x178);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (lVar20 = *(long *)(puVar13 + -0x170), lVar20 != 0)) {
      uVar8 = *(undefined8 *)(lVar20 + 0x18);
      *(undefined8 *)(puVar13 + -0x138) = *(undefined8 *)(lVar20 + 0x10);
      *(undefined8 *)(puVar13 + -0x130) = uVar8;
      *(undefined1 **)(puVar13 + -0xe0) = puVar13 + -0x138;
      *(undefined **)(puVar13 + -0xd8) = &DAT_105aabad0;
      FUN_105ab8ca4(puVar13 + -400,&UNK_109b161c0,0x15,s__>___108ab67cd,puVar13 + -0xe0);
    }
    iVar24 = *(int *)(param_1 + 0x4c);
    iVar17 = iVar24 + *(int *)(puVar13 + -0x194);
    if (!SCARRY4(iVar24,*(int *)(puVar13 + -0x194))) {
      *(int *)(param_1 + 0x4c) = iVar17;
      iVar24 = iVar17;
    }
    if (0 < iVar24) {
      *(undefined1 **)(puVar13 + -0x1a8) = puVar13 + -0x134;
      lVar20 = *param_2;
      do {
        if (*(int *)(param_1 + 0x14) != 1) {
          if (*(ulong *)(puVar13 + -400) != 2) {
            lVar20 = *(long *)(puVar13 + -0x188);
            if ((*(ulong *)(puVar13 + -400) & 1) != 0) {
              lVar20 = lVar20 + (*(long *)(*(long *)(puVar13 + -0x180) + 0x10) - 1U &
                                0xfffffffffffffff0) + 0x10;
            }
            (**(code **)(*(long *)(puVar13 + -0x180) + 0x68))(lVar20,puVar13 + -0x178);
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (lVar20 = *(long *)(puVar13 + -0x170), lVar20 != 0)) {
            uVar8 = *(undefined8 *)(lVar20 + 0x18);
            *(undefined8 *)(puVar13 + -0x138) = *(undefined8 *)(lVar20 + 0x10);
            *(undefined8 *)(puVar13 + -0x130) = uVar8;
            *(undefined1 **)(puVar13 + -0xe0) = puVar13 + -0x138;
            *(undefined **)(puVar13 + -0xd8) = &DAT_105aabad0;
            FUN_105ab8ca4(puVar13 + -400,&UNK_109b161c0,0x15,s_<____108ab67c5,puVar13 + -0xe0);
          }
          goto LAB_105a842b4;
        }
        uVar3 = *(uint *)(param_1 + 0x18);
        uVar22 = (ulong)uVar3;
        iVar17 = *(int *)(param_1 + 0x1c);
        if (uVar3 != *(uint *)(param_1 + 0x20) || iVar17 != *(int *)(param_1 + 0x24)) {
          *(uint *)(puVar13 + -0x138) = uVar3;
          *(int *)(puVar13 + -0x134) = iVar17;
          if (((uVar22 < *(ulong *)(lVar20 + 0x10)) &&
              (plVar21 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar3 * 0x158), *plVar21 != 2)) &&
             (*(int *)((long)plVar21 + 0x13c) == iVar17)) {
            uVar11 = *(uint *)((long)plVar21 + 0xec);
            lVar25 = plVar21[0x1e];
            *(undefined4 *)((long)plVar21 + 0xec) = 0;
            if ((uVar11 & 1) == 0) {
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                 (((bRam000000010b636df8 - 1 < 2 ||
                   ((bRam000000010b636df8 != 0 &&
                    (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                                        ), cVar14 != '\0')))) &&
                  (iVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (
                                      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                                      ), iVar16 != 0)))) {
                *(long *)(puVar13 + -0x120) =
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                     + 0x30;
                *(undefined **)(puVar13 + -0x118) = &UNK_109b0e004;
                *(undefined8 *)(puVar13 + -0x110) = 199;
                *(undefined1 **)(puVar13 + -0x160) = puVar13 + -0x118;
                *(undefined **)(puVar13 + -0x158) = &UNK_10b3f92b0;
                *(undefined8 *)(puVar13 + -0x138) = 1;
                *(undefined1 **)(puVar13 + -0x130) = puVar13 + -0x160;
                *(undefined8 *)(puVar13 + -0x128) = 1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                           ,puVar13 + -0x138);
                lVar25 = 
                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar8 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                           + 0x20);
                  uVar9 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                           + 0x28);
                  *(undefined8 *)(puVar13 + -0x108) = 2;
                  *(undefined8 *)(puVar13 + -0x100) = uVar8;
                  *(undefined8 *)(puVar13 + -0xf8) = uVar9;
                  puVar19 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar19 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar16 = (**(code **)(puVar19 + 0x18))(puVar2,puVar13 + -0x108);
                  if (iVar16 != 0) {
                    lVar6 = *(long *)(lVar25 + 0x60);
                    uVar9 = *(undefined8 *)(lVar25 + 0x68);
                    lVar7 = *(long *)(lVar25 + 0x50);
                    uVar10 = *(undefined8 *)(lVar25 + 0x58);
                    uVar8 = 1;
                    if (lVar7 == 0) {
                      uVar8 = 2;
                    }
                    uVar4 = *(undefined4 *)(lVar25 + 8);
                    uVar5 = *(undefined4 *)(lVar25 + 0xc);
                    *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x138;
                    puVar13[-0xe8] = 1;
                    *(undefined1 **)(puVar13 + -0x80) = puVar13 + -0xf0;
                    *(undefined **)(puVar13 + -0x78) = &DAT_1061c2098;
                    uVar1 = 1;
                    if (lVar6 == 0) {
                      uVar1 = 2;
                    }
                    *(undefined8 *)(puVar13 + -0xa8) = *(undefined8 *)(puVar13 + -0x100);
                    *(undefined8 *)(puVar13 + -0xb0) = *(undefined8 *)(puVar13 + -0x108);
                    *(undefined8 *)(puVar13 + -0xa0) = *(undefined8 *)(puVar13 + -0xf8);
                    *(char **)(puVar13 + -0x90) = s__108b39f4f;
                    *(undefined1 **)(puVar13 + -0x88) = puVar13 + -0x80;
                    *(undefined8 *)(puVar13 + -0xe0) = uVar8;
                    *(long *)(puVar13 + -0xd8) = lVar7;
                    *(undefined8 *)(puVar13 + -0xd0) = uVar10;
                    *(undefined8 *)(puVar13 + -200) = uVar1;
                    *(long *)(puVar13 + -0xc0) = lVar6;
                    *(undefined8 *)(puVar13 + -0xb8) = uVar9;
                    *(undefined4 *)(puVar13 + -0x98) = uVar4;
                    *(undefined4 *)(puVar13 + -0x94) = uVar5;
                    (**(code **)(puVar19 + 0x20))(puVar2,puVar13 + -0xe0);
                  }
                }
              }
              else {
                lVar25 = 
                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar8 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                           + 0x20);
                  uVar9 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                           + 0x28);
                  *(undefined8 *)(puVar13 + -0x150) = 2;
                  *(undefined8 *)(puVar13 + -0x148) = uVar8;
                  *(undefined8 *)(puVar13 + -0x140) = uVar9;
                  puVar19 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar19 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar16 = (**(code **)(puVar19 + 0x18))(puVar2,puVar13 + -0x150);
                  if (iVar16 != 0) {
                    *(undefined **)(puVar13 + -0xf0) = &UNK_109b0e004;
                    *(undefined8 *)(puVar13 + -0xe8) = 199;
                    *(long *)(puVar13 + -0x120) =
                         ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                         + 0x30;
                    *(undefined1 **)(puVar13 + -0x118) = puVar13 + -0xf0;
                    *(undefined **)(puVar13 + -0x110) = &UNK_10b3f92b0;
                    *(undefined8 *)(puVar13 + -0x138) = 1;
                    *(undefined1 **)(puVar13 + -0x130) = puVar13 + -0x118;
                    *(undefined8 *)(puVar13 + -0x128) = 1;
                    lVar6 = *(long *)(lVar25 + 0x60);
                    uVar9 = *(undefined8 *)(lVar25 + 0x68);
                    lVar7 = *(long *)(lVar25 + 0x50);
                    uVar10 = *(undefined8 *)(lVar25 + 0x58);
                    uVar8 = 1;
                    if (lVar7 == 0) {
                      uVar8 = 2;
                    }
                    uVar4 = *(undefined4 *)(lVar25 + 8);
                    uVar5 = *(undefined4 *)(lVar25 + 0xc);
                    *(undefined1 **)(puVar13 + -0x80) = puVar13 + -0x138;
                    puVar13[-0x78] = 1;
                    *(undefined1 **)(puVar13 + -0x108) = puVar13 + -0x80;
                    *(undefined **)(puVar13 + -0x100) = &DAT_1061c2098;
                    uVar1 = 1;
                    if (lVar6 == 0) {
                      uVar1 = 2;
                    }
                    *(undefined8 *)(puVar13 + -0xa8) = *(undefined8 *)(puVar13 + -0x148);
                    *(undefined8 *)(puVar13 + -0xb0) = *(undefined8 *)(puVar13 + -0x150);
                    *(undefined8 *)(puVar13 + -0xa0) = *(undefined8 *)(puVar13 + -0x140);
                    *(char **)(puVar13 + -0x90) = s__108b39f4f;
                    *(undefined1 **)(puVar13 + -0x88) = puVar13 + -0x108;
                    *(undefined8 *)(puVar13 + -0xe0) = uVar8;
                    *(long *)(puVar13 + -0xd8) = lVar7;
                    *(undefined8 *)(puVar13 + -0xd0) = uVar10;
                    *(undefined8 *)(puVar13 + -200) = uVar1;
                    *(long *)(puVar13 + -0xc0) = lVar6;
                    *(undefined8 *)(puVar13 + -0xb8) = uVar9;
                    *(undefined4 *)(puVar13 + -0x98) = uVar4;
                    *(undefined4 *)(puVar13 + -0x94) = uVar5;
                    (**(code **)(puVar19 + 0x20))(puVar2,puVar13 + -0xe0);
                  }
                }
              }
              goto LAB_105a84044;
            }
            *(undefined4 *)(param_1 + 0x14) = 1;
            *(long *)(param_1 + 0x18) = lVar25;
            goto LAB_105a84048;
          }
LAB_105a842f8:
          *(undefined8 *)(puVar13 + -0xe0) = *(undefined8 *)(puVar13 + -0x1a8);
          puVar19 = &UNK_10b3fa5a0;
LAB_105a8431c:
          *(undefined **)(puVar13 + -0xd8) = &DAT_105abf048;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b233d4,puVar13 + -0xe0,puVar19);
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x105a8433c);
          (*pcVar12)();
        }
LAB_105a84044:
        *(undefined4 *)(param_1 + 0x14) = 0;
LAB_105a84048:
        *(uint *)(puVar13 + -0x138) = uVar3;
        *(int *)(puVar13 + -0x134) = iVar17;
        if (((*(ulong *)(lVar20 + 0x10) <= uVar22) ||
            (plVar21 = (long *)(*(long *)(lVar20 + 8) + uVar22 * 0x158), *plVar21 == 2)) ||
           (*(int *)((long)plVar21 + 0x13c) != iVar17)) goto LAB_105a842f8;
        *(undefined1 *)((long)plVar21 + 0x14a) = 0;
        *(uint *)(puVar13 + -0x138) = uVar3;
        *(int *)(puVar13 + -0x134) = iVar17;
        if (((*(ulong *)(lVar20 + 0x10) <= uVar22) ||
            (plVar21 = (long *)(*(long *)(lVar20 + 8) + (ulong)uVar3 * 0x158), *plVar21 == 2)) ||
           (*(int *)((long)plVar21 + 0x13c) != iVar17)) {
          *(undefined8 *)(puVar13 + -0xe0) = *(undefined8 *)(puVar13 + -0x1a8);
          puVar19 = &UNK_10b3fa588;
          goto LAB_105a8431c;
        }
        cVar14 = *(byte *)(plVar21 + 0xd) - 7;
        if (*(byte *)(plVar21 + 0xd) < 7) {
          cVar14 = '\x06';
        }
        if (((cVar14 == '\x05' || cVar14 == '\x03') && (*(char *)((long)plVar21 + 0x69) == '\x01'))
           || (plVar21[0x14] != 0)) {
          *(long *)(puVar13 + -0xe0) = lVar20;
          *(uint *)(puVar13 + -0xd8) = uVar3;
          *(int *)(puVar13 + -0xd4) = iVar17;
          lVar25 = plVar21[0xc];
          func_0x000105a818f0(param_1,puVar13 + -0xe0);
          __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                    (*(undefined8 *)(puVar13 + -0x1a0),puVar13 + -0xe0,(int)lVar25 != 1000000000);
          iVar24 = *(int *)(param_1 + 0x4c);
        }
      } while (0 < iVar24);
    }
    if (*(ulong *)(puVar13 + -400) != 2) {
      lVar20 = *(long *)(puVar13 + -0x188);
      if ((*(ulong *)(puVar13 + -400) & 1) != 0) {
        lVar20 = lVar20 + (*(long *)(*(long *)(puVar13 + -0x180) + 0x10) - 1U & 0xfffffffffffffff0)
                 + 0x10;
      }
      (**(code **)(*(long *)(puVar13 + -0x180) + 0x68))(lVar20,puVar13 + -0x178);
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (lVar20 = *(long *)(puVar13 + -0x170), lVar20 != 0)) {
      uVar8 = *(undefined8 *)(lVar20 + 0x18);
      *(undefined8 *)(puVar13 + -0x138) = *(undefined8 *)(lVar20 + 0x10);
      *(undefined8 *)(puVar13 + -0x130) = uVar8;
      *(undefined1 **)(puVar13 + -0xe0) = puVar13 + -0x138;
      *(undefined **)(puVar13 + -0xd8) = &DAT_105aabad0;
      FUN_105ab8ca4(puVar13 + -400,&UNK_109b161c0,0x15,s_<____108ab67c5,puVar13 + -0xe0);
    }
LAB_105a842b4:
    lVar20 = FUN_105aada3c(puVar13 + -400);
    return lVar20;
  }
  piStack_20 = &iStack_24;
  puStack_18 = &DAT_105abf048;
  plVar21 = (long *)&UNK_10b3fa588;
  auVar26 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&piStack_20);
  uStack_124 = auVar26._8_4_;
  unaff_x20 = auVar26._0_8_;
  puVar13 = auStack_218 + 0xe8;
  pcStack_38 = 
  __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize25recv_stream_window_update17h428e11e9dd1210a7E
  ;
  unaff_x29 = &puStack_40;
  unaff_x22 = &ppiStack_c8;
  unaff_x21 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
  unaff_x23 = 0x10b636000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((param_3 = param_4, bVar15 = bRam000000010b636948, bRam000000010b636948 - 1 < 2 ||
       ((bRam000000010b636948 != 0 &&
        (bVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (0x10b636938), param_3 = param_4, bVar15 != 0)))) &&
      (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b636938,bVar15), iVar17 != 0)))) {
    uVar3 = *(uint *)(plVar21 + 1);
    iVar17 = *(int *)((long)plVar21 + 0xc);
    if ((((*(ulong *)(*plVar21 + 0x10) <= (ulong)uVar3) ||
         (plStack_78 = (long *)(*(long *)(*plVar21 + 8) + (ulong)uVar3 * 0x158), *plStack_78 == 2))
        || ((*(int *)((long)plStack_78 + 0x13c) != iVar17 ||
            ((piStack_88 = (int *)((long)plStack_78 + 0x13c), *plStack_78 == 2 ||
             (*piStack_88 != iVar17)))))) ||
       ((plStack_80 = plStack_78 + 0xd, *plStack_78 == 2 || (*piStack_88 != iVar17)))) {
      auStack_f0 = (undefined1  [8])plVar21[1];
      ppiStack_c8 = (int **)(auStack_f0 + 4);
      puStack_c0 = &DAT_105abf048;
      param_2 = (long *)&UNK_10b3fa588;
      unaff_x19 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                            (s__dangling_store_key_for_stream_i_108b233d4,&ppiStack_c8);
      FUN_105aada3c(auStack_120);
      __Unwind_Resume(unaff_x19);
      unaff_x30 = FUN_105a83b58;
      auVar26 = func_0x000108a07bc4();
      iVar17 = auVar26._8_4_;
      param_1 = auVar26._0_8_;
      goto code_r0x000105a83b58;
    }
    plStack_78 = plStack_78 + 0x13;
    lStack_d8 = lRam000000010b636938 + 0x30;
    ppiStack_c8 = &piStack_88;
    puStack_c0 = &UNK_10b3fcb50;
    pplStack_b8 = &plStack_80;
    puStack_b0 = &UNK_10b3fd0a0;
    puStack_a8 = &uStack_124;
    pplStack_98 = &plStack_78;
    puStack_a0 = &UNK_10b3fcb70;
    puStack_90 = &UNK_10b3fd0c0;
    pppiStack_e8 = &ppiStack_c8;
    auStack_f0 = (undefined1  [8])0x1;
    lStack_e0 = 4;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E(auStack_120,lRam000000010b636938,auStack_f0);
    lVar20 = lStack_100;
  }
  else {
    auStack_f0 = (undefined1  [8])0x2;
    lStack_d0 = lRam000000010b636938;
    pppiStack_118 = pppiStack_e8;
    lStack_110 = lStack_e0;
    lVar20 = lRam000000010b636938;
    auStack_120 = auStack_f0;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      uVar3 = (uint)plVar21[1];
      iVar17 = *(int *)((long)plVar21 + 0xc);
      if (((*(ulong *)(*plVar21 + 0x10) <= (ulong)uVar3) ||
          (plVar23 = (long *)(*(long *)(*plVar21 + 8) + (ulong)uVar3 * 0x158), *plVar23 == 2)) ||
         ((*(int *)((long)plVar23 + 0x13c) != iVar17 ||
          ((((piStack_88 = (int *)((long)plVar23 + 0x13c), *plVar23 == 2 || (*piStack_88 != iVar17))
            || (plStack_80 = plVar23 + 0xd, *plVar23 == 2)) || (*piStack_88 != iVar17)))))) {
        auStack_120 = (undefined1  [8])plVar21[1];
        ppiStack_c8 = (int **)(auStack_120 + 4);
        puStack_c0 = &DAT_105abf048;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__dangling_store_key_for_stream_i_108b233d4,&ppiStack_c8,&UNK_10b3fa588);
        goto LAB_105a83af0;
      }
      plStack_78 = plVar23 + 0x13;
      lStack_108 = lRam000000010b636938 + 0x30;
      ppiStack_c8 = &piStack_88;
      puStack_c0 = &UNK_10b3fcb50;
      pplStack_b8 = &plStack_80;
      puStack_b0 = &UNK_10b3fd0a0;
      puStack_a8 = &uStack_124;
      pplStack_98 = &plStack_78;
      puStack_a0 = &UNK_10b3fcb70;
      puStack_90 = &UNK_10b3fd0c0;
      pppiStack_118 = &ppiStack_c8;
      auStack_120 = (undefined1  [8])0x1;
      lStack_110 = 4;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(auStack_f0,auStack_120);
      pppiStack_118 = pppiStack_e8;
      lStack_110 = lStack_e0;
      lVar20 = lStack_d0;
      auStack_120 = auStack_f0;
    }
  }
  lStack_100 = lVar20;
  if (auStack_120 != (undefined1  [8])0x2) {
    pppiVar18 = pppiStack_118;
    if (((ulong)auStack_120 & 1) != 0) {
      pppiVar18 = (int ***)((long)pppiStack_118 +
                           (*(long *)(lStack_110 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (**(code **)(lStack_110 + 0x60))(pppiVar18,&lStack_108);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_100 != 0)) {
    auStack_f0 = *(undefined1 (*) [8])(lStack_100 + 0x10);
    pppiStack_e8 = *(int ****)(lStack_100 + 0x18);
    ppiStack_c8 = (int **)auStack_f0;
    puStack_c0 = &DAT_105aabad0;
    FUN_105ab8ca4(auStack_120,&UNK_109b161c0,0x15,s__>___108ab67cd,&ppiStack_c8);
  }
  uVar3 = (uint)plVar21[1];
  auStack_f0 = (undefined1  [8])plVar21[1];
  if (((*(ulong *)(*plVar21 + 0x10) <= (ulong)uVar3) ||
      (plVar23 = (long *)(*(long *)(*plVar21 + 8) + (ulong)uVar3 * 0x158), *plVar23 == 2)) ||
     (*(int *)((long)plVar23 + 0x13c) != *(int *)((long)plVar21 + 0xc))) {
    ppiStack_c8 = (int **)(auStack_f0 + 4);
    puStack_c0 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&ppiStack_c8,&UNK_10b3fa588);
LAB_105a83af0:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x105a83af4);
    (*pcVar12)();
  }
  uVar3 = *(byte *)(plVar23 + 0xd) - 7;
  if (*(byte *)(plVar23 + 0xd) < 7) {
    uVar3 = 6;
  }
  if (((uVar3 & 0xff) < 7 && (1 << (ulong)(uVar3 & 0x1f) & 0x54U) != 0) && (plVar23[0x14] == 0)) {
    lVar20 = 0;
  }
  else {
    uVar22 = __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl10inc_window17h61842d2eab291982E
                       (plVar23 + 0x13,uStack_124);
    if ((uVar22 & 1) == 0) {
      func_0x000105a818f0(unaff_x20,plVar21);
      if (auStack_120 != (undefined1  [8])0x2) {
        if (((ulong)auStack_120 & 1) != 0) {
          pppiStack_118 =
               (int ***)((long)pppiStack_118 +
                        (*(long *)(lStack_110 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(lStack_110 + 0x68))(pppiStack_118,&lStack_108);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_100 != 0))
      {
        auStack_f0 = *(undefined1 (*) [8])(lStack_100 + 0x10);
        pppiStack_e8 = *(int ****)(lStack_100 + 0x18);
        ppiStack_c8 = (int **)auStack_f0;
        puStack_c0 = &DAT_105aabad0;
        FUN_105ab8ca4(auStack_120,&UNK_109b161c0,0x15,s_<____108ab67c5,&ppiStack_c8);
      }
      lVar20 = 0;
      goto LAB_105a83a4c;
    }
    lVar20 = 1;
  }
  if (auStack_120 != (undefined1  [8])0x2) {
    if (((ulong)auStack_120 & 1) != 0) {
      pppiStack_118 =
           (int ***)((long)pppiStack_118 +
                    (*(long *)(lStack_110 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (**(code **)(lStack_110 + 0x68))(pppiStack_118,&lStack_108);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_100 != 0)) {
    auStack_f0 = *(undefined1 (*) [8])(lStack_100 + 0x10);
    pppiStack_e8 = *(int ****)(lStack_100 + 0x18);
    ppiStack_c8 = (int **)auStack_f0;
    puStack_c0 = &DAT_105aabad0;
    FUN_105ab8ca4(auStack_120,&UNK_109b161c0,0x15,s_<____108ab67c5,&ppiStack_c8);
  }
LAB_105a83a4c:
  FUN_105aada3c(auStack_120);
  return lVar20;
}

