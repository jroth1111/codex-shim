
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core2h25proto7streams4recv4Recv27clear_expired_reset_streams17h5bc758906dcaac95E
               (long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [12];
  int iStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  char *****pppppcStack_2c0;
  char ***pppcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  char **ppcStack_2a0;
  undefined *puStack_298;
  char *pcStack_290;
  int **ppiStack_288;
  int *piStack_280;
  undefined8 ******ppppppuStack_278;
  long lStack_270;
  undefined *puStack_268;
  int *piStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  char *pcStack_210;
  char ******ppppppcStack_208;
  char ******ppppppcStack_200;
  undefined *puStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  int **ppiStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  uint *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  uint uStack_17c;
  undefined1 auStack_178 [12];
  long alStack_168 [2];
  undefined8 ****ppppuStack_158;
  undefined *puStack_150;
  undefined8 ****ppppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *****pppppuStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 ****ppppuStack_110;
  undefined *puStack_108;
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined *puStack_70;
  
  puVar9 = (uint *)(param_1 + 0x78);
  if (*puVar9 != 0) {
    auStack_178 = func_0x000106032954(8);
    lStack_188 = (long)&uStack_130 + 4;
    uVar11 = *(ulong *)(param_1 + 0x38);
    uStack_17c = *(uint *)(param_1 + 0x40);
    do {
      uVar3 = *(uint *)(param_1 + 0x7c);
      uStack_130 = *(undefined8 ****)(param_1 + 0x7c);
      if (((*(ulong *)(param_2 + 0x10) <= (ulong)uVar3) ||
          (plVar8 = (long *)(*(long *)(param_2 + 8) + (ulong)uVar3 * 0x158), *plVar8 == 2)) ||
         (*(int *)((long)plVar8 + 0x13c) != *(int *)(param_1 + 0x80))) {
        lStack_d8 = lStack_188;
        puStack_d0 = &DAT_105abf048;
        plVar8 = (long *)&UNK_10b3fa588;
        auVar12 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                            (s__dangling_store_key_for_stream_i_108b233d4,&lStack_d8);
        iStack_2dc = auVar12._8_4_;
        lVar10 = auVar12._0_8_;
        uStack_1c8 = 1000000000;
        uStack_198 = 0x105a8dbb0;
        lStack_1e0 = unaff_x26;
        puStack_1d8 = unaff_x25;
        puStack_1d0 = unaff_x24;
        puStack_1c0 = puVar9;
        lStack_1b8 = param_1;
        lStack_1b0 = param_2;
        uStack_1a8 = param_3;
        puStack_1a0 = &stack0xfffffffffffffff0;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          bVar6 = bRam000000010b636be8;
          if (bRam000000010b636be8 - 1 < 2) {
LAB_105a8dd58:
            iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b636bd8,bVar6);
            if (iVar7 != 0) {
              puStack_268 = (undefined *)(lRam000000010b636bd8 + 0x30);
              lStack_250 = lVar10 + 0x90;
              piStack_260 = &iStack_2dc;
              puStack_258 = &
                            __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              puStack_248 = &
                            __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              ppppppuStack_1f0 = (undefined8 ******)s__release_connection_capacity__si_108b16c6a;
              ppppppcStack_200 = (char ******)&ppppppuStack_1f0;
              puStack_1f8 = &UNK_10b3f92b0;
              ppppppuStack_278 = &ppppppcStack_200;
              piStack_280 = (int *)0x1;
              lStack_270 = 1;
              ppiStack_1e8 = &piStack_260;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (lRam000000010b636bd8,&piStack_280);
              lVar5 = lRam000000010b636bd8;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pppcStack_2b8 = *(char ****)(lRam000000010b636bd8 + 0x20);
                uStack_2b0 = *(undefined8 *)(lRam000000010b636bd8 + 0x28);
                pppppcStack_2c0 = (char *****)0x5;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppcStack_2c0);
                if (iVar7 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar5,puVar2,puVar1,&pppppcStack_2c0,&piStack_280);
                }
              }
              goto LAB_105a8de5c;
            }
          }
          else if (bRam000000010b636be8 != 0) {
            bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b636bd8);
            if (bVar6 != 0) goto LAB_105a8dd58;
          }
        }
        lVar5 = lRam000000010b636bd8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_2d0 = *(undefined8 *)(lRam000000010b636bd8 + 0x20);
          uStack_2c8 = *(undefined8 *)(lRam000000010b636bd8 + 0x28);
          uStack_2d8 = 5;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_2d8);
          if (iVar7 != 0) {
            lStack_2a8 = lRam000000010b636bd8 + 0x30;
            lStack_270 = lVar10 + 0x90;
            piStack_280 = &iStack_2dc;
            ppppppuStack_278 =
                 (undefined8 ******)
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
            ;
            puStack_268 = &
                          __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
            ;
            ppiStack_288 = &piStack_280;
            pcStack_290 = s__release_connection_capacity__si_108b16c6a;
            ppcStack_2a0 = &pcStack_290;
            puStack_298 = &UNK_10b3f92b0;
            pppcStack_2b8 = &ppcStack_2a0;
            pppppcStack_2c0 = (char *****)0x1;
            uStack_2b0 = 1;
            lStack_240 = *(long *)(lVar5 + 0x60);
            uStack_238 = *(undefined8 *)(lVar5 + 0x68);
            puStack_258 = *(undefined **)(lVar5 + 0x50);
            lStack_250 = *(long *)(lVar5 + 0x58);
            piStack_260 = (int *)0x1;
            if (puStack_258 == (undefined *)0x0) {
              piStack_260 = (int *)0x2;
            }
            uStack_218 = *(undefined4 *)(lVar5 + 8);
            uStack_214 = *(undefined4 *)(lVar5 + 0xc);
            ppppppcStack_200 = &pppppcStack_2c0;
            puStack_1f8 = (undefined *)CONCAT71(puStack_1f8._1_7_,1);
            ppppppuStack_1f0 = &ppppppcStack_200;
            ppiStack_1e8 = (int **)&DAT_1061c2098;
            puStack_248 = (undefined *)0x1;
            if (lStack_240 == 0) {
              puStack_248 = (undefined *)0x2;
            }
            uStack_228 = uStack_2d0;
            uStack_230 = uStack_2d8;
            uStack_220 = uStack_2c8;
            ppppppcStack_208 = (char ******)&ppppppuStack_1f0;
            pcStack_210 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&piStack_260);
          }
        }
LAB_105a8de5c:
        *(int *)(lVar10 + 0x90) = *(int *)(lVar10 + 0x90) - iStack_2dc;
        iVar7 = *(int *)(lVar10 + 0x4c);
        if (!SCARRY4(iVar7,iStack_2dc)) {
          *(int *)(lVar10 + 0x4c) = iVar7 + iStack_2dc;
          iVar7 = iVar7 + iStack_2dc;
        }
        iVar4 = *(int *)(lVar10 + 0x48);
        if ((iVar4 < iVar7) && (iVar4 / 2 <= iVar7 - iVar4)) {
          lVar10 = *plVar8;
          *plVar8 = 0;
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 8))(plVar8[1]);
          }
        }
        return;
      }
      if ((int)plVar8[0xc] != 1000000000) {
        uStack_130 = (undefined8 ***)plVar8[0xb];
        pppppuStack_128 = (undefined8 *****)CONCAT44(pppppuStack_128._4_4_,(int)plVar8[0xc]);
        func_0x000106032878(&lStack_d8,auStack_178,&uStack_130);
        puVar1 = (undefined *)0;
        if ((uint)lStack_d8 == 0) {
          puVar1 = puStack_d0;
        }
        if (puVar1 == (undefined *)uVar11) {
          uVar3 = (uint)lStack_d8;
          if ((uint)uStack_c8 <= uStack_17c) {
            uVar3 = 1;
          }
          if ((uVar3 & 1) != 0) {
            return;
          }
        }
        else if (puVar1 <= uVar11) {
          return;
        }
        goto LAB_105a8db1c;
      }
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
        bVar6 = bRam000000010b636bd0;
        if (1 < bRam000000010b636bd0 - 1) {
          if (bRam000000010b636bd0 != 0) {
            bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b636bc0);
            if (bVar6 != 0) goto LAB_105a8d82c;
          }
          goto LAB_105a8d9cc;
        }
LAB_105a8d82c:
        iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b636bc0,bVar6);
        if (iVar7 == 0) goto LAB_105a8d9cc;
        lStack_118 = lRam000000010b636bc0 + 0x30;
        ppppuStack_110 = (undefined8 ****)&UNK_109b0c362;
        puStack_108 = (undefined *)0xa9;
        ppppuStack_158 = &ppppuStack_110;
        puStack_150 = &UNK_10b3f92b0;
        pppppuStack_128 = &ppppuStack_158;
        uStack_130 = (undefined8 ***)0x1;
        uStack_120 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b636bc0,&uStack_130);
        lVar10 = lRam000000010b636bc0;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack_f8 = *(undefined **)(lRam000000010b636bc0 + 0x20);
          uStack_f0 = *(undefined8 *)(lRam000000010b636bc0 + 0x28);
          ppppuStack_100 = (undefined8 *****)0x2;
          unaff_x25 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x25 = &UNK_10b3c24c8;
          }
          unaff_x24 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x24 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(unaff_x25 + 0x18))(unaff_x24,&ppppuStack_100);
          unaff_x26 = lVar10;
          if (iVar7 == 0) goto LAB_105a8db1c;
          lStack_b8 = *(long *)(lVar10 + 0x60);
          uStack_b0 = *(undefined8 *)(lVar10 + 0x68);
          puStack_d0 = *(undefined **)(lVar10 + 0x50);
          uStack_c8 = *(undefined8 *)(lVar10 + 0x58);
          lStack_d8 = 1;
          if (puStack_d0 == (undefined *)0x0) {
            lStack_d8 = 2;
          }
          uStack_90 = *(undefined4 *)(lVar10 + 8);
          uStack_8c = *(undefined4 *)(lVar10 + 0xc);
          pppuStack_e8 = (undefined8 ***)&uStack_130;
          uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
          ppppuStack_78 = &pppuStack_e8;
          puStack_70 = &DAT_1061c2098;
          uStack_c0 = 1;
          if (lStack_b8 == 0) {
            uStack_c0 = 2;
          }
          puStack_a0 = puStack_f8;
          ppppuStack_a8 = ppppuStack_100;
          uStack_98 = uStack_f0;
          pppppuStack_80 = &ppppuStack_78;
          goto LAB_105a8daf4;
        }
      }
      else {
LAB_105a8d9cc:
        lVar10 = lRam000000010b636bc0;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack_140 = *(undefined **)(lRam000000010b636bc0 + 0x20);
          uStack_138 = *(undefined8 *)(lRam000000010b636bc0 + 0x28);
          ppppuStack_148 = (undefined8 *****)0x2;
          unaff_x25 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x25 = &UNK_10b3c24c8;
          }
          unaff_x24 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x24 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(unaff_x25 + 0x18))(unaff_x24,&ppppuStack_148);
          unaff_x26 = lVar10;
          if (iVar7 != 0) {
            lStack_118 = lRam000000010b636bc0 + 0x30;
            pppuStack_e8 = (undefined8 ***)&UNK_109b0c362;
            uStack_e0 = 0xa9;
            ppppuStack_110 = &pppuStack_e8;
            puStack_108 = &UNK_10b3f92b0;
            pppppuStack_128 = &ppppuStack_110;
            uStack_130 = (undefined8 ***)0x1;
            uStack_120 = 1;
            lStack_b8 = *(long *)(lVar10 + 0x60);
            uStack_b0 = *(undefined8 *)(lVar10 + 0x68);
            puStack_d0 = *(undefined **)(lVar10 + 0x50);
            uStack_c8 = *(undefined8 *)(lVar10 + 0x58);
            lStack_d8 = 1;
            if (puStack_d0 == (undefined *)0x0) {
              lStack_d8 = 2;
            }
            uStack_90 = *(undefined4 *)(lVar10 + 8);
            uStack_8c = *(undefined4 *)(lVar10 + 0xc);
            ppppuStack_78 = (undefined8 ****)&uStack_130;
            puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
            ppppuStack_100 = &ppppuStack_78;
            puStack_f8 = &DAT_1061c2098;
            uStack_c0 = 1;
            if (lStack_b8 == 0) {
              uStack_c0 = 2;
            }
            puStack_a0 = puStack_140;
            ppppuStack_a8 = ppppuStack_148;
            uStack_98 = uStack_138;
            pppppuStack_80 = &ppppuStack_100;
LAB_105a8daf4:
            pcStack_88 = s__108b39f4f;
            (**(code **)(unaff_x25 + 0x20))(unaff_x24,&lStack_d8);
            unaff_x26 = lVar10;
          }
        }
      }
LAB_105a8db1c:
      func_0x000105a94208(alStack_168,puVar9,param_2);
      if (alStack_168[0] == 0) {
        return;
      }
      __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                (param_3,alStack_168,1);
    } while ((*puVar9 & 1) != 0);
  }
  return;
}

