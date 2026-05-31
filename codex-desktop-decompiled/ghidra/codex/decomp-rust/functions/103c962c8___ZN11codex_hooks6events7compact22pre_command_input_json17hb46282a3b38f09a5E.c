
void __ZN11codex_hooks6events7compact22pre_command_input_json17hb46282a3b38f09a5E
               (long *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long **pplVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_188;
  undefined8 ***pppuStack_168;
  undefined *puStack_160;
  undefined8 **ppuStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 ***pppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  byte bStack_90;
  char cStack_8f;
  long **pplStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  pppuStack_80 = (undefined8 ****)0x0;
  puStack_78 = (undefined *)0x1;
  lStack_70 = 0;
  FUN_10624142c(&pppuStack_168,param_2 + 0x78,0);
  FUN_1089762d4(&pppuStack_80,0,0x24,1,1);
  lVar16 = lStack_70;
  puVar5 = puStack_78;
  pppuVar4 = pppuStack_80;
  puVar11 = (undefined8 *)(puStack_78 + lStack_70);
  puVar11[1] = puStack_160;
  *puVar11 = pppuStack_168;
  puVar11[3] = lStack_150;
  puVar11[2] = ppuStack_158;
  *(undefined4 *)(puVar11 + 4) = (undefined4)lStack_148;
  uVar18 = *(undefined8 *)(param_2 + 8);
  lVar17 = *(long *)(param_2 + 0x10);
  if (lVar17 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = _malloc(lVar17);
    if (lVar9 == 0) {
      func_0x0001087c9084(1,lVar17);
      goto LAB_103c96aa0;
    }
  }
  _memcpy(lVar9,uVar18,lVar17);
  if (*(long *)(param_2 + 0x60) == -0x8000000000000000) {
    pppuStack_168 = (undefined8 ***)0x8000000000000000;
  }
  else {
    uVar18 = *(undefined8 *)(param_2 + 0x68);
    pppuVar1 = *(undefined8 ****)(param_2 + 0x70);
    if (pppuVar1 == (undefined8 ***)0x0) {
      puVar10 = (undefined *)0x1;
    }
    else {
      puVar10 = (undefined *)_malloc(pppuVar1);
      if (puVar10 == (undefined *)0x0) {
        func_0x0001087c9084(1,pppuVar1);
        goto LAB_103c96aa0;
      }
    }
    _memcpy(puVar10,uVar18,pppuVar1);
    pppuStack_168 = pppuVar1;
    puStack_160 = puVar10;
    ppuStack_158 = pppuVar1;
  }
  __ZN11codex_hooks6schema14NullableString9from_path17h9dea7a96da53bea5E(&lStack_b0,&pppuStack_168);
  uStack_c0 = *(undefined8 *)(param_2 + 0x20);
  uStack_b8 = *(undefined8 *)(param_2 + 0x28);
  pppuStack_80 = (undefined8 ****)0x0;
  puStack_78 = (undefined *)0x1;
  lStack_70 = 0;
  ppuStack_158 = (undefined8 ***)0x60000020;
  pppuStack_168 = &pppuStack_80;
  puStack_160 = &UNK_10b2f2980;
  iVar8 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                    (&uStack_c0,&pppuStack_168);
  lVar6 = lStack_70;
  puVar10 = puStack_78;
  pppuVar1 = pppuStack_80;
  if (iVar8 != 0) {
    func_0x000108a07a3c(&UNK_108db8e80,0x37,&bStack_90,&UNK_10b2f2a10,&UNK_10b2f29b0);
    goto LAB_103c96aa0;
  }
  puVar11 = (undefined8 *)_malloc(10);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,10);
    goto LAB_103c96aa0;
  }
  *(undefined2 *)(puVar11 + 1) = 0x7463;
  *puVar11 = 0x61706d6f43657250;
  uVar18 = *(undefined8 *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  if (lVar2 == 0) {
    lStack_188 = 1;
    _memcpy(1,uVar18,0);
    uVar18 = *(undefined8 *)(param_2 + 0x50);
    lVar19 = *(long *)(param_2 + 0x58);
    if (lVar19 != 0) goto LAB_103c9648c;
LAB_103c964bc:
    lVar12 = 1;
  }
  else {
    lStack_188 = _malloc(lVar2);
    if (lStack_188 == 0) {
      func_0x0001087c9084(1,lVar2);
      goto LAB_103c96aa0;
    }
    _memcpy(lStack_188,uVar18,lVar2);
    uVar18 = *(undefined8 *)(param_2 + 0x50);
    lVar19 = *(long *)(param_2 + 0x58);
    if (lVar19 == 0) goto LAB_103c964bc;
LAB_103c9648c:
    lVar12 = _malloc(lVar19);
    if (lVar12 == 0) {
      func_0x0001087c9084(1,lVar19);
      goto LAB_103c96aa0;
    }
  }
  _memcpy(lVar12,uVar18,lVar19);
  pppuStack_168 = pppuVar4;
  puStack_160 = puVar5;
  uStack_d0 = puStack_a8;
  lStack_d8 = lStack_b0;
  uStack_c8 = lStack_a0;
  pppuStack_138 = pppuVar1;
  puStack_130 = puVar10;
  lStack_128 = lVar6;
  uStack_120 = 10;
  uStack_110 = 10;
  lStack_100 = lStack_188;
  ppuStack_158 = (undefined8 ***)(lVar16 + 0x24);
  lStack_150 = lVar17;
  lStack_148 = lVar9;
  lStack_140 = lVar17;
  puStack_118 = puVar11;
  lStack_108 = lVar2;
  lStack_f8 = lVar2;
  lStack_f0 = lVar19;
  lStack_e8 = lVar12;
  lStack_e0 = lVar19;
  puStack_a8 = (undefined1 *)_malloc(0x80);
  if (puStack_a8 == (undefined1 *)0x0) {
    func_0x0001087c9084(1,0x80);
LAB_103c96aa0:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103c96aa4);
    (*pcVar7)();
  }
  lStack_b0 = 0x80;
  plStack_98 = &lStack_b0;
  *puStack_a8 = 0x7b;
  lStack_a0 = 1;
  bStack_90 = 0;
  pplStack_88 = &plStack_98;
  func_0x000103c723f0(&lStack_b0,&UNK_108db87f7,10);
  plVar14 = plStack_98;
  lVar15 = plStack_98[2];
  if (*plStack_98 == lVar15) {
    FUN_1089762d4(plStack_98,lVar15,1,1,1);
    lVar15 = plVar14[2];
  }
  *(undefined1 *)(plVar14[1] + lVar15) = 0x3a;
  plVar14[2] = lVar15 + 1;
  func_0x000103c723f0(plStack_98,puVar5,(undefined8 ***)(lVar16 + 0x24));
  plVar14 = plStack_98;
  lVar16 = plStack_98[2];
  if (*plStack_98 == lVar16) {
    FUN_1089762d4(plStack_98,lVar16,1,1,1);
    lVar16 = plVar14[2];
  }
  *(undefined1 *)(plVar14[1] + lVar16) = 0x2c;
  plVar14[2] = lVar16 + 1;
  cStack_8f = '\x02';
  func_0x000103c723f0(plStack_98,&UNK_108db8801,7);
  plVar14 = plStack_98;
  lVar16 = plStack_98[2];
  if (*plStack_98 == lVar16) {
    FUN_1089762d4(plStack_98,lVar16,1,1,1);
    lVar16 = plVar14[2];
  }
  *(undefined1 *)(plVar14[1] + lVar16) = 0x3a;
  plVar14[2] = lVar16 + 1;
  func_0x000103c723f0(plStack_98,lVar9,lVar17);
  puVar13 = (undefined1 *)func_0x000103cb6764(&bStack_90,&lStack_d8);
  pplVar3 = pplStack_88;
  if (puVar13 == (undefined1 *)0x0) {
    if ((bStack_90 & 1) != 0) {
      pppuStack_80 = (undefined8 ****)0xa;
      puVar13 = (undefined1 *)func_0x000108a4a0f8(&pppuStack_80,0,0);
      goto joined_r0x000103c966a0;
    }
    plVar14 = *pplStack_88;
    if (cStack_8f != '\x01') {
      lVar17 = plVar14[2];
      if (*plVar14 == lVar17) {
        FUN_1089762d4(plVar14,lVar17,1,1,1);
        lVar17 = plVar14[2];
      }
      *(undefined1 *)(plVar14[1] + lVar17) = 0x2c;
      plVar14[2] = lVar17 + 1;
      plVar14 = *pplVar3;
    }
    func_0x000103c723f0(plVar14,&UNK_108db153f,3);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x3a;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,puVar10,lVar6);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x2c;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,&UNK_108db8817,0xf);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x3a;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,puVar11,10);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x2c;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,&UNK_108db8826,5);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x3a;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,lStack_188,lVar2);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x2c;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,&UNK_108db8840,7);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x3a;
    plVar14[2] = lVar17 + 1;
    func_0x000103c723f0(*pplVar3,lVar12,lVar19);
    plVar14 = *pplVar3;
    lVar17 = plVar14[2];
    if (*plVar14 == lVar17) {
      FUN_1089762d4(plVar14,lVar17,1,1,1);
      lVar17 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar17) = 0x7d;
    plVar14[2] = lVar17 + 1;
    puVar13 = puStack_a8;
    if (lStack_b0 != -0x8000000000000000) {
      *param_1 = lStack_b0;
      param_1[1] = (long)puStack_a8;
      param_1[2] = lStack_a0;
      goto LAB_103c96650;
    }
  }
  else {
joined_r0x000103c966a0:
    if (lStack_b0 != 0) {
      _free(puStack_a8);
    }
  }
  *param_1 = -0x8000000000000000;
  param_1[1] = (long)puVar13;
LAB_103c96650:
  func_0x000103ca7804(&pppuStack_168);
  return;
}

