
/* WARNING: Possible PIC construction at 0x0001004e00b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e0370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e00b4) */
/* WARNING: Removing unreachable block (ram,0x0001004e00fc) */
/* WARNING: Removing unreachable block (ram,0x0001004e0124) */
/* WARNING: Removing unreachable block (ram,0x0001004e0138) */
/* WARNING: Removing unreachable block (ram,0x0001004e0140) */
/* WARNING: Removing unreachable block (ram,0x0001004e012c) */
/* WARNING: Removing unreachable block (ram,0x0001004e014c) */
/* WARNING: Removing unreachable block (ram,0x0001004e0154) */
/* WARNING: Removing unreachable block (ram,0x0001004e00c4) */
/* WARNING: Removing unreachable block (ram,0x0001004e0160) */
/* WARNING: Removing unreachable block (ram,0x0001004e00cc) */
/* WARNING: Removing unreachable block (ram,0x0001004e00dc) */
/* WARNING: Removing unreachable block (ram,0x0001004e0080) */
/* WARNING: Removing unreachable block (ram,0x0001004e016c) */
/* WARNING: Removing unreachable block (ram,0x0001004e0374) */
/* WARNING: Removing unreachable block (ram,0x0001004e03b4) */
/* WARNING: Removing unreachable block (ram,0x0001004e03c4) */
/* WARNING: Removing unreachable block (ram,0x0001004e03d8) */
/* WARNING: Removing unreachable block (ram,0x0001004e03e0) */
/* WARNING: Removing unreachable block (ram,0x0001004e03cc) */
/* WARNING: Removing unreachable block (ram,0x0001004e03ec) */
/* WARNING: Removing unreachable block (ram,0x0001004e03f4) */
/* WARNING: Removing unreachable block (ram,0x0001004e0380) */
/* WARNING: Removing unreachable block (ram,0x0001004e0394) */
/* WARNING: Removing unreachable block (ram,0x0001004e0344) */
/* WARNING: Removing unreachable block (ram,0x0001004e0400) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004dfff4(long *param_1,char *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte *pbVar8;
  undefined8 uVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 unaff_x22;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x27;
  long unaff_x28;
  undefined8 *******pppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte abStack_408 [400];
  ulong uStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  ulong uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined1 uStack_1f1;
  undefined8 *******pppppppuStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long alStack_170 [3];
  undefined1 uStack_151;
  undefined8 ******ppppppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_61;
  byte *pbVar3;
  char *pcVar7;
  
  puVar2 = auStack_f0;
  ppppppuVar21 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (*param_2 != '\x14') {
    thunk_FUN_108855bf0(param_1,param_2,&uStack_61,&UNK_10b20a3c0);
    return;
  }
  lVar12 = *(long *)(param_2 + 0x10);
  uVar17 = *(ulong *)(param_2 + 0x18);
  lStack_e0 = lVar12 + uVar17 * 0x20;
  uVar16 = uVar17;
  if (0xaaa9 < uVar17) {
    uVar16 = 0xaaaa;
  }
  if (uVar17 == 0) {
    lStack_d0 = 8;
    uStack_c8 = 0;
    param_1[2] = 8;
    param_1[1] = 0;
    param_1[3] = 0;
    *param_1 = 2;
    if (lStack_e0 - lVar12 != 0) {
      lVar14 = param_1[1];
      lVar4 = param_1[2];
      lVar18 = param_1[3];
      uStack_d8 = 0;
      thunk_FUN_1087e427c(&lStack_c0,(ulong)(lStack_e0 - lVar12) >> 5,&uStack_d8,&UNK_10b23a1b0);
      if (lStack_c0 != 2) {
        param_1[5] = lStack_98;
        param_1[4] = lStack_a0;
        param_1[7] = lStack_88;
        param_1[6] = lStack_90;
        param_1[9] = lStack_78;
        param_1[8] = lStack_80;
        param_1[10] = lStack_70;
        param_1[1] = lStack_b8;
        *param_1 = lStack_c0;
        param_1[3] = lStack_a8;
        param_1[2] = lStack_b0;
        if (lVar18 != 0) {
          puVar6 = (undefined8 *)(lVar4 + 8);
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if (lVar14 == 0) {
          return;
        }
        _free(lVar4);
        return;
      }
    }
    *param_1 = 2;
    return;
  }
  lVar14 = uVar16 * 0x18;
  lVar4 = _malloc(lVar14);
  if (lVar4 == 0) {
    uVar22 = FUN_107c03c64(8,lVar14);
    FUN_100e1ad68(lVar14);
    uVar22 = __Unwind_Resume(uVar22);
    if (unaff_x28 != 0) {
      _free(lVar14);
      FUN_100e1ad68(&uStack_d8);
      uVar22 = __Unwind_Resume(uVar22);
    }
    FUN_100e1ad68(&uStack_d8);
    auVar23 = __Unwind_Resume(uVar22);
    pcVar7 = auVar23._8_8_;
    plVar5 = auVar23._0_8_;
    pbVar3 = (byte *)&lStack_190;
    pcStack_f8 = FUN_1004e02c0;
    ppppppuStack_100 = ppppppuVar21;
    if (*pcVar7 != '\x14') {
      lVar12 = thunk_FUN_108855c40(pcVar7,&uStack_151,&UNK_10b20a3c0);
      *plVar5 = -0x8000000000000000;
      plVar5[1] = lVar12;
      return;
    }
    lVar12 = *(long *)(pcVar7 + 0x10);
    uVar17 = *(ulong *)(pcVar7 + 0x18);
    lVar14 = lVar12 + uVar17 * 0x20;
    uVar16 = uVar17;
    if (0xaaa9 < uVar17) {
      uVar16 = 0xaaaa;
    }
    if (uVar17 == 0) {
      uStack_188 = 0;
      lStack_180 = 8;
      uStack_178 = 0;
      plVar5[1] = 8;
      *plVar5 = 0;
      plVar5[2] = 0;
      lVar4 = *plVar5;
      if (lVar4 == -0x8000000000000000) {
        return;
      }
      uVar16 = lVar14 - lVar12;
      if (uVar16 == 0) {
        return;
      }
      lVar12 = plVar5[1];
      lVar14 = plVar5[2];
      alStack_170[0] = 0;
      lVar18 = thunk_FUN_1087e422c(uVar16 >> 5,alStack_170,&UNK_10b23a1b0);
      *plVar5 = -0x8000000000000000;
      plVar5[1] = lVar18;
      if (lVar14 != 0) {
        puVar6 = (undefined8 *)(lVar12 + 8);
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (lVar4 == 0) {
        return;
      }
      _free(lVar12);
      return;
    }
    puVar15 = (ulong *)(uVar16 * 0x18);
    lVar4 = _malloc(puVar15);
    if (lVar4 == 0) {
      uVar22 = FUN_107c03c64(8,puVar15);
      FUN_100e1ad68(plVar5);
      uVar22 = __Unwind_Resume(uVar22);
      if (unaff_x27 != 0) {
        _free(puVar15);
        FUN_100e1ad68(&uStack_188);
        uVar22 = __Unwind_Resume(uVar22);
      }
      FUN_100e1ad68(&uStack_188);
      auVar23 = __Unwind_Resume(uVar22);
      pcVar7 = auVar23._8_8_;
      plVar5 = auVar23._0_8_;
      pbVar3 = abStack_408 + 0x188;
      uStack_198 = 0x1004e052c;
      pppppppuVar20 = &pppppppuStack_1a0;
      pppppppuStack_1a0 = &ppppppuStack_100;
      if (*pcVar7 != '\x14') {
        thunk_FUN_108855bf0(plVar5,pcVar7,&uStack_1f1,&UNK_10b2136e8);
        return;
      }
      lVar12 = *(long *)(pcVar7 + 0x10);
      uVar17 = *(ulong *)(pcVar7 + 0x18);
      lVar4 = uVar17 * 0x20;
      uVar16 = uVar17;
      if (0xaaa9 < uVar17) {
        uVar16 = 0xaaaa;
      }
      if (uVar17 == 0) {
        uStack_268 = 0;
        lStack_260 = 8;
        uStack_258 = 0;
        lVar14 = lVar12 + lVar4;
        lVar18 = lVar12;
        uVar16 = 0;
LAB_1004e06ac:
        plVar5[2] = lStack_260;
        plVar5[1] = uStack_268;
        plVar5[3] = uStack_258;
        *plVar5 = 2;
        if (lVar14 - lVar18 != 0) {
          lVar12 = plVar5[1];
          lVar4 = plVar5[2];
          lVar19 = plVar5[3];
          uStack_268 = uVar16;
          thunk_FUN_1087e427c(&lStack_250,uVar16 + ((ulong)(lVar14 - lVar18) >> 5),&uStack_268,
                              &UNK_10b23a1b0);
          if (lStack_250 != 2) {
            plVar5[5] = lStack_228;
            plVar5[4] = lStack_230;
            plVar5[7] = lStack_218;
            plVar5[6] = lStack_220;
            plVar5[9] = lStack_208;
            plVar5[8] = lStack_210;
            plVar5[10] = lStack_200;
            plVar5[1] = lStack_248;
            *plVar5 = lStack_250;
            plVar5[3] = lStack_238;
            plVar5[2] = lStack_240;
            if (lVar19 != 0) {
              puVar6 = (undefined8 *)(lVar4 + 8);
              do {
                if (puVar6[-1] != 0) {
                  _free(*puVar6);
                }
                puVar6 = puVar6 + 3;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (lVar12 == 0) {
              return;
            }
            _free(lVar4);
            return;
          }
        }
        *plVar5 = 2;
        return;
      }
      lVar18 = uVar16 * 0x18;
      lStack_270 = lVar12 + lVar4;
      lStack_260 = _malloc(lVar18);
      if (lStack_260 != 0) {
        uStack_258 = 0;
        uStack_278 = (lVar4 - 0x20U >> 5) + 1;
        uVar17 = 1;
        uStack_268 = uVar16;
        do {
          FUN_1013f91dc(&lStack_250,lVar12);
          lVar1 = lStack_238;
          lVar19 = lStack_240;
          lVar18 = lStack_248;
          uVar16 = uStack_258;
          lVar14 = lStack_260;
          if (lStack_250 != 2) {
            plVar5[5] = lStack_228;
            plVar5[4] = lStack_230;
            plVar5[7] = lStack_218;
            plVar5[6] = lStack_220;
            plVar5[9] = lStack_208;
            plVar5[8] = lStack_210;
            plVar5[10] = lStack_200;
            *plVar5 = lStack_250;
            plVar5[1] = lStack_248;
            plVar5[2] = lStack_240;
            plVar5[3] = lStack_238;
            if (uStack_258 != 0) {
              puVar6 = (undefined8 *)(lStack_260 + 8);
              do {
                if (puVar6[-1] != 0) {
                  _free(*puVar6);
                }
                puVar6 = puVar6 + 3;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            if (uStack_268 == 0) {
              return;
            }
            _free(lVar14);
            return;
          }
          if (lStack_248 == -0x8000000000000000) {
            lVar14 = lStack_270;
            lVar18 = lVar12 + 0x20;
            uVar16 = uVar17;
            break;
          }
          if (uStack_258 == uStack_268) {
            FUN_107c05aec(&uStack_268);
          }
          lVar12 = lVar12 + 0x20;
          plVar11 = (long *)(lStack_260 + uVar16 * 0x18);
          *plVar11 = lVar18;
          plVar11[1] = lVar19;
          plVar11[2] = lVar1;
          uStack_258 = uVar16 + 1;
          uVar17 = uVar17 + 1;
          lVar4 = lVar4 + -0x20;
          lVar14 = lStack_270;
          lVar18 = lStack_270;
          uVar16 = uStack_278;
        } while (lVar4 != 0);
        goto LAB_1004e06ac;
      }
      uVar22 = FUN_107c03c64(8,lVar18);
      FUN_100ca9cd4(lVar18);
      plVar5 = (long *)__Unwind_Resume(uVar22);
      if (unaff_x28 != 0) {
        _free(lVar18);
        FUN_100ca9cd4(&uStack_268);
        plVar5 = (long *)__Unwind_Resume(plVar5);
      }
      puVar15 = &uStack_268;
      FUN_100ca9cd4(puVar15);
      uVar22 = 0x1004e07f8;
      auVar23 = __Unwind_Resume(plVar5);
    }
    else {
      uStack_178 = 0;
      lStack_190 = (uVar17 * 0x20 - 0x20 >> 5) + 1;
      auVar23._8_8_ = lVar12;
      auVar23._0_8_ = alStack_170;
      uVar22 = 0x1004e0374;
      pppppppuVar20 = &ppppppuStack_100;
      uStack_188 = uVar16;
      lStack_180 = lVar4;
    }
    pbVar8 = auVar23._8_8_;
    param_1 = auVar23._0_8_;
    puVar2 = pbVar3 + -0x70;
    *(long *)(pbVar3 + -0x30) = lVar14;
    *(ulong **)(pbVar3 + -0x28) = puVar15;
    *(long *)(pbVar3 + -0x20) = lVar12;
    *(long **)(pbVar3 + -0x18) = plVar5;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar20;
    *(undefined8 *)(pbVar3 + -8) = uVar22;
    ppppppuVar21 = (undefined8 ******)(pbVar3 + -0x10);
    bVar10 = *pbVar8;
    if (bVar10 < 0xe) {
      if (bVar10 == 0xc) {
        lVar14 = *(long *)(pbVar8 + 0x10);
        lVar12 = *(long *)(pbVar8 + 0x18);
      }
      else {
        if (bVar10 != 0xd) {
LAB_1004e08e8:
          lVar12 = thunk_FUN_108855c40(pbVar8,pbVar3 + -0x31,&UNK_10b20a5e0);
          goto LAB_1004e08fc;
        }
        lVar14 = *(long *)(pbVar8 + 8);
        lVar12 = *(long *)(pbVar8 + 0x10);
      }
    }
    else {
      if (bVar10 == 0xe) {
        uVar22 = *(undefined8 *)(pbVar8 + 0x10);
        uVar9 = *(undefined8 *)(pbVar8 + 0x18);
      }
      else {
        if (bVar10 != 0xf) goto LAB_1004e08e8;
        uVar22 = *(undefined8 *)(pbVar8 + 8);
        uVar9 = *(undefined8 *)(pbVar8 + 0x10);
      }
      func_0x0001055bf348(pbVar3 + -0x68,uVar22,uVar9);
      if (*(int *)(pbVar3 + -0x68) == 1) {
        *(undefined8 *)(pbVar3 + -0x48) = uVar22;
        *(undefined8 *)(pbVar3 + -0x40) = uVar9;
        pbVar3[-0x50] = 6;
        lVar12 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (pbVar3 + -0x50,pbVar3 + -0x31,&UNK_10b20a5e0);
LAB_1004e08fc:
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar12;
        return;
      }
      lVar14 = *(long *)(pbVar3 + -0x60);
      lVar12 = *(long *)(pbVar3 + -0x58);
    }
    if (lVar12 == 0) {
      lVar4 = 1;
LAB_1004e0898:
      _memcpy(lVar4,lVar14,lVar12);
      *param_1 = lVar12;
      param_1[1] = lVar4;
      param_1[2] = lVar12;
      return;
    }
    lVar4 = _malloc(lVar12);
    if (lVar4 != 0) goto LAB_1004e0898;
    uVar22 = 0x1004e0914;
    auVar24 = FUN_107c03c64(1,lVar12);
    unaff_x22 = 0;
  }
  else {
    uStack_c8 = 0;
    lStack_e8 = (uVar17 * 0x20 - 0x20 >> 5) + 1;
    auVar24._8_8_ = lVar12;
    auVar24._0_8_ = &lStack_c0;
    uVar22 = 0x1004e00b4;
    uStack_d8 = uVar16;
    lStack_d0 = lVar4;
  }
  pbVar8 = auVar24._8_8_;
  puVar6 = auVar24._0_8_;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = lVar14;
  *(long *)(puVar2 + -0x20) = lVar12;
  *(long **)(puVar2 + -0x18) = param_1;
  *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar21;
  *(undefined8 *)(puVar2 + -8) = uVar22;
  bVar10 = *pbVar8;
  if (bVar10 < 0xe) {
    if (bVar10 == 0xc) {
      uVar22 = *(undefined8 *)(pbVar8 + 0x10);
      lVar12 = *(long *)(pbVar8 + 0x18);
    }
    else {
      if (bVar10 != 0xd) {
LAB_1004e0a0c:
        thunk_FUN_108855bf0(puVar6,pbVar8,puVar2 + -0x31,&UNK_10b20a5e0);
        return;
      }
      uVar22 = *(undefined8 *)(pbVar8 + 8);
      lVar12 = *(long *)(pbVar8 + 0x10);
    }
  }
  else {
    if (bVar10 == 0xe) {
      uVar22 = *(undefined8 *)(pbVar8 + 0x10);
      uVar9 = *(undefined8 *)(pbVar8 + 0x18);
    }
    else {
      if (bVar10 != 0xf) goto LAB_1004e0a0c;
      uVar22 = *(undefined8 *)(pbVar8 + 8);
      uVar9 = *(undefined8 *)(pbVar8 + 0x10);
    }
    func_0x0001055bf348(puVar2 + -0x68,uVar22,uVar9);
    if (*(int *)(puVar2 + -0x68) == 1) {
      *(undefined8 *)(puVar2 + -0x48) = uVar22;
      *(undefined8 *)(puVar2 + -0x40) = uVar9;
      puVar2[-0x50] = 6;
      thunk_FUN_1087e3ee8(puVar6,puVar2 + -0x50,puVar2 + -0x31,&UNK_10b20a5e0);
      return;
    }
    uVar22 = *(undefined8 *)(puVar2 + -0x60);
    lVar12 = *(long *)(puVar2 + -0x58);
  }
  if (lVar12 == 0) {
    lVar14 = 1;
LAB_1004e09b4:
    _memcpy(lVar14,uVar22,lVar12);
    puVar6[2] = lVar14;
    puVar6[3] = lVar12;
    *puVar6 = 2;
    puVar6[1] = lVar12;
    return;
  }
  lVar14 = _malloc(lVar12);
  if (lVar14 != 0) goto LAB_1004e09b4;
  auVar23 = FUN_107c03c64(1,lVar12);
  pbVar8 = auVar23._8_8_;
  plVar5 = auVar23._0_8_;
  *(undefined8 *)(puVar2 + -0xa0) = 0;
  *(undefined8 *)(puVar2 + -0x98) = uVar22;
  *(long *)(puVar2 + -0x90) = lVar12;
  *(undefined8 **)(puVar2 + -0x88) = puVar6;
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
  *(undefined8 *)(puVar2 + -0x78) = 0x1004e0a30;
  bVar10 = *pbVar8;
  if (bVar10 - 0xc < 2) {
    pbVar13 = (byte *)0x0;
    if (bVar10 < 0xd) goto LAB_1004e0a64;
LAB_1004e0aac:
    if (bVar10 == 0xd) {
      uVar22 = *(undefined8 *)(pbVar8 + 8);
      uVar9 = *(undefined8 *)(pbVar8 + 0x10);
LAB_1004e0b84:
      FUN_100b40be0(puVar2 + -0x118,uVar22,uVar9);
      lVar12 = *(long *)(puVar2 + -0x118);
      bVar10 = puVar2[-0x110];
    }
    else {
      if (bVar10 != 0xe) {
        if (bVar10 == 0xf) {
          uVar22 = *(undefined8 *)(pbVar8 + 8);
          uVar9 = *(undefined8 *)(pbVar8 + 0x10);
          goto LAB_1004e0ae0;
        }
        goto LAB_1004e0c78;
      }
      uVar22 = *(undefined8 *)(pbVar8 + 0x10);
      uVar9 = *(undefined8 *)(pbVar8 + 0x18);
LAB_1004e0ae0:
      FUN_100b40a2c(puVar2 + -0x118,uVar22,uVar9);
      lVar12 = *(long *)(puVar2 + -0x118);
      bVar10 = puVar2[-0x110];
    }
  }
  else {
    if (bVar10 != 0x15) {
      thunk_FUN_1088556a8(puVar2 + -0x118);
      thunk_FUN_1087e3db0(plVar5,puVar2 + -0x118,&UNK_10b20a5b0,&UNK_10b20a590);
      return;
    }
    if (*(long *)(pbVar8 + 0x18) != 1) {
      puVar2[-0x118] = 0xb;
      thunk_FUN_1087e3ee8(plVar5,puVar2 + -0x118,&UNK_10b20a580,&UNK_10b20a590);
      return;
    }
    pbVar8 = *(byte **)(pbVar8 + 0x10);
    pbVar13 = pbVar8 + 0x20;
    bVar10 = *pbVar8;
    if (0xc < bVar10) goto LAB_1004e0aac;
LAB_1004e0a64:
    if (bVar10 == 1) {
      uVar16 = (ulong)pbVar8[1];
      if (pbVar8[1] < 3) goto LAB_1004e0ba0;
    }
    else {
      if (bVar10 != 4) {
        if (bVar10 == 0xc) {
          uVar22 = *(undefined8 *)(pbVar8 + 0x10);
          uVar9 = *(undefined8 *)(pbVar8 + 0x18);
          goto LAB_1004e0b84;
        }
LAB_1004e0c78:
        thunk_FUN_108855bf0(puVar2 + -0x118,pbVar8,puVar2 + -0xa1,&UNK_10b20dbe0);
        lVar12 = *(long *)(puVar2 + -0x118);
        bVar10 = puVar2[-0x110];
        goto joined_r0x0001004e0c98;
      }
      uVar16 = *(ulong *)(pbVar8 + 8);
      if (uVar16 < 3) goto LAB_1004e0ba0;
    }
    *(ulong *)(puVar2 + -0xb8) = uVar16;
    puVar2[-0xc0] = 1;
    thunk_FUN_1087e3ee8(puVar2 + -0x118,puVar2 + -0xc0,&UNK_10b229e80,&UNK_10b20a590);
    lVar12 = *(long *)(puVar2 + -0x118);
    bVar10 = puVar2[-0x110];
  }
joined_r0x0001004e0c98:
  uVar16 = (ulong)bVar10;
  if (lVar12 != 2) {
    *(undefined4 *)((long)plVar5 + 9) = *(undefined4 *)(puVar2 + -0x10f);
    *(undefined4 *)((long)plVar5 + 0xc) = *(undefined4 *)(puVar2 + -0x10c);
    lVar14 = *(long *)(puVar2 + -0x108);
    lVar19 = *(long *)(puVar2 + -0x100);
    lVar18 = *(long *)(puVar2 + -0xe8);
    lVar4 = *(long *)(puVar2 + -0xf0);
    plVar5[4] = *(long *)(puVar2 + -0xf8);
    plVar5[3] = lVar19;
    plVar5[6] = lVar18;
    plVar5[5] = lVar4;
    lVar19 = *(long *)(puVar2 + -0xe0);
    lVar18 = *(long *)(puVar2 + -200);
    lVar4 = *(long *)(puVar2 + -0xd0);
    plVar5[8] = *(long *)(puVar2 + -0xd8);
    plVar5[7] = lVar19;
    plVar5[10] = lVar18;
    plVar5[9] = lVar4;
    *plVar5 = lVar12;
    *(byte *)(plVar5 + 1) = bVar10;
    plVar5[2] = lVar14;
    return;
  }
LAB_1004e0ba0:
  if (((pbVar13 == (byte *)0x0) || (*pbVar13 == 0x12)) ||
     (thunk_FUN_108855bf0(puVar2 + -0x118,pbVar13,puVar2 + -0xa1,&UNK_10b20a5c0),
     *(long *)(puVar2 + -0x118) == 2)) {
    *(char *)(plVar5 + 1) = (char)uVar16;
    *plVar5 = 2;
  }
  else {
    lVar12 = *(long *)(puVar2 + -0xf8);
    lVar4 = *(long *)(puVar2 + -0xe0);
    lVar14 = *(long *)(puVar2 + -0xe8);
    plVar5[5] = *(long *)(puVar2 + -0xf0);
    plVar5[4] = lVar12;
    plVar5[7] = lVar4;
    plVar5[6] = lVar14;
    lVar12 = *(long *)(puVar2 + -0xd8);
    plVar5[9] = *(long *)(puVar2 + -0xd0);
    plVar5[8] = lVar12;
    plVar5[10] = *(long *)(puVar2 + -200);
    lVar12 = *(long *)(puVar2 + -0x118);
    lVar4 = *(long *)(puVar2 + -0x100);
    lVar14 = *(long *)(puVar2 + -0x108);
    plVar5[1] = *(long *)(puVar2 + -0x110);
    *plVar5 = lVar12;
    plVar5[3] = lVar4;
    plVar5[2] = lVar14;
  }
  return;
}

