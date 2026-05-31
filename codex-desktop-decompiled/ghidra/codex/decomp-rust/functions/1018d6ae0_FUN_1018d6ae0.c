
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d6ae0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  undefined1 (*pauVar13) [16];
  long extraout_x1;
  undefined1 uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar21;
  long *unaff_x21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  long unaff_x29;
  undefined8 uVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 *in_stack_00000018;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  char cStack0000000000000100;
  char cStack0000000000000101;
  long *plStack0000000000000108;
  long *plStack0000000000000110;
  long *plStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long *in_stack_00000130;
  long *plStack0000000000000140;
  long *plStack0000000000000148;
  long *plStack0000000000000150;
  long *plStack0000000000000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  long *in_stack_00000180;
  undefined *puStack0000000000000188;
  undefined8 in_stack_00000190;
  
code_r0x0001018d6ae0:
  *(char **)(unaff_x29 + -0xf0) = s__failed_to_parse_plugin_app_conf_108acf244;
  *(long *)(unaff_x29 + -0xe8) = unaff_x29 + -0xe0;
  uVar20 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x29 + -200) = uVar20;
  puStack0000000000000188 = (undefined *)(unaff_x29 + -0xd0);
  _cStack0000000000000100 = (long *)(unaff_x29 + -0xf0);
  plStack0000000000000108 = (long *)&UNK_10b25d1e8;
  plStack0000000000000110 = (long *)&stack0x00000188;
  plStack0000000000000118 = (long *)&UNK_10b25e3f8;
  plStack0000000000000148 = (long *)&stack0x00000100;
  plStack0000000000000140 = (long *)0x1;
  plStack0000000000000150 = (long *)0x2;
  plStack0000000000000158 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000140);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar23 = *unaff_x21;
    in_stack_000000b8 = *(long **)(lVar23 + 0x20);
    in_stack_000000c0 = *(long **)(lVar23 + 0x28);
    in_stack_000000b0 = (long *)0x2;
    puVar21 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar21 = &UNK_10b3c24c8;
    }
    puVar26 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar26 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar21 + 0x18))(puVar26,&stack0x000000b0);
    if (iVar11 != 0) {
      lVar17 = *(long *)(lVar23 + 0x60);
      uVar31 = *(undefined8 *)(lVar23 + 0x68);
      lVar19 = *(long *)(lVar23 + 0x50);
      uVar6 = *(undefined8 *)(lVar23 + 0x58);
      uVar20 = 1;
      if (lVar19 == 0) {
        uVar20 = 2;
      }
      uVar3 = *(undefined4 *)(lVar23 + 8);
      uVar4 = *(undefined4 *)(lVar23 + 0xc);
      in_stack_00000170 = (long *)&stack0x00000140;
      in_stack_00000178 = (long *)CONCAT71(in_stack_00000178._1_7_,1);
      in_stack_000000e0 = (long *)&stack0x00000170;
      in_stack_000000e8 = (long *)&DAT_1061c2098;
      uVar2 = 1;
      if (lVar17 == 0) {
        uVar2 = 2;
      }
      *(long **)(unaff_x29 + -0x80) = in_stack_000000b8;
      *(long **)(unaff_x29 + -0x88) = in_stack_000000b0;
      *(long **)(unaff_x29 + -0x78) = in_stack_000000c0;
      *(char **)(unaff_x29 + -0x68) = s__108b39f4f;
      *(long ***)(unaff_x29 + -0x60) = &stack0x000000e0;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar20;
      *(long *)(unaff_x29 + -0xb0) = lVar19;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar2;
      *(long *)(unaff_x29 + -0x98) = lVar17;
      *(undefined8 *)(unaff_x29 + -0x90) = uVar31;
      *(undefined4 *)(unaff_x29 + -0x70) = uVar3;
      *(undefined4 *)(unaff_x29 + -0x6c) = uVar4;
      (**(code **)(puVar21 + 0x20))(puVar26,unaff_x29 + -0xb8);
    }
  }
LAB_1018d6db4:
  plVar25 = *(long **)(unaff_x29 + -0xf8);
  if (*plVar25 == 1) {
    uVar30 = plVar25[1];
    if ((uVar30 & 3) != 1) goto LAB_1018d6e24;
    puVar28 = (undefined8 *)(uVar30 - 1);
    uVar20 = *puVar28;
    puVar15 = *(undefined8 **)(uVar30 + 7);
    pcVar16 = (code *)*puVar15;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar20);
    }
    if (puVar15[1] != 0) {
      _free(uVar20);
    }
  }
  else {
    if ((*plVar25 != 0) || (plVar25[2] == 0)) goto LAB_1018d6e24;
    puVar28 = (undefined8 *)plVar25[1];
  }
  _free(puVar28);
LAB_1018d6e24:
  _free(plVar25);
  if (in_stack_00000040 == 0) goto LAB_1018d6e38;
LAB_1018d6e30:
  _free(unaff_x20);
LAB_1018d6e38:
  do {
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x90));
    }
    puVar15 = *(undefined8 **)(unaff_x19 + 0x58);
    if (puVar15 == *(undefined8 **)(unaff_x19 + 0x68)) {
      *(undefined8 *)(unaff_x19 + 0x70) = 0x8000000000000000;
      puVar28 = puVar15;
joined_r0x0001018d6390:
      uVar30 = (long)*(undefined8 **)(unaff_x19 + 0x68) - (long)puVar28;
      if (uVar30 != 0) {
        uVar30 = uVar30 / 0x18;
        puVar28 = puVar28 + 1;
        do {
          if (puVar28[-1] != 0) {
            _free(*puVar28);
          }
          puVar28 = puVar28 + 3;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      if (*(long *)(unaff_x19 + 0x60) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x50));
      }
      uVar30 = *(ulong *)(unaff_x19 + 0x48);
      lVar23 = uVar30 - 2;
      if (1 < uVar30) {
        lVar19 = *(long *)(unaff_x19 + 0x40);
        plVar25 = (long *)(lVar19 + 0x30);
        lVar17 = 1;
        do {
          if (plVar25[-1] == plVar25[-4]) {
            lVar29 = plVar25[-2];
            iVar11 = _memcmp(lVar29,plVar25[-5]);
            if (iVar11 == 0) {
              if (plVar25[-3] != 0) {
                _free(lVar29);
              }
              if (lVar17 + 1U < uVar30) {
                do {
                  plVar24 = (long *)(lVar19 + lVar17 * 0x18);
                  if (plVar25[2] == plVar24[-1]) {
                    lVar29 = plVar25[1];
                    iVar11 = _memcmp(lVar29,plVar24[-2]);
                    if (iVar11 != 0) goto LAB_1018d64bc;
                    if (*plVar25 != 0) {
                      _free(lVar29);
                    }
                  }
                  else {
LAB_1018d64bc:
                    lVar32 = plVar25[1];
                    lVar29 = *plVar25;
                    plVar24[2] = plVar25[2];
                    plVar24[1] = lVar32;
                    *plVar24 = lVar29;
                    lVar17 = lVar17 + 1;
                  }
                  plVar25 = plVar25 + 3;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              *(long *)(unaff_x19 + 0x48) = lVar17;
              break;
            }
          }
          lVar17 = lVar17 + 1;
          lVar23 = lVar23 + -1;
          plVar25 = plVar25 + 3;
        } while (lVar23 != -1);
      }
      uVar20 = *(undefined8 *)(unaff_x19 + 0x38);
      in_stack_00000018[1] = *(undefined8 *)(unaff_x19 + 0x40);
      *in_stack_00000018 = uVar20;
      in_stack_00000018[2] = *(undefined8 *)(unaff_x19 + 0x48);
      *(undefined1 *)(unaff_x19 + 0xf1) = 0;
      uVar14 = 1;
LAB_1018d66ac:
      *(undefined1 *)(unaff_x19 + 0xf0) = uVar14;
      return;
    }
    puVar28 = puVar15 + 3;
    *(undefined8 **)(unaff_x19 + 0x58) = puVar28;
    uVar20 = puVar15[2];
    uVar31 = *puVar15;
    *(undefined8 *)(unaff_x19 + 0x78) = puVar15[1];
    *(undefined8 *)(unaff_x19 + 0x70) = uVar31;
    *(undefined8 *)(unaff_x19 + 0x80) = uVar20;
    if (*(long *)(unaff_x19 + 0x70) == -0x8000000000000000) goto joined_r0x0001018d6390;
    uVar20 = puVar15[2];
    uVar31 = *puVar15;
    *(undefined8 *)(unaff_x19 + 0x90) = puVar15[1];
    *(undefined8 *)(unaff_x19 + 0x88) = uVar31;
    *(undefined8 *)(unaff_x19 + 0x98) = uVar20;
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar20;
    *(undefined1 *)(unaff_x19 + 0xe8) = 0;
    FUN_101995bbc(unaff_x29 + -0xb8,unaff_x19 + 0xa0,in_stack_00000048);
    in_stack_00000040 = *(long *)(unaff_x29 + -0xb8);
    if (in_stack_00000040 == -0x7fffffffffffffff) {
      *in_stack_00000018 = 0x8000000000000000;
      uVar14 = 3;
      goto LAB_1018d66ac;
    }
    unaff_x20 = *(undefined8 **)(unaff_x29 + -0xb0);
    lVar23 = *(long *)(unaff_x29 + -0xa8);
    if (*(char *)(unaff_x19 + 0xe8) == '\x03') {
      if (*(char *)(unaff_x19 + 0xe0) == '\x03') {
        plVar24 = *(long **)(unaff_x19 + 0xd8);
        if (*plVar24 == 0xcc) {
          *plVar24 = 0x84;
        }
        else {
          (**(code **)(plVar24[2] + 0x20))();
        }
      }
      else if ((*(char *)(unaff_x19 + 0xe0) == '\0') && (*(long *)(unaff_x19 + 0xc0) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 200));
      }
    }
    if (in_stack_00000040 != -0x8000000000000000) {
      *(long *)(unaff_x29 + -0x98) = lVar23;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(undefined8 *)(unaff_x29 + -0x88) = 0;
      *(undefined8 **)(unaff_x29 + -0x80) = unaff_x20;
      *(long *)(unaff_x29 + -0x78) = lVar23;
      *(undefined8 *)(unaff_x29 + -0xb8) = 0;
      *(undefined8 *)(unaff_x29 + -0xb0) = 1;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0;
      *(undefined8 **)(unaff_x29 + -0xa0) = unaff_x20;
      *(undefined1 *)(unaff_x29 + -0x70) = 0x80;
      if (lVar23 != 0) {
        lVar17 = 0;
        puVar15 = &stack0x00000148;
        do {
          bVar7 = *(byte *)((long)unaff_x20 + lVar17);
          if (0x20 < bVar7 || (1L << ((ulong)bVar7 & 0x3f) & 0x100002600U) == 0) {
            if (bVar7 != 0x5b) {
              if (bVar7 == 0x7b) {
                *(undefined1 *)(unaff_x29 + -0x70) = 0x7f;
                *(long *)(unaff_x29 + -0x90) = lVar17 + 1;
                *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xb8;
                *(undefined1 *)(unaff_x29 + -0xd8) = 1;
                plVar24 = (long *)0x0;
                goto LAB_1018d625c;
              }
              plVar25 = (long *)FUN_10889a27c(unaff_x29 + -0xb8,unaff_x29 + -0xf0,&UNK_10b26a450);
              plVar24 = in_stack_00000078;
              plVar27 = in_stack_00000080;
              goto LAB_1018d6eac;
            }
            *(undefined1 *)(unaff_x29 + -0x70) = 0x7f;
            *(long *)(unaff_x29 + -0x90) = lVar17 + 1;
            in_stack_00000170 = (long *)(unaff_x29 + -0xb8);
            in_stack_00000178 = (long *)CONCAT71(in_stack_00000178._1_7_,1);
            auVar34 = FUN_1019e3854(&stack0x00000100,&stack0x00000170);
            if (cStack0000000000000100 == '\x01') {
              plStack0000000000000140 = (long *)0x0;
              plStack0000000000000148 = plStack0000000000000108;
            }
            else {
              if (cStack0000000000000101 == '\x01') {
                auVar34 = FUN_101a1e53c(&stack0x00000100,in_stack_00000170);
                plStack0000000000000140 = _cStack0000000000000100;
                plStack0000000000000148 = plStack0000000000000108;
                if (_cStack0000000000000100 == (long *)0x0) goto LAB_1018d6734;
                plStack0000000000000148 = plStack0000000000000110;
                plStack0000000000000140 = plStack0000000000000108;
                plStack0000000000000150 = plStack0000000000000118;
                puVar28 = &stack0x00000140;
                plStack0000000000000140 = _cStack0000000000000100;
                auVar34 = _in_stack_00000120;
              }
              else {
                pauVar13 = (undefined1 (*) [16])
                           (*
                           ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                           )();
                if (pauVar13[1][0] == '\x01') {
                  auVar34 = *pauVar13;
                }
                else {
                  auVar34 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar13 + 8) = auVar34._8_8_;
                  pauVar13[1][0] = 1;
                }
                *(long *)*pauVar13 = auVar34._0_8_ + 1;
                puVar28 = (undefined8 *)&UNK_10b25e340;
                puVar15 = (undefined8 *)&UNK_10b25e348;
                plStack0000000000000140 = (long *)&UNK_108cea360;
              }
              plStack0000000000000148 = (long *)*puVar28;
              uVar20 = *puVar15;
              *(undefined8 *)(unaff_x29 + -0xd8) = puVar15[1];
              *(undefined8 *)(unaff_x29 + -0xe0) = uVar20;
            }
LAB_1018d6734:
            *(char *)(unaff_x29 + -0x70) = *(char *)(unaff_x29 + -0x70) + '\x01';
            plStack0000000000000158 = *(long **)(unaff_x29 + -0xd8);
            plStack0000000000000150 = *(long **)(unaff_x29 + -0xe0);
            _in_stack_00000160 = auVar34;
            plVar12 = (long *)FUN_101839588(unaff_x29 + -0xb8);
            plVar25 = plStack0000000000000148;
            plStack0000000000000108 = plStack0000000000000148;
            _cStack0000000000000100 = plStack0000000000000140;
            plStack0000000000000118 = plStack0000000000000158;
            plStack0000000000000110 = plStack0000000000000150;
            if (plStack0000000000000140 != (long *)0x0) goto joined_r0x0001018d6858;
            in_stack_00000130 = plVar12;
            plVar9 = in_stack_000000e8;
            plVar18 = in_stack_000000e0;
            plVar24 = in_stack_00000078;
            plVar27 = in_stack_00000080;
            plVar22 = plStack0000000000000140;
            _in_stack_00000120 = _in_stack_00000160;
            auVar34 = _in_stack_000000f0;
            if (plVar12 == (long *)0x0) goto joined_r0x0001018d6788;
            if (*plVar12 == 1) {
              FUN_10194d0ac(plVar12 + 1);
            }
            else if ((*plVar12 == 0) && (plVar12[2] != 0)) {
              _free(plVar12[1]);
            }
            _free(plVar12);
            plVar24 = in_stack_00000078;
            plVar27 = in_stack_00000080;
            goto LAB_1018d6eac;
          }
          lVar17 = lVar17 + 1;
          *(long *)(unaff_x29 + -0x90) = lVar17;
        } while (lVar23 != lVar17);
      }
      _cStack0000000000000100 = (long *)0x5;
      plVar25 = (long *)FUN_10889a21c(unaff_x29 + -0xb8,&stack0x00000100);
      goto LAB_1018d5bf4;
    }
  } while (((ulong)unaff_x20 & 3) != 1);
  puVar15 = (undefined8 *)((long)unaff_x20 + -1);
  plVar25 = (long *)*puVar15;
  puVar28 = *(undefined8 **)((long)unaff_x20 + 7);
  pcVar16 = (code *)*puVar28;
  if (pcVar16 != (code *)0x0) {
    (*pcVar16)(plVar25);
  }
  unaff_x20 = puVar15;
  if (puVar28[1] != 0) {
    _free(plVar25);
  }
  goto LAB_1018d6e30;
  while( true ) {
    auVar33 = FUN_1018300f4(lVar23);
    plVar27 = auVar33._0_8_;
    auVar34 = _in_stack_00000160;
    if (plVar27 != (long *)0x0) break;
LAB_1018d625c:
    auVar33 = FUN_1019e3464(&stack0x00000100,unaff_x29 + -0xe0);
    plVar27 = plStack0000000000000108;
    auVar34 = _in_stack_00000160;
    if (cStack0000000000000100 == '\x01') break;
    if (cStack0000000000000101 != '\x01') {
      if (plVar24 == (long *)0x0) {
        plStack0000000000000140 = plVar24;
        plStack0000000000000148 = plVar25;
        pauVar13 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar13[1][0] == '\x01') {
          _in_stack_00000160 = *pauVar13;
        }
        else {
          auVar34 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar13 + 8) = auVar34._8_8_;
          pauVar13[1][0] = 1;
          _in_stack_00000160 = auVar34;
        }
        plStack0000000000000148 = (long *)0x0;
        *(long *)*pauVar13 = in_stack_00000160 + 1;
        *(undefined8 *)(unaff_x29 + -0xd0) = 0;
        *(undefined8 *)(unaff_x29 + -200) = 0;
        plStack0000000000000140 = (long *)&UNK_108cea360;
      }
      else {
        *(long **)(unaff_x29 + -200) = plStack0000000000000158;
        *(long **)(unaff_x29 + -0xd0) = plStack0000000000000150;
        plStack0000000000000140 = plVar24;
        plStack0000000000000148 = plVar25;
      }
      goto LAB_1018d6814;
    }
    lVar23 = *(long *)(unaff_x29 + -0xe0);
    *(long *)(lVar23 + 0x28) = *(long *)(lVar23 + 0x28) + 1;
    *(undefined8 *)(lVar23 + 0x10) = 0;
    auVar33 = __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                        (&stack0x00000100,lVar23 + 0x18,lVar23);
    plVar27 = plStack0000000000000108;
    auVar34 = _in_stack_00000160;
    if (_cStack0000000000000100 == (long *)0x2) break;
    if ((plStack0000000000000110 == (long *)0x4) && ((int)*plStack0000000000000108 == 0x73707061)) {
      if (plVar24 != (long *)0x0) {
        in_stack_00000170 = (long *)&UNK_108cde3ac;
        in_stack_00000178 = (long *)0x4;
        _cStack0000000000000100 = (long *)&stack0x00000170;
        plStack0000000000000108 = (long *)&DAT_10192d9a4;
        plStack0000000000000140 = plVar24;
        plStack0000000000000148 = plVar25;
        plVar27 = (long *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x00000100);
        plVar24 = plStack0000000000000140;
        plVar25 = plStack0000000000000148;
        auVar34 = _in_stack_00000160;
        goto LAB_1018d6804;
      }
      uVar30 = *(ulong *)(lVar23 + 0x28);
      if (uVar30 < *(ulong *)(lVar23 + 0x20)) {
        while( true ) {
          bVar7 = *(byte *)(*(long *)(lVar23 + 0x18) + uVar30);
          if (0x3a < bVar7) goto LAB_1018d6f0c;
          if ((1L << ((ulong)bVar7 & 0x3f) & 0x100002600U) == 0) break;
          uVar30 = uVar30 + 1;
          *(ulong *)(lVar23 + 0x28) = uVar30;
          if (*(ulong *)(lVar23 + 0x20) == uVar30) goto LAB_1018d6e4c;
        }
        if ((ulong)bVar7 == 0x3a) {
          *(ulong *)(lVar23 + 0x28) = uVar30 + 1;
          auVar34 = FUN_101a1e53c(&stack0x00000100,lVar23);
          if (_cStack0000000000000100 == (long *)0x0) {
            plStack0000000000000140 = (long *)0x0;
            plStack0000000000000148 = plStack0000000000000108;
            _in_stack_00000160 = auVar34;
            goto LAB_1018d6814;
          }
          plStack0000000000000158 = plStack0000000000000118;
          plStack0000000000000150 = plStack0000000000000110;
          plVar24 = _cStack0000000000000100;
          plVar25 = plStack0000000000000108;
          _in_stack_00000160 = _in_stack_00000120;
          goto LAB_1018d625c;
        }
LAB_1018d6f0c:
        plStack0000000000000140 = (long *)0x0;
        in_stack_00000170 = (long *)0x6;
        plStack0000000000000148 = plVar25;
        auVar34 = FUN_10889a21c(lVar23,&stack0x00000170);
      }
      else {
LAB_1018d6e4c:
        plStack0000000000000140 = (long *)0x0;
        in_stack_00000170 = (long *)0x3;
        plStack0000000000000148 = plVar25;
        auVar34 = FUN_10889a21c(lVar23,&stack0x00000170);
      }
      plStack0000000000000140 = (long *)0x0;
      plStack0000000000000148 = auVar34._0_8_;
      _in_stack_00000160 = auVar34;
      goto LAB_1018d6814;
    }
  }
  plStack0000000000000140 = (long *)0x0;
  plStack0000000000000148 = plVar27;
  _in_stack_00000160 = auVar33;
  if (plVar24 != (long *)0x0) {
LAB_1018d6804:
    plStack0000000000000148 = plVar25;
    plStack0000000000000140 = plVar24;
    _in_stack_00000160 = auVar34;
    auVar34 = FUN_10193b78c(&stack0x00000140);
    plStack0000000000000140 = (long *)0x0;
    plStack0000000000000148 = plVar27;
    _in_stack_00000160 = auVar34;
  }
LAB_1018d6814:
  *(char *)(unaff_x29 + -0x70) = *(char *)(unaff_x29 + -0x70) + '\x01';
  plStack0000000000000158 = *(long **)(unaff_x29 + -200);
  plStack0000000000000150 = *(long **)(unaff_x29 + -0xd0);
  plVar12 = (long *)FUN_1018394e4(unaff_x29 + -0xb8);
  plVar25 = plStack0000000000000148;
  plStack0000000000000108 = plStack0000000000000148;
  _cStack0000000000000100 = plStack0000000000000140;
  plStack0000000000000118 = plStack0000000000000158;
  plStack0000000000000110 = plStack0000000000000150;
  if (plStack0000000000000140 == (long *)0x0) {
    in_stack_00000130 = plVar12;
    plVar9 = in_stack_000000e8;
    plVar18 = in_stack_000000e0;
    plVar24 = in_stack_00000078;
    plVar27 = in_stack_00000080;
    plVar22 = plStack0000000000000140;
    _in_stack_00000120 = _in_stack_00000160;
    auVar34 = _in_stack_000000f0;
    if (plVar12 != (long *)0x0) {
      if (*plVar12 == 1) {
        FUN_10194d0ac(plVar12 + 1);
      }
      else if ((*plVar12 == 0) && (plVar12[2] != 0)) {
        _free(plVar12[1]);
      }
      _free(plVar12);
      plVar22 = (long *)0x0;
      plVar9 = in_stack_000000e8;
      plVar18 = in_stack_000000e0;
      plVar24 = in_stack_00000078;
      plVar27 = in_stack_00000080;
      auVar34 = _in_stack_000000f0;
    }
  }
  else {
joined_r0x0001018d6858:
    in_stack_00000130 = plVar12;
    plVar9 = plStack0000000000000118;
    plVar18 = plStack0000000000000110;
    plVar24 = in_stack_00000078;
    plVar27 = in_stack_00000080;
    plVar22 = _cStack0000000000000100;
    plStack0000000000000140 = _cStack0000000000000100;
    plVar25 = plStack0000000000000108;
    plStack0000000000000148 = plStack0000000000000108;
    plStack0000000000000150 = plStack0000000000000110;
    plStack0000000000000158 = plStack0000000000000118;
    _in_stack_00000120 = _in_stack_00000160;
    auVar34 = _in_stack_00000160;
    if (plVar12 != (long *)0x0) {
      FUN_10193b78c(&stack0x00000100);
      plVar22 = (long *)0x0;
      plVar9 = in_stack_000000e8;
      plVar18 = in_stack_000000e0;
      plVar24 = in_stack_00000078;
      plVar27 = in_stack_00000080;
      plVar25 = plVar12;
      auVar34 = _in_stack_000000f0;
    }
  }
joined_r0x0001018d6788:
  _in_stack_000000f0 = auVar34;
  in_stack_00000078 = plVar18;
  in_stack_00000080 = plVar9;
  in_stack_000000e0 = in_stack_00000078;
  in_stack_000000e8 = in_stack_00000080;
  if (plVar22 == (long *)0x0) {
LAB_1018d6eac:
    in_stack_00000080 = plVar27;
    in_stack_00000078 = plVar24;
    plVar25 = (long *)FUN_10889a5f0(plVar25,unaff_x29 + -0xb8);
LAB_1018d5bf4:
    in_stack_00000068 = (long *)0x0;
    lVar23 = *(long *)(unaff_x29 + -0xb8);
    in_stack_00000070 = plVar25;
joined_r0x0001018d6a88:
    if (lVar23 == 0) goto LAB_1018d6a8c;
    plVar22 = (long *)0x0;
LAB_1018d5c08:
    _free(*(undefined8 *)(unaff_x29 + -0xb0));
  }
  else {
    uVar30 = *(ulong *)(unaff_x29 + -0x90);
    in_stack_00000068 = plVar22;
    in_stack_00000070 = plVar25;
    in_stack_000000b0 = plVar22;
    in_stack_000000b8 = plVar25;
    in_stack_000000c0 = in_stack_00000078;
    in_stack_000000c8 = in_stack_00000080;
    _in_stack_00000088 = _in_stack_000000f0;
    _in_stack_000000d0 = _in_stack_000000f0;
    if (uVar30 < *(ulong *)(unaff_x29 + -0x98)) {
      do {
        bVar7 = *(byte *)(*(long *)(unaff_x29 + -0xa0) + uVar30);
        if (0x20 < bVar7 || (1L << ((ulong)bVar7 & 0x3f) & 0x100002600U) == 0) {
          _cStack0000000000000100 = (long *)0x16;
          plVar25 = (long *)FUN_10889a21c(unaff_x29 + -0xb8,&stack0x00000100);
          in_stack_00000068 = (long *)0x0;
          in_stack_00000070 = plVar25;
          FUN_10193b78c(&stack0x000000b0);
          lVar23 = *(long *)(unaff_x29 + -0xb8);
          goto joined_r0x0001018d6a88;
        }
        uVar30 = uVar30 + 1;
        *(ulong *)(unaff_x29 + -0x90) = uVar30;
      } while (*(ulong *)(unaff_x29 + -0x98) != uVar30);
    }
    if (*(long *)(unaff_x29 + -0xb8) != 0) goto LAB_1018d5c08;
  }
  plVar24 = in_stack_00000080;
  if (plVar22 == (long *)0x0) goto LAB_1018d6a8c;
  plVar12 = plVar22 + (long)plVar25 * -6 + -6;
  plVar27 = plVar12;
  if (plVar25 != (long *)0x0) {
    plVar27 = (long *)((long)plVar25 * 0x31 + 0x39);
  }
  uVar20 = 0;
  if (plVar25 != (long *)0x0) {
    uVar20 = 8;
  }
  if (in_stack_00000080 == (long *)0x0) {
    in_stack_00000170 = (long *)0x0;
    in_stack_00000178 = (long *)0x8;
    in_stack_00000180 = (long *)0x0;
  }
  else {
    lVar23 = *plVar22;
    puVar21 = (undefined *)((long)plVar22 + (long)plVar25);
    uVar30 = CONCAT17(-(-1 < lVar23),
                      CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar23 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar23 >> 8)),-(-1 < (char)lVar23))))))));
    plVar9 = plVar22;
    while( true ) {
      uVar30 = uVar30 & 0x8080808080808080;
      plVar9 = plVar9 + 1;
      if (uVar30 != 0) break;
      lVar23 = *plVar9;
      uVar30 = CONCAT17(-(-1 < lVar23),
                        CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar23 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar23 >> 8)),-(-1 < (char)lVar23))))))));
      plVar22 = plVar22 + -0x30;
    }
    uVar8 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar30 = uVar30 - 1 & uVar30;
    iVar11 = (int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
    puVar26 = (undefined *)((long)in_stack_00000080 + -1);
    if (plVar22[(long)-iVar11 * 6 + -6] != -0x8000000000000000) {
      lVar23 = plVar22[(long)-iVar11 * 6 + -3];
      lVar17 = plVar22[(long)-iVar11 * 6 + -2];
      lVar19 = plVar22[(long)-iVar11 * 6 + -1];
      if (plVar22[(long)-iVar11 * 6 + -6] != 0) {
        _free(plVar22[(long)-iVar11 * 6 + -5]);
      }
      if (lVar23 != -0x8000000000000000) {
        plVar25 = plVar24;
        if (plVar24 < (long *)0x5) {
          plVar25 = (long *)0x4;
        }
        lVar29 = (long)plVar25 * 0x18;
        if ((long *)0x555555555555555 < plVar24) {
          uVar20 = 0;
LAB_1018d637c:
          func_0x0001087c9084(uVar20,lVar29);
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1018d6384);
          (*pcVar16)();
        }
        plVar24 = (long *)0x8;
        plVar18 = (long *)0x0;
        if (lVar29 != 0) {
          plVar24 = (long *)_malloc(lVar29);
          plVar18 = plVar25;
          if (plVar24 == (long *)0x0) {
            uVar20 = 8;
            goto LAB_1018d637c;
          }
        }
        *plVar24 = lVar23;
        plVar24[1] = lVar17;
        plVar24[2] = lVar19;
        plStack0000000000000110 = (long *)0x1;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar20;
        *(long **)(unaff_x29 + -0xb0) = plVar27;
        *(long **)(unaff_x29 + -0xa8) = plVar12;
        *(long **)(unaff_x29 + -0xa0) = plVar22;
        *(ulong *)(unaff_x29 + -0x98) = uVar30;
        *(long **)(unaff_x29 + -0x90) = plVar9;
        *(undefined **)(unaff_x29 + -0x88) = puVar21 + 1;
        *(undefined **)(unaff_x29 + -0x80) = puVar26;
        plStack0000000000000108 = plVar24;
        _cStack0000000000000100 = plVar18;
        plVar25 = plStack0000000000000110;
        while( true ) {
          plStack0000000000000110 = plVar25;
          if (puVar26 == (undefined *)0x0) goto LAB_1018d6924;
          while (uVar30 == 0) {
            lVar23 = *plVar9;
            plVar22 = plVar22 + -0x30;
            plVar9 = plVar9 + 1;
            uVar30 = CONCAT17(-(-1 < lVar23),
                              CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar23 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar23 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar23 >> 8)),
                                                           -(-1 < (char)lVar23)))))))) &
                     0x8080808080808080;
          }
          uVar8 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar30 = uVar30 - 1 & uVar30;
          iVar11 = (int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
          puVar21 = puVar26 + -1;
          if (plVar22[(long)-iVar11 * 6 + -6] == -0x8000000000000000) break;
          lVar23 = plVar22[(long)-iVar11 * 6 + -3];
          lVar17 = plVar22[(long)-iVar11 * 6 + -2];
          lVar19 = plVar22[(long)-iVar11 * 6 + -1];
          if (plVar22[(long)-iVar11 * 6 + -6] != 0) {
            _free(plVar22[(long)-iVar11 * 6 + -5]);
          }
          if (lVar23 == -0x8000000000000000) break;
          if (plVar25 == _cStack0000000000000100) {
            FUN_1088bb36c(&stack0x00000100,plVar25,puVar26,8,0x18);
            plVar24 = plStack0000000000000108;
          }
          plVar27 = plVar24 + (long)plVar25 * 3;
          *plVar27 = lVar23;
          plVar27[1] = lVar17;
          plVar27[2] = lVar19;
          plVar25 = (long *)((long)plVar25 + 1);
          puVar26 = puVar21;
        }
        *(long **)(unaff_x29 + -0xa0) = plVar22;
        *(ulong *)(unaff_x29 + -0x98) = uVar30;
        *(long **)(unaff_x29 + -0x90) = plVar9;
        *(undefined **)(unaff_x29 + -0x80) = puVar21;
        for (; puVar21 != (undefined *)0x0; puVar21 = puVar21 + -1) {
          while (uVar30 == 0) {
            lVar23 = *plVar9;
            plVar22 = plVar22 + -0x30;
            plVar9 = plVar9 + 1;
            uVar30 = CONCAT17(-(-1 < lVar23),
                              CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar23 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar23 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar23 >> 8)),
                                                           -(-1 < (char)lVar23)))))))) &
                     0x8080808080808080;
          }
          uVar8 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          iVar11 = (int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
          if (plVar22[(long)-iVar11 * 6 + -6] != 0) {
            _free(plVar22[(long)-iVar11 * 6 + -5]);
          }
          if (plVar22[(long)-iVar11 * 6 + -3] != 0) {
            _free(plVar22[(long)-iVar11 * 6 + -2]);
          }
          uVar30 = uVar30 - 1 & uVar30;
        }
LAB_1018d6924:
        if ((*(long *)(unaff_x29 + -0xb8) != 0) && (*(long *)(unaff_x29 + -0xb0) != 0)) {
          _free(*(undefined8 *)(unaff_x29 + -0xa8));
        }
        plVar27 = plStack0000000000000110;
        plVar24 = plStack0000000000000108;
        in_stack_00000178 = plStack0000000000000108;
        in_stack_00000170 = _cStack0000000000000100;
        in_stack_00000180 = plStack0000000000000110;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xf0;
        if ((long *)0x1 < plStack0000000000000110) {
          if (plStack0000000000000110 < (long *)0x15) {
            FUN_101973cf0(plStack0000000000000108,plStack0000000000000110);
          }
          else {
            __ZN4core5slice4sort8unstable7ipnsort17ha1a305eae3f2e01dE
                      (plStack0000000000000108,plStack0000000000000110,unaff_x29 + -0xb8);
          }
        }
        goto LAB_1018d5d8c;
      }
    }
    in_stack_00000170 = (long *)0x0;
    in_stack_00000178 = (long *)0x8;
    in_stack_00000180 = (long *)0x0;
    for (; puVar26 != (undefined *)0x0; puVar26 = puVar26 + -1) {
      while (uVar30 == 0) {
        lVar23 = *plVar9;
        plVar22 = plVar22 + -0x30;
        plVar9 = plVar9 + 1;
        uVar30 = CONCAT17(-(-1 < lVar23),
                          CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar23
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar23 >> 8)),-(-1 < (char)lVar23)))))))) &
                 0x8080808080808080;
      }
      uVar8 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      iVar11 = (int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
      if (plVar22[(long)-iVar11 * 6 + -6] != 0) {
        _free(plVar22[(long)-iVar11 * 6 + -5]);
      }
      if (plVar22[(long)-iVar11 * 6 + -3] != 0) {
        _free(plVar22[(long)-iVar11 * 6 + -2]);
      }
      uVar30 = uVar30 - 1 & uVar30;
    }
  }
  if ((plVar25 != (long *)0x0) && (plVar27 != (long *)0x0)) {
    _free(plVar12);
  }
  plVar27 = (long *)0x0;
  plVar24 = (long *)0x8;
LAB_1018d5d8c:
  plVar22 = in_stack_00000170;
  plVar18 = plVar24 + (long)plVar27 * 3;
  uVar20 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar31 = *(undefined8 *)(unaff_x19 + 0x30);
  plStack0000000000000110 = in_stack_00000170;
  plVar25 = plVar24;
  plVar12 = plVar24;
  _cStack0000000000000100 = plVar24;
  plVar9 = plVar24;
  plStack0000000000000108 = plVar24;
  plStack0000000000000118 = plVar18;
  in_stack_00000120 = uVar20;
  in_stack_00000128 = uVar31;
  if (plVar27 != (long *)0x0) {
    do {
      while( true ) {
        plVar25 = plVar12 + 3;
        lVar23 = *plVar12;
        lVar17 = plVar12[1];
        lVar19 = plVar12[2];
        FUN_10196f134(lVar17,lVar19);
        plVar12 = plVar25;
        if (extraout_x1 != 0) break;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          if (1 < bRam000000010b62b760 - 1) {
            if (bRam000000010b62b760 != 0) {
              cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                                 );
              if (cVar10 != '\0') goto LAB_1018d5e28;
            }
            goto LAB_1018d5fc8;
          }
LAB_1018d5e28:
          iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                             );
          lVar19 = 
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
          ;
          if (iVar11 == 0) goto LAB_1018d5fc8;
          in_stack_000000c8 =
               (long *)(
                       ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                       + 0x30);
          puStack0000000000000188 = &UNK_108cf0dd9;
          in_stack_00000190 = 0x4d;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar20;
          *(undefined8 *)(unaff_x29 + -0xe8) = uVar31;
          *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xf0;
          plStack0000000000000140 = (long *)&stack0x00000188;
          plStack0000000000000150 = (long *)(unaff_x29 + -0xf8);
          plStack0000000000000148 = (long *)&UNK_10b25d1e8;
          plStack0000000000000158 = (long *)&UNK_10b25e3f8;
          in_stack_000000b0 = (long *)0x1;
          in_stack_000000b8 = (long *)&stack0x00000140;
          in_stack_000000c0 = (long *)0x2;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar19,&stack0x000000b0);
          lVar19 = 
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_00000070 =
                 *(long **)(
                           ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                           + 0x20);
            in_stack_00000078 =
                 *(long **)(
                           ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                           + 0x28);
            in_stack_00000068 = (long *)0x2;
            puVar21 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar21 + 0x18))(puVar26,&stack0x00000068);
            if (iVar11 != 0) {
              lVar29 = *(long *)(lVar19 + 0x60);
              uVar2 = *(undefined8 *)(lVar19 + 0x68);
              lVar32 = *(long *)(lVar19 + 0x50);
              uVar5 = *(undefined8 *)(lVar19 + 0x58);
              uVar6 = 1;
              if (lVar32 == 0) {
                uVar6 = 2;
              }
              uVar3 = *(undefined4 *)(lVar19 + 8);
              uVar4 = *(undefined4 *)(lVar19 + 0xc);
              *(long ***)(unaff_x29 + -0xe0) = &stack0x000000b0;
              *(undefined1 *)(unaff_x29 + -0xd8) = 1;
              *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xe0;
              *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
              uVar1 = 1;
              if (lVar29 == 0) {
                uVar1 = 2;
              }
              *(long **)(unaff_x29 + -0x80) = in_stack_00000070;
              *(long **)(unaff_x29 + -0x88) = in_stack_00000068;
              *(long **)(unaff_x29 + -0x78) = in_stack_00000078;
              *(char **)(unaff_x29 + -0x68) = s__108b39f4f;
              *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xd0;
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
              *(long *)(unaff_x29 + -0xb0) = lVar32;
              *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
              *(undefined8 *)(unaff_x29 + -0xa0) = uVar1;
              *(long *)(unaff_x29 + -0x98) = lVar29;
              *(undefined8 *)(unaff_x29 + -0x90) = uVar2;
              *(undefined4 *)(unaff_x29 + -0x70) = uVar3;
              *(undefined4 *)(unaff_x29 + -0x6c) = uVar4;
              (**(code **)(puVar21 + 0x20))(puVar26,unaff_x29 + -0xb8);
            }
          }
        }
        else {
LAB_1018d5fc8:
          lVar19 = 
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_000000e8 =
                 *(long **)(
                           ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                           + 0x20);
            in_stack_000000f0 =
                 *(undefined8 *)
                  (
                  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                  + 0x28);
            in_stack_000000e0 = (long *)0x2;
            puVar21 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_10b3c24c8;
            }
            puVar26 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar26 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar21 + 0x18))(puVar26,&stack0x000000e0);
            if (iVar11 != 0) {
              in_stack_000000c8 =
                   (long *)(
                           ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                           + 0x30);
              *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cf0dd9;
              *(undefined8 *)(unaff_x29 + -0xe8) = 0x4d;
              *(undefined8 *)(unaff_x29 + -0xe0) = uVar20;
              *(undefined8 *)(unaff_x29 + -0xd8) = uVar31;
              puStack0000000000000188 = (undefined *)(unaff_x29 + -0xe0);
              plStack0000000000000140 = (long *)(unaff_x29 + -0xf0);
              plStack0000000000000150 = (long *)&stack0x00000188;
              plStack0000000000000148 = (long *)&UNK_10b25d1e8;
              plStack0000000000000158 = (long *)&UNK_10b25e3f8;
              in_stack_000000b8 = (long *)&stack0x00000140;
              in_stack_000000b0 = (long *)0x1;
              in_stack_000000c0 = (long *)0x2;
              lVar29 = *(long *)(lVar19 + 0x60);
              uVar2 = *(undefined8 *)(lVar19 + 0x68);
              lVar32 = *(long *)(lVar19 + 0x50);
              uVar5 = *(undefined8 *)(lVar19 + 0x58);
              uVar6 = 1;
              if (lVar32 == 0) {
                uVar6 = 2;
              }
              uVar3 = *(undefined4 *)(lVar19 + 8);
              uVar4 = *(undefined4 *)(lVar19 + 0xc);
              *(long ***)(unaff_x29 + -0xd0) = &stack0x000000b0;
              *(undefined1 *)(unaff_x29 + -200) = 1;
              in_stack_00000068 = (long *)(unaff_x29 + -0xd0);
              in_stack_00000070 = (long *)&DAT_1061c2098;
              uVar1 = 1;
              if (lVar29 == 0) {
                uVar1 = 2;
              }
              *(long **)(unaff_x29 + -0x80) = in_stack_000000e8;
              *(long **)(unaff_x29 + -0x88) = in_stack_000000e0;
              *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000f0;
              *(char **)(unaff_x29 + -0x68) = s__108b39f4f;
              *(long ***)(unaff_x29 + -0x60) = &stack0x00000068;
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
              *(long *)(unaff_x29 + -0xb0) = lVar32;
              *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
              *(undefined8 *)(unaff_x29 + -0xa0) = uVar1;
              *(long *)(unaff_x29 + -0x98) = lVar29;
              *(undefined8 *)(unaff_x29 + -0x90) = uVar2;
              *(undefined4 *)(unaff_x29 + -0x70) = uVar3;
              *(undefined4 *)(unaff_x29 + -0x6c) = uVar4;
              (**(code **)(puVar21 + 0x20))(puVar26,unaff_x29 + -0xb8);
            }
          }
        }
        if (lVar23 != 0) {
          _free(lVar17);
        }
LAB_1018d5dcc:
        plVar9 = plStack0000000000000108;
        if (plVar25 == plVar18) goto LAB_1018d61b4;
      }
      if (lVar23 == -0x8000000000000000) goto LAB_1018d5dcc;
      lVar29 = *(long *)(unaff_x19 + 0x48);
      if (lVar29 == *(long *)(unaff_x19 + 0x38)) {
        FUN_1088bb36c(unaff_x19 + 0x38,lVar29,1,8,0x18);
      }
      plVar27 = (long *)(*(long *)(unaff_x19 + 0x40) + lVar29 * 0x18);
      *plVar27 = lVar23;
      plVar27[1] = lVar17;
      plVar27[2] = lVar19;
      *(long *)(unaff_x19 + 0x48) = lVar29 + 1;
      plVar9 = plVar25;
    } while (plVar25 != plVar18);
  }
LAB_1018d61b4:
  plStack0000000000000108 = plVar9;
  if ((long)plVar18 - (long)plVar25 != 0) {
    uVar30 = (ulong)((long)plVar18 - (long)plVar25) / 0x18;
    plVar27 = plVar25 + 1;
    do {
      if (plVar27[-1] != 0) {
        _free(*plVar27);
      }
      plVar27 = plVar27 + 3;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  if (plVar22 != (long *)0x0) {
    _free(plVar24);
  }
  if (in_stack_00000040 != 0) goto LAB_1018d6e30;
  goto LAB_1018d6e38;
LAB_1018d6a8c:
  *(long **)(unaff_x29 + -0xf8) = plVar25;
  if (3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_1018d6c44;
  unaff_x21 = (long *)&
                      __ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
  ;
  if (1 < bRam000000010b62b748 - 1) {
    if (bRam000000010b62b748 == 0) goto LAB_1018d6c44;
    cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                       (&
                        __ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
                       );
    if (cVar10 == '\0') goto LAB_1018d6c44;
  }
  uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                     (
                     ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
                     );
  param_2 = 
  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
  ;
  if ((uVar30 & 1) != 0) {
    param_1 = (long *)(
                      ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
                      + 0x30);
    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xf8;
    *(code **)(unaff_x29 + -0xd8) =
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    goto code_r0x0001018d6ae0;
  }
LAB_1018d6c44:
  lVar23 = 
  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_000000a0 =
         *(undefined8 *)
          (
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
          + 0x20);
    in_stack_000000a8 =
         *(undefined8 *)
          (
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
          + 0x28);
    in_stack_00000098 = 2;
    puVar21 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar21 = &UNK_10b3c24c8;
    }
    puVar26 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar26 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar21 + 0x18))(puVar26,&stack0x00000098);
    if (iVar11 != 0) {
      plStack0000000000000158 =
           (long *)(
                   ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
                   + 0x30);
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xf8;
      *(code **)(unaff_x29 + -200) =
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      *(char **)(unaff_x29 + -0xe0) = s__failed_to_parse_plugin_app_conf_108acf244;
      *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xd0;
      in_stack_00000170 = *(long **)(unaff_x19 + 0x90);
      in_stack_00000178 = *(long **)(unaff_x19 + 0x98);
      *(long ***)(unaff_x29 + -0xf0) = &stack0x00000170;
      _cStack0000000000000100 = (long *)(unaff_x29 + -0xe0);
      plStack0000000000000108 = (long *)&UNK_10b25d1e8;
      plStack0000000000000110 = (long *)(unaff_x29 + -0xf0);
      plStack0000000000000118 = (long *)&UNK_10b25e3f8;
      plStack0000000000000148 = (long *)&stack0x00000100;
      plStack0000000000000140 = (long *)0x1;
      plStack0000000000000150 = (long *)0x2;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000a0;
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000098;
      *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000a8;
      lVar17 = *(long *)(lVar23 + 0x60);
      uVar31 = *(undefined8 *)(lVar23 + 0x68);
      lVar19 = *(long *)(lVar23 + 0x50);
      uVar6 = *(undefined8 *)(lVar23 + 0x58);
      uVar20 = 1;
      if (lVar19 == 0) {
        uVar20 = 2;
      }
      uVar3 = *(undefined4 *)(lVar23 + 8);
      uVar4 = *(undefined4 *)(lVar23 + 0xc);
      in_stack_000000e0 = (long *)&stack0x00000140;
      in_stack_000000e8 = (long *)CONCAT71(in_stack_000000e8._1_7_,1);
      in_stack_000000b0 = (long *)&stack0x000000e0;
      in_stack_000000b8 = (long *)&DAT_1061c2098;
      uVar2 = 1;
      if (lVar17 == 0) {
        uVar2 = 2;
      }
      *(char **)(unaff_x29 + -0x68) = s__108b39f4f;
      *(long ***)(unaff_x29 + -0x60) = &stack0x000000b0;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar20;
      *(long *)(unaff_x29 + -0xb0) = lVar19;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar2;
      *(long *)(unaff_x29 + -0x98) = lVar17;
      *(undefined8 *)(unaff_x29 + -0x90) = uVar31;
      *(undefined4 *)(unaff_x29 + -0x70) = uVar3;
      *(undefined4 *)(unaff_x29 + -0x6c) = uVar4;
      (**(code **)(puVar21 + 0x20))(puVar26,unaff_x29 + -0xb8);
    }
  }
  goto LAB_1018d6db4;
}

