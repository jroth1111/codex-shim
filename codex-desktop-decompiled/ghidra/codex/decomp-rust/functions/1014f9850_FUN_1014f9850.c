
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014f9850(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long unaff_x19;
  undefined8 *puVar12;
  ulong unaff_x25;
  long unaff_x26;
  char *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000098;
  undefined *in_stack_000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000d0;
  long lStack00000000000000e8;
  undefined *puStack00000000000000f0;
  undefined3 uStack0000000000000100;
  undefined1 uStack0000000000000103;
  undefined3 uStack0000000000000104;
  long *in_stack_00000110;
  undefined4 uStack0000000000000120;
  undefined8 *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000190;
  undefined8 *puStack0000000000000198;
  undefined8 uStack00000000000001a0;
  long lStack00000000000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  undefined8 *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  char *in_stack_000001e0;
  long in_stack_000001e8;
  
  *(char **)(unaff_x29 + -0x80) = s_send_response_error__108ac8efd;
  *(undefined4 **)(unaff_x29 + -0x78) = &stack0x00000120;
  lStack00000000000000e8 = unaff_x29 + -0x80;
  puStack00000000000000f0 = &UNK_10b208fd0;
  puStack0000000000000198 = &stack0x000000e8;
  _uStack0000000000000190 = (long *)0x1;
  uStack00000000000001a0 = 1;
  lStack00000000000001a8 = param_1;
  FUN_10084ca88(&stack0x00000190);
  FUN_10080f2a0(unaff_x19 + unaff_x26,2);
  cVar4 = *(char *)(unaff_x29 + -0xb0);
  puVar12 = *(undefined8 **)(unaff_x29 + -0xa8);
  if (cVar4 != '\x04') {
    puVar10 = (undefined4 *)(unaff_x29 - 0xb0U | 1);
    uStack0000000000000100 = (undefined3)*puVar10;
    uStack0000000000000103 = (undefined1)*(undefined4 *)((long)puVar10 + 3);
    uStack0000000000000104 = (undefined3)((uint)*(undefined4 *)((long)puVar10 + 3) >> 8);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x90);
    if (cVar4 != '\x05') {
      _uStack0000000000000120 = CONCAT41(*puVar10,cVar4);
      _uStack0000000000000120 =
           (undefined8 *)CONCAT44(*(undefined4 *)((long)puVar10 + 3),uStack0000000000000120);
      in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0x98);
      in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x90);
      in_stack_00000128 = puVar12;
      plVar6 = (long *)FUN_100f410dc(0x18,8);
      *plVar6 = 0;
      *(undefined1 *)(plVar6 + 2) = 0xb;
      _uStack0000000000000190 = CONCAT41(_uStack0000000000000100,cVar4);
      _uStack0000000000000190 =
           (long *)CONCAT44(CONCAT31(uStack0000000000000104,uStack0000000000000103),
                            uStack0000000000000190);
      lStack00000000000001a8 = *(long *)(unaff_x29 + -0x78);
      uStack00000000000001a0 = *(undefined8 *)(unaff_x29 + -0x80);
      in_stack_000001b0 = *(long *)(unaff_x29 + -0x70);
      in_stack_00000110 = plVar6;
      puStack0000000000000198 = puVar12;
      lVar7 = FUN_100f15098(&stack0x00000190);
      FUN_100d3911c(plVar6);
      puVar8 = &UNK_10b238a78;
      goto LAB_1014f9aac;
    }
  }
  _uStack0000000000000120 = puVar12;
  plVar6 = (long *)FUN_100f410dc(0x18,8);
  *plVar6 = 0;
  *(undefined1 *)(plVar6 + 2) = 6;
  _uStack0000000000000190 = plVar6;
  lVar7 = FUN_100f15038(puVar12);
  FUN_100d3911c(plVar6);
  puVar8 = &UNK_10b212e38;
LAB_1014f9aac:
  *plVar6 = lVar7;
  plVar6[1] = (long)puVar8;
  func_0x000100e3c8d4(&stack0x000000d0);
  plVar3 = in_stack_000000a8;
  if (in_stack_000000a8 != (long *)0x0) {
    uVar1 = in_stack_000000a8[6];
    do {
      uVar11 = uVar1;
      if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_1014f9af0;
      uVar1 = in_stack_000000a8[6];
    } while (uVar1 != uVar11);
    in_stack_000000a8[6] = uVar11 | 2;
LAB_1014f9af0:
    if ((uVar11 & 5) == 1) {
      (**(code **)(in_stack_000000a8[4] + 0x10))(in_stack_000000a8[5]);
    }
    lVar7 = *plVar3;
    *plVar3 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hee0500350e092c15E(&stack0x000000a8);
    }
  }
  if (in_stack_000000b0 != (long *)0x0) {
    lVar7 = *in_stack_000000b0;
    *in_stack_000000b0 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9cdd98fed5209d92E(&stack0x000000b0);
    }
  }
  FUN_100e07584(&stack0x00000098);
  if ((unaff_x25 & 1) != 0) {
    FUN_100def764(&stack0x00000010);
    func_0x000100e3c8d4(&stack0x00000070);
  }
  if ((code *)*in_stack_00000008 != (code *)0x0) {
    (*(code *)*in_stack_00000008)(in_stack_00000000);
  }
  if (in_stack_00000008[1] != 0) {
    _free(in_stack_00000000);
  }
  if (plVar6 != (long *)0x0) {
    in_stack_000000d0 = plVar6;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b636330 - 1 < 2 ||
         ((bRam000000010b636330 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                             ), cVar4 != '\0')))) &&
        (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                           ),
        lVar7 = 
        ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
        , iVar5 != 0)))) {
      lStack00000000000001a8 =
           ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
           + 0x30;
      _uStack0000000000000120 = &stack0x000000d0;
      in_stack_00000128 =
           (undefined8 *)
           &
           __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
      ;
      *(char **)(unaff_x29 + -0xb0) = s_stream_error__108abf7d9;
      *(undefined4 **)(unaff_x29 + -0xa8) = &stack0x00000120;
      *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
      *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
      puStack0000000000000198 = (undefined8 *)(unaff_x29 + -0xe0);
      _uStack0000000000000190 = (long *)0x1;
      uStack00000000000001a0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,&stack0x00000190);
      lVar7 = 
      ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
      ;
      if ((*unaff_x28 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000018 =
             *(undefined1 **)
              (
              ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
              + 0x20);
        in_stack_00000020 =
             *(undefined8 *)
              (
              ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
              + 0x28);
        in_stack_00000010 = 4;
        puVar8 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar8 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar8 + 0x18))(puVar2,&stack0x00000010);
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar7,puVar2,puVar8,&stack0x00000010,&stack0x00000190);
        }
      }
    }
    else {
      lVar7 = 
      ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
      ;
      if ((*unaff_x28 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000128 =
             *(undefined8 **)
              (
              ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
              + 0x20);
        in_stack_00000130 =
             *(undefined8 *)
              (
              ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
              + 0x28);
        _uStack0000000000000120 = (undefined8 *)0x4;
        puVar8 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar8 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar8 + 0x18))(puVar2,&stack0x00000120);
        if (iVar5 != 0) {
          in_stack_00000028 =
               ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
               + 0x30;
          in_stack_00000098 = &stack0x000000d0;
          in_stack_000000a0 =
               &
               __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
          ;
          *(char **)(unaff_x29 + -0x80) = s_stream_error__108abf7d9;
          *(undefined8 ***)(unaff_x29 + -0x78) = &stack0x00000098;
          lStack00000000000000e8 = unaff_x29 + -0x80;
          puStack00000000000000f0 = &UNK_10b208fd0;
          in_stack_00000018 = (undefined1 *)&stack0x000000e8;
          in_stack_00000010 = 1;
          in_stack_00000020 = 1;
          in_stack_000001b0 = *(long *)(lVar7 + 0x60);
          in_stack_000001b8 = *(undefined8 *)(lVar7 + 0x68);
          puStack0000000000000198 = *(undefined8 **)(lVar7 + 0x50);
          uStack00000000000001a0 = *(undefined8 *)(lVar7 + 0x58);
          _uStack0000000000000190 = (long *)0x1;
          if (puStack0000000000000198 == (undefined8 *)0x0) {
            _uStack0000000000000190 = (long *)0x2;
          }
          uStack00000000000001d8 = *(undefined4 *)(lVar7 + 8);
          uStack00000000000001dc = *(undefined4 *)(lVar7 + 0xc);
          *(undefined8 **)(unaff_x29 + -0xe0) = &stack0x00000010;
          *(undefined1 *)(unaff_x29 + -0xd8) = 1;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
          *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
          lStack00000000000001a8 = 1;
          if (in_stack_000001b0 == 0) {
            lStack00000000000001a8 = 2;
          }
          in_stack_000001c8 = in_stack_00000128;
          in_stack_000001c0 = _uStack0000000000000120;
          in_stack_000001d0 = in_stack_00000130;
          in_stack_000001e8 = unaff_x29 + -0xb0;
          in_stack_000001e0 = s__108b39f4f;
          (**(code **)(puVar8 + 0x20))(puVar2,&stack0x00000190);
        }
      }
    }
    plVar6 = in_stack_000000d0;
    lVar7 = *in_stack_000000d0;
    if (lVar7 != 0) {
      puVar12 = (undefined8 *)in_stack_000000d0[1];
      pcVar9 = (code *)*puVar12;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(lVar7);
      }
      if (puVar12[1] != 0) {
        _free(lVar7);
      }
    }
    _free(plVar6);
  }
  if (*(ulong *)(unaff_x19 + 0x12d8) != 2) {
    lVar7 = *(long *)(unaff_x19 + 0x12e0);
    if ((*(ulong *)(unaff_x19 + 0x12d8) & 1) != 0) {
      lVar7 = lVar7 + (*(long *)(*(long *)(unaff_x19 + 0x12e8) + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(*(long *)(unaff_x19 + 0x12e8) + 0x68))(lVar7,unaff_x19 + 0x12f0);
  }
  if ((*unaff_x28 == '\0') && (lVar7 = *(long *)(unaff_x19 + 0x12f8), lVar7 != 0)) {
    in_stack_00000010 = *(undefined8 *)(lVar7 + 0x10);
    in_stack_00000018 = *(undefined1 **)(lVar7 + 0x18);
    _uStack0000000000000190 = &stack0x00000010;
    puStack0000000000000198 = (undefined8 *)&DAT_100c7b3a0;
    FUN_1011d7d74(unaff_x19 + 0x12d8,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000190);
  }
  return 0;
}

