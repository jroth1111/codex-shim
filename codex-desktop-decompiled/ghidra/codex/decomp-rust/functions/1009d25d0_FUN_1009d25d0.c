
/* WARNING: Removing unreachable block (ram,0x0001009d3df0) */
/* WARNING: Removing unreachable block (ram,0x0001009d3e0c) */
/* WARNING: Removing unreachable block (ram,0x0001009d525c) */
/* WARNING: Removing unreachable block (ram,0x0001009d3e18) */
/* WARNING: Removing unreachable block (ram,0x0001009d3e9c) */
/* WARNING: Removing unreachable block (ram,0x0001009d5270) */
/* WARNING: Removing unreachable block (ram,0x0001009d31fc) */
/* WARNING: Removing unreachable block (ram,0x0001009d3260) */
/* WARNING: Removing unreachable block (ram,0x0001009d356c) */
/* WARNING: Removing unreachable block (ram,0x0001009d39b8) */
/* WARNING: Removing unreachable block (ram,0x0001009d39cc) */
/* WARNING: Removing unreachable block (ram,0x0001009d3278) */
/* WARNING: Removing unreachable block (ram,0x0001009d3284) */
/* WARNING: Removing unreachable block (ram,0x0001009d32ec) */
/* WARNING: Removing unreachable block (ram,0x0001009d32fc) */
/* WARNING: Removing unreachable block (ram,0x0001009d3338) */
/* WARNING: Removing unreachable block (ram,0x0001009d3344) */
/* WARNING: Removing unreachable block (ram,0x0001009d335c) */
/* WARNING: Removing unreachable block (ram,0x0001009d336c) */
/* WARNING: Removing unreachable block (ram,0x0001009d3394) */
/* WARNING: Removing unreachable block (ram,0x0001009d3570) */
/* WARNING: Removing unreachable block (ram,0x0001009d3648) */
/* WARNING: Removing unreachable block (ram,0x0001009d3658) */
/* WARNING: Removing unreachable block (ram,0x0001009d369c) */
/* WARNING: Removing unreachable block (ram,0x0001009d36a8) */
/* WARNING: Removing unreachable block (ram,0x0001009d36c0) */
/* WARNING: Removing unreachable block (ram,0x0001009d3734) */
/* WARNING: Removing unreachable block (ram,0x0001009d375c) */
/* WARNING: Removing unreachable block (ram,0x0001009d3578) */
/* WARNING: Removing unreachable block (ram,0x0001009d3594) */
/* WARNING: Removing unreachable block (ram,0x0001009d3914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009d25d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined1 uVar12;
  char cVar13;
  byte bVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long unaff_x19;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  char *unaff_x23;
  char cVar25;
  long lVar26;
  long lVar27;
  char *unaff_x27;
  ulong uVar28;
  undefined4 *unaff_x28;
  long unaff_x29;
  byte bVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 *in_stack_00000000;
  undefined1 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined4 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long *plVar36;
  undefined *puVar37;
  long *in_stack_00000b70;
  
code_r0x0001009d25d0:
  *(char **)(unaff_x29 + -0xd8) = s__Session_not_found_for_request_i_108acd106;
  *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x90;
  plVar36 = (long *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000004b0);
  uVar19 = extraout_x1_02;
  if ((*unaff_x27 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar37 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar37 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000b90);
    uVar19 = extraout_x1_03;
    if (iVar8 != 0) {
      *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000004b0;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0xc0) = &DAT_1061c2098;
      (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
      uVar19 = extraout_x1_04;
    }
  }
LAB_1009d2bf0:
  if (*unaff_x23 == '\0') {
    *unaff_x23 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(unaff_x23,uVar19,1000000000);
  }
  FUN_1060fa678(unaff_x23,1,unaff_x23);
  do {
    if (((*(byte *)(unaff_x19 + 0x8b1) & 1) != 0) && (*(long *)(unaff_x19 + 0x880) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x888));
    }
    *(undefined1 *)(unaff_x19 + 0x8b1) = 0;
    plVar16 = *(long **)(unaff_x19 + 0x870);
    pcVar9 = unaff_x27;
    if (plVar16 != (long *)0x0) {
      lVar6 = *plVar16;
      *plVar16 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x870);
      }
    }
LAB_1009d35e0:
    if ((*(ulong *)(unaff_x19 + 0x848) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x850));
    }
    *in_stack_00000008 = 1;
    FUN_100d12390(in_stack_00000010);
    func_0x000100dccb50(*(undefined8 *)(unaff_x19 + 0x808));
LAB_1009d360c:
    uVar19 = *(ulong *)(unaff_x19 + 0x778) ^ 0x8000000000000000;
    if (-1 < (long)*(ulong *)(unaff_x19 + 0x778)) {
      uVar19 = 4;
    }
    if (3 < uVar19 || uVar19 == 2) {
      func_0x000100df6938(unaff_x19 + 0x778);
    }
    *in_stack_00000000 = 1;
    FUN_100cf8338(in_stack_00000028);
LAB_1009d3d24:
    plVar16 = (long *)(unaff_x19 + 0x68);
    *(long **)(unaff_x19 + 0x708) = plVar16;
    puVar1 = (undefined8 *)(unaff_x19 + 0x708);
    *(undefined1 *)(unaff_x19 + 0x718) = 0;
    *(long **)(unaff_x19 + 0x710) = plVar16;
    lVar6 = (*
            ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
            )();
    if (*(char *)(lVar6 + 0x48) == '\x01') {
LAB_1009d3d6c:
      cVar7 = *(char *)(lVar6 + 0x44);
      cVar25 = *(char *)(lVar6 + 0x45);
      cVar13 = cVar25;
      if (cVar7 != '\x01') {
LAB_1009d3d88:
        *(char *)(lVar6 + 0x45) = cVar13;
        goto LAB_1009d3d8c;
      }
      if (cVar25 != '\0') {
        cVar13 = cVar25 + -1;
        goto LAB_1009d3d88;
      }
      FUN_10610bbb4(*(undefined8 *)*in_stack_00000020,((undefined8 *)*in_stack_00000020)[1]);
      goto LAB_1009d51c8;
    }
    cVar7 = '\0';
    cVar25 = '\0';
    if (*(char *)(lVar6 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar6,&DAT_100c35d48);
      *(undefined1 *)(lVar6 + 0x48) = 1;
      goto LAB_1009d3d6c;
    }
LAB_1009d3d8c:
    lVar27 = *plVar16;
    func_0x000100fc7014(&stack0x000004b0,lVar27 + 0x1a0,lVar27 + 0x80);
    if (plVar36 != (long *)0x17) {
      if (plVar36 != (long *)0x18) {
        _memcpy(&stack0x00000800,&stack0x000004b0,0x348);
        pcVar10 = (char *)(lVar27 + 0x1c0);
        if (*pcVar10 == '\0') {
          *pcVar10 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar10,extraout_x1_08,1000000000);
        }
        FUN_1060fa678(pcVar10,1,pcVar10);
        _memcpy(&stack0x00000030,&stack0x000004b8,0x340);
        goto LAB_1009d3eb0;
      }
      __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                (lVar27 + 0x100,*in_stack_00000020);
      func_0x000100fc7014(&stack0x000004b0,lVar27 + 0x1a0,lVar27 + 0x80);
      if ((*(char *)(lVar27 + 0x1b8) == '\x01') &&
         (*(ulong *)(lVar27 + 0x1e8) == *(ulong *)(lVar27 + 0x1e0) >> 1)) {
        *(undefined1 *)(unaff_x19 + 0x718) = 1;
        *(undefined8 *)(unaff_x19 + 0x70) = 0x17;
        _memcpy(unaff_x19 + 0x78,&stack0x00000030,0x340);
LAB_1009d4ff8:
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
          if (1 < bRam000000010b62de20 - 1) {
            if (bRam000000010b62de20 != 0) {
              cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1957e379b0b7a23fE
                                );
              pcVar9 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
              if (cVar7 != '\0') goto LAB_1009d5024;
            }
            goto LAB_1009d5088;
          }
LAB_1009d5024:
          uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1957e379b0b7a23fE
                             );
          if ((uVar19 & 1) == 0) goto LAB_1009d5088;
          FUN_1009db02c(&stack0x00000800);
        }
        else {
LAB_1009d5088:
          uVar11 = 
          ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1957e379b0b7a23fE
          ;
          if ((*pcVar9 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar37 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar37 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x000003f0);
            if (iVar8 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar11,puVar3,puVar37,&stack0x000003f0,&stack0x00000800);
            }
          }
        }
        FUN_100d879e4(unaff_x19 + 0x68);
        FUN_100e38d2c();
        uVar11 = 0;
        uVar12 = 1;
      }
      else {
        if (cVar7 != '\0') {
          if (*(char *)(lVar6 + 0x48) != '\x01') {
            if (*(char *)(lVar6 + 0x48) == '\x02') goto LAB_1009d51c8;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (lVar6,&DAT_1060edbcc);
            *(undefined1 *)(lVar6 + 0x48) = 1;
          }
          *(undefined1 *)(lVar6 + 0x44) = 1;
          *(char *)(lVar6 + 0x45) = cVar25;
        }
LAB_1009d51c8:
        uVar12 = 3;
        *(undefined1 *)(unaff_x19 + 0x718) = 3;
        uVar11 = 1;
      }
      goto LAB_1009d51d4;
    }
    if (*(ulong *)(lVar27 + 0x1e8) != *(ulong *)(lVar27 + 0x1e0) >> 1) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,&UNK_10b23a6d0);
      goto LAB_1009d5288;
    }
LAB_1009d3eb0:
    puVar23 = (undefined8 *)(unaff_x19 + 0x70);
    *puVar23 = plVar36;
    *(undefined1 *)(unaff_x19 + 0x718) = 1;
    _memcpy(unaff_x19 + 0x78,&stack0x00000030,0x340);
    if (plVar36 == (long *)0x17) goto LAB_1009d4ff8;
    _memcpy(unaff_x19 + 0x3b8,puVar23,0x348);
    lVar6 = 0;
    if (0x12 < *(ulong *)(unaff_x19 + 0x3b8)) {
      lVar6 = *(ulong *)(unaff_x19 + 0x3b8) - 0x13;
    }
    if (lVar6 < 2) {
      if (lVar6 != 0) {
        *(undefined8 *)(unaff_x19 + 0x758) = *(undefined8 *)(unaff_x19 + 200);
        *(undefined8 *)(unaff_x19 + 0x740) = *(undefined8 *)(unaff_x19 + 0xb0);
        *(undefined8 *)(unaff_x19 + 0x738) = *(undefined8 *)(unaff_x19 + 0xa8);
        *(undefined8 *)(unaff_x19 + 0x750) = *(undefined8 *)(unaff_x19 + 0xc0);
        *(undefined8 *)(unaff_x19 + 0x748) = *(undefined8 *)(unaff_x19 + 0xb8);
        *(undefined8 *)(unaff_x19 + 0x720) = *(undefined8 *)(unaff_x19 + 0x90);
        *(undefined8 *)(unaff_x19 + 0x718) = *(undefined8 *)(unaff_x19 + 0x88);
        *(undefined8 *)(unaff_x19 + 0x730) = *(undefined8 *)(unaff_x19 + 0xa0);
        *(undefined8 *)(unaff_x19 + 0x728) = *(undefined8 *)(unaff_x19 + 0x98);
        *(undefined8 *)(unaff_x19 + 0x710) = *(undefined8 *)(unaff_x19 + 0x80);
        *puVar1 = *(undefined8 *)(unaff_x19 + 0x78);
        *(long *)(unaff_x19 + 0x760) = unaff_x19;
        *(undefined1 *)(unaff_x19 + 0x8f8) = 0;
        *(undefined2 *)unaff_x28 = 0;
        *(undefined2 *)(unaff_x19 + 0x8fb) = 0x101;
        puVar1 = (undefined8 *)(unaff_x19 + 0x768);
        *(undefined8 *)(unaff_x19 + 0x790) = *(undefined8 *)(unaff_x19 + 0x730);
        *(undefined8 *)(unaff_x19 + 0x788) = *(undefined8 *)(unaff_x19 + 0x728);
        *(undefined8 *)(unaff_x19 + 0x7a0) = *(undefined8 *)(unaff_x19 + 0x740);
        *(undefined8 *)(unaff_x19 + 0x798) = *(undefined8 *)(unaff_x19 + 0x738);
        *(undefined8 *)(unaff_x19 + 0x7b0) = *(undefined8 *)(unaff_x19 + 0x750);
        *(undefined8 *)(unaff_x19 + 0x7a8) = *(undefined8 *)(unaff_x19 + 0x748);
        *(undefined8 *)(unaff_x19 + 0x7b8) = *(undefined8 *)(unaff_x19 + 0x758);
        *(undefined8 *)(unaff_x19 + 0x770) = *(undefined8 *)(unaff_x19 + 0x710);
        *puVar1 = *(undefined8 *)(unaff_x19 + 0x708);
        *(undefined8 *)(unaff_x19 + 0x780) = *(undefined8 *)(unaff_x19 + 0x720);
        *(undefined8 *)(unaff_x19 + 0x778) = *(undefined8 *)(unaff_x19 + 0x718);
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
           (((bRam000000010b62dbe0 - 1 < 2 ||
             ((bRam000000010b62dbe0 != 0 &&
              (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN16codex_mcp_server17message_processor16MessageProcessor16process_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc8138821fe56f05cE
                                 ), cVar7 != '\0')))) &&
            (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_mcp_server17message_processor16MessageProcessor16process_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc8138821fe56f05cE
                                ),
            uVar11 = 
            ___ZN16codex_mcp_server17message_processor16MessageProcessor16process_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc8138821fe56f05cE
            , (uVar19 & 1) != 0)))) {
          *(undefined8 **)(unaff_x29 + -0xf8) = puVar1;
          *(undefined **)(unaff_x29 + -0xf0) = &DAT_1011aded8;
          *(char **)(unaff_x29 + -0xa8) = s_<__response:_108aca118;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xf8;
          plVar36 = (long *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(uVar11,&stack0x000004b0);
          if ((*pcVar9 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar37 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar37 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000420);
            if (iVar8 != 0) {
              *(undefined1 **)(unaff_x29 + -200) = &stack0x000004b0;
              *(undefined1 *)(unaff_x29 + -0xc0) = 1;
              (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
            }
          }
        }
        else if ((*pcVar9 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar37 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar37 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000b48);
          if (iVar8 != 0) {
            *(undefined8 **)(unaff_x29 + -200) = puVar1;
            *(undefined **)(unaff_x29 + -0xc0) = &DAT_1011aded8;
            *(char **)(unaff_x29 + -0xf8) = s_<__response:_108aca118;
            *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -200;
            *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xf8;
            *(undefined **)(unaff_x29 + -0xa0) = &UNK_10b208fd0;
            plVar36 = (long *)0x1;
            (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
          }
        }
        *in_stack_00000018 = 0x101;
        *(undefined2 *)(unaff_x19 + 0x8f9) = 0;
        *(undefined8 *)(unaff_x19 + 0x7c8) = *(undefined8 *)(unaff_x19 + 0x770);
        *(undefined8 *)(unaff_x19 + 0x7c0) = *puVar1;
        *(undefined8 *)(unaff_x19 + 0x800) = *(undefined8 *)(unaff_x19 + 0x7a8);
        *(undefined8 *)(unaff_x19 + 0x7f8) = *(undefined8 *)(unaff_x19 + 0x7a0);
        *(undefined8 *)(unaff_x19 + 0x7f0) = *(undefined8 *)(unaff_x19 + 0x798);
        *(undefined8 *)(unaff_x19 + 0x7e8) = *(undefined8 *)(unaff_x19 + 0x790);
        *(undefined8 *)(unaff_x19 + 0x7e0) = *(undefined8 *)(unaff_x19 + 0x788);
        *(undefined8 *)(unaff_x19 + 0x7d8) = *(undefined8 *)(unaff_x19 + 0x780);
        *(undefined8 *)(unaff_x19 + 2000) = *(undefined8 *)(unaff_x19 + 0x778);
        *(long *)(unaff_x19 + 0x808) = *(long *)(unaff_x19 + 0x48) + 0x10;
        *(undefined8 *)(unaff_x19 + 0x818) = *(undefined8 *)(unaff_x19 + 0x7b8);
        *(undefined8 *)(unaff_x19 + 0x810) = *(undefined8 *)(unaff_x19 + 0x7b0);
        *(undefined1 *)(unaff_x19 + 0x8f0) = 0;
        *(undefined8 *)(unaff_x19 + 0x828) = *(undefined8 *)(unaff_x19 + 0x818);
        *(undefined8 *)(unaff_x19 + 0x820) = *(undefined8 *)(unaff_x19 + 0x810);
        *(undefined8 *)(unaff_x19 + 0x848) = *(undefined8 *)(unaff_x19 + 0x7d8);
        *(undefined8 *)(unaff_x19 + 0x840) = *(undefined8 *)(unaff_x19 + 2000);
        *(undefined8 *)(unaff_x19 + 0x858) = *(undefined8 *)(unaff_x19 + 0x7e8);
        *(undefined8 *)(unaff_x19 + 0x850) = *(undefined8 *)(unaff_x19 + 0x7e0);
        *(undefined8 *)(unaff_x19 + 0x868) = *(undefined8 *)(unaff_x19 + 0x7f8);
        *(undefined8 *)(unaff_x19 + 0x860) = *(undefined8 *)(unaff_x19 + 0x7f0);
        *(undefined1 *)(unaff_x19 + 0x8f1) = 1;
        *(undefined8 *)(unaff_x19 + 0x870) = *(undefined8 *)(unaff_x19 + 0x800);
        *(undefined8 *)(unaff_x19 + 0x838) = *(undefined8 *)(unaff_x19 + 0x7c8);
        *(undefined8 *)(unaff_x19 + 0x830) = *(undefined8 *)(unaff_x19 + 0x7c0);
        *(long *)(unaff_x19 + 0x878) = *(long *)(unaff_x19 + 0x48) + 0x20;
        *(undefined1 *)(unaff_x19 + 0x8e8) = 0;
        pcVar10 = (char *)FUN_100fd3e50(unaff_x19 + 0x878,in_stack_00000020);
        if (pcVar10 != (char *)0x0) {
          if (((*(char *)(unaff_x19 + 0x8e8) == '\x03') && (*(char *)(unaff_x19 + 0x8e0) == '\x03'))
             && (*(char *)(unaff_x19 + 0x898) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x8a0);
            if (*(long *)(unaff_x19 + 0x8a8) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x8a8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x8b0))
              ;
            }
          }
          lVar27 = *(long *)(unaff_x19 + 0x820);
          lVar6 = *(long *)(unaff_x19 + 0x828);
          auVar35 = FUN_100e8ec1c(*(undefined8 *)(pcVar10 + 0x48),*(undefined8 *)(pcVar10 + 0x50),
                                  lVar27,lVar6);
          uVar11 = auVar35._8_8_;
          plVar16 = *(long **)(pcVar10 + 0x28);
          uVar19 = *(ulong *)(pcVar10 + 0x30);
          bVar14 = auVar35[7] >> 1;
          if (lVar27 == 0) {
            lVar27 = 0;
            uVar24 = auVar35._0_8_ & uVar19;
            uVar34 = *(undefined8 *)((long)plVar16 + uVar24);
            uVar17 = CONCAT17(-((byte)((ulong)uVar34 >> 0x38) == bVar14),
                              CONCAT16(-((byte)((ulong)uVar34 >> 0x30) == bVar14),
                                       CONCAT15(-((byte)((ulong)uVar34 >> 0x28) == bVar14),
                                                CONCAT14(-((byte)((ulong)uVar34 >> 0x20) == bVar14),
                                                         CONCAT13(-((byte)((ulong)uVar34 >> 0x18) ==
                                                                   bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar34 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar34 >> 8) == bVar14),
                                                           -((byte)uVar34 == bVar14)))))))) &
                     0x8080808080808080;
            while( true ) {
              for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
                uVar28 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
                uVar28 = uVar24 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) & uVar19;
                if ((plVar16[uVar28 * -3 + -3] == 0) && (lVar6 == plVar16[uVar28 * -3 + -2]))
                goto LAB_1009d45d4;
                pcVar9 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
              }
              bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar34 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar34 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar34 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar34 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar34 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar34 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar34 >> 8) ==
                                                                     -1),-((char)uVar34 == -1)))))))
                                          ),1);
              if ((bVar29 & 1) != 0) break;
              lVar27 = lVar27 + 8;
              uVar24 = uVar24 + lVar27 & uVar19;
              uVar34 = *(undefined8 *)((long)plVar16 + uVar24);
              uVar17 = CONCAT17(-((byte)((ulong)uVar34 >> 0x38) == bVar14),
                                CONCAT16(-((byte)((ulong)uVar34 >> 0x30) == bVar14),
                                         CONCAT15(-((byte)((ulong)uVar34 >> 0x28) == bVar14),
                                                  CONCAT14(-((byte)((ulong)uVar34 >> 0x20) == bVar14
                                                            ),CONCAT13(-((byte)((ulong)uVar34 >>
                                                                               0x18) == bVar14),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar34 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar34 >> 8) == bVar14),
                                                           -((byte)uVar34 == bVar14)))))))) &
                       0x8080808080808080;
            }
            bVar4 = false;
            if (*pcVar10 == '\0') {
              *pcVar10 = '\x01';
              goto LAB_1009d46d0;
            }
            goto LAB_1009d51fc;
          }
          lVar20 = 0;
          uVar24 = auVar35._0_8_ & uVar19;
          uVar34 = *(undefined8 *)((long)plVar16 + uVar24);
          uVar17 = CONCAT17(-((byte)((ulong)uVar34 >> 0x38) == bVar14),
                            CONCAT16(-((byte)((ulong)uVar34 >> 0x30) == bVar14),
                                     CONCAT15(-((byte)((ulong)uVar34 >> 0x28) == bVar14),
                                              CONCAT14(-((byte)((ulong)uVar34 >> 0x20) == bVar14),
                                                       CONCAT13(-((byte)((ulong)uVar34 >> 0x18) ==
                                                                 bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar34 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar34 >> 8) == bVar14),
                                                           -((byte)uVar34 == bVar14)))))))) &
                   0x8080808080808080;
          while( true ) {
            for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
              uVar28 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
              uVar28 = uVar24 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) & uVar19;
              if (((plVar16[uVar28 * -3 + -3] != 0) && (lVar6 == plVar16[uVar28 * -3 + -2])) &&
                 (iVar8 = _memcmp(lVar27 + 0x10,plVar16[uVar28 * -3 + -3] + 0x10,lVar6),
                 uVar11 = extraout_x1_09, iVar8 == 0)) goto LAB_1009d45d4;
              pcVar9 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
            }
            bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar34 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar34 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar34 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar34 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar34 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar34 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar34 >> 8) ==
                                                                     -1),-((char)uVar34 == -1)))))))
                                        ),1);
            if ((bVar29 & 1) != 0) break;
            lVar20 = lVar20 + 8;
            uVar24 = uVar24 + lVar20 & uVar19;
            uVar34 = *(undefined8 *)((long)plVar16 + uVar24);
            uVar17 = CONCAT17(-((byte)((ulong)uVar34 >> 0x38) == bVar14),
                              CONCAT16(-((byte)((ulong)uVar34 >> 0x30) == bVar14),
                                       CONCAT15(-((byte)((ulong)uVar34 >> 0x28) == bVar14),
                                                CONCAT14(-((byte)((ulong)uVar34 >> 0x20) == bVar14),
                                                         CONCAT13(-((byte)((ulong)uVar34 >> 0x18) ==
                                                                   bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar34 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar34 >> 8) == bVar14),
                                                           -((byte)uVar34 == bVar14)))))))) &
                     0x8080808080808080;
          }
          bVar4 = false;
          if (*pcVar10 != '\0') goto LAB_1009d51fc;
          *pcVar10 = '\x01';
          goto LAB_1009d46d0;
        }
        *(undefined1 *)(unaff_x19 + 0x8f0) = 3;
        *(undefined1 *)(unaff_x19 + 0x8f8) = 3;
        uVar11 = 1;
        uVar12 = 5;
        goto LAB_1009d51d4;
      }
      _memmove(puVar1,puVar23,0x348);
      *(long *)(unaff_x19 + 0xa50) = unaff_x19;
      *(undefined1 *)((long)unaff_x28 + 0x7df) = 0;
      uVar19 = FUN_1009be134(unaff_x19 + 0x708,in_stack_00000020);
      if ((uVar19 & 1) != 0) {
        uVar11 = 1;
        uVar12 = 4;
        goto LAB_1009d51d4;
      }
      FUN_100ce741c(unaff_x19 + 0x708);
      goto LAB_1009d3d24;
    }
    if (lVar6 != 2) {
      __ZN16codex_mcp_server17message_processor16MessageProcessor13process_error17hb119502c1e567c44E
                ();
      goto LAB_1009d3d24;
    }
    *(undefined8 *)(unaff_x19 + 0x768) = *(undefined8 *)(unaff_x19 + 0xd8);
    *(undefined8 *)(unaff_x19 + 0x750) = *(undefined8 *)(unaff_x19 + 0xc0);
    *(undefined8 *)(unaff_x19 + 0x748) = *(undefined8 *)(unaff_x19 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x760) = *(undefined8 *)(unaff_x19 + 0xd0);
    *(undefined8 *)(unaff_x19 + 0x758) = *(undefined8 *)(unaff_x19 + 200);
    *(undefined8 *)(unaff_x19 + 0x730) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0x728) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x740) = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(unaff_x19 + 0x738) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0x710) = *(undefined8 *)(unaff_x19 + 0x80);
    *puVar1 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x720) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x718) = *(undefined8 *)(unaff_x19 + 0x88);
    *(long *)(unaff_x19 + 0x770) = unaff_x19;
    in_stack_00000000 = (undefined1 *)((long)unaff_x28 + 0x8af);
    in_stack_00000028 = (undefined8 *)(unaff_x19 + 0x708);
    *(undefined1 *)((long)unaff_x28 + 0x8af) = 0;
    *(undefined8 *)(unaff_x19 + 0x7c0) = *(undefined8 *)(unaff_x19 + 0x750);
    *(undefined8 *)(unaff_x19 + 0x7b8) = *(undefined8 *)(unaff_x19 + 0x748);
    *(undefined8 *)(unaff_x19 + 2000) = *(undefined8 *)(unaff_x19 + 0x760);
    *(undefined8 *)(unaff_x19 + 0x7c8) = *(undefined8 *)(unaff_x19 + 0x758);
    *(undefined8 *)(unaff_x19 + 0x7d8) = *(undefined8 *)(unaff_x19 + 0x768);
    *(undefined8 *)(unaff_x19 + 0x780) = *(undefined8 *)(unaff_x19 + 0x710);
    *(undefined8 *)(unaff_x19 + 0x778) = *in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x790) = *(undefined8 *)(unaff_x19 + 0x720);
    *(undefined8 *)(unaff_x19 + 0x788) = *(undefined8 *)(unaff_x19 + 0x718);
    *(undefined8 *)(unaff_x19 + 0x7a0) = *(undefined8 *)(unaff_x19 + 0x730);
    *(undefined8 *)(unaff_x19 + 0x798) = *(undefined8 *)(unaff_x19 + 0x728);
    *(undefined8 *)(unaff_x19 + 0x7b0) = *(undefined8 *)(unaff_x19 + 0x740);
    *(undefined8 *)(unaff_x19 + 0x7a8) = *(undefined8 *)(unaff_x19 + 0x738);
    uVar19 = *(ulong *)(unaff_x19 + 0x778) ^ 0x8000000000000000;
    if (-1 < (long)*(ulong *)(unaff_x19 + 0x778)) {
      uVar19 = 4;
    }
    if (1 < (long)uVar19) {
      if (uVar19 == 2) {
        __ZN16codex_mcp_server17message_processor16MessageProcessor31handle_initialized_notification17hba2abacf0fb5eec1E
                  ();
      }
      else if (uVar19 == 3) {
        uVar11 = *(undefined8 *)(unaff_x19 + 0x780);
        __ZN16codex_mcp_server17message_processor16MessageProcessor25handle_roots_list_changed17h67bd2049d2779518E
                  ();
        func_0x000100dccb50(uVar11);
      }
      else if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              (((bRam000000010b62dc88 - 1 < 2 ||
                ((bRam000000010b62dc88 != 0 &&
                 (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN16codex_mcp_server17message_processor16MessageProcessor20process_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdfcc140dc2b4976dE
                                    ), cVar7 != '\0')))) &&
               (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN16codex_mcp_server17message_processor16MessageProcessor20process_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdfcc140dc2b4976dE
                                   ), (uVar19 & 1) != 0)))) {
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN16codex_mcp_server17message_processor16MessageProcessor20process_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdfcc140dc2b4976dE
                   ,&stack0x00000800);
        uVar11 = 
        ___ZN16codex_mcp_server17message_processor16MessageProcessor20process_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdfcc140dc2b4976dE
        ;
        if ((*pcVar9 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          plVar36 = (long *)0x2;
          puVar37 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar37 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x000004b0);
          if (iVar8 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar11,puVar3,puVar37,&stack0x000004b0,&stack0x00000800);
          }
        }
      }
      else if ((*pcVar9 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000408);
        if (iVar8 != 0) {
          *(undefined **)(unaff_x29 + -200) = &UNK_108cb49a7;
          *(undefined8 *)(unaff_x29 + -0xc0) = 0x47;
          *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -200;
          *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b208fd0;
          plVar36 = (long *)0x1;
          (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
        }
      }
      goto LAB_1009d360c;
    }
    if (uVar19 != 0) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x7c0);
      __ZN16codex_mcp_server17message_processor16MessageProcessor28handle_progress_notification17h2ca144ec5b178e4aE
                ();
      func_0x000100dccb50(uVar11);
      goto LAB_1009d360c;
    }
    *(undefined8 *)(unaff_x19 + 0x7e8) = *(undefined8 *)(unaff_x19 + 0x718);
    *(undefined8 *)(unaff_x19 + 0x7e0) = *(undefined8 *)(unaff_x19 + 0x710);
    *(undefined8 *)(unaff_x19 + 0x7f8) = *(undefined8 *)(unaff_x19 + 0x728);
    *(undefined8 *)(unaff_x19 + 0x7f0) = *(undefined8 *)(unaff_x19 + 0x720);
    *(undefined8 *)(unaff_x19 + 0x808) = *(undefined8 *)(unaff_x19 + 0x738);
    *(undefined8 *)(unaff_x19 + 0x800) = *(undefined8 *)(unaff_x19 + 0x730);
    in_stack_00000010 = (undefined8 *)(unaff_x19 + 0x810);
    *(undefined8 *)(unaff_x19 + 0x818) = *(undefined8 *)(unaff_x19 + 0x718);
    *(undefined8 *)(unaff_x19 + 0x810) = *(undefined8 *)(unaff_x19 + 0x710);
    *(undefined8 *)(unaff_x19 + 0x828) = *(undefined8 *)(unaff_x19 + 0x728);
    *(undefined8 *)(unaff_x19 + 0x820) = *(undefined8 *)(unaff_x19 + 0x720);
    *(undefined8 *)(unaff_x19 + 0x830) = *(undefined8 *)(unaff_x19 + 0x730);
    *(long *)(unaff_x19 + 0x838) = unaff_x19;
    in_stack_00000008 = (undefined1 *)(unaff_x19 + 0x8b0);
    *(undefined1 *)(unaff_x19 + 0x8b0) = 0;
    *(undefined1 *)(unaff_x19 + 0x8b1) = 0;
    *(long *)(unaff_x19 + 0x840) = unaff_x19;
    *(undefined8 *)(unaff_x19 + 0x850) = *(undefined8 *)(unaff_x19 + 0x818);
    *(undefined8 *)(unaff_x19 + 0x848) = *in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x860) = *(undefined8 *)(unaff_x19 + 0x828);
    *(undefined8 *)(unaff_x19 + 0x858) = *(undefined8 *)(unaff_x19 + 0x820);
    *(undefined8 *)(unaff_x19 + 0x868) = *(undefined8 *)(unaff_x19 + 0x830);
    *(undefined8 *)(unaff_x19 + 0x878) = *(undefined8 *)(unaff_x19 + 0x830);
    *(undefined8 *)(unaff_x19 + 0x870) = *(undefined8 *)(unaff_x19 + 0x828);
    plVar36 = (long *)0x0;
    puVar37 = &UNK_10b209290;
    if (*(long *)(unaff_x19 + 0x870) == 0) {
      lVar27 = *(long *)(unaff_x19 + 0x878);
      lVar6 = -lVar27;
      if (-1 < lVar27) {
        lVar6 = lVar27;
      }
      lVar6 = FUN_1055b41a0(lVar6,&stack0x00000b90,0x14);
      uVar19 = __ZN4core3fmt9Formatter12pad_integral17h3ce8c974c7a8a604E
                         (&stack0x00000800,(uint)((ulong)lVar27 >> 0x3f) ^ 1,1,0,
                          &stack0x00000b90 + lVar6,0x14 - lVar6);
      if ((uVar19 & 1) != 0) goto LAB_1009d24b4;
    }
    else {
      iVar8 = func_0x0001055b8dfc(&stack0x00000800,*(long *)(unaff_x19 + 0x870) + 0x10,
                                  *(undefined8 *)(unaff_x19 + 0x878));
      if (iVar8 != 0) {
LAB_1009d24b4:
        FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000b90,&UNK_10b235000,&UNK_10b2346c0);
LAB_1009d5288:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1009d528c);
        (*pcVar5)();
      }
    }
    *(undefined8 *)(unaff_x19 + 0x888) = 1;
    *(undefined8 *)(unaff_x19 + 0x880) = 0;
    *(undefined8 *)(unaff_x19 + 0x890) = 0;
    *(undefined1 *)(unaff_x19 + 0x8b1) = 1;
    *(long *)(unaff_x19 + 0x8b8) = *(long *)(*(long *)(unaff_x19 + 0x840) + 0x58) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x928) = 0;
    auVar35 = FUN_100fd3e50(unaff_x19 + 0x8b8,in_stack_00000020);
    uVar19 = auVar35._8_8_;
    unaff_x23 = auVar35._0_8_;
    if (unaff_x23 == (char *)0x0) {
      uVar12 = 3;
      goto LAB_1009d3930;
    }
    if (((*(char *)(unaff_x19 + 0x928) == '\x03') && (*(char *)(unaff_x19 + 0x920) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x8d8) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x8e0);
      uVar19 = extraout_x1;
      if (*(long *)(unaff_x19 + 0x8e8) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x8e8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x8f0));
        uVar19 = extraout_x1_00;
      }
    }
    if (*(long *)(unaff_x23 + 0x40) == 0) {
LAB_1009d2574:
      unaff_x27 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
        uVar19 = (ulong)bRam000000010b62dd00;
        if (bRam000000010b62dd00 - 1 < 2) {
LAB_1009d25ac:
          auVar35 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9fdc51cc9f5c7c8dE
                              );
          param_1 = 
          ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9fdc51cc9f5c7c8dE
          ;
          uVar19 = auVar35._8_8_;
          if ((auVar35._0_8_ & 1) != 0) {
            *(long *)(unaff_x29 + -0x90) = unaff_x19 + 0x880;
            *(undefined **)(unaff_x29 + -0x88) = &DAT_10112965c;
            unaff_x28 = in_stack_00000018;
            goto code_r0x0001009d25d0;
          }
        }
        else if (bRam000000010b62dd00 != 0) {
          cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9fdc51cc9f5c7c8dE
                            );
          if (cVar7 != '\0') goto LAB_1009d25ac;
          uVar19 = 0;
        }
      }
      unaff_x28 = in_stack_00000018;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000b48);
        uVar19 = extraout_x1_05;
        unaff_x27 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
        if (iVar8 != 0) {
          *(long *)(unaff_x29 + -0x80) = unaff_x19 + 0x880;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_10112965c;
          *(char **)(unaff_x29 + -0x90) = s__Session_not_found_for_request_i_108acd106;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0xd0) = &UNK_10b208fd0;
          plVar36 = (long *)0x1;
          *(undefined1 **)(unaff_x29 + -200) = &stack0x000004b0;
          *(undefined1 *)(unaff_x29 + -0xc0) = 1;
          (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
          uVar19 = extraout_x1_06;
        }
      }
      goto LAB_1009d2bf0;
    }
    lVar20 = *(long *)(unaff_x19 + 0x870);
    lVar27 = *(long *)(unaff_x19 + 0x878);
    auVar35 = FUN_100e8ec1c(*(undefined8 *)(unaff_x23 + 0x48),*(undefined8 *)(unaff_x23 + 0x50),
                            lVar20,lVar27);
    uVar19 = auVar35._8_8_;
    lVar6 = *(long *)(unaff_x23 + 0x28);
    uVar17 = *(ulong *)(unaff_x23 + 0x30);
    bVar14 = auVar35[7] >> 1;
    if (lVar20 == 0) {
      lVar20 = 0;
      uVar28 = auVar35._0_8_ & uVar17;
      uVar11 = *(undefined8 *)(lVar6 + uVar28);
      uVar24 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == bVar14),
                        CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == bVar14),
                                 CONCAT15(-((byte)((ulong)uVar11 >> 0x28) == bVar14),
                                          CONCAT14(-((byte)((ulong)uVar11 >> 0x20) == bVar14),
                                                   CONCAT13(-((byte)((ulong)uVar11 >> 0x18) ==
                                                             bVar14),CONCAT12(-((byte)((ulong)uVar11
                                                                                      >> 0x10) ==
                                                                               bVar14),CONCAT11(-((
                                                  byte)((ulong)uVar11 >> 8) == bVar14),
                                                  -((byte)uVar11 == bVar14)))))))) &
               0x8080808080808080;
      while( true ) {
        while (uVar24 == 0) {
          bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar11 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar11 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar11 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar11 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar11 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar11 >> 8) ==
                                                                     -1),-((char)uVar11 == -1)))))))
                                      ),1);
          if ((bVar29 & 1) != 0) goto LAB_1009d2574;
          lVar20 = lVar20 + 8;
          uVar28 = uVar28 + lVar20 & uVar17;
          uVar11 = *(undefined8 *)(lVar6 + uVar28);
          uVar24 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == bVar14),
                            CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == bVar14),
                                     CONCAT15(-((byte)((ulong)uVar11 >> 0x28) == bVar14),
                                              CONCAT14(-((byte)((ulong)uVar11 >> 0x20) == bVar14),
                                                       CONCAT13(-((byte)((ulong)uVar11 >> 0x18) ==
                                                                 bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar11 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar11 >> 8) == bVar14),
                                                           -((byte)uVar11 == bVar14)))))))) &
                   0x8080808080808080;
        }
        uVar22 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar22 = uVar28 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar17;
        lVar26 = lVar6 + uVar22 * -0x20;
        if ((*(long *)(lVar26 + -0x20) == 0) && (lVar27 == *(long *)(lVar26 + -0x18))) break;
        uVar24 = uVar24 - 1 & uVar24;
      }
    }
    else {
      lVar26 = 0;
      uVar28 = auVar35._0_8_ & uVar17;
      uVar11 = *(undefined8 *)(lVar6 + uVar28);
      uVar24 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == bVar14),
                        CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == bVar14),
                                 CONCAT15(-((byte)((ulong)uVar11 >> 0x28) == bVar14),
                                          CONCAT14(-((byte)((ulong)uVar11 >> 0x20) == bVar14),
                                                   CONCAT13(-((byte)((ulong)uVar11 >> 0x18) ==
                                                             bVar14),CONCAT12(-((byte)((ulong)uVar11
                                                                                      >> 0x10) ==
                                                                               bVar14),CONCAT11(-((
                                                  byte)((ulong)uVar11 >> 8) == bVar14),
                                                  -((byte)uVar11 == bVar14)))))))) &
               0x8080808080808080;
      while( true ) {
        while (uVar24 == 0) {
          bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar11 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar11 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar11 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar11 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar11 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar11 >> 8) ==
                                                                     -1),-((char)uVar11 == -1)))))))
                                      ),1);
          if ((bVar29 & 1) != 0) goto LAB_1009d2574;
          lVar26 = lVar26 + 8;
          uVar28 = uVar28 + lVar26 & uVar17;
          uVar11 = *(undefined8 *)(lVar6 + uVar28);
          uVar24 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == bVar14),
                            CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == bVar14),
                                     CONCAT15(-((byte)((ulong)uVar11 >> 0x28) == bVar14),
                                              CONCAT14(-((byte)((ulong)uVar11 >> 0x20) == bVar14),
                                                       CONCAT13(-((byte)((ulong)uVar11 >> 0x18) ==
                                                                 bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar11 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar11 >> 8) == bVar14),
                                                           -((byte)uVar11 == bVar14)))))))) &
                   0x8080808080808080;
        }
        uVar22 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar22 = uVar28 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar17;
        lVar18 = lVar6 + uVar22 * -0x20;
        lVar15 = *(long *)(lVar18 + -0x20);
        if (((lVar15 != 0) && (lVar27 == *(long *)(lVar18 + -0x18))) &&
           (iVar8 = _memcmp(lVar20 + 0x10,lVar15 + 0x10,lVar27), uVar19 = extraout_x1_01, iVar8 == 0
           )) break;
        uVar24 = uVar24 - 1 & uVar24;
      }
    }
    lVar6 = lVar6 + uVar22 * -0x20;
    puVar1 = (undefined8 *)(unaff_x19 + 0x898);
    uVar11 = *(undefined8 *)(lVar6 + -0x10);
    *(undefined8 *)(unaff_x19 + 0x8a0) = *(undefined8 *)(lVar6 + -8);
    *puVar1 = uVar11;
    cVar7 = *unaff_x23;
    if (cVar7 == '\0') {
      *unaff_x23 = '\x01';
    }
    unaff_x27 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    if (cVar7 != '\0') {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (unaff_x23,uVar19,1000000000);
    }
    FUN_1060fa678(unaff_x23,1,unaff_x23);
    plVar36 = (long *)&stack0x000004b0;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
        ((bRam000000010b62dd30 - 1 < 2 ||
         ((bRam000000010b62dd30 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf1762870cad6a35E
                             ), cVar7 != '\0')))))) &&
       (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf1762870cad6a35E
                           ),
       lVar6 = 
       ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf1762870cad6a35E
       , (uVar19 & 1) != 0)) {
      *(undefined8 **)(unaff_x29 + -0x90) = puVar1;
      *(undefined **)(unaff_x29 + -0x88) =
           &
           __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      *(char **)(unaff_x29 + -0xd8) = s_thread_id__108acd12b;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x90;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x000004b0);
      lVar6 = 
      ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf1762870cad6a35E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar3 + 0x18))(puVar2,&stack0x00000b90);
        if (iVar8 != 0) {
          puVar37 = *(undefined **)(lVar6 + 0x50);
          plVar36 = (long *)0x1;
          if (puVar37 == (undefined *)0x0) {
            plVar36 = (long *)0x2;
          }
          *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000004b0;
          *(undefined1 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0xc0) = &DAT_1061c2098;
          (**(code **)(puVar3 + 0x20))(puVar2,&stack0x00000800);
        }
      }
    }
    else {
      lVar6 = 
      ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf1762870cad6a35E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar3 + 0x18))(puVar2,&stack0x00000bd0);
        if (iVar8 != 0) {
          *(undefined8 **)(unaff_x29 + -0x80) = puVar1;
          *(undefined **)(unaff_x29 + -0x78) =
               &
               __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          *(char **)(unaff_x29 + -0x90) = s_thread_id__108acd12b;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
          *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0xd0) = &UNK_10b208fd0;
          puVar37 = *(undefined **)(lVar6 + 0x50);
          plVar36 = (long *)0x1;
          if (puVar37 == (undefined *)0x0) {
            plVar36 = (long *)0x2;
          }
          *(undefined1 **)(unaff_x29 + -200) = &stack0x000004b0;
          *(undefined1 *)(unaff_x29 + -0xc0) = 1;
          (**(code **)(puVar3 + 0x20))(puVar2,&stack0x00000800);
        }
      }
    }
    *(long *)(unaff_x19 + 0x8b8) = *(long *)(*(long *)(unaff_x19 + 0x840) + 0x50) + 0x10;
    *(undefined8 *)(unaff_x19 + 0x8c8) = *(undefined8 *)(unaff_x19 + 0x8a0);
    *(undefined8 *)(unaff_x19 + 0x8c0) = *puVar1;
    *(undefined1 *)(unaff_x19 + 0x960) = 0;
    puVar1 = (undefined8 *)(unaff_x19 + 0x8b8);
    FUN_10050e55c(&stack0x00000800,puVar1,in_stack_00000020);
    if (plVar36 == (long *)0x8000000000000021) {
      uVar12 = 4;
LAB_1009d3930:
      *in_stack_00000008 = uVar12;
      *in_stack_00000000 = 3;
      uVar11 = 1;
      uVar12 = 6;
LAB_1009d51d4:
      *(undefined1 *)(unaff_x19 + 0x700) = uVar12;
      return uVar11;
    }
    if ((((*(char *)(unaff_x19 + 0x960) == '\x03') && (*(char *)(unaff_x19 + 0x958) == '\x03')) &&
        (*(char *)(unaff_x19 + 0x950) == '\x03')) && (*(char *)(unaff_x19 + 0x948) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x908);
      if (*(long *)(unaff_x19 + 0x910) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x910) + 0x18))(*(undefined8 *)(unaff_x19 + 0x918));
      }
    }
    if (plVar36 == (long *)0x8000000000000020) {
      *(undefined **)(unaff_x19 + 0x8a8) = puVar37;
      *(undefined1 *)(unaff_x19 + 0x8b1) = 0;
      *(undefined8 *)(unaff_x19 + 0x8c0) = *(undefined8 *)(unaff_x19 + 0x888);
      *puVar1 = *(undefined8 *)(unaff_x19 + 0x880);
      *(undefined8 *)(unaff_x19 + 0x8c8) = *(undefined8 *)(unaff_x19 + 0x890);
      *(undefined8 *)(unaff_x19 + 0x8d0) = 0x8000000000000001;
      *(undefined8 *)(unaff_x19 + 0x900) = 0x8000000000000000;
      *(undefined **)(unaff_x19 + 0xae8) = puVar37 + 0x10;
      *(undefined1 *)((long)in_stack_00000018 + 0x8a7) = 0;
      uVar11 = *in_stack_00000020;
      _memcpy(unaff_x19 + 0xaf0,puVar1,0x230);
      *(undefined **)(unaff_x19 + 0xd20) = puVar37 + 0x1f8;
      *(undefined1 *)((long)in_stack_00000018 + 0x89f) = 0;
      FUN_1005c1534(&stack0x00000800,unaff_x19 + 0xaf0,uVar11);
      FUN_100e6ff0c(unaff_x19 + 0xaf0);
      *(undefined1 *)((long)in_stack_00000018 + 0x8a7) = 1;
      *(long *)(unaff_x19 + 0x8b8) = *(long *)(*(long *)(unaff_x19 + 0x840) + 0x58) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x928) = 0;
      pcVar9 = (char *)FUN_100fd3e50(unaff_x19 + 0x8b8,in_stack_00000020);
      if (pcVar9 == (char *)0x0) {
        uVar12 = 6;
        goto LAB_1009d3930;
      }
      if (((*(char *)(unaff_x19 + 0x928) == '\x03') && (*(char *)(unaff_x19 + 0x920) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x8d8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x8e0);
        if (*(long *)(unaff_x19 + 0x8e8) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x8e8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x8f0));
        }
      }
      FUN_100c30bc0(&stack0x00000800,pcVar9 + 0x28,*(undefined8 *)(unaff_x19 + 0x870),
                    *(undefined8 *)(unaff_x19 + 0x878));
      if (*pcVar9 == '\0') {
        *pcVar9 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar9,extraout_x1_07,1000000000);
      }
      FUN_1060fa678(pcVar9,1,pcVar9);
      lVar6 = **(long **)(unaff_x19 + 0x8a8);
      **(long **)(unaff_x19 + 0x8a8) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x8a8);
      }
      *(undefined1 *)(unaff_x19 + 0x8b1) = 0;
      plVar16 = *(long **)(unaff_x19 + 0x870);
      pcVar9 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
      unaff_x28 = in_stack_00000018;
      if (plVar16 != (long *)0x0) {
        lVar6 = *plVar16;
        *plVar16 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x870);
          pcVar9 = unaff_x27;
        }
      }
      goto LAB_1009d35e0;
    }
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62dd18 - 1 < 2 ||
         ((bRam000000010b62dd18 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
                             ), cVar7 != '\0')))))) &&
       (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
                           ),
       lVar6 = 
       ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
       , (uVar19 & 1) != 0)) {
      *(long *)(unaff_x29 + -0xd8) = unaff_x19 + 0x898;
      *(undefined **)(unaff_x29 + -0xd0) =
           &
           __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      in_stack_00000b70 = (long *)&stack0x00000b80;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x00000b90);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar11 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
                  + 0x20);
        uVar34 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -200) = 2;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar11;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar34;
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,unaff_x29 + -200);
        if (iVar8 != 0) {
          *(undefined1 **)(unaff_x29 + -0x90) = &stack0x00000b90;
          *(undefined1 *)(unaff_x29 + -0x88) = 1;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_1061c2098;
          (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
        }
      }
    }
    else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
            (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar11 = *(undefined8 *)
                (
                ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
                + 0x20);
      uVar34 = *(undefined8 *)
                (
                ___ZN16codex_mcp_server17message_processor16MessageProcessor29handle_cancelled_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccc1e182a9a89e98E
                + 0x28);
      *(undefined8 *)(unaff_x29 + -0xa8) = 2;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar34;
      puVar37 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar37 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,unaff_x29 + -0xa8);
      if (iVar8 != 0) {
        *(long *)(unaff_x29 + -0x90) = unaff_x19 + 0x898;
        *(undefined **)(unaff_x29 + -0x88) =
             &
             __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
        ;
        *(char **)(unaff_x29 + -0xd8) = s__Session_not_found_for_thread_id_108acd139;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x90;
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000b90;
        *(undefined1 *)(unaff_x29 + -0x78) = 1;
        *(long *)(unaff_x29 + -200) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0xc0) = &DAT_1061c2098;
        (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
      }
    }
    FUN_100df5738(&stack0x000004b0);
    unaff_x28 = in_stack_00000018;
  } while( true );
LAB_1009d45d4:
  lVar6 = ((long)(uVar28 * 0x18) >> 3) * -0x5555555555555555;
  puVar1 = (undefined8 *)((long)plVar16 + (lVar6 - 8U & uVar19));
  uVar34 = *puVar1;
  uVar30 = *(undefined8 *)((long)plVar16 + lVar6);
  uVar19 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar30 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar30 >> 8) == -1),-((char)uVar30 == -1))))))));
  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  uVar12 = 0x80;
  if (((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar34 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar34 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar34 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar34 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar34 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar34 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar34 >> 8) == -1),
                                                           -((char)uVar34 == -1))))))))) >> 3) < 8)
  {
    *(long *)(pcVar10 + 0x38) = *(long *)(pcVar10 + 0x38) + 1;
    uVar12 = 0xff;
  }
  *(undefined1 *)((long)plVar16 + lVar6) = uVar12;
  *(undefined1 *)(puVar1 + 1) = uVar12;
  *(long *)(pcVar10 + 0x40) = *(long *)(pcVar10 + 0x40) + -1;
  in_stack_00000b70 = (long *)plVar16[uVar28 * -3 + -3];
  plVar16 = (long *)plVar16[uVar28 * -3 + -1];
  bVar4 = true;
  pcVar9 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
  if (*pcVar10 == '\0') {
    *pcVar10 = '\x01';
  }
  else {
LAB_1009d51fc:
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar10,uVar11,1000000000);
  }
LAB_1009d46d0:
  FUN_1060fa678(pcVar10,1,pcVar10);
  if (!bVar4) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62dad8 - 1 < 2 ||
         ((bRam000000010b62dad8 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa890c4a082e73aE
                             ), cVar7 != '\0')))))) &&
       (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa890c4a082e73aE
                           ),
       lVar6 = 
       ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa890c4a082e73aE
       , (uVar19 & 1) != 0)) {
      *(char **)(unaff_x29 + -0x80) = s_could_not_find_callback_for_108ac9f0e;
      *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000408;
      *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
      plVar36 = (long *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x000004b0);
      if ((*pcVar9 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000b90);
        if (iVar8 != 0) {
          *(undefined1 **)(unaff_x29 + -0xf8) = &stack0x000004b0;
          *(undefined1 *)(unaff_x29 + -0xf0) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xf8;
          *(undefined **)(unaff_x29 + -0xc0) = &DAT_1061c2098;
          (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
        }
      }
    }
    else if ((*pcVar9 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar11 = *(undefined8 *)
                (
                ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa890c4a082e73aE
                + 0x20);
      uVar34 = *(undefined8 *)
                (
                ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa890c4a082e73aE
                + 0x28);
      *(undefined8 *)(unaff_x29 + -0xa8) = 2;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar34;
      puVar37 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar37 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,unaff_x29 + -0xa8);
      if (iVar8 != 0) {
        *(long *)(unaff_x29 + -0xf8) = unaff_x19 + 0x820;
        *(undefined **)(unaff_x29 + -0xf0) = &DAT_10112c850;
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000408;
        *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
        plVar36 = (long *)0x1;
        *(undefined1 **)(unaff_x29 + -200) = &stack0x000004b0;
        *(undefined1 *)(unaff_x29 + -0xc0) = 1;
        (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
      }
    }
    goto LAB_1009d4f0c;
  }
  *(undefined1 *)(unaff_x19 + 0x8f1) = 0;
  lVar20 = *(long *)(unaff_x19 + 0x848);
  lVar27 = *(long *)(unaff_x19 + 0x840);
  lVar18 = *(long *)(unaff_x19 + 0x858);
  lVar26 = *(long *)(unaff_x19 + 0x850);
  lVar33 = *(long *)(unaff_x19 + 0x868);
  lVar32 = *(long *)(unaff_x19 + 0x860);
  lVar6 = *(long *)(unaff_x19 + 0x870);
  lVar31 = *(long *)(unaff_x19 + 0x838);
  lVar15 = *(long *)(unaff_x19 + 0x830);
  *(undefined8 *)(unaff_x29 + -200) = 0;
  if (plVar16 == (long *)0x0) {
    FUN_107c05cb0(&UNK_10b23a928);
    goto LAB_1009d5288;
  }
  plVar36 = plVar16 + 7;
  if (*plVar36 != -0x7ffffffffffffffb) {
    FUN_100de6690(plVar36);
  }
  plVar16[0xc] = lVar18;
  plVar16[0xb] = lVar26;
  plVar16[0xe] = lVar33;
  plVar16[0xd] = lVar32;
  plVar16[0xf] = lVar6;
  plVar16[8] = lVar31;
  *plVar36 = lVar15;
  plVar16[10] = lVar20;
  plVar16[9] = lVar27;
  uVar19 = plVar16[6];
  do {
    uVar17 = uVar19;
    if (((uint)uVar17 >> 2 & 1) != 0) goto LAB_1009d478c;
    uVar19 = plVar16[6];
  } while (uVar19 != uVar17);
  plVar16[6] = uVar17 | 2;
LAB_1009d478c:
  if ((uVar17 & 5) == 1) {
    (**(code **)(plVar16[4] + 0x10))(plVar16[5]);
  }
  if (((uint)uVar17 >> 2 & 1) == 0) {
    lVar6 = *plVar16;
    *plVar16 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a6c7a360bc05152E(&stack0x000004b0);
    }
    plVar36 = *(long **)(unaff_x29 + -200);
    if (plVar36 != (long *)0x0) {
      uVar19 = plVar36[6];
      do {
        uVar17 = uVar19;
        if (((uint)uVar17 >> 2 & 1) != 0) goto LAB_1009d47f8;
        uVar19 = plVar36[6];
      } while (uVar19 != uVar17);
      plVar36[6] = uVar17 | 2;
LAB_1009d47f8:
      if ((uVar17 & 5) == 1) {
        (**(code **)(plVar36[4] + 0x10))(plVar36[5]);
      }
      lVar6 = *plVar36;
      *plVar36 = lVar6 + -1;
      LORelease();
      plVar36 = (long *)0x8000000000000005;
      if (lVar6 == 1) {
LAB_1009d4a80:
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a6c7a360bc05152E(unaff_x29 + -200);
        if (plVar36 != (long *)0x8000000000000005) goto LAB_1009d4a9c;
      }
    }
  }
  else {
    plVar36 = (long *)plVar16[7];
    plVar16[7] = -0x7ffffffffffffffb;
    if (plVar36 == (long *)0x8000000000000005) {
      FUN_107c05cb0(&UNK_10b23a940);
      goto LAB_1009d5288;
    }
    lVar6 = *plVar16;
    *plVar16 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a6c7a360bc05152E(&stack0x000004b0);
    }
    plVar21 = *(long **)(unaff_x29 + -200);
    if (plVar21 != (long *)0x0) {
      uVar19 = plVar21[6];
      do {
        uVar17 = uVar19;
        if (((uint)uVar17 >> 2 & 1) != 0) goto LAB_1009d4a54;
        uVar19 = plVar21[6];
      } while (uVar19 != uVar17);
      plVar21[6] = uVar17 | 2;
LAB_1009d4a54:
      if ((uVar17 & 5) == 1) {
        (**(code **)(plVar21[4] + 0x10))(plVar21[5]);
      }
      lVar6 = *plVar21;
      *plVar21 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) goto LAB_1009d4a80;
    }
LAB_1009d4a9c:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62dac0 - 1 < 2 ||
         ((bRam000000010b62dac0 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
                             ), cVar7 != '\0')))))) &&
       (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
                           ),
       lVar6 = 
       ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
       , (uVar19 & 1) != 0)) {
      lVar27 = ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
               + 0x30;
      *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000408;
      *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -200) = 1;
      *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x80;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(long *)(unaff_x29 + -0xb0) = lVar27;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,unaff_x29 + -200);
      lVar6 = 
      ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
      ;
      if ((*pcVar9 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar11 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
                  + 0x20);
        uVar34 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0xf8) = 2;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar11;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar34;
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,unaff_x29 + -0xf8);
        if (iVar8 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar3,puVar37,unaff_x29 + -0xf8,unaff_x29 + -200);
        }
      }
    }
    else if ((*pcVar9 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar37 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar37 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar37 + 0x18))(puVar3,&stack0x00000bd0);
      if (iVar8 != 0) {
        lVar6 = ___ZN16codex_mcp_server16outgoing_message21OutgoingMessageSender22notify_client_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b76ab1edf26f50aE
                + 0x30;
        *(undefined1 **)(unaff_x29 + -200) = &stack0x00000b80;
        *(undefined **)(unaff_x29 + -0xc0) = &DAT_10112c850;
        *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x000004b0;
        *(code **)(unaff_x29 + -0xb0) =
             __ZN61__LT_serde_json__value__Value_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a815e662e581d68E
        ;
        *(char **)(unaff_x29 + -0x90) = s_could_not_notify_callback_for_du_108ac9ee2;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -200;
        *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x90;
        *(undefined **)(unaff_x29 + -0xd0) = &UNK_10b208fd0;
        *(undefined8 *)(unaff_x29 + -0xf8) = 1;
        *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xd8;
        *(undefined8 *)(unaff_x29 + -0xe8) = 1;
        *(long *)(unaff_x29 + -0xe0) = lVar6;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xf8;
        *(undefined1 *)(unaff_x29 + -0x78) = 1;
        (**(code **)(puVar37 + 0x20))(puVar3,&stack0x00000800);
      }
    }
    FUN_100de6690(&stack0x000004b0);
    plVar16 = plVar36;
  }
  plVar36 = plVar16;
  if (in_stack_00000b70 != (long *)0x0) {
    lVar6 = *in_stack_00000b70;
    *in_stack_00000b70 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000b80);
    }
  }
LAB_1009d4f0c:
  if ((*(byte *)(unaff_x19 + 0x8f1) & 1) != 0) {
    FUN_100de6690(unaff_x19 + 0x830);
  }
  *(undefined1 *)(unaff_x19 + 0x8f1) = 0;
  plVar16 = *(long **)(unaff_x19 + 0x820);
  if (plVar16 != (long *)0x0) {
    lVar6 = *plVar16;
    *plVar16 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x820);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x8f0) = 1;
  FUN_100d09e00((undefined8 *)(unaff_x19 + 0x7c0));
  *in_stack_00000018 = 0;
  *(undefined1 *)(unaff_x19 + 0x8f8) = 1;
  unaff_x28 = in_stack_00000018;
  goto LAB_1009d3d24;
}

