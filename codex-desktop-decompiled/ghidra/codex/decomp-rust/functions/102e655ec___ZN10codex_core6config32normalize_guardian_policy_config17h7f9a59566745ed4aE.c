
ulong __ZN10codex_core6config32normalize_guardian_policy_config17h7f9a59566745ed4aE
                (long *param_1,long param_2,undefined8 param_3,uint param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_138;
  long *plStack_130;
  long lStack_128;
  char cStack_118;
  undefined1 auStack_e0 [80];
  
  uVar4 = 0;
  if (param_2 == 0) {
LAB_102e6563c:
    *param_1 = -0x8000000000000000;
    return uVar4;
  }
  auVar9 = FUN_1033f63d0();
  lVar5 = auVar9._8_8_;
  uVar4 = auVar9._0_8_;
  if (lVar5 == 0) goto LAB_102e6563c;
  lVar3 = _malloc(lVar5);
  if (lVar3 != 0) {
    uVar4 = _memcpy(lVar3,uVar4,lVar5);
    *param_1 = lVar5;
    param_1[1] = lVar3;
    param_1[2] = lVar5;
    return uVar4;
  }
  auVar9 = func_0x0001087c9084(1,lVar5);
  if ((param_4 & 0xff) != 3) {
    return 0;
  }
  __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E
            (&lStack_138,auVar9._0_8_,1,0);
  plVar2 = plStack_130;
  lVar3 = lStack_138;
  lVar5 = 0;
  do {
    if (lStack_128 * 8 - lVar5 == 0) goto LAB_102e65748;
    plVar8 = (long *)((long)plStack_130 + lVar5);
    lVar5 = lVar5 + 8;
  } while (*(long *)*plVar8 != 4);
  FUN_1034a0b24(auStack_e0,(long *)*plVar8 + 0x13);
  FUN_1035bd248(&lStack_138,auStack_e0);
  plVar8 = plStack_130;
  if (lStack_138 == 2) {
    if (plStack_130 != (long *)0x8000000000000000) {
      if (plStack_130 == (long *)0x8000000000000001) goto LAB_102e65748;
      if (plStack_130 != (long *)0x0) {
        _free(lStack_128);
      }
    }
    if (lVar3 != 0) {
      _free(plVar2);
    }
    if (plVar8 != (long *)0x8000000000000000) {
      return 1;
    }
  }
  else {
    FUN_103380598(&lStack_138);
LAB_102e65748:
    if (lVar3 != 0) {
      _free(plVar2);
    }
  }
  if ((param_5 & 0xff) != 3) {
    return 0;
  }
  __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E
            (&lStack_138,auVar9._0_8_,0,0);
  plVar2 = plStack_130;
  lVar5 = lStack_138;
  if (lStack_128 == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = 2;
    plVar1 = plStack_130 + lStack_128;
    plVar8 = plStack_130;
    do {
      while( true ) {
        FUN_1034a0b24(auStack_e0,*plVar8 + 0x98);
        FUN_1035bd248(&lStack_138,auStack_e0);
        if (lStack_138 == 2) break;
        FUN_103380598(&lStack_138);
joined_r0x000102e657fc:
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar1) goto LAB_102e65828;
      }
      if (cStack_118 != '\x03') {
        uVar7 = 0;
      }
      if (plStack_130 != (long *)0x8000000000000000) {
        uVar7 = 1;
      }
      if (((ulong)plStack_130 & 0x7fffffffffffffff) == 0) goto joined_r0x000102e657fc;
      _free(lStack_128);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
LAB_102e65828:
  if (lVar5 != 0) {
    _free(plVar2);
  }
  uVar6 = 2;
  if (*(char *)(auVar9._8_8_ + 0x1a19) != '\x03') {
    uVar6 = 0;
  }
  if (*(long *)(auVar9._8_8_ + 0x1350) != -0x8000000000000000) {
    uVar6 = 1;
  }
  if (uVar7 != 2) {
    uVar6 = uVar7;
  }
  return (ulong)uVar6;
}

