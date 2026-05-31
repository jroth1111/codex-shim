
void FUN_1004e07f8(long *param_1,byte *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [8];
  ulong uStack_128;
  undefined1 uStack_111;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  int aiStack_d8 [2];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a1;
  long lStack_a0;
  undefined8 uStack_98;
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
  
  bVar7 = *param_2;
  if (bVar7 < 0xe) {
    if (bVar7 == 0xc) {
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      lVar2 = *(long *)(param_2 + 0x18);
    }
    else {
      if (bVar7 != 0xd) {
LAB_1004e08e8:
        lVar2 = thunk_FUN_108855c40(param_2,&uStack_31,&UNK_10b20a5e0);
        goto LAB_1004e08fc;
      }
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar2 = *(long *)(param_2 + 0x10);
    }
  }
  else {
    if (bVar7 == 0xe) {
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      if (bVar7 != 0xf) goto LAB_1004e08e8;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
    }
    func_0x0001055bf348(aiStack_68,uVar8,uVar6);
    uVar1 = uStack_60;
    lVar2 = lStack_58;
    if (aiStack_68[0] == 1) {
      auStack_50[0] = 6;
      uStack_48 = uVar8;
      uStack_40 = uVar6;
      lVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b20a5e0);
LAB_1004e08fc:
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar2;
      return;
    }
  }
  if (lVar2 == 0) {
    lVar11 = 1;
LAB_1004e0898:
    _memcpy(lVar11,uVar1,lVar2);
    *param_1 = lVar2;
    param_1[1] = lVar11;
    param_1[2] = lVar2;
    return;
  }
  lVar11 = _malloc(lVar2);
  if (lVar11 != 0) goto LAB_1004e0898;
  auVar12 = FUN_107c03c64(1,lVar2);
  pbVar5 = auVar12._8_8_;
  puVar3 = auVar12._0_8_;
  uStack_78 = 0x1004e0914;
  bVar7 = *pbVar5;
  lStack_a0 = lVar11;
  uStack_98 = uVar1;
  lStack_90 = lVar2;
  plStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  if (bVar7 < 0xe) {
    if (bVar7 == 0xc) {
      uVar1 = *(undefined8 *)(pbVar5 + 0x10);
      lVar2 = *(long *)(pbVar5 + 0x18);
    }
    else {
      if (bVar7 != 0xd) {
LAB_1004e0a0c:
        thunk_FUN_108855bf0(puVar3,pbVar5,&uStack_a1,&UNK_10b20a5e0);
        return;
      }
      uVar1 = *(undefined8 *)(pbVar5 + 8);
      lVar2 = *(long *)(pbVar5 + 0x10);
    }
  }
  else {
    if (bVar7 == 0xe) {
      uVar8 = *(undefined8 *)(pbVar5 + 0x10);
      uVar6 = *(undefined8 *)(pbVar5 + 0x18);
    }
    else {
      if (bVar7 != 0xf) goto LAB_1004e0a0c;
      uVar8 = *(undefined8 *)(pbVar5 + 8);
      uVar6 = *(undefined8 *)(pbVar5 + 0x10);
    }
    func_0x0001055bf348(aiStack_d8,uVar8,uVar6);
    uVar1 = uStack_d0;
    lVar2 = lStack_c8;
    if (aiStack_d8[0] == 1) {
      auStack_c0[0] = 6;
      uStack_b8 = uVar8;
      uStack_b0 = uVar6;
      thunk_FUN_1087e3ee8(puVar3,auStack_c0,&uStack_a1,&UNK_10b20a5e0);
      return;
    }
  }
  if (lVar2 == 0) {
    lVar11 = 1;
LAB_1004e09b4:
    _memcpy(lVar11,uVar1,lVar2);
    puVar3[2] = lVar11;
    puVar3[3] = lVar2;
    *puVar3 = 2;
    puVar3[1] = lVar2;
    return;
  }
  lVar11 = _malloc(lVar2);
  if (lVar11 != 0) goto LAB_1004e09b4;
  auVar12 = FUN_107c03c64(1,lVar2);
  pbVar5 = auVar12._8_8_;
  plVar4 = auVar12._0_8_;
  uStack_e8 = 0x1004e0a30;
  bVar7 = *pbVar5;
  lStack_110 = lVar11;
  uStack_108 = uVar1;
  lStack_100 = lVar2;
  puStack_f8 = puVar3;
  ppuStack_f0 = &puStack_80;
  if (bVar7 - 0xc < 2) {
    pbVar9 = (byte *)0x0;
    if (bVar7 < 0xd) goto LAB_1004e0a64;
LAB_1004e0aac:
    if (bVar7 == 0xd) {
      uVar8 = *(undefined8 *)(pbVar5 + 8);
      uVar6 = *(undefined8 *)(pbVar5 + 0x10);
LAB_1004e0b84:
      FUN_100b40be0(&uStack_188,uVar8,uVar6);
      lVar2 = CONCAT71(uStack_187,uStack_188);
    }
    else {
      if (bVar7 != 0xe) {
        if (bVar7 == 0xf) {
          uVar8 = *(undefined8 *)(pbVar5 + 8);
          uVar6 = *(undefined8 *)(pbVar5 + 0x10);
          goto LAB_1004e0ae0;
        }
        goto LAB_1004e0c78;
      }
      uVar8 = *(undefined8 *)(pbVar5 + 0x10);
      uVar6 = *(undefined8 *)(pbVar5 + 0x18);
LAB_1004e0ae0:
      FUN_100b40a2c(&uStack_188,uVar8,uVar6);
      lVar2 = CONCAT71(uStack_187,uStack_188);
    }
  }
  else {
    if (bVar7 != 0x15) {
      thunk_FUN_1088556a8(&uStack_188);
      thunk_FUN_1087e3db0(plVar4,&uStack_188,&UNK_10b20a5b0,&UNK_10b20a590);
      return;
    }
    if (*(long *)(pbVar5 + 0x18) != 1) {
      uStack_188 = 0xb;
      thunk_FUN_1087e3ee8(plVar4,&uStack_188,&UNK_10b20a580,&UNK_10b20a590);
      return;
    }
    pbVar5 = *(byte **)(pbVar5 + 0x10);
    pbVar9 = pbVar5 + 0x20;
    bVar7 = *pbVar5;
    if (0xc < bVar7) goto LAB_1004e0aac;
LAB_1004e0a64:
    if (bVar7 == 1) {
      uVar10 = (ulong)pbVar5[1];
      if (pbVar5[1] < 3) goto LAB_1004e0ba0;
    }
    else {
      if (bVar7 != 4) {
        if (bVar7 == 0xc) {
          uVar8 = *(undefined8 *)(pbVar5 + 0x10);
          uVar6 = *(undefined8 *)(pbVar5 + 0x18);
          goto LAB_1004e0b84;
        }
LAB_1004e0c78:
        thunk_FUN_108855bf0(&uStack_188,pbVar5,&uStack_111,&UNK_10b20dbe0);
        lVar2 = CONCAT71(uStack_187,uStack_188);
        goto joined_r0x0001004e0c98;
      }
      uVar10 = *(ulong *)(pbVar5 + 8);
      if (uVar10 < 3) goto LAB_1004e0ba0;
    }
    auStack_130[0] = 1;
    uStack_128 = uVar10;
    thunk_FUN_1087e3ee8(&uStack_188,auStack_130,&UNK_10b229e80,&UNK_10b20a590);
    lVar2 = CONCAT71(uStack_187,uStack_188);
  }
joined_r0x0001004e0c98:
  uVar10 = (ulong)(byte)uStack_180;
  if (lVar2 != 2) {
    uStack_180._1_3_ = (undefined3)((uint)uStack_180 >> 8);
    *(uint *)((long)plVar4 + 9) = CONCAT13((undefined1)uStack_17c,uStack_180._1_3_);
    *(undefined4 *)((long)plVar4 + 0xc) = uStack_17c;
    plVar4[4] = lStack_168;
    plVar4[3] = lStack_170;
    plVar4[6] = lStack_158;
    plVar4[5] = lStack_160;
    plVar4[8] = lStack_148;
    plVar4[7] = lStack_150;
    plVar4[10] = lStack_138;
    plVar4[9] = lStack_140;
    *plVar4 = lVar2;
    *(byte *)(plVar4 + 1) = (byte)uStack_180;
    plVar4[2] = lStack_178;
    return;
  }
LAB_1004e0ba0:
  if (((pbVar9 == (byte *)0x0) || (*pbVar9 == 0x12)) ||
     (thunk_FUN_108855bf0(&uStack_188,pbVar9,&uStack_111,&UNK_10b20a5c0),
     CONCAT71(uStack_187,uStack_188) == 2)) {
    *(char *)(plVar4 + 1) = (char)uVar10;
    *plVar4 = 2;
  }
  else {
    plVar4[5] = lStack_160;
    plVar4[4] = lStack_168;
    plVar4[7] = lStack_150;
    plVar4[6] = lStack_158;
    plVar4[9] = lStack_140;
    plVar4[8] = lStack_148;
    plVar4[10] = lStack_138;
    plVar4[1] = CONCAT44(uStack_17c,uStack_180);
    *plVar4 = CONCAT71(uStack_187,uStack_188);
    plVar4[3] = lStack_170;
    plVar4[2] = lStack_178;
  }
  return;
}

