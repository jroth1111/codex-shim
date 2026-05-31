
/* WARNING: Possible PIC construction at 0x0001016046fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101604700) */
/* WARNING: Removing unreachable block (ram,0x000101604a68) */
/* WARNING: Removing unreachable block (ram,0x00010160470c) */
/* WARNING: Removing unreachable block (ram,0x000101604748) */
/* WARNING: Removing unreachable block (ram,0x0001016045d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101603758(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long **pplVar10;
  code *pcVar11;
  undefined1 *puVar12;
  undefined8 uVar14;
  long *plVar15;
  undefined1 (*pauVar16) [16];
  long *plVar17;
  long *plVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long lVar21;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined1 extraout_w9_02;
  undefined1 extraout_w9_03;
  undefined1 extraout_w9_04;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  undefined *puVar26;
  ulong uVar27;
  long *unaff_x21;
  long *unaff_x23;
  long *plVar28;
  undefined *puVar29;
  long **pplVar30;
  long unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar31 [16];
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  undefined1 auStack_258 [16];
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 auStack_208 [24];
  long lStack_1f0;
  undefined1 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 auStack_1a8 [16];
  long alStack_198 [2];
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  long *plStack_98;
  long lStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined1 *puVar13;
  
  auVar9._8_8_ = auStack_258._8_8_;
  auVar9._0_8_ = auStack_258._0_8_;
  auVar8._8_8_ = auStack_258._8_8_;
  auVar8._0_8_ = auStack_258._0_8_;
  puVar29 = *(undefined **)(param_2 + 0x20);
  if (*(undefined **)(param_2 + 0x28) < puVar29) {
    plVar28 = &uStack_e0;
    pplVar30 = &plStack_1e0;
    lVar22 = *(long *)(param_2 + 0x18);
    plVar18 = (long *)(*(undefined **)(param_2 + 0x28) + 5);
    while (bVar3 = *(byte *)((long)plVar18 + lVar22 + -5),
          bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0) {
      *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -4);
      plVar18 = (long *)((long)plVar18 + 1);
      if ((long)plVar18 - (long)puVar29 == 5) goto LAB_1016037e4;
    }
    uVar25 = (uint)bVar3;
    if (bVar3 < 0x66) {
      if (bVar3 == 0x22) {
        *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -4);
        *(undefined8 *)(param_2 + 0x10) = 0;
        __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                  (&uStack_e0,(long *)(param_2 + 0x18),param_2);
        if (uStack_e0 == (long *)0x2) {
          *param_1 = 0x8000000000000005;
          param_1[1] = plStack_d8;
          return;
        }
        if (plStack_d0 == (long *)0x0) {
          plVar17 = (long *)0x1;
        }
        else {
          plVar17 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_d0,1);
          if (plVar17 == (long *)0x0) {
            uVar14 = func_0x0001087c9084(1,plStack_d0);
            auVar5._8_8_ = plStack_d8;
            auVar5._0_8_ = uVar14;
            if (unaff_x26 != 0) {
              _free();
            }
            FUN_100e8442c(&plStack_1e0);
            __Unwind_Resume(uVar14);
            uVar14 = 0x1016043b4;
            auVar31 = func_0x000108a07bc4();
            pplVar10 = &plStack_270;
            plVar18 = plStack_d0;
            puVar12 = (undefined1 *)register0x00000008;
            goto SUB_1016043b4;
          }
        }
        _memcpy(plVar17,plStack_d8,plStack_d0);
        uVar23 = (ulong)plStack_d0 & 0xffffffffffffff00;
        plVar28 = (long *)0x8000000000000003;
        plVar18 = plStack_d0;
        goto LAB_101603fb0;
      }
      if (bVar3 != 0x2d) {
        if (uVar25 != 0x5b) goto LAB_101603a40;
        plVar28 = (long *)0x8000000000000005;
        cVar4 = *(char *)(param_2 + 0x48) + -1;
        *(char *)(param_2 + 0x48) = cVar4;
        if (cVar4 == '\0') {
          uStack_e0 = (long *)0x18;
          uVar14 = FUN_108831e8c(param_2,&uStack_e0);
          *param_1 = 0x8000000000000005;
          param_1[1] = uVar14;
          return;
        }
        *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -4);
        uStack_80 = 1;
        plStack_1e0 = (long *)0x0;
        plStack_1d8 = (long *)0x8;
        plStack_1d0 = (long *)0x0;
        lStack_88 = param_2;
        goto LAB_101603934;
      }
      *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -4);
      FUN_1006523cc(&plStack_130,param_2,0);
      if (plStack_130 == (long *)0x3) {
        *param_1 = 0x8000000000000005;
        param_1[1] = plStack_128;
        return;
      }
      plVar28 = (long *)0x8000000000000002;
      if (plStack_130 == (long *)0x0) {
        plStack_130 = (long *)((ulong)plStack_128 & 0x7fffffffffffffff);
        if (plStack_130 < (long *)0x7ff0000000000000) {
          uStack_e0 = (long *)0x8000000000000000;
          FUN_100de6690(&uStack_e0);
          plStack_130 = extraout_x8_01;
          plVar18 = (long *)0x2;
        }
        else {
          plVar18 = (long *)0x3;
          plVar28 = (long *)0x8000000000000000;
        }
      }
      else {
        plVar18 = (long *)0x0;
        if (plStack_130 != (long *)0x1) {
          plVar18 = (long *)((ulong)plStack_128 >> 0x3f);
        }
      }
LAB_101603fac:
      uVar23 = 0;
      plStack_d0 = plStack_130;
      plVar17 = plStack_128;
      goto LAB_101603fb0;
    }
    plVar17 = unaff_x21;
    if (uVar25 == 0x73 || bVar3 < 0x73) {
      if (uVar25 == 0x66) {
        puVar26 = (undefined *)((long)plVar18 + -4);
        *(undefined **)(param_2 + 0x28) = puVar26;
        puVar1 = puVar26;
        if (puVar26 <= puVar29) {
          puVar1 = puVar29;
        }
        if (puVar29 <= puVar26) goto LAB_101603bc8;
        cVar4 = *(char *)((long)plVar18 + lVar22 + -4);
        *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -3);
        if (cVar4 == 'a') {
          if ((undefined *)((long)plVar18 + -3) == puVar1) goto LAB_101603bc8;
          cVar4 = *(char *)((long)plVar18 + lVar22 + -3);
          *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -2);
          if (cVar4 == 'l') {
            if ((undefined *)((long)plVar18 + -2) == puVar1) goto LAB_101603bc8;
            cVar4 = *(char *)((long)plVar18 + lVar22 + -2);
            *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -1);
            if (cVar4 == 's') {
              if ((undefined *)((long)plVar18 + -1) == puVar1) goto LAB_101603bc8;
              cVar4 = *(char *)((long)plVar18 + lVar22 + -1);
              *(long **)(param_2 + 0x28) = plVar18;
              if (cVar4 == 'e') {
                uVar23 = 0;
                plVar28 = (long *)0x8000000000000001;
                plStack_d0 = plVar18;
                plVar18 = (long *)0x0;
                auStack_258 = auVar9;
                goto LAB_101603fb0;
              }
            }
          }
        }
      }
      else {
        if (uVar25 != 0x6e) goto LAB_101603a40;
        puVar26 = (undefined *)((long)plVar18 + -4);
        *(undefined **)(param_2 + 0x28) = puVar26;
        puVar1 = puVar26;
        if (puVar26 <= puVar29) {
          puVar1 = puVar29;
        }
        if (puVar29 <= puVar26) goto LAB_101603bc8;
        cVar4 = *(char *)((long)plVar18 + lVar22 + -4);
        *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -3);
        if (cVar4 == 'u') {
          if ((undefined *)((long)plVar18 + -3) == puVar1) goto LAB_101603bc8;
          cVar4 = *(char *)((long)plVar18 + lVar22 + -3);
          *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -2);
          if (cVar4 != 'l') goto LAB_1016041ec;
          if ((undefined *)((long)plVar18 + -2) == puVar1) goto LAB_101603bc8;
          cVar4 = *(char *)((long)plVar18 + lVar22 + -2);
          *(long **)(param_2 + 0x28) = (long *)((long)plVar18 + -1);
          if (cVar4 == 'l') {
            uVar23 = 0;
            plVar28 = (long *)0x8000000000000000;
            plStack_d0 = (long *)((long)plVar18 + -1);
            plVar18 = (long *)0x0;
            auStack_258 = auVar8;
            goto LAB_101603fb0;
          }
        }
      }
    }
    else {
      if (uVar25 != 0x74) {
        if (uVar25 != 0x7b) {
LAB_101603a40:
          if (uVar25 - 0x30 < 10) {
            FUN_1006523cc(&plStack_130,param_2,1);
            if (plStack_130 == (long *)0x3) {
              *param_1 = 0x8000000000000005;
              param_1[1] = plStack_128;
              return;
            }
            plVar28 = (long *)0x8000000000000002;
            if (plStack_130 == (long *)0x2) {
              plVar18 = (long *)((ulong)plStack_128 >> 0x3f);
            }
            else if (plStack_130 == (long *)0x1) {
              plVar18 = (long *)0x0;
            }
            else {
              plStack_130 = (long *)0x8000000000000000;
              if (((ulong)plStack_128 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                uStack_e0 = (long *)0x8000000000000000;
                FUN_100de6690(&uStack_e0);
                plStack_130 = extraout_x8_02;
                plVar18 = (long *)0x2;
              }
              else {
                plVar18 = (long *)0x3;
                plVar28 = (long *)0x8000000000000000;
              }
            }
            goto LAB_101603fac;
          }
          uStack_e0 = (long *)0xa;
          plVar18 = (long *)FUN_108831e8c(param_2,&uStack_e0);
          auVar6._8_8_ = auStack_a8._8_8_;
          auVar6._0_8_ = auStack_a8._0_8_;
          goto LAB_101604248;
        }
        cVar4 = *(char *)(param_2 + 0x48) + -1;
        *(char *)(param_2 + 0x48) = cVar4;
        if (cVar4 == '\0') {
          uStack_e0 = (long *)0x18;
          goto LAB_1016037e8;
        }
        *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -4);
        uStack_1e8 = 1;
        lStack_1f0 = param_2;
        FUN_1011ddbc4(&uStack_e0,&lStack_1f0);
        lVar22 = lStack_1f0;
        plVar18 = plStack_d8;
        if ((char)uStack_e0 != '\x01') {
          if (uStack_e0._1_1_ != '\x01') {
            pauVar16 = (undefined1 (*) [16])
                       (*
                       ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                       )();
            if (pauVar16[1][0] == '\x01') {
              auStack_208._0_16_ = *pauVar16;
            }
            else {
              auStack_208._0_16_ = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar16 + 8) = auStack_208._8_8_;
              pauVar16[1][0] = 1;
            }
            *(long *)*pauVar16 = auStack_208._0_8_ + 1;
            plStack_240 = (long *)0x0;
            plStack_238 = (long *)0x8;
            plStack_230 = (long *)0x0;
            plStack_220 = (long *)0x0;
            plStack_228 = (long *)&UNK_108c56c70;
            plStack_210 = (long *)0x0;
            plStack_218 = (long *)0x0;
            goto LAB_101603e5c;
          }
          *(long *)(lStack_1f0 + 0x28) = *(long *)(lStack_1f0 + 0x28) + 1;
          *(undefined8 *)(lStack_1f0 + 0x10) = 0;
          __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                    (&uStack_e0,lStack_1f0 + 0x18,lStack_1f0);
          plVar18 = plStack_d8;
          if ((uStack_e0 != (long *)0x2) &&
             (FUN_1011de82c(&plStack_130,plStack_d8,plStack_d0), plVar17 = plStack_120,
             plVar18 = plStack_128, plVar28 = plStack_130, plStack_130 != (long *)0x8000000000000001
             )) {
            if (plStack_130 == (long *)0x8000000000000000) {
              func_0x0001011de054(&uStack_e0,lVar22);
              plVar28 = plStack_d8;
              plVar18 = uStack_e0;
              if (uStack_e0 == (long *)0x0) {
                plStack_240 = (long *)0x8000000000000005;
                plStack_238 = plStack_d8;
              }
              else {
                plStack_130 = uStack_e0;
                plStack_128 = plStack_d8;
                plStack_120 = (long *)0x0;
                plStack_118 = (long *)0x0;
                plStack_110 = uStack_e0;
                plStack_108 = plStack_d8;
                FUN_10064dc08(&uStack_e0,&plStack_130);
                if (uStack_e0 == (long *)0x8000000000000005) {
                  plStack_238 = (long *)FUN_108855ec0(plStack_d8);
                  plStack_240 = (long *)0x8000000000000005;
                }
                else {
                  plStack_218 = plStack_b8;
                  plStack_220 = plStack_c0;
                  auStack_208._0_8_ = auStack_a8._0_8_;
                  plStack_210 = plStack_b0;
                  auStack_208._8_8_ = auStack_a8._8_8_;
                  plStack_238 = plStack_d8;
                  plStack_240 = uStack_e0;
                  plStack_228 = plStack_c8;
                  plStack_230 = plStack_d0;
                }
                if (plVar28 != (long *)0x0) {
                  _free(plVar18);
                }
              }
              goto LAB_101603e5c;
            }
            if (plStack_130 != (long *)0x8000000000000002) {
              auStack_1a8 = FUN_100c3a768();
              plStack_1e0 = (long *)0x0;
              plStack_1d8 = (long *)0x8;
              plStack_1c0 = (long *)0x0;
              plStack_1c8 = (long *)&UNK_108c56c70;
              plStack_1b0 = (long *)0x0;
              plStack_1b8 = (long *)0x0;
              plStack_1d0 = (long *)0x0;
              plStack_180 = plVar28;
              plStack_178 = plVar18;
              plStack_170 = plVar17;
              FUN_100623c50(&plStack_240,&lStack_1f0);
              if (plStack_240 != (long *)0x8000000000000005) {
                FUN_101497a9c(&uStack_e0,&plStack_1e0,&plStack_180,&plStack_240);
                plStack_128 = plStack_d0;
                plStack_130 = plStack_d8;
                plStack_118 = plStack_c0;
                plStack_120 = plStack_c8;
                plStack_108 = plStack_b0;
                plStack_110 = plStack_b8;
                plStack_f8 = (long *)auStack_a8._8_8_;
                plStack_100 = (long *)auStack_a8._0_8_;
                plStack_f0 = plStack_98;
                if (plStack_d8 != (long *)0x8000000000000005) {
                  FUN_100de6690(&plStack_130);
                }
                goto LAB_101604098;
              }
              if (plVar28 != (long *)0x0) {
                _free(plVar18);
              }
              goto LAB_101604224;
            }
          }
        }
        plStack_240 = (long *)0x8000000000000005;
        plStack_238 = plVar18;
        goto LAB_101603e5c;
      }
      puVar26 = (undefined *)((long)plVar18 + -4);
      *(undefined **)(param_2 + 0x28) = puVar26;
      puVar1 = puVar26;
      if (puVar26 <= puVar29) {
        puVar1 = puVar29;
      }
      if (puVar29 <= puVar26) {
LAB_101603bc8:
        uStack_e0 = (long *)0x5;
        goto LAB_101603bcc;
      }
      cVar4 = *(char *)((long)plVar18 + lVar22 + -4);
      *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -3);
      if (cVar4 == 'r') {
        if ((undefined *)((long)plVar18 + -3) == puVar1) goto LAB_101603bc8;
        cVar4 = *(char *)((long)plVar18 + lVar22 + -3);
        *(undefined **)(param_2 + 0x28) = (undefined *)((long)plVar18 + -2);
        if (cVar4 != 'u') goto LAB_1016041ec;
        if ((undefined *)((long)plVar18 + -2) == puVar1) goto LAB_101603bc8;
        cVar4 = *(char *)((long)plVar18 + lVar22 + -2);
        plStack_d0 = (long *)((long)plVar18 + -1);
        *(long **)(param_2 + 0x28) = plStack_d0;
        if (cVar4 == 'e') {
          uVar23 = 0;
          plVar28 = (long *)0x8000000000000001;
          plVar18 = (long *)0x1;
          goto LAB_101603fb0;
        }
      }
    }
LAB_1016041ec:
    uStack_e0 = (long *)0x9;
LAB_101603bcc:
    uVar14 = FUN_10883295c(param_2,&uStack_e0);
    goto LAB_1016037f8;
  }
LAB_1016037e4:
  uStack_e0 = (long *)0x5;
LAB_1016037e8:
  uVar14 = FUN_108831e8c(param_2,&uStack_e0);
  goto LAB_1016037f8;
SUB_1016043b4:
  auVar8 = auVar31;
  puVar13 = (undefined1 *)pplVar10;
  lVar22 = auVar8._8_8_;
  puVar19 = auVar8._0_8_;
  *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
  *(undefined **)(puVar13 + -0x58) = unaff_x27;
  *(long *)(puVar13 + -0x50) = unaff_x26;
  *(long ***)(puVar13 + -0x48) = pplVar30;
  *(long **)(puVar13 + -0x40) = plVar28;
  *(long **)(puVar13 + -0x38) = unaff_x23;
  *(long **)(puVar13 + -0x30) = plVar18;
  *(long **)(puVar13 + -0x28) = unaff_x21;
  *(long *)(puVar13 + -0x20) = auVar5._8_8_;
  *(long *)(puVar13 + -0x18) = auVar5._0_8_;
  *(undefined1 **)(puVar13 + -0x10) = puVar12 + -0x10;
  *(undefined8 *)(puVar13 + -8) = uVar14;
  uVar23 = *(ulong *)(lVar22 + 0x20);
  if (uVar23 <= *(ulong *)(lVar22 + 0x28)) {
LAB_10160443c:
    uVar14 = 5;
LAB_101604440:
    *(undefined8 *)(puVar13 + -0x120) = uVar14;
    uVar14 = FUN_108831e8c(lVar22,puVar13 + -0x120);
LAB_101604450:
    *(undefined8 *)(puVar19 + 8) = uVar14;
LAB_1016048fc:
    *puVar19 = 0x16;
    return;
  }
  pplVar30 = (long **)(puVar13 + -0xc0);
  lVar24 = *(long *)(lVar22 + 0x18);
  lVar21 = *(ulong *)(lVar22 + 0x28) + 5;
  while (bVar3 = *(byte *)(lVar24 + lVar21 + -5),
        bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0) {
    *(long *)(lVar22 + 0x28) = lVar21 + -4;
    lVar21 = lVar21 + 1;
    if (lVar21 - uVar23 == 5) goto LAB_10160443c;
  }
  uVar25 = (uint)bVar3;
  if (bVar3 < 0x66) {
    if (bVar3 == 0x22) {
      *(long *)(lVar22 + 0x28) = lVar21 + -4;
      *(undefined8 *)(lVar22 + 0x10) = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (puVar13 + -0x120,(long *)(lVar22 + 0x18),lVar22);
      unaff_x21 = *(long **)(puVar13 + -0x118);
      if (*(ulong *)(puVar13 + -0x120) != 2) {
        plVar18 = *(long **)(puVar13 + -0x110);
        if ((*(ulong *)(puVar13 + -0x120) & 1) == 0) {
          uVar25 = 0xd;
          unaff_x23 = plVar18;
          uVar20 = extraout_w9_00;
          goto LAB_101604a8c;
        }
        if (plVar18 == (long *)0x0) {
          unaff_x23 = (long *)0x1;
        }
        else {
          unaff_x23 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plVar18,1);
          if (unaff_x23 == (long *)0x0) {
            func_0x0001087c9084(1,plVar18);
            uVar25 = extraout_w8;
            goto LAB_1016049fc;
          }
        }
        _memcpy(unaff_x23,unaff_x21,plVar18);
        uVar25 = 0xc;
        unaff_x21 = plVar18;
        uVar20 = extraout_w9_04;
        goto LAB_101604a8c;
      }
      *(long **)(puVar19 + 8) = unaff_x21;
      goto LAB_1016048fc;
    }
    if (bVar3 == 0x2d) {
      *(long *)(lVar22 + 0x28) = lVar21 + -4;
      FUN_1006523cc(puVar13 + -0x120,lVar22,0);
      lVar22 = *(long *)(puVar13 + -0x120);
joined_r0x0001016048f0:
      if (lVar22 != 3) {
        uVar20 = 10;
        uVar25 = 0x8040aU >> (ulong)(((uint)lVar22 & 3) << 3) & 0xe;
        unaff_x21 = *(long **)(puVar13 + -0x118);
        goto LAB_101604a8c;
      }
      *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar13 + -0x118);
      goto LAB_1016048fc;
    }
    if (uVar25 != 0x5b) goto LAB_101604780;
    cVar4 = *(char *)(lVar22 + 0x48) + -1;
    *(char *)(lVar22 + 0x48) = cVar4;
    if (cVar4 == '\0') goto LAB_101604aec;
    *(long *)(lVar22 + 0x28) = lVar21 + -4;
    FUN_1013f06d4(puVar13 + -0xa0,lVar22,1);
    *(char *)(lVar22 + 0x48) = *(char *)(lVar22 + 0x48) + '\x01';
    plVar28 = (long *)FUN_10065474c(lVar22);
    *(undefined8 *)(puVar13 + -0x118) = *(undefined8 *)(puVar13 + -0x98);
    *(undefined8 *)(puVar13 + -0x120) = *(undefined8 *)(puVar13 + -0xa0);
    *(undefined8 *)(puVar13 + -0x108) = *(undefined8 *)(puVar13 + -0x88);
    *(undefined8 *)(puVar13 + -0x110) = *(undefined8 *)(puVar13 + -0x90);
    *(long **)(puVar13 + -0x100) = plVar28;
    bVar3 = puVar13[-0x120];
    unaff_x21 = plVar28;
    if (bVar3 == 0x16) {
      unaff_x21 = *(long **)(puVar13 + -0x118);
      uVar20 = extraout_w9;
      if (plVar28 != (long *)0x0) {
        lVar21 = *plVar28;
        if (lVar21 == 1) {
          FUN_100de21d4(plVar28 + 1);
        }
        else {
LAB_1016049a0:
          if ((lVar21 == 0) && (plVar28[2] != 0)) {
            _free(plVar28[1]);
          }
        }
LAB_101604a50:
        _free(plVar28);
        uVar20 = extraout_w9_03;
      }
      goto LAB_101604a58;
    }
LAB_1016049b8:
    uVar25 = (uint)bVar3;
    if (unaff_x21 != (long *)0x0) {
      FUN_100e077ec(puVar13 + -0x120);
      uVar25 = 0x16;
      uVar20 = extraout_w9_02;
      goto LAB_101604a5c;
    }
LAB_1016049fc:
    uVar20 = puVar13[-0x11f];
    *(undefined4 *)(puVar13 + -0x168) = *(undefined4 *)(puVar13 + -0x11e);
    *(undefined2 *)(puVar13 + -0x164) = *(undefined2 *)(puVar13 + -0x11a);
    unaff_x21 = *(long **)(puVar13 + -0x118);
    unaff_x23 = *(long **)(puVar13 + -0x110);
    plVar18 = *(long **)(puVar13 + -0x108);
LAB_101604a5c:
    if (uVar25 != 0x16) {
LAB_101604a8c:
      *puVar19 = (char)uVar25;
      puVar19[1] = uVar20;
      *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar13 + -0x168);
      *(undefined2 *)(puVar19 + 6) = *(undefined2 *)(puVar13 + -0x164);
      *(long **)(puVar19 + 8) = unaff_x21;
      *(long **)(puVar19 + 0x10) = unaff_x23;
      *(long **)(puVar19 + 0x18) = plVar18;
      return;
    }
LAB_101604b0c:
    uVar14 = FUN_108832da4(unaff_x21,lVar22);
    goto LAB_101604450;
  }
  if (bVar3 < 0x74) {
    if (uVar25 == 0x66) {
      uVar27 = lVar21 - 4;
      *(ulong *)(lVar22 + 0x28) = uVar27;
      uVar2 = uVar27;
      if (uVar27 <= uVar23) {
        uVar2 = uVar23;
      }
      if (uVar27 < uVar23) {
        cVar4 = *(char *)(lVar24 + lVar21 + -4);
        *(ulong *)(lVar22 + 0x28) = lVar21 - 3U;
        if (cVar4 == 'a') {
          if (lVar21 - 3U == uVar2) goto LAB_101604908;
          cVar4 = *(char *)(lVar24 + lVar21 + -3);
          *(ulong *)(lVar22 + 0x28) = lVar21 - 2U;
          if (cVar4 == 'l') {
            if (lVar21 - 2U == uVar2) goto LAB_101604908;
            cVar4 = *(char *)(lVar24 + lVar21 + -2);
            *(ulong *)(lVar22 + 0x28) = lVar21 - 1U;
            if (cVar4 == 's') {
              if (lVar21 - 1U == uVar2) goto LAB_101604908;
              cVar4 = *(char *)(lVar24 + lVar21 + -1);
              *(long *)(lVar22 + 0x28) = lVar21;
              if (cVar4 == 'e') {
                uVar20 = 0;
                uVar25 = 0;
                goto LAB_101604a8c;
              }
            }
          }
        }
        goto LAB_101604acc;
      }
    }
    else {
      if (uVar25 != 0x6e) goto LAB_101604780;
      uVar27 = lVar21 - 4;
      *(ulong *)(lVar22 + 0x28) = uVar27;
      uVar2 = uVar27;
      if (uVar27 <= uVar23) {
        uVar2 = uVar23;
      }
      if (uVar27 < uVar23) {
        cVar4 = *(char *)(lVar24 + lVar21 + -4);
        *(ulong *)(lVar22 + 0x28) = lVar21 - 3U;
        if (cVar4 == 'u') {
          if (lVar21 - 3U == uVar2) goto LAB_101604908;
          cVar4 = *(char *)(lVar24 + lVar21 + -3);
          *(ulong *)(lVar22 + 0x28) = lVar21 - 2U;
          if (cVar4 == 'l') {
            if (lVar21 - 2U == uVar2) goto LAB_101604908;
            cVar4 = *(char *)(lVar24 + lVar21 + -2);
            *(long *)(lVar22 + 0x28) = lVar21 + -1;
            if (cVar4 == 'l') {
              uVar25 = 0x12;
              uVar20 = 0x6c;
              goto LAB_101604a8c;
            }
          }
        }
        goto LAB_101604acc;
      }
    }
LAB_101604908:
    uVar14 = 5;
LAB_10160490c:
    *(undefined8 *)(puVar13 + -0x120) = uVar14;
    uVar14 = FUN_10883295c(lVar22,puVar13 + -0x120);
    goto LAB_101604450;
  }
  if (uVar25 == 0x74) {
    uVar27 = lVar21 - 4;
    *(ulong *)(lVar22 + 0x28) = uVar27;
    uVar2 = uVar27;
    if (uVar27 <= uVar23) {
      uVar2 = uVar23;
    }
    if (uVar23 <= uVar27) goto LAB_101604908;
    cVar4 = *(char *)(lVar24 + lVar21 + -4);
    *(ulong *)(lVar22 + 0x28) = lVar21 - 3U;
    if (cVar4 == 'r') {
      if (lVar21 - 3U == uVar2) goto LAB_101604908;
      cVar4 = *(char *)(lVar24 + lVar21 + -3);
      *(ulong *)(lVar22 + 0x28) = lVar21 - 2U;
      if (cVar4 == 'u') {
        if (lVar21 - 2U == uVar2) goto LAB_101604908;
        cVar4 = *(char *)(lVar24 + lVar21 + -2);
        *(long *)(lVar22 + 0x28) = lVar21 + -1;
        if (cVar4 == 'e') {
          uVar25 = 0;
          uVar20 = 1;
          goto LAB_101604a8c;
        }
      }
    }
LAB_101604acc:
    uVar14 = 9;
    goto LAB_10160490c;
  }
  if (uVar25 != 0x7b) {
LAB_101604780:
    if (uVar25 - 0x30 < 10) {
      FUN_1006523cc(puVar13 + -0x120,lVar22,1);
      lVar22 = *(long *)(puVar13 + -0x120);
      goto joined_r0x0001016048f0;
    }
    *(undefined8 *)(puVar13 + -0x120) = 10;
    unaff_x21 = (long *)FUN_108831e8c(lVar22,puVar13 + -0x120);
    goto LAB_101604b0c;
  }
  cVar4 = *(char *)(lVar22 + 0x48) + -1;
  *(char *)(lVar22 + 0x48) = cVar4;
  if (cVar4 == '\0') {
LAB_101604aec:
    uVar14 = 0x18;
    goto LAB_101604440;
  }
  *(long *)(lVar22 + 0x28) = lVar21 + -4;
  *(long *)(puVar13 + -0x148) = lVar22;
  unaff_x26 = 1;
  puVar13[-0x140] = 1;
  *(undefined8 *)(puVar13 + -0x138) = 0;
  *(undefined8 *)(puVar13 + -0x130) = 8;
  unaff_x27 = &UNK_100002600;
  *(undefined8 *)(puVar13 + -0x128) = 0;
  FUN_1011ddbc4(puVar13 + -0xa0,puVar13 + -0x148);
  if (puVar13[-0xa0] == '\x01') {
    unaff_x21 = *(long **)(puVar13 + -0x98);
LAB_101604940:
    FUN_100d03040(puVar13 + -0x138);
    uVar20 = 0x16;
LAB_10160494c:
    *(char *)(lVar22 + 0x48) = *(char *)(lVar22 + 0x48) + '\x01';
    puVar13[-0xa0] = uVar20;
    *(long **)(puVar13 + -0x98) = unaff_x21;
    *(undefined8 *)(puVar13 + -0x88) = *(undefined8 *)(puVar13 + -0x158);
    *(undefined8 *)(puVar13 + -0x90) = *(undefined8 *)(puVar13 + -0x160);
    plVar28 = (long *)FUN_100654604(lVar22);
    *(undefined8 *)(puVar13 + -0x118) = *(undefined8 *)(puVar13 + -0x98);
    *(undefined8 *)(puVar13 + -0x120) = *(undefined8 *)(puVar13 + -0xa0);
    *(undefined8 *)(puVar13 + -0x108) = *(undefined8 *)(puVar13 + -0x88);
    *(undefined8 *)(puVar13 + -0x110) = *(undefined8 *)(puVar13 + -0x90);
    *(long **)(puVar13 + -0x100) = plVar28;
    bVar3 = puVar13[-0x120];
    unaff_x21 = plVar28;
    if (bVar3 != 0x16) goto LAB_1016049b8;
    unaff_x21 = *(long **)(puVar13 + -0x118);
    uVar20 = extraout_w9_01;
    if (plVar28 != (long *)0x0) {
      lVar21 = *plVar28;
      if (lVar21 != 1) goto LAB_1016049a0;
      FUN_100de21d4(plVar28 + 1);
      goto LAB_101604a50;
    }
LAB_101604a58:
    uVar25 = 0x16;
    goto LAB_101604a5c;
  }
  if (puVar13[-0x9f] != '\x01') {
    unaff_x21 = *(long **)(puVar13 + -0x138);
    *(undefined8 *)(puVar13 + -0x158) = *(undefined8 *)(puVar13 + -0x128);
    *(undefined8 *)(puVar13 + -0x160) = *(undefined8 *)(puVar13 + -0x130);
    uVar20 = 0x15;
    goto LAB_10160494c;
  }
  plVar18 = *(long **)(puVar13 + -0x148);
  plVar18[5] = plVar18[5] + 1;
  plVar18[2] = 0;
  __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
            (puVar13 + -0xa0,plVar18 + 3,plVar18);
  unaff_x21 = *(long **)(puVar13 + -0x98);
  if (*(ulong *)(puVar13 + -0xa0) == 2) goto LAB_101604940;
  unaff_x23 = *(long **)(puVar13 + -0x90);
  if ((*(ulong *)(puVar13 + -0xa0) & 1) == 0) {
    unaff_x28 = 0xd;
    plVar28 = unaff_x23;
  }
  else {
    if (unaff_x23 == (long *)0x0) {
      plVar28 = (long *)0x1;
    }
    else {
      plVar28 = (long *)_malloc(unaff_x23);
      if (plVar28 == (long *)0x0) {
        func_0x0001087c9084(1,unaff_x23);
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x101604b2c);
        (*pcVar11)();
      }
    }
    _memcpy(plVar28,unaff_x21,unaff_x23);
    unaff_x28 = 0xc;
    unaff_x21 = unaff_x23;
  }
  puVar13[-0xe0] = (char)unaff_x28;
  *(long **)(puVar13 + -0xd8) = unaff_x21;
  *(long **)(puVar13 + -0xd0) = plVar28;
  *(long **)(puVar13 + -200) = unaff_x23;
  uVar23 = plVar18[5];
  if ((ulong)plVar18[4] <= uVar23) {
LAB_101604920:
    *(undefined8 *)(puVar13 + -0xa0) = 3;
    unaff_x21 = (long *)FUN_108831e8c(plVar18,puVar13 + -0xa0);
LAB_101604934:
    FUN_100e077ec(puVar13 + -0xe0);
    goto LAB_101604940;
  }
  while( true ) {
    bVar3 = *(byte *)(plVar18[3] + uVar23);
    if (0x3a < bVar3) goto LAB_101604ad4;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
    uVar23 = uVar23 + 1;
    plVar18[5] = uVar23;
    if (plVar18[4] == uVar23) goto LAB_101604920;
  }
  if ((ulong)bVar3 != 0x3a) {
LAB_101604ad4:
    *(undefined8 *)(puVar13 + -0xa0) = 6;
    unaff_x21 = (long *)FUN_108831e8c(plVar18,puVar13 + -0xa0);
    goto LAB_101604934;
  }
  plVar18[5] = uVar23 + 1;
  auVar31._8_8_ = plVar18;
  auVar31._0_8_ = puVar13 + -0xc0;
  uVar14 = 0x101604700;
  pplVar10 = (long **)(puVar13 + -0x170);
  puVar12 = puVar13;
  auVar5 = auVar8;
  goto SUB_1016043b4;
LAB_101603934:
  FUN_1011de3f0(&uStack_e0,&lStack_88);
  plVar18 = plStack_d8;
  if ((char)uStack_e0 == '\x01') goto LAB_101603d20;
  if (uStack_e0._1_1_ != '\x01') {
    plStack_178 = plStack_1d0;
    plStack_180 = plStack_1d8;
    plStack_130 = (long *)0x8000000000000004;
    plStack_128 = plStack_1e0;
    goto LAB_101603d70;
  }
  FUN_101603758(&uStack_e0,lStack_88);
  plVar17 = plStack_1d0;
  plVar18 = plStack_d8;
  if (uStack_e0 == (long *)0x8000000000000005) goto LAB_101603d20;
  plStack_118 = plStack_c8;
  plStack_120 = plStack_d0;
  plStack_108 = plStack_b8;
  plStack_110 = plStack_c0;
  plStack_f8 = (long *)auStack_a8._0_8_;
  plStack_100 = plStack_b0;
  plStack_f0 = (long *)auStack_a8._8_8_;
  plStack_130 = uStack_e0;
  plStack_128 = plStack_d8;
  if (plStack_1d0 == plStack_1e0) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&plStack_1e0);
  }
  plVar18 = plStack_1d8 + (long)plVar17 * 9;
  plVar18[1] = (long)plStack_128;
  *plVar18 = (long)plStack_130;
  plVar18[3] = (long)plStack_118;
  plVar18[2] = (long)plStack_120;
  plVar18[5] = (long)plStack_108;
  plVar18[4] = (long)plStack_110;
  plVar18[7] = (long)plStack_f8;
  plVar18[6] = (long)plStack_100;
  plVar18[8] = (long)plStack_f0;
  plStack_1d0 = (long *)((long)plVar17 + 1);
  goto LAB_101603934;
LAB_101603d20:
  plVar17 = plStack_1d8;
  puVar29 = (undefined *)((long)plStack_1d0 + 1);
  plVar15 = plStack_1d8;
  while (puVar29 = puVar29 + -1, puVar29 != (undefined *)0x0) {
    FUN_100de6690(plVar15);
    plVar15 = plVar15 + 9;
  }
  if (plStack_1e0 != (long *)0x0) {
    _free(plVar17);
  }
  plStack_130 = (long *)0x8000000000000005;
  plStack_128 = plVar18;
LAB_101603d70:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  plStack_118 = plStack_178;
  plStack_120 = plStack_180;
  plStack_108 = plStack_168;
  plStack_110 = plStack_170;
  plStack_f8 = plStack_158;
  plStack_100 = plStack_160;
  plStack_f0 = plStack_150;
  plVar17 = (long *)FUN_10065474c(param_2);
  plVar18 = plStack_128;
  plStack_d8 = plStack_128;
  uStack_e0 = plStack_130;
  plStack_c8 = plStack_118;
  plStack_d0 = plStack_120;
  plStack_b8 = plStack_108;
  plStack_c0 = plStack_110;
  auStack_a8._0_8_ = plStack_f8;
  plStack_b0 = plStack_100;
  auStack_a8._8_8_ = plStack_f0;
  auVar7._8_8_ = plStack_f0;
  auVar7._0_8_ = plStack_f8;
  auVar6._8_8_ = plStack_f0;
  auVar6._0_8_ = plStack_f8;
  plStack_98 = plVar17;
  if (plStack_130 == (long *)0x8000000000000005) {
    plVar15 = plStack_f0;
    if (plVar17 != (long *)0x0) {
      lVar22 = *plVar17;
      if (lVar22 != 1) goto LAB_101603eac;
      FUN_100de21d4(plVar17 + 1);
      goto LAB_101603f64;
    }
  }
  else {
    if (plVar17 != (long *)0x0) goto LAB_101603ec8;
    plStack_268 = plStack_108;
    plStack_270 = plStack_110;
    plStack_260 = plStack_100;
    auStack_258._8_8_ = plStack_f0;
    auStack_258._0_8_ = plStack_f8;
    plVar15 = plStack_118;
    plVar17 = plStack_120;
    plVar28 = plStack_130;
  }
  goto LAB_101603f6c;
LAB_101604098:
  FUN_1011ddd20(&lStack_88,&lStack_1f0);
  uVar14 = uStack_78;
  lVar22 = lStack_88;
  plVar18 = (long *)CONCAT71(uStack_7f,uStack_80);
  plStack_238 = plVar18;
  if (lStack_88 != -0x7fffffffffffffff) {
    if (lStack_88 == -0x8000000000000000) {
      plStack_218 = plStack_1b8;
      plStack_220 = plStack_1c0;
      plStack_210 = plStack_1b0;
      plStack_240 = plStack_1e0;
      plStack_228 = plStack_1c8;
      plStack_230 = plStack_1d0;
      plStack_238 = plStack_1d8;
      auStack_208._0_16_ = auStack_1a8;
      goto LAB_101603e5c;
    }
    uVar23 = *(ulong *)(lStack_1f0 + 0x28);
    if (*(ulong *)(lStack_1f0 + 0x20) <= uVar23) {
LAB_1016041c4:
      plStack_130 = (long *)0x3;
      plStack_d8 = (long *)FUN_108831e8c(lStack_1f0,&plStack_130);
joined_r0x00010160421c:
      plStack_238 = plStack_d8;
      if (lVar22 != 0) {
        _free(plVar18);
      }
      goto LAB_101604220;
    }
    while( true ) {
      bVar3 = *(byte *)(*(long *)(lStack_1f0 + 0x18) + uVar23);
      if (0x3a < bVar3) goto LAB_101604290;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
      uVar23 = uVar23 + 1;
      *(ulong *)(lStack_1f0 + 0x28) = uVar23;
      if (*(ulong *)(lStack_1f0 + 0x20) == uVar23) goto LAB_1016041c4;
    }
    if ((ulong)bVar3 != 0x3a) {
LAB_101604290:
      plStack_130 = (long *)0x6;
      plStack_d8 = (long *)FUN_108831e8c(lStack_1f0,&plStack_130);
      goto joined_r0x00010160421c;
    }
    *(ulong *)(lStack_1f0 + 0x28) = uVar23 + 1;
    FUN_101603758(&uStack_e0);
    if (uStack_e0 == (long *)0x8000000000000005) goto joined_r0x00010160421c;
    plStack_158 = plStack_b8;
    plStack_160 = plStack_c0;
    plStack_148 = (long *)auStack_a8._0_8_;
    plStack_150 = plStack_b0;
    plStack_140 = (long *)auStack_a8._8_8_;
    plStack_178 = plStack_d8;
    plStack_180 = uStack_e0;
    plStack_168 = plStack_c8;
    plStack_170 = plStack_d0;
    alStack_198[0] = lVar22;
    uStack_188 = uVar14;
    FUN_101497a9c(&uStack_e0,&plStack_1e0,alStack_198,&plStack_180);
    plStack_128 = plStack_d0;
    plStack_130 = plStack_d8;
    plStack_118 = plStack_c0;
    plStack_120 = plStack_c8;
    plStack_108 = plStack_b0;
    plStack_110 = plStack_b8;
    plStack_f8 = (long *)auStack_a8._8_8_;
    plStack_100 = (long *)auStack_a8._0_8_;
    plStack_f0 = plStack_98;
    if (plStack_d8 != (long *)0x8000000000000005) {
      FUN_100de6690(&plStack_130);
    }
    goto LAB_101604098;
  }
LAB_101604220:
  plStack_240 = (long *)0x8000000000000005;
LAB_101604224:
  FUN_100e8442c(&plStack_1e0);
LAB_101603e5c:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  plVar17 = (long *)FUN_100654604(param_2);
  plVar18 = plStack_238;
  plStack_d8 = plStack_238;
  uStack_e0 = plStack_240;
  plStack_c8 = plStack_228;
  plStack_d0 = plStack_230;
  plStack_b8 = plStack_218;
  plStack_c0 = plStack_220;
  plStack_b0 = plStack_210;
  plStack_98 = plVar17;
  auVar6 = auStack_208._0_16_;
  if (plStack_240 == (long *)0x8000000000000005) {
    plVar15 = (long *)0x8000000000000005;
    plVar28 = (long *)0x8000000000000005;
    if (plVar17 != (long *)0x0) {
      lVar22 = *plVar17;
      auVar7 = auStack_208._0_16_;
      if (lVar22 == 1) {
        auStack_a8 = auStack_208._0_16_;
        FUN_100de21d4(plVar17 + 1);
      }
      else {
LAB_101603eac:
        plStack_d8 = plVar18;
        plStack_98 = plVar17;
        auStack_a8 = auVar7;
        if ((lVar22 == 0) && (plVar17[2] != 0)) {
          _free(plVar17[1]);
        }
      }
LAB_101603f64:
      _free(plVar17);
      plVar15 = extraout_x8_00;
      plVar28 = (long *)0x8000000000000005;
      auVar6 = auStack_a8;
    }
  }
  else if (plVar17 == (long *)0x0) {
    plStack_268 = plStack_218;
    plStack_270 = plStack_220;
    plStack_260 = plStack_210;
    plVar15 = plStack_228;
    plVar17 = plStack_230;
    plVar28 = plStack_240;
    auStack_258 = auStack_208._0_16_;
  }
  else {
LAB_101603ec8:
    plStack_98 = plVar17;
    auStack_a8 = auVar6;
    FUN_100de6690(&uStack_e0);
    plVar15 = extraout_x8;
    plVar18 = plVar17;
    plVar28 = (long *)0x8000000000000005;
    auVar6 = auStack_a8;
  }
LAB_101603f6c:
  if (plVar28 == (long *)0x8000000000000005) {
LAB_101604248:
    auStack_a8 = auVar6;
    uVar14 = FUN_108832da4(plVar18,param_2);
LAB_1016037f8:
    *param_1 = 0x8000000000000005;
    param_1[1] = uVar14;
  }
  else {
    uVar23 = (ulong)plVar18 & 0xffffffffffffff00;
    plStack_d0 = plVar15;
LAB_101603fb0:
    *param_1 = plVar28;
    param_1[1] = (ulong)plVar18 & 0xff | uVar23;
    param_1[2] = plVar17;
    param_1[3] = plStack_d0;
    param_1[5] = plStack_268;
    param_1[4] = plStack_270;
    param_1[7] = auStack_258._0_8_;
    param_1[6] = plStack_260;
    param_1[8] = auStack_258._8_8_;
  }
  return;
}

