
void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9a0c3a2b99236cf0E(ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong uStack_c8;
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
  
  uVar10 = *param_1 * 2;
  if (uVar10 < 5) {
    uVar10 = 4;
  }
  FUN_108a151d4(aiStack_38,*param_1,param_1[1],uVar10,8,0x28);
  if (aiStack_38[0] != 1) {
    *param_1 = uVar10;
    param_1[1] = uStack_30;
    return;
  }
  puVar4 = (ulong *)func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x108a1516c;
  uVar6 = puVar4[1];
  uVar11 = *puVar4 * 2;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar8 = 8;
  lVar9 = 0x40;
  uVar7 = uVar11;
  uStack_60 = uVar10;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_108a151d4(aiStack_78,*puVar4,uVar6);
  if (aiStack_78[0] != 1) {
    *puVar4 = uVar11;
    puVar4[1] = uStack_70;
    return;
  }
  auVar14 = func_0x0001087c9084(uStack_70,uStack_68);
  puVar5 = auVar14._0_8_;
  uVar11 = (uVar8 + lVar9) - 1 & -uVar8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar11;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar7;
  uVar12 = 1;
  lVar13 = 8;
  uVar10 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (uVar11 = uVar11 * uVar7,
     0x8000000000000000 - uVar8 <= uVar11 && uVar11 - (0x8000000000000000 - uVar8) != 0))
  goto LAB_108a152fc;
  if (auVar14._8_8_ == 0) {
    uStack_c8 = uVar8;
    if (uVar11 != 0) {
      if (uVar11 < uVar8) {
        uStack_c8 = 0;
        iVar3 = _posix_memalign(&uStack_c8,8,uVar11);
        if (iVar3 != 0) goto LAB_108a152f0;
      }
      else {
        uStack_c8 = _malloc(uVar11);
      }
      goto joined_r0x000108a152b8;
    }
LAB_108a152d8:
    uVar12 = 0;
    puVar5[1] = uStack_c8;
  }
  else {
    if (uVar11 < uVar8) {
      uStack_c8 = 0;
      iVar3 = _posix_memalign(&uStack_c8,8,uVar11);
      uVar10 = uStack_c8;
      if (iVar3 == 0 && uStack_c8 != 0) {
        _memcpy(uStack_c8,uVar6,lVar9 * auVar14._8_8_);
        _free(uVar6);
        uStack_c8 = uVar10;
        goto LAB_108a152d8;
      }
    }
    else {
      uStack_c8 = _realloc(uVar6,uVar11);
joined_r0x000108a152b8:
      if (uStack_c8 != 0) goto LAB_108a152d8;
    }
LAB_108a152f0:
    puVar5[1] = uVar8;
    uVar12 = 1;
  }
  lVar13 = 0x10;
  uVar10 = uVar11;
LAB_108a152fc:
  *(ulong *)((long)puVar5 + lVar13) = uVar10;
  *puVar5 = uVar12;
  return;
}

