
void FUN_10132fb4c(ulong *param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcStack_158;
  char *pcStack_150;
  ulong uStack_148;
  char *pcStack_140;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  char acStack_88 [40];
  
  if (*param_2 == '\x14') {
    uVar1 = *(ulong *)(param_2 + 8);
    pcVar2 = *(char **)(param_2 + 0x10);
    uVar9 = *(ulong *)(param_2 + 0x18);
    pcVar8 = pcVar2 + uVar9 * 0x20;
    lStack_138 = 0;
    uVar14 = uVar9;
    if (0x38e2 < uVar9) {
      uVar14 = 0x38e3;
    }
    pcStack_158 = pcVar2;
    uStack_148 = uVar1;
    pcStack_140 = pcVar8;
    if (uVar9 == 0) {
      uStack_130 = 0;
      uStack_128 = 8;
      uStack_120 = 0;
      pcVar12 = pcVar2;
      lVar6 = lStack_138;
    }
    else {
      pcStack_150 = pcVar2;
      uStack_128 = _malloc(uVar14 * 0x48);
      if (uStack_128 == 0) {
        func_0x0001087c9084(8,uVar14 * 0x48);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10132fe24);
        (*pcVar7)();
      }
      uStack_120 = 0;
      cVar3 = *pcVar2;
      uStack_130 = uVar14;
      if (cVar3 != '\x16') {
        lVar13 = 0;
        puVar15 = (undefined8 *)((ulong)acStack_88 | 1);
        uVar9 = uVar9 * 0x20 - 0x20;
        uVar14 = uVar9 >> 5;
        pcVar11 = pcVar2 + 0x20;
LAB_10132fc28:
        uVar16 = *(undefined8 *)(pcVar11 + -0x1f);
        puVar15[1] = *(undefined8 *)(pcVar11 + -0x17);
        *puVar15 = uVar16;
        uVar16 = *(undefined8 *)(pcVar11 + -0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar11 + -8);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar16;
        acStack_88[0] = cVar3;
        FUN_1004aa788(&lStack_d0,acStack_88);
        uVar5 = uStack_120;
        uVar4 = uStack_128;
        if (lStack_d0 == -0x7ffffffffffffffb) {
          lStack_138 = lVar13 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_c8;
          lVar13 = uStack_120 + 1;
          uVar14 = uStack_128;
          pcStack_150 = pcVar11;
          while (lVar13 = lVar13 + -1, lVar13 != 0) {
            FUN_100de6690(uVar14);
            uVar14 = uVar14 + 0x48;
          }
          if (uStack_130 != 0) {
            _free(uVar4);
          }
          goto LAB_10132fd60;
        }
        lStack_100 = lStack_b8;
        lStack_108 = lStack_c0;
        lStack_f0 = lStack_a8;
        lStack_f8 = lStack_b0;
        lStack_e0 = lStack_98;
        lStack_e8 = lStack_a0;
        lStack_d8 = lStack_90;
        lStack_118 = lStack_d0;
        uStack_110 = uStack_c8;
        if (uStack_120 == uStack_130) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_130);
        }
        plVar10 = (long *)(uStack_128 + uVar5 * 0x48);
        plVar10[1] = uStack_110;
        *plVar10 = lStack_118;
        plVar10[3] = lStack_100;
        plVar10[2] = lStack_108;
        plVar10[5] = lStack_f0;
        plVar10[4] = lStack_f8;
        plVar10[7] = lStack_e0;
        plVar10[6] = lStack_e8;
        plVar10[8] = lStack_d8;
        uStack_120 = uVar5 + 1;
        pcVar12 = pcVar8;
        lVar6 = uVar14 + 1;
        if (uVar9 != 0) goto code_r0x00010132fcbc;
        goto LAB_10132fd40;
      }
      pcVar12 = pcVar2 + 0x20;
      lVar6 = 0;
    }
LAB_10132fd40:
    lStack_138 = lVar6;
    pcVar11 = pcVar12;
    param_1[1] = uStack_128;
    *param_1 = uStack_130;
    param_1[2] = uStack_120;
    uVar14 = *param_1;
    pcStack_150 = pcVar11;
    if (uVar14 == 0x8000000000000000) {
LAB_10132fd60:
      lVar13 = ((ulong)((long)pcVar8 - (long)pcVar11) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pcVar11);
        pcVar11 = pcVar11 + 0x20;
      }
    }
    else {
      pcVar2 = (char *)param_1[1];
      uVar1 = param_1[2];
      uVar9 = FUN_100fbc738(&pcStack_158);
      if (uVar9 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      lVar13 = uVar1 + 1;
      pcVar8 = pcVar2;
      while (lVar13 = lVar13 + -1, uVar1 = uVar14, lVar13 != 0) {
        FUN_100de6690(pcVar8);
        pcVar8 = pcVar8 + 0x48;
      }
    }
    if (uVar1 != 0) {
      _free(pcVar2);
    }
  }
  else {
    uVar14 = FUN_108855b04(param_2,&lStack_d0,&UNK_10b20a440);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
  }
  return;
code_r0x00010132fcbc:
  pcVar12 = pcVar11 + 0x20;
  cVar3 = *pcVar11;
  uVar9 = uVar9 - 0x20;
  lVar13 = lVar13 + 1;
  pcVar11 = pcVar12;
  lVar6 = lVar13;
  if (cVar3 == '\x16') goto LAB_10132fd40;
  goto LAB_10132fc28;
}

