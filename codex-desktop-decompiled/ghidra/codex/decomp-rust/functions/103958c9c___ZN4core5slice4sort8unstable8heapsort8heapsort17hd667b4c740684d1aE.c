
void __ZN4core5slice4sort8unstable8heapsort8heapsort17hd667b4c740684d1aE
               (undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  
  uVar6 = param_2 + (param_2 >> 1);
  do {
    if (uVar6 == 0) {
      return;
    }
    uVar6 = uVar6 - 1;
    uVar8 = uVar6 - param_2;
    if (uVar6 < param_2) {
      uVar8 = 0;
      uVar11 = param_1[1];
      uVar10 = *param_1;
      uVar13 = param_1[3];
      uVar12 = param_1[2];
      puVar5 = param_1 + uVar6 * 6;
      uVar15 = param_1[5];
      uVar14 = param_1[4];
      uVar19 = puVar5[3];
      uVar18 = puVar5[2];
      uVar17 = puVar5[5];
      uVar16 = puVar5[4];
      uVar20 = *puVar5;
      param_1[1] = puVar5[1];
      *param_1 = uVar20;
      param_1[3] = uVar19;
      param_1[2] = uVar18;
      param_1[5] = uVar17;
      param_1[4] = uVar16;
      puVar5[3] = uVar13;
      puVar5[2] = uVar12;
      puVar5[5] = uVar15;
      puVar5[4] = uVar14;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
    }
    uVar2 = param_2;
    if (uVar6 <= param_2) {
      uVar2 = uVar6;
    }
    while (uVar7 = (uVar8 & 0x3fffffffffffffff) << 1 | 1, uVar7 < uVar2) {
      uVar1 = uVar8 * 2 + 2;
      if (uVar1 < uVar2) {
        puStack_88 = param_1 + uVar7 * 6;
        puStack_80 = &DAT_1048e978c;
        puStack_78 = puStack_88 + 3;
        puStack_70 = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_b8,s___108b03abb,&puStack_88);
        puStack_78 = param_1 + uVar1 * 6 + 3;
        puStack_80 = &DAT_1048e978c;
        puStack_70 = &DAT_1048e978c;
        puStack_88 = param_1 + uVar1 * 6;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_a0,s___108b03abb,&puStack_88);
        uVar11 = uStack_98;
        uVar10 = uStack_b0;
        lVar3 = uStack_a8 - uStack_90;
        uVar1 = uStack_a8;
        if (uStack_90 <= uStack_a8) {
          uVar1 = uStack_90;
        }
        iVar4 = _memcmp(uStack_b0,uStack_98,uVar1);
        if (lStack_a0 != 0) {
          _free(uVar11);
        }
        if (lStack_b8 != 0) {
          _free(uVar10);
        }
        if (iVar4 != 0) {
          lVar3 = (long)iVar4;
        }
        uVar7 = uVar7 - (lVar3 >> 0x3f);
      }
      puVar9 = param_1 + uVar8 * 6;
      puVar5 = param_1 + uVar7 * 6;
      puStack_80 = &DAT_1048e978c;
      puStack_78 = puVar9 + 3;
      puStack_70 = &DAT_1048e978c;
      puStack_88 = puVar9;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_b8,s___108b03abb,&puStack_88);
      puStack_78 = puVar5 + 3;
      puStack_80 = &DAT_1048e978c;
      puStack_70 = &DAT_1048e978c;
      puStack_88 = puVar5;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&lStack_a0,s___108b03abb,&puStack_88);
      uVar11 = uStack_98;
      uVar10 = uStack_b0;
      lVar3 = uStack_a8 - uStack_90;
      uVar8 = uStack_a8;
      if (uStack_90 <= uStack_a8) {
        uVar8 = uStack_90;
      }
      iVar4 = _memcmp(uStack_b0,uStack_98,uVar8);
      if (lStack_a0 != 0) {
        _free(uVar11);
      }
      if (lStack_b8 != 0) {
        _free(uVar10);
      }
      if (iVar4 != 0) {
        lVar3 = (long)iVar4;
      }
      if (-1 < lVar3) break;
      uVar11 = puVar9[1];
      uVar10 = *puVar9;
      uVar13 = puVar9[3];
      uVar12 = puVar9[2];
      uVar14 = *puVar5;
      uVar16 = puVar5[3];
      uVar15 = puVar5[2];
      puVar9[1] = puVar5[1];
      *puVar9 = uVar14;
      puVar9[3] = uVar16;
      puVar9[2] = uVar15;
      uVar15 = puVar9[5];
      uVar14 = puVar9[4];
      uVar16 = puVar5[4];
      puVar9[5] = puVar5[5];
      puVar9[4] = uVar16;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5[3] = uVar13;
      puVar5[2] = uVar12;
      puVar5[5] = uVar15;
      puVar5[4] = uVar14;
      uVar8 = uVar7;
    }
  } while( true );
}

