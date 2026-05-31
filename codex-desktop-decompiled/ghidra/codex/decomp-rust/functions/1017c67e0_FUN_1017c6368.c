
void FUN_1017c6368(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_220 [8];
  ulong uStack_218;
  undefined1 uStack_201;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  char cStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  char cStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  char acStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar13 = *(long **)(param_2 + 8);
  plVar14 = *(long **)(param_2 + 0x18);
  uVar11 = ((ulong)((long)plVar14 - (long)plVar13) >> 3) * -0x71c71c71c71c71c7;
  if (0x7fff < uVar11) {
    uVar11 = 0x8000;
  }
  puStack_110 = param_1;
  if (plVar14 == plVar13) {
    uStack_108 = 0;
    lStack_100 = 8;
    uStack_f8 = 0;
LAB_1017c64c0:
    uStack_c1 = (undefined1)lStack_100;
    uStack_c9 = (undefined1)uStack_108;
    uStack_c8 = (undefined7)(uStack_108 >> 8);
    *puStack_110 = 0x14;
    *(ulong *)(puStack_110 + 9) = CONCAT17(uStack_c1,uStack_c8);
    *(ulong *)(puStack_110 + 1) = CONCAT17(uStack_c9,uStack_d0);
    *(ulong *)(puStack_110 + 0x18) = uStack_f8;
    *(long *)(puStack_110 + 0x10) = lStack_100;
    return;
  }
  lStack_100 = _malloc(uVar11 << 5);
  if (lStack_100 != 0) {
    uStack_f8 = 0;
    uStack_108 = uVar11;
    do {
      plVar19 = plVar13 + 9;
      lVar12 = *plVar13;
      *(long **)(param_2 + 8) = plVar19;
      if (lVar12 == -0x7ffffffffffffffb) break;
      uStack_d0 = (undefined7)lVar12;
      uStack_c9 = (undefined1)((ulong)lVar12 >> 0x38);
      uStack_c0 = (undefined7)plVar13[2];
      uStack_b9 = (undefined1)((ulong)plVar13[2] >> 0x38);
      uStack_c8 = (undefined7)plVar13[1];
      uStack_c1 = (undefined1)((ulong)plVar13[1] >> 0x38);
      lStack_b0 = plVar13[4];
      uStack_b8 = (undefined7)plVar13[3];
      uStack_b1 = (undefined1)((ulong)plVar13[3] >> 0x38);
      lStack_a0 = plVar13[6];
      lStack_a8 = plVar13[5];
      lStack_90 = plVar13[8];
      lStack_98 = plVar13[7];
      FUN_10177c7ec(acStack_88,&uStack_d0);
      uVar11 = uStack_f8;
      lVar12 = lStack_100;
      if (acStack_88[0] == '\x16') {
        *(undefined8 *)(puStack_110 + 8) = uStack_80;
        *puStack_110 = 0x16;
        lVar17 = uStack_f8 + 1;
        lVar18 = lStack_100;
        while (lVar17 = lVar17 + -1, lVar17 != 0) {
          func_0x0001017a6a48(lVar18);
          lVar18 = lVar18 + 0x20;
        }
        if (uStack_108 == 0) {
          return;
        }
        _free(lVar12);
        return;
      }
      *(undefined4 *)((ulong)&cStack_f0 | 1) = *(undefined4 *)((ulong)acStack_88 | 1);
      *(undefined4 *)((long)((ulong)&cStack_f0 | 1) + 3) =
           *(undefined4 *)((long)((ulong)acStack_88 | 1) + 3);
      uStack_e8 = uStack_80;
      uStack_d8 = uStack_70;
      uStack_e0 = uStack_78;
      cStack_f0 = acStack_88[0];
      if (uStack_f8 == uStack_108) {
        func_0x0001089a4bf8(&uStack_108);
      }
      puVar1 = (undefined8 *)(lStack_100 + uVar11 * 0x20);
      puVar1[1] = uStack_e8;
      *puVar1 = CONCAT71(uStack_ef,cStack_f0);
      puVar1[3] = uStack_d8;
      puVar1[2] = uStack_e0;
      uStack_f8 = uVar11 + 1;
      plVar13 = plVar19;
    } while (plVar19 != plVar14);
    goto LAB_1017c64c0;
  }
  uVar6 = func_0x0001087c9084(8,uVar11 << 5);
  func_0x0001017a6a48(&cStack_f0);
  FUN_1017a8100(&uStack_108);
  __Unwind_Resume(uVar6);
  auVar21 = func_0x000108a07bc4();
  lVar12 = auVar21._8_8_;
  puVar7 = auVar21._0_8_;
  uStack_118 = 0x1017c65cc;
  lVar17 = *(long *)(lVar12 + 8);
  lVar18 = *(long *)(lVar12 + 0x18);
  uStack_1c8 = (ulong)(lVar18 - lVar17) >> 5;
  if (0x7fff < uStack_1c8) {
    uStack_1c8 = 0x8000;
  }
  if (lVar18 == lVar17) {
    uStack_1c8 = 0;
    lStack_1c0 = 8;
    lStack_1b8 = 0;
LAB_1017c66ec:
    uStack_180 = (undefined1)lStack_1c0;
    uStack_188 = (undefined1)uStack_1c8;
    uStack_187 = (undefined7)(uStack_1c8 >> 8);
    *puVar7 = 0x14;
    *(ulong *)(puVar7 + 9) = CONCAT17(uStack_180,uStack_187);
    *(ulong *)(puVar7 + 1) = CONCAT17(uStack_188,uStack_18f);
    *(long *)(puVar7 + 0x18) = lStack_1b8;
    *(long *)(puVar7 + 0x10) = lStack_1c0;
    return;
  }
  lVar15 = uStack_1c8 << 5;
  puStack_120 = &stack0xfffffffffffffff0;
  lVar8 = _malloc(lVar15);
  if (lVar8 != 0) {
    lVar15 = 0;
    lStack_1b8 = 0;
    lVar20 = *(long *)(lVar12 + 0x20);
    lVar3 = 1;
    lStack_1c0 = lVar8;
    do {
      lVar16 = lVar3;
      pcVar2 = (char *)(lVar17 + lVar15);
      cVar4 = *pcVar2;
      *(char **)(lVar12 + 8) = pcVar2 + 0x20;
      if (cVar4 == '\x16') break;
      uVar6 = *(undefined8 *)(pcVar2 + 8);
      *(long *)(lVar12 + 0x20) = lVar20 + lVar16;
      if (cVar4 == '\x17') {
        *(undefined8 *)(puVar7 + 8) = uVar6;
        *puVar7 = 0x16;
        lVar12 = lVar8;
        while (lVar16 = lVar16 + -1, lVar16 != 0) {
          func_0x0001017a6a48(lVar12);
          lVar12 = lVar12 + 0x20;
        }
        if (uStack_1c8 == 0) {
          return;
        }
        _free(lVar8);
        return;
      }
      lVar3 = lVar17 + lVar15;
      *(undefined4 *)((ulong)&cStack_1b0 | 1) = *(undefined4 *)(lVar3 + 1);
      *(undefined4 *)((long)((ulong)&cStack_1b0 | 1) + 3) = *(undefined4 *)(lVar3 + 4);
      uStack_198 = *(undefined8 *)(lVar3 + 0x18);
      uStack_1a0 = *(undefined8 *)(lVar3 + 0x10);
      cStack_1b0 = cVar4;
      uStack_1a8 = uVar6;
      if (lVar16 - 1U == uStack_1c8) {
        func_0x0001089a4bf8(&uStack_1c8);
        lVar8 = lStack_1c0;
      }
      puVar1 = (undefined8 *)(lVar8 + lVar15);
      puVar1[1] = uStack_1a8;
      *puVar1 = CONCAT71(uStack_1af,cStack_1b0);
      puVar1[3] = uStack_198;
      puVar1[2] = uStack_1a0;
      lVar15 = lVar15 + 0x20;
      lVar3 = lVar16 + 1;
      lStack_1b8 = lVar16;
    } while (lVar17 + lVar15 != lVar18);
    goto LAB_1017c66ec;
  }
  uVar9 = func_0x0001087c9084(8,lVar15);
  func_0x0001017a6a48(&cStack_1b0);
  FUN_1017a8100(&uStack_1c8);
  __Unwind_Resume(uVar9);
  _free(uVar6);
  __Unwind_Resume(uVar9);
  auVar21 = func_0x000108a07bc4();
  pbVar10 = auVar21._8_8_;
  uStack_1d8 = 0x1017c67e0;
  bVar5 = *pbVar10;
  lStack_200 = lVar15;
  lStack_1f8 = lVar12;
  uStack_1f0 = uVar9;
  uStack_1e8 = uVar6;
  ppuStack_1e0 = &puStack_120;
  if (bVar5 < 5) {
    if (bVar5 < 3) {
      if (bVar5 == 1) {
        uVar11 = (ulong)pbVar10[1];
      }
      else {
        if (bVar5 != 2) {
LAB_1017c6928:
          uVar11 = FUN_10888066c(pbVar10,&uStack_201,&UNK_10b2597d8);
LAB_1017c6970:
          uVar6 = 2;
          goto LAB_1017c6910;
        }
        uVar11 = (ulong)*(ushort *)(pbVar10 + 2);
      }
    }
    else if (bVar5 == 3) {
      uVar11 = (ulong)*(uint *)(pbVar10 + 4);
    }
    else {
      if (bVar5 != 4) goto LAB_1017c6928;
      uVar11 = *(ulong *)(pbVar10 + 8);
    }
  }
  else if (bVar5 < 7) {
    if (bVar5 == 5) {
      uVar11 = (ulong)(char)pbVar10[1];
      if ((long)uVar11 < 0) {
        auStack_220[0] = 2;
        uStack_218 = uVar11;
        uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (auStack_220,&uStack_201,&UNK_10b2597d8);
LAB_1017c6964:
        func_0x0001017a6a48(pbVar10);
        goto LAB_1017c6970;
      }
    }
    else {
      if (bVar5 != 6) goto LAB_1017c6928;
      uVar11 = (ulong)*(short *)(pbVar10 + 2);
      if ((long)uVar11 < 0) {
        auStack_220[0] = 2;
        uStack_218 = uVar11;
        uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (auStack_220,&uStack_201,&UNK_10b2597d8);
        goto LAB_1017c6964;
      }
    }
  }
  else if (bVar5 == 7) {
    uVar11 = (ulong)*(int *)(pbVar10 + 4);
    if (*(int *)(pbVar10 + 4) < 0) {
      auStack_220[0] = 2;
      uStack_218 = uVar11;
      uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                         (auStack_220,&uStack_201,&UNK_10b2597d8);
      goto LAB_1017c6964;
    }
  }
  else {
    if (bVar5 != 8) goto LAB_1017c6928;
    uVar11 = *(ulong *)(pbVar10 + 8);
    if ((long)uVar11 < 0) {
      auStack_220[0] = 2;
      uStack_218 = uVar11;
      uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                         (auStack_220,&uStack_201,&UNK_10b2597d8);
      goto LAB_1017c6964;
    }
  }
  func_0x0001017a6a48(pbVar10);
  uVar6 = 1;
LAB_1017c6910:
  *auVar21._0_8_ = uVar6;
  auVar21._0_8_[1] = uVar11;
  return;
}

