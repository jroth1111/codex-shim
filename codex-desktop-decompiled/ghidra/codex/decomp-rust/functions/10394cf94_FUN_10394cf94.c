
void FUN_10394cf94(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  
  lVar11 = 0;
  puVar1 = param_1 + 6;
  puVar8 = param_1;
  do {
    puVar9 = puVar1;
    iVar7 = func_0x000103947af8(puVar9,puVar8);
    if (iVar7 != 0) {
      uStack_d8 = puVar9[1];
      uStack_e0 = *puVar9;
      uStack_c8 = puVar9[3];
      uStack_d0 = puVar9[2];
      uStack_b8 = puVar9[5];
      uStack_c0 = puVar9[4];
      lVar6 = lVar11;
      do {
        lVar10 = lVar6;
        puVar1 = (undefined8 *)((long)param_1 + lVar10);
        puVar1[7] = puVar1[1];
        puVar1[6] = *puVar1;
        puVar1[9] = puVar1[3];
        puVar1[8] = puVar1[2];
        puVar1[0xb] = puVar1[5];
        puVar1[10] = puVar1[4];
        puVar8 = param_1;
        if (lVar10 == 0) goto LAB_10394cff0;
        puStack_80 = &uStack_e0;
        puStack_78 = &DAT_1048e978c;
        puStack_68 = &DAT_1048e978c;
        puStack_70 = &uStack_c8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_b0,s___108b03abb,&puStack_80);
        puStack_80 = puVar1 + -6;
        puStack_70 = (undefined8 *)((long)param_1 + lVar10 + -0x18);
        puStack_78 = &DAT_1048e978c;
        puStack_68 = &DAT_1048e978c;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_98,s___108b03abb,&puStack_80);
        uVar5 = uStack_90;
        uVar4 = uStack_a8;
        lVar3 = uStack_a0 - uStack_88;
        uVar2 = uStack_a0;
        if (uStack_88 <= uStack_a0) {
          uVar2 = uStack_88;
        }
        iVar7 = _memcmp(uStack_a8,uStack_90,uVar2);
        if (lStack_98 != 0) {
          _free(uVar5);
        }
        if (lStack_b0 != 0) {
          _free(uVar4);
        }
        if (iVar7 != 0) {
          lVar3 = (long)iVar7;
        }
        lVar6 = lVar10 + -0x30;
      } while (lVar3 < 0);
      puVar8 = (undefined8 *)((long)param_1 + lVar10);
LAB_10394cff0:
      puVar8[1] = uStack_d8;
      *puVar8 = uStack_e0;
      puVar8[3] = uStack_c8;
      puVar8[2] = uStack_d0;
      puVar8[5] = uStack_b8;
      puVar8[4] = uStack_c0;
    }
    lVar11 = lVar11 + 0x30;
    puVar1 = puVar9 + 6;
    puVar8 = puVar9;
    if (puVar9 + 6 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

