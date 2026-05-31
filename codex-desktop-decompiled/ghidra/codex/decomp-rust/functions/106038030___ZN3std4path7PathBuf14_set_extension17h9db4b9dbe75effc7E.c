
/* WARNING: Removing unreachable block (ram,0x000106037ea0) */
/* WARNING: Removing unreachable block (ram,0x000106037ed4) */

undefined8
__ZN3std4path7PathBuf14_set_extension17h9db4b9dbe75effc7E
          (long *param_1,char *param_2,char **param_3)

{
  ulong uVar1;
  char **ppcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  char **ppcVar6;
  char **extraout_x1;
  char **ppcVar7;
  char *extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char **unaff_x22;
  char *pcVar12;
  long lVar13;
  char **unaff_x23;
  undefined1 auVar14 [16];
  char acStack_178 [56];
  char *pcStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined2 uStack_108;
  undefined1 uStack_106;
  char **ppcStack_100;
  char **ppcStack_f8;
  char **ppcStack_f0;
  char *pcStack_e8;
  long *plStack_e0;
  char **ppcStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_b8;
  char **ppcStack_b0;
  ulong uStack_a8;
  char **ppcStack_80;
  char **ppcStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined2 uStack_48;
  undefined1 uStack_46;
  
  pcStack_b8 = param_2;
  ppcStack_b0 = param_3;
  if (param_3 != (char **)0x0) {
    pcVar12 = param_2;
    for (uVar11 = (ulong)param_3 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      if (*pcVar12 == '/') goto LAB_106037f7c;
      pcVar12 = pcVar12 + 1;
    }
    if ((char **)0x3 < param_3) {
      do {
        if ((((*pcVar12 == '/') || (pcVar12[1] == '/')) || (pcVar12[2] == '/')) ||
           (pcVar12[3] == '/')) goto LAB_106037f7c;
        pcVar12 = pcVar12 + 4;
      } while (pcVar12 != param_2 + (long)param_3);
    }
  }
  unaff_x23 = (char **)param_1[1];
  unaff_x22 = (char **)param_1[2];
  if (unaff_x22 == (char **)0x0) {
    uStack_46 = false;
  }
  else {
    uStack_46 = *(char *)unaff_x23 == '/';
  }
  uStack_70 = 6;
  uStack_48 = 0x201;
  ppcVar7 = param_3;
  ppcStack_80 = unaff_x23;
  ppcStack_78 = unaff_x22;
  __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
            (&pcStack_b8,&ppcStack_80);
  if ((char)pcStack_b8 != '\t') {
    return 0;
  }
  uVar11 = uStack_a8;
  ppcVar6 = ppcStack_b0;
  if ((uStack_a8 == 2) && (*(short *)ppcStack_b0 == 0x2e2e)) {
    uVar9 = 2;
    ppcVar2 = (char **)0x0;
    if (ppcStack_b0 != (char **)0x0) {
      ppcVar2 = ppcStack_b0;
    }
  }
  else {
    do {
      uVar10 = uVar11;
      if ((char **)((long)ppcStack_b0 + uVar10) == ppcStack_b0) {
        ppcVar6 = (char **)0x0;
        uVar9 = uVar10;
        ppcVar2 = ppcStack_b0;
        goto joined_r0x000106037ea4;
      }
      uVar11 = uVar10 - 1;
    } while (*(char *)((long)((long)ppcStack_b0 + uVar10) + -1) != '.');
    uVar1 = ~uVar11 + uStack_a8;
    uVar9 = uVar11;
    if (uVar11 == 0) {
      uVar1 = uStack_a8;
      uVar9 = uStack_a8;
    }
    ppcVar2 = (char **)0x0;
    if (uVar11 != 0) {
      ppcVar2 = (char **)((long)ppcStack_b0 + uVar10);
    }
    uStack_a8 = uVar1;
    if (ppcStack_b0 != (char **)0x0) {
      ppcVar2 = ppcStack_b0;
    }
  }
joined_r0x000106037ea4:
  if (ppcVar2 == (char **)0x0) {
    return 0;
  }
  if (ppcVar6 != (char **)0x0) {
    uStack_a8 = uVar9;
  }
  ppcVar2 = (char **)((long)ppcVar2 + (uStack_a8 - (long)unaff_x23));
  if (((ppcVar2 != (char **)0x0) && (ppcVar2 != unaff_x22)) && (unaff_x22 <= ppcVar2)) {
    ppcVar7 = ppcVar2;
    __ZN3std3sys6os_str5bytes5Slice21check_public_boundary9slow_path17h19a33fd69e748584E
              (unaff_x23,unaff_x22,ppcVar2,&UNK_10b4ada68);
  }
  if (ppcVar2 <= unaff_x22) {
    param_1[2] = (long)ppcVar2;
    unaff_x22 = ppcVar2;
  }
  if (param_3 == (char **)0x0) {
    return 1;
  }
  pcVar12 = (char *)((long)param_3 + 1);
  ppcVar6 = (char **)*param_1;
  if ((char *)((long)ppcVar6 - (long)unaff_x22) < pcVar12) goto LAB_106037fa4;
  if (ppcVar6 != unaff_x22) goto LAB_106037f24;
LAB_106037fe0:
  FUN_108a85fec(param_1,unaff_x22,1,1,1);
  unaff_x22 = (char **)param_1[2];
  unaff_x23 = (char **)param_1[1];
LAB_106037f24:
  *(char *)((long)unaff_x23 + (long)unaff_x22) = '.';
  pcVar12 = (char *)((long)unaff_x22 + 1);
  param_1[2] = (long)pcVar12;
  if ((char **)(*param_1 - (long)pcVar12) < param_3) {
    FUN_108a85fec(param_1,pcVar12,param_3,1,1);
    pcVar12 = (char *)param_1[2];
  }
  _memcpy(pcVar12 + param_1[1],param_2,param_3);
  param_1[2] = (long)(pcVar12 + (long)param_3);
  return 1;
LAB_106037f7c:
  ppcStack_80 = &pcStack_b8;
  ppcStack_78 = (char **)&DAT_10603b570;
  ppcVar7 = (char **)&UNK_10b4ae100;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__extension_cannot_contain_path_s_108b34b19,&ppcStack_80);
  ppcVar6 = extraout_x1;
  pcVar12 = extraout_x8;
LAB_106037fa4:
  ppcVar2 = (char **)((long)unaff_x22 + (long)pcVar12);
  if (CARRY8((ulong)unaff_x22,(ulong)pcVar12)) {
    func_0x0001087c9084(0);
  }
  else {
    ppcVar7 = unaff_x23;
    func_0x000108a85da8(&ppcStack_80,ppcVar6,unaff_x23,ppcVar2,1,1);
    if ((int)ppcStack_80 != 1) {
      *param_1 = (long)ppcVar2;
      param_1[1] = (long)ppcStack_78;
      unaff_x23 = ppcStack_78;
      if (ppcVar2 != unaff_x22) goto LAB_106037f24;
      goto LAB_106037fe0;
    }
  }
  auVar14 = func_0x0001087c9084(ppcStack_78,CONCAT71(uStack_6f,uStack_70));
  plVar4 = auVar14._0_8_;
  uStack_c8 = 0x106038030;
  pcVar12 = (char *)plVar4[1];
  lVar13 = plVar4[2];
  if (lVar13 == 0) {
    uStack_106 = false;
  }
  else {
    uStack_106 = *pcVar12 == '/';
  }
  uStack_130 = 6;
  uStack_108 = 0x201;
  pcStack_140 = pcVar12;
  lStack_138 = lVar13;
  ppcStack_100 = ppcVar2;
  ppcStack_f8 = unaff_x23;
  ppcStack_f0 = unaff_x22;
  pcStack_e8 = param_2;
  plStack_e0 = param_1;
  ppcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
            (acStack_178,&pcStack_140);
  if (acStack_178[0] == '\t') {
    __ZN3std4path7PathBuf3pop17ha75990e6a752bb41E(plVar4);
    pcVar12 = (char *)plVar4[1];
    lVar13 = plVar4[2];
  }
  bVar3 = false;
  if ((lVar13 != 0) && (pcVar12 + lVar13 + -1 != (char *)0x0)) {
    bVar3 = pcVar12[lVar13 + -1] != '/';
  }
  if ((ppcVar7 == (char **)0x0) || (*auVar14._8_8_ != '/')) {
    lVar8 = *plVar4;
    if (!bVar3) goto LAB_106038108;
    if (lVar8 == lVar13) {
      FUN_108a85fec(plVar4,lVar13,1,1,1);
      pcVar12 = (char *)plVar4[1];
      lVar13 = plVar4[2];
    }
    pcVar12[lVar13] = '/';
    lVar13 = lVar13 + 1;
  }
  else {
    lVar13 = 0;
  }
  plVar4[2] = lVar13;
  lVar8 = *plVar4;
LAB_106038108:
  if ((char **)(lVar8 - lVar13) < ppcVar7) {
    FUN_108a85fec(plVar4,lVar13,ppcVar7,1,1);
    pcVar12 = (char *)plVar4[1];
    lVar13 = plVar4[2];
  }
  uVar5 = _memcpy(pcVar12 + lVar13,auVar14._8_8_,ppcVar7);
  plVar4[2] = (long)(lVar13 + (long)ppcVar7);
  return uVar5;
}

