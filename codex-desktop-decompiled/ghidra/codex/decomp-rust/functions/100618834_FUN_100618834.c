
void FUN_100618834(ulong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  char *pcStack_e0;
  char *pcStack_d8;
  ulong uStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  char acStack_88 [40];
  
  if (*param_2 == '\x14') {
    uVar11 = *(ulong *)(param_2 + 8);
    pcVar1 = *(char **)(param_2 + 0x10);
    uVar12 = *(ulong *)(param_2 + 0x18);
    pcVar14 = pcVar1 + uVar12 * 0x20;
    lStack_c0 = 0;
    uVar16 = uVar12;
    if (0xaaa9 < uVar12) {
      uVar16 = 0xaaaa;
    }
    pcStack_e0 = pcVar1;
    uStack_d0 = uVar11;
    pcStack_c8 = pcVar14;
    if (uVar12 == 0) {
      uStack_b8 = 0;
      uStack_b0 = 8;
      uStack_a8 = 0;
      pcVar9 = pcVar1;
      lVar7 = lStack_c0;
    }
    else {
      pcStack_d8 = pcVar1;
      uStack_b0 = _malloc(uVar16 * 0x18);
      if (uStack_b0 == 0) {
        FUN_107c03c64(8,uVar16 * 0x18);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100618af8);
        (*pcVar8)();
      }
      uStack_a8 = 0;
      cVar2 = *pcVar1;
      uStack_b8 = uVar16;
      if (cVar2 != '\x16') {
        lVar15 = 0;
        puVar17 = (undefined8 *)((ulong)acStack_88 | 1);
        uVar12 = uVar12 * 0x20 - 0x20;
        uVar16 = uVar12 >> 5;
        pcVar10 = pcVar1 + 0x20;
LAB_100618900:
        uVar18 = *(undefined8 *)(pcVar10 + -0x1f);
        puVar17[1] = *(undefined8 *)(pcVar10 + -0x17);
        *puVar17 = uVar18;
        uVar18 = *(undefined8 *)(pcVar10 + -0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pcVar10 + -8);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar18;
        acStack_88[0] = cVar2;
        func_0x0001014a868c(&lStack_a0,acStack_88);
        lVar6 = lStack_90;
        uVar5 = uStack_98;
        lVar7 = lStack_a0;
        uVar4 = uStack_a8;
        uVar3 = uStack_b0;
        if (lStack_a0 == -0x8000000000000000) {
          lStack_c0 = lVar15 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_98;
          pcStack_d8 = pcVar10;
          if (uStack_a8 != 0) {
            puVar17 = (undefined8 *)(uStack_b0 + 8);
            uVar16 = uStack_a8;
            do {
              if (puVar17[-1] != 0) {
                _free(*puVar17);
              }
              puVar17 = puVar17 + 3;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          if (uStack_b8 != 0) {
            _free(uVar3);
          }
          goto LAB_100618a2c;
        }
        if (uStack_a8 == uStack_b8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&uStack_b8);
        }
        plVar13 = (long *)(uStack_b0 + uVar4 * 0x18);
        *plVar13 = lVar7;
        plVar13[1] = uVar5;
        plVar13[2] = lVar6;
        uStack_a8 = uVar4 + 1;
        pcVar9 = pcVar14;
        lVar7 = uVar16 + 1;
        if (uVar12 != 0) goto code_r0x00010061896c;
        goto LAB_100618a0c;
      }
      pcVar9 = pcVar1 + 0x20;
      lVar7 = 0;
    }
LAB_100618a0c:
    lStack_c0 = lVar7;
    pcVar10 = pcVar9;
    param_1[1] = uStack_b0;
    *param_1 = uStack_b8;
    param_1[2] = uStack_a8;
    uVar16 = *param_1;
    pcStack_d8 = pcVar10;
    if (uVar16 == 0x8000000000000000) {
LAB_100618a2c:
      lVar15 = ((ulong)((long)pcVar14 - (long)pcVar10) >> 5) + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100e077ec(pcVar10);
        pcVar10 = pcVar10 + 0x20;
      }
    }
    else {
      pcVar1 = (char *)param_1[1];
      uVar12 = param_1[2];
      uVar11 = FUN_100fbc738(&pcStack_e0);
      if (uVar11 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      uVar11 = uVar16;
      if (uVar12 != 0) {
        pcVar14 = pcVar1 + 8;
        do {
          if (*(long *)(pcVar14 + -8) != 0) {
            _free(*(undefined8 *)pcVar14);
          }
          pcVar14 = pcVar14 + 0x18;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    if (uVar11 != 0) {
      _free(pcVar1);
    }
  }
  else {
    uVar16 = thunk_FUN_108855b04(param_2,&pcStack_e0,&UNK_10b20a460);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar16;
  }
  return;
code_r0x00010061896c:
  pcVar9 = pcVar10 + 0x20;
  cVar2 = *pcVar10;
  uVar12 = uVar12 - 0x20;
  lVar15 = lVar15 + 1;
  pcVar10 = pcVar9;
  lVar7 = lVar15;
  if (cVar2 == '\x16') goto LAB_100618a0c;
  goto LAB_100618900;
}

