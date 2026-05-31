
void __ZN14codex_protocol6models21FileSystemPermissions21from_read_write_roots17hcf0882067500e584E
               (long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar6 = 0;
  lVar8 = 8;
  lStack_e8 = 0;
  lStack_e0 = 8;
  lStack_d8 = 0;
  lVar9 = *param_2;
  if (lVar9 != -0x8000000000000000) {
    puVar1 = (undefined8 *)param_2[1];
    lVar6 = param_2[2];
    lVar8 = lVar6 * 0x18;
    puStack_b8 = puVar1 + lVar6 * 3;
    puStack_d0 = puVar1;
    puStack_c8 = puVar1;
    lStack_c0 = lVar9;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1089a4f48(&lStack_e8,0,lVar6,8,0x38);
      puVar4 = (undefined8 *)(lStack_e0 + lStack_d8 * 0x38);
      lVar6 = lStack_d8 + (lVar8 - 0x18U) / 0x18 + 1;
      puVar3 = puVar1;
      do {
        uVar5 = puVar3[2];
        uVar11 = puVar3[1];
        uVar10 = *puVar3;
        *puVar4 = 0x8000000000000005;
        puVar4[2] = uVar11;
        puVar4[1] = uVar10;
        puVar4[3] = uVar5;
        *(undefined1 *)(puVar4 + 6) = 0;
        puVar4 = puVar4 + 7;
        lVar8 = lVar8 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar8 != 0);
    }
    lVar8 = lStack_e0;
    lStack_d8 = lVar6;
    if (lVar9 != 0) {
      _free(puVar1);
    }
  }
  lVar9 = *param_3;
  if (lVar9 == -0x8000000000000000) goto LAB_104930fec;
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = param_3[2];
  lVar7 = uVar2 * 0x18;
  puStack_98 = puVar1 + uVar2 * 3;
  puStack_b0 = puVar1;
  puStack_a8 = puVar1;
  lStack_a0 = lVar9;
  if ((ulong)(lStack_e8 - lVar6) < uVar2) {
    FUN_1089a4f48(&lStack_e8,lVar6,uVar2,8,0x38);
    lVar8 = lStack_e0;
LAB_104930f74:
    puVar3 = (undefined8 *)(lVar8 + lStack_d8 * 0x38);
    lVar6 = lStack_d8 + (lVar7 - 0x18U) / 0x18 + 1;
    puVar4 = puVar1;
    do {
      uStack_68 = puVar4[1];
      uStack_70 = *puVar4;
      uStack_60 = puVar4[2];
      puVar4 = puVar4 + 3;
      *puVar3 = 0x8000000000000005;
      puVar3[3] = uStack_60;
      puVar3[2] = uStack_68;
      puVar3[1] = uStack_70;
      *(undefined1 *)(puVar3 + 6) = 1;
      puVar3 = puVar3 + 7;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  else {
    lStack_d8 = lVar6;
    if (uVar2 != 0) goto LAB_104930f74;
  }
  lStack_d8 = lVar6;
  if (lVar9 != 0) {
    _free(puVar1);
  }
LAB_104930fec:
  param_1[1] = lStack_e0;
  *param_1 = lStack_e8;
  param_1[2] = lStack_d8;
  param_1[3] = 0;
  return;
}

