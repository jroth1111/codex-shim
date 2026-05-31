
long FUN_10176936c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  int aiStack_68 [2];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  bVar1 = *param_2;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      lVar6 = *(long *)(param_2 + 0x18);
    }
    else {
      if (bVar1 != 0xd) {
LAB_10176945c:
        lVar6 = FUN_108876268(param_2,&uStack_31,&UNK_10b256518);
        goto LAB_101769470;
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
    }
  }
  else {
    if (bVar1 == 0xe) {
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      if (bVar1 != 0xf) goto LAB_10176945c;
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)(param_2 + 0x10);
    }
    func_0x0001055bf348(aiStack_68,uVar10,uVar11);
    uVar2 = uStack_60;
    lVar6 = lStack_58;
    if (aiStack_68[0] == 1) {
      auStack_50[0] = 6;
      uStack_48 = uVar10;
      uStack_40 = uVar11;
      lVar6 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b256518);
LAB_101769470:
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar6;
      return lVar6;
    }
  }
  if (lVar6 == 0) {
    lVar12 = 1;
LAB_10176940c:
    lVar3 = _memcpy(lVar12,uVar2,lVar6);
    *param_1 = lVar6;
    param_1[1] = lVar12;
    param_1[2] = lVar6;
    return lVar3;
  }
  lVar12 = _malloc(lVar6);
  if (lVar12 != 0) goto LAB_10176940c;
  pbVar4 = (byte *)func_0x0001087c9084(1,lVar6);
  uStack_78 = 0x101769488;
  bVar1 = *pbVar4;
  lStack_90 = lVar6;
  plStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  if (bVar1 - 0xc < 2) {
    pbVar5 = (byte *)0x0;
  }
  else {
    if (bVar1 != 0x15) {
      func_0x000108876058(&uStack_b0,pbVar4);
      lVar6 = func_0x000108a4a50c(&uStack_b0,&UNK_10b2564e8,&UNK_10b2564c8);
      return lVar6;
    }
    if (*(long *)(pbVar4 + 0x18) != 1) {
      uStack_b0 = 0xb;
      puVar7 = &UNK_10b2564b8;
      goto LAB_10176962c;
    }
    pbVar4 = *(byte **)(pbVar4 + 0x10);
    pbVar5 = pbVar4 + 0x20;
    bVar1 = *pbVar4;
  }
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      uStack_a8 = (ulong)pbVar4[1];
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_101769690:
          puVar7 = &UNK_10b2566b8;
          goto LAB_1017696a0;
        }
        psVar9 = *(short **)(pbVar4 + 0x10);
        lVar6 = *(long *)(pbVar4 + 0x18);
        goto LAB_1017695d4;
      }
      uStack_a8 = *(ulong *)(pbVar4 + 8);
    }
    if (uStack_a8 != 0) {
      uStack_b0 = 1;
      puVar7 = &UNK_10b2573e0;
LAB_10176962c:
      lVar6 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (&uStack_b0,puVar7,&UNK_10b2564c8);
      return lVar6;
    }
  }
  else if (bVar1 == 0xd) {
    psVar9 = *(short **)(pbVar4 + 8);
    lVar6 = *(long *)(pbVar4 + 0x10);
LAB_1017695d4:
    if ((lVar6 != 3) || (*psVar9 != 0x4b4f || (char)psVar9[1] != 'P')) {
      lVar6 = FUN_1088755e4(psVar9,lVar6,&UNK_10b256bf8,1);
      return lVar6;
    }
  }
  else {
    if (bVar1 == 0xe) {
      lVar12 = 0x18;
      lVar6 = 0x10;
    }
    else {
      if (bVar1 != 0xf) goto LAB_101769690;
      lVar12 = 0x10;
      lVar6 = 8;
    }
    pcVar8 = *(char **)(pbVar4 + lVar6);
    if ((((*(long *)(pbVar4 + lVar12) != 3) || (*pcVar8 != 'O')) || (pcVar8[1] != 'K')) ||
       (pcVar8[2] != 'P')) {
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_b0,pcVar8);
      lVar6 = FUN_1088755e4(uStack_a8,uStack_a0,&UNK_10b256bf8,1);
      if ((CONCAT71(uStack_af,uStack_b0) & 0x7fffffffffffffff) == 0) {
        return lVar6;
      }
      _free(uStack_a8);
      return lVar6;
    }
  }
  if (pbVar5 == (byte *)0x0) {
    return 0;
  }
  if (*pbVar5 == 0x12) {
    return 0;
  }
  puVar7 = &UNK_10b2564f8;
  pbVar4 = pbVar5;
LAB_1017696a0:
  lVar6 = FUN_108876268(pbVar4,&uStack_91,puVar7);
  return lVar6;
}

