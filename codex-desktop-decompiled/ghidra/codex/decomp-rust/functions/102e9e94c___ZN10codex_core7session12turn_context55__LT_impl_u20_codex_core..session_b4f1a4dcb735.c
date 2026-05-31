
void __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_42overlay_runtime_cwd_on_primary_environment17h61e60e82e98bc2a2E
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *extraout_x8;
  undefined8 *puVar13;
  ulong *puVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auVar30 [16];
  long *plStack_1768;
  long lStack_1758;
  long lStack_1720;
  long lStack_1718;
  long lStack_1710;
  long lStack_1700;
  long lStack_16f8;
  long lStack_16f0;
  long lStack_16e8;
  long lStack_16e0;
  long lStack_16d8;
  undefined8 uStack_1180;
  long lStack_da0;
  long lStack_d98;
  long lStack_d90;
  long lStack_d88;
  long *plStack_d80;
  long lStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  long lStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined1 uStack_d28;
  undefined1 uStack_d27;
  long lStack_d18;
  long *plStack_d10;
  long lStack_d08;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong *puStack_118;
  ulong **ppuStack_110;
  undefined *puStack_108;
  ulong **ppuStack_100;
  undefined *puStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  undefined2 uStack_88;
  undefined1 uStack_86;
  char *pcStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined2 uStack_48;
  undefined1 uStack_46;
  
  if (param_2 == 0) {
    return;
  }
  pcVar2 = *(char **)(param_1 + 0x20);
  lStack_b8 = *(long *)(param_1 + 0x28);
  pcVar22 = *(char **)(param_3 + 8);
  lVar11 = *(long *)(param_3 + 0x10);
  if (lStack_b8 == 0) {
    uStack_86 = false;
  }
  else {
    uStack_86 = *pcVar2 == '/';
  }
  uStack_b0 = 6;
  uStack_88 = 0x201;
  if (lVar11 == 0) {
    uStack_46 = false;
  }
  else {
    uStack_46 = *pcVar22 == '/';
  }
  uStack_70 = 6;
  uStack_48 = 0x201;
  pcStack_c0 = pcVar2;
  pcStack_80 = pcVar22;
  lStack_78 = lVar11;
  uVar6 = FUN_103593204(&pcStack_c0,&pcStack_80);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (lVar11 == 0) {
    lVar7 = 1;
    _memcpy(1,pcVar22,0);
    lVar12 = *(long *)(param_1 + 0x18);
joined_r0x000102e9ea48:
    if (lVar12 != 0) {
      _free(pcVar2);
    }
    *(long *)(param_1 + 0x18) = lVar11;
    *(long *)(param_1 + 0x20) = lVar7;
    *(long *)(param_1 + 0x28) = lVar11;
    return;
  }
  lVar7 = _malloc(lVar11);
  if (lVar7 != 0) {
    _memcpy(lVar7,pcVar22,lVar11);
    lVar12 = *(long *)(param_1 + 0x18);
    goto joined_r0x000102e9ea48;
  }
  puStack_118 = (ulong *)func_0x0001087c9084(1,lVar11);
  uStack_c8 = 0x102e9ea5c;
  uVar6 = *puStack_118 ^ 0x8000000000000000;
  if (-1 < (long)*puStack_118) {
    uVar6 = 1;
  }
  lStack_e0 = lVar11;
  lStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((long)uVar6 < 2) {
    if (uVar6 != 0) {
      puStack_f0 = puStack_118 + 3;
      ppuStack_110 = &puStack_118;
      ppuStack_100 = &puStack_f0;
      puStack_108 = &DAT_103296ba4;
      puStack_f8 = &DAT_103296ba4;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (extraout_x8,s_expected_active_turn_id_____but_f_108af5c51,&ppuStack_110);
      goto LAB_102e9eb74;
    }
    puVar8 = (undefined8 *)_malloc(0x17);
    if (puVar8 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_108d6fb9f;
      goto LAB_102e9eb58;
    }
  }
  else {
    if (uVar6 == 2) {
      cVar1 = (char)puStack_118[1];
      puStack_f0 = (ulong *)&UNK_108d6bd28;
      if (cVar1 == '\0') {
        puStack_f0 = (ulong *)&UNK_108d6bd22;
      }
      uStack_e8 = 6;
      if (cVar1 != '\0') {
        uStack_e8 = 7;
      }
      ppuStack_110 = &puStack_f0;
      puStack_108 = &DAT_103296230;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (extraout_x8,s_cannot_steer_a_turn_108af5c7e,&ppuStack_110);
      *(undefined1 *)(extraout_x8 + 3) = 0xc;
      *(char *)((long)extraout_x8 + 0x19) = cVar1;
      return;
    }
    puVar8 = (undefined8 *)_malloc(0x17);
    if (puVar8 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_108d6fbb6;
LAB_102e9eb58:
      uVar23 = *puVar13;
      puVar8[1] = puVar13[1];
      *puVar8 = uVar23;
      *(undefined8 *)((long)puVar8 + 0xf) = *(undefined8 *)((long)puVar13 + 0xf);
      *extraout_x8 = 0x17;
      extraout_x8[1] = puVar8;
      extraout_x8[2] = 0x17;
LAB_102e9eb74:
      *(undefined1 *)(extraout_x8 + 3) = 8;
      return;
    }
  }
  auVar30 = func_0x0001087c9084(1,0x17);
  lVar11 = auVar30._8_8_;
  puVar8 = auVar30._0_8_;
  uStack_1180 = 0;
  bVar3 = *(byte *)(lVar11 + 0x16ba);
  if (1 < bVar3) {
    if (bVar3 != 3) {
      func_0x000108a07b10(&UNK_10b2b0db8);
LAB_102e9ed14:
      __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E(lVar11);
      *(char **)(lVar11 + 0x9b8) = pcVar22;
      *(long *)(lVar11 + 0x9c0) = lVar11;
      *(undefined1 *)(lVar11 + 0x1698) = 0;
    }
    func_0x00010318108c(&lStack_1700,lVar11 + 0x9b8,param_3);
    lVar7 = lStack_16f0;
    lVar24 = lStack_16f8;
    lVar12 = lStack_1700;
    if (lStack_1700 != -0x8000000000000000) {
      if ((*(char *)(lVar11 + 0x1698) == '\x03') && (*(char *)(lVar11 + 0x1692) == '\x03')) {
        FUN_1032b7e38(lVar11 + 0x9e8);
        if (*(long *)(lVar11 + 0x9d0) != 0) {
          _free(*(undefined8 *)(lVar11 + 0x9d8));
        }
        *(undefined1 *)(lVar11 + 0x1691) = 0;
      }
      lVar27 = lVar24 + lVar7 * 0x140;
      lVar20 = lVar24;
joined_r0x000102e9ede0:
      while (lVar28 = lVar20, lVar28 != lVar27) {
        lVar20 = lVar28 + 0x140;
        if ((*(char *)(lVar28 + 0x138) == '\x01') &&
           (*(long *)(lVar28 + 0xc0) == -0x8000000000000000)) goto code_r0x000102e9ee10;
      }
      lStack_1720 = 0;
      lStack_1718 = 8;
      lStack_1710 = 0;
LAB_102e9ee2c:
      plStack_1768 = (long *)0x8;
      lVar20 = lVar24;
      do {
        do {
          do {
            lVar25 = lVar20;
            lVar28 = lVar24;
            if (lVar25 == lVar27) {
              lVar20 = 0;
              lVar25 = 0;
joined_r0x000102e9f3b4:
              for (; lVar7 != 0; lVar7 = lVar7 + -1) {
                FUN_1032bf498(lVar28);
                lVar28 = lVar28 + 0x140;
              }
              lVar7 = lStack_16e0;
              if (lVar12 != 0) {
                _free(lVar24);
              }
              for (; lStack_16d8 != 0; lStack_16d8 = lStack_16d8 + -1) {
                FUN_10339a784(lVar7);
                lVar7 = lVar7 + 0x80;
              }
              if (lStack_16e8 != 0) {
                _free(lStack_16e0);
              }
              FUN_103399b5c(lVar11);
              if (*(long *)(lVar11 + 0x960) != 0) {
                _free(*(undefined8 *)(lVar11 + 0x968));
              }
              goto LAB_102e9ef9c;
            }
            lVar20 = lVar25 + 0x140;
          } while ((*(char *)(lVar25 + 0x138) != '\x01') ||
                  (*(long *)(lVar25 + 0xc0) != -0x8000000000000000));
          lVar29 = *(long *)(lVar25 + 0x80);
          lStack_1758 = lVar29 + *(long *)(lVar25 + 0x88) * 0x18;
        } while ((lVar29 == 0) || (lVar29 == lStack_1758));
        lVar25 = *(long *)(lVar29 + 0x10);
        if (lVar25 == 0) {
          lVar10 = 1;
          goto LAB_102e9f1fc;
        }
        uVar23 = *(undefined8 *)(lVar29 + 8);
        lVar10 = _malloc(lVar25);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar25);
          goto LAB_102e9f53c;
        }
        _memcpy(lVar10,uVar23,lVar25);
        if (lVar25 != -0x8000000000000000) {
LAB_102e9f1fc:
          lVar29 = lVar29 + 0x18;
          uVar6 = ((ulong)(lStack_1758 - lVar29) >> 3) * -0x5555555555555555;
          if (uVar6 < 4) {
            uVar6 = 3;
          }
          lVar21 = uVar6 + 1;
          lVar26 = lVar21 * 0x18;
          if ((ulong)(lStack_1758 - lVar29) < 0x7fffffffffffffe1) {
            if (lVar26 == 0) {
              lVar21 = 0;
              plVar9 = (long *)0x8;
LAB_102e9f294:
              *plVar9 = lVar25;
              plVar9[1] = lVar10;
              plVar9[2] = lVar25;
              lVar25 = 1;
              lStack_d08 = 1;
              lStack_d18 = lVar21;
              plStack_d10 = plVar9;
              do {
                while ((lVar29 != lStack_1758 &&
                       (func_0x000100025ae8(&lStack_1700,lVar29), lVar26 = lStack_16f0,
                       lVar21 = lStack_16f8, lVar10 = lStack_1700,
                       lStack_1700 != -0x8000000000000000))) {
                  lVar29 = lVar29 + 0x18;
                  if (lVar25 == lStack_d18) {
                    FUN_10893e30c(&lStack_d18,lVar25,
                                  ((ulong)(lStack_1758 - lVar29) >> 3) * -0x5555555555555555 + 1,8,
                                  0x18);
                    plVar9 = plStack_d10;
                  }
                  plVar15 = plVar9 + lVar25 * 3;
                  *plVar15 = lVar10;
                  plVar15[1] = lVar21;
                  plVar15[2] = lVar26;
                  lVar25 = lVar25 + 1;
                  lStack_d08 = lVar25;
                }
                do {
                  lVar10 = lVar20;
                  plStack_1768 = plStack_d10;
                  lVar20 = lStack_d18;
                  if (lVar10 == lVar27) goto joined_r0x000102e9f3b4;
                  lVar20 = lVar10 + 0x140;
                } while ((*(char *)(lVar10 + 0x138) != '\x01') ||
                        (*(long *)(lVar10 + 0xc0) != -0x8000000000000000));
                lVar29 = *(long *)(lVar10 + 0x80);
                lStack_1758 = lVar29 + *(long *)(lVar10 + 0x88) * 0x18;
              } while( true );
            }
            uVar23 = 8;
            plVar9 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar26,8);
            if (plVar9 != (long *)0x0) goto LAB_102e9f294;
          }
          else {
            uVar23 = 0;
          }
          func_0x0001087c9084(uVar23,lVar26);
          goto LAB_102e9f53c;
        }
      } while( true );
    }
    *puVar8 = 0x8000000000000000;
    uVar19 = 3;
    goto LAB_102e9f148;
  }
  if (bVar3 == 0) {
    *(undefined2 *)(lVar11 + 0x16b8) = 0;
    *(undefined8 *)(lVar11 + 0x980) = *(undefined8 *)(lVar11 + 0x16a0);
    pcVar22 = *(char **)(lVar11 + 0x16a8);
    __ZN10codex_core5shell5Shell16derive_exec_args17h7e043e3afe4c621fE
              (lVar11 + 0x988,*(undefined8 *)(lVar11 + 0x16b0),1,0,0);
    *(undefined1 *)(lVar11 + 0x16b9) = 1;
    lVar7 = *(long *)(lVar11 + 0x998);
    if (lVar7 == 0) goto LAB_102e9f518;
    plVar9 = *(long **)(lVar11 + 0x990);
    lVar24 = *plVar9;
    lStack_16f8 = plVar9[2];
    lStack_1700 = plVar9[1];
    _memmove(plVar9,plVar9 + 3,lVar7 * 0x18 + -0x18);
    lVar12 = lVar7 + -1;
    *(long *)(lVar11 + 0x998) = lVar12;
    if (lVar24 != -0x8000000000000000) {
      *(long *)(lVar11 + 0x9a0) = lVar24;
      *(long *)(lVar11 + 0x9b0) = lStack_16f8;
      *(long *)(lVar11 + 0x9a8) = lStack_1700;
      *(undefined1 *)(lVar11 + 0x16b8) = 1;
      if (lVar12 == 0) {
LAB_102e9ec90:
        lVar7 = *(long *)(lVar11 + 0x980);
        lVar12 = *(long *)(lVar7 + 0x2388);
      }
      else {
        *(long *)(lVar11 + 0x998) = lVar7 + -2;
        puVar14 = (ulong *)(*(long *)(lVar11 + 0x990) + (lVar7 + -2) * 0x18);
        if ((*puVar14 & 0x7fffffffffffffff) == 0) goto LAB_102e9ec90;
        _free(puVar14[1]);
        lVar7 = *(long *)(lVar11 + 0x980);
        lVar12 = *(long *)(lVar7 + 0x2388);
      }
      if (lVar12 != 0) {
        lVar7 = *(long *)(lVar7 + 0x2390);
        do {
          uVar17 = (ulong)*(ushort *)(lVar12 + 10);
          uVar6 = 0xffffffffffffffff;
          pbVar16 = (byte *)(lVar12 + 0xc);
          uVar18 = uVar17;
          do {
            if (uVar18 == 0) goto LAB_102e9ecec;
            cVar1 = *pbVar16 < 0x1e;
            if (0x1e < *pbVar16) {
              cVar1 = -1;
            }
            uVar18 = uVar18 - 1;
            uVar6 = uVar6 + 1;
            pbVar16 = pbVar16 + 1;
          } while (cVar1 == '\x01');
          uVar17 = uVar6;
          if (cVar1 == '\0') goto LAB_102e9ed14;
LAB_102e9ecec:
          if (lVar7 == 0) break;
          lVar12 = *(long *)(lVar12 + uVar17 * 8 + 0x18);
          lVar7 = lVar7 + -1;
        } while( true );
      }
      lStack_1720 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lStack_1718 = 8;
      lStack_1710 = 0;
      plStack_1768 = (long *)0x8;
LAB_102e9ef9c:
      lVar7 = *(long *)(lVar11 + 0x980);
      lStack_328 = lStack_1720;
      lStack_320 = lStack_1718;
      lStack_318 = lStack_1710;
      if (*(long *)(lVar7 + 0x1f60) == -0x8000000000000000) {
        lStack_310 = -0x8000000000000000;
        lVar12 = *(long *)(lVar7 + 0x2388);
      }
      else {
        func_0x0001035ad330(&lStack_310,*(undefined8 *)(lVar7 + 0x1f68),
                            *(undefined8 *)(lVar7 + 0x1f70));
        lVar7 = *(long *)(lVar11 + 0x980);
        lVar12 = *(long *)(lVar7 + 0x2388);
      }
      if (lVar12 != 0) {
        lVar24 = *(long *)(lVar7 + 0x2390);
        do {
          uVar17 = (ulong)*(ushort *)(lVar12 + 10);
          uVar6 = 0xffffffffffffffff;
          pbVar16 = (byte *)(lVar12 + 0xc);
          uVar18 = uVar17;
          do {
            if (uVar18 == 0) goto LAB_102e9f05c;
            cVar1 = *pbVar16 == 0;
            if (1 < *pbVar16) {
              cVar1 = -1;
            }
            uVar18 = uVar18 - 1;
            uVar6 = uVar6 + 1;
            pbVar16 = pbVar16 + 1;
          } while (cVar1 == '\x01');
          uVar17 = uVar6;
          if (cVar1 == '\0') {
            uVar19 = 1;
            goto LAB_102e9f07c;
          }
LAB_102e9f05c:
          if (lVar24 == 0) break;
          lVar12 = *(long *)(lVar12 + uVar17 * 8 + 0x18);
          lVar24 = lVar24 + -1;
        } while( true );
      }
      uVar19 = 0;
LAB_102e9f07c:
      uVar4 = *(undefined1 *)(lVar7 + 0x2532);
      FUN_103613410(&lStack_d18);
      _memcpy(&lStack_1700,&lStack_d18,0x960);
      lStack_d98 = lStack_320;
      lStack_da0 = lStack_328;
      lStack_d90 = lStack_318;
      *(undefined2 *)(lVar11 + 0x16b8) = 0;
      uStack_d38 = *(undefined8 *)(lVar11 + 0x9a8);
      uStack_d40 = *(undefined8 *)(lVar11 + 0x9a0);
      uStack_d30 = *(undefined8 *)(lVar11 + 0x9b0);
      uStack_d60 = *(undefined8 *)(lVar11 + 0x998);
      uStack_d68 = *(undefined8 *)(lVar11 + 0x990);
      uStack_d70 = *(undefined8 *)(lVar11 + 0x988);
      uStack_d50 = uStack_308;
      lStack_d58 = lStack_310;
      uStack_d48 = uStack_300;
      lStack_d88 = lVar20;
      plStack_d80 = plStack_1768;
      lStack_d78 = lVar25;
      uStack_d28 = uVar19;
      uStack_d27 = uVar4;
      __ZN11codex_hooks8registry5Hooks3new17h0a1ac373443313b5E(&uStack_3b8,&lStack_1700);
      *(undefined2 *)(lVar11 + 0x16b8) = 0;
      puVar8[0xd] = uStack_350;
      puVar8[0xc] = uStack_358;
      puVar8[0xf] = uStack_340;
      puVar8[0xe] = uStack_348;
      puVar8[0x11] = uStack_330;
      puVar8[0x10] = uStack_338;
      puVar8[5] = uStack_390;
      puVar8[4] = uStack_398;
      puVar8[7] = uStack_380;
      puVar8[6] = uStack_388;
      puVar8[9] = uStack_370;
      puVar8[8] = uStack_378;
      puVar8[0xb] = uStack_360;
      puVar8[10] = uStack_368;
      uVar19 = 1;
      puVar8[1] = uStack_3b0;
      *puVar8 = uStack_3b8;
      puVar8[3] = uStack_3a0;
      puVar8[2] = uStack_3a8;
LAB_102e9f148:
      *(undefined1 *)(lVar11 + 0x16ba) = uVar19;
      return;
    }
  }
  else {
    func_0x000108a07af4(&UNK_10b2b0db8);
LAB_102e9f518:
    lVar12 = 0;
  }
  func_0x0001087c9024(0,lVar12,&UNK_10b2b0da0);
LAB_102e9f53c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102e9f540);
  (*pcVar5)();
code_r0x000102e9ee10:
  lVar25 = *(long *)(lVar28 + 0x68);
  lVar28 = lVar25 + *(long *)(lVar28 + 0x70) * 0x180;
  if ((lVar25 == 0) ||
     ((lVar25 == lVar28 ||
      (func_0x0001035e00f4(&lStack_1700,lVar25), lVar29 = lStack_1700,
      lStack_1700 == -0x8000000000000000)))) goto joined_r0x000102e9ede0;
  lVar25 = lVar25 + 0x180;
  _memcpy(&uStack_308,&lStack_16f8,0x178);
  lStack_310 = lVar29;
  uVar6 = ((ulong)(lVar28 - lVar25) >> 7) * -0x5555555555555555;
  if (uVar6 < 4) {
    uVar6 = 3;
  }
  lVar29 = uVar6 + 1;
  lVar10 = lVar29 * 0x180;
  if ((ulong)(lVar28 - lVar25) < 0x7ffffffffffffe01) {
    if (lVar10 == 0) {
      lVar29 = 0;
      plStack_1768 = (long *)0x8;
LAB_102e9f3c4:
      _memcpy(plStack_1768,&lStack_310,0x180);
      lVar10 = 1;
      lStack_318 = 1;
      lStack_328 = lVar29;
      lStack_320 = (long)plStack_1768;
      if (lVar25 == lVar28) goto joined_r0x000102e9f414;
LAB_102e9f3f8:
      func_0x0001035e00f4(&lStack_1700,lVar25);
      lVar29 = lStack_1700;
      if (lStack_1700 != -0x8000000000000000) goto LAB_102e9f45c;
      goto joined_r0x000102e9f414;
    }
    uVar23 = 8;
    plStack_1768 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar10,8);
    if (plStack_1768 != (long *)0x0) goto LAB_102e9f3c4;
  }
  else {
    uVar23 = 0;
  }
  func_0x0001087c9084(uVar23,lVar10);
  goto LAB_102e9f53c;
LAB_102e9f45c:
  lVar25 = lVar25 + 0x180;
  _memcpy(&plStack_d10,&lStack_16f8,0x178);
  lStack_d18 = lVar29;
  if (lVar10 == lStack_328) {
    FUN_10893e30c(&lStack_328,lVar10,((ulong)(lVar28 - lVar25) >> 7) * -0x5555555555555555 + 1,8,
                  0x180);
    plStack_1768 = (long *)lStack_320;
  }
  _memcpy((long)plStack_1768 + lVar10 * 0x180,&lStack_d18,0x180);
  lVar10 = lVar10 + 1;
  lStack_318 = lVar10;
  if (lVar25 == lVar28) {
joined_r0x000102e9f414:
    do {
      do {
        lVar28 = lVar20;
        if (lVar28 == lVar27) {
          lStack_1718 = lStack_320;
          lStack_1720 = lStack_328;
          lStack_1710 = lStack_318;
          goto LAB_102e9ee2c;
        }
        lVar20 = lVar28 + 0x140;
      } while ((*(char *)(lVar28 + 0x138) != '\x01') ||
              (*(long *)(lVar28 + 0xc0) != -0x8000000000000000));
      lVar25 = *(long *)(lVar28 + 0x68);
      lVar28 = lVar25 + *(long *)(lVar28 + 0x70) * 0x180;
    } while (lVar25 == lVar28);
  }
  goto LAB_102e9f3f8;
}

