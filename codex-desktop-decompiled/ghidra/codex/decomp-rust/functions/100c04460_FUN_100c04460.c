
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c04460(long param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  code *pcVar10;
  ulong uVar11;
  long *unaff_x19;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  ulong in_xzr;
  ulong in_stack_00000020;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long lStack0000000000000060;
  long lStack0000000000000068;
  undefined8 uStack0000000000000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long lStack0000000000000110;
  long lStack0000000000000118;
  undefined8 uStack0000000000000120;
  long lStack0000000000000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  char *in_stack_00000160;
  long in_stack_00000168;
  
  *(char **)(unaff_x29 + -0x60) = s_Failed_reading_stdin__108ad2acf;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x88;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  lStack0000000000000118 = unaff_x29 + -0x70;
  lStack0000000000000110 = 1;
  uStack0000000000000120 = 1;
  lStack0000000000000068 = in_stack_00000050;
  lStack0000000000000060 = in_stack_00000048;
  uStack0000000000000070 = in_stack_00000058;
  lStack0000000000000128 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00000020 & 3) == 1) {
    uVar12 = *(undefined8 *)(in_stack_00000020 - 1);
    puVar15 = *(undefined8 **)(in_stack_00000020 + 7);
    pcVar10 = (code *)*puVar15;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar12);
    }
    if (puVar15[1] != 0) {
      _free(uVar12);
    }
    _free((undefined8 *)(in_stack_00000020 - 1));
  }
  if (unaff_x19[0x17] != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1c) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1c) = 0;
  unaff_x19[0x1d] = unaff_x25 + 2;
  unaff_x19[0x1e] = unaff_x19[3];
  unaff_x19[0x33] = (long)(unaff_x19 + 0x1a);
  *(undefined1 *)(unaff_x19 + 0x5a) = 0;
  FUN_100fce1a4(&stack0x00000110,unaff_x19 + 0x1d);
  if (lStack0000000000000110 == unaff_x25 + 4) {
    uVar12 = 1;
    uVar9 = 5;
  }
  else {
    *(undefined8 *)(unaff_x24 + 0x78) = *(undefined8 *)(unaff_x24 + 0x128);
    *(undefined8 *)(unaff_x24 + 0x70) = *(undefined8 *)(unaff_x24 + 0x120);
    *(undefined8 *)(unaff_x24 + 0x88) = *(undefined8 *)(unaff_x24 + 0x138);
    *(undefined8 *)(unaff_x24 + 0x80) = *(undefined8 *)(unaff_x24 + 0x130);
    *(undefined8 *)(unaff_x24 + 0x98) = *(undefined8 *)(unaff_x24 + 0x148);
    *(undefined8 *)(unaff_x24 + 0x90) = *(undefined8 *)(unaff_x24 + 0x140);
    *(undefined8 *)(unaff_x24 + 0xa8) = *(undefined8 *)(unaff_x24 + 0x158);
    *(undefined8 *)(unaff_x24 + 0xa0) = *(undefined8 *)(unaff_x24 + 0x150);
    in_stack_00000088 = *(undefined8 *)(unaff_x24 + 0xd8);
    in_stack_00000080 = *(undefined8 *)(unaff_x24 + 0xd0);
    *(undefined8 *)(unaff_x24 + 0x38) = *(undefined8 *)(unaff_x24 + 0xe8);
    *(undefined8 *)(unaff_x24 + 0x30) = *(undefined8 *)(unaff_x24 + 0xe0);
    *(undefined8 *)(unaff_x24 + 0x48) = *(undefined8 *)(unaff_x24 + 0xf8);
    *(undefined8 *)(unaff_x24 + 0x40) = *(undefined8 *)(unaff_x24 + 0xf0);
    *(undefined8 *)(unaff_x24 + 0x58) = *(undefined8 *)(unaff_x24 + 0x108);
    *(undefined8 *)(unaff_x24 + 0x50) = *(undefined8 *)(unaff_x24 + 0x100);
    *(undefined8 *)(unaff_x24 + 0x68) = *(undefined8 *)(unaff_x24 + 0x118);
    *(undefined8 *)(unaff_x24 + 0x60) = *(undefined8 *)(unaff_x24 + 0x110);
    lStack0000000000000068 = *(long *)(unaff_x24 + 0xb8);
    lStack0000000000000060 = *(long *)(unaff_x24 + 0xb0);
    in_stack_00000078 = *(long *)(unaff_x24 + 200);
    uStack0000000000000070 = *(undefined8 *)(unaff_x24 + 0xc0);
    FUN_100d4fbc0(unaff_x19 + 0x1d);
    if (lStack0000000000000060 != unaff_x25 + 3) {
      func_0x000100e37f24(&stack0x00000060);
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b628cc8 - 1 < 2 ||
         ((bRam000000010b628cc8 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                             ), cVar6 != '\0')))) &&
        (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                           ),
        lVar5 = 
        ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
        , (uVar8 & 1) != 0)))) {
      lStack0000000000000128 =
           ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
           + 0x30;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108cb4a93;
      *(undefined8 *)(unaff_x29 + -0x80) = 0x37;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
      *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
      lStack0000000000000118 = unaff_x29 + -0x60;
      lStack0000000000000110 = 1;
      uStack0000000000000120 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar5,&stack0x00000110);
      lVar5 = 
      ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lStack0000000000000068 =
             *(long *)(
                      ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                      + 0x20);
        uStack0000000000000070 =
             *(undefined8 *)
              (
              ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
              + 0x28);
        lStack0000000000000060 = 4;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000060);
        if (iVar7 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar5,puVar3,puVar2,&stack0x00000060,&stack0x00000110);
        }
      }
    }
    else {
      lVar5 = 
      ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar12 = *(undefined8 *)
                  (
                  ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                  + 0x20);
        uVar4 = *(undefined8 *)
                 (
                 ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xb0) = 4;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar12;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar4;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xb0);
        if (iVar7 != 0) {
          in_stack_00000078 =
               ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
               + 0x30;
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108cb4a93;
          *(undefined8 *)(unaff_x29 + -0x68) = 0x37;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
          lStack0000000000000068 = unaff_x29 + -0x98;
          lStack0000000000000060 = 1;
          uStack0000000000000070 = 1;
          *(undefined8 *)(unaff_x24 + 0xe8) = *(undefined8 *)(unaff_x24 + 0x168);
          *(undefined8 *)(unaff_x24 + 0xe0) = *(undefined8 *)(unaff_x24 + 0x160);
          in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0xa0);
          in_stack_00000130 = *(long *)(lVar5 + 0x60);
          in_stack_00000138 = *(undefined8 *)(lVar5 + 0x68);
          lStack0000000000000118 = *(long *)(lVar5 + 0x50);
          uStack0000000000000120 = *(undefined8 *)(lVar5 + 0x58);
          lStack0000000000000110 = 1;
          if (lStack0000000000000118 == 0) {
            lStack0000000000000110 = 2;
          }
          uStack0000000000000158 = *(undefined4 *)(lVar5 + 8);
          uStack000000000000015c = *(undefined4 *)(lVar5 + 0xc);
          *(long **)(unaff_x29 + -0x60) = &stack0x00000060;
          *(undefined1 *)(unaff_x29 + -0x58) = 1;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
          *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
          lStack0000000000000128 = 1;
          if (in_stack_00000130 == 0) {
            lStack0000000000000128 = 2;
          }
          in_stack_00000168 = unaff_x29 + -0x88;
          in_stack_00000160 = s__108b39f4f;
          (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000110);
        }
      }
    }
    if (*unaff_x19 != 0) {
      plVar13 = (long *)unaff_x19[1];
      if (plVar13 != (long *)0x0) {
        uVar8 = plVar13[6];
        do {
          uVar11 = uVar8;
          if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_100c04260;
          uVar8 = plVar13[6];
        } while (uVar8 != uVar11);
        plVar13[6] = uVar11 | 2;
LAB_100c04260:
        if ((uVar11 & 5) == 1) {
          (**(code **)(plVar13[4] + 0x10))(plVar13[5]);
        }
        lVar5 = *plVar13;
        *plVar13 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbda8a4e41427978cE(unaff_x19 + 1);
        }
      }
    }
    FUN_100cfe064(unaff_x19 + 4);
    plVar13 = unaff_x19 + 0x1a;
    lVar14 = *plVar13;
    LOAcquire();
    lVar5 = *(long *)(lVar14 + 0x1f0);
    *(long *)(lVar14 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar14 + 0x88);
      *(long *)(lVar14 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcb05c(lVar14 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x1610) = *(ulong *)(lVar5 + 0x1610) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar14 + 0x110);
      LOAcquire();
      uVar8 = *puVar1;
      *puVar1 = uVar8 | 2;
      LORelease();
      if (uVar8 == 0) {
        lVar5 = *(long *)(lVar14 + 0x100);
        *(undefined8 *)(lVar14 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar14 + 0x108));
        }
      }
    }
    lVar5 = *(long *)*plVar13;
    *(long *)*plVar13 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar13);
    }
    plVar13 = unaff_x19 + 0x1b;
    lVar14 = *plVar13;
    LOAcquire();
    lVar5 = *(long *)(lVar14 + 0x1f0);
    *(long *)(lVar14 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar14 + 0x88);
      *(long *)(lVar14 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcaed8(lVar14 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x4110) = *(ulong *)(lVar5 + 0x4110) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar14 + 0x110);
      LOAcquire();
      uVar8 = *puVar1;
      *puVar1 = uVar8 | 2;
      LORelease();
      if (uVar8 == 0) {
        lVar5 = *(long *)(lVar14 + 0x100);
        *(undefined8 *)(lVar14 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar14 + 0x108));
        }
      }
    }
    lVar5 = *(long *)*plVar13;
    *(long *)*plVar13 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar13);
    }
    uVar12 = 0;
    uVar9 = 1;
  }
  *(undefined1 *)((long)unaff_x19 + 0xe2) = uVar9;
  return uVar12;
}

