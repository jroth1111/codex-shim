
void FUN_101315b18(ulong *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcStack_168;
  char *pcStack_160;
  ulong uStack_158;
  char *pcStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  char acStack_88 [40];
  
  if (*param_2 == '\x14') {
    uVar10 = *(ulong *)(param_2 + 8);
    pcVar2 = *(char **)(param_2 + 0x10);
    uVar11 = *(ulong *)(param_2 + 0x18);
    pcVar1 = pcVar2 + uVar11 * 0x20;
    lStack_148 = 0;
    uVar14 = uVar11;
    if (0x3332 < uVar11) {
      uVar14 = 0x3333;
    }
    pcStack_168 = pcVar2;
    uStack_158 = uVar10;
    pcStack_150 = pcVar1;
    if (uVar11 == 0) {
      uStack_140 = 0;
      uStack_138 = 8;
      uStack_130 = 0;
      pcVar8 = pcVar2;
      lVar6 = lStack_148;
    }
    else {
      pcStack_160 = pcVar2;
      uStack_138 = _malloc(uVar14 * 0x50);
      if (uStack_138 == 0) {
        func_0x0001087c9084(8,uVar14 * 0x50);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101315dd8);
        (*pcVar7)();
      }
      uStack_130 = 0;
      cVar3 = *pcVar2;
      uStack_140 = uVar14;
      if (cVar3 != '\x16') {
        lVar13 = 0;
        puVar15 = (undefined8 *)((ulong)acStack_88 | 1);
        uVar11 = uVar11 * 0x20 - 0x20;
        uVar14 = uVar11 >> 5;
        pcVar9 = pcVar2 + 0x20;
LAB_101315be8:
        uVar16 = *(undefined8 *)(pcVar9 + -0x1f);
        puVar15[1] = *(undefined8 *)(pcVar9 + -0x17);
        *puVar15 = uVar16;
        uVar16 = *(undefined8 *)(pcVar9 + -0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar9 + -8);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar16;
        acStack_88[0] = cVar3;
        func_0x000100791d64(&lStack_d8,acStack_88);
        uVar5 = uStack_130;
        uVar4 = uStack_138;
        if (lStack_d8 == 4) {
          lStack_148 = lVar13 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_d0;
          pcStack_160 = pcVar9;
          uVar14 = uStack_138;
          for (uVar11 = uStack_130; uVar11 != 0; uVar11 = uVar11 - 1) {
            FUN_100e1d024(uVar14);
            uVar14 = uVar14 + 0x50;
          }
          if (uStack_140 != 0) {
            _free(uVar4);
          }
          goto LAB_101315d1c;
        }
        lStack_110 = lStack_c0;
        lStack_118 = lStack_c8;
        lStack_100 = lStack_b0;
        lStack_108 = lStack_b8;
        lStack_f0 = lStack_a0;
        lStack_f8 = lStack_a8;
        lStack_e0 = lStack_90;
        lStack_e8 = lStack_98;
        lStack_128 = lStack_d8;
        uStack_120 = uStack_d0;
        if (uStack_130 == uStack_140) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h86c95132879a95f1E(&uStack_140);
        }
        plVar12 = (long *)(uStack_138 + uVar5 * 0x50);
        plVar12[1] = uStack_120;
        *plVar12 = lStack_128;
        plVar12[3] = lStack_110;
        plVar12[2] = lStack_118;
        plVar12[5] = lStack_100;
        plVar12[4] = lStack_108;
        plVar12[7] = lStack_f0;
        plVar12[6] = lStack_f8;
        plVar12[9] = lStack_e0;
        plVar12[8] = lStack_e8;
        uStack_130 = uVar5 + 1;
        pcVar8 = pcVar1;
        lVar6 = uVar14 + 1;
        if (uVar11 != 0) goto code_r0x000101315c78;
        goto LAB_101315cfc;
      }
      pcVar8 = pcVar2 + 0x20;
      lVar6 = 0;
    }
LAB_101315cfc:
    lStack_148 = lVar6;
    pcVar9 = pcVar8;
    param_1[1] = uStack_138;
    *param_1 = uStack_140;
    param_1[2] = uStack_130;
    uVar14 = *param_1;
    pcStack_160 = pcVar9;
    if (uVar14 == 0x8000000000000000) {
LAB_101315d1c:
      lVar13 = ((ulong)((long)pcVar1 - (long)pcVar9) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pcVar9);
        pcVar9 = pcVar9 + 0x20;
      }
    }
    else {
      pcVar2 = (char *)param_1[1];
      uVar11 = param_1[2];
      uVar10 = FUN_100fbc738(&pcStack_168);
      if (uVar10 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      pcVar1 = pcVar2;
      for (; uVar10 = uVar14, uVar11 != 0; uVar11 = uVar11 - 1) {
        FUN_100e1d024(pcVar1);
        pcVar1 = pcVar1 + 0x50;
      }
    }
    if (uVar10 != 0) {
      _free(pcVar2);
    }
  }
  else {
    uVar14 = FUN_108855b04(param_2,&lStack_d8,&UNK_10b20a2c0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
  }
  return;
code_r0x000101315c78:
  pcVar8 = pcVar9 + 0x20;
  cVar3 = *pcVar9;
  uVar11 = uVar11 - 0x20;
  lVar13 = lVar13 + 1;
  pcVar9 = pcVar8;
  lVar6 = lVar13;
  if (cVar3 == '\x16') goto LAB_101315cfc;
  goto LAB_101315be8;
}

