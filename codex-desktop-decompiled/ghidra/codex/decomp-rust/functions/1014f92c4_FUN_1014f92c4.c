
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014f92c4(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  byte *pbVar6;
  code *pcVar7;
  long unaff_x19;
  undefined *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long unaff_x25;
  long unaff_x27;
  char *unaff_x28;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *plStack00000000000000d0;
  undefined *puStack00000000000000d8;
  char *pcStack00000000000000e8;
  undefined *puStack00000000000000f0;
  undefined4 uStack0000000000000120;
  undefined *puStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000190;
  undefined *puStack0000000000000198;
  undefined8 uStack00000000000001a0;
  long lStack00000000000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long *in_stack_000001c0;
  undefined *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  char *in_stack_000001e0;
  long in_stack_000001e8;
  
  puStack00000000000000f0 = (undefined *)(unaff_x29 + -0x80);
  pcStack00000000000000e8 = s_send_response_error__108ac8efd;
  plStack00000000000000d0 = (long *)&stack0x000000e8;
  puStack00000000000000d8 = &UNK_10b208fd0;
  puStack0000000000000198 = (undefined *)&stack0x000000d0;
  _uStack0000000000000190 = (undefined8 *)0x1;
  uStack00000000000001a0 = 1;
  puStack0000000000000128 = in_stack_000000a0;
  _uStack0000000000000120 = in_stack_00000098;
  uStack0000000000000130 = in_stack_000000a8;
  lStack00000000000001a8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_10080f2a0(unaff_x19 + unaff_x25,2);
  bVar2 = *(byte *)(unaff_x29 + -0xb0);
  puVar8 = *(undefined **)(unaff_x29 + -0xa8);
  if (bVar2 - 4 < 2) {
    *(undefined **)(unaff_x29 + -0x80) = puVar8;
    plVar5 = (long *)_malloc(0x18);
    if (plVar5 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *plVar5 = 0;
      *(undefined1 *)(plVar5 + 2) = 6;
      _uStack0000000000000120 = plVar5;
      _uStack0000000000000190 = (undefined8 *)puVar8;
      pbVar6 = (byte *)_malloc(8);
      if (pbVar6 != (byte *)0x0) {
        *(undefined **)pbVar6 = puVar8;
        puVar8 = &UNK_10b212e38;
LAB_1014f943c:
        *plVar5 = (long)pbVar6;
        plVar5[1] = (long)puVar8;
        if ((code *)*in_stack_00000008 != (code *)0x0) {
          (*(code *)*in_stack_00000008)(in_stack_00000000);
        }
        if (in_stack_00000008[1] != 0) {
          _free(in_stack_00000000);
        }
        if (plVar5 != (long *)0x0) {
          plStack00000000000000d0 = plVar5;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
             (((bRam000000010b636330 - 1 < 2 ||
               ((bRam000000010b636330 != 0 &&
                (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                                   ), cVar3 != '\0')))) &&
              (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                                 ),
              lVar9 = 
              ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
              , iVar4 != 0)))) {
            lStack00000000000001a8 =
                 ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                 + 0x30;
            _uStack0000000000000120 = (long *)&stack0x000000d0;
            puStack0000000000000128 =
                 &
                 __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
            ;
            *(char **)(unaff_x29 + -0xb0) = s_stream_error__108abf7d9;
            *(undefined4 **)(unaff_x29 + -0xa8) = &stack0x00000120;
            *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
            *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
            puStack0000000000000198 = (undefined *)(unaff_x29 + -0xe0);
            _uStack0000000000000190 = (undefined8 *)0x1;
            uStack00000000000001a0 = 1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar9,&stack0x00000190);
            lVar9 = 
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
              puVar1 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_109adfc03;
              }
              iVar4 = (**(code **)(puVar8 + 0x18))(puVar1,&stack0x00000010);
              if (iVar4 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar9,puVar1,puVar8,&stack0x00000010,&stack0x00000190);
              }
            }
          }
          else {
            lVar9 = 
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
              _uStack0000000000000120 = (long *)0x4;
              puVar8 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar8 = &UNK_10b3c24c8;
              }
              puVar1 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_109adfc03;
              }
              iVar4 = (**(code **)(puVar8 + 0x18))(puVar1,&stack0x00000120);
              if (iVar4 != 0) {
                in_stack_00000028 =
                     ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                     + 0x30;
                in_stack_00000098 = (long *)&stack0x000000d0;
                in_stack_000000a0 =
                     &
                     __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
                ;
                *(char **)(unaff_x29 + -0x80) = s_stream_error__108abf7d9;
                *(long ***)(unaff_x29 + -0x78) = &stack0x00000098;
                pcStack00000000000000e8 = (char *)(unaff_x29 + -0x80);
                puStack00000000000000f0 = &UNK_10b208fd0;
                in_stack_00000018 = (undefined1 *)&stack0x000000e8;
                in_stack_00000010 = 1;
                in_stack_00000020 = 1;
                in_stack_000001b0 = *(long *)(lVar9 + 0x60);
                in_stack_000001b8 = *(undefined8 *)(lVar9 + 0x68);
                puStack0000000000000198 = *(undefined **)(lVar9 + 0x50);
                uStack00000000000001a0 = *(undefined8 *)(lVar9 + 0x58);
                _uStack0000000000000190 = (undefined8 *)0x1;
                if (puStack0000000000000198 == (undefined *)0x0) {
                  _uStack0000000000000190 = (undefined8 *)0x2;
                }
                uStack00000000000001d8 = *(undefined4 *)(lVar9 + 8);
                uStack00000000000001dc = *(undefined4 *)(lVar9 + 0xc);
                *(undefined8 **)(unaff_x29 + -0xe0) = &stack0x00000010;
                *(undefined1 *)(unaff_x29 + -0xd8) = 1;
                *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xe0;
                *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
                lStack00000000000001a8 = 1;
                if (in_stack_000001b0 == 0) {
                  lStack00000000000001a8 = 2;
                }
                in_stack_000001c8 = puStack0000000000000128;
                in_stack_000001c0 = _uStack0000000000000120;
                in_stack_000001d0 = uStack0000000000000130;
                in_stack_000001e8 = unaff_x29 + -0xb0;
                in_stack_000001e0 = s__108b39f4f;
                (**(code **)(puVar8 + 0x20))(puVar1,&stack0x00000190);
              }
            }
          }
          plVar5 = plStack00000000000000d0;
          lVar9 = *plStack00000000000000d0;
          if (lVar9 != 0) {
            puVar11 = (undefined8 *)plStack00000000000000d0[1];
            pcVar7 = (code *)*puVar11;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(lVar9);
            }
            if (puVar11[1] != 0) {
              _free(lVar9);
            }
          }
          _free(plVar5);
        }
        if (*(ulong *)(unaff_x19 + unaff_x27) != 2) {
          lVar9 = *(long *)(unaff_x19 + 0x12e0);
          if ((*(ulong *)(unaff_x19 + unaff_x27) & 1) != 0) {
            lVar9 = lVar9 + (*(long *)(*(long *)(unaff_x19 + 0x12e8) + 0x10) - 1U &
                            0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(*(long *)(unaff_x19 + 0x12e8) + 0x68))(lVar9,unaff_x19 + 0x12f0);
        }
        if ((*unaff_x28 == '\0') && (lVar9 = *(long *)(unaff_x19 + 0x12f8), lVar9 != 0)) {
          in_stack_00000010 = *(undefined8 *)(lVar9 + 0x10);
          in_stack_00000018 = *(undefined1 **)(lVar9 + 0x18);
          _uStack0000000000000190 = &stack0x00000010;
          puStack0000000000000198 = &DAT_100c7b3a0;
          FUN_1011d7d74(unaff_x19 + unaff_x27,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000190)
          ;
        }
        return 0;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
    }
  }
  else {
    puVar10 = (undefined4 *)(unaff_x29 - 0xb0U | 1);
    _uStack0000000000000120 = CONCAT41(*puVar10,bVar2);
    _uStack0000000000000120 =
         (long *)CONCAT44(*(undefined4 *)((long)puVar10 + 3),uStack0000000000000120);
    in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0x98);
    uStack0000000000000130 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x90);
    puStack0000000000000128 = puVar8;
    plVar5 = (long *)_malloc(0x18);
    if (plVar5 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *plVar5 = 0;
      *(undefined1 *)(plVar5 + 2) = 0xb;
      _uStack0000000000000190 = CONCAT41(*puVar10,bVar2);
      _uStack0000000000000190 =
           (undefined8 *)CONCAT44(*(undefined4 *)((long)puVar10 + 3),uStack0000000000000190);
      lStack00000000000001a8 = *(long *)(unaff_x29 + -0x98);
      uStack00000000000001a0 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_000001b0 = *(long *)(unaff_x29 + -0x90);
      *(long **)(unaff_x29 + -0x80) = plVar5;
      puStack0000000000000198 = puVar8;
      pbVar6 = (byte *)_malloc(0x28);
      if (pbVar6 != (byte *)0x0) {
        *pbVar6 = bVar2;
        *(undefined4 *)(pbVar6 + 1) = *puVar10;
        *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)((long)puVar10 + 3);
        *(undefined **)(pbVar6 + 8) = puVar8;
        uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
        *(undefined8 *)(pbVar6 + 0x18) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(pbVar6 + 0x10) = uVar12;
        *(undefined8 *)(pbVar6 + 0x20) = *(undefined8 *)(unaff_x29 + -0x90);
        puVar8 = &UNK_10b238a78;
        goto LAB_1014f943c;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1014fa0cc);
  (*pcVar7)();
}

