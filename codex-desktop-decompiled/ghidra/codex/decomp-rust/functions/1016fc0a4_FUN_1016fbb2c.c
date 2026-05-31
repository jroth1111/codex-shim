
long FUN_1016fbb2c(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  char cStack_a0;
  byte bStack_9f;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 auStack_68 [3];
  
  uVar6 = param_1[4];
  uVar13 = param_1[5];
  if (uVar13 < uVar6) {
    plVar9 = param_1 + 3;
    lVar5 = *plVar9;
    do {
      bVar1 = *(byte *)(lVar5 + uVar13);
      if (0x3a < bVar1) goto LAB_1016fc03c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x3a) goto LAB_1016fc03c;
        uVar13 = uVar13 + 1;
        param_1[5] = uVar13;
        param_1[2] = 0;
        if (uVar6 <= uVar13) goto LAB_1016fbfe4;
        uVar10 = 0;
        uVar11 = 0;
        goto LAB_1016fbbe8;
      }
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
    } while (uVar6 != uVar13);
  }
LAB_1016fbfd4:
  auStack_68[0] = 3;
LAB_1016fbfe8:
  lVar5 = FUN_108873af4(param_1,auStack_68);
  return lVar5;
LAB_1016fbbe8:
  lVar8 = uVar13 + 5;
  while( true ) {
    bVar1 = *(byte *)(lVar5 + lVar8 + -5);
    uVar13 = (ulong)bVar1;
    uVar12 = (uint)bVar1;
    if (0x2c < bVar1) break;
    if (0x22 < uVar12) goto LAB_1016fbe3c;
    if ((1L << (uVar13 & 0x3f) & 0x100002600U) == 0) {
      if (uVar13 != 0x22) goto LAB_1016fbe3c;
      param_1[5] = lVar8 + -4;
      lVar5 = __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_10ignore_str17h491967d5f6147ceeE
                        (plVar9);
      goto joined_r0x0001016fbe50;
    }
    param_1[5] = lVar8 + -4;
    lVar8 = lVar8 + 1;
    if (lVar8 - uVar6 == 5) goto LAB_1016fbfe4;
  }
  if (uVar12 == 0x6d || bVar1 < 0x6d) {
    if (uVar12 == 0x2d) {
      param_1[5] = lVar8 + -4;
LAB_1016fbe48:
      lVar5 = func_0x0001016ff3d4(param_1);
joined_r0x0001016fbe50:
      if (lVar5 != 0) {
        return lVar5;
      }
      goto LAB_1016fbe54;
    }
    if (uVar12 != 0x5b) {
      if (uVar12 == 0x66) {
        uVar7 = lVar8 - 4;
        param_1[5] = uVar7;
        uVar13 = uVar7;
        if (uVar7 <= uVar6) {
          uVar13 = uVar6;
        }
        if (uVar7 < uVar6) {
          cVar2 = *(char *)(lVar5 + lVar8 + -4);
          param_1[5] = lVar8 - 3U;
          if (cVar2 != 'a') goto LAB_1016fc034;
          if (lVar8 - 3U != uVar13) {
            cVar2 = *(char *)(lVar5 + lVar8 + -3);
            param_1[5] = lVar8 - 2U;
            if (cVar2 != 'l') goto LAB_1016fc034;
            if (lVar8 - 2U != uVar13) {
              cVar2 = *(char *)(lVar5 + lVar8 + -2);
              param_1[5] = lVar8 - 1U;
              if (cVar2 != 's') goto LAB_1016fc034;
              if (lVar8 - 1U != uVar13) {
                cVar2 = *(char *)(lVar5 + lVar8 + -1);
                param_1[5] = lVar8;
                goto LAB_1016fbdb4;
              }
            }
          }
        }
        goto LAB_1016fc01c;
      }
LAB_1016fbe3c:
      if (uVar12 - 0x30 < 10) goto LAB_1016fbe48;
      auStack_68[0] = 10;
      goto LAB_1016fbfe8;
    }
LAB_1016fbcec:
    lVar5 = param_1[2];
    if ((ulong)(*param_1 - lVar5) < uVar11) {
      FUN_108874674(param_1);
      lVar5 = param_1[2];
    }
    if ((int)uVar11 != 0) {
      *(char *)(param_1[1] + lVar5) = (char)uVar10;
      lVar5 = lVar5 + 1;
    }
    bVar3 = false;
    param_1[2] = lVar5;
    param_1[5] = param_1[5] + 1;
    uVar10 = uVar13;
  }
  else {
    if (uVar12 != 0x6e) {
      if (uVar12 != 0x74) {
        if (uVar12 != 0x7b) goto LAB_1016fbe3c;
        goto LAB_1016fbcec;
      }
      uVar7 = lVar8 - 4;
      param_1[5] = uVar7;
      uVar13 = uVar7;
      if (uVar7 <= uVar6) {
        uVar13 = uVar6;
      }
      if (uVar7 < uVar6) {
        cVar2 = *(char *)(lVar5 + lVar8 + -4);
        param_1[5] = lVar8 - 3U;
        if (cVar2 == 'r') {
          if (lVar8 - 3U == uVar13) goto LAB_1016fc01c;
          cVar2 = *(char *)(lVar5 + lVar8 + -3);
          param_1[5] = lVar8 - 2U;
          if (cVar2 == 'u') {
            if (lVar8 - 2U == uVar13) goto LAB_1016fc01c;
            cVar2 = *(char *)(lVar5 + lVar8 + -2);
            param_1[5] = lVar8 + -1;
LAB_1016fbdb4:
            if (cVar2 == 'e') goto LAB_1016fbe54;
          }
        }
LAB_1016fc034:
        auStack_68[0] = 9;
        goto LAB_1016fc020;
      }
LAB_1016fc01c:
      auStack_68[0] = 5;
LAB_1016fc020:
      lVar5 = func_0x000108873e70(param_1,auStack_68);
      return lVar5;
    }
    uVar7 = lVar8 - 4;
    param_1[5] = uVar7;
    uVar13 = uVar7;
    if (uVar7 <= uVar6) {
      uVar13 = uVar6;
    }
    if (uVar6 <= uVar7) goto LAB_1016fc01c;
    cVar2 = *(char *)(lVar5 + lVar8 + -4);
    param_1[5] = lVar8 - 3U;
    if (cVar2 != 'u') goto LAB_1016fc034;
    if (lVar8 - 3U == uVar13) goto LAB_1016fc01c;
    cVar2 = *(char *)(lVar5 + lVar8 + -3);
    param_1[5] = lVar8 - 2U;
    if (cVar2 != 'l') goto LAB_1016fc034;
    if (lVar8 - 2U == uVar13) goto LAB_1016fc01c;
    cVar2 = *(char *)(lVar5 + lVar8 + -2);
    param_1[5] = lVar8 + -1;
    if (cVar2 != 'l') goto LAB_1016fc034;
LAB_1016fbe54:
    if ((int)uVar11 == 0) {
      if (param_1[2] == 0) {
        return 0;
      }
      lVar5 = param_1[2] + -1;
      param_1[2] = lVar5;
      uVar10 = (ulong)*(byte *)(param_1[1] + lVar5);
    }
    bVar3 = true;
  }
  uVar12 = (uint)uVar10;
  uVar6 = param_1[4];
  uVar13 = param_1[5];
  if (uVar13 < uVar6) {
    lVar8 = param_1[2];
    lVar5 = param_1[3];
LAB_1016fbe88:
    do {
      bVar1 = *(byte *)(lVar5 + uVar13);
      uVar12 = (uint)uVar10;
      if (bVar1 < 0x2d) {
        if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
          uVar13 = uVar13 + 1;
          param_1[5] = uVar13;
          if (uVar6 == uVar13) break;
          goto LAB_1016fbe88;
        }
        if ((ulong)bVar1 == 0x2c) {
          if (bVar3) {
            uVar13 = uVar13 + 1;
            param_1[5] = uVar13;
          }
          goto LAB_1016fbf1c;
        }
      }
      if (bVar1 == 0x5d) {
        if (uVar12 != 0x5b) goto LAB_1016fbf08;
      }
      else if ((bVar1 != 0x7d) || (uVar12 != 0x7b)) goto LAB_1016fbf08;
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
      if (lVar8 == 0) {
        return 0;
      }
      lVar8 = lVar8 + -1;
      param_1[2] = lVar8;
      uVar10 = (ulong)*(byte *)(param_1[1] + lVar8);
      uVar12 = (uint)*(byte *)(param_1[1] + lVar8);
      bVar3 = true;
      if (uVar6 <= uVar13) break;
    } while( true );
  }
  if (uVar12 != 0x5b) {
    if (uVar12 != 0x7b) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cde801,0x28,&UNK_10b254e58);
      goto LAB_1016fc08c;
    }
    goto LAB_1016fbfd4;
  }
  auStack_68[0] = 2;
  goto LAB_1016fbfe8;
LAB_1016fbf08:
  if (bVar3) {
    if (uVar12 == 0x5b) {
      auStack_68[0] = 7;
    }
    else {
      if (uVar12 != 0x7b) {
LAB_1016fc08c:
        auVar14 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cde801,0x28,&UNK_10b254e70);
        puVar4 = auVar14._0_8_;
        uStack_78 = 0x1016fc0a4;
        plStack_90 = plVar9;
        plStack_88 = param_1;
        puStack_80 = &stack0xfffffffffffffff0;
        lVar5 = FUN_10170bbf8(&cStack_a0);
        if (cStack_a0 != '\x01') {
          if ((bStack_9f & 1) == 0) {
            *puVar4 = 0x200;
            return lVar5;
          }
          lVar5 = FUN_10170bfcc(&cStack_a0,*auVar14._8_8_);
          if (cStack_a0 != '\x01') {
            *(byte *)((long)puVar4 + 1) = bStack_9f;
            *(undefined1 *)puVar4 = 0;
            return lVar5;
          }
        }
        *(undefined8 *)(puVar4 + 4) = uStack_98;
        *(undefined1 *)puVar4 = 1;
        return lVar5;
      }
      auStack_68[0] = 8;
    }
    goto LAB_1016fbfe8;
  }
LAB_1016fbf1c:
  if (uVar12 == 0x7b) {
    if (uVar6 <= uVar13) goto LAB_1016fbfd4;
    while( true ) {
      bVar1 = *(byte *)(lVar5 + uVar13);
      if (0x22 < bVar1) goto LAB_1016fc05c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
      if (uVar6 == uVar13) goto LAB_1016fbfd4;
    }
    if ((ulong)bVar1 != 0x22) {
LAB_1016fc05c:
      auStack_68[0] = 0x11;
      goto LAB_1016fbfe8;
    }
    param_1[5] = uVar13 + 1;
    lVar5 = __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_10ignore_str17h491967d5f6147ceeE
                      (plVar9);
    if (lVar5 != 0) {
      return lVar5;
    }
    uVar6 = param_1[4];
    uVar13 = param_1[5];
    if (uVar6 <= uVar13) goto LAB_1016fbfd4;
    lVar5 = *plVar9;
    while( true ) {
      bVar1 = *(byte *)(lVar5 + uVar13);
      if (0x3a < bVar1) goto LAB_1016fc03c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
      if (uVar6 == uVar13) goto LAB_1016fbfd4;
    }
    if ((ulong)bVar1 != 0x3a) goto LAB_1016fc03c;
    uVar13 = uVar13 + 1;
    param_1[5] = uVar13;
  }
  uVar11 = 1;
  if (uVar6 <= uVar13) goto LAB_1016fbfe4;
  goto LAB_1016fbbe8;
LAB_1016fc03c:
  auStack_68[0] = 6;
  goto LAB_1016fbfe8;
LAB_1016fbfe4:
  auStack_68[0] = 5;
  goto LAB_1016fbfe8;
}

