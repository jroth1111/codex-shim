
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c03370(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long *unaff_x19;
  long *plVar10;
  long unaff_x21;
  undefined8 uVar11;
  long unaff_x23;
  char *unaff_x24;
  ulong *unaff_x25;
  undefined8 *puVar12;
  long unaff_x29;
  ulong in_stack_00000400;
  
  *(char **)(unaff_x29 + -0x98) = s_Failed_to_write_to_stdout__108acd23c;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x70;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x98;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 1;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 1;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_1;
  *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)(unaff_x23 + 0x218);
  *(undefined8 *)(unaff_x23 + 0x30) = *(undefined8 *)(unaff_x23 + 0x210);
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xb8;
  *(undefined1 *)(unaff_x29 + -0x58) = 1;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
  (**(code **)(unaff_x21 + 0x20))();
  if ((in_stack_00000400 & 3) == 1) {
    uVar11 = *(undefined8 *)(in_stack_00000400 - 1);
    puVar12 = *(undefined8 **)(in_stack_00000400 + 7);
    pcVar8 = (code *)*puVar12;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar11);
    }
    if (puVar12[1] != 0) {
      _free(uVar11);
    }
    _free((undefined8 *)(in_stack_00000400 - 1));
    lVar7 = unaff_x19[0x8a];
  }
  else {
    lVar7 = unaff_x19[0x8a];
  }
  if (lVar7 != 0) {
    _free(unaff_x19[0x8b]);
  }
  if ((unaff_x19[0x49] != 0) && (plVar10 = (long *)unaff_x19[0x4a], plVar10 != (long *)0x0)) {
    uVar6 = plVar10[6];
    do {
      uVar9 = uVar6;
      if (((uint)uVar9 >> 2 & 1) != 0) goto LAB_100c03194;
      uVar6 = plVar10[6];
    } while (uVar6 != uVar9);
    plVar10[6] = uVar9 | 2;
LAB_100c03194:
    if ((uVar9 & 5) == 1) {
      (**(code **)(plVar10[4] + 0x10))(plVar10[5]);
    }
    lVar7 = *plVar10;
    *plVar10 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(unaff_x19 + 0x4a);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  if ((*unaff_x25 < 3) &&
     (((bRam000000010b628ce0 - 1 < 2 ||
       ((bRam000000010b628ce0 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
                           ), cVar4 != '\0')))) &&
      (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
                         ),
      lVar7 = 
      ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
      , (uVar6 & 1) != 0)))) {
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108cb4a6e;
    *(undefined8 *)(unaff_x29 + -0x80) = 0x4b;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
    *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,&stack0x00000208);
    lVar7 = 
    ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
    ;
    if ((*unaff_x24 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar11 = *(undefined8 *)
                (
                ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
                + 0x20);
      uVar3 = *(undefined8 *)
               (
               ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
               + 0x28);
      *(undefined8 *)(unaff_x29 + -0xb8) = 3;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar11;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xb8);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar7,puVar2,puVar1,unaff_x29 + -0xb8,&stack0x00000208);
      }
    }
  }
  else if ((*unaff_x24 == '\0') && (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar11 = *(undefined8 *)
              (
              ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
              + 0x20);
    uVar3 = *(undefined8 *)
             (
             ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
             + 0x28);
    *(undefined8 *)(unaff_x29 + -0xd0) = 3;
    *(undefined8 *)(unaff_x29 + -200) = uVar11;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xd0);
    if (iVar5 != 0) {
      lVar7 = ___ZN26codex_app_server_transport9transport5stdio22start_stdio_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha602b43bef1f3f85E
              + 0x30;
      *(undefined **)(unaff_x29 + -0x70) = &UNK_108cb4a6e;
      *(undefined8 *)(unaff_x29 + -0x68) = 0x4b;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x98;
      *(undefined8 *)(unaff_x29 + -0xa8) = 1;
      *(long *)(unaff_x29 + -0xa0) = lVar7;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xb8;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
      uVar11 = *(undefined8 *)(unaff_x29 + -0xd0);
      *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)(unaff_x29 + -200);
      *(undefined8 *)(unaff_x23 + 0x30) = uVar11;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000208);
    }
  }
  lVar7 = *unaff_x19;
  if (lVar7 != -0x8000000000000000) {
    plVar10 = (long *)unaff_x19[1];
    if (lVar7 == -0x7fffffffffffffff) {
      if (*plVar10 == 0xcc) {
        *plVar10 = 0x84;
      }
      else {
        (**(code **)(plVar10[2] + 0x20))();
      }
    }
    else if (lVar7 != 0) {
      _free();
    }
  }
  FUN_100d0d8d0(unaff_x19 + 0x47);
  *(undefined1 *)((long)unaff_x19 + 0x241) = 1;
  return 0;
}

