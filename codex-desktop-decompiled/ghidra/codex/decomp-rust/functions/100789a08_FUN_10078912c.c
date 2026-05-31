
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10078912c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined1 uVar17;
  long *unaff_x19;
  long unaff_x20;
  undefined1 uVar18;
  undefined8 uVar19;
  undefined1 *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  ushort in_stack_00000100;
  undefined8 in_stack_00000118;
  char *in_stack_00000120;
  undefined8 *in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long *in_stack_00000228;
  long in_stack_00000340;
  long *in_stack_00000348;
  long in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined4 in_stack_00000388;
  undefined4 in_stack_0000038c;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000340,s__responses_108ac7726,&stack0x00000230);
  unaff_x19[0xd] = (long)in_stack_00000348;
  unaff_x19[0xc] = in_stack_00000340;
  unaff_x19[0xe] = in_stack_00000350;
  pauVar8 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar8[1][0] == '\x01') {
    _in_stack_000000d0 = *pauVar8;
  }
  else {
    _in_stack_000000d0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar8 + 8) = in_stack_000000d0._8_8_;
    pauVar8[1][0] = 1;
  }
  *(long *)*pauVar8 = in_stack_000000d0 + 1;
  in_stack_00000098 = 0;
  in_stack_000000a0 = (long *)0x8;
  unaff_x27[4] = 0;
  unaff_x27[3] = (long)&UNK_108c56c70;
  unaff_x27[6] = 0;
  unaff_x27[5] = 0;
  in_stack_000000a8 = 0;
  puVar9 = (undefined8 *)_malloc(5);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_107c03c64(1,5);
    goto LAB_100789dc8;
  }
  *(undefined1 *)((long)puVar9 + 4) = 0x6c;
  *(undefined4 *)puVar9 = 0x65646f6d;
  in_stack_00000080 = (undefined8 *)0x5;
  in_stack_00000090 = 5;
  lVar5 = unaff_x19[10];
  lVar16 = unaff_x19[0xb];
  in_stack_00000088 = puVar9;
  if (lVar16 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = _malloc(lVar16);
    if (lVar10 == 0) {
      FUN_107c03c64(1,lVar16);
      goto LAB_100789dc8;
    }
  }
  _memcpy(lVar10,lVar5,lVar16);
  FUN_101497a9c(&stack0x00000340,&stack0x00000098,&stack0x00000080,&stack0x00000230);
  in_stack_00000128 = *(undefined8 **)(unaff_x20 + 0x10);
  in_stack_00000120 = *(char **)(unaff_x20 + 8);
  in_stack_00000138 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x18);
  in_stack_00000148 = *(undefined8 *)(unaff_x20 + 0x30);
  in_stack_00000140 = *(undefined8 *)(unaff_x20 + 0x28);
  in_stack_00000158 = *(undefined8 *)(unaff_x20 + 0x40);
  in_stack_00000150 = *(undefined8 *)(unaff_x20 + 0x38);
  in_stack_00000160 = CONCAT44(in_stack_0000038c,in_stack_00000388);
  if ((long *)in_stack_00000120 != (long *)0x8000000000000005) {
    FUN_100de6690(&stack0x00000120);
  }
  puVar9 = (undefined8 *)_malloc(5);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_107c03c64(1,5);
    goto LAB_100789dc8;
  }
  *(undefined1 *)((long)puVar9 + 4) = 0x74;
  *(undefined4 *)puVar9 = 0x75706e69;
  in_stack_00000080 = (undefined8 *)0x5;
  in_stack_00000090 = 5;
  in_stack_00000088 = puVar9;
  FUN_101497a9c(&stack0x00000340,&stack0x00000098,&stack0x00000080,&stack0x00000230);
  in_stack_00000128 = *(undefined8 **)(unaff_x20 + 0x10);
  in_stack_00000120 = *(char **)(unaff_x20 + 8);
  in_stack_00000138 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x18);
  in_stack_00000148 = *(undefined8 *)(unaff_x20 + 0x30);
  in_stack_00000140 = *(undefined8 *)(unaff_x20 + 0x28);
  in_stack_00000158 = *(undefined8 *)(unaff_x20 + 0x40);
  in_stack_00000150 = *(undefined8 *)(unaff_x20 + 0x38);
  in_stack_00000160 = CONCAT44(in_stack_0000038c,in_stack_00000388);
  if ((long *)in_stack_00000120 != (long *)0x8000000000000005) {
    FUN_100de6690(&stack0x00000120);
  }
  puVar9 = (undefined8 *)_malloc(0x11);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x11);
    goto LAB_100789dc8;
  }
  *(undefined1 *)(puVar9 + 2) = 0x73;
  puVar9[1] = 0x6e656b6f745f7475;
  *puVar9 = 0x7074756f5f78616d;
  in_stack_00000080 = (undefined8 *)0x11;
  in_stack_00000090 = 0x11;
  in_stack_00000088 = puVar9;
  FUN_101497a9c(&stack0x00000340,&stack0x00000098,&stack0x00000080,&stack0x00000230);
  in_stack_00000128 = *(undefined8 **)(unaff_x20 + 0x10);
  in_stack_00000120 = *(char **)(unaff_x20 + 8);
  in_stack_00000138 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x18);
  in_stack_00000148 = *(undefined8 *)(unaff_x20 + 0x30);
  in_stack_00000140 = *(undefined8 *)(unaff_x20 + 0x28);
  in_stack_00000158 = *(undefined8 *)(unaff_x20 + 0x40);
  in_stack_00000150 = *(undefined8 *)(unaff_x20 + 0x38);
  in_stack_00000160 = CONCAT44(in_stack_0000038c,in_stack_00000388);
  if ((long *)in_stack_00000120 != (long *)0x8000000000000005) {
    FUN_100de6690(&stack0x00000120);
  }
  in_stack_00000058 = unaff_x27[5];
  in_stack_00000050 = unaff_x27[4];
  in_stack_00000068 = unaff_x27[7];
  in_stack_00000060 = unaff_x27[6];
  in_stack_00000070 = in_stack_000000d8;
  in_stack_00000038 = (undefined8 *)unaff_x27[1];
  in_stack_00000030 = (char *)*unaff_x27;
  in_stack_00000048 = unaff_x27[3];
  in_stack_00000040 = unaff_x27[2];
  unaff_x19[0x12] = in_stack_00000048;
  unaff_x19[0x11] = in_stack_00000040;
  unaff_x19[0x14] = in_stack_00000058;
  unaff_x19[0x13] = in_stack_00000050;
  unaff_x19[0x16] = in_stack_00000068;
  unaff_x19[0x15] = in_stack_00000060;
  unaff_x19[0x17] = in_stack_000000d8;
  unaff_x19[0x10] = (long)in_stack_00000038;
  unaff_x19[0xf] = (long)in_stack_00000030;
  FUN_1011d51fc(&stack0x00000340,*(undefined8 *)(unaff_x28 + 0x18),&UNK_108cab1d8,unaff_x19[0xd],
                unaff_x19[0xe]);
  FUN_1011d5650(&stack0x00000230,&stack0x00000340,&UNK_108ca7be3,0xc,&UNK_108c57210,0x10);
  FUN_1011d5a74(&stack0x00000120,&stack0x00000230,unaff_x19 + 0xf);
  if ((long *)in_stack_00000120 == (long *)0x2) {
    auVar21._8_8_ = in_stack_00000128;
    auVar21._0_8_ = 1;
    lVar5 = *in_stack_00000228;
    *in_stack_00000228 = lVar5 + -1;
    LORelease();
  }
  else {
    auVar21 = FUN_105c4eee0(in_stack_00000228,&stack0x00000120);
    lVar5 = *in_stack_00000228;
    *in_stack_00000228 = lVar5 + -1;
    LORelease();
  }
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000228);
  }
  plVar12 = auVar21._8_8_;
  *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar21;
  if ((auVar21._0_8_ & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000340,plVar12);
    if (in_stack_00000340 == 4) {
      *unaff_x26 = 3;
      uVar18 = 1;
      uVar17 = 3;
      goto LAB_100789c9c;
    }
    lVar5 = unaff_x19[0x18];
    lVar16 = unaff_x19[0x19];
    lVar10 = in_stack_00000340;
    plVar12 = in_stack_00000348;
  }
  else {
    unaff_x19[0x19] = 0;
    if (plVar12 == (long *)0x0) {
      FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
      goto LAB_100789dc8;
    }
    lVar16 = 0;
    lVar5 = 1;
    lVar10 = 3;
  }
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000398;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000390;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000003a8;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000003a0;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000003b8;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000003b0;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000003c0;
  *(undefined8 *)(unaff_x29 + -0xe8) = in_stack_00000358;
  *(long *)(unaff_x29 + -0xf0) = in_stack_00000350;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000368;
  *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000360;
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00000378;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000370;
  *(ulong *)(unaff_x29 + -0xb8) = CONCAT44(in_stack_0000038c,in_stack_00000388);
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000380;
  FUN_100e03d7c(lVar5,lVar16);
  if (lVar10 == 3) {
    in_stack_00000120 = (char *)plVar12;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000340,s_Request_failed__108ac77ab,&stack0x00000230);
    plVar12 = (long *)_malloc(0x18);
    if (plVar12 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100789dc8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100789dcc);
      (*pcVar4)();
    }
    *plVar12 = in_stack_00000340;
    plVar12[1] = (long)in_stack_00000348;
    plVar12[2] = in_stack_00000350;
    plVar13 = (long *)_malloc(0x18);
    plVar15 = (long *)in_stack_00000120;
    if (plVar13 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100789dc8;
    }
    *plVar13 = (long)plVar12;
    plVar13[1] = (long)&UNK_10b209118;
    *(undefined1 *)(plVar13 + 2) = 0x28;
    FUN_100de20f8(in_stack_00000120);
    _free(plVar15);
    FUN_100de6690(unaff_x19 + 0xf);
    uVar14 = (long)plVar13 + 1;
  }
  else {
    lVar5 = *(long *)(unaff_x29 + -0xb0);
    lVar20 = *(long *)(unaff_x29 + -0x98);
    lVar16 = *(long *)(unaff_x29 + -0xa0);
    unaff_x27[0xb] = *(long *)(unaff_x29 + -0xa8);
    unaff_x27[10] = lVar5;
    unaff_x27[0xd] = lVar20;
    unaff_x27[0xc] = lVar16;
    lVar5 = *(long *)(unaff_x29 + -0x90);
    unaff_x27[0xf] = *(long *)(unaff_x29 + -0x88);
    unaff_x27[0xe] = lVar5;
    in_stack_00000118 = *(undefined8 *)(unaff_x29 + -0x80);
    lVar5 = *(long *)(unaff_x29 + -0xf0);
    lVar20 = *(long *)(unaff_x29 + -0xd8);
    lVar16 = *(long *)(unaff_x29 + -0xe0);
    unaff_x27[3] = *(long *)(unaff_x29 + -0xe8);
    unaff_x27[2] = lVar5;
    unaff_x27[5] = lVar20;
    unaff_x27[4] = lVar16;
    lVar5 = *(long *)(unaff_x29 + -0xd0);
    lVar20 = *(long *)(unaff_x29 + -0xb8);
    lVar16 = *(long *)(unaff_x29 + -0xc0);
    unaff_x27[7] = *(long *)(unaff_x29 + -200);
    unaff_x27[6] = lVar5;
    unaff_x27[9] = lVar20;
    unaff_x27[8] = lVar16;
    in_stack_00000098 = lVar10;
    in_stack_000000a0 = plVar12;
    if (in_stack_00000100 - 200 < 100) {
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
        if (1 < bRam000000010b62d3f0 - 1) {
          if (bRam000000010b62d3f0 != 0) {
            cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
                              );
            if (cVar6 != '\0') goto LAB_1007897c8;
          }
          goto LAB_100789b6c;
        }
LAB_1007897c8:
        uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
                           );
        if ((uVar14 & 1) == 0) goto LAB_100789b6c;
        in_stack_00000120 = (char *)(unaff_x19 + 10);
        in_stack_00000128 = (undefined8 *)&DAT_100c7b3a0;
        in_stack_00000038 = &stack0x00000120;
        in_stack_00000030 = s_Successfully_loaded_model_____108ac778b;
        in_stack_00000080 = &stack0x00000030;
        in_stack_00000088 = (undefined8 *)&UNK_10b208fd0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
                   ,&stack0x00000340);
        lVar5 = 
        ___ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000230);
          if (iVar7 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar5,puVar2,puVar1,&stack0x00000230,&stack0x00000340);
          }
        }
      }
      else {
LAB_100789b6c:
        lVar5 = 
        ___ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar19 = *(undefined8 *)
                    (
                    ___ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
                    + 0x20);
          uVar3 = *(undefined8 *)
                   (
                   ___ZN14codex_lmstudio6client14LMStudioClient10load_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h292048d49d6ff288E
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0x78) = 3;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar19;
          *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x78);
          if (iVar7 != 0) {
            in_stack_00000128 = (undefined8 *)&stack0x00000230;
            in_stack_00000120 = s_Successfully_loaded_model_____108ac778b;
            in_stack_00000030 = (char *)&stack0x00000120;
            in_stack_00000038 = (undefined8 *)&UNK_10b208fd0;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar5,puVar2,puVar1,unaff_x29 + -0x78,&stack0x00000340);
          }
        }
      }
      uVar14 = 0;
    }
    else {
      in_stack_00000120 = (char *)CONCAT62(in_stack_00000120._2_6_,in_stack_00000100);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000340,s_Failed_to_load_model__108ac7772,&stack0x00000230);
      plVar12 = (long *)_malloc(0x18);
      if (plVar12 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100789dc8;
      }
      *plVar12 = in_stack_00000340;
      plVar12[1] = (long)in_stack_00000348;
      plVar12[2] = in_stack_00000350;
      plVar15 = (long *)_malloc(0x18);
      if (plVar15 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100789dc8;
      }
      *plVar15 = (long)plVar12;
      plVar15[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar15 + 2) = 0x28;
      uVar14 = (long)plVar15 + 1;
    }
    FUN_100e0d524(&stack0x00000098);
    FUN_100de6690(unaff_x19 + 0xf);
  }
  if (unaff_x19[0xc] != 0) {
    _free(unaff_x19[0xd]);
  }
  *unaff_x26 = 1;
  uVar18 = 0;
  FUN_100c97ac8(in_stack_00000008);
  if (uVar14 == 0) {
LAB_100789ad4:
    lVar5 = *(long *)unaff_x19[3];
    *(long *)unaff_x19[3] = lVar5 + -1;
    LORelease();
  }
  else {
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
      if (1 < bRam000000010b62d3d8 - 1) {
        if (bRam000000010b62d3d8 != 0) {
          cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
                            );
          if (cVar6 != '\0') goto LAB_100789500;
        }
        goto LAB_10078994c;
      }
LAB_100789500:
      uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
                         );
      lVar5 = 
      ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
      ;
      if ((uVar11 & 1) == 0) goto LAB_10078994c;
      in_stack_00000138 =
           ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
           + 0x30;
      *(char **)(unaff_x29 + -0x78) = s_Failed_to_load_model___108ac770a;
      *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000230;
      in_stack_00000080 = (undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000088 = (undefined8 *)&UNK_10b208fd0;
      in_stack_00000128 = &stack0x00000080;
      in_stack_00000120 = (char *)0x1;
      in_stack_00000130 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar5,&stack0x00000120);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000a0 =
             *(long **)(
                       ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
                       + 0x20);
        in_stack_000000a8 =
             *(undefined8 *)
              (
              ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
              + 0x28);
        in_stack_00000098 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000098);
        if (iVar7 != 0) {
          in_stack_00000030 = (char *)&stack0x00000120;
          in_stack_00000038 = (undefined8 *)CONCAT71(in_stack_00000038._1_7_,1);
          *(char ***)(unaff_x29 + -0xf0) = &stack0x00000030;
          *(undefined **)(unaff_x29 + -0xe8) = &DAT_1061c2098;
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000340);
        }
      }
    }
    else {
LAB_10078994c:
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000020 =
             *(undefined8 *)
              (
              ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
              + 0x20);
        in_stack_00000028 =
             *(undefined8 *)
              (
              ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
              + 0x28);
        in_stack_00000018 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000018);
        if (iVar7 != 0) {
          in_stack_00000138 =
               ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h459058cece65e2a1E
               + 0x30;
          in_stack_00000038 = (undefined8 *)&stack0x00000230;
          in_stack_00000030 = s_Failed_to_load_model___108ac770a;
          *(char ***)(unaff_x29 + -0x78) = &stack0x00000030;
          *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
          in_stack_00000128 = (undefined8 *)(unaff_x29 + -0x78);
          in_stack_00000120 = (char *)0x1;
          in_stack_00000130 = 1;
          *(char ***)(unaff_x29 + -0xf0) = &stack0x00000120;
          *(undefined1 *)(unaff_x29 + -0xe8) = 1;
          in_stack_00000098 = unaff_x29 + -0xf0;
          in_stack_000000a0 = (long *)&DAT_1061c2098;
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000340);
        }
      }
    }
    if ((uVar14 & 3) != 1) goto LAB_100789ad4;
    uVar19 = *(undefined8 *)(uVar14 - 1);
    puVar9 = *(undefined8 **)(uVar14 + 7);
    pcVar4 = (code *)*puVar9;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar19);
    }
    if (puVar9[1] != 0) {
      _free(uVar19);
    }
    _free((undefined8 *)(uVar14 - 1));
    lVar5 = *(long *)unaff_x19[3];
    *(long *)unaff_x19[3] = lVar5 + -1;
    LORelease();
  }
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*unaff_x19 != 0) {
    _free(unaff_x19[1]);
  }
  if (unaff_x19[4] != 0) {
    _free(unaff_x19[5]);
  }
  uVar17 = 1;
LAB_100789c9c:
  *(undefined1 *)(unaff_x19 + 0x1b) = uVar17;
  return uVar18;
}

