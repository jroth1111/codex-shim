
void FUN_10140ce34(ulong *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcStack_100;
  char *pcStack_f8;
  ulong uStack_f0;
  char *pcStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  char *pcStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  char *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  char *pcStack_88;
  ulong uStack_80;
  undefined1 auStack_69 [9];
  
  if (*param_2 == '\x14') {
    uVar2 = *(ulong *)(param_2 + 8);
    pcVar3 = *(char **)(param_2 + 0x10);
    uVar11 = *(ulong *)(param_2 + 0x18);
    pcVar10 = pcVar3 + uVar11 * 0x20;
    lStack_e0 = 0;
    uVar12 = uVar11;
    if (0x7fff < uVar11) {
      uVar12 = 0x8000;
    }
    pcStack_100 = pcVar3;
    uStack_f0 = uVar2;
    pcStack_e8 = pcVar10;
    if (uVar11 == 0) {
      uStack_d8 = 0;
      pcStack_d0 = (char *)0x8;
      uStack_c8 = 0;
      pcVar8 = pcVar3;
      lVar6 = lStack_e0;
    }
    else {
      pcStack_f8 = pcVar3;
      pcStack_d0 = (char *)_malloc(uVar12 << 5);
      if (pcStack_d0 == (char *)0x0) {
        func_0x0001087c9084(8,uVar12 << 5);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10140d10c);
        (*pcVar7)();
      }
      uStack_c8 = 0;
      cVar4 = *pcVar3;
      uStack_d8 = uVar12;
      if (cVar4 != '\x16') {
        lVar14 = 0;
        puVar15 = (undefined8 *)((ulong)&uStack_90 | 1);
        uVar11 = uVar11 * 0x20 - 0x20;
        uVar12 = uVar11 >> 5;
        pcVar9 = pcVar3 + 0x20;
LAB_10140cf00:
        uVar16 = *(undefined8 *)(pcVar9 + -0x1f);
        puVar15[1] = *(undefined8 *)(pcVar9 + -0x17);
        *puVar15 = uVar16;
        uVar16 = *(undefined8 *)(pcVar9 + -0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar9 + -8);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar16;
        uStack_90 = CONCAT71(uStack_90._1_7_,cVar4);
        FUN_10126eb38(&lStack_b0,&uStack_90);
        pcVar13 = pcStack_a8;
        lVar6 = lStack_b0;
        uVar5 = uStack_c8;
        pcVar8 = pcStack_d0;
        if (lStack_b0 == -0x8000000000000000) {
          lStack_e0 = lVar14 + 1;
          pcStack_88 = pcStack_a8;
          pcStack_f8 = pcVar9;
          if (uStack_c8 != 0) {
            pcVar13 = pcStack_d0 + 8;
            uVar12 = uStack_c8;
            do {
              if (*(long *)(pcVar13 + -8) != 0) {
                _free(*(undefined8 *)pcVar13);
              }
              pcVar13 = pcVar13 + 0x20;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (uStack_d8 != 0) {
            _free(pcVar8);
          }
          goto LAB_10140d02c;
        }
        lStack_b8 = lStack_98;
        lStack_c0 = lStack_a0;
        if (uStack_c8 == uStack_d8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h1234d0a79bfd3277E(&uStack_d8);
        }
        plVar1 = (long *)(pcStack_d0 + uVar5 * 0x20);
        *plVar1 = lVar6;
        plVar1[1] = (long)pcVar13;
        plVar1[3] = lStack_b8;
        plVar1[2] = lStack_c0;
        uStack_c8 = uVar5 + 1;
        pcVar8 = pcVar10;
        lVar6 = uVar12 + 1;
        if (uVar11 != 0) goto code_r0x00010140cf70;
        goto LAB_10140d00c;
      }
      pcVar8 = pcVar3 + 0x20;
      lVar6 = 0;
    }
LAB_10140d00c:
    lStack_e0 = lVar6;
    pcVar9 = pcVar8;
    uVar12 = uStack_c8;
    pcVar8 = pcStack_d0;
    uVar11 = uStack_d8;
    pcStack_88 = pcStack_d0;
    uStack_90 = uStack_d8;
    uStack_80 = uStack_c8;
    pcStack_f8 = pcVar9;
    if (uStack_d8 == 0x8000000000000000) {
LAB_10140d02c:
      lVar14 = ((ulong)((long)pcVar10 - (long)pcVar9) >> 5) + 1;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        FUN_100e077ec(pcVar9);
        pcVar9 = pcVar9 + 0x20;
      }
    }
    else {
      pcVar10 = (char *)FUN_100fbc738(&pcStack_100);
      if (pcVar10 == (char *)0x0) {
        param_1[1] = (ulong)pcStack_88;
        *param_1 = uStack_90;
        param_1[2] = uStack_80;
        return;
      }
      pcVar3 = pcVar8;
      pcStack_88 = pcVar10;
      uVar2 = uVar11;
      if (uVar12 != 0) {
        pcVar8 = pcVar8 + 8;
        do {
          if (*(long *)(pcVar8 + -8) != 0) {
            _free(*(undefined8 *)pcVar8);
          }
          pcVar8 = pcVar8 + 0x20;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    if (uVar2 != 0) {
      _free(pcVar3);
    }
  }
  else {
    pcStack_88 = (char *)FUN_108855b04(param_2,auStack_69,&UNK_10b209ec0);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = (ulong)pcStack_88;
  return;
code_r0x00010140cf70:
  pcVar8 = pcVar9 + 0x20;
  cVar4 = *pcVar9;
  uVar11 = uVar11 - 0x20;
  lVar14 = lVar14 + 1;
  pcVar9 = pcVar8;
  lVar6 = lVar14;
  if (cVar4 == '\x16') goto LAB_10140d00c;
  goto LAB_10140cf00;
}

