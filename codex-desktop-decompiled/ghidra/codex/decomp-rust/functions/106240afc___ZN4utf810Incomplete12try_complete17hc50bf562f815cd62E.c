
ulong __ZN4utf810Incomplete12try_complete17hc50bf562f815cd62E
                (undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  byte *pbVar13;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  int aiStack_b8 [2];
  ulong uStack_b0;
  byte bStack_a8;
  byte bStack_a7;
  undefined6 uStack_a6;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  int aiStack_68 [2];
  ulong uStack_60;
  byte bStack_58;
  byte bStack_57;
  
  uVar17 = (ulong)*(byte *)(param_2 + 4);
  uVar16 = (uint)*(byte *)(param_2 + 4);
  if (uVar16 < 5) {
    uVar14 = param_4;
    if (4 - uVar17 <= param_4) {
      uVar14 = 4 - uVar17;
    }
    _memcpy(param_2 + uVar17,param_3,uVar14);
    uVar15 = uVar14 + uVar17;
    uVar8 = func_0x0001055bf348(aiStack_68,param_2,uVar15);
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x21 = param_2;
    unaff_x22 = param_3;
    if (aiStack_68[0] != 1) {
      uVar11 = 0;
LAB_106240a2c:
      *(undefined1 *)(param_2 + 4) = 0;
      if ((uint)uVar15 < 5) {
        *param_1 = uVar11;
        param_1[1] = param_2;
        param_1[2] = uVar15 & 0xffffffff;
        param_1[3] = param_3 + uVar14;
        param_1[4] = param_4 - uVar14;
        return uVar8;
      }
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                (0,uVar15 & 0xffffffff,4,&UNK_10b4dc038);
      goto LAB_106240acc;
    }
    if (uStack_60 != 0) {
      uVar14 = uStack_60 - uVar17;
      if (uVar17 <= uStack_60) {
        uVar11 = 0;
        uVar15 = (ulong)((uint)uStack_60 & 0xff);
        *(char *)(param_2 + 4) = (char)uStack_60;
joined_r0x000106240a20:
        if (param_4 < uVar14) {
          uVar8 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (uVar14,param_4,param_4,&UNK_10b4dc050);
LAB_106240aa8:
          *(char *)(param_2 + 4) = (char)uVar15;
          *param_1 = 2;
          return uVar8;
        }
        goto LAB_106240a2c;
      }
      goto LAB_106240ae4;
    }
    if ((bStack_58 & 1) == 0) goto LAB_106240aa8;
    uVar15 = (ulong)bStack_57;
    uVar14 = (ulong)(bStack_57 - uVar16);
    if (uVar16 <= bStack_57) {
      uVar11 = 1;
      *(byte *)(param_2 + 4) = bStack_57;
      goto joined_r0x000106240a20;
    }
  }
  else {
LAB_106240acc:
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar17,4,4,&UNK_10b4dc098);
LAB_106240ae4:
    func_0x000108a07a20(&UNK_10b4dc080);
    param_1 = unaff_x19;
    param_4 = unaff_x20;
    param_2 = unaff_x21;
    param_3 = unaff_x22;
  }
  auVar18 = func_0x000108a07a20(&UNK_10b4dc068);
  lVar12 = auVar18._0_8_;
  uStack_78 = 0x106240afc;
  lStack_a0 = param_3;
  lStack_98 = param_2;
  uStack_90 = param_4;
  puStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  uVar17 = func_0x0001055bf348(aiStack_b8);
  if (aiStack_b8[0] != 1) {
    extraout_x8[1] = uStack_b0;
    extraout_x8[2] = CONCAT62(uStack_a6,CONCAT11(bStack_a7,bStack_a8));
    *extraout_x8 = 0;
    return uVar17;
  }
  uVar14 = auVar18._8_8_ - uStack_b0;
  if (auVar18._8_8_ < uStack_b0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109d29160,0x13,&UNK_10b4dc0c8);
  }
  else {
    lVar2 = lVar12 + uStack_b0;
    if ((bStack_a8 & 1) != 0) {
      uVar15 = (ulong)bStack_a7;
      if (uVar15 <= uVar14) {
        extraout_x8[1] = lVar12;
        extraout_x8[2] = uStack_b0;
        extraout_x8[3] = lVar2;
        extraout_x8[4] = uVar15;
        extraout_x8[5] = lVar2 + uVar15;
        extraout_x8[6] = uVar14 - uVar15;
LAB_106240ba4:
        *extraout_x8 = 1;
        return uVar17;
      }
      goto LAB_106240bf0;
    }
    aiStack_b8[0] = 0;
    if (uVar14 < 5) {
      uVar17 = _memcpy(aiStack_b8,lVar2,uVar14);
      extraout_x8[1] = 0;
      extraout_x8[2] = lVar12;
      extraout_x8[3] = uStack_b0;
      *(char *)((long)extraout_x8 + 0x24) = (char)uVar14;
      *(int *)(extraout_x8 + 4) = aiStack_b8[0];
      goto LAB_106240ba4;
    }
  }
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar14,4,&UNK_10b4dc0b0);
LAB_106240bf0:
  plVar9 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                             (&UNK_109d29160,0x13,&UNK_10b4dc0e0);
  lVar12 = plVar9[1];
  if (lVar12 == 0) {
    return 0x110000;
  }
  pbVar13 = (byte *)*plVar9;
  uVar16 = (uint)*pbVar13;
  if (-1 < (char)*pbVar13) {
    *plVar9 = (long)(pbVar13 + 1);
    plVar9[1] = lVar12 + -1;
    return (ulong)uVar16;
  }
  lVar2 = lVar12 + -1;
  if ((lVar2 == 0) || (uVar16 - 0xf5 < 0xffffffcd)) {
    *plVar9 = (long)(pbVar13 + 1);
    plVar9[1] = lVar2;
    return 0xfffd;
  }
  bVar6 = pbVar13[1];
  iVar5 = 0x8f;
  if (uVar16 != 0xf4) {
    iVar5 = 0xbf;
  }
  iVar3 = 0xbf;
  if (uVar16 != 0xf0) {
    iVar3 = iVar5;
  }
  iVar5 = 0x90;
  if (uVar16 != 0xf0) {
    iVar5 = 0x80;
  }
  iVar10 = 0x9f;
  if (uVar16 != 0xed) {
    iVar10 = 0xbf;
  }
  iVar4 = 0xbf;
  if (uVar16 != 0xe0) {
    iVar4 = iVar10;
  }
  iVar10 = 0xa0;
  if (uVar16 != 0xe0) {
    iVar10 = 0x80;
  }
  if (uVar16 < 0xf0) {
    iVar5 = iVar10;
    iVar3 = iVar4;
  }
  if ((iVar3 - iVar5 & 0xffU) < ((uint)bVar6 - iVar5 & 0xff)) {
    *plVar9 = (long)(pbVar13 + 1);
    plVar9[1] = lVar2;
    return 0xfffd;
  }
  pbVar1 = pbVar13 + 2;
  if (uVar16 < 0xe0) {
    *plVar9 = (long)pbVar1;
    plVar9[1] = lVar12 + -2;
    return (ulong)(bVar6 & 0x3f | (uVar16 & 0x1f) << 6);
  }
  if (lVar12 + -2 == 0) {
    *plVar9 = (long)pbVar1;
    plVar9[1] = 0;
    return 0xfffd;
  }
  bVar7 = *pbVar1;
  if ((char)bVar7 < -0x40) {
    *plVar9 = (long)(pbVar13 + 3);
    plVar9[1] = lVar12 + -3;
    if (uVar16 < 0xf0) {
      return (ulong)((uVar16 & 0xf) << 0xc | (bVar6 & 0x3f) << 6 | bVar7 & 0x3f);
    }
  }
  else {
    *plVar9 = (long)pbVar1;
    plVar9[1] = lVar12 + -2;
  }
  return 0xfffd;
}

