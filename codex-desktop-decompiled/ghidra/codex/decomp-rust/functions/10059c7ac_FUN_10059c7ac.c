
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059c7ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined1 *in_x10;
  long unaff_x19;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *unaff_x22;
  long *plVar14;
  byte unaff_w23;
  long *plVar15;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  long *in_stack_00000150;
  undefined8 in_stack_00000170;
  undefined1 *in_stack_00000178;
  undefined8 *in_stack_00000180;
  long in_stack_00000188;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  long in_stack_0000bc70;
  undefined8 *in_stack_0000bc78;
  long in_stack_0000c900;
  long in_stack_0000c908;
  
  do {
    *(char **)(in_x10 + 0x2e8) = s_after_agent_hook_failed__108abfd9d;
    *(undefined1 **)(in_x10 + 0x2f0) = &stack0x0000bed0;
    *(long *)(in_x10 + 0x218) = **(long **)(unaff_x19 + 0xb08) + 0x240;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00004330);
    uVar13 = 
    ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      unaff_x22 = &stack0x0000c000;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x0000c000);
      if (iVar7 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar13,puVar3,puVar2,&stack0x0000c000,&stack0x00004330);
      }
    }
LAB_10059cad0:
    if (((unaff_w23 & 1) != 0) && (*in_stack_00000150 == -0x8000000000000000)) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00004330,s_after_agent_hook______failed_and_108abfdb9,&stack0x00007f40);
      *(undefined8 *)(unaff_x22 + 0x10) = 4;
      if ((*in_stack_00000150 != -0x8000000000000000) && (*in_stack_00000150 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0xb18));
      }
      *(undefined1 *)(unaff_x19 + 0xb31) = 1;
      in_stack_00000150[1] = (long)&stack0x00007f40;
      *in_stack_00000150 = 1;
      in_stack_00000150[2] = *(long *)(unaff_x22 + 0x10);
    }
    if ((code *)*in_stack_0000bc78 != (code *)0x0) {
      (*(code *)*in_stack_0000bc78)(in_stack_0000bc70);
    }
    plVar14 = unaff_x26;
    if (in_stack_0000bc78[1] != 0) {
      _free(in_stack_0000bc70);
    }
    do {
      unaff_x26 = unaff_x28;
      if (in_stack_0000c900 != 0) {
        _free(in_stack_0000c908);
      }
      unaff_x28 = unaff_x26 + 6;
      if ((plVar14 + 6 == unaff_x25) || (lVar10 = *unaff_x26, lVar10 == 3)) {
        FUN_100e6cbec(&stack0x00000750);
        if (*(long *)(unaff_x19 + 0xb10) == -0x8000000000000000) {
          lVar10 = **(long **)(unaff_x19 + 0xb28);
          **(long **)(unaff_x19 + 0xb28) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(unaff_x19 + 0xb28);
          }
          bVar5 = false;
        }
        else {
          *(undefined1 *)(unaff_x19 + 0xb31) = 0;
          *(undefined1 *)(unaff_x19 + 0xb32) = 1;
          lVar10 = **(long **)(unaff_x19 + 0xb00);
          lVar12 = **(long **)(unaff_x19 + 0xb08);
          *(undefined1 *)(unaff_x19 + 0xb32) = 0;
          _memmove();
          *(long *)(unaff_x19 + 0xd10) = lVar10 + 0x10;
          *(long *)(unaff_x19 + 0xd18) = lVar12 + 0x10;
          *(undefined1 *)(in_stack_000001a0 + 0x627) = 0;
          iVar7 = FUN_10059e898(unaff_x19 + 0xb38,in_stack_000001a8);
          if (iVar7 != 0) {
            *in_stack_00000178 = 4;
            *in_stack_00000180 = 0x8000000000000001;
            uVar9 = 0x1e;
            goto LAB_100595774;
          }
          FUN_100d1ddbc(unaff_x19 + 0xb38);
          *(undefined1 *)(unaff_x19 + 0xb32) = 0;
          lVar10 = **(long **)(unaff_x19 + 0xb28);
          **(long **)(unaff_x19 + 0xb28) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(unaff_x19 + 0xb28);
          }
          bVar5 = true;
        }
        *(undefined2 *)(unaff_x19 + 0xb33) = 0;
        *(undefined2 *)(unaff_x19 + 0xb30) = 1;
        FUN_100ca5f44(in_stack_00000170);
        if (bVar5) {
          FUN_100e095b4(unaff_x19 + 0x9b0);
          if ((((*(byte *)(unaff_x19 + 0xabb) & 1) != 0) &&
              (*(long *)(unaff_x19 + 0x8a0) != -0x8000000000000000)) &&
             (*(long *)(unaff_x19 + 0x8a0) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x8a8));
          }
          *(undefined2 *)(unaff_x19 + 0xaba) = 0;
          if ((*(long *)(unaff_x19 + 0x7f0) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x7f0) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x7f8));
          }
          lVar11 = *(long *)(unaff_x19 + 0x7e0);
          lVar10 = *(long *)(unaff_x19 + 0x7e8) + 1;
          lVar12 = lVar11;
          while (lVar10 = lVar10 + -1, lVar10 != 0) {
            FUN_100e02a24(lVar12);
            lVar12 = lVar12 + 0xc0;
          }
          if (*(long *)(unaff_x19 + 0x7d8) != 0) {
            _free(lVar11);
          }
          lVar10 = **(long **)(unaff_x19 + 0x620);
          **(long **)(unaff_x19 + 0x620) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(unaff_x19 + 0x620);
          }
          if (*(long *)(unaff_x19 + 0x608) != -0x8000000000000000 &&
              *(long *)(unaff_x19 + 0x608) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x610));
          }
          *(undefined1 *)(unaff_x19 + 0xac0) = 0;
          lVar10 = *(long *)(unaff_x19 + 0x518);
          if (lVar10 != 0) {
            lVar12 = *(long *)(unaff_x19 + 0x528);
            if (lVar12 != 0) {
              plVar14 = *(long **)(unaff_x19 + 0x510);
              plVar15 = plVar14 + 1;
              lVar11 = *plVar14;
              uVar8 = CONCAT17(-(-1 < lVar11),
                               CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar11 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                      0x8080808080808080;
              do {
                while (uVar8 == 0) {
                  lVar11 = *plVar15;
                  plVar14 = plVar14 + -0x18;
                  plVar15 = plVar15 + 1;
                  uVar8 = CONCAT17(-(-1 < lVar11),
                                   CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                            CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                     CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                              CONCAT13(-(-1 < (char)((ulong)lVar11
                                                                                    >> 0x18)),
                                                                       CONCAT12(-(-1 < (char)((ulong
                                                  )lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                          0x8080808080808080;
                }
                uVar4 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                iVar7 = (int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
                if (plVar14[(long)-iVar7 * 3 + -3] != 0) {
                  _free(plVar14[(long)-iVar7 * 3 + -2]);
                }
                uVar8 = uVar8 - 1 & uVar8;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            if (lVar10 * 0x19 != -0x21) {
              _free(*(long *)(unaff_x19 + 0x510) + lVar10 * -0x18 + -0x18);
            }
          }
          if ((*(byte *)(unaff_x19 + 0xabc) & 1) != 0) {
            lVar11 = *(long *)(unaff_x19 + 0x500);
            lVar10 = *(long *)(unaff_x19 + 0x508) + 1;
            lVar12 = lVar11;
            while (lVar10 = lVar10 + -1, lVar10 != 0) {
              FUN_100e02a24(lVar12);
              lVar12 = lVar12 + 0xc0;
            }
            if (*(long *)(unaff_x19 + 0x4f8) != 0) {
              _free(lVar11);
            }
          }
          *(undefined1 *)(unaff_x19 + 0xabc) = 0;
          FUN_100e08e20(unaff_x19 + 0x268);
          puVar1 = (undefined8 *)(unaff_x19 + 0x260);
          __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                    (puVar1);
          lVar10 = *(long *)*puVar1;
          *(long *)*puVar1 = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
          }
          lVar11 = *(long *)(unaff_x19 + 0x250);
          lVar10 = lVar11;
          for (lVar12 = *(long *)(unaff_x19 + 600); lVar12 != 0; lVar12 = lVar12 + -1) {
            FUN_100e06c08(lVar10);
            lVar10 = lVar10 + 0x38;
          }
          if (*(long *)(unaff_x19 + 0x248) != 0) {
            _free(lVar11);
          }
          lVar10 = **(long **)(unaff_x19 + 0x240);
          **(long **)(unaff_x19 + 0x240) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(unaff_x19 + 0x240);
          }
          lVar10 = **(long **)(unaff_x19 + 0x238);
          **(long **)(unaff_x19 + 0x238) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x238);
          }
          lVar10 = **(long **)(unaff_x19 + 0x230);
          **(long **)(unaff_x19 + 0x230) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(unaff_x19 + 0x230);
          }
          uVar13 = 0x8000000000000000;
        }
        else {
          FUN_100e095b4(unaff_x19 + 0x9b0);
          *(undefined1 *)(unaff_x19 + 0xabb) = 0;
          if ((*(long *)(unaff_x19 + 0x808) != -0x7fffffffffffffe0) &&
             ((*(byte *)(unaff_x19 + 0xaba) & 1) != 0)) {
            FUN_100df5738(unaff_x19 + 0x808);
          }
          *(undefined1 *)(unaff_x19 + 0xaba) = 0;
          if ((*(long *)(unaff_x19 + 0x7f0) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x7f0) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x7f8));
          }
          lVar11 = *(long *)(unaff_x19 + 0x7e0);
          lVar10 = *(long *)(unaff_x19 + 0x7e8) + 1;
          lVar12 = lVar11;
          while (lVar10 = lVar10 + -1, lVar10 != 0) {
            FUN_100e02a24(lVar12);
            lVar12 = lVar12 + 0xc0;
          }
          if (*(long *)(unaff_x19 + 0x7d8) != 0) {
            _free(lVar11);
          }
          *(undefined1 *)(unaff_x19 + 0xac0) = 0;
          uVar13 = *(undefined8 *)(unaff_x19 + 0x608);
          in_stack_00000508 = *(undefined8 *)(unaff_x19 + 0x618);
          in_stack_00000500 = *(undefined8 *)(unaff_x19 + 0x610);
          lVar10 = **(long **)(unaff_x19 + 0x620);
          **(long **)(unaff_x19 + 0x620) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(unaff_x19 + 0x620);
          }
          *(undefined1 *)(unaff_x19 + 0xac0) = 0;
          lVar10 = *(long *)(unaff_x19 + 0x518);
          if (lVar10 != 0) {
            lVar12 = *(long *)(unaff_x19 + 0x528);
            if (lVar12 != 0) {
              plVar14 = *(long **)(unaff_x19 + 0x510);
              plVar15 = plVar14 + 1;
              lVar11 = *plVar14;
              uVar8 = CONCAT17(-(-1 < lVar11),
                               CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar11 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                      0x8080808080808080;
              do {
                while (uVar8 == 0) {
                  lVar11 = *plVar15;
                  plVar14 = plVar14 + -0x18;
                  plVar15 = plVar15 + 1;
                  uVar8 = CONCAT17(-(-1 < lVar11),
                                   CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                            CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                     CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                              CONCAT13(-(-1 < (char)((ulong)lVar11
                                                                                    >> 0x18)),
                                                                       CONCAT12(-(-1 < (char)((ulong
                                                  )lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                          0x8080808080808080;
                }
                uVar4 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                iVar7 = (int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
                if (plVar14[(long)-iVar7 * 3 + -3] != 0) {
                  _free(plVar14[(long)-iVar7 * 3 + -2]);
                }
                uVar8 = uVar8 - 1 & uVar8;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            if (lVar10 * 0x19 != -0x21) {
              _free(*(long *)(unaff_x19 + 0x510) + lVar10 * -0x18 + -0x18);
            }
          }
          *(undefined1 *)(unaff_x19 + 0xabc) = 0;
          FUN_100e08e20(unaff_x19 + 0x268);
          puVar1 = (undefined8 *)(unaff_x19 + 0x260);
          __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                    (puVar1);
          lVar10 = *(long *)*puVar1;
          *(long *)*puVar1 = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
          }
          lVar11 = *(long *)(unaff_x19 + 0x250);
          lVar10 = lVar11;
          for (lVar12 = *(long *)(unaff_x19 + 600); lVar12 != 0; lVar12 = lVar12 + -1) {
            FUN_100e06c08(lVar10);
            lVar10 = lVar10 + 0x38;
          }
          if (*(long *)(unaff_x19 + 0x248) != 0) {
            _free(lVar11);
          }
          lVar10 = **(long **)(unaff_x19 + 0x240);
          **(long **)(unaff_x19 + 0x240) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(unaff_x19 + 0x240);
          }
          lVar10 = **(long **)(unaff_x19 + 0x238);
          **(long **)(unaff_x19 + 0x238) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x238);
          }
          lVar10 = **(long **)(unaff_x19 + 0x230);
          **(long **)(unaff_x19 + 0x230) = lVar10 + -1;
          LORelease();
          if (lVar10 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(unaff_x19 + 0x230);
          }
        }
        *in_stack_00000180 = uVar13;
        in_stack_00000180[2] = in_stack_00000508;
        in_stack_00000180[1] = in_stack_00000500;
        uVar9 = 1;
LAB_100595774:
        *(undefined1 *)(unaff_x19 + 0xab0) = uVar9;
        return;
      }
      in_stack_0000bc78 = (undefined8 *)unaff_x26[2];
      in_stack_0000bc70 = unaff_x26[1];
      in_stack_0000c908 = unaff_x26[4];
      in_stack_0000c900 = unaff_x26[3];
      plVar14 = unaff_x26;
    } while (lVar10 == 0);
    unaff_w23 = lVar10 != 1;
    unaff_x22 = &stack0x0000c000;
    if ((3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) ||
       (((1 < bRam000000010b629a38 - 1 &&
         ((bRam000000010b629a38 == 0 ||
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                             ), unaff_x19 = in_stack_00000188, cVar6 == '\0')))) ||
        (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                           ), (uVar8 & 1) == 0)))) {
      uVar13 = 
      ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x0000d050);
        if (iVar7 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar13,puVar3,puVar2,&stack0x0000c000,&stack0x00004330);
        }
      }
      goto LAB_10059cad0;
    }
    in_x10 = &stack0x0000cb08;
    param_1 = 
    ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
    ;
  } while( true );
}

