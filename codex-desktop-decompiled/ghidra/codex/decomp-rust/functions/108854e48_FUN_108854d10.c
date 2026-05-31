
void FUN_108854d10(ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  ulong uStack_188;
  int aiStack_138 [2];
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  undefined1 ****ppppuStack_110;
  undefined8 uStack_108;
  int aiStack_f8 [2];
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  undefined1 ***pppuStack_d0;
  undefined8 uStack_c8;
  int aiStack_b8 [2];
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  int aiStack_78 [2];
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar11 = *param_1 * 2;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  FUN_108854f18(aiStack_38,*param_1,param_1[1],uVar11,8,0x80);
  if (aiStack_38[0] != 1) {
    *param_1 = uVar11;
    param_1[1] = uStack_30;
    return;
  }
  puVar4 = (ulong *)func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x108854d78;
  uVar12 = *puVar4 * 2;
  if (uVar12 < 5) {
    uVar12 = 4;
  }
  uStack_60 = uVar11;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_108854f18(aiStack_78,*puVar4,puVar4[1],uVar12,8,0xa8);
  if (aiStack_78[0] != 1) {
    *puVar4 = uVar12;
    puVar4[1] = uStack_70;
    return;
  }
  puVar5 = (ulong *)func_0x0001087c9084(uStack_70,uStack_68);
  uStack_88 = 0x108854de0;
  uVar11 = *puVar5 * 2;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uStack_a0 = uVar12;
  puStack_98 = puVar4;
  ppuStack_90 = &puStack_50;
  FUN_108854f18(aiStack_b8,*puVar5,puVar5[1],uVar11,8,0x28);
  if (aiStack_b8[0] != 1) {
    *puVar5 = uVar11;
    puVar5[1] = uStack_b0;
    return;
  }
  puVar4 = (ulong *)func_0x0001087c9084(uStack_b0,uStack_a8);
  uStack_c8 = 0x108854e48;
  uVar12 = *puVar4 * 2;
  if (uVar12 < 5) {
    uVar12 = 4;
  }
  uStack_e0 = uVar11;
  puStack_d8 = puVar5;
  pppuStack_d0 = &ppuStack_90;
  FUN_108854f18(aiStack_f8,*puVar4,puVar4[1],uVar12,8,0xa0);
  if (aiStack_f8[0] != 1) {
    *puVar4 = uVar12;
    puVar4[1] = uStack_f0;
    return;
  }
  puVar5 = (ulong *)func_0x0001087c9084(uStack_f0,uStack_e8);
  uStack_108 = 0x108854eb0;
  uVar7 = puVar5[1];
  uVar11 = *puVar5 * 2;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar9 = 8;
  lVar10 = 0x30;
  uVar8 = uVar11;
  uStack_120 = uVar12;
  puStack_118 = puVar4;
  ppppuStack_110 = &pppuStack_d0;
  FUN_108854f18(aiStack_138,*puVar5,uVar7);
  if (aiStack_138[0] != 1) {
    *puVar5 = uVar11;
    puVar5[1] = uStack_130;
    return;
  }
  auVar15 = func_0x0001087c9084(uStack_130,uStack_128);
  puVar6 = auVar15._0_8_;
  uVar12 = (uVar9 + lVar10) - 1 & -uVar9;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar12;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar13 = 1;
  lVar14 = 8;
  uVar11 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (uVar12 = uVar12 * uVar8,
     0x8000000000000000 - uVar9 <= uVar12 && uVar12 - (0x8000000000000000 - uVar9) != 0))
  goto LAB_108855040;
  if (auVar15._8_8_ == 0) {
    uStack_188 = uVar9;
    if (uVar12 != 0) {
      if (uVar12 < uVar9) {
        uStack_188 = 0;
        iVar3 = _posix_memalign(&uStack_188,8,uVar12);
        if (iVar3 != 0) goto LAB_108855034;
      }
      else {
        uStack_188 = _malloc(uVar12);
      }
      goto joined_r0x000108854ffc;
    }
LAB_10885501c:
    uVar13 = 0;
    puVar6[1] = uStack_188;
  }
  else {
    if (uVar12 < uVar9) {
      uStack_188 = 0;
      iVar3 = _posix_memalign(&uStack_188,8,uVar12);
      uVar11 = uStack_188;
      if (iVar3 == 0 && uStack_188 != 0) {
        _memcpy(uStack_188,uVar7,lVar10 * auVar15._8_8_);
        _free(uVar7);
        uStack_188 = uVar11;
        goto LAB_10885501c;
      }
    }
    else {
      uStack_188 = _realloc(uVar7,uVar12);
joined_r0x000108854ffc:
      if (uStack_188 != 0) goto LAB_10885501c;
    }
LAB_108855034:
    puVar6[1] = uVar9;
    uVar13 = 1;
  }
  lVar14 = 0x10;
  uVar11 = uVar12;
LAB_108855040:
  *(ulong *)((long)puVar6 + lVar14) = uVar11;
  *puVar6 = uVar13;
  return;
}

