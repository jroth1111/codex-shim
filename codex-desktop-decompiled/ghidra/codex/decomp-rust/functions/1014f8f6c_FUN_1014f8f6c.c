
/* WARNING: Removing unreachable block (ram,0x0001014f9028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014f8f6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x27;
  char *unaff_x28;
  long unaff_x29;
  undefined4 uStack0000000000000010;
  undefined8 *puStack0000000000000018;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  char *pcStack0000000000000098;
  undefined *puStack00000000000000a0;
  long *in_stack_000000d0;
  undefined4 uStack00000000000000e8;
  undefined *in_stack_000000f0;
  undefined4 uStack0000000000000120;
  undefined *puStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined1 *in_stack_00000190;
  undefined *in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  undefined *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  char *in_stack_000001e0;
  long in_stack_000001e8;
  
  puStack00000000000000a0 = (undefined *)(unaff_x29 + -0xe0);
  pcStack0000000000000098 = s_stream_received_RST_STREAM__108abf2a2;
  *(char ***)(unaff_x29 + -0x80) = &stack0x00000098;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  puStack0000000000000018 = (undefined8 *)(unaff_x29 + -0x80);
  _uStack0000000000000010 = 1;
  uStack0000000000000020 = 1;
  puStack0000000000000128 = *(undefined **)(unaff_x29 + -0xa8);
  _uStack0000000000000120 = *(undefined8 **)(unaff_x29 + -0xb0);
  uStack0000000000000130 = *(undefined8 *)(unaff_x29 + -0xa0);
  lStack0000000000000028 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar3 = uStack00000000000000e8;
  _uStack0000000000000120 = (undefined8 *)CONCAT71(stack0x00000121,2);
  _uStack0000000000000120 = (undefined8 *)CONCAT44(uStack00000000000000e8,uStack0000000000000120);
  plVar6 = (long *)_malloc(0x18);
  if (plVar6 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *plVar6 = 0;
    *(undefined1 *)(plVar6 + 2) = 0xb;
    _uStack0000000000000010 = CONCAT71(stack0x00000011,2);
    _uStack0000000000000010 = CONCAT44(uVar3,uStack0000000000000010);
    *(long **)(unaff_x29 + -0xe0) = plVar6;
    puVar7 = (undefined1 *)_malloc(0x28);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 2;
      *(undefined4 *)(puVar7 + 4) = uVar3;
      *plVar6 = (long)puVar7;
      plVar6[1] = (long)&UNK_10b238a78;
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
            lVar8 = 
            ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
            , iVar5 != 0)))) {
          in_stack_000001a8 =
               ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
               + 0x30;
          _uStack0000000000000120 = &stack0x000000d0;
          puStack0000000000000128 =
               &
               __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
          ;
          *(char **)(unaff_x29 + -0xb0) = s_stream_error__108abf7d9;
          *(undefined4 **)(unaff_x29 + -0xa8) = &stack0x00000120;
          *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
          *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
          in_stack_00000198 = (undefined *)(unaff_x29 + -0xe0);
          in_stack_00000190 = (undefined1 *)0x1;
          in_stack_000001a0 = 1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar8,&stack0x00000190);
          lVar8 = 
          ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
          ;
          if ((*unaff_x28 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack0000000000000018 =
                 *(undefined8 **)
                  (
                  ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                  + 0x20);
            uStack0000000000000020 =
                 *(undefined8 *)
                  (
                  ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                  + 0x28);
            _uStack0000000000000010 = 4;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000010);
            if (iVar5 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar8,puVar2,puVar1,&stack0x00000010,&stack0x00000190);
            }
          }
        }
        else {
          lVar8 = 
          ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
          ;
          if ((*unaff_x28 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack0000000000000128 =
                 *(undefined **)
                  (
                  ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                  + 0x20);
            uStack0000000000000130 =
                 *(undefined8 *)
                  (
                  ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                  + 0x28);
            _uStack0000000000000120 = (undefined8 *)0x4;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000120);
            if (iVar5 != 0) {
              lStack0000000000000028 =
                   ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                   + 0x30;
              pcStack0000000000000098 = (char *)&stack0x000000d0;
              puStack00000000000000a0 =
                   &
                   __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
              ;
              *(char **)(unaff_x29 + -0x80) = s_stream_error__108abf7d9;
              *(char ***)(unaff_x29 + -0x78) = &stack0x00000098;
              _uStack00000000000000e8 = unaff_x29 + -0x80;
              in_stack_000000f0 = &UNK_10b208fd0;
              puStack0000000000000018 = (undefined8 *)&stack0x000000e8;
              _uStack0000000000000010 = 1;
              uStack0000000000000020 = 1;
              in_stack_000001b0 = *(long *)(lVar8 + 0x60);
              in_stack_000001b8 = *(undefined8 *)(lVar8 + 0x68);
              in_stack_00000198 = *(undefined **)(lVar8 + 0x50);
              in_stack_000001a0 = *(undefined8 *)(lVar8 + 0x58);
              in_stack_00000190 = (undefined1 *)0x1;
              if (in_stack_00000198 == (undefined *)0x0) {
                in_stack_00000190 = (undefined1 *)0x2;
              }
              uStack00000000000001d8 = *(undefined4 *)(lVar8 + 8);
              uStack00000000000001dc = *(undefined4 *)(lVar8 + 0xc);
              *(undefined4 **)(unaff_x29 + -0xe0) = &stack0x00000010;
              *(undefined1 *)(unaff_x29 + -0xd8) = 1;
              *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
              *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
              in_stack_000001a8 = 1;
              if (in_stack_000001b0 == 0) {
                in_stack_000001a8 = 2;
              }
              in_stack_000001c8 = puStack0000000000000128;
              in_stack_000001c0 = _uStack0000000000000120;
              in_stack_000001d0 = uStack0000000000000130;
              in_stack_000001e8 = unaff_x29 + -0xb0;
              in_stack_000001e0 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000190);
            }
          }
        }
        plVar6 = in_stack_000000d0;
        lVar8 = *in_stack_000000d0;
        if (lVar8 != 0) {
          puVar10 = (undefined8 *)in_stack_000000d0[1];
          pcVar9 = (code *)*puVar10;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(lVar8);
          }
          if (puVar10[1] != 0) {
            _free(lVar8);
          }
        }
        _free(plVar6);
      }
      if (*(ulong *)(unaff_x19 + unaff_x27) != 2) {
        lVar8 = *(long *)(unaff_x19 + 0x12e0);
        if ((*(ulong *)(unaff_x19 + unaff_x27) & 1) != 0) {
          lVar8 = lVar8 + (*(long *)(*(long *)(unaff_x19 + 0x12e8) + 0x10) - 1U & 0xfffffffffffffff0
                          ) + 0x10;
        }
        (**(code **)(*(long *)(unaff_x19 + 0x12e8) + 0x68))(lVar8,unaff_x19 + 0x12f0);
      }
      if ((*unaff_x28 == '\0') && (lVar8 = *(long *)(unaff_x19 + 0x12f8), lVar8 != 0)) {
        _uStack0000000000000010 = *(undefined8 *)(lVar8 + 0x10);
        puStack0000000000000018 = *(undefined8 **)(lVar8 + 0x18);
        in_stack_00000190 = (undefined1 *)&stack0x00000010;
        in_stack_00000198 = &DAT_100c7b3a0;
        FUN_1011d7d74(unaff_x19 + unaff_x27,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000190);
      }
      return 0;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1014fa0cc);
  (*pcVar9)();
}

