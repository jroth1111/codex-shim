
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f1b0c(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  undefined8 extraout_x1_15;
  ulong extraout_x1_16;
  ulong extraout_x1_17;
  ulong extraout_x1_18;
  ulong extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *unaff_x19;
  long *plVar21;
  long lVar22;
  long unaff_x20;
  long *plVar23;
  ulong unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined *unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  char in_wzr;
  undefined8 uVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  int iStack0000000000000020;
  uint uStack0000000000000024;
  long *plStack0000000000000028;
  long *plStack0000000000000030;
  uint uStack000000000000003c;
  long *plStack0000000000000040;
  long *plStack0000000000000048;
  int iStack0000000000000054;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long *in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  long *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  ulong in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000138;
  ulong in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long *plVar33;
  long *plStack0000000000000188;
  long *in_stack_00000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  byte bStack00000000000001c0;
  byte bStack00000000000001c1;
  undefined6 uStack00000000000001c2;
  long *in_stack_000001c8;
  long *in_stack_000001d0;
  long *in_stack_000001d8;
  long *in_stack_000001e0;
  char *in_stack_000001e8;
  byte bVar34;
  byte bVar36;
  undefined1 *puVar35;
  long *plVar37;
  long *in_stack_00000240;
  long *in_stack_00000248;
  long *in_stack_00000250;
  byte bVar38;
  long *plVar39;
  undefined6 uVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *in_stack_00000380;
  undefined8 in_stack_00000398;
  long *plVar44;
  undefined7 uVar45;
  long *plVar46;
  long *plVar47;
  long *plVar48;
  uint uVar49;
  
  plStack0000000000000028 = in_stack_00000380;
  do {
    plStack0000000000000188 = (long *)&stack0x000001c0;
    plVar39 = (long *)0x1;
    plVar43 = (long *)0x1;
    plVar19 = *(long **)(unaff_x20 + 0x60);
    plVar26 = *(long **)(unaff_x20 + 0x68);
    plVar46 = *(long **)(unaff_x20 + 0x50);
    plVar47 = *(long **)(unaff_x20 + 0x58);
    plVar44 = (long *)0x1;
    if (plVar46 == (long *)0x0) {
      plVar44 = (long *)0x2;
    }
    puVar35 = &stack0x00000200;
    plVar37 = (long *)&DAT_1061c2098;
    plVar48 = (long *)0x1;
    if (plVar19 == (long *)0x0) {
      plVar48 = (long *)0x2;
    }
    (*(code *)unaff_x19[4])(unaff_x26,&stack0x00000530);
    plVar33 = (long *)s_connection_state___108ac7c9e;
    plVar42 = (long *)&stack0x000004e0;
    plStack0000000000000030 = param_1;
LAB_1003f1d98:
    do {
      do {
        if ((char)*unaff_x28 != '\0') {
          if ((char)*unaff_x28 == '\x01') {
            uVar49 = *(uint *)(unaff_x21 + 0x584);
            plVar21 = (long *)(ulong)uVar49;
            bVar34 = *(byte *)(unaff_x21 + 0x581);
            plVar23 = (long *)(ulong)bVar34;
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
               (((bRam000000010b636810 - 1 < 2 ||
                 ((bRam000000010b636810 != 0 &&
                  (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                                      ), cVar11 != '\0')))) &&
                (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                                    ), iVar13 != 0)))) {
              plStack0000000000000030 =
                   ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                   + 6;
              plVar33 = (long *)&UNK_108cb0764;
              plStack0000000000000188 = (long *)0x3d;
              plVar39 = (long *)0x1;
              plVar41 = (long *)&stack0x000004e0;
              plVar43 = (long *)0x1;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                         ,&stack0x00000360);
              plVar42 = 
              ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                plVar37 = (long *)___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                                  [4];
                in_stack_00000240 =
                     (long *)___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                             [5];
                puVar35 = (undefined1 *)0x5;
                unaff_x24 = plRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  unaff_x24 = (long *)&UNK_10b3c24c8;
                }
                puVar17 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar17 = &UNK_109adfc03;
                }
                iVar13 = (*(code *)unaff_x24[3])(puVar17,&stack0x00000230);
                unaff_x25 = plVar42;
                if (iVar13 != 0) {
                  plVar19 = (long *)plVar42[0xc];
                  plVar26 = (long *)plVar42[0xd];
                  plVar46 = (long *)plVar42[10];
                  plVar47 = (long *)plVar42[0xb];
                  plVar44 = (long *)0x1;
                  if (plVar46 == (long *)0x0) {
                    plVar44 = (long *)0x2;
                  }
                  _bStack00000000000001c0 = &stack0x00000360;
                  in_stack_000001c8 = (long *)CONCAT71(in_stack_000001c8._1_7_,1);
                  plVar48 = (long *)0x1;
                  if (plVar19 == (long *)0x0) {
                    plVar48 = (long *)0x2;
                  }
                  (*(code *)unaff_x24[4])(puVar17,&stack0x00000530);
                }
              }
            }
            else {
              plVar2 = 
              ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
              ;
              plVar41 = plVar42;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_000001b0 =
                     ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                     [4];
                in_stack_000001b8 =
                     ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                     [5];
                in_stack_000001a8 = 5;
                unaff_x24 = plRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  unaff_x24 = (long *)&UNK_10b3c24c8;
                }
                puVar17 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar17 = &UNK_109adfc03;
                }
                iVar13 = (*(code *)unaff_x24[3])(puVar17,&stack0x000001a8);
                unaff_x25 = plVar2;
                if (iVar13 != 0) {
                  plStack0000000000000030 =
                       ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h6cbe84f2dd3fd190E
                       + 6;
                  _bStack00000000000001c0 = &UNK_108cb0764;
                  in_stack_000001c8 = (long *)0x3d;
                  plVar33 = (long *)&stack0x000001c0;
                  plVar39 = (long *)0x1;
                  plVar41 = (long *)&stack0x00000180;
                  plVar43 = (long *)0x1;
                  plVar19 = (long *)plVar2[0xc];
                  plVar26 = (long *)plVar2[0xd];
                  plVar46 = (long *)plVar2[10];
                  plVar47 = (long *)plVar2[0xb];
                  plVar44 = (long *)0x1;
                  if (plVar46 == (long *)0x0) {
                    plVar44 = (long *)0x2;
                  }
                  puVar35 = &stack0x00000200;
                  plVar37 = (long *)&DAT_1061c2098;
                  plVar48 = (long *)0x1;
                  if (plVar19 == (long *)0x0) {
                    plVar48 = (long *)0x2;
                  }
                  plStack0000000000000188 = unaff_x27;
                  (*(code *)unaff_x24[4])(puVar17,&stack0x00000530);
                }
              }
            }
            if ((*(byte *)(unaff_x21 + 0x178) & 1) != 0) {
LAB_1003f2174:
              if (*(int *)(unaff_x21 + 0x18) == -1) {
                FUN_107c05cb0(&UNK_10b4cd2b8);
LAB_1003f41ac:
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1003f41b0);
                (*pcVar9)();
              }
              iVar13 = _shutdown(*(int *)(unaff_x21 + 0x18),1);
              if (iVar13 == -1) {
                puVar16 = (uint *)___error();
                uVar24 = (ulong)*puVar16 << 0x20 | 2;
                cVar11 = FUN_1060eda1c(uVar24);
                if ((cVar11 != '\a') && (cVar11 = FUN_100c355d4(uVar24), cVar11 != '\a'))
                goto LAB_1003f3b60;
              }
              *(undefined1 *)(unaff_x21 + 0x580) = 2;
              *(byte *)(unaff_x21 + 0x581) = bVar34;
              *(uint *)(unaff_x21 + 0x584) = uVar49;
              plVar21 = plStack0000000000000030;
              goto LAB_1003f1a54;
            }
            auVar31 = FUN_1007f4888();
            uVar24 = auVar31._8_8_;
            if ((auVar31._0_8_ & 1) == 0) {
              if (uVar24 == 0) {
                *(undefined1 *)(unaff_x21 + 0x178) = 1;
                goto LAB_1003f2174;
              }
LAB_1003f3b60:
              __ZN108__LT_rama_http_core__h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h2ddafe6daea22a8dE
                        (&stack0x00000530,uVar24);
              unaff_x23 = (undefined8 *)((ulong)plVar44 >> 8 & 0xff);
              unaff_x28 = plVar44;
              in_stack_000000e0 = plVar46;
              in_stack_000000e8 = plVar47;
              in_stack_000000d8 = plVar48;
              plVar37 = plVar46;
              in_stack_00000240 = plVar47;
              in_stack_00000010 = plVar48;
              plStack0000000000000030 = plVar19;
              bVar34 = (byte)plVar44;
              bVar38 = (byte)plVar44;
              iVar13 = (int)((ulong)plVar44 >> 0x20);
              goto joined_r0x0001003f3c20;
            }
            bVar38 = 5;
            bVar34 = 5;
            plStack0000000000000030 = unaff_x25;
          }
          else {
            iVar13 = *(int *)(unaff_x21 + 0x584);
            unaff_x23 = (undefined8 *)(ulong)*(byte *)(unaff_x21 + 0x581);
            plVar46 = (long *)in_stack_000000e8[1];
            plVar44 = (long *)*in_stack_000000e8;
            plVar48 = (long *)in_stack_000000e8[3];
            plVar47 = (long *)in_stack_000000e8[2];
            plVar19 = (long *)in_stack_000000e8[4];
            *(undefined8 *)(unaff_x21 + 0x598) = 0;
            if (plVar44 == (long *)0x0) {
              plVar42 = (long *)0x1;
              plVar39 = (long *)&UNK_10b209220;
              plVar43 = (long *)0x0;
              if (iVar13 == 0) {
LAB_1003f3c28:
                bVar34 = 4;
              }
              else {
LAB_1003f3bf4:
                bVar34 = 1;
              }
              (*(code *)plVar39[4])(&stack0x00000248,plVar42,plVar43);
              unaff_x28 = plVar44;
              in_stack_000000e0 = plVar46;
              in_stack_000000e8 = plVar47;
              in_stack_000000d8 = plVar48;
              plVar37 = (long *)&UNK_10b209220;
              in_stack_00000240 = (long *)0x1;
              in_stack_00000010 = (long *)0x0;
              plStack0000000000000030 = (long *)0x0;
              bVar38 = bVar34;
              goto joined_r0x0001003f3c20;
            }
            (*(code *)*plVar44)(&stack0x00000360,&stack0x00000548,plVar46,plVar47);
            uVar49 = (uint)((ulong)plVar19 >> 0x20);
            unaff_x21 = (ulong)uVar49;
            if (plVar44 != (long *)0x0) {
              (*(code *)plVar44[4])(&stack0x00000548,plVar46,plVar47);
            }
            if (iVar13 == 0) {
              if (uVar49 == 0) goto LAB_1003f3c28;
            }
            else if (uVar49 == 0) goto LAB_1003f3bf4;
            unaff_x23 = (undefined8 *)0x2;
            bVar38 = 1;
            bVar34 = 1;
            plVar21 = plVar39;
            unaff_x24 = plVar42;
            plVar23 = plVar43;
          }
          unaff_x28 = plVar44;
          in_stack_000000e0 = plVar46;
          in_stack_000000e8 = plVar47;
          in_stack_000000d8 = plVar48;
          plVar37 = plVar21;
          in_stack_00000240 = unaff_x24;
          in_stack_00000010 = plVar23;
          iVar13 = (int)unaff_x21;
          goto joined_r0x0001003f3c20;
        }
        FUN_100800c44(&stack0x00000180);
        plVar41 = plStack0000000000000188;
        bVar34 = (byte)puVar35;
        bVar36 = (byte)((ulong)puVar35 >> 8);
        iVar13 = (int)((ulong)puVar35 >> 0x20);
        if ((char)plVar33 == '\x05') {
          lVar22 = *in_stack_000000f0;
          unaff_x25 = (long *)(lVar22 + 0x10);
          if (*(char *)unaff_x25 == '\0') {
            *(char *)unaff_x25 = '\x01';
            uVar18 = extraout_x1;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (unaff_x25,extraout_x1,1000000000);
            uVar18 = extraout_x1_15;
          }
          lVar20 = *(long *)(unaff_x21 + 0x590);
          pcVar1 = (char *)(lVar20 + 0x10);
          if (*pcVar1 == '\0') {
            *pcVar1 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar1,uVar18,1000000000);
          }
          iVar15 = *(int *)(lVar22 + 0x100);
          iVar14 = *(int *)(lVar22 + 0x104) - iVar15;
          plVar21 = plStack0000000000000030;
          plVar23 = plStack0000000000000028;
          if ((iVar14 == 0 || *(int *)(lVar22 + 0x104) < iVar15) || (iVar14 < iVar15 / 2)) {
LAB_1003f2264:
            do {
              if ((*(long *)(unaff_x21 + 0xf0) != 4) ||
                 ((ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140)) <
                  *(ulong *)(unaff_x21 + 0x168))) {
                auVar31 = FUN_1007f4888();
                uVar24 = auVar31._8_8_;
                if ((auVar31._0_8_ & 1) != 0) {
                  unaff_x27 = (long *)&UNK_10b208fd0;
                  goto LAB_1003f3878;
                }
                unaff_x27 = (long *)&UNK_10b208fd0;
                if (uVar24 != 0) {
                  __ZN108__LT_rama_http_core__h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h2ddafe6daea22a8dE
                            (&stack0x00000230,uVar24);
                  uVar24 = extraout_x1_02;
                  bVar38 = bVar34;
                  if (bVar34 != 5) goto LAB_1003f2ca0;
                  goto LAB_1003f3878;
                }
                unaff_x27 = (long *)&UNK_10b208fd0;
                if ((*(long *)(unaff_x21 + 0xf0) != 4) ||
                   ((ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140)) <
                    *(ulong *)(unaff_x21 + 0x168))) goto LAB_1003f3878;
              }
              FUN_10080cd90(&stack0x00000530,lVar22 + 0x108,lVar22 + 0x200);
              unaff_x24 = plVar44;
              if (plVar44 == (long *)0x0) goto LAB_1003f2ca8;
              uVar24 = (ulong)plVar46 & 0xffffffff;
              iVar15 = (int)((ulong)plVar46 >> 0x20);
              if ((((ulong)plVar44[2] <= uVar24) ||
                  (plVar39 = (long *)(plVar44[1] + ((ulong)plVar46 & 0xffffffff) * 0x158),
                  *plVar39 == 2)) || (*(int *)((long)plVar39 + 0x13c) != iVar15)) {
LAB_1003f4184:
                puVar17 = &UNK_10b3fa588;
LAB_1003f4190:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (s__dangling_store_key_for_stream_i_108b233d4,&stack0x00000530,puVar17);
                goto LAB_1003f41ac;
              }
              lVar5 = plVar39[0xc];
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b636ba0 - 1 < 2 ||
                   ((bRam000000010b636ba0 != 0 &&
                    (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                                        ), cVar11 != '\0')))))) &&
                 (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                                     ),
                 lVar6 = 
                 ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                 , iVar14 != 0)) {
                _bStack00000000000001c0 = (char *)plVar46;
                if ((((ulong)plVar44[2] <= uVar24) ||
                    (plVar39 = (long *)(plVar44[1] + uVar24 * 0x158), *plVar39 == 2)) ||
                   (*(int *)((long)plVar39 + 0x13c) != iVar15)) goto LAB_1003f4184;
                in_stack_000001d8 =
                     (long *)(
                             ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                             + 0x30);
                *(long *)(unaff_x29 + -0x70) = (long)plVar39 + 0x13c;
                *(undefined **)(unaff_x29 + -0x68) = &DAT_10114d844;
                *(char **)(unaff_x29 + -0x80) = s__pending_window_updates____pop__s_108ab984b;
                *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
                in_stack_000001c8 = (long *)&stack0x00000520;
                _bStack00000000000001c0 = (char *)0x1;
                in_stack_000001d0 = (long *)0x1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x000001c0);
                lVar6 = 
                ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  plVar39 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar39 = (long *)&UNK_10b3c24c8;
                  }
                  puVar17 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar17 = &UNK_109adfc03;
                  }
                  iVar14 = (*(code *)plVar39[3])(puVar17,&stack0x000004e0);
                  if (iVar14 != 0) {
                    plVar19 = *(long **)(lVar6 + 0x60);
                    plVar26 = *(long **)(lVar6 + 0x68);
                    plVar47 = *(long **)(lVar6 + 0x58);
                    in_stack_000001e8 = (char *)&stack0x000001c0;
                    plVar48 = (long *)0x1;
                    if (plVar19 == (long *)0x0) {
                      plVar48 = (long *)0x2;
                    }
                    (*(code *)plVar39[4])(puVar17,&stack0x00000530);
                  }
                }
              }
              else {
                lVar6 = 
                ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  plVar39 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar39 = (long *)&UNK_10b3c24c8;
                  }
                  puVar17 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar17 = &UNK_109adfc03;
                  }
                  iVar14 = (*(code *)plVar39[3])(puVar17,&stack0x000004c8);
                  if (iVar14 != 0) {
                    _bStack00000000000001c0 = (char *)plVar46;
                    if ((((ulong)plVar44[2] <= uVar24) ||
                        (plVar19 = (long *)(plVar44[1] + uVar24 * 0x158), *plVar19 == 2)) ||
                       (*(int *)((long)plVar19 + 0x13c) != iVar15)) goto LAB_1003f4184;
                    in_stack_000001d8 =
                         (long *)(
                                 ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb98c3acc41ebfe41E
                                 + 0x30);
                    *(long *)(unaff_x29 + -0x70) = (long)plVar19 + 0x13c;
                    *(undefined **)(unaff_x29 + -0x68) = &DAT_10114d844;
                    *(char **)(unaff_x29 + -0x80) = s__pending_window_updates____pop__s_108ab984b;
                    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
                    in_stack_000001c8 = (long *)&stack0x00000520;
                    _bStack00000000000001c0 = (char *)0x1;
                    in_stack_000001d0 = (long *)0x1;
                    plVar19 = *(long **)(lVar6 + 0x60);
                    plVar26 = *(long **)(lVar6 + 0x68);
                    plVar47 = *(long **)(lVar6 + 0x58);
                    in_stack_000001e8 = (char *)&stack0x000001c0;
                    plVar48 = (long *)0x1;
                    if (plVar19 == (long *)0x0) {
                      plVar48 = (long *)0x2;
                    }
                    (*(code *)plVar39[4])(puVar17,&stack0x00000530);
                  }
                }
              }
              _bStack00000000000001c0 = (char *)plVar46;
              if ((((ulong)plVar44[2] <= uVar24) ||
                  (plVar39 = (long *)(plVar44[1] + ((ulong)plVar46 & 0xffffffff) * 0x158),
                  *plVar39 == 2)) || (*(int *)((long)plVar39 + 0x13c) != iVar15))
              goto LAB_1003f4184;
              cVar11 = *(byte *)(plVar39 + 0xd) - 7;
              if (*(byte *)(plVar39 + 0xd) < 7) {
                cVar11 = '\x06';
              }
              if (cVar11 == '\x03') {
                if ((*(byte *)((long)plVar39 + 0x6a) & 1) == 0) goto LAB_1003f2780;
LAB_1003f2768:
                iVar14 = (int)plVar39[0x17];
                iVar4 = *(int *)((long)plVar39 + 0xbc) - iVar14;
                if ((iVar4 == 0 || *(int *)((long)plVar39 + 0xbc) < iVar14) || (iVar4 < iVar14 / 2))
                goto LAB_1003f2780;
                cVar11 = FUN_1007efd48(unaff_x21 + 0x38,&stack0x00000530);
                uVar40 = (undefined6)((ulong)plVar46 >> 0x10);
                if (cVar11 != '\x0f') {
                  bVar10 = false;
                  bVar38 = 3;
                  plVar39 = (long *)CONCAT62(uVar40,CONCAT11(cVar11,3));
                  goto LAB_1003f278c;
                }
                if (((uVar24 < (ulong)plVar44[2]) &&
                    (plVar39 = (long *)(plVar44[1] + ((ulong)plVar46 & 0xffffffff) * 0x158),
                    *plVar39 != 2)) && (*(int *)((long)plVar39 + 0x13c) == iVar15)) {
                  _bStack00000000000001c0 = (char *)plVar46;
                  auVar32 = __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl10inc_window17h61842d2eab291982E
                                      (plVar39 + 0x17,iVar4);
                  if ((auVar32._0_8_ & 1) == 0) goto LAB_1003f2780;
                  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                     (((bRam000000010b636bb8 - 1 < 2 ||
                       ((bRam000000010b636bb8 != 0 &&
                        (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                            (&
                                             __ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                                            ), cVar11 != '\0')))) &&
                      (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                          (
                                          ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                                          ),
                      lVar6 = 
                      ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                      , iVar15 != 0)))) {
                    plVar48 = (long *)(
                                      ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                                      + 0x30);
                    in_stack_000001e8 = s__h2_proto_stream__unexpected_flo_108ac7e66;
                    *(char ***)(unaff_x29 + -0x70) = &stack0x000001e8;
                    *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
                    plVar47 = (long *)0x1;
                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (lVar6,&stack0x00000530);
                    lVar6 = 
                    ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      in_stack_000001c8 =
                           *(long **)(
                                     ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                                     + 0x20);
                      in_stack_000001d0 =
                           *(long **)(
                                     ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                                     + 0x28);
                      _bStack00000000000001c0 = (char *)0x2;
                      plVar43 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar43 = (long *)&UNK_10b3c24c8;
                      }
                      puVar17 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar17 = &UNK_109adfc03;
                      }
                      iVar15 = (*(code *)plVar43[3])(puVar17,&stack0x000001c0);
                      if (iVar15 != 0) {
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar6,puVar17,plVar43,&stack0x000001c0,&stack0x00000530);
                      }
                    }
                  }
                  else {
                    lVar6 = 
                    ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      plVar43 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar43 = (long *)&UNK_10b3c24c8;
                      }
                      puVar17 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar17 = &UNK_109adfc03;
                      }
                      iVar15 = (*(code *)plVar43[3])(puVar17,&stack0x000004e0);
                      if (iVar15 != 0) {
                        in_stack_000001d8 =
                             (long *)(
                                     ___ZN14rama_http_core2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6d832f5a40731d5bE
                                     + 0x30);
                        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000500;
                        *(undefined **)(unaff_x29 + -0x78) =
                             &
                             __ZN88__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Display_GT_3fmt17h9f21c62600986cccE
                        ;
                        in_stack_000001c8 = (long *)&stack0x00000510;
                        _bStack00000000000001c0 = (char *)0x1;
                        in_stack_000001d0 = (long *)0x1;
                        plVar19 = *(long **)(lVar6 + 0x60);
                        plVar26 = *(long **)(lVar6 + 0x68);
                        plVar47 = *(long **)(lVar6 + 0x58);
                        *(byte **)(unaff_x29 + -0x70) = &stack0x000001c0;
                        *(undefined1 *)(unaff_x29 + -0x68) = 1;
                        in_stack_000001e8 = (char *)(unaff_x29 + -0x70);
                        plVar48 = (long *)0x1;
                        if (plVar19 == (long *)0x0) {
                          plVar48 = (long *)0x2;
                        }
                        (*(code *)plVar43[4])(puVar17,&stack0x00000530);
                      }
                    }
                  }
                  bVar10 = false;
                  plVar21 = (long *)0x0;
                  plVar23 = (long *)0x0;
                  plVar39 = (long *)CONCAT44(auVar32._8_4_,(int)CONCAT62(uVar40,0x101));
                  bVar38 = 1;
                  plVar42 = (long *)&UNK_10b209220;
                  plVar43 = (long *)0x1;
                  goto LAB_1003f278c;
                }
                puVar17 = &UNK_10b3fa5a0;
                _bStack00000000000001c0 = (char *)plVar46;
                goto LAB_1003f4190;
              }
              if ((cVar11 == '\x04') && ((*(byte *)((long)plVar39 + 0x69) & 1) != 0))
              goto LAB_1003f2768;
LAB_1003f2780:
              bVar38 = 4;
              plVar39 = (long *)CONCAT71((int7)((ulong)plVar46 >> 8),4);
              bVar10 = true;
LAB_1003f278c:
              __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                        (lVar22 + 0x18,&stack0x00000530,(int)lVar5 != 1000000000);
              uVar25 = *in_stack_000000a0;
              uVar28 = in_stack_000000a0[3];
              uVar27 = in_stack_000000a0[2];
              uVar18 = *(undefined8 *)((long)in_stack_000000a0 + 0x1f);
            } while (bVar10);
            in_stack_00000080[1] = in_stack_000000a0[1];
            *in_stack_00000080 = uVar25;
            in_stack_00000080[3] = CONCAT17((char)uVar18,(int7)uVar28);
            in_stack_00000080[2] = uVar27;
            *(undefined8 *)((long)in_stack_00000080 + 0x1f) = uVar18;
            uVar24 = extraout_x1_00;
LAB_1003f2ca0:
            unaff_x27 = (long *)&UNK_10b208fd0;
            if (bVar38 == 4) {
LAB_1003f2ca8:
              unaff_x27 = (long *)&UNK_10b208fd0;
              plStack0000000000000028 = plVar23;
              if ((*(long *)(unaff_x21 + 0xf0) != 4) ||
                 ((ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140)) <
                  *(ulong *)(unaff_x21 + 0x168))) {
                auVar31 = FUN_1007f4888();
                uVar24 = auVar31._8_8_;
                if ((auVar31._0_8_ & 1) == 0) {
                  if (uVar24 != 0) {
LAB_1003f2cdc:
                    __ZN108__LT_rama_http_core__h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h2ddafe6daea22a8dE
                              (&stack0x000001c0,uVar24);
                    uVar24 = extraout_x1_03;
                    plVar41 = (long *)_bStack00000000000001c0;
                    plVar2 = in_stack_000001c8;
                    plVar3 = in_stack_000001d0;
                    plVar7 = in_stack_000001d8;
                    plVar8 = in_stack_000001e0;
LAB_1003f3698:
                    in_stack_000001e0 = plVar8;
                    in_stack_000001d8 = plVar7;
                    in_stack_000001d0 = plVar3;
                    in_stack_000001c8 = plVar2;
                    _bStack00000000000001c0 = (char *)plVar41;
                    if (bStack00000000000001c0 == 4) goto LAB_1003f36e0;
                    bVar38 = bStack00000000000001c0;
                    if (bStack00000000000001c0 != 5) {
                      uStack0000000000000024 = (uint)bStack00000000000001c1;
                      iStack0000000000000020 = uStack00000000000001c2._2_4_;
                      in_stack_00000010 = in_stack_000001d8;
                      in_stack_00000018 = in_stack_000001c8;
                      in_stack_00000000 = in_stack_000001e0;
                      in_stack_00000008 = in_stack_000001d0;
                      bVar34 = bStack00000000000001c0;
                      if (*pcVar1 != '\x01') goto LAB_1003f39f4;
                      *pcVar1 = in_wzr;
                      plVar41 = plVar42;
                      goto LAB_1003f38c4;
                    }
                    goto LAB_1003f38b0;
                  }
                  if ((*(long *)(unaff_x21 + 0xf0) == 4) &&
                     (*(ulong *)(unaff_x21 + 0x168) <=
                      (ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140))))
                  goto LAB_1003f2d40;
                }
                goto LAB_1003f3878;
              }
LAB_1003f2d40:
              FUN_100805cf0(lVar22 + 0x198,lVar20 + 0x18,lVar22 + 0x200);
              unaff_x24 = (long *)(ulong)*(uint *)(unaff_x21 + 0x170);
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b6368a0 - 1 < 2 ||
                   ((bRam000000010b6368a0 != 0 &&
                    (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                        ), cVar11 != '\0')))))) &&
                 (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                     ),
                 lVar5 = 
                 ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                 , iVar13 != 0)) {
                plVar48 = (long *)(
                                  ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                  + 0x30);
                *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000004e0;
                *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
                plVar44 = (long *)0x1;
                plVar46 = (long *)(unaff_x29 + -0x70);
                plVar47 = (long *)0x1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar5,&stack0x00000530);
                lVar5 = 
                ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  plVar42 = *(long **)(
                                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                      + 0x20);
                  plVar43 = *(long **)(
                                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                      + 0x28);
                  plVar39 = (long *)0x5;
                  plVar41 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar41 = (long *)&UNK_10b3c24c8;
                  }
                  puVar17 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar17 = &UNK_109adfc03;
                  }
                  iVar13 = (*(code *)plVar41[3])(puVar17,&stack0x00000360);
                  if (iVar13 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar5,puVar17,plVar41,&stack0x00000360,&stack0x00000530);
                  }
                }
              }
              else {
                lVar5 = 
                ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  plVar2 = *(long **)(
                                     ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                     + 0x20);
                  plVar3 = *(long **)(
                                     ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                     + 0x28);
                  in_stack_000001e8 = (char *)0x5;
                  plVar41 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar41 = (long *)&UNK_10b3c24c8;
                  }
                  puVar17 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar17 = &UNK_109adfc03;
                  }
                  iVar13 = (*(code *)plVar41[3])(puVar17,&stack0x000001e8);
                  plVar7 = (long *)in_stack_000001e8;
                  if (iVar13 != 0) {
                    plVar48 = (long *)(
                                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h2015d6bfbc501dabE
                                      + 0x30);
                    *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000004e0;
                    *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
                    plVar44 = (long *)0x1;
                    plVar46 = (long *)(unaff_x29 + -0x70);
                    plVar47 = (long *)0x1;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar5,puVar17,plVar41,&stack0x00000360,&stack0x00000530);
                    plVar39 = plVar7;
                    plVar42 = plVar2;
                    plVar43 = plVar3;
                  }
                }
              }
              do {
                while( true ) {
                  __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize16pop_pending_open17hd8a5b0534cb88878E
                            (&stack0x00000360,lVar22 + 0x198,lVar22 + 0x200,lVar22 + 0x18);
                  if (plVar39 != (long *)0x0) {
                    FUN_10080c2dc(lVar22 + 0x198,&stack0x00000360);
                    func_0x000105a818f0(lVar22 + 0x198,&stack0x00000530);
                    plVar44 = plVar39;
                    plVar46 = plVar42;
                  }
                  FUN_100806aec(&stack0x00000530,lVar22 + 0x198,lVar20 + 0x18,lVar22 + 0x200,
                                unaff_x24,lVar22 + 0x18);
                  cVar11 = (char)plVar44;
                  uVar24 = extraout_x1_09;
                  plVar41 = plVar46;
                  plVar2 = plVar47;
                  plVar3 = plVar48;
                  plVar7 = plVar19;
                  plVar8 = plVar26;
                  if (cVar11 == '\n') goto LAB_1003f3698;
                  uVar27 = in_stack_00000088[1];
                  uVar18 = *in_stack_00000088;
                  uVar30 = in_stack_00000088[3];
                  uVar29 = in_stack_00000088[2];
                  uVar28 = *(undefined8 *)((long)in_stack_00000088 + 0x27);
                  uVar25 = *(undefined8 *)((long)in_stack_00000088 + 0x1f);
                  _memcpy(&stack0x00000230,&stack0x00000560,0x130);
                  if (cVar11 == '\t') break;
                  plVar39 = (long *)CONCAT71((int7)((ulong)plVar39 >> 8),cVar11);
                  in_stack_000000a0[1] = uVar27;
                  *in_stack_000000a0 = uVar18;
                  in_stack_000000a0[3] = CONCAT17((char)uVar25,(int7)uVar30);
                  in_stack_000000a0[2] = uVar29;
                  *(undefined8 *)((long)in_stack_000000a0 + 0x27) = uVar28;
                  *(undefined8 *)((long)in_stack_000000a0 + 0x1f) = uVar25;
                  _memcpy(&stack0x00000390,&stack0x00000230,0x130);
                  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                      ((bRam000000010b6368b8 - 1 < 2 ||
                       ((bRam000000010b6368b8 != 0 &&
                        (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                            (&
                                             __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h68589b5404d6c5f8E
                                            ), cVar12 != '\0')))))) &&
                     (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h68589b5404d6c5f8E
                                         ),
                     lVar5 = 
                     ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h68589b5404d6c5f8E
                     , iVar13 != 0)) {
                    plVar48 = (long *)(
                                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h68589b5404d6c5f8E
                                      + 0x30);
                    *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000360;
                    *(undefined **)(unaff_x29 + -0x68) = &DAT_1013ebde0;
                    *(char **)(unaff_x29 + -0x80) = s_writing__frame___108ac7cc9;
                    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
                    plVar44 = (long *)0x1;
                    plVar46 = (long *)&stack0x00000520;
                    plVar47 = (long *)0x1;
                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (lVar5,&stack0x00000530);
                    lVar5 = 
                    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h68589b5404d6c5f8E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      plVar41 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar41 = (long *)&UNK_10b3c24c8;
                      }
                      puVar17 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar17 = &UNK_109adfc03;
                      }
                      iVar13 = (*(code *)plVar41[3])(puVar17,&stack0x000004e0);
                      if (iVar13 != 0) {
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar5,puVar17,plVar41,&stack0x000004e0,&stack0x00000530);
                      }
                    }
                  }
                  else {
                    lVar5 = 
                    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize13poll_complete10__CALLSITE17h68589b5404d6c5f8E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      plVar41 = plRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        plVar41 = (long *)&UNK_10b3c24c8;
                      }
                      puVar17 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar17 = &UNK_109adfc03;
                      }
                      iVar13 = (*(code *)plVar41[3])(puVar17,&stack0x000004c8);
                      if (iVar13 != 0) {
                        plVar19 = *(long **)(lVar5 + 0x60);
                        plVar26 = *(long **)(lVar5 + 0x68);
                        plVar46 = *(long **)(lVar5 + 0x50);
                        plVar47 = *(long **)(lVar5 + 0x58);
                        plVar44 = (long *)0x1;
                        if (plVar46 == (long *)0x0) {
                          plVar44 = (long *)0x2;
                        }
                        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000004e0;
                        *(undefined1 *)(unaff_x29 + -0x78) = 1;
                        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
                        *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
                        plVar48 = (long *)0x1;
                        if (plVar19 == (long *)0x0) {
                          plVar48 = (long *)0x2;
                        }
                        (*(code *)plVar41[4])(puVar17,&stack0x00000530);
                      }
                    }
                  }
                  if (cVar11 == '\0') {
                    *(undefined4 *)(lVar22 + 0x1d4) = 1;
                    *(undefined8 *)(lVar22 + 0x1d8) = in_stack_00000398;
                  }
                  _memcpy(&stack0x00000530,&stack0x00000360,0x160);
                  cVar11 = FUN_1007efd48(unaff_x21 + 0x38,&stack0x00000530);
                  if (cVar11 != '\x0f') {
                    _bStack00000000000001c0 = CONCAT11(cVar11,3);
                    uVar24 = extraout_x1_10;
                    plVar41 = (long *)_bStack00000000000001c0;
                    plVar2 = in_stack_000001c8;
                    plVar3 = in_stack_000001d0;
                    plVar7 = in_stack_000001d8;
                    plVar8 = in_stack_000001e0;
                    goto LAB_1003f3698;
                  }
                  if ((*(long *)(unaff_x21 + 0xf0) != 4) ||
                     ((ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140)) <
                      *(ulong *)(unaff_x21 + 0x168))) {
                    auVar31 = FUN_1007f4888();
                    uVar24 = auVar31._8_8_;
                    if ((auVar31._0_8_ & 1) == 0) {
                      if (uVar24 != 0) {
                        __ZN108__LT_rama_http_core__h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h2ddafe6daea22a8dE
                                  (&stack0x000001c0,uVar24);
                        uVar24 = extraout_x1_11;
                        plVar41 = (long *)_bStack00000000000001c0;
                        plVar2 = in_stack_000001c8;
                        plVar3 = in_stack_000001d0;
                        plVar7 = in_stack_000001d8;
                        plVar8 = in_stack_000001e0;
                        goto LAB_1003f3698;
                      }
                      if ((*(long *)(unaff_x21 + 0xf0) == 4) &&
                         (*(ulong *)(unaff_x21 + 0x168) <=
                          (ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140))))
                      goto LAB_1003f3184;
                    }
                    _bStack00000000000001c0 = (char *)CONCAT71(_bStack00000000000001c1,5);
                    plVar41 = (long *)_bStack00000000000001c0;
                    plVar2 = in_stack_000001c8;
                    plVar3 = in_stack_000001d0;
                    plVar7 = in_stack_000001d8;
                    plVar8 = in_stack_000001e0;
                    goto LAB_1003f3698;
                  }
LAB_1003f3184:
                  FUN_100805cf0(lVar22 + 0x198,lVar20 + 0x18,lVar22 + 0x200);
                }
                auVar31 = FUN_1007f4888();
                uVar24 = auVar31._8_8_;
                if ((auVar31._0_8_ & 1) != 0) goto LAB_1003f3878;
                if (uVar24 != 0) goto LAB_1003f2cdc;
                uVar24 = FUN_100805cf0(lVar22 + 0x198,lVar20 + 0x18,lVar22 + 0x200);
              } while ((uVar24 & 1) != 0);
LAB_1003f36e0:
              auVar31 = (**(code **)*in_stack_00000078)(in_stack_00000078[1]);
              uVar24 = auVar31._8_8_;
              if (*(long *)(lVar22 + 0x180) != 0) {
                (**(code **)(*(long *)(lVar22 + 0x180) + 0x18))(*(undefined8 *)(lVar22 + 0x188));
                uVar24 = extraout_x1_12;
              }
              *(undefined1 (*) [16])(lVar22 + 0x180) = auVar31;
              cVar11 = *pcVar1;
              if (cVar11 == '\x01') {
                *pcVar1 = in_wzr;
              }
              bVar38 = 4;
              plVar41 = plVar42;
              bVar34 = 4;
              if (cVar11 != '\x01') goto LAB_1003f39f4;
            }
            else {
              uStack000000000000003c = (uint)bVar36;
              plStack0000000000000028 = in_stack_00000250;
              plStack0000000000000030 = in_stack_00000248;
              plStack0000000000000040 = plVar37;
              plStack0000000000000048 = in_stack_00000240;
              iStack0000000000000054 = iVar13;
              if (bVar38 == 5) goto LAB_1003f3878;
LAB_1003f3894:
              in_stack_00000000 = plStack0000000000000028;
              in_stack_00000008 = plStack0000000000000048;
              in_stack_00000010 = plStack0000000000000030;
              in_stack_00000018 = plStack0000000000000040;
              iStack0000000000000020 = iStack0000000000000054;
              uStack0000000000000024 = uStack000000000000003c;
LAB_1003f38b0:
              bVar34 = bVar38;
              if (*pcVar1 != '\x01') goto LAB_1003f39f4;
              *pcVar1 = in_wzr;
              plVar41 = plVar42;
              plStack0000000000000028 = plVar23;
            }
          }
          else {
            iStack0000000000000054 = (int)((ulong)plVar39 >> 0x20);
            bVar38 = (byte)plVar39;
            if ((*(long *)(unaff_x21 + 0xf0) == 4) &&
               (*(ulong *)(unaff_x21 + 0x168) <=
                (ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140)))) {
LAB_1003f2e9c:
              plVar46 = (long *)CONCAT44((int)((ulong)plVar46 >> 0x20),iVar14);
              plVar44 = (long *)CONCAT71((uint7)((ulong)plVar44 >> 8) & 0xffffff,7);
              uStack000000000000003c = FUN_1007efd48(unaff_x21 + 0x38,&stack0x00000530);
              if ((uStack000000000000003c & 0xff) == 0xf) {
                auVar31 = __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl10inc_window17h61842d2eab291982E
                                    (lVar22 + 0x100,iVar14);
                uVar24 = auVar31._8_8_;
                if ((auVar31._0_8_ & 1) == 0) goto LAB_1003f2264;
                if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                  uVar24 = (ulong)bRam000000010b636c18;
                  if (1 < bRam000000010b636c18 - 1) {
                    if (bRam000000010b636c18 != 0) {
                      cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                         );
                      if (cVar11 != '\0') goto LAB_1003f2f04;
                      uVar24 = 0;
                    }
                    goto LAB_1003f3730;
                  }
LAB_1003f2f04:
                  iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                     );
                  uVar24 = extraout_x1_05;
                  if (iVar13 == 0) goto LAB_1003f3730;
                  plVar48 = (long *)(
                                    ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                    + 0x30);
                  in_stack_000001c8 = (long *)&stack0x00000200;
                  _bStack00000000000001c0 = s__h2_stream_recv__unexpected_upda_108ac7ea8;
                  plVar44 = (long *)0x0;
                  plVar46 = (long *)&stack0x000004e0;
                  plVar47 = (long *)0x1;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                             ,&stack0x00000530);
                  lVar22 = 
                  ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                  ;
                  uVar24 = extraout_x1_06;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    plVar37 = *(long **)(
                                        ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                        + 0x20);
                    in_stack_00000240 =
                         *(long **)(
                                   ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                   + 0x28);
                    puVar35 = (undefined1 *)0x2;
                    plVar21 = plRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      plVar21 = (long *)&UNK_10b3c24c8;
                    }
                    puVar17 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar17 = &UNK_109adfc03;
                    }
                    iVar13 = (*(code *)plVar21[3])(puVar17,&stack0x00000230);
                    uVar24 = extraout_x1_07;
                    if (iVar13 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar17,plVar21,&stack0x00000230,&stack0x00000530);
                      uVar24 = extraout_x1_08;
                    }
                  }
                }
                else {
LAB_1003f3730:
                  lVar22 = 
                  ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    plVar37 = *(long **)(
                                        ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                        + 0x20);
                    in_stack_00000240 =
                         *(long **)(
                                   ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                   + 0x28);
                    puVar35 = (undefined1 *)0x2;
                    plVar21 = plRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      plVar21 = (long *)&UNK_10b3c24c8;
                    }
                    puVar17 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar17 = &UNK_109adfc03;
                    }
                    iVar13 = (*(code *)plVar21[3])(puVar17,&stack0x00000230);
                    uVar24 = extraout_x1_13;
                    if (iVar13 != 0) {
                      plVar48 = (long *)(
                                        ___ZN14rama_http_core2h25proto7streams4recv4Recv29send_connection_window_update28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfb618f5a199cc7b9E
                                        + 0x30);
                      in_stack_000001c8 = (long *)&stack0x00000200;
                      _bStack00000000000001c0 = s__h2_stream_recv__unexpected_upda_108ac7ea8;
                      plVar44 = (long *)0x0;
                      plVar46 = (long *)&stack0x000004e0;
                      plVar47 = (long *)0x1;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar17,plVar21,&stack0x00000230,&stack0x00000530);
                      uVar24 = extraout_x1_14;
                    }
                  }
                }
                iStack0000000000000054 = auVar31._8_4_;
                plStack0000000000000028 = (long *)0x0;
                plStack0000000000000030 = (long *)0x0;
                plVar21 = (long *)0x0;
                plVar23 = (long *)0x0;
                plStack0000000000000048 = (long *)0x1;
                plVar39 = (long *)CONCAT62((int6)((ulong)plVar39 >> 0x10),CONCAT11(1,bVar38));
                plStack0000000000000040 = (long *)&UNK_10b209220;
                uStack000000000000003c = 1;
                bVar38 = 1;
                goto LAB_1003f3894;
              }
              bVar38 = 3;
              uVar24 = extraout_x1_04;
LAB_1003f3044:
              plStack0000000000000040 = plVar42;
              plStack0000000000000048 = plVar43;
              if (bVar38 != 5) goto LAB_1003f3894;
            }
            else {
              auVar31 = FUN_1007f4888();
              uVar24 = auVar31._8_8_;
              if ((auVar31._0_8_ & 1) == 0) {
                if (uVar24 == 0) {
                  if ((*(long *)(unaff_x21 + 0xf0) == 4) &&
                     (*(ulong *)(unaff_x21 + 0x168) <=
                      (ulong)(*(long *)(unaff_x21 + 0x148) - *(long *)(unaff_x21 + 0x140))))
                  goto LAB_1003f2e9c;
                }
                else {
                  __ZN108__LT_rama_http_core__h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h2ddafe6daea22a8dE
                            (&stack0x00000360,uVar24);
                  uVar24 = extraout_x1_01;
                  if (bVar38 != 5) {
                    if (bVar38 == 4) goto LAB_1003f2264;
                    uStack000000000000003c = (uint)(byte)((ulong)plVar39 >> 8);
                    goto LAB_1003f3044;
                  }
                }
              }
            }
LAB_1003f3878:
            bVar38 = 5;
            bVar34 = 5;
            if (*pcVar1 == '\x01') {
              *pcVar1 = in_wzr;
              plVar41 = plVar42;
              plStack0000000000000028 = plVar23;
            }
            else {
LAB_1003f39f4:
              bVar38 = bVar34;
              __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
              uVar24 = extraout_x1_16;
              plVar41 = plVar42;
              plStack0000000000000028 = plVar23;
            }
          }
LAB_1003f38c4:
          if (*(char *)unaff_x25 == '\x01') {
            *(char *)unaff_x25 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(unaff_x25,0);
            uVar24 = extraout_x1_17;
          }
          if ((bVar38 == 4) &&
             ((*in_stack_000000e8 != 0 ||
              (((bVar38 = 5, (*(byte *)(unaff_x21 + 0x55c) & 1) == 0 &&
                (*(int *)(unaff_x21 + 0x550) != 0)) && (*(int *)(unaff_x21 + 0x554) != 0x7fffffff)))
              ))) {
            lVar22 = *in_stack_000000f0;
            pcVar1 = (char *)(lVar22 + 0x10);
            if (*pcVar1 == '\0') {
              *pcVar1 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar1,uVar24,1000000000);
              uVar24 = extraout_x1_18;
            }
            if (*(long *)(lVar22 + 0x30) == 0) {
              bVar10 = *(long *)(lVar22 + 0x40) != 0;
              if (*pcVar1 != '\x01') goto LAB_1003f3a24;
              *pcVar1 = in_wzr;
            }
            else {
              bVar10 = true;
              if (*pcVar1 == '\x01') {
                *pcVar1 = in_wzr;
              }
              else {
LAB_1003f3a24:
                __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
                uVar24 = extraout_x1_19;
              }
            }
            if (!bVar10) {
              lVar22 = *in_stack_000000f0;
              pcVar1 = (char *)(lVar22 + 0x10);
              if (*pcVar1 == '\0') {
                *pcVar1 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar1,uVar24,1000000000);
              }
              uVar49 = *(uint *)(lVar22 + 0x14c);
              if (*pcVar1 == '\x01') {
                *pcVar1 = in_wzr;
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
              }
              plVar19 = (long *)(ulong)uVar49;
              plVar44 = (long *)&UNK_10b209220;
              plVar46 = (long *)0x1;
              plVar47 = (long *)0x0;
              plVar48 = (long *)0x0;
              __ZN14rama_http_core2h25proto7go_away6GoAway11go_away_now17h21d25260dbfc718eE
                        (in_stack_000000e0,&stack0x00000530);
              unaff_x23 = &stack0x000001a8;
              goto LAB_1003f1a54;
            }
            bVar38 = 5;
          }
          unaff_x23 = (undefined8 *)(ulong)uStack0000000000000024;
          unaff_x28 = plVar44;
          in_stack_000000e0 = plVar46;
          in_stack_000000e8 = plVar47;
          in_stack_000000d8 = plVar48;
          plVar37 = in_stack_00000018;
          in_stack_00000240 = in_stack_00000008;
          plStack0000000000000030 = in_stack_00000000;
          bVar34 = bVar38;
          iVar13 = iStack0000000000000020;
joined_r0x0001003f3c20:
          if (in_stack_00000140 != 2) {
            lVar22 = in_stack_00000148;
            if ((in_stack_00000140 & 1) != 0) {
              lVar22 = in_stack_00000148 +
                       (*(long *)(in_stack_00000150 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
            }
            (**(code **)(in_stack_00000150 + 0x68))(lVar22,&stack0x00000158);
            bVar34 = bVar38;
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (in_stack_00000160 != 0)) {
            unaff_x28 = (long *)&stack0x00000360;
            in_stack_000000e0 = (long *)&DAT_100c7b3a0;
            FUN_1011d7d74(&stack0x00000140,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000530);
          }
          FUN_100dddd8c(&stack0x00000140);
          if (in_stack_00000118 != 2) {
            lVar22 = in_stack_00000120;
            if ((in_stack_00000118 & 1) != 0) {
              lVar22 = in_stack_00000120 +
                       (*(long *)(in_stack_00000128 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
            }
            (**(code **)(in_stack_00000128 + 0x68))(lVar22,&stack0x00000130);
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (in_stack_00000138 != 0)) {
            unaff_x28 = (long *)&stack0x00000360;
            in_stack_000000e0 = (long *)&DAT_100c7b3a0;
            FUN_1011d7d74(&stack0x00000118,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000530);
          }
          FUN_100dddd8c(&stack0x00000118);
          uVar45 = (undefined7)((ulong)unaff_x28 >> 8);
          if (bVar34 == 4) {
            uVar18 = CONCAT71(uVar45,5);
          }
          else if (bVar34 == 5) {
            uVar18 = CONCAT71(uVar45,6);
            if ((in_stack_00000090 & 0x100000000) != 0) {
              lVar22 = *in_stack_000000f0;
              pcVar1 = (char *)(lVar22 + 0x10);
              if (*pcVar1 == '\0') {
                *pcVar1 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar1,extraout_x1_20,1000000000);
              }
              bVar10 = true;
              if ((*(long *)(lVar22 + 0x30) == 0) && (*(long *)(lVar22 + 0x40) == 0)) {
                bVar10 = 1 < *(ulong *)(lVar22 + 0x298);
              }
              if (*pcVar1 == '\x01') {
                *pcVar1 = in_wzr;
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
              }
              if (!bVar10) {
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                   (((bRam000000010b6361e0 - 1 < 2 ||
                     ((bRam000000010b6361e0 != 0 &&
                      (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                                          ), cVar11 != '\0')))) &&
                    (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                                        ), iVar13 != 0)))) {
                  _bStack00000000000001c0 = &stack0x00000200;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                             ,&stack0x00000360);
                  lVar22 = 
                  ___ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    plVar46 = plRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      plVar46 = (long *)&UNK_10b3c24c8;
                    }
                    puVar17 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar17 = &UNK_109adfc03;
                    }
                    iVar13 = (*(code *)plVar46[3])(puVar17,&stack0x00000230);
                    if (iVar13 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar17,plVar46,&stack0x00000230,&stack0x00000360);
                    }
                  }
                }
                else {
                  lVar22 = 
                  ___ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    in_stack_00000108 =
                         *(undefined8 *)
                          (
                          ___ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                          + 0x20);
                    in_stack_00000110 =
                         *(undefined8 *)
                          (
                          ___ZN100__LT_rama_http_core__h2__client__Connection_LT_T_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h09ec9c6488f26a70E
                          + 0x28);
                    in_stack_00000100 = 5;
                    plVar46 = plRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      plVar46 = (long *)&UNK_10b3c24c8;
                    }
                    puVar17 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar17 = &UNK_109adfc03;
                    }
                    iVar13 = (*(code *)plVar46[3])(puVar17,&stack0x00000100);
                    if (iVar13 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar17,plVar46,&stack0x00000100,&stack0x00000360);
                    }
                  }
                }
                (**(code **)(*(long *)*in_stack_000000f8 + 0x10))(((long *)*in_stack_000000f8)[1]);
              }
            }
          }
          else {
            in_stack_000000e0 = plVar37;
            if (bVar34 < 2) {
              if (bVar34 == 0) {
                in_stack_000000e0 = (long *)((ulong)plVar37 & 0xffffffff);
              }
            }
            else if (bVar34 == 2) {
              if (plVar37 == (long *)0x8000000000000000) {
                in_stack_000000e0 = (long *)((ulong)((uint)unaff_x23 & 0xff) << 0x20 | 3);
              }
              else {
                in_stack_000000e0 =
                     (long *)__ZN3std2io5error5Error3new17h29bf53227769a2d6E
                                       (unaff_x23,&stack0x00000530);
                unaff_x28 = plVar37;
              }
              bVar34 = 4;
            }
            uVar18 = CONCAT44(iVar13,(int)CONCAT62((int6)((ulong)unaff_x28 >> 0x10),
                                                   CONCAT11((char)unaff_x23,bVar34)));
            in_stack_000000e8 = in_stack_00000240;
            in_stack_000000d8 = in_stack_00000010;
            plVar19 = plStack0000000000000030;
          }
          in_stack_00000098[1] = in_stack_000000e0;
          *in_stack_00000098 = uVar18;
          in_stack_00000098[3] = in_stack_000000d8;
          in_stack_00000098[2] = in_stack_000000e8;
          in_stack_00000098[4] = plVar19;
          return;
        }
        plVar19 = (long *)(*in_stack_000000f0 + in_stack_000000c0);
        plVar26 = (long *)(in_stack_000000f0[1] + in_stack_000000c8);
        FUN_1007fba30(&stack0x00000230,&stack0x00000530,&stack0x00000360);
        if (bVar34 != 4) {
          unaff_x23 = (undefined8 *)(ulong)bVar36;
          in_stack_00000010 = in_stack_00000248;
          plStack0000000000000030 = in_stack_00000250;
          bVar38 = bVar34;
          goto joined_r0x0001003f3c20;
        }
        unaff_x23 = &stack0x000001a8;
        plVar39 = plVar33;
        plVar43 = in_stack_00000190;
        plVar21 = in_stack_00000198;
        plStack0000000000000028 = in_stack_000001a0;
        plVar44 = unaff_x28;
        plVar46 = in_stack_000000e0;
        plVar47 = in_stack_000000e8;
        plVar48 = in_stack_000000d8;
LAB_1003f1a54:
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b6367f8 - 1 < 2 ||
             ((bRam000000010b6367f8 != 0 &&
              (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                                  ), cVar11 != '\0')))))) &&
           (iVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                               ), iVar13 != 0)) {
          plStack0000000000000030 =
               (long *)(
                       ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                       + 0x30);
          plStack0000000000000188 = (long *)&DAT_1011e1044;
          plVar39 = (long *)0x1;
          plVar42 = (long *)&stack0x000004c8;
          plVar43 = (long *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                     ,&stack0x00000360);
          lVar22 = 
          ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
          ;
          plVar33 = unaff_x28;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            plVar37 = *(long **)(
                                ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                                + 0x20);
            in_stack_00000240 =
                 *(long **)(
                           ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                           + 0x28);
            puVar35 = (undefined1 *)0x5;
            plVar21 = plRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              plVar21 = (long *)&UNK_10b3c24c8;
            }
            puVar17 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar17 = &UNK_109adfc03;
            }
            iVar13 = (*(code *)plVar21[3])(puVar17,&stack0x00000230);
            if (iVar13 != 0) {
              plVar19 = *(long **)(lVar22 + 0x60);
              plVar26 = *(long **)(lVar22 + 0x68);
              plVar46 = *(long **)(lVar22 + 0x50);
              plVar47 = *(long **)(lVar22 + 0x58);
              plVar44 = (long *)0x1;
              if (plVar46 == (long *)0x0) {
                plVar44 = (long *)0x2;
              }
              _bStack00000000000001c0 = &stack0x00000360;
              in_stack_000001c8 = (long *)CONCAT71(in_stack_000001c8._1_7_,1);
              plVar48 = (long *)0x1;
              if (plVar19 == (long *)0x0) {
                plVar48 = (long *)0x2;
              }
              (*(code *)plVar21[4])(puVar17,&stack0x00000530);
            }
          }
          goto LAB_1003f1d98;
        }
        unaff_x20 = 
        ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
        ;
        plVar42 = plVar41;
        plStack0000000000000030 = plVar21;
      } while ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
              (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5));
      in_stack_00000170 =
           *(undefined8 *)
            (
            ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
            + 0x20);
      in_stack_00000178 =
           *(undefined8 *)
            (
            ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
            + 0x28);
      in_stack_00000168 = 5;
      unaff_x19 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        unaff_x19 = (long *)&UNK_10b3c24c8;
      }
      unaff_x26 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x26 = &UNK_109adfc03;
      }
      iVar13 = (*(code *)unaff_x19[3])(unaff_x26,&stack0x00000168);
    } while (iVar13 == 0);
    param_1 = (long *)(
                      ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h2031acd886753486E
                      + 0x30);
    in_stack_000001c8 = (long *)&DAT_1011e1044;
    _bStack00000000000001c0 = (char *)unaff_x28;
  } while( true );
}

