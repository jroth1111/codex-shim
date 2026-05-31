
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074bc74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
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
  ushort uStack0000000000000080;
  undefined8 in_stack_00000098;
  long in_stack_00000410;
  long in_stack_00000418;
  long in_stack_00000420;
  long in_stack_00000548;
  long in_stack_00000550;
  undefined8 in_stack_000005c8;
  long *in_stack_00000650;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000548,s__v1_models_108ac5f78,&stack0x00000018);
  FUN_1011d5524(&stack0x00000548,*(undefined8 *)(unaff_x19[6] + 0x18),&UNK_108ca1660,
                &stack0x00000430);
  if (in_stack_00000548 == 2) {
    uVar12 = 1;
    lVar4 = *in_stack_00000650;
    *in_stack_00000650 = lVar4 + -1;
    LORelease();
    lVar11 = in_stack_00000550;
  }
  else {
    auVar27 = FUN_105c4eee0(in_stack_00000650,&stack0x00000548);
    uVar12 = auVar27._0_8_;
    lVar4 = *in_stack_00000650;
    *in_stack_00000650 = lVar4 + -1;
    LORelease();
    lVar11 = auVar27._8_8_;
  }
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000650);
  }
  unaff_x19[7] = uVar12;
  unaff_x19[8] = lVar11;
  if ((uVar12 & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000548,lVar11);
    if (in_stack_00000548 == 4) {
      uVar10 = 3;
      *unaff_x25 = 3;
      *unaff_x20 = -0x7fffffffffffffff;
      goto LAB_10074c3d8;
    }
    lVar4 = unaff_x19[7];
    lVar9 = unaff_x19[8];
  }
  else {
    unaff_x19[8] = 0;
    if (lVar11 == 0) {
      FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
      goto LAB_10074c4f4;
    }
    lVar9 = 0;
    in_stack_00000548 = 3;
    lVar4 = 1;
    in_stack_00000550 = lVar11;
  }
  uVar17 = *(undefined8 *)(unaff_x26 + 0x588);
  uVar13 = *(undefined8 *)(unaff_x26 + 0x580);
  uVar24 = *(undefined8 *)(unaff_x26 + 0x598);
  uVar21 = *(undefined8 *)(unaff_x26 + 0x590);
  uVar18 = *(undefined8 *)(unaff_x26 + 0x5a8);
  uVar14 = *(undefined8 *)(unaff_x26 + 0x5a0);
  uVar19 = *(undefined8 *)(unaff_x26 + 0x548);
  uVar15 = *(undefined8 *)(unaff_x26 + 0x540);
  uVar25 = *(undefined8 *)(unaff_x26 + 0x558);
  uVar22 = *(undefined8 *)(unaff_x26 + 0x550);
  uVar20 = *(undefined8 *)(unaff_x26 + 0x568);
  uVar16 = *(undefined8 *)(unaff_x26 + 0x560);
  uVar26 = *(undefined8 *)(unaff_x26 + 0x578);
  uVar23 = *(undefined8 *)(unaff_x26 + 0x570);
  FUN_100e03d7c(lVar4,lVar9);
  if (in_stack_00000548 == 3) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62eeb8 - 1 < 2 ||
         ((bRam000000010b62eeb8 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3067d5fe90cd3c5cE
                             ), cVar5 != '\0')))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3067d5fe90cd3c5cE
                          ), iVar6 != 0)) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3067d5fe90cd3c5cE
                 ,&stack0x00000548);
      uVar13 = 
      ___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3067d5fe90cd3c5cE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004e8);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar13,puVar2,puVar1,&stack0x000004e8,&stack0x00000548);
        }
      }
    }
    else {
      uVar13 = 
      ___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3067d5fe90cd3c5cE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004e8);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar13,puVar2,puVar1,&stack0x000004e8,&stack0x00000548);
        }
      }
    }
    puVar7 = (undefined8 *)_malloc(0xa5);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_107c03c64(1,0xa5);
LAB_10074c4f4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10074c4f8);
      (*pcVar3)();
    }
    puVar7[0x11] = 0x3d6261743f616d61;
    puVar7[0x10] = 0x6c6c6f2f616d616c;
    puVar7[0x13] = 0x6f23656c69662d76;
    puVar7[0x12] = 0x6f2d656d64616572;
    *(undefined8 *)((long)puVar7 + 0x9d) = 0x616d616c6c6f2365;
    puVar7[9] = 0x696c6c6174736e69;
    puVar7[8] = 0x2072657466612820;
    puVar7[0xb] = 0x736e69206c6c6174;
    puVar7[10] = 0x736e49202e29676e;
    puVar7[0xd] = 0x7370747468203a73;
    puVar7[0xc] = 0x6e6f697463757274;
    puVar7[0xf] = 0x6c6f2f6d6f632e62;
    puVar7[0xe] = 0x75687469672f2f3a;
    puVar7[1] = 0x6d616c6c4f20676e;
    *puVar7 = 0x696e6e7572206f4e;
    puVar7[3] = 0x6574636574656420;
    puVar7[2] = 0x7265767265732061;
    puVar7[5] = 0x6874697720746920;
    puVar7[4] = 0x7472617453202e64;
    puVar7[7] = 0x6065767265732061;
    puVar7[6] = 0x6d616c6c6f60203a;
    puVar8 = (undefined8 *)_malloc(0x18);
    if (puVar8 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10074c4f4;
    }
    *puVar8 = 0xa5;
    puVar8[1] = puVar7;
    puVar8[2] = 0xa5;
    puVar7 = (undefined8 *)_malloc(0x18);
    if (puVar7 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10074c4f4;
    }
    *puVar7 = puVar8;
    puVar7[1] = &UNK_10b209118;
    *(undefined1 *)(puVar7 + 2) = 0x28;
    FUN_100de20f8(in_stack_00000550);
    lVar11 = (long)puVar7 + 1;
    _free(in_stack_00000550);
  }
  else {
    *(undefined8 *)(unaff_x26 + 0x78) = uVar18;
    *(undefined8 *)(unaff_x26 + 0x70) = uVar14;
    uStack0000000000000080 = (ushort)uVar24;
    in_stack_00000018 = in_stack_00000548;
    in_stack_00000020 = in_stack_00000550;
    in_stack_00000028 = uVar15;
    in_stack_00000030 = uVar19;
    in_stack_00000038 = uVar22;
    in_stack_00000040 = uVar25;
    in_stack_00000048 = uVar16;
    in_stack_00000050 = uVar20;
    in_stack_00000058 = uVar23;
    in_stack_00000060 = uVar26;
    in_stack_00000068 = uVar13;
    in_stack_00000070 = uVar17;
    in_stack_00000078 = uVar21;
    _uStack0000000000000080 = uVar24;
    in_stack_00000098 = in_stack_000005c8;
    if (uStack0000000000000080 - 200 < 100) {
      lVar11 = 0;
    }
    else {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62eea0 - 1 < 2 ||
           ((bRam000000010b62eea0 != 0 &&
            (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73f2eabee1bb8e45E
                               ), cVar5 != '\0')))) &&
          (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73f2eabee1bb8e45E
                              ), (uVar12 & 1) != 0)))) {
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73f2eabee1bb8e45E
                   ,&stack0x000004e8);
        uVar13 = 
        ___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73f2eabee1bb8e45E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000530);
          if (iVar6 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar13,puVar2,puVar1,&stack0x00000530,&stack0x000004e8);
          }
        }
      }
      else {
        uVar13 = 
        ___ZN12codex_ollama6client12OllamaClient12probe_server28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h73f2eabee1bb8e45E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004d0);
          if (iVar6 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar13,puVar2,puVar1,&stack0x000004d0,&stack0x000004e8);
          }
        }
      }
      lVar11 = FUN_100c35750(&UNK_108cac9af,0xa5);
    }
    FUN_100e0d524(&stack0x00000018);
  }
  *unaff_x25 = 1;
  if (lVar11 == 0) {
    lVar4 = *unaff_x19;
    lVar11 = unaff_x19[1];
    in_stack_00000418 = unaff_x19[3];
    in_stack_00000410 = unaff_x19[2];
    in_stack_00000420 = unaff_x19[4];
  }
  else {
    lVar4 = *(long *)unaff_x19[3];
    *(long *)unaff_x19[3] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4();
    }
    if (*unaff_x19 != 0) {
      _free(unaff_x19[1]);
    }
    lVar4 = -0x8000000000000000;
  }
  *(undefined1 *)(unaff_x19 + 0xb) = 0;
  *unaff_x20 = lVar4;
  unaff_x20[1] = lVar11;
  unaff_x20[3] = in_stack_00000418;
  unaff_x20[2] = in_stack_00000410;
  unaff_x20[4] = in_stack_00000420;
  uVar10 = 1;
LAB_10074c3d8:
  *(undefined1 *)((long)unaff_x19 + 0x59) = uVar10;
  return;
}

