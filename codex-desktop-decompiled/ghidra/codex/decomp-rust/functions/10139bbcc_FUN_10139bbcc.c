
void FUN_10139bbcc(long *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcStack_1e0;
  char *pcStack_1d8;
  long lStack_1d0;
  char *pcStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  char acStack_88 [40];
  
  if (*param_2 != '\x14') {
    FUN_108855b7c(param_1,param_2,&lStack_e8,&UNK_10b20a260);
    return;
  }
  lVar1 = *(long *)(param_2 + 8);
  pcVar2 = *(char **)(param_2 + 0x10);
  uVar5 = *(ulong *)(param_2 + 0x18);
  pcVar8 = pcVar2 + uVar5 * 0x20;
  lStack_1c0 = 0;
  uVar10 = uVar5;
  if (0x2aa9 < uVar5) {
    uVar10 = 0x2aaa;
  }
  pcStack_1e0 = pcVar2;
  lStack_1d0 = lVar1;
  pcStack_1c8 = pcVar8;
  if (uVar5 == 0) {
    uStack_1b8 = 0;
    lStack_1b0 = 8;
    uStack_1a8 = 0;
    pcVar8 = pcVar2;
    lVar9 = lStack_1c0;
  }
  else {
    pcStack_1d8 = pcVar2;
    lStack_1b0 = _malloc(uVar10 * 0x60);
    if (lStack_1b0 == 0) {
      func_0x0001087c9084(8,uVar10 * 0x60);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10139bfec);
      (*pcVar4)();
    }
    uStack_1a8 = 0;
    cVar3 = *pcVar2;
    uStack_1b8 = uVar10;
    if (cVar3 == '\x16') {
      pcVar8 = pcVar2 + 0x20;
      lVar9 = 0;
    }
    else {
      lVar12 = 0;
      puVar7 = (undefined8 *)((ulong)acStack_88 | 1);
      uVar5 = uVar5 * 0x20 - 0x20;
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar13 = *(undefined8 *)(pcVar2 + uVar11 + 1);
        puVar7[1] = *(undefined8 *)(pcVar2 + uVar11 + 9);
        *puVar7 = uVar13;
        uVar13 = *(undefined8 *)(pcVar2 + uVar11 + 0x10);
        *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)(pcVar2 + uVar11 + 0x18);
        *(undefined8 *)((long)puVar7 + 0xf) = uVar13;
        acStack_88[0] = cVar3;
        func_0x0001007357bc(&lStack_e8,acStack_88);
        uVar10 = uStack_1a8;
        lVar9 = lStack_1b0;
        lStack_178 = lStack_b8;
        lStack_180 = lStack_c0;
        lStack_168 = lStack_a8;
        lStack_170 = lStack_b0;
        lStack_158 = lStack_98;
        lStack_160 = lStack_a0;
        lStack_150 = lStack_90;
        lStack_198 = lStack_d8;
        lStack_1a0 = lStack_e0;
        lStack_188 = lStack_c8;
        lStack_190 = lStack_d0;
        if (lStack_e8 == 4) {
          pcVar8 = pcVar2 + uVar11 + 0x20;
          lStack_1c0 = lVar12 + 1;
          param_1[5] = lStack_b8;
          param_1[4] = lStack_c0;
          param_1[7] = lStack_a8;
          param_1[6] = lStack_b0;
          param_1[9] = lStack_98;
          param_1[8] = lStack_a0;
          param_1[10] = lStack_90;
          param_1[1] = lStack_d8;
          *param_1 = lStack_e0;
          param_1[3] = lStack_c8;
          param_1[2] = lStack_d0;
          pcStack_1d8 = pcVar8;
          if (uStack_1a8 == 0) goto LAB_10139be54;
          plVar6 = (long *)(lStack_1b0 + 0x28);
          goto LAB_10139bdf0;
        }
        lStack_118 = lStack_b8;
        lStack_120 = lStack_c0;
        lStack_108 = lStack_a8;
        lStack_110 = lStack_b0;
        lStack_f8 = lStack_98;
        lStack_100 = lStack_a0;
        lStack_138 = lStack_d8;
        lStack_140 = lStack_e0;
        lStack_148 = lStack_e8;
        lStack_f0 = lStack_90;
        lStack_128 = lStack_c8;
        lStack_130 = lStack_d0;
        if (uStack_1a8 == uStack_1b8) {
          func_0x000108919d14(&uStack_1b8);
        }
        plVar6 = (long *)(lStack_1b0 + uVar10 * 0x60);
        plVar6[5] = lStack_120;
        plVar6[4] = lStack_128;
        plVar6[7] = lStack_110;
        plVar6[6] = lStack_118;
        plVar6[9] = lStack_100;
        plVar6[8] = lStack_108;
        plVar6[0xb] = lStack_f0;
        plVar6[10] = lStack_f8;
        plVar6[1] = lStack_140;
        *plVar6 = lStack_148;
        plVar6[3] = lStack_130;
        plVar6[2] = lStack_138;
        uStack_1a8 = uVar10 + 1;
        lVar9 = (uVar5 >> 5) + 1;
        if (uVar5 == uVar11) goto LAB_10139bea8;
        cVar3 = pcVar2[uVar11 + 0x20];
        lVar12 = lVar12 + 1;
        uVar10 = uVar11 + 0x20;
      } while (cVar3 != '\x16');
      pcVar8 = pcVar2 + uVar11 + 0x40;
      lVar9 = lVar12;
    }
  }
LAB_10139bea8:
  lStack_1c0 = lVar9;
  pcStack_1d8 = pcVar8;
  param_1[2] = lStack_1b0;
  param_1[1] = uStack_1b8;
  param_1[3] = uStack_1a8;
  *param_1 = 2;
  goto LAB_10139bec0;
LAB_10139bdf0:
  do {
    if ((ulong)plVar6[-5] < 2) {
      if (plVar6[-3] != 0) {
        _free(plVar6[-2]);
      }
      if (*plVar6 == -0x8000000000000000 || *plVar6 == 0) {
        if (plVar6[3] != -0x8000000000000000 && plVar6[3] != 0) {
LAB_10139be48:
          _free(plVar6[4]);
        }
      }
      else {
        _free(plVar6[1]);
        if (plVar6[3] != -0x8000000000000000 && plVar6[3] != 0) goto LAB_10139be48;
      }
    }
    plVar6 = plVar6 + 0xc;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
LAB_10139be54:
  if (uStack_1b8 != 0) {
    _free(lVar9);
  }
  if (*param_1 != 2) {
    lVar9 = (uVar5 - uVar11 >> 5) + 1;
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
      FUN_100e077ec(pcVar8);
      pcVar8 = pcVar8 + 0x20;
    }
    goto joined_r0x00010139bfbc;
  }
LAB_10139bec0:
  lVar1 = param_1[1];
  pcVar2 = (char *)param_1[2];
  lVar9 = param_1[3];
  FUN_100fbc814(&lStack_e8,&pcStack_1e0);
  if (lStack_e8 == 2) {
    *param_1 = 2;
    return;
  }
  param_1[5] = lStack_c0;
  param_1[4] = lStack_c8;
  param_1[7] = lStack_b0;
  param_1[6] = lStack_b8;
  param_1[9] = lStack_a0;
  param_1[8] = lStack_a8;
  param_1[10] = lStack_98;
  param_1[1] = lStack_e0;
  *param_1 = lStack_e8;
  param_1[3] = lStack_d0;
  param_1[2] = lStack_d8;
  if (lVar9 != 0) {
    plVar6 = (long *)(pcVar2 + 0x28);
    do {
      if ((ulong)plVar6[-5] < 2) {
        if (plVar6[-3] != 0) {
          _free(plVar6[-2]);
        }
        if (*plVar6 == -0x8000000000000000 || *plVar6 == 0) {
          if (plVar6[3] != -0x8000000000000000 && plVar6[3] != 0) {
LAB_10139bf84:
            _free(plVar6[4]);
          }
        }
        else {
          _free(plVar6[1]);
          if (plVar6[3] != -0x8000000000000000 && plVar6[3] != 0) goto LAB_10139bf84;
        }
      }
      plVar6 = plVar6 + 0xc;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
joined_r0x00010139bfbc:
  if (lVar1 != 0) {
    _free(pcVar2);
  }
  return;
}

