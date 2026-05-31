
void FUN_103ebb410(ulong *param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcStack_e8;
  char *pcStack_e0;
  ulong uStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  char *pcStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  char *pcStack_a0;
  long lStack_98;
  ulong uStack_90;
  char *pcStack_88;
  ulong uStack_80;
  undefined1 auStack_69 [9];
  
  if (*param_2 == '\x14') {
    uVar1 = *(ulong *)(param_2 + 8);
    pcVar2 = *(char **)(param_2 + 0x10);
    uVar11 = *(ulong *)(param_2 + 0x18);
    pcVar10 = pcVar2 + uVar11 * 0x20;
    lStack_c8 = 0;
    uVar13 = uVar11;
    if (0xaaa9 < uVar11) {
      uVar13 = 0xaaaa;
    }
    pcStack_e8 = pcVar2;
    uStack_d8 = uVar1;
    pcStack_d0 = pcVar10;
    if (uVar11 == 0) {
      uStack_c0 = 0;
      pcStack_b8 = (char *)0x8;
      uStack_b0 = 0;
      pcVar8 = pcVar2;
      lVar6 = lStack_c8;
    }
    else {
      pcStack_e0 = pcVar2;
      pcStack_b8 = (char *)_malloc(uVar13 * 0x18);
      if (pcStack_b8 == (char *)0x0) {
        func_0x0001087c9084(8,uVar13 * 0x18);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x103ebb6ec);
        (*pcVar7)();
      }
      uStack_b0 = 0;
      cVar3 = *pcVar2;
      uStack_c0 = uVar13;
      if (cVar3 != '\x16') {
        lVar15 = 0;
        puVar16 = (undefined8 *)((ulong)&uStack_90 | 1);
        uVar11 = uVar11 * 0x20 - 0x20;
        uVar13 = uVar11 >> 5;
        pcVar9 = pcVar2 + 0x20;
LAB_103ebb4e0:
        uVar17 = *(undefined8 *)(pcVar9 + -0x1f);
        puVar16[1] = *(undefined8 *)(pcVar9 + -0x17);
        *puVar16 = uVar17;
        uVar17 = *(undefined8 *)(pcVar9 + -0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pcVar9 + -8);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar17;
        uStack_90 = CONCAT71(uStack_90._1_7_,cVar3);
        FUN_103d20208(&lStack_a8,&uStack_90);
        lVar5 = lStack_98;
        pcVar14 = pcStack_a0;
        lVar6 = lStack_a8;
        uVar4 = uStack_b0;
        pcVar8 = pcStack_b8;
        if (lStack_a8 == -0x8000000000000000) {
          lStack_c8 = lVar15 + 1;
          pcStack_88 = pcStack_a0;
          pcStack_e0 = pcVar9;
          if (uStack_b0 != 0) {
            pcVar14 = pcStack_b8 + 8;
            uVar13 = uStack_b0;
            do {
              if (*(long *)(pcVar14 + -8) != 0) {
                _free(*(undefined8 *)pcVar14);
              }
              pcVar14 = pcVar14 + 0x18;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (uStack_c0 != 0) {
            _free(pcVar8);
          }
          goto LAB_103ebb60c;
        }
        if (uStack_b0 == uStack_c0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_c0);
        }
        plVar12 = (long *)(pcStack_b8 + uVar4 * 0x18);
        *plVar12 = lVar6;
        plVar12[1] = (long)pcVar14;
        plVar12[2] = lVar5;
        uStack_b0 = uVar4 + 1;
        pcVar8 = pcVar10;
        lVar6 = uVar13 + 1;
        if (uVar11 != 0) goto code_r0x000103ebb548;
        goto LAB_103ebb5ec;
      }
      pcVar8 = pcVar2 + 0x20;
      lVar6 = 0;
    }
LAB_103ebb5ec:
    lStack_c8 = lVar6;
    pcVar9 = pcVar8;
    uVar13 = uStack_b0;
    pcVar8 = pcStack_b8;
    uVar11 = uStack_c0;
    pcStack_88 = pcStack_b8;
    uStack_90 = uStack_c0;
    uStack_80 = uStack_b0;
    pcStack_e0 = pcVar9;
    if (uStack_c0 == 0x8000000000000000) {
LAB_103ebb60c:
      lVar15 = ((ulong)((long)pcVar10 - (long)pcVar9) >> 5) + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        func_0x000103db23f4(pcVar9);
        pcVar9 = pcVar9 + 0x20;
      }
    }
    else {
      pcVar10 = (char *)FUN_103e32ba0(&pcStack_e8);
      if (pcVar10 == (char *)0x0) {
        param_1[1] = (ulong)pcStack_88;
        *param_1 = uStack_90;
        param_1[2] = uStack_80;
        return;
      }
      pcVar2 = pcVar8;
      pcStack_88 = pcVar10;
      uVar1 = uVar11;
      if (uVar13 != 0) {
        pcVar8 = pcVar8 + 8;
        do {
          if (*(long *)(pcVar8 + -8) != 0) {
            _free(*(undefined8 *)pcVar8);
          }
          pcVar8 = pcVar8 + 0x18;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    if (uVar1 != 0) {
      _free(pcVar2);
    }
  }
  else {
    pcStack_88 = (char *)func_0x00010897c8c4(param_2,auStack_69,&UNK_10b2f72a8);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = (ulong)pcStack_88;
  return;
code_r0x000103ebb548:
  pcVar8 = pcVar9 + 0x20;
  cVar3 = *pcVar9;
  uVar11 = uVar11 - 0x20;
  lVar15 = lVar15 + 1;
  pcVar9 = pcVar8;
  lVar6 = lVar15;
  if (cVar3 == '\x16') goto LAB_103ebb5ec;
  goto LAB_103ebb4e0;
}

