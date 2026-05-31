
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318108c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong in_xzr;
  uint uStack_1c04;
  long lStack_1bd0;
  long lStack_1bc8;
  long lStack_1bc0;
  long lStack_1bb8;
  long lStack_1b70;
  long lStack_1b68;
  long lStack_1b60;
  long lStack_1b58;
  long lStack_1b50;
  long lStack_1b48;
  long lStack_1b40;
  long lStack_1b38;
  long lStack_1b30;
  long lStack_1b28;
  long lStack_1b20;
  long lStack_1b18;
  long lStack_1b10;
  long *plStack_1b08;
  long lStack_1b00;
  long lStack_1af8;
  long lStack_1af0;
  long lStack_1ae8;
  undefined8 uStack_1060;
  long lStack_e90;
  long lStack_e88;
  long lStack_e80;
  long lStack_e78;
  long lStack_e70;
  long lStack_e68;
  long lStack_e60;
  long lStack_e58;
  long lStack_e50;
  long lStack_e48;
  long lStack_e40;
  long lStack_e38;
  long lStack_e30;
  long lStack_e28;
  long lStack_e20;
  long lStack_e18;
  long lStack_dc0;
  long lStack_db8;
  long lStack_db0;
  long lStack_da8;
  long lStack_da0;
  long lStack_d98;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  uStack_1060 = 0;
  bVar25 = *(byte *)(param_2 + 0x19c);
  if (bVar25 < 2) {
    if (bVar25 == 0) {
      bVar25 = 0;
      lVar24 = param_2[1];
      param_2[0x199] = *param_2;
      param_2[0x19a] = lVar24;
      *(undefined2 *)((long)param_2 + 0xcda) = 0;
      *(undefined1 *)((long)param_2 + 0xcd9) = 0;
      param_2[2] = *param_2;
      bVar7 = *(byte *)(lVar24 + 0x978);
joined_r0x0001031811fc:
      if ((bVar7 & 1) == 0) {
        lStack_e90 = 0;
        lStack_e88 = 8;
        lStack_e80 = 0;
        func_0x000102fe1934(&lStack_1b70,&lStack_e90);
      }
      else {
        *(undefined1 *)(param_2 + 0x19b) = *(undefined1 *)(lVar24 + 0x97a);
        __ZN12codex_config5state16ConfigLayerStack16effective_config17hb81929d75e8817f7E
                  (&lStack_e90,lVar24);
        __ZN12codex_config11fingerprint16version_for_toml17h892d8d9844599315E
                  (param_2 + 3,&lStack_e90);
        *(undefined1 *)((long)param_2 + 0xcd9) = 1;
        FUN_10337b6e4(&lStack_e90);
        if (((bVar25 & 1) != 0) ||
           (__ZN18codex_core_plugins7manager14PluginsManager22cached_enabled_outcome17h231dbd9a8dbd3b92E
                      (&lStack_e90,param_2[2],param_2[4],param_2[5],*(undefined1 *)(param_2 + 0x19b)
                      ), lStack_e90 == -0x8000000000000000)) {
          __ZN18codex_core_plugins7manager14PluginsManager31remote_installed_plugin_configs17h657b84c041e1d6c2E
                    (&lStack_f0,param_2[2]);
          lVar19 = param_2[2];
          uVar18 = *(undefined1 *)(lVar19 + 0x2f8);
          uVar8 = *(undefined1 *)(param_2 + 0x19b);
          lStack_db8 = lStack_e8;
          lStack_dc0 = lStack_f0;
          lStack_da8 = lStack_d8;
          lStack_db0 = lStack_e0;
          lStack_d98 = lStack_c8;
          lStack_da0 = lStack_d0;
          _memcpy(&lStack_1b10,&lStack_e90,0xc78);
          _memcpy(param_2 + 6,&lStack_1b10,0xc78);
          param_2[0x195] = lVar24;
          param_2[0x196] = lVar19 + 0x18;
          *(undefined1 *)((long)param_2 + 0xcbe) = uVar18;
          *(undefined1 *)((long)param_2 + 0xcbf) = 0;
          *(undefined1 *)(param_2 + 0x198) = uVar8;
          goto LAB_103181228;
        }
        lStack_1b68 = lStack_e88;
        lStack_1b70 = lStack_e90;
        lStack_1b58 = lStack_e78;
        lStack_1b60 = lStack_e80;
        lStack_1b48 = lStack_e68;
        lStack_1b50 = lStack_e70;
        if (param_2[3] != 0) {
          _free(param_2[4]);
        }
LAB_10318187c:
        *(undefined1 *)((long)param_2 + 0xcd9) = 0;
      }
      param_1[1] = lStack_1b68;
      *param_1 = lStack_1b70;
      param_1[3] = lStack_1b58;
      param_1[2] = lStack_1b60;
      param_1[5] = lStack_1b48;
      param_1[4] = lStack_1b50;
      lVar24 = *param_1;
      uVar18 = 1;
      *(undefined1 *)((long)param_2 + 0xcda) = 1;
      if (lVar24 != -0x8000000000000000) goto LAB_1031818b8;
LAB_1031818ac:
      *param_1 = -0x8000000000000000;
      uVar18 = 3;
LAB_1031818b8:
      *(undefined1 *)(param_2 + 0x19c) = uVar18;
      return;
    }
    func_0x000108a07af4(&UNK_10b2bd858);
LAB_1031819c8:
    func_0x000108a07b10(&UNK_10b2bd858);
  }
  else {
    if (bVar25 != 3) goto LAB_1031819c8;
    bVar25 = *(byte *)((long)param_2 + 0xcda);
    if (1 < bVar25) {
      if (bVar25 != 3) {
        func_0x000108a07b10(&UNK_10b2bd870);
        goto LAB_103181a20;
      }
LAB_103181228:
      func_0x00010317dd58(&lStack_e90,param_2 + 6,param_3);
      if (lStack_e90 != -0x8000000000000000) {
        lStack_1b38 = lStack_e88;
        lStack_1b40 = lStack_e90;
        lStack_1b28 = lStack_e78;
        lStack_1b30 = lStack_e80;
        lStack_1b18 = lStack_e68;
        lStack_1b20 = lStack_e70;
        FUN_1032b7e38(param_2 + 6);
        __ZN18codex_core_plugins6loader22log_plugin_load_errors17hb64af7e2a0ca3f25E(&lStack_1b40);
        lVar24 = param_2[2];
        puVar1 = (ulong *)(lVar24 + 0x138);
        LOAcquire();
        uVar11 = *puVar1;
        *puVar1 = uVar11 | 1;
        if ((uVar11 & 1) != 0) {
          func_0x000108a82360(puVar1,1);
        }
        if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0) {
          uStack_1c04 = 0;
        }
        else {
          uStack_1c04 = func_0x000108a82c0c();
          uStack_1c04 = uStack_1c04 ^ 1;
        }
        lVar23 = lStack_1b30;
        lVar19 = lStack_1b38;
        *(undefined1 *)((long)param_2 + 0xcd9) = 0;
        uVar2 = param_2[3];
        uVar4 = param_2[4];
        uVar26 = param_2[5];
        uVar18 = *(undefined1 *)(param_2 + 0x19b);
        if (lStack_1b30 == 0) {
          lStack_1d8 = 0;
          lStack_1d0 = 8;
        }
        else {
          lVar21 = lStack_1b30 * 0x140;
          lVar12 = _malloc(lVar21);
          if (lVar12 == 0) {
            func_0x0001087c9084(8,lVar21);
            goto LAB_103181a20;
          }
          lVar21 = 0;
          lStack_1d8 = lVar23;
          uStack_1c8 = 0;
          lVar20 = lVar19 + lVar23 * 0x140;
          lVar31 = lVar23;
          lStack_1d0 = lVar12;
          do {
            if (lVar19 == lVar20) break;
            uVar3 = *(undefined8 *)(lVar19 + 8);
            lVar5 = *(long *)(lVar19 + 0x10);
            if (lVar5 == 0) {
              lVar13 = 1;
            }
            else {
              lVar13 = _malloc(lVar5);
              if (lVar13 == 0) {
                func_0x0001087c9084(1,lVar5);
                goto LAB_103181a20;
              }
            }
            _memcpy(lVar13,uVar3,lVar5);
            lVar27 = -0x8000000000000000;
            lVar28 = -0x8000000000000000;
            if (*(long *)(lVar19 + 0x90) != -0x8000000000000000) {
              uVar3 = *(undefined8 *)(lVar19 + 0x98);
              lVar28 = *(long *)(lVar19 + 0xa0);
              if (lVar28 == 0) {
                lStack_1bc0 = 1;
              }
              else {
                lStack_1bc0 = _malloc(lVar28);
                if (lStack_1bc0 == 0) {
                  func_0x0001087c9084(1,lVar28);
                  goto LAB_103181a20;
                }
              }
              _memcpy(lStack_1bc0,uVar3,lVar28);
            }
            if (*(long *)(lVar19 + 0xa8) != -0x8000000000000000) {
              uVar3 = *(undefined8 *)(lVar19 + 0xb0);
              lVar27 = *(long *)(lVar19 + 0xb8);
              if (lVar27 == 0) {
                lStack_1bc8 = 1;
              }
              else {
                lStack_1bc8 = _malloc(lVar27);
                if (lStack_1bc8 == 0) {
                  func_0x0001087c9084(1,lVar27);
                  goto LAB_103181a20;
                }
              }
              _memcpy(lStack_1bc8,uVar3,lVar27);
            }
            uVar3 = *(undefined8 *)(lVar19 + 0x20);
            lVar6 = *(long *)(lVar19 + 0x28);
            if (lVar6 == 0) {
              lVar14 = 1;
            }
            else {
              lVar14 = _malloc(lVar6);
              if (lVar14 == 0) {
                func_0x0001087c9084(1,lVar6);
                goto LAB_103181a20;
              }
            }
            _memcpy(lVar14,uVar3,lVar6);
            uVar8 = *(undefined1 *)(lVar19 + 0x138);
            lVar30 = *(long *)(lVar19 + 0x40);
            if (lVar30 == 0) {
              lStack_e90 = 0;
              lStack_e88 = 8;
            }
            else {
              lVar29 = *(long *)(lVar19 + 0x38);
              lVar32 = lVar30 * 0x18;
              lVar15 = _malloc(lVar32);
              if (lVar15 == 0) {
                func_0x0001087c9084(8,lVar32);
                goto LAB_103181a20;
              }
              lVar22 = 0;
              plVar17 = (long *)(lVar15 + 0x10);
              lStack_e90 = lVar30;
              lStack_e88 = lVar15;
              do {
                if (lVar32 == 0) break;
                uVar3 = *(undefined8 *)(lVar29 + 8);
                lVar15 = *(long *)(lVar29 + 0x10);
                if (lVar15 == 0) {
                  lVar16 = 1;
                }
                else {
                  lVar16 = _malloc(lVar15);
                  if (lVar16 == 0) {
                    func_0x0001087c9084(1,lVar15);
                    goto LAB_103181a20;
                  }
                }
                lVar29 = lVar29 + 0x18;
                lVar22 = lVar22 + 1;
                _memcpy(lVar16,uVar3,lVar15);
                plVar17[-2] = lVar15;
                plVar17[-1] = lVar16;
                lVar32 = lVar32 + -0x18;
                *plVar17 = lVar15;
                plVar17 = plVar17 + 3;
              } while (lVar30 != lVar22);
            }
            lStack_108 = lStack_e88;
            lStack_110 = lStack_e90;
            lStack_100 = lVar30;
            func_0x00010363a8e4(&lStack_e90,lVar19 + 0xd8);
            lStack_e8 = lStack_e88;
            lStack_f0 = lStack_e90;
            lStack_d8 = lStack_e78;
            lStack_e0 = lStack_e80;
            lStack_c8 = lStack_e68;
            lStack_d0 = lStack_e70;
            uVar9 = *(undefined1 *)(lVar19 + 0x139);
            func_0x000103639b60(&lStack_e90,lVar19 + 0x108);
            plStack_1b08 = (long *)lStack_e88;
            lStack_1b10 = lStack_e90;
            lStack_1af8 = lStack_e78;
            lStack_1b00 = lStack_e80;
            lStack_1ae8 = lStack_e68;
            lStack_1af0 = lStack_e70;
            FUN_1035ac690(&lStack_b8,*(undefined8 *)(lVar19 + 0x50),*(undefined8 *)(lVar19 + 0x58));
            lVar30 = *(long *)(lVar19 + 0x70);
            if (lVar30 == 0) {
              lStack_1c0 = 0;
              lStack_1b8 = 8;
            }
            else {
              lVar29 = *(long *)(lVar19 + 0x68);
              lVar32 = lVar30 * 0x180;
              lVar15 = _malloc(lVar32);
              if (lVar15 == 0) {
                func_0x0001087c9084(8,lVar32);
                goto LAB_103181a20;
              }
              lVar22 = 0;
              lStack_1c0 = lVar30;
              lStack_1b8 = lVar15;
              do {
                if (lVar32 == 0) break;
                func_0x0001035e00f4(&lStack_e90,lVar29);
                lVar22 = lVar22 + 1;
                lVar29 = lVar29 + 0x180;
                _memcpy(lVar15,&lStack_e90,0x180);
                lVar32 = lVar32 + -0x180;
                lVar15 = lVar15 + 0x180;
              } while (lVar30 != lVar22);
            }
            lStack_98 = lStack_1b8;
            lStack_a0 = lStack_1c0;
            lStack_90 = lVar30;
            func_0x0001035ad330(&lStack_88,*(undefined8 *)(lVar19 + 0x80),
                                *(undefined8 *)(lVar19 + 0x88));
            lVar30 = -0x8000000000000000;
            if (*(long *)(lVar19 + 0xc0) != -0x8000000000000000) {
              uVar3 = *(undefined8 *)(lVar19 + 200);
              lVar30 = *(long *)(lVar19 + 0xd0);
              if (lVar30 == 0) {
                lStack_1bd0 = 1;
              }
              else {
                lStack_1bd0 = _malloc(lVar30);
                if (lStack_1bd0 == 0) {
                  func_0x0001087c9084(1,lVar30);
                  goto LAB_103181a20;
                }
              }
              _memcpy(lStack_1bd0,uVar3,lVar30);
              lStack_1bb8 = lVar30;
            }
            lVar19 = lVar19 + 0x140;
            lStack_128 = lStack_108;
            lStack_130 = lStack_110;
            lVar29 = lVar21 * 0x140;
            lVar21 = lVar21 + 1;
            lStack_120 = lStack_100;
            lStack_e88 = lStack_e8;
            lStack_e90 = lStack_f0;
            lStack_e78 = lStack_d8;
            lStack_e80 = lStack_e0;
            lStack_e68 = lStack_c8;
            lStack_e70 = lStack_d0;
            lStack_1b8 = (long)plStack_1b08;
            lStack_1c0 = lStack_1b10;
            lStack_1a8 = lStack_1af8;
            lStack_1b0 = lStack_1b00;
            lStack_198 = lStack_1ae8;
            lStack_1a0 = lStack_1af0;
            lStack_148 = lStack_b0;
            lStack_150 = lStack_b8;
            lStack_140 = lStack_a8;
            lStack_168 = lStack_98;
            lStack_170 = lStack_a0;
            lStack_160 = lStack_90;
            lStack_188 = lStack_80;
            lStack_190 = lStack_88;
            lStack_180 = lStack_78;
            plVar17 = (long *)(lVar12 + lVar29);
            *plVar17 = lVar5;
            plVar17[1] = lVar13;
            plVar17[2] = lVar5;
            plVar17[3] = lVar6;
            plVar17[4] = lVar14;
            plVar17[5] = lVar6;
            plVar17[7] = lStack_108;
            plVar17[6] = lStack_110;
            plVar17[8] = lStack_100;
            plVar17[10] = lStack_b0;
            plVar17[9] = lStack_b8;
            plVar17[0xb] = lStack_a8;
            plVar17[0xe] = lStack_90;
            plVar17[0xd] = lStack_98;
            plVar17[0xc] = lStack_a0;
            plVar17[0x10] = lStack_80;
            plVar17[0xf] = lStack_88;
            plVar17[0x11] = lStack_78;
            plVar17[0x12] = lVar28;
            plVar17[0x13] = lStack_1bc0;
            plVar17[0x14] = lVar28;
            plVar17[0x15] = lVar27;
            plVar17[0x16] = lStack_1bc8;
            plVar17[0x17] = lVar27;
            plVar17[0x18] = lVar30;
            plVar17[0x19] = lStack_1bd0;
            plVar17[0x1a] = lStack_1bb8;
            plVar17[0x20] = lStack_c8;
            plVar17[0x1f] = lStack_d0;
            plVar17[0x1e] = lStack_d8;
            plVar17[0x1d] = lStack_e0;
            plVar17[0x1c] = lStack_e8;
            plVar17[0x1b] = lStack_f0;
            plVar17[0x24] = lStack_1af8;
            plVar17[0x23] = lStack_1b00;
            plVar17[0x26] = lStack_1ae8;
            plVar17[0x25] = lStack_1af0;
            plVar17[0x22] = (long)plStack_1b08;
            plVar17[0x21] = lStack_1b10;
            *(undefined1 *)(plVar17 + 0x27) = uVar8;
            *(undefined1 *)((long)plVar17 + 0x139) = uVar9;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        lVar12 = lStack_1b18;
        lVar19 = lStack_1b20;
        lStack_e8 = lStack_1d0;
        lStack_f0 = lStack_1d8;
        lStack_e0 = lVar23;
        if (lStack_1b18 == 0) {
          lStack_1b10 = 0;
          plStack_1b08 = (long *)0x8;
        }
        else {
          lVar23 = lStack_1b18 << 7;
          plVar17 = (long *)_malloc(lVar23);
          if (plVar17 == (long *)0x0) {
            func_0x0001087c9084(8,lVar23);
            goto LAB_103181a20;
          }
          lVar21 = 0;
          lStack_1b10 = lVar12;
          plStack_1b08 = plVar17;
          do {
            if (lVar23 == 0) break;
            FUN_103615804(&lStack_e90,lVar19);
            lVar21 = lVar21 + 1;
            lVar19 = lVar19 + 0x80;
            plVar17[9] = lStack_e48;
            plVar17[8] = lStack_e50;
            plVar17[0xb] = lStack_e38;
            plVar17[10] = lStack_e40;
            plVar17[0xd] = lStack_e28;
            plVar17[0xc] = lStack_e30;
            plVar17[0xf] = lStack_e18;
            plVar17[0xe] = lStack_e20;
            plVar17[1] = lStack_e88;
            *plVar17 = lStack_e90;
            plVar17[3] = lStack_e78;
            plVar17[2] = lStack_e80;
            lVar23 = lVar23 + -0x80;
            plVar17[5] = lStack_e68;
            plVar17[4] = lStack_e70;
            plVar17[7] = lStack_e58;
            plVar17[6] = lStack_e60;
            plVar17 = plVar17 + 0x10;
          } while (lVar12 != lVar21);
        }
        plStack_1f0 = plStack_1b08;
        lStack_1f8 = lStack_1b10;
        lStack_208 = lStack_e8;
        lStack_210 = lStack_f0;
        lStack_1e8 = lVar12;
        lStack_200 = lStack_e0;
        func_0x0001032a6b1c(lVar24 + 0x148);
        *(undefined8 *)(lVar24 + 0x148) = uVar2;
        *(undefined8 *)(lVar24 + 0x150) = uVar4;
        *(undefined8 *)(lVar24 + 0x158) = uVar26;
        *(long *)(lVar24 + 0x168) = lStack_208;
        *(long *)(lVar24 + 0x160) = lStack_210;
        *(long *)(lVar24 + 0x178) = lStack_1f8;
        *(long *)(lVar24 + 0x170) = lStack_200;
        *(long *)(lVar24 + 0x188) = lStack_1e8;
        *(long **)(lVar24 + 0x180) = plStack_1f0;
        *(undefined1 *)(lVar24 + 400) = uVar18;
        lStack_1b68 = lStack_1b38;
        lStack_1b70 = lStack_1b40;
        lStack_1b58 = lStack_1b28;
        lStack_1b60 = lStack_1b30;
        lStack_1b48 = lStack_1b18;
        lStack_1b50 = lStack_1b20;
        if ((((uStack_1c04 & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar11 = func_0x000108a82c0c(), (uVar11 & 1) == 0)) {
          *(undefined1 *)(lVar24 + 0x140) = 1;
        }
        if (*puVar1 == 1) {
          *puVar1 = in_xzr;
        }
        else {
          __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar1);
        }
        goto LAB_10318187c;
      }
      *(undefined1 *)((long)param_2 + 0xcda) = 3;
      goto LAB_1031818ac;
    }
    if (bVar25 == 0) {
      lVar24 = param_2[0x19a];
      bVar25 = *(byte *)((long)param_2 + 0xcdb);
      *(undefined1 *)((long)param_2 + 0xcd9) = 0;
      param_2[2] = param_2[0x199];
      bVar7 = *(byte *)(lVar24 + 0x978);
      goto joined_r0x0001031811fc;
    }
  }
  func_0x000108a07af4(&UNK_10b2bd870);
LAB_103181a20:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x103181a24);
  (*pcVar10)();
}

