
void FUN_100e9c4c8(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *extraout_x1;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if (*param_2 != -0x8000000000000000) {
    lVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar6;
    lVar6 = param_2[2];
LAB_100e9c520:
    param_1[2] = lVar6;
    return;
  }
  puVar1 = (undefined4 *)_malloc(6);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = 0x3e65;
    *puVar1 = 0x6e6f6e3c;
    lVar6 = 6;
    *param_1 = 6;
    param_1[1] = (long)puVar1;
    goto LAB_100e9c520;
  }
  auVar9 = func_0x0001087c9084(1,6);
  plVar4 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  if (*plVar4 != -0x8000000000000000) {
    lVar6 = *plVar4;
    plVar5[1] = plVar4[1];
    *plVar5 = lVar6;
    lVar6 = plVar4[2];
LAB_100e9c598:
    plVar5[2] = lVar6;
    return;
  }
  puVar2 = (undefined8 *)_malloc(0xe);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x64206d6574737953;
    *(undefined8 *)((long)puVar2 + 6) = 0x746c756166656420;
    lVar6 = 0xe;
    *plVar5 = 0xe;
    plVar5[1] = (long)puVar2;
    goto LAB_100e9c598;
  }
  auVar9 = func_0x0001087c9084(1,0xe);
  plVar4 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  if (*plVar4 != -0x8000000000000000) {
    lVar6 = *plVar4;
    plVar5[1] = plVar4[1];
    *plVar5 = lVar6;
    lVar6 = plVar4[2];
LAB_100e9c610:
    plVar5[2] = lVar6;
    return;
  }
  puVar2 = (undefined8 *)_malloc(0x11);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 2) = 100;
    puVar2[1] = 0x65736f6c63206e6f;
    *puVar2 = 0x697463656e6e6f63;
    lVar6 = 0x11;
    *plVar5 = 0x11;
    plVar5[1] = (long)puVar2;
    goto LAB_100e9c610;
  }
  auVar9 = func_0x0001087c9084(1,0x11);
  plVar4 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  if (*plVar4 != -0x8000000000000000) {
    lVar6 = *plVar4;
    plVar5[1] = plVar4[1];
    *plVar5 = lVar6;
    lVar6 = plVar4[2];
LAB_100e9c684:
    plVar5[2] = lVar6;
    return;
  }
  puVar1 = (undefined4 *)_malloc(5);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0x3e;
    *puVar1 = 0x6c6c613c;
    lVar6 = 5;
    *plVar5 = 5;
    plVar5[1] = (long)puVar1;
    goto LAB_100e9c684;
  }
  auVar9 = func_0x0001087c9084(1,5);
  plVar4 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  if (*plVar4 != -0x8000000000000000) {
    lVar6 = *plVar4;
    plVar5[1] = plVar4[1];
    *plVar5 = lVar6;
    lVar6 = plVar4[2];
LAB_100e9c6fc:
    plVar5[2] = lVar6;
    return;
  }
  puVar1 = (undefined4 *)_malloc(7);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar1 + 3) = 0x746c7561;
    *puVar1 = 0x61666564;
    lVar6 = 7;
    *plVar5 = 7;
    plVar5[1] = (long)puVar1;
    goto LAB_100e9c6fc;
  }
  auVar9 = func_0x0001087c9084(1,7);
  plVar4 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  if (*plVar4 != 2) {
    lVar6 = plVar4[0xc];
    lVar8 = plVar4[0xf];
    lVar3 = plVar4[0xe];
    plVar5[0xd] = plVar4[0xd];
    plVar5[0xc] = lVar6;
    plVar5[0xf] = lVar8;
    plVar5[0xe] = lVar3;
    lVar6 = plVar4[0x10];
    lVar8 = plVar4[0x13];
    lVar3 = plVar4[0x12];
    plVar5[0x11] = plVar4[0x11];
    plVar5[0x10] = lVar6;
    plVar5[0x13] = lVar8;
    plVar5[0x12] = lVar3;
    lVar6 = plVar4[4];
    lVar8 = plVar4[7];
    lVar3 = plVar4[6];
    plVar5[5] = plVar4[5];
    plVar5[4] = lVar6;
    plVar5[7] = lVar8;
    plVar5[6] = lVar3;
    lVar6 = plVar4[8];
    lVar8 = plVar4[0xb];
    lVar3 = plVar4[10];
    plVar5[9] = plVar4[9];
    plVar5[8] = lVar6;
    plVar5[0xb] = lVar8;
    plVar5[10] = lVar3;
    lVar6 = *plVar4;
    lVar8 = plVar4[3];
    lVar3 = plVar4[2];
    plVar5[1] = plVar4[1];
    *plVar5 = lVar6;
    plVar5[3] = lVar8;
    plVar5[2] = lVar3;
    return;
  }
  if (param_4 == 0) {
    lVar6 = 1;
LAB_100e9c798:
    _memcpy(lVar6,param_3,param_4);
    plVar5[6] = param_4;
    plVar5[7] = lVar6;
    plVar5[8] = param_4;
    plVar5[9] = 0;
    plVar5[10] = 8;
    *(undefined2 *)(plVar5 + 0x13) = 0x300;
    plVar5[0xc] = -0x8000000000000000;
    plVar5[0xb] = 0;
    *plVar5 = param_5;
    plVar5[1] = param_6;
    plVar5[2] = 0;
    plVar5[4] = 0;
    return;
  }
  lVar3 = param_3;
  lVar6 = _malloc(param_4);
  if (lVar6 != 0) goto LAB_100e9c798;
  auVar9 = func_0x0001087c9084(1,param_4);
  plVar4 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  if (*plVar4 != -0x8000000000000000) {
    lVar6 = *plVar4;
    plVar5[1] = plVar4[1];
    *plVar5 = lVar6;
    lVar6 = plVar4[2];
LAB_100e9c850:
    plVar5[2] = lVar6;
    return;
  }
  puVar1 = (undefined4 *)_malloc(6);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = 0x6961;
    *puVar1 = 0x6e65706f;
    lVar6 = 6;
    *plVar5 = 6;
    plVar5[1] = (long)puVar1;
    goto LAB_100e9c850;
  }
  auVar9 = func_0x0001087c9084(1,6);
  plVar5 = auVar9._8_8_;
  plVar4 = auVar9._0_8_;
  if (*plVar5 == -0x8000000000000000) {
    uVar7 = *(undefined8 *)(lVar3 + 0x3a8);
    lVar6 = *(long *)(lVar3 + 0x3b0);
    if (lVar6 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(lVar6);
      if (lVar3 == 0) {
        func_0x0001087c9084(1,lVar6);
        plVar5 = extraout_x1;
        goto LAB_100e9c8b8;
      }
    }
    _memcpy(lVar3,uVar7,lVar6);
    *plVar4 = lVar6;
    plVar4[1] = lVar3;
    plVar4[2] = lVar6;
  }
  else {
LAB_100e9c8b8:
    lVar6 = *plVar5;
    plVar4[1] = plVar5[1];
    *plVar4 = lVar6;
    plVar4[2] = plVar5[2];
  }
  return;
}

