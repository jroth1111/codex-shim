
long FUN_101779248(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
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
  char cStack_a8;
  byte bStack_a7;
  undefined6 uStack_a6;
  undefined8 uStack_a0;
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
      if (0x3a < bVar1) goto LAB_101779760;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x3a) goto LAB_101779760;
        uVar13 = uVar13 + 1;
        param_1[5] = uVar13;
        param_1[2] = 0;
        if (uVar6 <= uVar13) goto LAB_101779708;
        uVar10 = 0;
        uVar11 = 0;
        goto LAB_101779304;
      }
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
    } while (uVar6 != uVar13);
  }
LAB_1017796f8:
  auStack_68[0] = 3;
LAB_10177970c:
  lVar5 = FUN_10887ea38(param_1,auStack_68);
  return lVar5;
LAB_101779304:
  lVar8 = uVar13 + 5;
  while( true ) {
    bVar1 = *(byte *)(lVar5 + lVar8 + -5);
    uVar13 = (ulong)bVar1;
    uVar12 = (uint)bVar1;
    if (0x2c < bVar1) break;
    if (0x22 < uVar12) goto LAB_101779558;
    if ((1L << (uVar13 & 0x3f) & 0x100002600U) == 0) {
      if (uVar13 != 0x22) goto LAB_101779558;
      param_1[5] = lVar8 + -4;
      lVar5 = __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_10ignore_str17h491967d5f6147ceeE
                        (plVar9);
      goto joined_r0x00010177956c;
    }
    param_1[5] = lVar8 + -4;
    lVar8 = lVar8 + 1;
    if (lVar8 - uVar6 == 5) goto LAB_101779708;
  }
  if (uVar12 == 0x6d || bVar1 < 0x6d) {
    if (uVar12 == 0x2d) {
      param_1[5] = lVar8 + -4;
LAB_101779564:
      lVar5 = FUN_10177ae68(param_1);
joined_r0x00010177956c:
      if (lVar5 != 0) {
        return lVar5;
      }
      goto LAB_101779570;
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
          if (cVar2 != 'a') goto LAB_101779758;
          if (lVar8 - 3U != uVar13) {
            cVar2 = *(char *)(lVar5 + lVar8 + -3);
            param_1[5] = lVar8 - 2U;
            if (cVar2 != 'l') goto LAB_101779758;
            if (lVar8 - 2U != uVar13) {
              cVar2 = *(char *)(lVar5 + lVar8 + -2);
              param_1[5] = lVar8 - 1U;
              if (cVar2 != 's') goto LAB_101779758;
              if (lVar8 - 1U != uVar13) {
                cVar2 = *(char *)(lVar5 + lVar8 + -1);
                param_1[5] = lVar8;
                goto LAB_1017794d0;
              }
            }
          }
        }
        goto LAB_101779740;
      }
LAB_101779558:
      if (uVar12 - 0x30 < 10) goto LAB_101779564;
      auStack_68[0] = 10;
      goto LAB_10177970c;
    }
LAB_101779408:
    lVar5 = param_1[2];
    if ((ulong)(*param_1 - lVar5) < uVar11) {
      FUN_108880448(param_1,lVar5,uVar11,1,1);
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
        if (uVar12 != 0x7b) goto LAB_101779558;
        goto LAB_101779408;
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
          if (lVar8 - 3U == uVar13) goto LAB_101779740;
          cVar2 = *(char *)(lVar5 + lVar8 + -3);
          param_1[5] = lVar8 - 2U;
          if (cVar2 == 'u') {
            if (lVar8 - 2U == uVar13) goto LAB_101779740;
            cVar2 = *(char *)(lVar5 + lVar8 + -2);
            param_1[5] = lVar8 + -1;
LAB_1017794d0:
            if (cVar2 == 'e') goto LAB_101779570;
          }
        }
LAB_101779758:
        auStack_68[0] = 9;
        goto LAB_101779744;
      }
LAB_101779740:
      auStack_68[0] = 5;
LAB_101779744:
      lVar5 = FUN_10887f4a4(param_1,auStack_68);
      return lVar5;
    }
    uVar7 = lVar8 - 4;
    param_1[5] = uVar7;
    uVar13 = uVar7;
    if (uVar7 <= uVar6) {
      uVar13 = uVar6;
    }
    if (uVar6 <= uVar7) goto LAB_101779740;
    cVar2 = *(char *)(lVar5 + lVar8 + -4);
    param_1[5] = lVar8 - 3U;
    if (cVar2 != 'u') goto LAB_101779758;
    if (lVar8 - 3U == uVar13) goto LAB_101779740;
    cVar2 = *(char *)(lVar5 + lVar8 + -3);
    param_1[5] = lVar8 - 2U;
    if (cVar2 != 'l') goto LAB_101779758;
    if (lVar8 - 2U == uVar13) goto LAB_101779740;
    cVar2 = *(char *)(lVar5 + lVar8 + -2);
    param_1[5] = lVar8 + -1;
    if (cVar2 != 'l') goto LAB_101779758;
LAB_101779570:
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
LAB_1017795a4:
    do {
      bVar1 = *(byte *)(lVar5 + uVar13);
      uVar12 = (uint)uVar10;
      if (bVar1 < 0x2d) {
        if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
          uVar13 = uVar13 + 1;
          param_1[5] = uVar13;
          if (uVar6 == uVar13) break;
          goto LAB_1017795a4;
        }
        if ((ulong)bVar1 == 0x2c) {
          if (bVar3) {
            uVar13 = uVar13 + 1;
            param_1[5] = uVar13;
          }
          goto LAB_101779638;
        }
      }
      if (bVar1 == 0x5d) {
        if (uVar12 != 0x5b) goto LAB_101779624;
      }
      else if ((bVar1 != 0x7d) || (uVar12 != 0x7b)) goto LAB_101779624;
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
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce2f8f,0x28,&UNK_10b259380);
      goto LAB_1017797b0;
    }
    goto LAB_1017796f8;
  }
  auStack_68[0] = 2;
  goto LAB_10177970c;
LAB_101779624:
  if (bVar3) {
    if (uVar12 == 0x5b) {
      auStack_68[0] = 7;
    }
    else {
      if (uVar12 != 0x7b) {
LAB_1017797b0:
        auVar14 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce2f8f,0x28,&UNK_10b259398);
        puVar4 = auVar14._0_8_;
        uStack_78 = 0x1017797c8;
        plStack_90 = plVar9;
        plStack_88 = param_1;
        puStack_80 = &stack0xfffffffffffffff0;
        lVar5 = FUN_1017b8fd0(&cStack_a8);
        if (cStack_a8 != '\x01') {
          if ((bStack_a7 & 1) == 0) {
            *puVar4 = 0x8000000000000001;
            return lVar5;
          }
          lVar5 = FUN_1017c0610(&cStack_a8,*auVar14._8_8_);
          if (CONCAT62(uStack_a6,CONCAT11(bStack_a7,cStack_a8)) != -0x7fffffffffffffff) {
            puVar4[1] = uStack_a0;
            *puVar4 = CONCAT62(uStack_a6,CONCAT11(bStack_a7,cStack_a8));
            puVar4[2] = uStack_98;
            return lVar5;
          }
        }
        *puVar4 = 0x8000000000000002;
        puVar4[1] = uStack_a0;
        return lVar5;
      }
      auStack_68[0] = 8;
    }
    goto LAB_10177970c;
  }
LAB_101779638:
  if (uVar12 == 0x7b) {
    if (uVar6 <= uVar13) goto LAB_1017796f8;
    while( true ) {
      bVar1 = *(byte *)(lVar5 + uVar13);
      if (0x22 < bVar1) goto LAB_101779780;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
      if (uVar6 == uVar13) goto LAB_1017796f8;
    }
    if ((ulong)bVar1 != 0x22) {
LAB_101779780:
      auStack_68[0] = 0x11;
      goto LAB_10177970c;
    }
    param_1[5] = uVar13 + 1;
    lVar5 = __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_10ignore_str17h491967d5f6147ceeE
                      (plVar9);
    if (lVar5 != 0) {
      return lVar5;
    }
    uVar6 = param_1[4];
    uVar13 = param_1[5];
    if (uVar6 <= uVar13) goto LAB_1017796f8;
    lVar5 = *plVar9;
    while( true ) {
      bVar1 = *(byte *)(lVar5 + uVar13);
      if (0x3a < bVar1) goto LAB_101779760;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar13 = uVar13 + 1;
      param_1[5] = uVar13;
      if (uVar6 == uVar13) goto LAB_1017796f8;
    }
    if ((ulong)bVar1 != 0x3a) goto LAB_101779760;
    uVar13 = uVar13 + 1;
    param_1[5] = uVar13;
  }
  uVar11 = 1;
  if (uVar6 <= uVar13) goto LAB_101779708;
  goto LAB_101779304;
LAB_101779760:
  auStack_68[0] = 6;
  goto LAB_10177970c;
LAB_101779708:
  auStack_68[0] = 5;
  goto LAB_10177970c;
}

