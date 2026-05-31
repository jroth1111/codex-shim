
void FUN_1011c1348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined6 uStack_b3e;
  ulong uStack_ad0;
  ulong uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  ulong uStack_aa8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  long lStack_9c0;
  undefined8 *puStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_9c0 = 0;
  lVar27 = param_2[0x127];
  if (lVar27 == 0) {
    lStack_378 = 0;
    puStack_370 = (undefined8 *)0x8;
LAB_1011c1438:
    puStack_9b8 = puStack_370;
    lStack_9c0 = lStack_378;
    uVar9 = *param_2;
    uVar1 = param_2[1];
    lStack_9b0 = lVar27;
    FUN_1014fd950(&uStack_9a8,param_2 + 0x5f);
    FUN_101513598(&lStack_378,param_2 + 2);
    uVar5 = *(undefined1 *)(param_2 + 299);
    uVar26 = 0x8000000000000000;
    if (param_2[0x128] != -0x8000000000000000) {
      FUN_101146714(&uStack_78,param_2[0x129],param_2[0x12a]);
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uVar26 = uStack_78;
    }
    param_1[0x127] = lStack_9b0;
    param_1[0x126] = puStack_9b8;
    param_1[0x125] = lStack_9c0;
    *param_1 = uVar9;
    param_1[1] = uVar1;
    _memcpy(param_1 + 0x5f,&uStack_9a8,0x630);
    _memcpy(param_1 + 2,&lStack_378,0x2e8);
    *(undefined1 *)(param_1 + 299) = uVar5;
    param_1[0x128] = uVar26;
    param_1[0x12a] = uStack_88;
    param_1[0x129] = uStack_90;
    return;
  }
  lVar23 = param_2[0x126];
  puVar8 = (undefined8 *)_malloc(lVar27 * 0xe8);
  if (puVar8 != (undefined8 *)0x0) {
    lVar25 = 0;
    lVar28 = lVar27 * 0xe8;
    lStack_378 = lVar27;
    puStack_370 = puVar8;
    do {
      if (lVar28 == 0) break;
      FUN_1011c0ee8(&uStack_9a8,lVar23);
      puVar8[0x19] = uStack_8e0;
      puVar8[0x18] = uStack_8e8;
      puVar8[0x1b] = uStack_8d0;
      puVar8[0x1a] = uStack_8d8;
      puVar8[0x11] = uStack_920;
      puVar8[0x10] = uStack_928;
      puVar8[0x13] = uStack_910;
      puVar8[0x12] = uStack_918;
      lVar25 = lVar25 + 1;
      lVar23 = lVar23 + 0xe8;
      puVar8[0x1c] = uStack_8c8;
      puVar8[0x15] = uStack_900;
      puVar8[0x14] = uStack_908;
      puVar8[0x17] = uStack_8f0;
      puVar8[0x16] = uStack_8f8;
      puVar8[9] = uStack_960;
      puVar8[8] = uStack_968;
      puVar8[0xb] = uStack_950;
      puVar8[10] = uStack_958;
      puVar8[0xd] = uStack_940;
      puVar8[0xc] = uStack_948;
      puVar8[0xf] = uStack_930;
      puVar8[0xe] = uStack_938;
      puVar8[1] = uStack_9a0;
      *puVar8 = uStack_9a8;
      puVar8[3] = uStack_990;
      puVar8[2] = uStack_998;
      lVar28 = lVar28 + -0xe8;
      puVar8[5] = uStack_980;
      puVar8[4] = uStack_988;
      puVar8[7] = uStack_970;
      puVar8[6] = uStack_978;
      puVar8 = puVar8 + 0x1d;
    } while (lVar27 != lVar25);
    goto LAB_1011c1438;
  }
  uVar9 = func_0x0001087c9084(8,lVar27 * 0xe8);
  FUN_100e4301c(&lStack_378);
  FUN_100e38160(&uStack_9a8);
  FUN_100e4a420(&lStack_9c0);
  __Unwind_Resume(uVar9);
  auVar30 = func_0x000108a07bc4();
  puVar18 = auVar30._8_8_;
  puVar10 = auVar30._0_8_;
  uVar20 = *puVar18 ^ 0x8000000000000000;
  if (-1 < (long)*puVar18) {
    uVar20 = 2;
  }
  if ((long)uVar20 < 2) {
    if (uVar20 == 0) {
      uVar20 = 0x8000000000000000;
    }
    else {
      uVar20 = 0x8000000000000001;
    }
    goto LAB_1011c1730;
  }
  if (uVar20 != 2) {
    uVar20 = puVar18[2];
    uVar21 = puVar18[3];
    if (uVar21 == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = _malloc(uVar21);
      if (uVar11 == 0) goto LAB_1011c1750;
    }
    _memcpy(uVar11,uVar20,uVar21);
    FUN_1011ee9ec(&uStack_a58,puVar18 + 0xd);
    uStack_ac8 = uStack_a50;
    uStack_ad0 = uStack_a58;
    uStack_ab8 = uStack_a40;
    uStack_ac0 = uStack_a48;
    uStack_aa8 = uStack_a30;
    uStack_ab0 = uStack_a38;
    uVar20 = 0x8000000000000001;
    if (puVar18[4] != 0x8000000000000001) {
      FUN_1011a1084(&uStack_a58,puVar18 + 4);
      uStack_a98 = uStack_a48;
      uStack_aa0 = uStack_a50;
      uStack_a88 = uStack_a38;
      uStack_a90 = uStack_a40;
      uStack_a78 = uStack_a28;
      uStack_a80 = uStack_a30;
      uStack_a68 = uStack_a18;
      uStack_a70 = uStack_a20;
      uVar20 = uStack_a58;
    }
    puVar10[0xe] = uStack_ac8;
    puVar10[0xd] = uStack_ad0;
    puVar10[0x10] = uStack_ab8;
    puVar10[0xf] = uStack_ac0;
    puVar10[0x12] = uStack_aa8;
    puVar10[0x11] = uStack_ab0;
    puVar10[6] = uStack_a98;
    puVar10[5] = uStack_aa0;
    puVar10[8] = uStack_a88;
    puVar10[7] = uStack_a90;
    puVar10[10] = uStack_a78;
    puVar10[9] = uStack_a80;
    puVar10[2] = uVar11;
    puVar10[3] = uVar21;
    puVar10[4] = uVar20;
    puVar10[0xc] = uStack_a68;
    puVar10[0xb] = uStack_a70;
    uVar20 = 0x8000000000000003;
    puVar10[1] = uVar21;
LAB_1011c1730:
    *puVar10 = uVar20;
    return;
  }
  uVar20 = puVar18[1];
  uVar21 = puVar18[2];
  if (uVar21 == 0) {
    uVar11 = 1;
LAB_1011c15f4:
    _memcpy(uVar11,uVar20,uVar21);
    FUN_1011ee9ec(&uStack_a58,puVar18 + 0xc);
    uStack_ac8 = uStack_a50;
    uStack_ad0 = uStack_a58;
    uStack_ab8 = uStack_a40;
    uStack_ac0 = uStack_a48;
    uStack_aa8 = uStack_a30;
    uStack_ab0 = uStack_a38;
    uVar20 = puVar18[0x12];
    uVar12 = 0x8000000000000001;
    if (puVar18[3] != 0x8000000000000001) {
      FUN_1011a1084(&uStack_a58,puVar18 + 3);
      uStack_a98 = uStack_a48;
      uStack_aa0 = uStack_a50;
      uStack_a88 = uStack_a38;
      uStack_a90 = uStack_a40;
      uStack_a78 = uStack_a28;
      uStack_a80 = uStack_a30;
      uStack_a68 = uStack_a18;
      uStack_a70 = uStack_a20;
      uVar12 = uStack_a58;
    }
    *puVar10 = uVar21;
    puVar10[1] = uVar11;
    puVar10[0xd] = uStack_ac8;
    puVar10[0xc] = uStack_ad0;
    puVar10[0xf] = uStack_ab8;
    puVar10[0xe] = uStack_ac0;
    puVar10[0x11] = uStack_aa8;
    puVar10[0x10] = uStack_ab0;
    *(char *)(puVar10 + 0x12) = (char)uVar20;
    puVar10[2] = uVar21;
    puVar10[3] = uVar12;
    puVar10[5] = uStack_a98;
    puVar10[4] = uStack_aa0;
    puVar10[7] = uStack_a88;
    puVar10[6] = uStack_a90;
    puVar10[9] = uStack_a78;
    puVar10[8] = uStack_a80;
    puVar10[0xb] = uStack_a68;
    puVar10[10] = uStack_a70;
    return;
  }
  uVar11 = _malloc(uVar21);
  if (uVar11 != 0) goto LAB_1011c15f4;
LAB_1011c1750:
  uVar9 = func_0x0001087c9084(1,uVar21);
  FUN_100cb56bc(&uStack_ad0);
  if (uVar21 == 0) {
    do {
      uVar9 = __Unwind_Resume(uVar9);
    } while( true );
  }
  _free(param_2);
  auVar30 = __Unwind_Resume(uVar9);
  puVar18 = auVar30._8_8_;
  puVar10 = auVar30._0_8_;
  uVar21 = *puVar18 ^ 0x8000000000000000;
  if (-1 < (long)*puVar18) {
    uVar21 = 3;
  }
  if ((long)uVar21 < 2) {
    if (uVar21 != 0) {
      plVar19 = (long *)puVar18[1];
      plVar2 = (long *)puVar18[2];
      lVar27 = *plVar19;
      *plVar19 = lVar27 + 1;
      if ((-1 < lVar27) && (lVar27 = *plVar2, *plVar2 = lVar27 + 1, -1 < lVar27)) {
        plVar22 = (long *)puVar18[3];
        lVar27 = *plVar22;
        *plVar22 = lVar27 + 1;
        if (-1 < lVar27) {
          uVar20 = puVar18[4];
          puVar10[2] = (ulong)plVar2;
          puVar10[3] = (ulong)plVar22;
          puVar10[4] = uVar20;
          uVar20 = 0x8000000000000001;
          goto LAB_1011c1878;
        }
      }
      goto LAB_1011c1ad4;
    }
    uVar21 = puVar18[2];
    uVar11 = puVar18[3];
    if (uVar11 == 0) {
      uVar12 = 1;
LAB_1011c18a0:
      _memcpy(uVar12,uVar21,uVar11);
      puVar10[2] = uVar12;
      puVar10[3] = uVar11;
      *puVar10 = 0x8000000000000000;
      puVar10[1] = uVar11;
      return;
    }
    uVar12 = _malloc(uVar11);
    if (uVar12 != 0) goto LAB_1011c18a0;
LAB_1011c1a7c:
    func_0x0001087c9084(1,uVar11);
LAB_1011c1a88:
    func_0x0001087c9084(1,uVar20);
    goto LAB_1011c1ad4;
  }
  if (uVar21 == 2) {
    plVar19 = (long *)puVar18[1];
    plVar2 = (long *)puVar18[2];
    lVar27 = *plVar19;
    *plVar19 = lVar27 + 1;
    if ((-1 < lVar27) && (lVar27 = *plVar2, *plVar2 = lVar27 + 1, -1 < lVar27)) {
      puVar10[2] = (ulong)plVar2;
      uVar20 = 0x8000000000000002;
LAB_1011c1878:
      *puVar10 = uVar20;
      puVar10[1] = (ulong)plVar19;
      return;
    }
    goto LAB_1011c1ad4;
  }
  uVar21 = puVar18[1];
  uVar11 = puVar18[2];
  if (uVar11 == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = _malloc(uVar11);
    if (uVar12 == 0) goto LAB_1011c1a7c;
  }
  _memcpy(uVar12,uVar21,uVar11);
  uVar21 = puVar18[4];
  uVar20 = puVar18[5];
  if (uVar20 == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = _malloc(uVar20);
    if (uVar13 == 0) goto LAB_1011c1a88;
  }
  _memcpy(uVar13,uVar21,uVar20);
  uVar21 = puVar18[7];
  uVar3 = puVar18[8];
  if (uVar3 == 0) {
    uVar14 = 1;
    _memcpy(1,uVar21,0);
    uVar21 = puVar18[10];
    uVar29 = puVar18[0xb];
    if (uVar29 != 0) goto LAB_1011c1938;
LAB_1011c198c:
    uVar15 = 1;
    _memcpy(1,uVar21,uVar29);
    uVar21 = puVar18[0xd];
    uVar24 = puVar18[0xe];
    if (uVar24 != 0) goto LAB_1011c195c;
LAB_1011c19a8:
    uVar16 = 1;
  }
  else {
    uVar14 = _malloc(uVar3);
    if (uVar14 == 0) {
      func_0x0001087c9084(1,uVar3);
      goto LAB_1011c1ad4;
    }
    _memcpy(uVar14,uVar21,uVar3);
    uVar21 = puVar18[10];
    uVar29 = puVar18[0xb];
    if (uVar29 == 0) goto LAB_1011c198c;
LAB_1011c1938:
    uVar15 = _malloc(uVar29);
    if (uVar15 == 0) {
      func_0x0001087c9084(1,uVar29);
      goto LAB_1011c1ad4;
    }
    _memcpy(uVar15,uVar21,uVar29);
    uVar21 = puVar18[0xd];
    uVar24 = puVar18[0xe];
    if (uVar24 == 0) goto LAB_1011c19a8;
LAB_1011c195c:
    uVar16 = _malloc(uVar24);
    if (uVar16 == 0) {
      func_0x0001087c9084(1,uVar24);
      goto LAB_1011c1ad4;
    }
  }
  _memcpy(uVar16,uVar21,uVar24);
  uVar6 = puVar18[0xf];
  uVar21 = puVar18[0x11];
  uVar4 = puVar18[0x12];
  if (uVar4 == 0) {
    uVar17 = 1;
  }
  else {
    uVar17 = _malloc(uVar4);
    if (uVar17 == 0) {
      func_0x0001087c9084(1,uVar4);
LAB_1011c1ad4:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1011c1ad8);
      (*pcVar7)();
    }
  }
  _memcpy(uVar17,uVar21,uVar4);
  puVar10[9] = uVar29;
  puVar10[8] = uVar3;
  puVar10[0xb] = uVar29;
  puVar10[10] = uVar15;
  puVar10[0xd] = uVar16;
  puVar10[0xc] = uVar24;
  puVar10[0xf] = CONCAT62(uStack_b3e,(short)uVar6);
  puVar10[0xe] = uVar24;
  puVar10[1] = uVar12;
  *puVar10 = uVar11;
  puVar10[3] = uVar20;
  puVar10[2] = uVar11;
  puVar10[5] = uVar20;
  puVar10[4] = uVar13;
  puVar10[7] = uVar14;
  puVar10[6] = uVar3;
  puVar10[0x10] = uVar4;
  puVar10[0x11] = uVar17;
  puVar10[0x12] = uVar4;
  return;
}

