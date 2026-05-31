
/* WARNING: Removing unreachable block (ram,0x0001014e8b88) */
/* WARNING: Removing unreachable block (ram,0x0001014e8bb8) */
/* WARNING: Removing unreachable block (ram,0x0001014e8bdc) */
/* WARNING: Removing unreachable block (ram,0x0001014e8be0) */
/* WARNING: Removing unreachable block (ram,0x0001014e8a64) */
/* WARNING: Removing unreachable block (ram,0x0001014e8a94) */
/* WARNING: Removing unreachable block (ram,0x0001014e8ab8) */
/* WARNING: Removing unreachable block (ram,0x0001014e8abc) */
/* WARNING: Removing unreachable block (ram,0x0001014e8bec) */
/* WARNING: Removing unreachable block (ram,0x0001014e8c00) */
/* WARNING: Removing unreachable block (ram,0x0001014e8c0c) */
/* WARNING: Removing unreachable block (ram,0x0001014e8c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014e8df8(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  char cVar10;
  int iVar11;
  ulong *puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 uVar20;
  long lVar21;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined *unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined *unaff_x28;
  long lVar22;
  ulong in_xzr;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  char *in_stack_00000060;
  ulong in_stack_000000a0;
  undefined *in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined *in_stack_000000c0;
  ulong in_stack_000000c8;
  char *pcStack00000000000000d0;
  undefined *puStack00000000000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  char *pcVar23;
  undefined *puVar24;
  ulong in_stack_000002e0;
  long in_stack_000002e8;
  undefined8 in_stack_000002f0;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 *puVar34;
  ulong in_stack_00000960;
  ulong in_stack_00000968;
  
  do {
    uVar31 = in_stack_000000c8;
    puVar30 = in_stack_000000c0;
    uVar29 = in_stack_000000b8;
    puStack00000000000000d8 = &stack0x000006f0;
    pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad8719;
    uVar9 = *(ulong *)(unaff_x26 + 0x60);
    uVar28 = *(ulong *)(unaff_x26 + 0x68);
    uVar25 = *(ulong *)(unaff_x26 + 0x50);
    uVar26 = *(ulong *)(unaff_x26 + 0x58);
    uVar18 = unaff_x21;
    if (uVar25 == 0) {
      uVar18 = unaff_x21 + 1;
    }
    uVar32 = *(undefined4 *)(unaff_x26 + 8);
    uVar33 = *(undefined4 *)(unaff_x26 + 0xc);
    pcVar23 = &stack0x00000bf8;
    puVar24 = &DAT_1061c2098;
    uVar27 = unaff_x21;
    if (uVar9 == 0) {
      uVar27 = unaff_x21 + 1;
    }
    puVar34 = &stack0x000002d0;
    (**(code **)(unaff_x28 + 0x20))(unaff_x24,&stack0x00000900);
LAB_1014e8c60:
    *(undefined1 *)((long)unaff_x19 + 0x79) = 0;
    if ((int)unaff_x19[0x19] == 1) {
      puVar16 = (undefined4 *)unaff_x19[0x1b];
      if (puVar16 != (undefined4 *)unaff_x19[0x1d]) {
        unaff_x19[0x1b] = (ulong)(puVar16 + 4);
        uVar14 = *puVar16;
        uVar18 = *(ulong *)(puVar16 + 1);
        uVar25 = CONCAT44((int)(uVar25 >> 0x20),puVar16[3]);
        bVar2 = true;
        goto LAB_1014e8cc0;
      }
LAB_1014e9430:
      if (unaff_x19[0x1c] != 0) {
        _free(unaff_x19[0x1a]);
      }
      lVar22 = *(long *)unaff_x19[7];
      *(long *)unaff_x19[7] = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar22 = *(long *)unaff_x19[6];
      *(long *)unaff_x19[6] = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224();
      }
      lVar21 = *in_stack_00000048;
      LOAcquire();
      lVar22 = *(long *)(lVar21 + 0x1f0);
      *(long *)(lVar21 + 0x1f0) = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        LOAcquire();
        lVar22 = *(long *)(lVar21 + 0x88);
        *(long *)(lVar21 + 0x88) = lVar22 + 1;
        lVar22 = func_0x000100fcbaa8(lVar21 + 0x80,lVar22);
        *(ulong *)(lVar22 + 0xb10) = *(ulong *)(lVar22 + 0xb10) | 0x200000000;
        LORelease();
        puVar12 = (ulong *)(lVar21 + 0x110);
        LOAcquire();
        uVar18 = *puVar12;
        *puVar12 = uVar18 | 2;
        LORelease();
        if (uVar18 == 0) {
          lVar22 = *(long *)(lVar21 + 0x100);
          *(undefined8 *)(lVar21 + 0x100) = 0;
          *puVar12 = in_xzr;
          LORelease();
          if (lVar22 != 0) {
            (**(code **)(lVar22 + 8))(*(undefined8 *)(lVar21 + 0x108));
          }
        }
      }
LAB_1014e94dc:
      lVar22 = *(long *)*in_stack_00000048;
      *(long *)*in_stack_00000048 = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(in_stack_00000048);
      }
      uVar20 = 0;
      uVar13 = 1;
LAB_1014e9500:
      *(undefined1 *)((long)unaff_x19 + 0x7a) = uVar13;
      if (*unaff_x19 != 2) {
        uVar18 = unaff_x19[1];
        if ((*unaff_x19 & 1) != 0) {
          uVar18 = uVar18 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(unaff_x19[2] + 0x68))(uVar18,unaff_x19 + 3);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (unaff_x19[4] != 0)
         ) {
        FUN_1011d7d74();
      }
      return uVar20;
    }
    puVar16 = (undefined4 *)unaff_x19[0x1b];
    if (puVar16 == (undefined4 *)unaff_x19[0x1d]) goto LAB_1014e9430;
    bVar2 = false;
    uVar14 = *puVar16;
    unaff_x19[0x1b] = (ulong)(puVar16 + 1);
LAB_1014e8cc0:
    uVar19 = unaff_x19[0x1e];
    unaff_x19[0x1e] = uVar19 + 1;
    unaff_x19[0x15] = uVar19;
    *(bool *)(unaff_x19 + 0x10) = bVar2;
    *(undefined4 *)((long)unaff_x19 + 0x81) = uVar14;
    *(ulong *)((long)unaff_x19 + 0x85) = uVar18;
    *(int *)((long)unaff_x19 + 0x8d) = (int)uVar25;
    uVar5 = *(undefined2 *)((long)unaff_x19 + 0x72);
    if (!bVar2) {
      *unaff_x25 = uVar14;
      *(undefined2 *)((long)unaff_x19 + 0x16e) = uVar5;
      *(undefined2 *)(unaff_x19 + 0x2d) = 0;
      if (*(char *)((long)unaff_x19 + 0x75) != '\x02') {
LAB_1014e95b4:
        plVar17 = (long *)unaff_x19[7];
        lVar22 = *plVar17;
        *plVar17 = lVar22 + 1;
        if (-1 < lVar22) {
          unaff_x19[0x16] = (ulong)plVar17;
          *(undefined1 *)((long)unaff_x19 + 0x79) = 1;
          plVar17 = (long *)unaff_x19[5];
          plVar17[0x3e] = plVar17[0x3e] + 1;
          lVar22 = *plVar17;
          *plVar17 = lVar22 + 1;
          if (-1 < lVar22) {
            unaff_x19[0x17] = (ulong)plVar17;
            *(undefined1 *)(unaff_x19 + 0xf) = 1;
            plVar17 = (long *)unaff_x19[6];
            lVar22 = *plVar17;
            *plVar17 = lVar22 + 1;
            if (-1 < lVar22) {
              unaff_x19[0x18] = (ulong)plVar17;
              *(undefined1 *)((long)unaff_x19 + 0x77) = 1;
              if (unaff_x19[0x15] != 0) {
                lVar22 = 0x78;
                if (*in_stack_00000060 == '\0') {
                  lVar22 = 0x70;
                }
                uVar15 = *(long *)((long)in_stack_00000048 + lVar22) * unaff_x19[0x15];
                uVar19 = uVar15 / 1000000;
                __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                          (&stack0x00000900,uVar19,((int)uVar15 + (int)uVar19 * -1000000) * 1000,
                           &UNK_10b24dbd0);
                auVar6._8_4_ = uVar32;
                auVar6._0_8_ = uVar31;
                auVar6._12_4_ = uVar33;
                unaff_x19[0x26] = (ulong)puVar30;
                unaff_x19[0x25] = uVar29;
                unaff_x19[0x28] = auVar6._8_8_;
                unaff_x19[0x27] = uVar31;
                unaff_x19[0x2a] = (ulong)puVar34;
                unaff_x19[0x29] = (ulong)s__108b39f4f;
                unaff_x19[0x2c] = in_stack_00000968;
                unaff_x19[0x2b] = in_stack_00000960;
                unaff_x19[0x20] = uVar25;
                unaff_x19[0x1f] = uVar18;
                unaff_x19[0x22] = uVar27;
                unaff_x19[0x21] = uVar26;
                unaff_x19[0x24] = uVar28;
                unaff_x19[0x23] = uVar9;
                iVar11 = func_0x000106114748(unaff_x19 + 0x1f,in_stack_00000040);
                if (iVar11 != 0) {
                  uVar20 = 1;
                  uVar13 = 5;
                  goto LAB_1014e9500;
                }
                FUN_100de8a5c(unaff_x19 + 0x1f);
                plVar17 = (long *)unaff_x19[0x18];
              }
              if ((char)plVar17[2] != '\0') {
                if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                    ((bRam000000010b639a18 - 1 < 2 ||
                     ((bRam000000010b639a18 != 0 &&
                      (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd2107716777ecfbE
                                          ), cVar10 != '\0')))))) &&
                   (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (
                                       ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd2107716777ecfbE
                                       ), (uVar18 & 1) != 0)) {
                  FUN_1014a10ac(&stack0x000006f0);
                }
                else {
                  uVar20 = 
                  ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd2107716777ecfbE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    puVar30 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar30 = &UNK_10b3c24c8;
                    }
                    puVar24 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar24 = &UNK_109adfc03;
                    }
                    iVar11 = (**(code **)(puVar30 + 0x18))(puVar24,&stack0x000002d0);
                    if (iVar11 != 0) {
                      pcStack00000000000000d0 = &stack0x00000bf8;
                      puStack00000000000000d8 = &UNK_10b208fd0;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (uVar20,puVar24,puVar30,&stack0x000004e0,&stack0x000006f0);
                    }
                  }
                }
                lVar22 = *(long *)unaff_x19[0x18];
                *(long *)unaff_x19[0x18] = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  DataMemoryBarrier(2,1);
                  func_0x0001060e2224(unaff_x19 + 0x18);
                }
                puVar12 = unaff_x19 + 0x17;
                uVar18 = *puVar12;
                *(undefined1 *)((long)unaff_x19 + 0x77) = 0;
                LOAcquire();
                lVar22 = *(long *)(uVar18 + 0x1f0);
                *(long *)(uVar18 + 0x1f0) = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  LOAcquire();
                  lVar22 = *(long *)(uVar18 + 0x88);
                  *(long *)(uVar18 + 0x88) = lVar22 + 1;
                  lVar22 = func_0x000100fcbaa8(uVar18 + 0x80,lVar22);
                  *(ulong *)(lVar22 + 0xb10) = *(ulong *)(lVar22 + 0xb10) | 0x200000000;
                  LORelease();
                  puVar1 = (ulong *)(uVar18 + 0x110);
                  LOAcquire();
                  uVar9 = *puVar1;
                  *puVar1 = uVar9 | 2;
                  LORelease();
                  if (uVar9 == 0) {
                    lVar22 = *(long *)(uVar18 + 0x100);
                    *(undefined8 *)(uVar18 + 0x100) = 0;
                    *puVar1 = in_xzr;
                    LORelease();
                    if (lVar22 != 0) {
                      (**(code **)(lVar22 + 8))(*(undefined8 *)(uVar18 + 0x108));
                    }
                  }
                }
                lVar22 = *(long *)*puVar12;
                *(long *)*puVar12 = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar12);
                }
                *(undefined1 *)(unaff_x19 + 0xf) = 0;
                lVar22 = *(long *)unaff_x19[0x16];
                *(long *)unaff_x19[0x16] = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
                }
                *(undefined1 *)((long)unaff_x19 + 0x79) = 0;
                if (unaff_x19[0x1c] != 0) {
                  _free(unaff_x19[0x1a]);
                }
                lVar22 = *(long *)unaff_x19[7];
                *(long *)unaff_x19[7] = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
                }
                lVar22 = *(long *)unaff_x19[6];
                *(long *)unaff_x19[6] = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  DataMemoryBarrier(2,1);
                  func_0x0001060e2224();
                }
                lVar21 = *in_stack_00000048;
                LOAcquire();
                lVar22 = *(long *)(lVar21 + 0x1f0);
                *(long *)(lVar21 + 0x1f0) = lVar22 + -1;
                LORelease();
                if (lVar22 == 1) {
                  LOAcquire();
                  lVar22 = *(long *)(lVar21 + 0x88);
                  *(long *)(lVar21 + 0x88) = lVar22 + 1;
                  lVar22 = func_0x000100fcbaa8(lVar21 + 0x80,lVar22);
                  *(ulong *)(lVar22 + 0xb10) = *(ulong *)(lVar22 + 0xb10) | 0x200000000;
                  LORelease();
                  puVar12 = (ulong *)(lVar21 + 0x110);
                  LOAcquire();
                  uVar18 = *puVar12;
                  *puVar12 = uVar18 | 2;
                  LORelease();
                  if (uVar18 == 0) {
                    lVar22 = *(long *)(lVar21 + 0x100);
                    *(undefined8 *)(lVar21 + 0x100) = 0;
                    *puVar12 = in_xzr;
                    LORelease();
                    if (lVar22 != 0) {
                      (**(code **)(lVar22 + 8))(*(undefined8 *)(lVar21 + 0x108));
                    }
                  }
                }
                goto LAB_1014e94dc;
              }
              *(undefined1 *)((long)unaff_x19 + 0x79) = 0;
              *(undefined2 *)((long)unaff_x19 + 0x77) = 0;
              NEON_ext(*(undefined1 (*) [16])(unaff_x19 + 0x17),
                       *(undefined1 (*) [16])(unaff_x19 + 0x17),8,1);
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b639a30 - 1 < 2 ||
                   ((bRam000000010b639a30 != 0 &&
                    (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfec42671d295e13cE
                                        ), cVar10 != '\0')))))) &&
                 (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfec42671d295e13cE
                                     ), (uVar18 & 1) != 0)) {
                __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                          (&stack0x000002d0,
                           ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfec42671d295e13cE
                           ,&stack0x000004e0);
              }
              else {
                in_stack_000002f0 =
                     ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfec42671d295e13cE
                ;
                if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
                  __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                            (&stack0x000004e0,&stack0x00000bf8);
                }
                pcVar23 = (char *)0x2;
                puVar24 = &stack0x00000e08;
                in_stack_000002e0 = unaff_x21;
                in_stack_000002e8 = param_1;
              }
              _memcpy(&stack0x000000f8,&stack0x00000900,0x1d0);
              do {
                lVar22 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
                bVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
                ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar22;
              } while (bVar2);
              pcStack00000000000000d0 = pcVar23;
              puStack00000000000000d8 = puVar24;
              in_stack_000000e0 = in_stack_000002e0;
              in_stack_000000e8 = in_stack_000002e8;
              in_stack_000000f0 = in_stack_000002f0;
              _memcpy(&stack0x000002d0,&stack0x000000d0,0x1f8);
              puVar12 = (ulong *)(*
                                 ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                                 )();
              if ((char)puVar12[9] == '\x01') {
LAB_1014e8954:
                _memcpy(&stack0x000004e0,&stack0x000002d0,0x208);
                if (0x7ffffffffffffffe < *puVar12) {
                  func_0x000108a07858(&UNK_10b2435a0);
                  goto LAB_1014e9840;
                }
                *puVar12 = *puVar12 + 1;
                uVar18 = puVar12[1];
                _memcpy(&stack0x000006f0,&stack0x000002d0,0x208);
                if (uVar18 != 2) {
                  if ((uVar18 & 1) == 0) {
                    plVar17 = (long *)puVar12[2];
                    lVar22 = *plVar17;
                    *plVar17 = lVar22 + 1;
                    if ((-1 < lVar22) &&
                       ((plVar17 = (long *)plVar17[0x5e], plVar17 == (long *)0x0 ||
                        (lVar22 = *plVar17, *plVar17 = lVar22 + 1, -1 < lVar22)))) {
                      _memcpy(&stack0x00000bfc,&stack0x000004e0,0x1f8);
                      _memcpy((ulong)&stack0x00000900 | 0x34,&stack0x00000bf8,0x1fc);
                      _posix_memalign(&stack0x00000e08,0x80,0x280);
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x280);
                    }
                  }
                  else {
                    plVar17 = (long *)puVar12[2];
                    lVar22 = *plVar17;
                    *plVar17 = lVar22 + 1;
                    if ((-1 < lVar22) &&
                       ((plVar17 = (long *)plVar17[0x4a], plVar17 == (long *)0x0 ||
                        (lVar22 = *plVar17, *plVar17 = lVar22 + 1, -1 < lVar22)))) {
                      _memcpy(&stack0x00000bfc,&stack0x000004e0,0x1f8);
                      _memcpy((ulong)&stack0x00000900 | 0x34,&stack0x00000bf8,0x1fc);
                      _posix_memalign(&stack0x00000e08,0x80,0x280);
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x280);
                    }
                  }
                  goto LAB_1014e9840;
                }
                FUN_100d9e800(&stack0x000006f0);
                *puVar12 = *puVar12 - 1;
              }
              else {
                if ((char)puVar12[9] != '\x02') {
                  __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                            (puVar12,&DAT_100c35d48);
                  *(undefined1 *)(puVar12 + 9) = 1;
                  goto LAB_1014e8954;
                }
                FUN_100d9e800(&stack0x000002d0);
              }
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__108b1bd74,&stack0x00000900,&UNK_10b24dbb8);
            }
          }
        }
LAB_1014e9840:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1014e9844);
        (*pcVar8)();
      }
      if ((*unaff_x27 == 0) &&
         (((*(byte *)(unaff_x23 + 2) - 1 < 2 ||
           ((*(byte *)(unaff_x23 + 2) != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (unaff_x23), cVar10 != '\0')))) &&
          (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x23),
          (uVar19 & 1) != 0)))) {
        param_1 = *unaff_x23 + 0x30;
        puStack00000000000000d8 = &stack0x000006f0;
        pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad875b;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x23,&stack0x000004e0);
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          lVar22 = *unaff_x23;
          puVar24 = *(undefined **)(lVar22 + 0x20);
          in_stack_000002e0 = *(ulong *)(lVar22 + 0x28);
          pcVar23 = (char *)0x5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000002d0);
          if (iVar11 != 0) {
            uVar9 = *(ulong *)(lVar22 + 0x60);
            uVar28 = *(ulong *)(lVar22 + 0x68);
            uVar25 = *(ulong *)(lVar22 + 0x50);
            uVar26 = *(ulong *)(lVar22 + 0x58);
            uVar18 = unaff_x21;
            if (uVar25 == 0) {
              uVar18 = unaff_x21 + 1;
            }
            uVar32 = *(undefined4 *)(lVar22 + 8);
            uVar33 = *(undefined4 *)(lVar22 + 0xc);
            uVar27 = unaff_x21;
            if (uVar9 == 0) {
              uVar27 = unaff_x21 + 1;
            }
            uVar29 = 5;
            puVar34 = &stack0x00000bf8;
            (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00000900);
            puVar30 = puVar24;
            uVar31 = in_stack_000002e0;
          }
        }
      }
      else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
              (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar22 = *unaff_x23;
        in_stack_000000a8 = *(undefined **)(lVar22 + 0x20);
        in_stack_000000b0 = *(ulong *)(lVar22 + 0x28);
        in_stack_000000a0 = 5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000000a0);
        uVar15 = in_stack_000000b0;
        puVar7 = in_stack_000000a8;
        uVar19 = in_stack_000000a0;
        if (iVar11 != 0) {
          param_1 = *unaff_x23 + 0x30;
          puStack00000000000000d8 = &stack0x000006f0;
          pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad875b;
          uVar9 = *(ulong *)(lVar22 + 0x60);
          uVar28 = *(ulong *)(lVar22 + 0x68);
          uVar25 = *(ulong *)(lVar22 + 0x50);
          uVar26 = *(ulong *)(lVar22 + 0x58);
          uVar18 = unaff_x21;
          if (uVar25 == 0) {
            uVar18 = unaff_x21 + 1;
          }
          uVar32 = *(undefined4 *)(lVar22 + 8);
          uVar33 = *(undefined4 *)(lVar22 + 0xc);
          pcVar23 = &stack0x00000bf8;
          puVar24 = &DAT_1061c2098;
          uVar27 = unaff_x21;
          if (uVar9 == 0) {
            uVar27 = unaff_x21 + 1;
          }
          puVar34 = &stack0x000002d0;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00000900);
          uVar29 = uVar19;
          puVar30 = puVar7;
          uVar31 = uVar15;
        }
      }
      goto LAB_1014e8c60;
    }
    *unaff_x20 = uVar18;
    *(int *)(unaff_x20 + 1) = (int)uVar25;
    *(undefined4 *)((long)unaff_x19 + 0x16c) = uVar14;
    *(undefined8 *)((long)unaff_x19 + 0x17c) = 0;
    *(undefined2 *)((long)unaff_x19 + 0x184) = uVar5;
    *(short *)(unaff_x19 + 0x2d) = (short)unaff_x21;
    if (*(char *)((long)unaff_x19 + 0x75) != '\x01') goto LAB_1014e95b4;
    if ((*unaff_x27 == 0) &&
       (((*(byte *)(unaff_x22 + 2) - 1 < 2 ||
         ((*(byte *)(unaff_x22 + 2) != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (unaff_x22), cVar10 != '\0')))) &&
        (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x22),
        (uVar19 & 1) != 0)))) {
      param_1 = *unaff_x22 + 0x30;
      puStack00000000000000d8 = &stack0x000006f0;
      pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad8719;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x22,&stack0x000004e0);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar22 = *unaff_x22;
        puVar24 = *(undefined **)(lVar22 + 0x20);
        in_stack_000002e0 = *(ulong *)(lVar22 + 0x28);
        pcVar23 = (char *)0x5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000002d0);
        if (iVar11 != 0) {
          uVar9 = *(ulong *)(lVar22 + 0x60);
          uVar28 = *(ulong *)(lVar22 + 0x68);
          uVar25 = *(ulong *)(lVar22 + 0x50);
          uVar26 = *(ulong *)(lVar22 + 0x58);
          uVar18 = unaff_x21;
          if (uVar25 == 0) {
            uVar18 = unaff_x21 + 1;
          }
          uVar32 = *(undefined4 *)(lVar22 + 8);
          uVar33 = *(undefined4 *)(lVar22 + 0xc);
          uVar27 = unaff_x21;
          if (uVar9 == 0) {
            uVar27 = unaff_x21 + 1;
          }
          puVar34 = &stack0x00000bf8;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00000900);
          uVar29 = 5;
          puVar30 = puVar24;
          uVar31 = in_stack_000002e0;
        }
      }
      goto LAB_1014e8c60;
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_1014e8c60;
    unaff_x26 = *unaff_x22;
    in_stack_000000c0 = *(undefined **)(unaff_x26 + 0x20);
    in_stack_000000c8 = *(ulong *)(unaff_x26 + 0x28);
    in_stack_000000b8 = 5;
    unaff_x28 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x28 = &UNK_10b3c24c8;
    }
    unaff_x24 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x24 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(unaff_x28 + 0x18))(unaff_x24,&stack0x000000b8);
    if (iVar11 == 0) goto LAB_1014e8c60;
    param_1 = *unaff_x22 + 0x30;
  } while( true );
}

