
/* WARNING: Removing unreachable block (ram,0x000100a27e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_100a26150(void)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  ulong uVar21;
  long unaff_x19;
  undefined *puVar22;
  ulong uVar23;
  undefined8 *unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 in_stack_000000e8;
  undefined1 *in_stack_00000110;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000170;
  ulong in_stack_00000178;
  undefined8 in_stack_00000180;
  ulong in_stack_00000188;
  long *in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined8 in_stack_000001d0;
  ulong in_stack_000001d8;
  long *in_stack_000001e0;
  undefined4 in_stack_0000022c;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000898;
  undefined8 in_stack_00000ce8;
  ulong in_stack_00000da0;
  long *plVar47;
  undefined8 *puVar48;
  undefined8 in_stack_00001130;
  long *plVar49;
  long in_stack_00001138;
  long in_stack_00001140;
  undefined8 in_stack_00001148;
  long in_stack_00001150;
  long in_stack_00001158;
  undefined8 in_stack_00001160;
  long lVar50;
  long in_stack_00001168;
  long in_stack_00001170;
  undefined8 in_stack_00001178;
  long lVar51;
  long in_stack_00001180;
  long in_stack_00001188;
  undefined8 in_stack_00001190;
  long lVar52;
  long in_stack_00001198;
  long in_stack_000011a0;
  undefined8 in_stack_000011a8;
  long lVar53;
  long in_stack_00001650;
  long *in_stack_00001658;
  long in_stack_00001670;
  undefined8 in_stack_00001688;
  undefined8 in_stack_00001690;
  long *in_stack_00001698;
  long in_stack_000016b0;
  undefined8 in_stack_000016c8;
  undefined8 in_stack_000016d0;
  undefined1 in_stack_000016d8;
  undefined1 auVar7 [11];
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  func_0x00010602ab90(s_ws____108ace5de,&stack0x00001100);
  if (lRam000000010b63d138 != 0) {
    thunk_FUN_108a828bc();
  }
  lVar11 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                     (&stack0x00001100);
  if (lVar11 == 0) {
    pauVar13 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar13[1][0] == '\x01') {
      auVar44 = *pauVar13;
    }
    else {
      auVar44 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar13 + 8) = auVar44._8_8_;
      pauVar13[1][0] = 1;
      unaff_x27 = &stack0x00001100;
    }
    *(long *)*pauVar13 = auVar44._0_8_ + 1;
    uVar19 = FUN_1011768a4();
    if (pauVar13[1][0] == '\x01') {
      auVar45 = *pauVar13;
    }
    else {
      auVar45 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar13 + 8) = auVar45._8_8_;
      pauVar13[1][0] = 1;
      unaff_x27 = &stack0x00001100;
    }
    *(long *)*pauVar13 = auVar45._0_8_ + 1;
    uVar14 = FUN_1011768a4();
    FUN_100c895e8(&stack0x00000860,&UNK_108cb5505,1,&stack0x00001100);
    _memcpy(&stack0x00001100,&stack0x00000cb0,0x118);
    FUN_100c895e8(&stack0x00000860,&UNK_108cc3ec8,0x1c,&stack0x00001100);
    *(undefined8 *)(unaff_x27 + 0x70) = 0;
    *(undefined **)(unaff_x27 + 0x68) = &UNK_108c56c70;
    *(undefined8 *)(unaff_x27 + 0x80) = 0;
    *(undefined8 *)(unaff_x27 + 0x78) = 0;
    *(undefined1 (*) [16])(unaff_x27 + 0x88) = auVar45;
    *(ulong *)(unaff_x27 + 0xa0) = CONCAT35((int3)((ulong)in_stack_00000898 >> 0x28),0x100000000);
    *(undefined8 *)(unaff_x27 + 0x98) = uVar14;
    *(undefined8 *)(unaff_x27 + 0x30) = 0;
    *(undefined **)(unaff_x27 + 0x28) = &UNK_108c56c70;
    *(undefined8 *)(unaff_x27 + 0x40) = 0;
    *(undefined8 *)(unaff_x27 + 0x38) = 0;
    *(undefined1 (*) [16])(unaff_x27 + 0x48) = auVar44;
    *(ulong *)(unaff_x27 + 0x60) = CONCAT35((int3)((ulong)in_stack_00000448 >> 0x28),0x100000000);
    *(undefined8 *)(unaff_x27 + 0x58) = uVar19;
    unaff_x27[0xa8] = 1;
    puVar15 = (undefined8 *)_malloc(0xb0);
    if (puVar15 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xb0);
LAB_100a28694:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100a28698);
      (*pcVar9)();
    }
    puVar15[0x11] = in_stack_00001188;
    puVar15[0x10] = in_stack_00001180;
    puVar15[0x13] = in_stack_00001198;
    puVar15[0x12] = in_stack_00001190;
    puVar15[0x15] = in_stack_000011a8;
    puVar15[0x14] = in_stack_000011a0;
    puVar15[9] = in_stack_00001148;
    puVar15[8] = in_stack_00001140;
    puVar15[0xb] = in_stack_00001158;
    puVar15[10] = in_stack_00001150;
    puVar15[0xd] = in_stack_00001168;
    puVar15[0xc] = in_stack_00001160;
    puVar15[0xf] = in_stack_00001178;
    puVar15[0xe] = in_stack_00001170;
    puVar15[1] = 1;
    *puVar15 = 1;
    puVar15[3] = 1;
    puVar15[2] = 0;
    puVar15[5] = auVar45._8_8_;
    puVar15[4] = &UNK_10b234a00;
    puVar15[7] = in_stack_00001138;
    puVar15[6] = in_stack_00001130;
    plVar12 = (long *)0x0;
    lVar11 = 0;
    lVar50 = 0;
    lVar51 = 0;
    lVar52 = 0;
    lVar53 = 0;
    puVar16 = (undefined8 *)_malloc(8);
    if (puVar16 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100a28694;
    }
    *puVar16 = &DAT_100c95360;
    FUN_100cd1370(&stack0x000011d8);
    _memcpy(&stack0x00000cb0,&stack0x00001100,0x118);
    if (1 < in_stack_00000da0) {
      __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                (&stack0x00000da8);
    }
    _memcpy(&stack0x00000860,&stack0x00000cb0,0x118);
    uVar19 = FUN_100c8e928(puVar15,&UNK_108cb5505,1,&stack0x00000860,&UNK_10b22aa48);
    _memcpy(&stack0x00001100,&stack0x00000cb0,0x118);
    puVar16 = (undefined8 *)_malloc(8);
    if (puVar16 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100a28694;
    }
    *puVar16 = &DAT_100c95498;
    puVar16 = (undefined8 *)_malloc(8);
    if (puVar16 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100a28694;
    }
    *puVar16 = &DAT_100c95498;
    FUN_100cc36dc(&stack0x00000cb0);
    puVar48 = (undefined8 *)&UNK_10b21f6a8;
    __ZN4axum7routing14method_routing19append_allow_header17hafa81bb28c715c9bE
              (&stack0x000011f0,&UNK_108cad5c8,3);
    __ZN4axum7routing14method_routing19append_allow_header17hafa81bb28c715c9bE
              (&stack0x000011f0,&UNK_108c61000,4);
    _memcpy(&stack0x00000860,&stack0x00001100,0x118);
    FUN_100cc36dc(&stack0x00000410);
    uVar19 = FUN_100c8e928(uVar19,&UNK_108cb5506,7,&stack0x00000860,&UNK_10b22aa60);
    *(undefined1 *)(unaff_x19 + 0x101) = 0;
    in_stack_000001b8 = in_stack_00000168;
    in_stack_000001b0 = in_stack_00000160;
    in_stack_000001c8 = in_stack_00000178;
    in_stack_000001c0 = in_stack_00000170;
    in_stack_000001d8 = in_stack_00000188;
    in_stack_000001d0 = in_stack_00000180;
    in_stack_000001e0 = in_stack_00000190;
    FUN_100c8cbd8(&stack0x00001640,uVar19);
    plVar49 = in_stack_000001e0;
    lVar8 = in_stack_000001c0;
    uVar19 = in_stack_000001b8;
    lVar10 = *in_stack_000001e0;
    *in_stack_000001e0 = lVar10 + 1;
    if (lVar10 < 0) goto LAB_100a28694;
    if (in_stack_000001c0 == 0) {
      lVar10 = 1;
    }
    else {
      lVar10 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_000001c0,1);
      if (lVar10 == 0) {
        func_0x0001087c9084(1,lVar8);
        goto LAB_100a28694;
      }
    }
    _memcpy(lVar10,uVar19,lVar8);
    uVar21 = in_stack_000001d8;
    uVar19 = in_stack_000001d0;
    uVar23 = 0x8000000000000000;
    puVar17 = in_stack_00000110;
    if (in_stack_000001c8 != 0x8000000000000000) {
      if (in_stack_000001d8 == 0) {
        puVar17 = (undefined1 *)0x1;
      }
      else {
        puVar17 = (undefined1 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_000001d8,1);
        if (puVar17 == (undefined1 *)0x0) {
          func_0x0001087c9084(1,uVar21);
          goto LAB_100a28694;
        }
      }
      _memcpy(puVar17,uVar19,uVar21);
      uVar23 = uVar21;
    }
    lVar24 = *in_stack_00001658;
    uVar21 = CONCAT17(-(-1 < lVar24),
                      CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar24 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar24 >> 8)),-(-1 < (char)lVar24)))))))) &
             0x8080808080808080;
    plVar3 = in_stack_00001658 + 1;
    if (pauVar13[1][0] == '\x01') {
      auVar44 = *pauVar13;
    }
    else {
      auVar44 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar13 + 8) = auVar44._8_8_;
      pauVar13[1][0] = 1;
      unaff_x27 = &stack0x00001100;
    }
    *(long *)*pauVar13 = auVar44._0_8_ + 1;
    lVar24 = 0;
    if (in_stack_00001670 != 0) {
      func_0x0001087dc364(&stack0x00000300,in_stack_00001670,&stack0x00000320,1);
      plVar47 = plVar49;
      lVar24 = in_stack_00001670;
      do {
        while (uVar21 == 0) {
          lVar25 = *plVar3;
          in_stack_00001658 = in_stack_00001658 + -0x120;
          plVar3 = plVar3 + 1;
          uVar21 = CONCAT17(-(-1 < lVar25),
                            CONCAT16(-(-1 < (char)((ulong)lVar25 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar25 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar25 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar25 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar25 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar25 >> 8)),
                                                           -(-1 < (char)lVar25)))))))) &
                   0x8080808080808080;
        }
        uVar1 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        lVar24 = lVar24 + -1;
        plVar18 = (long *)in_stack_00001658[(long)-iVar2 * 0x24 + -0x23];
        if (plVar18 == (long *)0x4) break;
        puVar27 = (undefined8 *)in_stack_00001658[(long)-iVar2 * 0x24 + -0x21];
        puVar26 = (undefined8 *)in_stack_00001658[(long)-iVar2 * 0x24 + -0x22];
        lVar25 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x24];
        plVar28 = (long *)in_stack_00001658[(long)-iVar2 * 0x24 + -0x1d];
        auVar46._8_8_ = in_stack_00001658[(long)-iVar2 * 0x24 + -0x1e];
        auVar46._0_8_ = in_stack_00000ce8;
        lVar30 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x1b];
        lVar29 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x1c];
        lVar32 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x19];
        lVar31 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x1a];
        lVar34 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x17];
        lVar33 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x18];
        lVar36 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x15];
        lVar35 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x16];
        lVar38 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x13];
        lVar37 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x14];
        lVar40 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x11];
        lVar39 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x12];
        lVar42 = in_stack_00001658[(long)-iVar2 * 0x24 + -0xf];
        lVar41 = in_stack_00001658[(long)-iVar2 * 0x24 + -0x10];
        lVar43 = in_stack_00001658[(long)-iVar2 * 0x24 + -0xe];
        if (plVar18 != (long *)0x3) {
          lVar11 = *plVar49;
          *plVar49 = lVar11 + 1;
          if (lVar11 < 0) goto LAB_100a28694;
          if (lVar8 == 0) {
            lVar11 = 1;
          }
          else {
            lVar11 = _malloc(lVar8);
            if (lVar11 == 0) {
              func_0x0001087c9084(1,lVar8);
              goto LAB_100a28694;
            }
          }
          _memcpy(lVar11,lVar10,lVar8);
          if (uVar23 != 0x8000000000000000) {
            if (uVar23 == 0) {
              lVar11 = 1;
            }
            else {
              lVar11 = _malloc(uVar23,puVar17);
              if (lVar11 == 0) {
                func_0x0001087c9084(1,uVar23);
                goto LAB_100a28694;
              }
            }
            _memcpy(lVar11,puVar17,uVar23);
          }
          FUN_100c8b888(&stack0x00000cb0,&stack0x00001100,&stack0x00000860);
          plVar47 = plVar18;
          puVar16 = puVar26;
          puVar48 = puVar27;
          plVar12 = plVar28;
          in_stack_00001138 = lVar29;
          in_stack_00001140 = lVar30;
          lVar11 = lVar31;
          in_stack_00001150 = lVar32;
          in_stack_00001158 = lVar33;
          lVar50 = lVar34;
          in_stack_00001168 = lVar35;
          in_stack_00001170 = lVar36;
          lVar51 = lVar37;
          in_stack_00001180 = lVar38;
          in_stack_00001188 = lVar39;
          lVar52 = lVar40;
          in_stack_00001198 = lVar41;
          in_stack_000011a0 = lVar42;
          lVar53 = lVar43;
          auVar45 = auVar46;
        }
        in_stack_00000ce8 = auVar45._0_8_;
        FUN_1016e4fb4(&stack0x00001100,&stack0x00000300,(int)lVar25,&stack0x00000cb0);
        if (plVar47 != (long *)0x4) {
          if (plVar47 == (long *)0x3) {
            if ((code *)*puVar48 != (code *)0x0) {
              (*(code *)*puVar48)(puVar16);
            }
            if (puVar48[1] != 0) {
              _free(puVar16);
            }
          }
          else {
            FUN_100d108c0(&stack0x00001100);
          }
        }
      } while (lVar24 != 0);
      unaff_x27 = &stack0x00001100;
    }
    auVar6._8_8_ = auVar45._8_8_;
    auVar6._0_8_ = in_stack_00000ce8;
    auVar7 = auVar6._5_11_;
    FUN_100d02534(&stack0x00000380);
    lVar25 = *plVar49;
    *plVar49 = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(&stack0x000002a8);
    }
    if (lVar8 != 0) {
      _free(lVar10);
    }
    if ((uVar23 & 0x7fffffffffffffff) != 0) {
      _free(puVar17);
    }
    plVar49 = in_stack_000001e0;
    lVar8 = in_stack_000001c0;
    uVar19 = in_stack_000001b8;
    lVar10 = *in_stack_000001e0;
    *in_stack_000001e0 = lVar10 + 1;
    if (lVar10 < 0) goto LAB_100a28694;
    if (in_stack_000001c0 == 0) {
      lVar10 = 1;
    }
    else {
      lVar10 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_000001c0,1);
      if (lVar10 == 0) {
        func_0x0001087c9084(1,lVar8);
        goto LAB_100a28694;
      }
    }
    _memcpy(lVar10,uVar19,lVar8);
    uVar21 = in_stack_000001d8;
    uVar19 = in_stack_000001d0;
    uVar23 = 0x8000000000000000;
    if (in_stack_000001c8 != 0x8000000000000000) {
      if (in_stack_000001d8 == 0) {
        lVar24 = 1;
      }
      else {
        lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_000001d8,1);
        if (lVar24 == 0) {
          func_0x0001087c9084(1,uVar21);
          goto LAB_100a28694;
        }
      }
      _memcpy(lVar24,uVar19,uVar21);
      uVar23 = uVar21;
    }
    lVar25 = *in_stack_00001698;
    uVar21 = CONCAT17(-(-1 < lVar25),
                      CONCAT16(-(-1 < (char)((ulong)lVar25 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar25 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar25 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar25 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar25 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar25 >> 8)),-(-1 < (char)lVar25)))))))) &
             0x8080808080808080;
    plVar3 = in_stack_00001698 + 1;
    if (pauVar13[1][0] == '\x01') {
      auVar46 = *pauVar13;
    }
    else {
      auVar46 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar13 + 8) = auVar46._8_8_;
      pauVar13[1][0] = 1;
      unaff_x27 = &stack0x00001100;
    }
    *(long *)*pauVar13 = auVar46._0_8_ + 1;
    if (in_stack_000016b0 != 0) {
      func_0x0001087dc364(&stack0x00000300,in_stack_000016b0,&stack0x00000320,1);
      plVar47 = plVar49;
      do {
        while (auVar5._8_8_ = auVar45._8_8_, auVar5._0_8_ = in_stack_00000ce8,
              auVar7 = auVar5._5_11_, uVar21 == 0) {
          lVar25 = *plVar3;
          in_stack_00001698 = in_stack_00001698 + -0x120;
          plVar3 = plVar3 + 1;
          uVar21 = CONCAT17(-(-1 < lVar25),
                            CONCAT16(-(-1 < (char)((ulong)lVar25 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar25 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar25 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar25 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar25 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar25 >> 8)),
                                                           -(-1 < (char)lVar25)))))))) &
                   0x8080808080808080;
        }
        uVar1 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        in_stack_000016b0 = in_stack_000016b0 + -1;
        plVar18 = (long *)in_stack_00001698[(long)-iVar2 * 0x24 + -0x23];
        if (plVar18 == (long *)0x4) break;
        puVar27 = (undefined8 *)in_stack_00001698[(long)-iVar2 * 0x24 + -0x21];
        puVar26 = (undefined8 *)in_stack_00001698[(long)-iVar2 * 0x24 + -0x22];
        lVar25 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x24];
        plVar28 = (long *)in_stack_00001698[(long)-iVar2 * 0x24 + -0x1d];
        auVar4._8_8_ = in_stack_00001698[(long)-iVar2 * 0x24 + -0x1e];
        auVar4._0_8_ = in_stack_00000ce8;
        lVar30 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x1b];
        lVar29 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x1c];
        lVar32 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x19];
        lVar31 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x1a];
        lVar34 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x17];
        lVar33 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x18];
        lVar36 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x15];
        lVar35 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x16];
        lVar38 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x13];
        lVar37 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x14];
        lVar40 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x11];
        lVar39 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x12];
        lVar42 = in_stack_00001698[(long)-iVar2 * 0x24 + -0xf];
        lVar41 = in_stack_00001698[(long)-iVar2 * 0x24 + -0x10];
        lVar43 = in_stack_00001698[(long)-iVar2 * 0x24 + -0xe];
        if (plVar18 != (long *)0x3) {
          lVar11 = *plVar49;
          *plVar49 = lVar11 + 1;
          if (lVar11 < 0) goto LAB_100a28694;
          if (lVar8 == 0) {
            lVar11 = 1;
          }
          else {
            lVar11 = _malloc(lVar8);
            if (lVar11 == 0) {
              func_0x0001087c9084(1,lVar8);
              goto LAB_100a28694;
            }
          }
          _memcpy(lVar11,lVar10,lVar8);
          if (uVar23 != 0x8000000000000000) {
            if (uVar23 == 0) {
              lVar11 = 1;
            }
            else {
              lVar11 = _malloc(uVar23,lVar24);
              if (lVar11 == 0) {
                func_0x0001087c9084(1,uVar23);
                goto LAB_100a28694;
              }
            }
            _memcpy(lVar11,lVar24,uVar23);
          }
          FUN_100c8b888(&stack0x00000cb0,&stack0x00001100,&stack0x00000860);
          plVar47 = plVar18;
          puVar16 = puVar26;
          puVar48 = puVar27;
          plVar12 = plVar28;
          in_stack_00001138 = lVar29;
          in_stack_00001140 = lVar30;
          lVar11 = lVar31;
          in_stack_00001150 = lVar32;
          in_stack_00001158 = lVar33;
          lVar50 = lVar34;
          in_stack_00001168 = lVar35;
          in_stack_00001170 = lVar36;
          lVar51 = lVar37;
          in_stack_00001180 = lVar38;
          in_stack_00001188 = lVar39;
          lVar52 = lVar40;
          in_stack_00001198 = lVar41;
          in_stack_000011a0 = lVar42;
          lVar53 = lVar43;
          auVar45 = auVar4;
        }
        auVar7 = auVar45._5_11_;
        in_stack_00000ce8 = auVar45._0_8_;
        FUN_1016e4fb4(&stack0x00001100,&stack0x00000300,(int)lVar25,&stack0x00000cb0);
        if (plVar47 != (long *)0x4) {
          if (plVar47 == (long *)0x3) {
            if ((code *)*puVar48 != (code *)0x0) {
              (*(code *)*puVar48)(puVar16);
            }
            if (puVar48[1] != 0) {
              _free(puVar16);
            }
          }
          else {
            FUN_100d108c0(&stack0x00001100);
          }
        }
      } while (in_stack_000016b0 != 0);
      unaff_x27 = &stack0x00001100;
    }
    FUN_100d02534(&stack0x00000380);
    lVar25 = *plVar49;
    *plVar49 = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(&stack0x000002a8);
    }
    if (lVar8 != 0) {
      _free(lVar10);
    }
    if ((uVar23 & 0x7fffffffffffffff) != 0) {
      _free(lVar24);
    }
    plVar49 = in_stack_000001e0;
    uVar23 = in_stack_000001d8;
    uVar14 = in_stack_000001d0;
    uVar21 = in_stack_000001c8;
    uVar19 = in_stack_000001b8;
    lVar8 = in_stack_000001b0;
    if (puVar15 < (undefined8 *)0x2) {
      lVar10 = *in_stack_000001e0;
      *in_stack_000001e0 = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(&stack0x00000890);
      }
      if (lVar8 != 0) {
        _free(uVar19);
      }
      puVar22 = &UNK_10b208fd0;
      uVar23 = auVar7._3_8_;
      plVar49 = plVar12;
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        _free(uVar14);
        puVar22 = &UNK_10b208fd0;
      }
    }
    else {
      auVar45 = (**(code **)(in_stack_00001650 + 0x20))(&UNK_10b208fd0,&stack0x00001100);
      in_stack_00001650 = auVar45._8_8_;
      puVar22 = auVar45._0_8_;
      puVar15 = (undefined8 *)0x1;
    }
    *(undefined8 *)(unaff_x27 + 0x30) = 0;
    *(undefined **)(unaff_x27 + 0x28) = &UNK_108c56c70;
    *(undefined8 *)(unaff_x27 + 0x40) = 0;
    *(undefined8 *)(unaff_x27 + 0x38) = 0;
    *(undefined1 (*) [16])(unaff_x27 + 0x48) = auVar44;
    *(ulong *)(unaff_x27 + 0x60) =
         CONCAT44(CONCAT31((int3)((uint)in_stack_0000022c >> 8),
                           (char)((ulong)in_stack_00001690 >> 0x20)),(int)in_stack_00001690);
    *(undefined8 *)(unaff_x27 + 0x58) = in_stack_00001688;
    *(undefined8 *)(unaff_x27 + 0x70) = 0;
    *(undefined **)(unaff_x27 + 0x68) = &UNK_108c56c70;
    *(undefined8 *)(unaff_x27 + 0x80) = 0;
    *(undefined8 *)(unaff_x27 + 0x78) = 0;
    *(undefined1 (*) [16])(unaff_x27 + 0x88) = auVar46;
    *(ulong *)(unaff_x27 + 0xa0) = CONCAT35(auVar7._0_3_,(int5)in_stack_000016d0);
    *(undefined8 *)(unaff_x27 + 0x98) = in_stack_000016c8;
    unaff_x27[0xa8] = in_stack_000016d8;
    puVar16 = (undefined8 *)_malloc(0xb0);
    if (puVar16 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xb0);
      goto LAB_100a28694;
    }
    puVar16[0x11] = in_stack_00001188;
    puVar16[0x10] = in_stack_00001180;
    puVar16[0x13] = in_stack_00001198;
    puVar16[0x12] = lVar52;
    puVar16[0x15] = lVar53;
    puVar16[0x14] = in_stack_000011a0;
    puVar16[9] = lVar11;
    puVar16[8] = in_stack_00001140;
    puVar16[0xb] = in_stack_00001158;
    puVar16[10] = in_stack_00001150;
    puVar16[0xd] = in_stack_00001168;
    puVar16[0xc] = lVar50;
    puVar16[0xf] = lVar51;
    puVar16[0xe] = in_stack_00001170;
    puVar16[1] = 1;
    *puVar16 = 1;
    puVar16[3] = puVar22;
    puVar16[2] = puVar15;
    puVar16[5] = uVar23;
    puVar16[4] = in_stack_00001650;
    puVar16[7] = in_stack_00001138;
    puVar16[6] = plVar49;
    *(undefined1 *)(unaff_x19 + 0x102) = 0;
    FUN_100c90ea0();
    unaff_x27[0x1c0] = 0;
    lVar11 = _malloc(0x1c8);
    if (lVar11 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1c8);
      goto LAB_100a28694;
    }
    _memcpy(lVar11,&stack0x00001100,0x1c8);
    *(long *)(unaff_x19 + 0x108) = lVar11;
    *(undefined **)(unaff_x19 + 0x110) = &UNK_10b24e150;
    auVar44 = (*(code *)&DAT_101504998)(lVar11,in_stack_000000e8);
    lVar11 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) != 0) {
      *in_stack_00000110 = 4;
      uVar20 = 3;
      uVar19 = 1;
      goto LAB_100a27d84;
    }
    uVar19 = *(undefined8 *)(unaff_x19 + 0x108);
    puVar15 = *(undefined8 **)(unaff_x19 + 0x110);
    pcVar9 = (code *)*puVar15;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar19);
    }
    if (puVar15[1] != 0) {
      _free(uVar19);
    }
    if (lVar11 != 0) {
      plVar12 = (long *)_malloc(8);
      if (plVar12 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_100a28694;
      }
      goto LAB_100a2622c;
    }
    plVar12 = (long *)0x0;
    *(undefined1 *)(unaff_x19 + 0x101) = 0;
    *(undefined2 *)(unaff_x19 + 0x102) = 0;
  }
  else {
    plVar12 = (long *)_malloc(8);
    if (plVar12 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100a28694;
    }
LAB_100a2622c:
    *plVar12 = lVar11;
    if ((*(byte *)(unaff_x19 + 0x101) & 1) != 0) {
      lVar11 = *in_stack_00000190;
      *in_stack_00000190 = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(&stack0x00000190);
      }
      if (in_stack_00000160 != 0) {
        _free(in_stack_00000168);
      }
      if ((in_stack_00000178 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000180);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x101) = 0;
    if ((*(byte *)(unaff_x19 + 0x102) & 1) != 0) {
      FUN_100deb62c(unaff_x19 + 0xc0);
    }
    *(undefined1 *)(unaff_x19 + 0x102) = 0;
    if ((*(byte *)(unaff_x19 + 0x103) & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x150) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x158));
      }
      if ((*(ulong *)(unaff_x19 + 0x168) & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x170));
      }
    }
    *(undefined1 *)(unaff_x19 + 0x103) = 0;
  }
  *in_stack_00000110 = 1;
  FUN_100cc5944(unaff_x28);
  *(undefined1 *)(unaff_x19 + 0x69) = 0;
  uVar19 = 0;
  unaff_x26[1] = plVar12;
  unaff_x26[2] = &UNK_10b212e38;
  uVar20 = 1;
LAB_100a27d84:
  *unaff_x26 = uVar19;
  *(undefined1 *)(unaff_x19 + 0x68) = uVar20;
  return;
}

