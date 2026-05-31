
/* WARNING: Removing unreachable block (ram,0x0001014f4438) */
/* WARNING: Removing unreachable block (ram,0x0001014f446c) */
/* WARNING: Removing unreachable block (ram,0x0001014f4494) */
/* WARNING: Removing unreachable block (ram,0x0001014f4498) */
/* WARNING: Removing unreachable block (ram,0x0001014f42f8) */
/* WARNING: Removing unreachable block (ram,0x0001014f432c) */
/* WARNING: Removing unreachable block (ram,0x0001014f4354) */
/* WARNING: Removing unreachable block (ram,0x0001014f4358) */
/* WARNING: Removing unreachable block (ram,0x0001014f44a4) */
/* WARNING: Removing unreachable block (ram,0x0001014f44b8) */
/* WARNING: Removing unreachable block (ram,0x0001014f44c4) */
/* WARNING: Removing unreachable block (ram,0x0001014f44d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014f46b0(long param_1)

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
  long *unaff_x21;
  long *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  undefined4 *unaff_x27;
  long unaff_x28;
  long lVar21;
  ulong in_xzr;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  char *in_stack_00000080;
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
  char *pcVar22;
  undefined *puVar23;
  ulong in_stack_00000760;
  long in_stack_00000768;
  undefined8 in_stack_00000770;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 *puVar33;
  ulong in_stack_00001b60;
  ulong in_stack_00001b68;
  
  do {
    uVar30 = in_stack_000000c8;
    puVar29 = in_stack_000000c0;
    uVar28 = in_stack_000000b8;
    puStack00000000000000d8 = &stack0x00001470;
    pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad8719;
    uVar9 = *(ulong *)(unaff_x28 + 0x60);
    uVar27 = *(ulong *)(unaff_x28 + 0x68);
    uVar24 = *(ulong *)(unaff_x28 + 0x50);
    uVar25 = *(ulong *)(unaff_x28 + 0x58);
    uVar18 = unaff_x25;
    if (uVar24 == 0) {
      uVar18 = unaff_x25 + 1;
    }
    uVar31 = *(undefined4 *)(unaff_x28 + 8);
    uVar32 = *(undefined4 *)(unaff_x28 + 0xc);
    pcVar22 = &stack0x00002250;
    puVar23 = &DAT_1061c2098;
    uVar26 = unaff_x25;
    if (uVar9 == 0) {
      uVar26 = unaff_x25 + 1;
    }
    puVar33 = &stack0x00000750;
    (**(code **)(unaff_x24 + 0x20))(unaff_x23,&stack0x00001b00);
LAB_1014f4518:
    *(undefined1 *)((long)unaff_x19 + 0xbd) = 0;
    if ((int)unaff_x19[0x21] == 1) {
      puVar16 = (undefined4 *)unaff_x19[0x23];
      if (puVar16 != (undefined4 *)unaff_x19[0x25]) {
        unaff_x19[0x23] = (ulong)(puVar16 + 4);
        uVar14 = *puVar16;
        uVar18 = *(ulong *)(puVar16 + 1);
        uVar24 = CONCAT44((int)(uVar24 >> 0x20),puVar16[3]);
        bVar2 = true;
        goto LAB_1014f4578;
      }
LAB_1014f4d60:
      if (unaff_x19[0x24] != 0) {
        _free(unaff_x19[0x22]);
      }
      lVar21 = *(long *)unaff_x19[0x15];
      *(long *)unaff_x19[0x15] = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar21 = *(long *)unaff_x19[0x14];
      *(long *)unaff_x19[0x14] = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224();
      }
      puVar12 = unaff_x19 + 0x13;
      uVar18 = *puVar12;
      LOAcquire();
      lVar21 = *(long *)(uVar18 + 0x1f0);
      *(long *)(uVar18 + 0x1f0) = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        LOAcquire();
        lVar21 = *(long *)(uVar18 + 0x88);
        *(long *)(uVar18 + 0x88) = lVar21 + 1;
        lVar21 = func_0x000100fcbaa8(uVar18 + 0x80,lVar21);
        *(ulong *)(lVar21 + 0xb10) = *(ulong *)(lVar21 + 0xb10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(uVar18 + 0x110);
        LOAcquire();
        uVar9 = *puVar1;
        *puVar1 = uVar9 | 2;
        LORelease();
        if (uVar9 == 0) {
          lVar21 = *(long *)(uVar18 + 0x100);
          *(undefined8 *)(uVar18 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar21 != 0) {
            (**(code **)(lVar21 + 8))(*(undefined8 *)(uVar18 + 0x108));
          }
        }
      }
      lVar21 = *(long *)*puVar12;
      *(long *)*puVar12 = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar12);
      }
      if ((char)unaff_x19[0x11] != '\0') {
        lVar21 = *(long *)unaff_x19[0x12];
        *(long *)unaff_x19[0x12] = lVar21 + -1;
        LORelease();
        if (lVar21 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
        }
      }
LAB_1014f4e50:
      if (unaff_x19[0xf] == 0) {
        plVar17 = (long *)unaff_x19[0x10];
        lVar21 = *plVar17;
        *plVar17 = lVar21 + -1;
        LORelease();
        if (lVar21 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E();
        }
      }
      else {
        plVar17 = (long *)unaff_x19[0x10];
        lVar21 = *plVar17;
        *plVar17 = lVar21 + -1;
        LORelease();
        if (lVar21 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h576a4a0a079aa50eE();
        }
      }
      uVar20 = 0;
      uVar13 = 1;
LAB_1014f4fb8:
      *(undefined1 *)((long)unaff_x19 + 0xb7) = uVar13;
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
    puVar16 = (undefined4 *)unaff_x19[0x23];
    if (puVar16 == (undefined4 *)unaff_x19[0x25]) goto LAB_1014f4d60;
    bVar2 = false;
    uVar14 = *puVar16;
    unaff_x19[0x23] = (ulong)(puVar16 + 1);
LAB_1014f4578:
    uVar19 = unaff_x19[0x26];
    unaff_x19[0x26] = uVar19 + 1;
    unaff_x19[0x1d] = uVar19;
    *(bool *)(unaff_x19 + 0x18) = bVar2;
    *(undefined4 *)((long)unaff_x19 + 0xc1) = uVar14;
    *(ulong *)((long)unaff_x19 + 0xc5) = uVar18;
    *(int *)((long)unaff_x19 + 0xcd) = (int)uVar24;
    uVar5 = *(undefined2 *)((long)unaff_x19 + 0xb2);
    if (!bVar2) {
      *unaff_x27 = uVar14;
      *(undefined2 *)((long)unaff_x19 + 0x1ae) = uVar5;
      *(undefined2 *)(unaff_x19 + 0x35) = 0;
      if (*(char *)((long)unaff_x19 + 0xb9) != '\x02') {
LAB_1014f4e7c:
        plVar17 = (long *)unaff_x19[0x15];
        lVar21 = *plVar17;
        *plVar17 = lVar21 + 1;
        if (-1 < lVar21) {
          unaff_x19[0x1e] = (ulong)plVar17;
          *(undefined1 *)((long)unaff_x19 + 0xbd) = 1;
          plVar17 = (long *)unaff_x19[0x13];
          plVar17[0x3e] = plVar17[0x3e] + 1;
          lVar21 = *plVar17;
          *plVar17 = lVar21 + 1;
          if (-1 < lVar21) {
            unaff_x19[0x1f] = (ulong)plVar17;
            *(undefined1 *)((long)unaff_x19 + 0xbc) = 1;
            plVar17 = (long *)unaff_x19[0x14];
            lVar21 = *plVar17;
            *plVar17 = lVar21 + 1;
            if (-1 < lVar21) {
              unaff_x19[0x20] = (ulong)plVar17;
              *(undefined1 *)((long)unaff_x19 + 0xbb) = 1;
              if (unaff_x19[0x1d] != 0) {
                lVar21 = 0xb8;
                if (*in_stack_00000080 == '\0') {
                  lVar21 = 0xb0;
                }
                uVar15 = *(long *)(in_stack_00000060 + lVar21) * unaff_x19[0x1d];
                uVar19 = uVar15 / 1000000;
                __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                          (&stack0x00001b00,uVar19,((int)uVar15 + (int)uVar19 * -1000000) * 1000,
                           &UNK_10b24dbd0);
                auVar6._8_4_ = uVar31;
                auVar6._0_8_ = uVar30;
                auVar6._12_4_ = uVar32;
                unaff_x19[0x30] = auVar6._8_8_;
                unaff_x19[0x2f] = uVar30;
                unaff_x19[0x32] = (ulong)puVar33;
                unaff_x19[0x31] = (ulong)s__108b39f4f;
                unaff_x19[0x34] = in_stack_00001b68;
                unaff_x19[0x33] = in_stack_00001b60;
                unaff_x19[0x28] = uVar24;
                unaff_x19[0x27] = uVar18;
                unaff_x19[0x2a] = uVar26;
                unaff_x19[0x29] = uVar25;
                unaff_x19[0x2c] = uVar27;
                unaff_x19[0x2b] = uVar9;
                unaff_x19[0x2e] = (ulong)puVar29;
                unaff_x19[0x2d] = uVar28;
                iVar11 = func_0x000106114748(unaff_x19 + 0x27,in_stack_00000068);
                if (iVar11 != 0) {
                  uVar20 = 1;
                  uVar13 = 5;
                  goto LAB_1014f4fb8;
                }
                FUN_100de8a5c(unaff_x19 + 0x27);
                plVar17 = (long *)unaff_x19[0x20];
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
                  FUN_1014a10ac(&stack0x00001470);
                }
                else {
                  uVar20 = 
                  ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfd2107716777ecfbE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    puVar29 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar29 = &UNK_10b3c24c8;
                    }
                    puVar23 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar23 = &UNK_109adfc03;
                    }
                    iVar11 = (**(code **)(puVar29 + 0x18))(puVar23,&stack0x00000750);
                    if (iVar11 != 0) {
                      pcStack00000000000000d0 = &stack0x00002250;
                      puStack00000000000000d8 = &UNK_10b208fd0;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (uVar20,puVar23,puVar29,&stack0x00000de0,&stack0x00001470);
                    }
                  }
                }
                lVar21 = *(long *)unaff_x19[0x20];
                *(long *)unaff_x19[0x20] = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  DataMemoryBarrier(2,1);
                  func_0x0001060e2224(unaff_x19 + 0x20);
                }
                puVar12 = unaff_x19 + 0x1f;
                uVar18 = *puVar12;
                *(undefined1 *)((long)unaff_x19 + 0xbb) = 0;
                LOAcquire();
                lVar21 = *(long *)(uVar18 + 0x1f0);
                *(long *)(uVar18 + 0x1f0) = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  LOAcquire();
                  lVar21 = *(long *)(uVar18 + 0x88);
                  *(long *)(uVar18 + 0x88) = lVar21 + 1;
                  lVar21 = func_0x000100fcbaa8(uVar18 + 0x80,lVar21);
                  *(ulong *)(lVar21 + 0xb10) = *(ulong *)(lVar21 + 0xb10) | 0x200000000;
                  LORelease();
                  puVar1 = (ulong *)(uVar18 + 0x110);
                  LOAcquire();
                  uVar9 = *puVar1;
                  *puVar1 = uVar9 | 2;
                  LORelease();
                  if (uVar9 == 0) {
                    lVar21 = *(long *)(uVar18 + 0x100);
                    *(undefined8 *)(uVar18 + 0x100) = 0;
                    *puVar1 = in_xzr;
                    LORelease();
                    if (lVar21 != 0) {
                      (**(code **)(lVar21 + 8))(*(undefined8 *)(uVar18 + 0x108));
                    }
                  }
                }
                lVar21 = *(long *)*puVar12;
                *(long *)*puVar12 = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar12);
                }
                *(undefined1 *)((long)unaff_x19 + 0xbc) = 0;
                lVar21 = *(long *)unaff_x19[0x1e];
                *(long *)unaff_x19[0x1e] = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
                }
                *(undefined1 *)((long)unaff_x19 + 0xbd) = 0;
                if (unaff_x19[0x24] != 0) {
                  _free(unaff_x19[0x22]);
                }
                lVar21 = *(long *)unaff_x19[0x15];
                *(long *)unaff_x19[0x15] = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
                }
                lVar21 = *(long *)unaff_x19[0x14];
                *(long *)unaff_x19[0x14] = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  DataMemoryBarrier(2,1);
                  func_0x0001060e2224();
                }
                puVar12 = unaff_x19 + 0x13;
                uVar18 = *puVar12;
                LOAcquire();
                lVar21 = *(long *)(uVar18 + 0x1f0);
                *(long *)(uVar18 + 0x1f0) = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  LOAcquire();
                  lVar21 = *(long *)(uVar18 + 0x88);
                  *(long *)(uVar18 + 0x88) = lVar21 + 1;
                  lVar21 = func_0x000100fcbaa8(uVar18 + 0x80,lVar21);
                  *(ulong *)(lVar21 + 0xb10) = *(ulong *)(lVar21 + 0xb10) | 0x200000000;
                  LORelease();
                  puVar1 = (ulong *)(uVar18 + 0x110);
                  LOAcquire();
                  uVar9 = *puVar1;
                  *puVar1 = uVar9 | 2;
                  LORelease();
                  if (uVar9 == 0) {
                    lVar21 = *(long *)(uVar18 + 0x100);
                    *(undefined8 *)(uVar18 + 0x100) = 0;
                    *puVar1 = in_xzr;
                    LORelease();
                    if (lVar21 != 0) {
                      (**(code **)(lVar21 + 8))(*(undefined8 *)(uVar18 + 0x108));
                    }
                  }
                }
                lVar21 = *(long *)*puVar12;
                *(long *)*puVar12 = lVar21 + -1;
                LORelease();
                if (lVar21 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar12);
                }
                if ((char)unaff_x19[0x11] != '\0') {
                  lVar21 = *(long *)unaff_x19[0x12];
                  *(long *)unaff_x19[0x12] = lVar21 + -1;
                  LORelease();
                  if (lVar21 == 1) {
                    DataMemoryBarrier(2,1);
                    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
                  }
                }
                goto LAB_1014f4e50;
              }
              if (((char)unaff_x19[0x11] != '\x01') ||
                 (lVar21 = *(long *)unaff_x19[0x12], *(long *)unaff_x19[0x12] = lVar21 + 1,
                 -1 < lVar21)) {
                *(undefined1 *)((long)unaff_x19 + 0xbd) = 0;
                *(undefined2 *)((long)unaff_x19 + 0xbb) = 0;
                NEON_ext(*(undefined1 (*) [16])(unaff_x19 + 0x1f),
                         *(undefined1 (*) [16])(unaff_x19 + 0x1f),8,1);
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
                            (&stack0x00000750,
                             ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfec42671d295e13cE
                             ,&stack0x00000de0);
                }
                else {
                  in_stack_00000770 =
                       ___ZN8rama_tcp6client7connect24tcp_connect_inner_branch28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfec42671d295e13cE
                  ;
                  if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
                    __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                              (&stack0x00000de0,&stack0x00002250);
                  }
                  pcVar22 = (char *)0x2;
                  puVar23 = &stack0x000028e8;
                  in_stack_00000760 = unaff_x25;
                  in_stack_00000768 = param_1;
                }
                _memcpy(&stack0x000000f8,&stack0x00001b00,0x658);
                do {
                  lVar21 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
                  bVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
                  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar21;
                } while (bVar2);
                pcStack00000000000000d0 = pcVar22;
                puStack00000000000000d8 = puVar23;
                in_stack_000000e0 = in_stack_00000760;
                in_stack_000000e8 = in_stack_00000768;
                in_stack_000000f0 = in_stack_00000770;
                _memcpy(&stack0x00000750,&stack0x000000d0,0x680);
                puVar12 = (ulong *)(*
                                   ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                                   )();
                if ((char)puVar12[9] == '\x01') {
LAB_1014f41d4:
                  _memcpy(&stack0x00000de0,&stack0x00000750,0x690);
                  if (0x7ffffffffffffffe < *puVar12) {
                    func_0x000108a07858(&UNK_10b2435a0);
                    goto LAB_1014f3b54;
                  }
                  *puVar12 = *puVar12 + 1;
                  uVar18 = puVar12[1];
                  _memcpy(&stack0x00001470,&stack0x00000750,0x690);
                  if (uVar18 != 2) {
                    if ((uVar18 & 1) == 0) {
                      plVar17 = (long *)puVar12[2];
                      lVar21 = *plVar17;
                      *plVar17 = lVar21 + 1;
                      if ((-1 < lVar21) &&
                         ((plVar17 = (long *)plVar17[0x5e], plVar17 == (long *)0x0 ||
                          (lVar21 = *plVar17, *plVar17 = lVar21 + 1, -1 < lVar21)))) {
                        _memcpy(&stack0x00002254,&stack0x00000de0,0x680);
                        _memcpy((ulong)&stack0x00001b00 | 0x34,&stack0x00002250,0x684);
                        _posix_memalign(&stack0x000028e8,0x80,0x700);
                        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
                      }
                    }
                    else {
                      plVar17 = (long *)puVar12[2];
                      lVar21 = *plVar17;
                      *plVar17 = lVar21 + 1;
                      if ((-1 < lVar21) &&
                         ((plVar17 = (long *)plVar17[0x4a], plVar17 == (long *)0x0 ||
                          (lVar21 = *plVar17, *plVar17 = lVar21 + 1, -1 < lVar21)))) {
                        _memcpy(&stack0x00002254,&stack0x00000de0,0x680);
                        _memcpy((ulong)&stack0x00001b00 | 0x34,&stack0x00002250,0x684);
                        _posix_memalign(&stack0x000028e8,0x80,0x700);
                        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
                      }
                    }
                    goto LAB_1014f3b54;
                  }
                  FUN_100dbb718(&stack0x00001470);
                  *puVar12 = *puVar12 - 1;
                }
                else {
                  if ((char)puVar12[9] != '\x02') {
                    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                              (puVar12,&DAT_100c35d48);
                    *(undefined1 *)(puVar12 + 9) = 1;
                    goto LAB_1014f41d4;
                  }
                  FUN_100dbb718(&stack0x00000750);
                }
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (s__108b1bd74,&stack0x00001b00,&UNK_10b24dbb8);
              }
            }
          }
        }
LAB_1014f3b54:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1014f3b58);
        (*pcVar8)();
      }
      if ((*unaff_x26 == 0) &&
         (((*(byte *)(unaff_x22 + 2) - 1 < 2 ||
           ((*(byte *)(unaff_x22 + 2) != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (unaff_x22), cVar10 != '\0')))) &&
          (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x22),
          (uVar19 & 1) != 0)))) {
        param_1 = *unaff_x22 + 0x30;
        puStack00000000000000d8 = &stack0x00001470;
        pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad875b;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x22,&stack0x00000de0);
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          lVar21 = *unaff_x22;
          puVar23 = *(undefined **)(lVar21 + 0x20);
          in_stack_00000760 = *(ulong *)(lVar21 + 0x28);
          pcVar22 = (char *)0x5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000750);
          if (iVar11 != 0) {
            uVar9 = *(ulong *)(lVar21 + 0x60);
            uVar27 = *(ulong *)(lVar21 + 0x68);
            uVar24 = *(ulong *)(lVar21 + 0x50);
            uVar25 = *(ulong *)(lVar21 + 0x58);
            uVar18 = unaff_x25;
            if (uVar24 == 0) {
              uVar18 = unaff_x25 + 1;
            }
            uVar31 = *(undefined4 *)(lVar21 + 8);
            uVar32 = *(undefined4 *)(lVar21 + 0xc);
            uVar26 = unaff_x25;
            if (uVar9 == 0) {
              uVar26 = unaff_x25 + 1;
            }
            uVar28 = 5;
            puVar33 = &stack0x00002250;
            (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00001b00);
            puVar29 = puVar23;
            uVar30 = in_stack_00000760;
          }
        }
      }
      else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
              (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar21 = *unaff_x22;
        in_stack_000000a8 = *(undefined **)(lVar21 + 0x20);
        in_stack_000000b0 = *(ulong *)(lVar21 + 0x28);
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
          param_1 = *unaff_x22 + 0x30;
          puStack00000000000000d8 = &stack0x00001470;
          pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad875b;
          uVar9 = *(ulong *)(lVar21 + 0x60);
          uVar27 = *(ulong *)(lVar21 + 0x68);
          uVar24 = *(ulong *)(lVar21 + 0x50);
          uVar25 = *(ulong *)(lVar21 + 0x58);
          uVar18 = unaff_x25;
          if (uVar24 == 0) {
            uVar18 = unaff_x25 + 1;
          }
          uVar31 = *(undefined4 *)(lVar21 + 8);
          uVar32 = *(undefined4 *)(lVar21 + 0xc);
          pcVar22 = &stack0x00002250;
          puVar23 = &DAT_1061c2098;
          uVar26 = unaff_x25;
          if (uVar9 == 0) {
            uVar26 = unaff_x25 + 1;
          }
          puVar33 = &stack0x00000750;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00001b00);
          uVar28 = uVar19;
          puVar29 = puVar7;
          uVar30 = uVar15;
        }
      }
      goto LAB_1014f4518;
    }
    *unaff_x20 = uVar18;
    *(int *)(unaff_x20 + 1) = (int)uVar24;
    *(undefined4 *)((long)unaff_x19 + 0x1ac) = uVar14;
    *(undefined8 *)((long)unaff_x19 + 0x1bc) = 0;
    *(undefined2 *)((long)unaff_x19 + 0x1c4) = uVar5;
    *(short *)(unaff_x19 + 0x35) = (short)unaff_x25;
    if (*(char *)((long)unaff_x19 + 0xb9) != '\x01') goto LAB_1014f4e7c;
    if ((*unaff_x26 == 0) &&
       (((*(byte *)(unaff_x21 + 2) - 1 < 2 ||
         ((*(byte *)(unaff_x21 + 2) != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (unaff_x21), cVar10 != '\0')))) &&
        (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x21),
        (uVar19 & 1) != 0)))) {
      param_1 = *unaff_x21 + 0x30;
      puStack00000000000000d8 = &stack0x00001470;
      pcStack00000000000000d0 = s_________abort_connect_loop_to__I_108ad8719;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x21,&stack0x00000de0);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar21 = *unaff_x21;
        puVar23 = *(undefined **)(lVar21 + 0x20);
        in_stack_00000760 = *(ulong *)(lVar21 + 0x28);
        pcVar22 = (char *)0x5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000750);
        if (iVar11 != 0) {
          uVar9 = *(ulong *)(lVar21 + 0x60);
          uVar27 = *(ulong *)(lVar21 + 0x68);
          uVar24 = *(ulong *)(lVar21 + 0x50);
          uVar25 = *(ulong *)(lVar21 + 0x58);
          uVar18 = unaff_x25;
          if (uVar24 == 0) {
            uVar18 = unaff_x25 + 1;
          }
          uVar31 = *(undefined4 *)(lVar21 + 8);
          uVar32 = *(undefined4 *)(lVar21 + 0xc);
          uVar26 = unaff_x25;
          if (uVar9 == 0) {
            uVar26 = unaff_x25 + 1;
          }
          puVar33 = &stack0x00002250;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00001b00);
          uVar28 = 5;
          puVar29 = puVar23;
          uVar30 = in_stack_00000760;
        }
      }
      goto LAB_1014f4518;
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_1014f4518;
    unaff_x28 = *unaff_x21;
    in_stack_000000c0 = *(undefined **)(unaff_x28 + 0x20);
    in_stack_000000c8 = *(ulong *)(unaff_x28 + 0x28);
    in_stack_000000b8 = 5;
    unaff_x24 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x24 = &UNK_10b3c24c8;
    }
    unaff_x23 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x23 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(unaff_x24 + 0x18))(unaff_x23,&stack0x000000b8);
    if (iVar11 == 0) goto LAB_1014f4518;
    param_1 = *unaff_x21 + 0x30;
  } while( true );
}

