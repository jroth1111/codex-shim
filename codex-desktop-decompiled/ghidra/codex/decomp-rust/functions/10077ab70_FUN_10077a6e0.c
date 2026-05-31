
/* WARNING: Removing unreachable block (ram,0x00010077ad1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10077a6e0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined1 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long unaff_x27;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 in_stack_00000000;
  undefined1 *in_stack_00000008;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined *in_stack_000000b8;
  char *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  long in_stack_000000d0;
  undefined *in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined *in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000e0,s_state_db_backfill_is_at___waitin_108ac72cf,unaff_x29 + -0xe0);
    *(undefined8 **)(unaff_x20 + 0x1e8) = in_stack_000000e8;
    *(long *)(unaff_x20 + 0x1e0) = in_stack_000000e0;
    *(undefined8 *)(unaff_x20 + 0x1f0) = in_stack_000000f0;
    if ((*(byte *)(unaff_x20 + 0x1b1) & 1) == 0) {
      __ZN13codex_rollout8state_db20emit_startup_warning17h18a2d5def1217d2cE
                (*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0));
      *(undefined1 *)(unaff_x20 + 0x1b1) = 1;
    }
    else {
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
        if (((bRam000000010b62feb0 - 1 < 2) ||
            ((unaff_x23 = &
                          __ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
             , bRam000000010b62feb0 != 0 &&
             (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
                                 ),
             unaff_x23 = &
                         __ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
             , cVar10 != '\0')))) &&
           (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
                               ),
           puVar8 = 
           ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
           , unaff_x23 = &
                         __ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
           , (uVar12 & 1) != 0)) {
          puVar1 = ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
                   + 0x30;
          in_stack_00000088 = (undefined8 *)&DAT_10112965c;
          *(char **)(unaff_x29 + -0x70) = s__108b1bd74;
          *(long **)(unaff_x29 + -0x68) = &stack0x00000080;
          in_stack_000000d0 = unaff_x29 + -0x70;
          in_stack_000000d8 = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xe0) = 1;
          *(long **)(unaff_x29 + -0xd8) = &stack0x000000d0;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(undefined **)(unaff_x29 + -200) = puVar1;
          in_stack_00000080 = unaff_x20 + 0x1e0;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(puVar8,unaff_x29 + -0xe0);
          puVar8 = 
          ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_000000e8 =
                 *(undefined8 **)
                  (
                  ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
                  + 0x20);
            in_stack_000000f0 =
                 *(undefined8 *)
                  (
                  ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
                  + 0x28);
            in_stack_000000e0 = 3;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar1 + 0x18))(puVar3,&stack0x000000e0);
            unaff_x23 = puVar8;
            if (iVar11 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (puVar8,puVar3,puVar1,&stack0x000000e0,unaff_x29 + -0xe0);
            }
          }
          goto LAB_10077a450;
        }
      }
      puVar8 = 
      ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000a0 =
             *(undefined8 *)
              (
              ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
              + 0x20);
        in_stack_000000a8 =
             *(undefined8 *)
              (
              ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
              + 0x28);
        in_stack_00000098 = 3;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        unaff_x23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x23 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar1 + 0x18))(unaff_x23,&stack0x00000098);
        if (iVar11 != 0) {
          in_stack_000000f8 =
               ___ZN13codex_rollout8state_db22wait_for_backfill_gate28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc7afa10eafa22e25E
               + 0x30;
          in_stack_000000d8 = &DAT_10112965c;
          in_stack_000000c8 = &stack0x000000d0;
          in_stack_000000c0 = s__108b1bd74;
          in_stack_000000b0 = &stack0x000000c0;
          in_stack_000000b8 = &UNK_10b208fd0;
          in_stack_000000e8 = &stack0x000000b0;
          in_stack_000000e0 = 1;
          in_stack_000000f0 = 1;
          *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_000000a0;
          *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000098;
          *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000a8;
          lVar17 = *(long *)(puVar8 + 0x60);
          uVar7 = *(undefined8 *)(puVar8 + 0x68);
          lVar18 = *(long *)(puVar8 + 0x50);
          uVar15 = *(undefined8 *)(puVar8 + 0x58);
          uVar16 = 1;
          if (lVar18 == 0) {
            uVar16 = 2;
          }
          uVar4 = *(undefined4 *)(puVar8 + 8);
          uVar5 = *(undefined4 *)(puVar8 + 0xc);
          *(long **)(unaff_x29 + -0x70) = &stack0x000000e0;
          *(undefined1 *)(unaff_x29 + -0x68) = 1;
          in_stack_00000080 = unaff_x29 + -0x70;
          in_stack_00000088 = (undefined8 *)&DAT_1061c2098;
          uVar2 = 1;
          if (lVar17 == 0) {
            uVar2 = 2;
          }
          *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
          *(long **)(unaff_x29 + -0x88) = &stack0x00000080;
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar16;
          *(long *)(unaff_x29 + -0xd8) = lVar18;
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar15;
          *(undefined8 *)(unaff_x29 + -200) = uVar2;
          *(long *)(unaff_x29 + -0xc0) = lVar17;
          *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
          *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
          *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
          in_stack_000000d0 = unaff_x20 + 0x1e0;
          (**(code **)(puVar1 + 0x20))(unaff_x23,unaff_x29 + -0xe0);
        }
      }
    }
LAB_10077a450:
    __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(unaff_x29 + -0xe0,1,0,&UNK_10b221d98);
    in_stack_00000128 = *(undefined8 *)(unaff_x29 + -0x98);
    in_stack_00000120 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0x88);
    in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000148 = *(undefined8 *)(unaff_x29 + -0x78);
    in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x80);
    in_stack_000000e8 = *(undefined8 **)(unaff_x29 + -0xd8);
    in_stack_000000e0 = *(long *)(unaff_x29 + -0xe0);
    in_stack_000000f8 = *(undefined **)(unaff_x29 + -200);
    in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0xd0);
    in_stack_00000108 = *(undefined8 *)(unaff_x29 + -0xb8);
    in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0xc0);
    in_stack_00000118 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x20 + 0x240) = in_stack_00000128;
    *(undefined8 *)(unaff_x20 + 0x238) = in_stack_00000120;
    *(undefined8 *)(unaff_x20 + 0x250) = in_stack_00000138;
    *(undefined8 *)(unaff_x20 + 0x248) = in_stack_00000130;
    *(undefined8 *)(unaff_x20 + 0x260) = in_stack_00000148;
    *(undefined8 *)(unaff_x20 + 600) = in_stack_00000140;
    *(undefined8 **)(unaff_x20 + 0x200) = in_stack_000000e8;
    *(long *)(unaff_x20 + 0x1f8) = in_stack_000000e0;
    *(undefined **)(unaff_x20 + 0x210) = in_stack_000000f8;
    *(undefined8 *)(unaff_x20 + 0x208) = in_stack_000000f0;
    *(undefined8 *)(unaff_x20 + 0x220) = in_stack_00000108;
    *(undefined8 *)(unaff_x20 + 0x218) = in_stack_00000100;
    *(undefined8 *)(unaff_x20 + 0x230) = in_stack_00000118;
    *(undefined8 *)(unaff_x20 + 0x228) = in_stack_00000110;
    iVar11 = func_0x000106114748(unaff_x20 + 0x1f8);
    if (iVar11 != 0) {
      *in_stack_00000008 = 7;
LAB_10077acbc:
      *unaff_x28 = 4;
      lVar17 = 2;
      goto LAB_10077acd0;
    }
    FUN_100de8a5c(unaff_x20 + 0x1f8);
    if (*(long *)(unaff_x20 + 0x1e0) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x1e8));
    }
    if ((*(ulong *)(unaff_x20 + 0x1b8) & 0x7fffffffffffffff) == 0) {
      uVar12 = *(ulong *)(unaff_x20 + 0x188);
    }
    else {
      _free(*(undefined8 *)(unaff_x20 + 0x1c0));
      uVar12 = *(ulong *)(unaff_x20 + 0x188);
    }
    if ((uVar12 & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 400));
    }
    *(undefined8 *)(unaff_x20 + 0x1b8) = *(undefined8 *)(unaff_x20 + 0x140);
    *(undefined1 *)(unaff_x20 + 0x1c8) = 0;
    FUN_1006f0d5c(unaff_x29 + -0xe0,unaff_x20 + 0x1b8);
    lVar17 = *(long *)(unaff_x29 + -0xe0);
    if (lVar17 == -0x7ffffffffffffffe) {
      *in_stack_00000008 = 3;
      goto LAB_10077acbc;
    }
    unaff_x23 = *(undefined **)(unaff_x29 + -0xd8);
    in_stack_00000048 = *(undefined8 *)(unaff_x29 + -200);
    in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0xd0);
    in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0xc0);
    FUN_100d535a0(unaff_x20 + 0x1b8);
    lVar18 = *(long *)(unaff_x20 + 0x148);
    puVar6 = *(undefined8 **)(unaff_x20 + 0x150);
    if (lVar17 == -0x7fffffffffffffff) {
      *(undefined **)(unaff_x29 + -0x70) = unaff_x23;
      *(long **)(unaff_x29 + -0xe0) = &stack0x00000080;
      *(undefined **)(unaff_x29 + -0xd8) =
           &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x70;
      *(code **)(unaff_x29 + -200) =
           __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
      ;
      in_stack_00000080 = lVar18;
      in_stack_00000088 = puVar6;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000e0,s__failed_to_read_backfill_state_a_108ac6d15,unaff_x29 + -0xe0);
      unaff_x23 = (undefined *)thunk_FUN_108856624(&stack0x000000e0);
      (**(code **)**(undefined8 **)(unaff_x29 + -0x70))();
      goto LAB_10077aca8;
    }
    *(long *)(unaff_x20 + 0x188) = lVar17;
    *(undefined **)(unaff_x20 + 400) = unaff_x23;
    *(undefined8 *)(unaff_x20 + 0x1a8) = in_stack_00000050;
    *(undefined8 *)(unaff_x20 + 0x1a0) = in_stack_00000048;
    *(undefined8 *)(unaff_x20 + 0x198) = in_stack_00000040;
    if (((uint)((ulong)in_stack_00000050 >> 0x20) & 0xff) == 2) {
      unaff_x23 = (undefined *)0x0;
      goto LAB_10077ac9c;
    }
    if (*(int *)(unaff_x20 + 0x168) != 1) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x140);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x158);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x160);
      *(undefined8 *)(unaff_x20 + 0x1b8) = uVar15;
      *(long *)(unaff_x20 + 0x1c0) = lVar18;
      *(undefined8 **)(unaff_x20 + 0x1c8) = puVar6;
      *(undefined8 *)(unaff_x20 + 0x1d0) = uVar16;
      *(undefined8 *)(unaff_x20 + 0x1d8) = uVar7;
      unaff_x23 = (undefined *)(unaff_x27 + 0x3b8);
      *(undefined1 *)(unaff_x27 + 0x3b8) = 0;
      *(long *)(unaff_x20 + 0x290) = lVar18;
      *(undefined8 **)(unaff_x20 + 0x298) = puVar6;
      *(undefined8 *)(unaff_x20 + 0x2a0) = uVar16;
      *(undefined8 *)(unaff_x20 + 0x2a8) = uVar7;
      *(undefined8 *)(unaff_x20 + 0x2b0) = 900;
      *(undefined8 *)(unaff_x20 + 0xba0) = uVar15;
      *(undefined1 *)(unaff_x20 + 0xbae) = 0;
      uVar12 = FUN_10076d01c(unaff_x20 + 0x1e0);
      if ((uVar12 & 1) == 0) {
        FUN_100ca7890(unaff_x20 + 0x1e0);
        *unaff_x23 = 1;
        goto LAB_10077a5c0;
      }
      *unaff_x23 = 3;
      *in_stack_00000008 = 5;
      goto LAB_10077acbc;
    }
    *(long *)(unaff_x20 + 0x268) = lVar18;
    *(undefined8 **)(unaff_x20 + 0x270) = puVar6;
    *(undefined8 *)(unaff_x20 + 0x280) = *(undefined8 *)(unaff_x20 + 0x160);
    *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x20 + 0x158);
    *(undefined8 *)(unaff_x20 + 0x288) = *(undefined8 *)(unaff_x20 + 0x170);
    *(undefined8 *)(unaff_x20 + 0xb78) = *(undefined8 *)(unaff_x20 + 0x140);
    *(undefined1 *)(unaff_x20 + 0xb86) = 0;
    iVar11 = FUN_10076d01c(unaff_x20 + 0x1b8);
    if (iVar11 != 0) {
      *in_stack_00000008 = 4;
      goto LAB_10077acbc;
    }
    FUN_100ca7890(unaff_x20 + 0x1b8);
LAB_10077a5c0:
    *(undefined8 *)(unaff_x20 + 0x1b8) = *(undefined8 *)(unaff_x20 + 0x140);
    *(undefined1 *)(unaff_x20 + 0x1c8) = 0;
    FUN_1006f0d5c(unaff_x29 + -0xe0,unaff_x20 + 0x1b8);
    uVar12 = *(ulong *)(unaff_x29 + -0xe0);
    if (uVar12 == 0x8000000000000002) {
      *in_stack_00000008 = 6;
      goto LAB_10077acbc;
    }
    unaff_x23 = *(undefined **)(unaff_x29 + -0xd8);
    in_stack_00000068 = *(undefined8 *)(unaff_x29 + -200);
    in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0xd0);
    in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0xc0);
    FUN_100d535a0(unaff_x20 + 0x1b8);
    if (uVar12 == 0x8000000000000001) {
      in_stack_00000080 = *(long *)(unaff_x20 + 0x148);
      in_stack_00000088 = *(undefined8 **)(unaff_x20 + 0x150);
      *(undefined **)(unaff_x29 + -0x70) = unaff_x23;
      *(long **)(unaff_x29 + -0xe0) = &stack0x00000080;
      *(undefined **)(unaff_x29 + -0xd8) =
           &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x70;
      *(code **)(unaff_x29 + -200) =
           __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000e0,s__failed_to_read_backfill_state_a_108ac736c,unaff_x29 + -0xe0);
      unaff_x23 = (undefined *)thunk_FUN_108856624(&stack0x000000e0);
      (**(code **)**(undefined8 **)(unaff_x29 + -0x70))();
      goto LAB_10077ac9c;
    }
    *(ulong *)(unaff_x20 + 0x1b8) = uVar12;
    *(undefined **)(unaff_x20 + 0x1c0) = unaff_x23;
    *(undefined8 *)(unaff_x20 + 0x1d8) = in_stack_00000070;
    *(undefined8 *)(unaff_x20 + 0x1d0) = in_stack_00000068;
    *(undefined8 *)(unaff_x20 + 0x1c8) = in_stack_00000060;
    if (((uint)((ulong)in_stack_00000070 >> 0x20) & 0xff) == 2) {
      unaff_x23 = (undefined *)0x0;
      if ((uVar12 & 0x7fffffffffffffff) == 0) goto LAB_10077ac9c;
      goto LAB_10077ac94;
    }
    auVar20 = func_0x000106032954(8);
    in_stack_00000080 = auVar20._0_8_;
    in_stack_000000e0 = *(long *)(unaff_x20 + 0x178);
    in_stack_00000088 = (undefined8 *)CONCAT44(in_stack_00000088._4_4_,auVar20._8_4_);
    in_stack_000000e8 =
         (undefined8 *)CONCAT44(in_stack_000000e8._4_4_,*(undefined4 *)(unaff_x20 + 0x180));
    func_0x000106032878(unaff_x29 + -0xe0,&stack0x00000080,&stack0x000000e0);
    if (((*(uint *)(unaff_x29 + -0xe0) & 1) == 0) && (0x1d < *(ulong *)(unaff_x29 + -0xd8))) {
      in_stack_000000d0 = *(long *)(unaff_x20 + 0x148);
      in_stack_000000d8 = *(undefined **)(unaff_x20 + 0x150);
      uVar16 = *(undefined8 *)(&UNK_108cd9c20 + (ulong)*(byte *)(unaff_x20 + 0x1dc) * 8);
      *(undefined8 *)(unaff_x29 + -0x70) =
           *(undefined8 *)(&UNK_10b2532b8 + (ulong)*(byte *)(unaff_x20 + 0x1dc) * 8);
      *(undefined8 *)(unaff_x29 + -0x68) = uVar16;
      *(long **)(unaff_x29 + -0xe0) = &stack0x000000d0;
      *(undefined **)(unaff_x29 + -0xd8) =
           &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
      *(undefined **)(unaff_x29 + -0xd0) = &UNK_108cdbbf0;
      *(code **)(unaff_x29 + -200) =
           __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0xb8) = &DAT_100c7b3a0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000e0,s__timed_out_waiting_for_state_db_b_108ac7327,unaff_x29 + -0xe0);
      in_stack_00000088 = in_stack_000000e8;
      in_stack_00000080 = in_stack_000000e0;
      in_stack_00000090 = in_stack_000000f0;
      unaff_x23 = (undefined *)thunk_FUN_108856624(&stack0x00000080);
      if ((*(ulong *)(unaff_x20 + 0x1b8) & 0x7fffffffffffffff) != 0) {
LAB_10077ac94:
        _free(*(undefined8 *)(unaff_x20 + 0x1c0));
      }
LAB_10077ac9c:
      if ((*(ulong *)(unaff_x20 + 0x188) & 0x7fffffffffffffff) == 0) {
LAB_10077aca8:
        *in_stack_00000008 = 1;
      }
      else {
        _free(*(undefined8 *)(unaff_x20 + 400));
        *in_stack_00000008 = 1;
      }
      in_stack_00000038 = unaff_x23;
      FUN_100e83be0(in_stack_00000000);
      auVar20 = func_0x000106032954(8);
      in_stack_00000098 = auVar20._0_8_;
      in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 0x13c0);
      in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,auVar20._8_4_);
      in_stack_000000e8 =
           (undefined8 *)CONCAT44(in_stack_000000e8._4_4_,*(undefined4 *)(unaff_x20 + 0x13c8));
      func_0x000106032878(unaff_x29 + -0xe0,&stack0x00000098,&stack0x000000e0);
      bVar9 = *(int *)(unaff_x29 + -0xe0) == 0;
      uVar4 = 0;
      if (bVar9) {
        uVar4 = *(undefined4 *)(unaff_x29 + -0xd0);
      }
      uVar16 = 0;
      if (bVar9) {
        uVar16 = *(undefined8 *)(unaff_x29 + -0xd8);
      }
      __ZN11codex_state9telemetry20record_backfill_gate17ha9095eb06ee26e55E
                (0,extraout_x1,uVar16,uVar4,&stack0x00000038);
      if (unaff_x23 == (undefined *)0x0) {
        unaff_x23 = *(undefined **)(unaff_x20 + 0x100);
        if (*(long *)(unaff_x20 + 0xd0) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xd8));
        }
        if (*(long *)(unaff_x20 + 0xb8) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xc0));
        }
        lVar18 = 0;
        lVar17 = 0;
        lVar14 = *(long *)(unaff_x20 + 0xa0);
      }
      else {
        lVar17 = **(long **)(unaff_x20 + 0x100);
        **(long **)(unaff_x20 + 0x100) = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x20 + 0x100);
        }
        if (*(long *)(unaff_x20 + 0xd0) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xd8));
        }
        if (*(long *)(unaff_x20 + 0xb8) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xc0));
        }
        lVar14 = *(long *)(unaff_x20 + 0xa0);
        lVar18 = 1;
        lVar17 = 1;
      }
      if (lVar14 != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0xa8));
        lVar17 = lVar18;
      }
      *unaff_x28 = 1;
      if (lVar17 == 2) {
LAB_10077acd0:
        uVar13 = 3;
      }
      else {
        FUN_100c97e6c();
        uVar13 = 1;
      }
      *(undefined1 *)(unaff_x27 + 0x3d0) = uVar13;
      auVar19._8_8_ = unaff_x23;
      auVar19._0_8_ = lVar17;
      return auVar19;
    }
    uVar16 = *(undefined8 *)(&UNK_108cd9c20 + (ulong)*(byte *)(unaff_x20 + 0x1dc) * 8);
    *(undefined8 *)(unaff_x29 + -0x70) =
         *(undefined8 *)(&UNK_10b2532b8 + (ulong)*(byte *)(unaff_x20 + 0x1dc) * 8);
    *(undefined8 *)(unaff_x29 + -0x68) = uVar16;
    in_stack_00000080 = *(long *)(unaff_x20 + 0x148);
    in_stack_00000088 = *(undefined8 **)(unaff_x20 + 0x150);
    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x70;
    *(undefined **)(unaff_x29 + -0xd8) = &DAT_100c7b3a0;
    *(long **)(unaff_x29 + -0xd0) = &stack0x00000080;
    *(undefined **)(unaff_x29 + -200) =
         &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cdbbf0;
    *(code **)(unaff_x29 + -0xb8) =
         __ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h3381e2c8c9a9d54fE;
  } while( true );
}

