
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c03d90(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  code *pcVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  ulong in_xzr;
  ulong in_stack_00000020;
  undefined1 *puStack0000000000000028;
  undefined *puStack0000000000000030;
  char *pcStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000060;
  undefined1 *puStack0000000000000068;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  char *in_stack_00000160;
  long in_stack_00000168;
  
  lStack0000000000000040 = unaff_x29 + -0x98;
  pcStack0000000000000038 = s_Failed_reading_stdin__108ad2acf;
  puStack0000000000000028 = (undefined1 *)&stack0x00000038;
  puStack0000000000000030 = &UNK_10b208fd0;
  puStack0000000000000068 = (undefined1 *)&stack0x00000028;
  lStack0000000000000060 = 1;
  uStack0000000000000070 = 1;
  lStack0000000000000078 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000060);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar14 = *unaff_x21;
    uVar11 = *(undefined8 *)(lVar14 + 0x20);
    uVar4 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x88) = 1;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar4;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x88);
    if (iVar6 != 0) {
      in_stack_00000130 = *(long *)(lVar14 + 0x60);
      in_stack_00000138 = *(undefined8 *)(lVar14 + 0x68);
      in_stack_00000118 = *(long *)(lVar14 + 0x50);
      in_stack_00000120 = *(undefined8 *)(lVar14 + 0x58);
      in_stack_00000110 = 1;
      if (in_stack_00000118 == 0) {
        in_stack_00000110 = 2;
      }
      uStack0000000000000158 = *(undefined4 *)(lVar14 + 8);
      uStack000000000000015c = *(undefined4 *)(lVar14 + 0xc);
      *(long **)(unaff_x29 + -0x70) = &stack0x00000060;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      in_stack_00000128 = 1;
      if (in_stack_00000130 == 0) {
        in_stack_00000128 = 2;
      }
      uVar11 = *(undefined8 *)(unaff_x29 + -0x88);
      *(undefined8 *)(unaff_x24 + 0xe8) = *(undefined8 *)(unaff_x29 + -0x80);
      *(undefined8 *)(unaff_x24 + 0xe0) = uVar11;
      in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000168 = unaff_x29 + -0x60;
      in_stack_00000160 = s__108b39f4f;
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000110);
    }
  }
  if ((in_stack_00000020 & 3) == 1) {
    uVar11 = *(undefined8 *)(in_stack_00000020 - 1);
    puVar15 = *(undefined8 **)(in_stack_00000020 + 7);
    pcVar9 = (code *)*puVar15;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar11);
    }
    if (puVar15[1] != 0) {
      _free(uVar11);
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
  if (in_stack_00000110 == unaff_x25 + 4) {
    uVar11 = 1;
    uVar8 = 5;
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
    puStack0000000000000068 = *(undefined1 **)(unaff_x24 + 0xb8);
    lStack0000000000000060 = *(long *)(unaff_x24 + 0xb0);
    lStack0000000000000078 = *(long *)(unaff_x24 + 200);
    uStack0000000000000070 = *(undefined8 *)(unaff_x24 + 0xc0);
    FUN_100d4fbc0(unaff_x19 + 0x1d);
    if (lStack0000000000000060 != unaff_x25 + 3) {
      func_0x000100e37f24(&stack0x00000060);
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b628cc8 - 1 < 2 ||
         ((bRam000000010b628cc8 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                             ), cVar5 != '\0')))) &&
        (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                           ),
        lVar14 = 
        ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
        , (uVar7 & 1) != 0)))) {
      in_stack_00000128 =
           ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
           + 0x30;
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108cb4a93;
      *(undefined8 *)(unaff_x29 + -0x80) = 0x37;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
      *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
      in_stack_00000118 = unaff_x29 + -0x60;
      in_stack_00000110 = 1;
      in_stack_00000120 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar14,&stack0x00000110);
      lVar14 = 
      ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack0000000000000068 =
             *(undefined1 **)
              (
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
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000060);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar14,puVar3,puVar2,&stack0x00000060,&stack0x00000110);
        }
      }
    }
    else {
      lVar14 = 
      ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar11 = *(undefined8 *)
                  (
                  ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                  + 0x20);
        uVar4 = *(undefined8 *)
                 (
                 ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xb0) = 4;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar11;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar4;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xb0);
        if (iVar6 != 0) {
          lStack0000000000000078 =
               ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6cd3b23186e150f6E
               + 0x30;
          *(undefined **)(unaff_x29 + -0x70) = &UNK_108cb4a93;
          *(undefined8 *)(unaff_x29 + -0x68) = 0x37;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
          puStack0000000000000068 = (undefined1 *)(unaff_x29 + -0x98);
          lStack0000000000000060 = 1;
          uStack0000000000000070 = 1;
          *(undefined8 *)(unaff_x24 + 0xe8) = *(undefined8 *)(unaff_x24 + 0x168);
          *(undefined8 *)(unaff_x24 + 0xe0) = *(undefined8 *)(unaff_x24 + 0x160);
          in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0xa0);
          in_stack_00000130 = *(long *)(lVar14 + 0x60);
          in_stack_00000138 = *(undefined8 *)(lVar14 + 0x68);
          in_stack_00000118 = *(long *)(lVar14 + 0x50);
          in_stack_00000120 = *(undefined8 *)(lVar14 + 0x58);
          in_stack_00000110 = 1;
          if (in_stack_00000118 == 0) {
            in_stack_00000110 = 2;
          }
          uStack0000000000000158 = *(undefined4 *)(lVar14 + 8);
          uStack000000000000015c = *(undefined4 *)(lVar14 + 0xc);
          *(long **)(unaff_x29 + -0x60) = &stack0x00000060;
          *(undefined1 *)(unaff_x29 + -0x58) = 1;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
          *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
          in_stack_00000128 = 1;
          if (in_stack_00000130 == 0) {
            in_stack_00000128 = 2;
          }
          in_stack_00000168 = unaff_x29 + -0x88;
          in_stack_00000160 = s__108b39f4f;
          (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000110);
        }
      }
    }
    if (*unaff_x19 != 0) {
      plVar12 = (long *)unaff_x19[1];
      if (plVar12 != (long *)0x0) {
        uVar7 = plVar12[6];
        do {
          uVar10 = uVar7;
          if (((uint)uVar10 >> 2 & 1) != 0) goto LAB_100c04260;
          uVar7 = plVar12[6];
        } while (uVar7 != uVar10);
        plVar12[6] = uVar10 | 2;
LAB_100c04260:
        if ((uVar10 & 5) == 1) {
          (**(code **)(plVar12[4] + 0x10))(plVar12[5]);
        }
        lVar14 = *plVar12;
        *plVar12 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbda8a4e41427978cE(unaff_x19 + 1);
        }
      }
    }
    FUN_100cfe064(unaff_x19 + 4);
    plVar12 = unaff_x19 + 0x1a;
    lVar13 = *plVar12;
    LOAcquire();
    lVar14 = *(long *)(lVar13 + 0x1f0);
    *(long *)(lVar13 + 0x1f0) = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      LOAcquire();
      lVar14 = *(long *)(lVar13 + 0x88);
      *(long *)(lVar13 + 0x88) = lVar14 + 1;
      lVar14 = func_0x000100fcb05c(lVar13 + 0x80,lVar14);
      *(ulong *)(lVar14 + 0x1610) = *(ulong *)(lVar14 + 0x1610) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar13 + 0x110);
      LOAcquire();
      uVar7 = *puVar1;
      *puVar1 = uVar7 | 2;
      LORelease();
      if (uVar7 == 0) {
        lVar14 = *(long *)(lVar13 + 0x100);
        *(undefined8 *)(lVar13 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 8))(*(undefined8 *)(lVar13 + 0x108));
        }
      }
    }
    lVar14 = *(long *)*plVar12;
    *(long *)*plVar12 = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar12);
    }
    plVar12 = unaff_x19 + 0x1b;
    lVar13 = *plVar12;
    LOAcquire();
    lVar14 = *(long *)(lVar13 + 0x1f0);
    *(long *)(lVar13 + 0x1f0) = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      LOAcquire();
      lVar14 = *(long *)(lVar13 + 0x88);
      *(long *)(lVar13 + 0x88) = lVar14 + 1;
      lVar14 = func_0x000100fcaed8(lVar13 + 0x80,lVar14);
      *(ulong *)(lVar14 + 0x4110) = *(ulong *)(lVar14 + 0x4110) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar13 + 0x110);
      LOAcquire();
      uVar7 = *puVar1;
      *puVar1 = uVar7 | 2;
      LORelease();
      if (uVar7 == 0) {
        lVar14 = *(long *)(lVar13 + 0x100);
        *(undefined8 *)(lVar13 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 8))(*(undefined8 *)(lVar13 + 0x108));
        }
      }
    }
    lVar14 = *(long *)*plVar12;
    *(long *)*plVar12 = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar12);
    }
    uVar11 = 0;
    uVar8 = 1;
  }
  *(undefined1 *)((long)unaff_x19 + 0xe2) = uVar8;
  return uVar11;
}

