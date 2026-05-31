
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011deaa8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  ulong **ppuVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *puVar12;
  long **pplVar13;
  uint uVar14;
  uint extraout_w1;
  undefined8 ***pppuVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  long ***ppplVar19;
  long **pplVar20;
  long ****pppplVar21;
  undefined *puVar22;
  long *unaff_x22;
  long lVar23;
  undefined8 *unaff_x23;
  long **pplVar24;
  long ***ppplVar25;
  long ***ppplVar26;
  long ***in_xzr;
  undefined1 auVar27 [16];
  ulong ***pppuStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong **ppuStack_2d8;
  ulong **ppuStack_2d0;
  ulong **ppuStack_2c8;
  ulong **ppuStack_2c0;
  ulong **ppuStack_2b8;
  ulong **ppuStack_2b0;
  ulong **ppuStack_2a8;
  ulong **ppuStack_2a0;
  ulong **ppuStack_298;
  ulong **ppuStack_290;
  ulong **ppuStack_288;
  ulong **ppuStack_280;
  ulong **ppuStack_278;
  ulong **ppuStack_270;
  ulong **ppuStack_268;
  long ****pppplStack_260;
  undefined *puStack_258;
  ulong ***pppuStack_250;
  undefined *puStack_248;
  ulong ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined8 ***pppuStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  bVar2 = *(byte *)(param_2 + 0x2c);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      uVar18 = func_0x000108a07af4(&UNK_10b24b420);
      FUN_100e25470(param_2 + 0x13);
      FUN_100ded040(param_2 + 0xc);
      *(undefined1 *)(param_2 + 0x2c) = 2;
      __Unwind_Resume(uVar18);
      func_0x000108a07bc4();
      auVar27 = func_0x000108a07bc4();
      puVar12 = auVar27._0_8_;
      puVar22 = &UNK_108cb0343;
      FUN_1007295b8(&ppuStack_2d8,auVar27._8_8_,&UNK_108cb0343,5);
      ppuVar6 = ppuStack_278;
      ppuVar5 = ppuStack_280;
      ppuVar4 = ppuStack_2d0;
      ppuVar3 = ppuStack_2d8;
      if ((long ***)ppuStack_2c8 != (long ***)0x2) {
        if (((ulong)ppuStack_2c8 & 1) == 0) {
          ppplVar25 = (long ***)0x3e9d73346e825fc1;
          uVar10 = 0x7b0bcfb60430d2;
          if ((long ***)ppuStack_288 == (long ***)0x0) {
            ppplVar26 = (long ***)0xc8;
          }
          else {
            ppplVar19 = (long ***)ppuStack_290;
            do {
              pplVar13 = ppplVar19[1];
              ppplVar26 = ppplVar19 + 2;
              ppplVar19 = ppplVar19 + 3;
              lVar23 = (long)*ppplVar26 << 5;
              while (lVar23 != 0) {
                ppplVar26 = (long ***)pplVar13[2];
                pplVar24 = pplVar13 + 3;
                pplVar13 = pplVar13 + 4;
                lVar23 = lVar23 + -0x20;
                if ((long ***)*pplVar24 != (long ***)0x3e9d73346e825fc1 ||
                    ppplVar26 != (long ***)0x7b0bcfb60430d2c8) {
                  uVar10 = (ulong)ppplVar26 >> 8;
                  ppplVar25 = (long ***)*pplVar24;
                  goto LAB_1011df210;
                }
              }
              ppplVar26 = (long ***)0xc8;
            } while (ppplVar19 != (long ***)(ppuStack_290 + (long)ppuStack_288 * 3));
          }
        }
        else {
          uVar10 = (ulong)ppuStack_2c0 >> 8;
          ppplVar25 = (long ***)ppuStack_2b8;
          ppplVar26 = (long ***)ppuStack_2c0;
        }
LAB_1011df210:
        if (ppplVar25 != (long ***)0x3e9d73346e825fc1 ||
            ((ulong)ppplVar26 & 0xff | uVar10 << 8) != 0x7b0bcfb60430d2c8) {
          ppuStack_2d8 = ppuStack_2c8;
          ppuStack_2d0 = ppuStack_2c0;
          ppuStack_2c8 = ppuStack_2b8;
          ppuStack_2c0 = ppuStack_2b0;
          ppuStack_2b8 = ppuStack_2a8;
          ppuStack_2b0 = ppuStack_2a0;
          ppuStack_2a8 = ppuStack_298;
          ppuStack_2a0 = ppuStack_290;
          ppuStack_298 = ppuStack_288;
          ppuStack_290 = ppuStack_280;
          ppuStack_288 = ppuStack_278;
          ppuStack_278 = ppuStack_268;
          ppuStack_280 = ppuStack_270;
          pppplVar21 = (long ****)&ppuStack_2d8;
          func_0x000100729744(&pppplStack_260,auVar27._8_8_,ppuVar3,ppuVar4,&ppuStack_2d8);
          if (pppplStack_260 != (long ****)0x2) {
            FUN_100e3ac9c(&pppplStack_260);
          }
          pppuStack_2f8 = (ulong ***)&UNK_108cb0343;
          puStack_2f0 = (undefined *)0x5;
          ppuStack_2d8 = (ulong **)0x0;
          ppuStack_2d0 = (ulong **)
                         CONCAT35((int3)(uVar10 >> 0x20),CONCAT41((int)uVar10,(char)ppplVar26));
          ppuStack_2c0 = (ulong **)0x7b0bcfb60430d2c8;
          ppuStack_2b8 = (ulong **)0x3e9d73346e825fc1;
          pppplStack_260 = (long ****)&pppuStack_2f8;
          puStack_258 = &DAT_100c7b3a0;
          puStack_248 = &
                        __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
          ;
          ppuStack_2c8 = (ulong **)ppplVar25;
          pppuStack_250 = (ulong ***)pppplVar21;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__Mismatch_between_definition_and_108ac57ee,&pppplStack_260,&UNK_10b21f750);
LAB_1011df498:
          puStack_248 = (undefined *)uStack_2e0;
          pppuStack_250 = (ulong ***)uStack_2e8;
          pppplStack_260 = pppplVar21;
          puStack_258 = puVar22;
          func_0x000108a07a3c(&UNK_108cab14c,99,&pppplStack_260,&UNK_10b234e40,&UNK_10b21f768);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1011df4d4);
          (*pcVar7)();
        }
        ppuStack_2c0 = ppuStack_290 + (long)ppuStack_288 * 3;
        ppuStack_2d8 = ppuStack_290;
        ppuStack_2d0 = ppuStack_290;
        ppuStack_2c8 = ppuStack_298;
        ppuStack_2b8 = (ulong **)0x0;
        ppuStack_298 = (ulong **)0x0;
        if ((long ***)ppuStack_2b0 != (long ***)0x0) {
          _free();
        }
        if ((long ***)ppuStack_270 != (long ***)0x0) {
          ppplVar25 = (long ***)0x0;
          do {
            ppplVar26 = (long ***)(ppuVar6 + (long)ppplVar25 * 3);
            pplVar13 = ppplVar26[1];
            pplVar24 = ppplVar26[2];
            if (pplVar24 != (long **)0x0) {
              pplVar20 = pplVar13 + 1;
              do {
                if (pplVar20[-1] != (long *)0x0) {
                  _free(*pplVar20);
                }
                pplVar20 = pplVar20 + 3;
                pplVar24 = (long **)((long)pplVar24 + -1);
              } while (pplVar24 != (long **)0x0);
            }
            if (*ppplVar26 != (long **)0x0) {
              _free(pplVar13);
            }
            ppplVar25 = (long ***)((long)ppplVar25 + 1);
          } while (ppplVar25 != (long ***)ppuStack_270);
        }
        if ((long ***)ppuVar5 != (long ***)0x0) {
          _free(ppuVar6);
        }
        FUN_1006c2cdc(&pppuStack_2f8,&ppuStack_2d8);
        puVar22 = puStack_2f0;
        pppplVar21 = (long ****)pppuStack_2f8;
        if ((long ****)pppuStack_2f8 != (long ****)0x0) {
          pppuStack_1f0 = pppuStack_2f8;
          puStack_1e8 = puStack_2f0;
          (**(code **)(puStack_2f0 + 0x18))
                    (&pppplStack_260,
                     (undefined *)
                     ((long)pppuStack_2f8 +
                     (*(long *)(puStack_2f0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10));
          if (puStack_258 != (undefined *)0x3e9d73346e825fc1 ||
              pppplStack_260 != (long ****)0x7b0bcfb60430d2c8) goto LAB_1011df498;
          if (*pppplVar21 == (long ***)0x1) {
            *pppplVar21 = in_xzr;
            DataMemoryBarrier(2,1);
            uVar16 = *(undefined1 *)(pppplVar21 + 2);
            if (pppplVar21 != (long ****)0xffffffffffffffff) {
              ppplVar25 = pppplVar21[1];
              pppplVar21[1] = (long ***)((long)ppplVar25 + -1);
              LORelease();
              if (ppplVar25 == (long ***)0x1) {
                DataMemoryBarrier(2,1);
                _free(pppplVar21);
              }
            }
          }
          else {
            uVar16 = *(undefined1 *)(pppplVar21 + 2);
            ppplVar25 = *pppplVar21;
            *pppplVar21 = (long ***)((long)ppplVar25 + -1);
            LORelease();
            if (ppplVar25 == (long ***)0x1) {
              DataMemoryBarrier(2,1);
              FUN_100f41048(pppplVar21);
            }
          }
          FUN_100d74934(&ppuStack_2d8);
          uVar17 = 0;
          puVar12[1] = uVar16;
          goto LAB_1011df3bc;
        }
        FUN_100d74934(&ppuStack_2d8);
      }
      uVar18 = FUN_10072aa8c(9,&UNK_108cd4204,0x37);
      *(undefined8 *)(puVar12 + 8) = uVar18;
      uVar17 = 1;
LAB_1011df3bc:
      *puVar12 = uVar17;
      return;
    }
    param_2[0xd] = param_2[1];
    param_2[0xc] = *param_2;
    param_2[0xf] = param_2[3];
    param_2[0xe] = param_2[2];
    param_2[0x11] = param_2[5];
    param_2[0x10] = param_2[4];
    param_2[0x12] = param_2[6];
    unaff_x23 = param_2 + 0x13;
    param_2[0x14] = param_2[8];
    param_2[0x13] = param_2[7];
    param_2[0x16] = param_2[10];
    param_2[0x15] = param_2[9];
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      unaff_x22 = (long *)&
                          __ZN81__LT__LP__RP__u20_as_u20_rama_socks5__server__bind__Socks5BinderSeal_LT_S_GT__GT_11accept_bind28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7650aa83f1c3ca71E
      ;
      uVar14 = (uint)bRam000000010b639910;
      if (1 < bRam000000010b639910 - 1) goto LAB_1011dec6c;
      goto LAB_1011deb3c;
    }
    goto LAB_1011dec70;
  }
  if (bVar2 != 3) {
    func_0x000108a07b10(&UNK_10b24b420);
    uVar14 = extraout_w1;
LAB_1011dec6c:
    if ((uVar14 == 0) ||
       (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN81__LT__LP__RP__u20_as_u20_rama_socks5__server__bind__Socks5BinderSeal_LT_S_GT__GT_11accept_bind28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7650aa83f1c3ca71E
                          ), cVar8 == '\0')) {
LAB_1011dec70:
      lVar23 = 
      ___ZN81__LT__LP__RP__u20_as_u20_rama_socks5__server__bind__Socks5BinderSeal_LT_S_GT__GT_11accept_bind28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7650aa83f1c3ca71E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_160 = *(undefined8 *)
                      (
                      ___ZN81__LT__LP__RP__u20_as_u20_rama_socks5__server__bind__Socks5BinderSeal_LT_S_GT__GT_11accept_bind28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7650aa83f1c3ca71E
                      + 0x20);
        uStack_158 = *(undefined8 *)
                      (
                      ___ZN81__LT__LP__RP__u20_as_u20_rama_socks5__server__bind__Socks5BinderSeal_LT_S_GT__GT_11accept_bind28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7650aa83f1c3ca71E
                      + 0x28);
        uStack_168 = 4;
        puVar22 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar22 = &UNK_10b3c24c8;
        }
        puVar1 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar22 + 0x18))(puVar1,&uStack_168);
        if (iVar9 != 0) {
          lStack_138 = ___ZN81__LT__LP__RP__u20_as_u20_rama_socks5__server__bind__Socks5BinderSeal_LT_S_GT__GT_11accept_bind28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7650aa83f1c3ca71E
                       + 0x30;
          puStack_100 = (undefined8 *)&UNK_108cd4188;
          uStack_f8 = 99;
          puStack_e8 = param_2 + 0x16;
          ppuStack_130 = &puStack_100;
          ppppuStack_128 = (undefined8 ****)&UNK_10b208fd0;
          ppuStack_120 = &puStack_f0;
          puStack_118 = &UNK_10b224058;
          ppuStack_110 = &puStack_e8;
          puStack_108 = &UNK_10b21ec38;
          pppuStack_148 = &ppuStack_130;
          uStack_150 = 1;
          uStack_140 = 3;
          uStack_a8 = uStack_160;
          uStack_b0 = uStack_168;
          uStack_a0 = uStack_158;
          ppuStack_c0 = *(undefined8 ***)(lVar23 + 0x60);
          puStack_b8 = *(undefined **)(lVar23 + 0x68);
          puStack_d8 = *(undefined **)(lVar23 + 0x50);
          ppuStack_d0 = *(undefined8 ***)(lVar23 + 0x58);
          pppuStack_e0 = (undefined8 ***)0x1;
          if (puStack_d8 == (undefined *)0x0) {
            pppuStack_e0 = (undefined8 ***)0x2;
          }
          uStack_98 = *(undefined4 *)(lVar23 + 8);
          uStack_94 = *(undefined4 *)(lVar23 + 0xc);
          puStack_80 = &uStack_150;
          uStack_78 = 1;
          ppuStack_70 = &puStack_80;
          puStack_68 = &DAT_1061c2098;
          puStack_c8 = (undefined *)0x1;
          if (ppuStack_c0 == (undefined8 **)0x0) {
            puStack_c8 = (undefined *)0x2;
          }
          pppuStack_88 = &ppuStack_70;
          pcStack_90 = s__108b39f4f;
          puStack_f0 = unaff_x23;
          (**(code **)(puVar22 + 0x20))(puVar1,&pppuStack_e0);
        }
      }
    }
    else {
LAB_1011deb3c:
      uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x22);
      if ((uVar10 & 1) == 0) goto LAB_1011dec70;
      puStack_118 = (undefined *)(*unaff_x22 + 0x30);
      ppuStack_70 = (undefined8 **)&UNK_108cd4188;
      puStack_68 = (undefined *)0x63;
      puStack_80 = param_2 + 0x16;
      pppuStack_e0 = &ppuStack_70;
      puStack_d8 = &UNK_10b208fd0;
      ppuStack_d0 = &puStack_100;
      puStack_c8 = &UNK_10b224058;
      ppuStack_c0 = &puStack_80;
      puStack_b8 = &UNK_10b21ec38;
      ppppuStack_128 = &pppuStack_e0;
      ppuStack_130 = (undefined8 **)0x1;
      ppuStack_120 = (undefined8 **)0x3;
      puStack_100 = unaff_x23;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x22,&ppuStack_130);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        lVar23 = *unaff_x22;
        pppuStack_148 = *(undefined8 ****)(lVar23 + 0x20);
        uStack_140 = *(undefined8 *)(lVar23 + 0x28);
        uStack_150 = 4;
        puVar22 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar22 = &UNK_10b3c24c8;
        }
        puVar1 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar22 + 0x18))(puVar1,&uStack_150);
        if (iVar9 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar23,puVar1,puVar22,&uStack_150,&ppuStack_130);
        }
      }
    }
    *(undefined1 *)((long)param_2 + 0xda) = 0;
    *(undefined1 *)(param_2 + 0x1b) = 7;
    param_2[0x19] = 0;
    param_2[0x18] = 0;
    param_2[0x17] = 0x1a;
    *(undefined2 *)(param_2 + 0x1a) = 0;
    param_2[0x1c] = param_2 + 0x17;
    param_2[0x1d] = param_2 + 0xc;
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  auVar27 = func_0x0001006f34b4(param_2 + 0x1c,param_3);
  pppuVar15 = auVar27._8_8_;
  if ((auVar27._0_8_ & 1) != 0) {
    *param_1 = 5;
    uVar16 = 3;
    goto LAB_1011deff8;
  }
  if (*(char *)(param_2 + 0x1f) == '\x06') {
    plVar11 = (long *)param_2[0x26];
    if (((ulong)plVar11 & 1) == 0) {
      lVar23 = plVar11[4];
      plVar11[4] = lVar23 + -1;
      LORelease();
      if (lVar23 == 1) {
        if (*plVar11 != 0) {
          _free(plVar11[1]);
        }
        goto LAB_1011dee98;
      }
    }
    else if (param_2[0x25] + ((ulong)plVar11 >> 5) != 0) {
      plVar11 = (long *)(param_2[0x23] - ((ulong)plVar11 >> 5));
LAB_1011dee98:
      _free(plVar11);
    }
  }
  if (pppuVar15 == (undefined8 ***)0x0) {
    if ((*(byte *)(param_2 + 0x17) != 0x1a) && (0x18 < *(byte *)(param_2 + 0x17))) {
      lVar23 = *(long *)param_2[0x18];
      *(long *)param_2[0x18] = lVar23 + -1;
      LORelease();
      if (lVar23 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if ((*(byte *)(param_2 + 0x13) != 0x1a) && (0x18 < *(byte *)(param_2 + 0x13))) {
      lVar23 = *(long *)param_2[0x14];
      *(long *)param_2[0x14] = lVar23 + -1;
      LORelease();
      if (lVar23 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    FUN_100deb62c(param_2 + 0xc);
    func_0x000100e3c8d4(param_2 + 0x10);
    uVar16 = 0;
    plVar11 = (long *)0x0;
    uVar18 = 2;
  }
  else {
    pppuStack_e0 = pppuVar15;
    plVar11 = (long *)_malloc(8);
    if (plVar11 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1011df02c);
      (*pcVar7)();
    }
    *plVar11 = (long)pppuVar15;
    if ((*(byte *)(param_2 + 0x17) != 0x1a) && (0x18 < *(byte *)(param_2 + 0x17))) {
      lVar23 = *(long *)param_2[0x18];
      *(long *)param_2[0x18] = lVar23 + -1;
      LORelease();
      if (lVar23 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if ((*(byte *)(param_2 + 0x13) != 0x1a) && (0x18 < *(byte *)(param_2 + 0x13))) {
      lVar23 = *(long *)param_2[0x14];
      *(long *)param_2[0x14] = lVar23 + -1;
      LORelease();
      if (lVar23 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    FUN_100deb62c(param_2 + 0xc);
    func_0x000100e3c8d4(param_2 + 0x10);
    uVar18 = 0;
    uVar16 = 1;
  }
  *param_1 = uVar18;
  param_1[1] = &UNK_108cd41b9;
  param_1[2] = 0x1b;
  *(undefined1 *)(param_1 + 3) = uVar16;
  param_1[4] = &UNK_108cd41d4;
  param_1[5] = 0x30;
  uVar16 = 1;
  param_1[6] = plVar11;
  param_1[7] = &UNK_10b40cd80;
LAB_1011deff8:
  *(undefined1 *)(param_2 + 0x2c) = uVar16;
  return;
}

