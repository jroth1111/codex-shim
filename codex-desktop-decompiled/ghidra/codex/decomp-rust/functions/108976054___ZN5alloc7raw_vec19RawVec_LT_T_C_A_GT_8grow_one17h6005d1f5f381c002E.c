
void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6005d1f5f381c002E(ulong *param_1)

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
  ulong uStack_108;
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
  FUN_10897618c(aiStack_38,*param_1,param_1[1],uVar11,8,0x20);
  if (aiStack_38[0] != 1) {
    *param_1 = uVar11;
    param_1[1] = uStack_30;
    return;
  }
  puVar4 = (ulong *)func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x1089760bc;
  uVar12 = *puVar4 * 2;
  if (uVar12 < 5) {
    uVar12 = 4;
  }
  uStack_60 = uVar11;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10897618c(aiStack_78,*puVar4,puVar4[1],uVar12,8,0xa8);
  if (aiStack_78[0] != 1) {
    *puVar4 = uVar12;
    puVar4[1] = uStack_70;
    return;
  }
  puVar5 = (ulong *)func_0x0001087c9084(uStack_70,uStack_68);
  uStack_88 = 0x108976124;
  uVar7 = puVar5[1];
  uVar11 = *puVar5 * 2;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar9 = 8;
  lVar10 = 0xc0;
  uVar8 = uVar11;
  uStack_a0 = uVar12;
  puStack_98 = puVar4;
  ppuStack_90 = &puStack_50;
  FUN_10897618c(aiStack_b8,*puVar5,uVar7);
  if (aiStack_b8[0] != 1) {
    *puVar5 = uVar11;
    puVar5[1] = uStack_b0;
    return;
  }
  auVar15 = func_0x0001087c9084(uStack_b0,uStack_a8);
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
  goto LAB_1089762b4;
  if (auVar15._8_8_ == 0) {
    uStack_108 = uVar9;
    if (uVar12 != 0) {
      if (uVar12 < uVar9) {
        uStack_108 = 0;
        iVar3 = _posix_memalign(&uStack_108,8,uVar12);
        if (iVar3 != 0) goto LAB_1089762a8;
      }
      else {
        uStack_108 = _malloc(uVar12);
      }
      goto joined_r0x000108976270;
    }
LAB_108976290:
    uVar13 = 0;
    puVar6[1] = uStack_108;
  }
  else {
    if (uVar12 < uVar9) {
      uStack_108 = 0;
      iVar3 = _posix_memalign(&uStack_108,8,uVar12);
      uVar11 = uStack_108;
      if (iVar3 == 0 && uStack_108 != 0) {
        _memcpy(uStack_108,uVar7,lVar10 * auVar15._8_8_);
        _free(uVar7);
        uStack_108 = uVar11;
        goto LAB_108976290;
      }
    }
    else {
      uStack_108 = _realloc(uVar7,uVar12);
joined_r0x000108976270:
      if (uStack_108 != 0) goto LAB_108976290;
    }
LAB_1089762a8:
    puVar6[1] = uVar9;
    uVar13 = 1;
  }
  lVar14 = 0x10;
  uVar11 = uVar12;
LAB_1089762b4:
  *(ulong *)((long)puVar6 + lVar14) = uVar11;
  *puVar6 = uVar13;
  return;
}

