
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101651080(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  char cVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  long unaff_x29;
  ulong in_xzr;
  undefined1 auVar23 [12];
  undefined8 *in_stack_00000000;
  undefined *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_00000080;
  undefined8 *in_stack_000000d0;
  undefined *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined *in_stack_000000e8;
  
  puVar16 = in_stack_00000080;
  do {
    in_stack_00000080 = puVar16;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xb0,s_Failed_to_save_view_mode__108ada1fe,&stack0x00000080);
    in_stack_000000d8 = *(undefined **)(unaff_x29 + -0xa8);
    in_stack_000000d0 = *(undefined8 **)(unaff_x29 + -0xb0);
    in_stack_000000e0 = *(undefined8 **)(unaff_x29 + -0xa0);
    lVar22 = *(long *)(unaff_x19 + 8);
    if ((*(long *)(lVar22 + 0x4b8) != -0x8000000000000000) && (*(long *)(lVar22 + 0x4b8) != 0)) {
      _free(*(undefined8 *)(lVar22 + 0x4c0));
      lVar22 = *(long *)(unaff_x19 + 8);
    }
    *(undefined8 **)(lVar22 + 0x4c8) = in_stack_000000e0;
    *(undefined **)(lVar22 + 0x4c0) = in_stack_000000d8;
    *(undefined8 **)(lVar22 + 0x4b8) = in_stack_000000d0;
    (**(code **)*in_stack_00000000)();
    lVar22 = *(long *)(unaff_x19 + 8);
    auVar23 = func_0x000106032954(8);
    plVar20 = auVar23._0_8_;
    lVar22 = *(long *)(lVar22 + 0x4d0);
    uVar17 = *(ulong *)(lVar22 + 0x1c0);
    while( true ) {
      if ((uVar17 & 1) != 0) goto LAB_1016511a4;
      if (uVar17 == 0xfffffffffffffffe) break;
      uVar1 = uVar17 + 2;
      uVar3 = *(ulong *)(lVar22 + 0x1c0);
      bVar4 = uVar3 == uVar17;
      uVar17 = uVar3;
      if (bVar4) {
        *(ulong *)(lVar22 + 0x1c0) = uVar1;
        LOAcquire();
        uVar17 = *(ulong *)(lVar22 + 0x88);
        *(ulong *)(lVar22 + 0x88) = uVar17 + 1;
        lVar21 = func_0x000105217788(lVar22 + 0x80,uVar17);
        *(undefined1 (*) [12])(lVar21 + (uVar17 & 0x1f) * 0x10) = auVar23;
        *(ulong *)(lVar21 + 0x210) = *(ulong *)(lVar21 + 0x210) | 1L << (uVar17 & 0x1f);
        LORelease();
        puVar2 = (ulong *)(lVar22 + 0x110);
        LOAcquire();
        uVar17 = *puVar2;
        *puVar2 = uVar17 | 2;
        LORelease();
        if (uVar17 == 0) {
          lVar21 = *(long *)(lVar22 + 0x100);
          *(undefined8 *)(lVar22 + 0x100) = 0;
          *puVar2 = in_xzr;
          LORelease();
          if (lVar21 != 0) {
            (**(code **)(lVar21 + 8))(*(undefined8 *)(lVar22 + 0x108));
          }
        }
LAB_1016511a4:
        *(undefined1 *)(unaff_x19 + 0x78) = 1;
        return 0;
      }
    }
    __ZN3std7process5abort17hdc01e45e25b715e8E();
    cVar18 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                       (&
                        __ZN9codex_tui13resume_picker11PickerState14toggle_density28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb208c8ecccf20e8E
                       );
    if ((cVar18 == '\0') ||
       (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*plVar20),
       (uVar17 & 1) == 0)) {
      lVar22 = 
      ___ZN9codex_tui13resume_picker11PickerState14toggle_density28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb208c8ecccf20e8E
      ;
      puVar16 = (undefined1 *)register0x00000008;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (puVar16 = (undefined1 *)register0x00000008,
         1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000028 =
             *(undefined8 *)
              (
              ___ZN9codex_tui13resume_picker11PickerState14toggle_density28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb208c8ecccf20e8E
              + 0x20);
        in_stack_00000030 =
             *(undefined8 *)
              (
              ___ZN9codex_tui13resume_picker11PickerState14toggle_density28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb208c8ecccf20e8E
              + 0x28);
        in_stack_00000020 = 2;
        puVar7 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_10b3c24c8;
        }
        puVar8 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar8 = &UNK_109adfc03;
        }
        iVar19 = (**(code **)(puVar7 + 0x18))(puVar8,&stack0x00000020);
        puVar16 = (undefined1 *)register0x00000008;
        if (iVar19 != 0) {
          in_stack_000000e8 =
               (undefined *)
               (
               ___ZN9codex_tui13resume_picker11PickerState14toggle_density28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb208c8ecccf20e8E
               + 0x30);
          in_stack_00000080 = &UNK_108cd78a9;
          *(undefined1 ***)(unaff_x29 + -0xb0) = &stack0x00000080;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
          *(undefined1 ***)(unaff_x29 + -0xa0) = &stack0x00000038;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_10b250688;
          in_stack_000000d8 = (undefined *)(unaff_x29 + -0xb0);
          in_stack_000000d0 = (undefined8 *)0x1;
          in_stack_000000e0 = (undefined8 *)0x2;
          in_stack_00000038 = (undefined1 *)register0x00000008;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar22,puVar8,puVar7,&stack0x00000020,&stack0x000000d0);
          puVar16 = (undefined1 *)register0x00000008;
        }
      }
    }
    else {
      in_stack_00000008 = &UNK_108cd78a9;
      in_stack_00000010 = 0x55;
      in_stack_000000d0 = &stack0x00000008;
      in_stack_000000d8 = &UNK_10b208fd0;
      in_stack_000000e0 = &stack0x00000018;
      in_stack_000000e8 = &UNK_10b250688;
      in_stack_00000080 = (undefined1 *)0x1;
      in_stack_00000018 = (undefined1 *)register0x00000008;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*plVar20,&stack0x00000080);
      puVar16 = (undefined1 *)register0x00000008;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (puVar16 = (undefined1 *)register0x00000008,
         1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar22 = *plVar20;
        uVar11 = *(undefined8 *)(lVar22 + 0x20);
        uVar13 = *(undefined8 *)(lVar22 + 0x28);
        in_stack_00000038 = (undefined1 *)0x2;
        puVar7 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar7 = &UNK_10b3c24c8;
        }
        puVar8 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar8 = &UNK_109adfc03;
        }
        iVar19 = (**(code **)(puVar7 + 0x18))(puVar8,&stack0x00000038);
        puVar16 = (undefined1 *)register0x00000008;
        if (iVar19 != 0) {
          lVar21 = *(long *)(lVar22 + 0x60);
          uVar14 = *(undefined8 *)(lVar22 + 0x68);
          lVar12 = *(long *)(lVar22 + 0x50);
          uVar15 = *(undefined8 *)(lVar22 + 0x58);
          uVar5 = 1;
          if (lVar12 == 0) {
            uVar5 = 2;
          }
          uVar9 = *(undefined4 *)(lVar22 + 8);
          uVar10 = *(undefined4 *)(lVar22 + 0xc);
          *(undefined1 ***)(unaff_x29 + -0x50) = &stack0x00000080;
          *(undefined1 *)(unaff_x29 + -0x48) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0x50;
          *(undefined **)(unaff_x29 + -0xc0) = &DAT_1061c2098;
          uVar6 = 1;
          if (lVar21 == 0) {
            uVar6 = 2;
          }
          *(undefined8 *)(unaff_x29 + -0x78) = uVar11;
          *(undefined1 **)(unaff_x29 + -0x80) = in_stack_00000038;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar13;
          *(char **)(unaff_x29 + -0x60) = s__108b39f4f;
          *(long *)(unaff_x29 + -0x58) = unaff_x29 + -200;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar5;
          *(long *)(unaff_x29 + -0xa8) = lVar12;
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar15;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar6;
          *(long *)(unaff_x29 + -0x90) = lVar21;
          *(undefined8 *)(unaff_x29 + -0x88) = uVar14;
          *(undefined4 *)(unaff_x29 + -0x68) = uVar9;
          *(undefined4 *)(unaff_x29 + -100) = uVar10;
          (**(code **)(puVar7 + 0x20))(puVar8,unaff_x29 + -0xb0);
          puVar16 = (undefined1 *)register0x00000008;
        }
      }
    }
  } while( true );
}

