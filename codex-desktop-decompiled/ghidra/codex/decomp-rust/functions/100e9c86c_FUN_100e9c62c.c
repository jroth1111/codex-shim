
void FUN_100e9c62c(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  long *extraout_x1;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (*param_2 != -0x8000000000000000) {
    lVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar5;
    lVar5 = param_2[2];
LAB_100e9c684:
    param_1[2] = lVar5;
    return;
  }
  puVar1 = (undefined4 *)_malloc(5);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0x3e;
    *puVar1 = 0x6c6c613c;
    lVar5 = 5;
    *param_1 = 5;
    param_1[1] = (long)puVar1;
    goto LAB_100e9c684;
  }
  auVar8 = func_0x0001087c9084(1,5);
  plVar3 = auVar8._8_8_;
  plVar4 = auVar8._0_8_;
  if (*plVar3 != -0x8000000000000000) {
    lVar5 = *plVar3;
    plVar4[1] = plVar3[1];
    *plVar4 = lVar5;
    lVar5 = plVar3[2];
LAB_100e9c6fc:
    plVar4[2] = lVar5;
    return;
  }
  puVar1 = (undefined4 *)_malloc(7);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar1 + 3) = 0x746c7561;
    *puVar1 = 0x61666564;
    lVar5 = 7;
    *plVar4 = 7;
    plVar4[1] = (long)puVar1;
    goto LAB_100e9c6fc;
  }
  auVar8 = func_0x0001087c9084(1,7);
  plVar3 = auVar8._8_8_;
  plVar4 = auVar8._0_8_;
  if (*plVar3 != 2) {
    lVar5 = plVar3[0xc];
    lVar7 = plVar3[0xf];
    lVar2 = plVar3[0xe];
    plVar4[0xd] = plVar3[0xd];
    plVar4[0xc] = lVar5;
    plVar4[0xf] = lVar7;
    plVar4[0xe] = lVar2;
    lVar5 = plVar3[0x10];
    lVar7 = plVar3[0x13];
    lVar2 = plVar3[0x12];
    plVar4[0x11] = plVar3[0x11];
    plVar4[0x10] = lVar5;
    plVar4[0x13] = lVar7;
    plVar4[0x12] = lVar2;
    lVar5 = plVar3[4];
    lVar7 = plVar3[7];
    lVar2 = plVar3[6];
    plVar4[5] = plVar3[5];
    plVar4[4] = lVar5;
    plVar4[7] = lVar7;
    plVar4[6] = lVar2;
    lVar5 = plVar3[8];
    lVar7 = plVar3[0xb];
    lVar2 = plVar3[10];
    plVar4[9] = plVar3[9];
    plVar4[8] = lVar5;
    plVar4[0xb] = lVar7;
    plVar4[10] = lVar2;
    lVar5 = *plVar3;
    lVar7 = plVar3[3];
    lVar2 = plVar3[2];
    plVar4[1] = plVar3[1];
    *plVar4 = lVar5;
    plVar4[3] = lVar7;
    plVar4[2] = lVar2;
    return;
  }
  if (param_4 == 0) {
    lVar5 = 1;
LAB_100e9c798:
    _memcpy(lVar5,param_3,param_4);
    plVar4[6] = param_4;
    plVar4[7] = lVar5;
    plVar4[8] = param_4;
    plVar4[9] = 0;
    plVar4[10] = 8;
    *(undefined2 *)(plVar4 + 0x13) = 0x300;
    plVar4[0xc] = -0x8000000000000000;
    plVar4[0xb] = 0;
    *plVar4 = param_5;
    plVar4[1] = param_6;
    plVar4[2] = 0;
    plVar4[4] = 0;
    return;
  }
  lVar2 = param_3;
  lVar5 = _malloc(param_4);
  if (lVar5 != 0) goto LAB_100e9c798;
  auVar8 = func_0x0001087c9084(1,param_4);
  plVar3 = auVar8._8_8_;
  plVar4 = auVar8._0_8_;
  if (*plVar3 != -0x8000000000000000) {
    lVar5 = *plVar3;
    plVar4[1] = plVar3[1];
    *plVar4 = lVar5;
    lVar5 = plVar3[2];
LAB_100e9c850:
    plVar4[2] = lVar5;
    return;
  }
  puVar1 = (undefined4 *)_malloc(6);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = 0x6961;
    *puVar1 = 0x6e65706f;
    lVar5 = 6;
    *plVar4 = 6;
    plVar4[1] = (long)puVar1;
    goto LAB_100e9c850;
  }
  auVar8 = func_0x0001087c9084(1,6);
  plVar4 = auVar8._8_8_;
  plVar3 = auVar8._0_8_;
  if (*plVar4 == -0x8000000000000000) {
    uVar6 = *(undefined8 *)(lVar2 + 0x3a8);
    lVar5 = *(long *)(lVar2 + 0x3b0);
    if (lVar5 == 0) {
      lVar2 = 1;
    }
    else {
      lVar2 = _malloc(lVar5);
      if (lVar2 == 0) {
        func_0x0001087c9084(1,lVar5);
        plVar4 = extraout_x1;
        goto LAB_100e9c8b8;
      }
    }
    _memcpy(lVar2,uVar6,lVar5);
    *plVar3 = lVar5;
    plVar3[1] = lVar2;
    plVar3[2] = lVar5;
  }
  else {
LAB_100e9c8b8:
    lVar5 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar5;
    plVar3[2] = plVar4[2];
  }
  return;
}

