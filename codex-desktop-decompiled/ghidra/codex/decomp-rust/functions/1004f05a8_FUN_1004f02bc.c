
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f02bc(int *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  short sVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  code *pcVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  ulong *puVar17;
  undefined1 (*pauVar18) [16];
  long lVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 uVar22;
  int *piVar23;
  undefined1 uVar24;
  long lVar25;
  int *piVar26;
  int *piVar27;
  long unaff_x19;
  int *unaff_x20;
  undefined8 uVar28;
  int *piVar29;
  undefined8 *puVar30;
  ulong uVar31;
  int *unaff_x23;
  int *unaff_x24;
  undefined8 uVar32;
  long lVar33;
  int *piVar34;
  undefined8 uVar35;
  int *piVar36;
  int *piVar37;
  int *piVar38;
  long unaff_x29;
  undefined1 auVar39 [16];
  int *in_stack_00000000;
  long *in_stack_00000008;
  int *in_stack_00000010;
  int *in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  int *in_stack_00000030;
  int *in_stack_00000038;
  int *in_stack_00000040;
  int *in_stack_00000048;
  int *in_stack_00000050;
  int *in_stack_00000058;
  int *in_stack_00000068;
  long in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined8 in_stack_00000080;
  short sStack0000000000000088;
  short sStack000000000000008a;
  short sStack0000000000000090;
  int *in_stack_00000098;
  int *in_stack_000000a0;
  int *in_stack_000000a8;
  int *in_stack_000000b0;
  int *in_stack_000000b8;
  int *in_stack_000000c0;
  int *in_stack_000000c8;
  int *in_stack_000000d0;
  char *in_stack_000000d8;
  int *in_stack_000000e0;
  int *in_stack_000000e8;
  int *in_stack_000000f0;
  int *in_stack_000000f8;
  int *in_stack_00000100;
  int *in_stack_00000108;
  int *in_stack_00000110;
  int *in_stack_00000118;
  int *in_stack_00000120;
  int *in_stack_00000128;
  int *in_stack_00000130;
  int *in_stack_00000138;
  int *in_stack_00000140;
  int *in_stack_00000148;
  int *in_stack_00000150;
  int *in_stack_00000158;
  int *in_stack_00000160;
  int *in_stack_00000168;
  int *in_stack_00000170;
  int *in_stack_00000178;
  int *in_stack_00000180;
  int *in_stack_00000188;
  int *in_stack_00000190;
  int *in_stack_00000198;
  char cStack00000000000001a0;
  int *piStack00000000000001a8;
  int *piStack00000000000001b0;
  int *piStack00000000000001b8;
  int *in_stack_000001c0;
  int *in_stack_000001c8;
  int *in_stack_000001d0;
  int *in_stack_000001d8;
  int *in_stack_000001e0;
  int *in_stack_000001e8;
  
code_r0x0001004f02bc:
  *(char **)(unaff_x29 + -0x80) = s_loaded__rules_files_in_108abfc20;
  *(short **)(unaff_x29 + -0x78) = &stack0x00000088;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
  piStack00000000000001a8 = (int *)(unaff_x29 + -0x90);
  _cStack00000000000001a0 = (int *)0x1;
  piStack00000000000001b0 = (int *)0x1;
  piStack00000000000001b8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000001a0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    unaff_x20 = *(int **)unaff_x20;
    uVar32 = *(undefined8 *)(unaff_x20 + 8);
    uVar35 = *(undefined8 *)(unaff_x20 + 10);
    *(undefined8 *)(unaff_x29 + -0xe0) = 4;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar32;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar35;
    piVar36 = piRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      piVar36 = (int *)&UNK_10b3c24c8;
    }
    piVar37 = piRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      piVar37 = (int *)&UNK_109adfc03;
    }
    iVar16 = (**(code **)(piVar36 + 6))(piVar37,unaff_x29 + -0xe0);
    if (iVar16 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (unaff_x20,piVar37,piVar36,unaff_x29 + -0xe0,&stack0x000001a0);
    }
  }
LAB_1004f0650:
  piVar37 = *(int **)(unaff_x19 + 0xf0);
  piVar38 = *(int **)(unaff_x19 + 0xf8);
  piVar36 = *(int **)(unaff_x19 + 0x100);
  uVar31 = (ulong)piVar37 >> 0x10;
  if (*(long *)(unaff_x19 + 0xb8) == -0x7fffffffffffffff) {
    plVar21 = *(long **)(unaff_x19 + 0xc0);
    if (*plVar21 == 0xcc) {
      *plVar21 = 0x84;
    }
    else {
      (**(code **)(plVar21[2] + 0x20))();
    }
  }
  else if (*(long *)(unaff_x19 + 0xb8) != -0x8000000000000000) {
    FUN_100d43d78();
    lVar33 = **(long **)(unaff_x19 + 0xd8);
    **(long **)(unaff_x19 + 0xd8) = lVar33 + -1;
    LORelease();
    if (lVar33 == 1) {
      DataMemoryBarrier(2,1);
      func_0x00010604ce90();
    }
  }
  piVar29 = (int *)0x1;
  piVar34 = (int *)0x9;
  while( true ) {
    *in_stack_00000078 = 1;
    FUN_100d46d54(in_stack_00000070);
    piVar37 = (int *)((ulong)piVar37 & 0xffff | uVar31 << 0x10);
    if ((int)piVar29 == 0) break;
    in_stack_000000a0 = piVar38 + (long)piVar36 * 6;
    lVar33 = *(long *)(unaff_x19 + 0x20);
    _sStack0000000000000088 = piVar38;
    _sStack0000000000000090 = piVar38;
    in_stack_00000098 = piVar37;
    if ((int *)(*(long *)(unaff_x19 + 0x10) - lVar33) < piVar36) {
      thunk_FUN_108855060((long *)(unaff_x19 + 0x10),lVar33,piVar36,8,0x18);
      lVar33 = *(long *)(unaff_x19 + 0x20);
    }
    _memcpy(*(long *)(unaff_x19 + 0x18) + lVar33 * 0x18,piVar38,(long)piVar36 * 0x18);
    *(undefined **)(unaff_x19 + 0x20) = (undefined *)(lVar33 + (long)piVar36);
    if (piVar37 != (int *)0x0) {
      _free(piVar38);
    }
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x70));
    }
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x58));
    }
    do {
      puVar30 = *(undefined8 **)(unaff_x19 + 0x88);
      do {
        if (puVar30 == *(undefined8 **)(unaff_x19 + 0x98)) {
          if (*(long *)(unaff_x19 + 0x90) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x80));
          }
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
             (((bRam000000010b629978 - 1 < 2 ||
               ((bRam000000010b629978 != 0 &&
                (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                                    ), cVar15 != '\0')))) &&
              (uVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                                  ),
              lVar33 = 
              ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
              , (uVar31 & 1) != 0)))) {
            piStack00000000000001b8 =
                 (int *)(
                        ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                        + 0x30);
            *(undefined **)(unaff_x29 + -0xe0) = &UNK_108ca2a74;
            *(undefined8 *)(unaff_x29 + -0xd8) = 0x29;
            *(long *)(unaff_x29 + -0xf8) = unaff_x19 + 0x10;
            _sStack0000000000000088 = (int *)(unaff_x29 + -0xe0);
            _sStack0000000000000090 = (int *)&UNK_10b208fd0;
            in_stack_00000098 = (int *)(unaff_x29 + -0xf8);
            in_stack_000000a0 = (int *)&UNK_10b215510;
            piStack00000000000001a8 = (int *)&stack0x00000088;
            _cStack00000000000001a0 = (int *)0x1;
            piStack00000000000001b0 = (int *)0x2;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar33,&stack0x000001a0);
            lVar33 = 
            ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              unaff_x23 = piRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                unaff_x23 = (int *)&UNK_10b3c24c8;
              }
              unaff_x24 = piRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                unaff_x24 = (int *)&UNK_109adfc03;
              }
              iVar16 = (**(code **)(unaff_x23 + 6))(unaff_x24,&stack0x00000250);
              if (iVar16 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar33,unaff_x24,unaff_x23,&stack0x00000250,&stack0x000001a0);
              }
            }
          }
          else {
            lVar33 = 
            ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              unaff_x23 = (int *)&
                                 __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
              ;
              in_stack_00000190 =
                   *(int **)(
                            ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                            + 0x20);
              in_stack_00000198 =
                   *(int **)(
                            ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc0581b2e49c02222E
                            + 0x28);
              in_stack_00000188 = (int *)0x5;
              piVar29 = piRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                piVar29 = (int *)&UNK_10b3c24c8;
              }
              piVar36 = piRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                piVar36 = (int *)&UNK_109adfc03;
              }
              iVar16 = (**(code **)(piVar29 + 6))(piVar36,&stack0x00000188);
              if (iVar16 != 0) {
                *(undefined **)(unaff_x29 + -0x70) = &UNK_108ca2a74;
                *(undefined8 *)(unaff_x29 + -0x68) = 0x29;
                *(long *)(unaff_x29 + -0x80) = unaff_x19 + 0x10;
                _cStack00000000000001a0 = (int *)(unaff_x29 + -0x70);
                piStack00000000000001a8 = (int *)&UNK_10b208fd0;
                piStack00000000000001b0 = (int *)(unaff_x29 + -0x80);
                piStack00000000000001b8 = (int *)&UNK_10b215510;
                in_stack_000000c0 = in_stack_00000190;
                in_stack_000000b8 = in_stack_00000188;
                in_stack_000000c8 = in_stack_00000198;
                in_stack_000000a8 = *(int **)(lVar33 + 0x60);
                in_stack_000000b0 = *(int **)(lVar33 + 0x68);
                _sStack0000000000000090 = *(int **)(lVar33 + 0x50);
                in_stack_00000098 = *(int **)(lVar33 + 0x58);
                _sStack0000000000000088 = (int *)0x1;
                if (_sStack0000000000000090 == (int *)0x0) {
                  _sStack0000000000000088 = (int *)0x2;
                }
                in_stack_000000d0 = *(int **)(lVar33 + 8);
                *(undefined1 **)(unaff_x29 + -0xf8) = &stack0x00000250;
                *(undefined1 *)(unaff_x29 + -0xf0) = 1;
                *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xf8;
                *(undefined **)(unaff_x29 + -0xd8) = &DAT_1061c2098;
                in_stack_000000a0 = (int *)0x1;
                if (in_stack_000000a8 == (int *)0x0) {
                  in_stack_000000a0 = (int *)0x2;
                }
                in_stack_000000e0 = (int *)(unaff_x29 + -0xe0);
                in_stack_000000d8 = s__108b39f4f;
                (**(code **)(piVar29 + 8))(piVar36,&stack0x00000088);
              }
            }
          }
          pauVar18 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar18[1][0] == '\x01') {
            auVar39 = *pauVar18;
          }
          else {
            auVar39 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar18 + 8) = auVar39._8_8_;
            pauVar18[1][0] = 1;
          }
          *(long *)*pauVar18 = auVar39._0_8_ + 2;
          *(undefined8 *)(unaff_x19 + 0x38) = 0;
          *(undefined8 *)(unaff_x19 + 0x40) = 0;
          *(undefined8 *)(unaff_x19 + 0x48) = 8;
          *(undefined8 *)(unaff_x19 + 0x50) = 0;
          *(undefined8 *)(unaff_x19 + 0x58) = 0;
          *(undefined8 *)(unaff_x19 + 0x60) = 8;
          *(undefined8 *)(unaff_x19 + 0x68) = 0;
          *(undefined8 *)(unaff_x19 + 0x78) = 0;
          *(undefined **)(unaff_x19 + 0x70) = &UNK_108da7b18;
          *(undefined8 *)(unaff_x19 + 0x88) = 0;
          *(undefined8 *)(unaff_x19 + 0x80) = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x90) = auVar39;
          *(undefined8 *)(unaff_x19 + 0xa8) = 0;
          *(undefined **)(unaff_x19 + 0xa0) = &UNK_108da7b18;
          *(undefined8 *)(unaff_x19 + 0xb8) = 0;
          *(undefined8 *)(unaff_x19 + 0xb0) = 0;
          *(long *)(unaff_x19 + 0xc0) = auVar39._0_8_ + 1;
          *(long *)(unaff_x19 + 200) = auVar39._8_8_;
          *(undefined1 *)(unaff_x19 + 0x30) = 1;
          lVar33 = *(long *)(unaff_x19 + 0x18);
          lVar25 = lVar33 + *(long *)(unaff_x19 + 0x20) * 0x18;
          *(long *)(unaff_x19 + 0xd8) = lVar33;
          *(long *)(unaff_x19 + 0xe0) = lVar25;
          if (lVar33 == lVar25) goto LAB_1004ef760;
          goto LAB_1004f0bb0;
        }
        puVar17 = (ulong *)*puVar30;
        *(undefined8 **)(unaff_x19 + 0x88) = puVar30 + 1;
      } while (((*(byte *)(*(long *)(unaff_x19 + 8) + 0x958) & 1) != 0) &&
              (puVar30 = puVar30 + 1, (*puVar17 & 6) == 2));
      __ZN12codex_config5state16ConfigLayerEntry13config_folder17h164a4a8a75c4d2e0E
                (unaff_x19 + 0x38);
    } while (*(long *)(unaff_x19 + 0x38) == -0x8000000000000000);
    *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x38);
    uVar32 = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x60) = uVar32;
    uVar35 = *(undefined8 *)(unaff_x19 + 0x58);
    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
              (&stack0x000001a0,&UNK_108ca10cd,5);
    piVar36 = piStack00000000000001a8;
    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
              (&stack0x00000088,piStack00000000000001a8,piStack00000000000001b0,uVar35,uVar32);
    puVar30 = (undefined8 *)(unaff_x19 + 0x68);
    *(int **)(unaff_x19 + 0x70) = _sStack0000000000000090;
    *puVar30 = _sStack0000000000000088;
    *(int **)(unaff_x19 + 0x78) = in_stack_00000098;
    if (_cStack00000000000001a0 != (int *)0x0) {
      _free(piVar36);
    }
    *(undefined8 **)(unaff_x19 + 0x108) = puVar30;
    in_stack_00000078 = (undefined1 *)(unaff_x19 + 0x111);
    *(undefined1 *)(unaff_x19 + 0x111) = 0;
    in_stack_00000070 = unaff_x19 + 0xa0;
    *(undefined1 *)(unaff_x19 + 0x110) = 0;
    *(undefined8 **)(unaff_x19 + 0xb0) = puVar30;
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined1 *)(unaff_x19 + 0x160) = 0;
    FUN_100fc273c(&stack0x00000088,unaff_x19 + 0x118,in_stack_00000080);
    piVar23 = in_stack_000000b8;
    piVar34 = in_stack_000000b0;
    piVar29 = in_stack_000000a8;
    piVar38 = in_stack_000000a0;
    piVar37 = in_stack_00000098;
    unaff_x20 = _sStack0000000000000090;
    piVar36 = _sStack0000000000000088;
    if (_sStack0000000000000088 == (int *)0x8000000000000003) {
      uVar22 = 3;
LAB_1004f06d8:
      *in_stack_00000078 = uVar22;
      uVar22 = 3;
      goto LAB_1004f0b48;
    }
    if (*(char *)(unaff_x19 + 0x160) == '\x03') {
      if (*(char *)(unaff_x19 + 0x158) == '\x03') {
        plVar21 = *(long **)(unaff_x19 + 0x150);
        if (*plVar21 == 0xcc) {
          *plVar21 = 0x84;
        }
        else {
          (**(code **)(plVar21[2] + 0x20))();
        }
      }
      else if ((*(char *)(unaff_x19 + 0x158) == '\0') && (*(long *)(unaff_x19 + 0x138) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x140));
      }
    }
    if (piVar36 == (int *)0x8000000000000002) {
      cVar15 = FUN_100c355d4(unaff_x20);
      if (cVar15 != '\0') {
        _sStack0000000000000088 = unaff_x20;
        piVar38 = (int *)0x1;
        uVar32 = *(undefined8 *)(unaff_x19 + 0xa0);
        piVar36 = *(int **)(unaff_x19 + 0xa8);
        if ((piVar36 == (int *)0x0) || (piVar38 = (int *)_malloc(piVar36), piVar38 != (int *)0x0)) {
          _memcpy(piVar38,uVar32,piVar36);
          goto LAB_1004f03c8;
        }
        FUN_107c03c64(1,piVar36);
        goto LAB_1004efe68;
      }
      piVar29 = (int *)0x1;
      piVar38 = (int *)0x8;
      piVar34 = (int *)0x9;
      if (((ulong)unaff_x20 & 3) == 1) {
        uVar32 = *(undefined8 *)((long)unaff_x20 + -1);
        puVar30 = *(undefined8 **)((long)unaff_x20 + 7);
        pcVar13 = (code *)*puVar30;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(uVar32);
        }
        if (puVar30[1] != 0) {
          _free(uVar32);
        }
        _free((undefined8 *)((long)unaff_x20 + -1));
        piVar36 = (int *)0x0;
        piVar37 = (int *)0x0;
        uVar31 = 0;
        piVar38 = (int *)0x8;
        piVar34 = (int *)0x9;
      }
      else {
        piVar36 = (int *)0x0;
        piVar37 = (int *)0x0;
        uVar31 = 0;
      }
    }
    else {
      *(int **)(unaff_x19 + 0xb8) = piVar36;
      *(int **)(unaff_x19 + 0xc0) = unaff_x20;
      *(int **)(unaff_x19 + 0xd0) = piVar38;
      *(int **)(unaff_x19 + 200) = piVar37;
      *(int **)(unaff_x19 + 0xe0) = piVar34;
      *(int **)(unaff_x19 + 0xd8) = piVar29;
      *(int **)(unaff_x19 + 0xe8) = piVar23;
      *(undefined8 *)(unaff_x19 + 0xf0) = 0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 8;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
      while( true ) {
        lVar33 = unaff_x19 + 0xb8;
        *(undefined1 *)(unaff_x19 + 0x128) = 0;
        *(long *)(unaff_x19 + 0x118) = lVar33;
        *(long *)(unaff_x19 + 0x120) = lVar33;
        __ZN5tokio2fs8read_dir7ReadDir15poll_next_entry17h64cae2562f764fe1E
                  (&stack0x00000088,lVar33,in_stack_00000080);
        unaff_x20 = _sStack0000000000000088;
        uVar22 = SUB81(_sStack0000000000000090,0);
        uVar24 = 3;
        if (sStack0000000000000090 != 4) {
          uVar24 = 1;
        }
        *(undefined1 *)(unaff_x19 + 0x128) = uVar24;
        if (sStack0000000000000090 == 4) goto LAB_1004f06d8;
        if (sStack0000000000000090 == 3) {
          uVar32 = *(undefined8 *)(unaff_x19 + 0xa0);
          piVar36 = *(int **)(unaff_x19 + 0xa8);
          lVar33 = 1;
          if ((piVar36 == (int *)0x0) || (lVar33 = _malloc(piVar36), lVar33 != 0)) {
            _memcpy(lVar33,uVar32,piVar36);
            *(undefined8 *)(unaff_x19 + 0x118) = 7;
            *(int **)(unaff_x19 + 0x120) = piVar36;
            *(short *)(unaff_x19 + 0x128) = (short)lVar33;
            *(short *)(unaff_x19 + 0x12e) = (short)((ulong)lVar33 >> 0x30);
            *(int *)(unaff_x19 + 0x12a) = (int)((ulong)lVar33 >> 0x10);
            *(int **)(unaff_x19 + 0x130) = piVar36;
            *(int **)(unaff_x19 + 0x138) = unaff_x20;
            piVar38 = *(int **)(unaff_x19 + 0x128);
            in_stack_00000058 = *(int **)(unaff_x19 + 0x148);
            in_stack_00000050 = *(int **)(unaff_x19 + 0x140);
            in_stack_00000018 = *(int **)(unaff_x19 + 0x158);
            in_stack_00000010 = *(int **)(unaff_x19 + 0x150);
            in_stack_00000048 = *(int **)(unaff_x19 + 0x168);
            in_stack_00000040 = *(int **)(unaff_x19 + 0x160);
            in_stack_00000038 = *(int **)(unaff_x19 + 0x178);
            in_stack_00000030 = *(int **)(unaff_x19 + 0x170);
            in_stack_00000068 = *(int **)(unaff_x19 + 0x180);
            unaff_x23 = *(int **)(unaff_x19 + 0x188);
            unaff_x24 = *(int **)(unaff_x19 + 400);
            in_stack_00000000 = *(int **)(unaff_x19 + 0x198);
            goto LAB_1004f0184;
          }
          FUN_107c03c64(1,piVar36);
          goto LAB_1004efe68;
        }
        *(short *)(unaff_x19 + 0x128) = sStack0000000000000090;
        *(int *)(unaff_x19 + 0x12a) = (int)((ulong)_sStack0000000000000090 >> 0x10);
        *(short *)(unaff_x19 + 0x12e) = (short)((ulong)_sStack0000000000000090 >> 0x30);
        *(undefined8 *)(unaff_x19 + 0x118) = 9;
        *(int **)(unaff_x19 + 0x120) = _sStack0000000000000088;
        *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x128);
        *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x120);
        if (*(short *)(unaff_x19 + 0x1e8) == 2) {
          uVar31 = *(ulong *)(unaff_x19 + 0x100);
          if (1 < uVar31) {
            if (uVar31 < 0x15) {
              FUN_100e94528();
            }
            else {
              __ZN4core5slice4sort6stable14driftsort_main17h577bb33b89cb0145E
                        (*(undefined8 *)(unaff_x19 + 0xf8),uVar31,&stack0x00000088);
            }
          }
          piVar36 = unaff_x20;
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            unaff_x20 = (int *)&
                               __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
            ;
            if (((bRam000000010b6299c0 - 1 < 2) ||
                ((piVar36 = unaff_x20, bRam000000010b6299c0 != 0 &&
                 (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                                     ),
                 piVar36 = (int *)&
                                  __ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                 , cVar15 != '\0')))) &&
               (uVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                                   ),
               param_2 = 
               ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
               , piVar36 = unaff_x20, (uVar31 & 1) != 0)) {
              param_1 = (int *)(
                               ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                               + 0x30);
              *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x19 + 0x100);
              uVar32 = *(undefined8 *)(unaff_x19 + 0xa8);
              *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x19 + 0xa0);
              *(undefined8 *)(unaff_x29 + -0x68) = uVar32;
              _sStack0000000000000088 = (int *)(unaff_x29 + -0xa8);
              _sStack0000000000000090 =
                   (int *)&
                          __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              in_stack_00000098 = (int *)(unaff_x29 + -0x70);
              in_stack_000000a0 =
                   (int *)&
                          __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              goto code_r0x0001004f02bc;
            }
          }
          unaff_x20 = piVar36;
          lVar33 = 
          ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar32 = *(undefined8 *)
                      (
                      ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                      + 0x20);
            uVar35 = *(undefined8 *)
                      (
                      ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0xf8) = 4;
            *(undefined8 *)(unaff_x29 + -0xf0) = uVar32;
            *(undefined8 *)(unaff_x29 + -0xe8) = uVar35;
            piVar36 = piRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              piVar36 = (int *)&UNK_10b3c24c8;
            }
            unaff_x20 = piRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              unaff_x20 = (int *)&UNK_109adfc03;
            }
            iVar16 = (**(code **)(piVar36 + 6))(unaff_x20,unaff_x29 + -0xf8);
            if (iVar16 != 0) {
              lVar25 = ___ZN10codex_core11exec_policy20collect_policy_files28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27b3d7ac670748bfE
                       + 0x30;
              uVar32 = *(undefined8 *)(unaff_x19 + 0xa0);
              uVar35 = *(undefined8 *)(unaff_x19 + 0xa8);
              *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x19 + 0x100);
              *(undefined8 *)(unaff_x29 + -0x90) = uVar32;
              *(undefined8 *)(unaff_x29 + -0x88) = uVar35;
              _cStack00000000000001a0 = (int *)(unaff_x29 + -0x98);
              piStack00000000000001a8 =
                   (int *)&
                          __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              piStack00000000000001b0 = (int *)(unaff_x29 + -0x90);
              piStack00000000000001b8 =
                   (int *)&
                          __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              *(char **)(unaff_x29 + -0xa8) = s_loaded__rules_files_in_108abfc20;
              *(char **)(unaff_x29 + -0xa0) = &stack0x000001a0;
              *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa8;
              *(undefined **)(unaff_x29 + -0xb0) = &UNK_10b208fd0;
              *(undefined8 *)(unaff_x29 + -0xe0) = 1;
              *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xb8;
              *(undefined8 *)(unaff_x29 + -0xd0) = 1;
              *(long *)(unaff_x29 + -200) = lVar25;
              in_stack_000000a8 = *(int **)(lVar33 + 0x60);
              in_stack_000000b0 = *(int **)(lVar33 + 0x68);
              _sStack0000000000000090 = *(int **)(lVar33 + 0x50);
              in_stack_00000098 = *(int **)(lVar33 + 0x58);
              _sStack0000000000000088 = (int *)0x1;
              if (_sStack0000000000000090 == (int *)0x0) {
                _sStack0000000000000088 = (int *)0x2;
              }
              in_stack_000000d0 = *(int **)(lVar33 + 8);
              *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xe0;
              *(undefined1 *)(unaff_x29 + -0x78) = 1;
              *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
              *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
              in_stack_000000a0 = (int *)0x1;
              if (in_stack_000000a8 == (int *)0x0) {
                in_stack_000000a0 = (int *)0x2;
              }
              in_stack_000000c0 = *(int **)(unaff_x29 + -0xf0);
              in_stack_000000b8 = *(int **)(unaff_x29 + -0xf8);
              in_stack_000000c8 = *(int **)(unaff_x29 + -0xe8);
              in_stack_000000e0 = (int *)(unaff_x29 + -0x70);
              in_stack_000000d8 = s__108b39f4f;
              (**(code **)(piVar36 + 8))(unaff_x20,&stack0x00000088);
            }
          }
          goto LAB_1004f0650;
        }
        *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x128);
        *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x120);
        lVar33 = *(long *)(unaff_x19 + 0x1f0);
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                  (unaff_x19 + 0x1a0,*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x18),
                   *(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x20),lVar33 + 0x2d,
                   *(undefined2 *)(lVar33 + 0x2a));
        *(undefined1 *)(unaff_x19 + 0x110) = 1;
        *(long *)(unaff_x19 + 0x1b8) = unaff_x19 + 0x1f0;
        *(undefined1 *)(unaff_x19 + 0x1d8) = 0;
        FUN_100fc2064(&stack0x00000088,unaff_x19 + 0x1b8,in_stack_00000080);
        unaff_x20 = _sStack0000000000000090;
        piVar36 = _sStack0000000000000088;
        if (sStack0000000000000088 == 2) {
          uVar22 = 5;
          goto LAB_1004f06d8;
        }
        sVar5 = sStack000000000000008a;
        if (*(char *)(unaff_x19 + 0x1d8) == '\x03') {
          if (*(char *)(unaff_x19 + 0x1d0) == '\x03') {
            plVar21 = *(long **)(unaff_x19 + 0x1c8);
            if (*plVar21 == 0xcc) {
              *plVar21 = 0x84;
            }
            else {
              (**(code **)(plVar21[2] + 0x20))();
            }
          }
          else if (*(char *)(unaff_x19 + 0x1d0) == '\0') {
            lVar33 = **(long **)(unaff_x19 + 0x1c0);
            **(long **)(unaff_x19 + 0x1c0) = lVar33 + -1;
            LORelease();
            if (lVar33 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbb218f3b3500298dE(unaff_x19 + 0x1c0);
            }
          }
        }
        if (((ulong)piVar36 & 1) != 0) break;
        bVar14 = false;
        _sStack0000000000000088 = *(int **)(unaff_x19 + 0x1a8);
        _sStack0000000000000090 = *(int **)(unaff_x19 + 0x1b0);
        if (_sStack0000000000000090 != (int *)0x0) {
          bVar14 = (char)*_sStack0000000000000088 == '/';
        }
        in_stack_00000098 = (int *)CONCAT71(in_stack_00000098._1_7_,6);
        in_stack_000000c0 = (int *)CONCAT62(CONCAT51(in_stack_000000c0._3_5_,bVar14),0x201);
        __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                  (&stack0x000001a0,&stack0x00000088);
        if ((cStack00000000000001a0 == '\t') &&
           ((piStack00000000000001b0 != (int *)0x2 || ((short)*piStack00000000000001a8 != 0x2e2e))))
        {
          puVar20 = (undefined *)((long)piStack00000000000001b0 + (long)piStack00000000000001a8) + 1
          ;
          lVar33 = -(long)piStack00000000000001b0;
          do {
            lVar25 = lVar33;
            if (lVar25 == 0) goto LAB_1004f0088;
            pcVar1 = puVar20 + -2;
            puVar20 = puVar20 + -1;
            lVar33 = lVar25 + 1;
          } while (*pcVar1 != '.');
          if ((((lVar25 + 1 != 0) &&
               (func_0x0001055bf348(&stack0x00000088,puVar20,
                                    (undefined *)((long)piStack00000000000001b0 + lVar25)),
               ((ulong)_sStack0000000000000088 & 1) == 0)) && (in_stack_00000098 == (int *)0x5)) &&
             ((*_sStack0000000000000090 == 0x656c7572 && (char)_sStack0000000000000090[1] == 's' &&
              (sVar5 < -0x7000)))) {
            *(undefined1 *)(unaff_x19 + 0x110) = 0;
            uVar32 = *(undefined8 *)(unaff_x19 + 0x1a0);
            uVar35 = *(undefined8 *)(unaff_x19 + 0x1a8);
            uVar28 = *(undefined8 *)(unaff_x19 + 0x1b0);
            lVar33 = *(long *)(unaff_x19 + 0x100);
            if (lVar33 == *(long *)(unaff_x19 + 0xf0)) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17ha705f7b4376eaadfE();
            }
            puVar30 = (undefined8 *)(*(long *)(unaff_x19 + 0xf8) + lVar33 * 0x18);
            *puVar30 = uVar32;
            puVar30[1] = uVar35;
            puVar30[2] = uVar28;
            *(long *)(unaff_x19 + 0x100) = lVar33 + 1;
          }
        }
LAB_1004f0088:
        if (((*(byte *)(unaff_x19 + 0x110) & 1) != 0) && (*(long *)(unaff_x19 + 0x1a0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x1a8));
        }
        *(undefined1 *)(unaff_x19 + 0x110) = 0;
        lVar33 = **(long **)(unaff_x19 + 0x1f0);
        **(long **)(unaff_x19 + 0x1f0) = lVar33 + -1;
        LORelease();
        if (lVar33 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbb218f3b3500298dE(unaff_x19 + 0x1f0);
        }
      }
      uVar32 = *(undefined8 *)(unaff_x19 + 0xa0);
      piVar36 = *(int **)(unaff_x19 + 0xa8);
      piVar38 = (int *)0x1;
      _sStack0000000000000088 = unaff_x20;
      if ((piVar36 != (int *)0x0) && (piVar38 = (int *)_malloc(piVar36), piVar38 == (int *)0x0)) {
        FUN_107c03c64(1,piVar36);
        goto LAB_1004efe68;
      }
      _memcpy(piVar38,uVar32,piVar36);
      if (*(long *)(unaff_x19 + 0x1a0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x1a8));
      }
      *(undefined1 *)(unaff_x19 + 0x110) = 0;
      lVar33 = **(long **)(unaff_x19 + 0x1f0);
      **(long **)(unaff_x19 + 0x1f0) = lVar33 + -1;
      LORelease();
      if (lVar33 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbb218f3b3500298dE(unaff_x19 + 0x1f0);
      }
LAB_1004f0184:
      lVar33 = *(long *)(unaff_x19 + 0xf8);
      lVar25 = *(long *)(unaff_x19 + 0x100);
      if (lVar25 != 0) {
        puVar30 = (undefined8 *)(lVar33 + 8);
        do {
          if (puVar30[-1] != 0) {
            _free(*puVar30);
          }
          puVar30 = puVar30 + 3;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      if (*(long *)(unaff_x19 + 0xf0) != 0) {
        _free(lVar33);
      }
      if (*(long *)(unaff_x19 + 0xb8) == -0x7fffffffffffffff) {
        plVar21 = *(long **)(unaff_x19 + 0xc0);
        if (*plVar21 == 0xcc) {
          *plVar21 = 0x84;
        }
        else {
          (**(code **)(plVar21[2] + 0x20))();
        }
      }
      else if (*(long *)(unaff_x19 + 0xb8) != -0x8000000000000000) {
        FUN_100d43d78();
        lVar33 = **(long **)(unaff_x19 + 0xd8);
        **(long **)(unaff_x19 + 0xd8) = lVar33 + -1;
        LORelease();
        if (lVar33 == 1) {
          DataMemoryBarrier(2,1);
          func_0x00010604ce90();
        }
      }
LAB_1004f03c8:
      uVar31 = (ulong)piVar36 >> 0x10;
      piVar29 = (int *)0x0;
      piVar34 = (int *)0x7;
      piVar37 = piVar36;
    }
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x70));
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x80));
  }
  goto LAB_1004f08f0;
  while( true ) {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&stack0x00000088,uVar32,piVar37);
    unaff_x23 = in_stack_00000098;
    piVar37 = _sStack0000000000000090;
    unaff_x24 = (int *)0x1;
    if ((in_stack_00000098 != (int *)0x0) &&
       (unaff_x24 = (int *)_malloc(in_stack_00000098), unaff_x24 == (int *)0x0)) {
      FUN_107c03c64(1,unaff_x23);
      goto LAB_1004efe68;
    }
    _memcpy(unaff_x24,piVar37,unaff_x23);
    if (((ulong)_sStack0000000000000088 & 0x7fffffffffffffff) != 0) {
      _free(piVar37);
    }
    __ZN16codex_execpolicy6parser12PolicyParser5parse17h4518faf98453806eE
              (&stack0x00000088,unaff_x19 + 0x38,unaff_x24,unaff_x23,piVar26,piVar36);
    in_stack_00000068 = in_stack_000000f0;
    piVar12 = in_stack_000000e8;
    piVar11 = in_stack_000000e0;
    piVar10 = (int *)in_stack_000000d8;
    piVar9 = in_stack_000000d0;
    piVar8 = in_stack_000000c8;
    piVar7 = in_stack_000000c0;
    piVar6 = in_stack_000000b8;
    piVar27 = in_stack_000000b0;
    unaff_x20 = in_stack_000000a8;
    piVar36 = in_stack_000000a0;
    piVar38 = in_stack_00000098;
    piVar37 = _sStack0000000000000090;
    piVar34 = _sStack0000000000000088;
    if (_sStack0000000000000088 != (int *)0x7) {
      if (piVar23 != (int *)0x0) {
        _free(piVar26);
      }
      bVar3 = *(byte *)(unaff_x19 + 0x30);
      in_stack_00000000 = unaff_x23;
      in_stack_00000010 = piVar7;
      in_stack_00000018 = piVar8;
      in_stack_00000030 = piVar11;
      in_stack_00000038 = piVar12;
      in_stack_00000040 = piVar9;
      in_stack_00000048 = piVar10;
      in_stack_00000050 = piVar27;
      in_stack_00000058 = piVar6;
      goto joined_r0x0001004f0d84;
    }
    if (unaff_x23 != (int *)0x0) {
      _free(unaff_x24);
    }
    if (piVar23 != (int *)0x0) {
      _free(piVar26);
    }
    lVar33 = *(long *)(unaff_x19 + 0xd8);
    if (lVar33 == *(long *)(unaff_x19 + 0xe0)) break;
LAB_1004f0bb0:
    *(long *)(unaff_x19 + 0xd0) = lVar33;
    *(long *)(unaff_x19 + 0xd8) = lVar33 + 0x18;
    *(long *)(unaff_x19 + 0xe8) = lVar33;
    *(undefined1 *)(unaff_x19 + 0x120) = 0;
    FUN_100fc00fc(&stack0x00000088,unaff_x19 + 0xe8,in_stack_00000080);
    piVar36 = in_stack_00000098;
    piVar26 = _sStack0000000000000090;
    piVar23 = _sStack0000000000000088;
    if (_sStack0000000000000088 == (int *)0x8000000000000001) {
      uVar22 = 4;
LAB_1004f0b48:
      *in_stack_00000020 = uVar22;
      *in_stack_00000028 = 2;
      uVar22 = 3;
      goto LAB_1004f0b5c;
    }
    if (*(char *)(unaff_x19 + 0x120) == '\x03') {
      if (*(char *)(unaff_x19 + 0x118) == '\x03') {
        plVar21 = *(long **)(unaff_x19 + 0x110);
        if (*plVar21 == 0xcc) {
          *plVar21 = 0x84;
        }
        else {
          (**(code **)(plVar21[2] + 0x20))();
        }
      }
      else if ((*(char *)(unaff_x19 + 0x118) == '\0') && (*(long *)(unaff_x19 + 0xf8) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x100));
      }
    }
    uVar32 = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 8);
    piVar37 = *(int **)(*(long *)(unaff_x19 + 0xd0) + 0x10);
    if (piVar23 == (int *)0x8000000000000000) {
      _sStack0000000000000088 = piVar26;
      if (piVar37 == (int *)0x0) {
        piVar38 = (int *)0x1;
      }
      else {
        piVar38 = (int *)_malloc(piVar37);
        if (piVar38 == (int *)0x0) {
          FUN_107c03c64(1,piVar37);
LAB_1004efe68:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1004efe6c);
          (*pcVar13)();
        }
      }
      _memcpy(piVar38,uVar32,piVar37);
      piVar34 = (int *)0x8;
      bVar3 = *(byte *)(unaff_x19 + 0x30);
      piVar36 = piVar37;
      in_stack_00000068 = piVar29;
      unaff_x20 = piVar26;
      goto joined_r0x0001004f0d84;
    }
  }
LAB_1004ef760:
  in_stack_000001c0 = *(int **)(unaff_x19 + 0x78);
  piStack00000000000001b8 = *(int **)(unaff_x19 + 0x70);
  in_stack_000001d0 = *(int **)(unaff_x19 + 0x88);
  in_stack_000001c8 = *(int **)(unaff_x19 + 0x80);
  in_stack_000001e0 = *(int **)(unaff_x19 + 0x98);
  in_stack_000001d8 = *(int **)(unaff_x19 + 0x90);
  in_stack_00000030 = *(int **)(unaff_x19 + 0xa8);
  in_stack_000001e8 = *(int **)(unaff_x19 + 0xa0);
  in_stack_00000068 = *(int **)(unaff_x19 + 0xb8);
  in_stack_00000038 = *(int **)(unaff_x19 + 0xb0);
  unaff_x24 = *(int **)(unaff_x19 + 200);
  unaff_x23 = *(int **)(unaff_x19 + 0xc0);
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  lVar25 = *(long *)(unaff_x19 + 0x60);
  piStack00000000000001a8 = *(int **)(unaff_x19 + 0x48);
  _cStack00000000000001a0 = *(int **)(unaff_x19 + 0x40);
  piStack00000000000001b0 = *(int **)(unaff_x19 + 0x50);
  lVar2 = *(long *)(unaff_x19 + 0x58);
  lVar33 = *(long *)(unaff_x19 + 0x68) + 1;
  lVar19 = lVar25;
  while (lVar33 = lVar33 + -1, lVar33 != 0) {
    FUN_103ba8c10(lVar19);
    lVar19 = lVar19 + 0x80;
  }
  if (lVar2 != 0) {
    _free(lVar25);
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
      ((bRam000000010b629960 - 1 < 2 ||
       ((bRam000000010b629960 != 0 &&
        (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                            ), cVar15 != '\0')))))) &&
     (uVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                         ),
     lVar33 = 
     ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
     , (uVar31 & 1) != 0)) {
    in_stack_000000a0 =
         (int *)(
                ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                + 0x30);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x19 + 0x20);
    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
    *(undefined **)(unaff_x29 + -0xd8) =
         &
         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    *(char **)(unaff_x29 + -0xf8) = s_loaded_rules_from_files_108abfbe9;
    *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xe0;
    *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xf8;
    *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
    _sStack0000000000000090 = (int *)(unaff_x29 + -0x70);
    _sStack0000000000000088 = (int *)0x1;
    in_stack_00000098 = (int *)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar33,&stack0x00000088);
    lVar33 = 
    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      piVar36 = piRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        piVar36 = (int *)&UNK_10b3c24c8;
      }
      piVar37 = piRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        piVar37 = (int *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(piVar36 + 6))(piVar37,&stack0x00000250);
      if (iVar16 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar33,piVar37,piVar36,&stack0x00000250,&stack0x00000088);
      }
    }
  }
  else {
    lVar33 = 
    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      piVar36 = piRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        piVar36 = (int *)&UNK_10b3c24c8;
      }
      piVar37 = piRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        piVar37 = (int *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(piVar36 + 6))(piVar37,&stack0x00000220);
      if (iVar16 != 0) {
        in_stack_000000a0 =
             (int *)(
                    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h624357929012def2E
                    + 0x30);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x19 + 0x20);
        *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -0xd8) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(char **)(unaff_x29 + -0xf8) = s_loaded_rules_from_files_108abfbe9;
        *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xe0;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xf8;
        *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
        _sStack0000000000000090 = (int *)(unaff_x29 + -0x70);
        _sStack0000000000000088 = (int *)0x1;
        in_stack_00000098 = (int *)0x1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar33,piVar37,piVar36,&stack0x00000250,&stack0x00000088);
      }
    }
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bRam000000010b629948 - 1 < 2 ||
       ((bRam000000010b629948 != 0 &&
        (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                            ), cVar15 != '\0')))))) &&
     (uVar31 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                         ),
     lVar33 = 
     ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
     , (uVar31 & 1) != 0)) {
    *(undefined **)(unaff_x29 + -0xf8) = &UNK_108ca2a88;
    *(undefined8 *)(unaff_x29 + -0xf0) = 0x31;
    *(char **)(unaff_x29 + -0x70) = &stack0x000001a0;
    _sStack0000000000000088 = (int *)(unaff_x29 + -0xf8);
    _sStack0000000000000090 = (int *)&UNK_10b208fd0;
    in_stack_00000098 = (int *)(unaff_x29 + -0x70);
    in_stack_000000a0 = (int *)&UNK_10b215530;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar33,&stack0x00000250);
    lVar33 = 
    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar32 = *(undefined8 *)
                (
                ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                + 0x20);
      uVar35 = *(undefined8 *)
                (
                ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                + 0x28);
      *(undefined8 *)(unaff_x29 + -0xe0) = 5;
      *(undefined8 *)(unaff_x29 + -0xd8) = uVar32;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar35;
      piVar36 = piRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        piVar36 = (int *)&UNK_10b3c24c8;
      }
      piVar37 = piRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        piVar37 = (int *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(piVar36 + 6))(piVar37,unaff_x29 + -0xe0);
      if (iVar16 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar33,piVar37,piVar36,unaff_x29 + -0xe0,&stack0x00000250);
      }
    }
  }
  else {
    lVar33 = 
    ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar32 = *(undefined8 *)
                (
                ___ZN10codex_core11exec_policy16load_exec_policy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e1df74f49943bc7E
                + 0x28);
      piVar36 = piRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        piVar36 = (int *)&UNK_10b3c24c8;
      }
      piVar37 = piRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        piVar37 = (int *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(piVar36 + 6))(piVar37,&stack0x00000238);
      if (iVar16 != 0) {
        *(undefined **)(unaff_x29 + -0xf8) = &UNK_108ca2a88;
        *(undefined8 *)(unaff_x29 + -0xf0) = 0x31;
        *(char **)(unaff_x29 + -0x70) = &stack0x000001a0;
        _sStack0000000000000088 = (int *)(unaff_x29 + -0xf8);
        _sStack0000000000000090 = (int *)&UNK_10b208fd0;
        in_stack_00000098 = (int *)(unaff_x29 + -0x70);
        in_stack_000000a0 = (int *)&UNK_10b215530;
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar32;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar33,piVar37,piVar36,unaff_x29 + -0xe0,&stack0x00000250);
      }
    }
  }
  if (*(long *)(*in_stack_00000008 + 0x4e8) != -0x8000000000000000) {
    __ZN16codex_execpolicy6policy6Policy13merge_overlay17hf62801808cd275daE
              (&stack0x00000088,&stack0x000001a0,*in_stack_00000008 + 0x4e8);
    unaff_x24 = in_stack_000000f8;
    unaff_x23 = in_stack_000000f0;
    in_stack_00000068 = in_stack_000000e8;
    in_stack_00000038 = in_stack_000000e0;
    in_stack_00000030 = (int *)in_stack_000000d8;
    in_stack_00000048 = in_stack_000000d0;
    in_stack_00000040 = in_stack_000000c8;
    in_stack_00000018 = in_stack_000000c0;
    in_stack_00000010 = in_stack_000000b8;
    in_stack_00000058 = in_stack_000000b0;
    in_stack_00000050 = in_stack_000000a8;
    unaff_x20 = in_stack_000000a0;
    piVar36 = in_stack_00000098;
    piVar38 = _sStack0000000000000090;
    piVar37 = _sStack0000000000000088;
    FUN_100df7a58(&stack0x000001a0);
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
    lVar33 = *(long *)(unaff_x19 + 0x18);
    lVar25 = *(long *)(unaff_x19 + 0x20);
    if (lVar25 != 0) {
      puVar30 = (undefined8 *)(lVar33 + 8);
      do {
        if (puVar30[-1] != 0) {
          _free(*puVar30);
        }
        puVar30 = puVar30 + 3;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    in_stack_00000000 = (int *)0x0;
    lVar25 = *(long *)(unaff_x19 + 0x10);
    piVar34 = (int *)0x9;
    goto joined_r0x0001004f0930;
  }
  piVar34 = (int *)0x9;
  bVar3 = *(byte *)(unaff_x19 + 0x30);
  piVar37 = _cStack00000000000001a0;
  piVar36 = piStack00000000000001b0;
  piVar38 = piStack00000000000001a8;
  in_stack_00000010 = in_stack_000001d0;
  in_stack_00000018 = in_stack_000001d8;
  in_stack_00000040 = in_stack_000001e0;
  in_stack_00000048 = in_stack_000001e8;
  in_stack_00000050 = in_stack_000001c0;
  in_stack_00000058 = in_stack_000001c8;
  unaff_x20 = piStack00000000000001b8;
joined_r0x0001004f0d84:
  if ((bVar3 & 1) != 0) {
    FUN_100e09138(unaff_x19 + 0x38);
  }
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
LAB_1004f08f0:
  lVar33 = *(long *)(unaff_x19 + 0x18);
  lVar25 = *(long *)(unaff_x19 + 0x20);
  if (lVar25 != 0) {
    puVar30 = (undefined8 *)(lVar33 + 8);
    do {
      if (puVar30[-1] != 0) {
        _free(*puVar30);
      }
      puVar30 = puVar30 + 3;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  lVar25 = *(long *)(unaff_x19 + 0x10);
joined_r0x0001004f0930:
  if (lVar25 != 0) {
    _free(lVar33);
  }
  auVar39._8_8_ = unaff_x23;
  auVar39._0_8_ = in_stack_00000010;
  auVar4._8_8_ = unaff_x24;
  auVar4._0_8_ = in_stack_00000018;
  *in_stack_00000020 = 1;
  FUN_100e6ae88(in_stack_00000008);
  if (piVar34 == (int *)0x9) {
    uVar32 = 0;
    unaff_x24 = (int *)0x9;
    piVar29 = in_stack_00000068;
    piVar23 = in_stack_00000030;
    in_stack_00000030 = in_stack_00000038;
    piVar26 = in_stack_00000058;
    in_stack_00000058 = in_stack_00000010;
    piVar27 = piVar36;
    in_stack_00000068 = unaff_x23;
    in_stack_00000018 = in_stack_00000040;
    piVar34 = piVar37;
    piVar36 = unaff_x20;
    in_stack_00000000 = piVar37;
    piVar37 = piVar38;
    auVar39 = auVar4;
  }
  else if (piVar34 < (int *)0x7) {
    _sStack0000000000000088 = piVar34;
    _sStack0000000000000090 = piVar37;
    in_stack_00000098 = piVar38;
    in_stack_000000a0 = piVar36;
    in_stack_000000a8 = unaff_x20;
    in_stack_000000b0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000c0 = in_stack_00000010;
    in_stack_000000c8 = in_stack_00000018;
    in_stack_000000d0 = in_stack_00000040;
    in_stack_000000d8 = (char *)in_stack_00000048;
    in_stack_000000e0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000038;
    in_stack_000000f0 = in_stack_00000068;
    in_stack_000000f8 = unaff_x23;
    in_stack_00000100 = unaff_x24;
    in_stack_00000108 = in_stack_00000000;
    pauVar18 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar18[1][0] == '\x01') {
      auVar39 = *pauVar18;
    }
    else {
      auVar39 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar18 + 8) = auVar39._8_8_;
      pauVar18[1][0] = 1;
    }
    in_stack_00000018 = auVar39._8_8_;
    in_stack_00000030 = (int *)0x0;
    uVar32 = 0;
    in_stack_00000058 = (int *)0x0;
    *(long *)*pauVar18 = auVar39._0_8_ + 2;
    in_stack_00000158 = in_stack_000000e0;
    in_stack_00000150 = (int *)in_stack_000000d8;
    in_stack_00000168 = in_stack_000000f0;
    in_stack_00000160 = in_stack_000000e8;
    in_stack_00000068 = (int *)(auVar39._0_8_ + 1);
    in_stack_00000178 = in_stack_00000100;
    in_stack_00000170 = in_stack_000000f8;
    in_stack_00000180 = in_stack_00000108;
    in_stack_00000118 = in_stack_000000a0;
    in_stack_00000110 = in_stack_00000098;
    in_stack_00000128 = in_stack_000000b0;
    in_stack_00000120 = in_stack_000000a8;
    piVar36 = (int *)&UNK_108da7b18;
    in_stack_00000138 = in_stack_000000c0;
    in_stack_00000130 = in_stack_000000b8;
    in_stack_00000148 = in_stack_000000d0;
    in_stack_00000140 = in_stack_000000c8;
    unaff_x24 = piVar34;
    piVar29 = (int *)0x0;
    piVar23 = (int *)0x0;
    piVar26 = (int *)0x0;
    in_stack_00000050 = (int *)0x0;
    in_stack_00000048 = piVar36;
    piVar27 = (int *)0x0;
    piVar34 = (int *)0x0;
    in_stack_00000000 = piVar37;
    piVar37 = (int *)0x8;
  }
  else {
    uVar32 = 1;
    piVar29 = in_stack_00000038;
    piVar23 = in_stack_00000048;
    piVar26 = in_stack_00000050;
    in_stack_00000050 = unaff_x20;
    in_stack_00000048 = in_stack_00000040;
    piVar27 = piVar38;
  }
  *in_stack_00000028 = uVar32;
  in_stack_00000028[1] = piVar34;
  in_stack_00000028[2] = piVar37;
  in_stack_00000028[3] = piVar27;
  in_stack_00000028[4] = piVar36;
  in_stack_00000028[5] = in_stack_00000050;
  in_stack_00000028[6] = piVar26;
  in_stack_00000028[7] = in_stack_00000058;
  in_stack_00000028[8] = auVar39._0_8_;
  in_stack_00000028[9] = in_stack_00000018;
  in_stack_00000028[10] = in_stack_00000048;
  in_stack_00000028[0xb] = piVar23;
  in_stack_00000028[0xc] = in_stack_00000030;
  in_stack_00000028[0xd] = piVar29;
  in_stack_00000028[0xe] = in_stack_00000068;
  in_stack_00000028[0xf] = auVar39._8_8_;
  in_stack_00000028[0x10] = unaff_x24;
  in_stack_00000028[0x11] = in_stack_00000000;
  in_stack_00000028[0x20] = in_stack_00000180;
  in_stack_00000028[0x1d] = in_stack_00000168;
  in_stack_00000028[0x1c] = in_stack_00000160;
  in_stack_00000028[0x1f] = in_stack_00000178;
  in_stack_00000028[0x1e] = in_stack_00000170;
  in_stack_00000028[0x19] = in_stack_00000148;
  in_stack_00000028[0x18] = in_stack_00000140;
  in_stack_00000028[0x1b] = in_stack_00000158;
  in_stack_00000028[0x1a] = in_stack_00000150;
  in_stack_00000028[0x15] = in_stack_00000128;
  in_stack_00000028[0x14] = in_stack_00000120;
  in_stack_00000028[0x17] = in_stack_00000138;
  in_stack_00000028[0x16] = in_stack_00000130;
  uVar22 = 1;
  in_stack_00000028[0x13] = in_stack_00000118;
  in_stack_00000028[0x12] = in_stack_00000110;
LAB_1004f0b5c:
  *(undefined1 *)(unaff_x19 + 0x200) = uVar22;
  return;
}

