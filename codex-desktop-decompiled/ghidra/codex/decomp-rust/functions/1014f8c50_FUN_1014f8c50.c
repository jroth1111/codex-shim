
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014f8c50(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  byte *pbVar7;
  undefined *puVar8;
  long unaff_x19;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long unaff_x25;
  long unaff_x27;
  char *unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  char *pcStack0000000000000098;
  undefined8 *puStack00000000000000a0;
  long *in_stack_000000d0;
  long *plStack00000000000000e8;
  undefined *puStack00000000000000f0;
  undefined4 uStack0000000000000120;
  long *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000190;
  long *plStack0000000000000198;
  undefined8 uStack00000000000001a0;
  long lStack00000000000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long *in_stack_000001c0;
  long *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  char *in_stack_000001e0;
  long in_stack_000001e8;
  
  puStack00000000000000a0 = (undefined8 *)&stack0x00000120;
  pcStack0000000000000098 = s_send_response_error__108ac8efd;
  plStack00000000000000e8 = (long *)&stack0x00000098;
  puStack00000000000000f0 = &UNK_10b208fd0;
  plStack0000000000000198 = (long *)&stack0x000000e8;
  _uStack0000000000000190 = (long *)0x1;
  uStack00000000000001a0 = 1;
  lStack00000000000001a8 = param_1;
  FUN_10084c94c(&stack0x00000190);
  FUN_10080f2a0(unaff_x19 + unaff_x25,2);
  bVar2 = *(byte *)(unaff_x29 + -0xb0);
  plVar9 = *(long **)(unaff_x29 + -0xa8);
  if (bVar2 - 4 < 2) {
    plStack00000000000000e8 = plVar9;
    plVar6 = (long *)_malloc(0x18);
    if (plVar6 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *plVar6 = 0;
      *(undefined1 *)(plVar6 + 2) = 6;
      _uStack0000000000000120 = plVar6;
      _uStack0000000000000190 = plVar9;
      pbVar7 = (byte *)_malloc(8);
      if (pbVar7 != (byte *)0x0) {
        *(long **)pbVar7 = plVar9;
        puVar8 = &UNK_10b212e38;
LAB_1014f943c:
        *plVar6 = (long)pbVar7;
        plVar6[1] = (long)puVar8;
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
              lVar10 = 
              ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
              , iVar5 != 0)))) {
            lStack00000000000001a8 =
                 ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                 + 0x30;
            _uStack0000000000000120 = (long *)&stack0x000000d0;
            in_stack_00000128 =
                 (long *)&
                         __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
            ;
            *(char **)(unaff_x29 + -0xb0) = s_stream_error__108abf7d9;
            *(undefined4 **)(unaff_x29 + -0xa8) = &stack0x00000120;
            *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb0;
            *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
            plStack0000000000000198 = (long *)(unaff_x29 + -0xe0);
            _uStack0000000000000190 = (long *)0x1;
            uStack00000000000001a0 = 1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar10,&stack0x00000190);
            lVar10 = 
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
              iVar5 = (**(code **)(puVar8 + 0x18))(puVar1,&stack0x00000010);
              if (iVar5 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar10,puVar1,puVar8,&stack0x00000010,&stack0x00000190);
              }
            }
          }
          else {
            lVar10 = 
            ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
            ;
            if ((*unaff_x28 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_00000128 =
                   *(long **)(
                             ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                             + 0x20);
              in_stack_00000130 =
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
              iVar5 = (**(code **)(puVar8 + 0x18))(puVar1,&stack0x00000120);
              if (iVar5 != 0) {
                in_stack_00000028 =
                     ___ZN105__LT_rama_http_core__proto__h2__server__H2Stream_LT_F_C_B_GT__u20_as_u20_core__future__future__Future_GT_4poll28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h31cb71c8a7312929E
                     + 0x30;
                pcStack0000000000000098 = (char *)&stack0x000000d0;
                puStack00000000000000a0 =
                     (undefined8 *)
                     &
                     __ZN65__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17h1a4b46bd237668eeE
                ;
                *(char **)(unaff_x29 + -0x80) = s_stream_error__108abf7d9;
                *(char ***)(unaff_x29 + -0x78) = &stack0x00000098;
                plStack00000000000000e8 = (long *)(unaff_x29 + -0x80);
                puStack00000000000000f0 = &UNK_10b208fd0;
                in_stack_00000018 = (undefined1 *)&stack0x000000e8;
                in_stack_00000010 = 1;
                in_stack_00000020 = 1;
                in_stack_000001b0 = *(long *)(lVar10 + 0x60);
                in_stack_000001b8 = *(undefined8 *)(lVar10 + 0x68);
                plStack0000000000000198 = *(long **)(lVar10 + 0x50);
                uStack00000000000001a0 = *(undefined8 *)(lVar10 + 0x58);
                _uStack0000000000000190 = (long *)0x1;
                if (plStack0000000000000198 == (long *)0x0) {
                  _uStack0000000000000190 = (long *)0x2;
                }
                uStack00000000000001d8 = *(undefined4 *)(lVar10 + 8);
                uStack00000000000001dc = *(undefined4 *)(lVar10 + 0xc);
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
                (**(code **)(puVar8 + 0x20))(puVar1,&stack0x00000190);
              }
            }
          }
          plVar9 = in_stack_000000d0;
          lVar10 = *in_stack_000000d0;
          if (lVar10 != 0) {
            puVar12 = (undefined8 *)in_stack_000000d0[1];
            pcVar3 = (code *)*puVar12;
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(lVar10);
            }
            if (puVar12[1] != 0) {
              _free(lVar10);
            }
          }
          _free(plVar9);
        }
        if (*(ulong *)(unaff_x19 + unaff_x27) != 2) {
          lVar10 = *(long *)(unaff_x19 + 0x12e0);
          if ((*(ulong *)(unaff_x19 + unaff_x27) & 1) != 0) {
            lVar10 = lVar10 + (*(long *)(*(long *)(unaff_x19 + 0x12e8) + 0x10) - 1U &
                              0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(*(long *)(unaff_x19 + 0x12e8) + 0x68))(lVar10,unaff_x19 + 0x12f0);
        }
        if ((*unaff_x28 == '\0') && (lVar10 = *(long *)(unaff_x19 + 0x12f8), lVar10 != 0)) {
          in_stack_00000010 = *(undefined8 *)(lVar10 + 0x10);
          in_stack_00000018 = *(undefined1 **)(lVar10 + 0x18);
          _uStack0000000000000190 = &stack0x00000010;
          plStack0000000000000198 = (long *)&DAT_100c7b3a0;
          FUN_1011d7d74(unaff_x19 + unaff_x27,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00000190)
          ;
        }
        return 0;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
    }
  }
  else {
    puVar11 = (undefined4 *)(unaff_x29 - 0xb0U | 1);
    _uStack0000000000000120 = CONCAT41(*puVar11,bVar2);
    _uStack0000000000000120 =
         (long *)CONCAT44(*(undefined4 *)((long)puVar11 + 3),uStack0000000000000120);
    in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0x98);
    in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000128 = plVar9;
    plVar6 = (long *)_malloc(0x18);
    if (plVar6 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *plVar6 = 0;
      *(undefined1 *)(plVar6 + 2) = 0xb;
      _uStack0000000000000190 = CONCAT41(*puVar11,bVar2);
      _uStack0000000000000190 =
           (long *)CONCAT44(*(undefined4 *)((long)puVar11 + 3),uStack0000000000000190);
      lStack00000000000001a8 = *(long *)(unaff_x29 + -0x98);
      uStack00000000000001a0 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_000001b0 = *(long *)(unaff_x29 + -0x90);
      plStack00000000000000e8 = plVar6;
      plStack0000000000000198 = plVar9;
      pbVar7 = (byte *)_malloc(0x28);
      if (pbVar7 != (byte *)0x0) {
        *pbVar7 = bVar2;
        *(undefined4 *)(pbVar7 + 1) = *puVar11;
        *(undefined4 *)(pbVar7 + 4) = *(undefined4 *)((long)puVar11 + 3);
        *(long **)(pbVar7 + 8) = plVar9;
        uVar13 = *(undefined8 *)(unaff_x29 + -0xa0);
        *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(pbVar7 + 0x10) = uVar13;
        *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(unaff_x29 + -0x90);
        puVar8 = &UNK_10b238a78;
        goto LAB_1014f943c;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014fa0cc);
  (*pcVar3)();
}

