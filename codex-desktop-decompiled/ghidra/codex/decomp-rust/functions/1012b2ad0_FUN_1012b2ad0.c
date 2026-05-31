
void FUN_1012b2ad0(ulong *param_1,char *param_2)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcStack_138;
  char *pcStack_130;
  ulong uStack_128;
  char *pcStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  char acStack_88 [40];
  
  if (*param_2 == '\x14') {
    uVar8 = *(ulong *)(param_2 + 8);
    pcVar3 = *(char **)(param_2 + 0x10);
    uVar9 = *(ulong *)(param_2 + 0x18);
    pcVar10 = pcVar3 + uVar9 * 0x20;
    uStack_118 = 0;
    uVar13 = uVar9;
    if (0x4923 < uVar9) {
      uVar13 = 0x4924;
    }
    pcStack_138 = pcVar3;
    uStack_128 = uVar8;
    pcStack_120 = pcVar10;
    if (uVar9 == 0) {
      uStack_110 = 0;
      uStack_108 = 8;
      uStack_100 = 0;
      pcVar12 = pcVar3;
      uVar5 = uStack_118;
    }
    else {
      pcStack_130 = pcVar3;
      uVar7 = _malloc(uVar13 * 0x38);
      if (uVar7 == 0) {
        func_0x0001087c9084(8,uVar13 * 0x38);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1012b2dd4);
        (*pcVar6)();
      }
      uStack_100 = 0;
      cVar4 = *pcVar3;
      uStack_110 = uVar13;
      uStack_108 = uVar7;
      if (cVar4 != '\x16') {
        lVar15 = 0;
        uVar13 = 0;
        puVar16 = (undefined8 *)((ulong)acStack_88 | 1);
        uVar14 = uVar9 * 0x20 - 0x20;
        uVar9 = uVar14 >> 5;
        pcVar11 = pcVar3 + 0x20;
LAB_1012b2ba8:
        uVar17 = *(undefined8 *)(pcVar11 + -0x1f);
        puVar16[1] = *(undefined8 *)(pcVar11 + -0x17);
        *puVar16 = uVar17;
        uVar17 = *(undefined8 *)(pcVar11 + -0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pcVar11 + -8);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar17;
        uVar1 = uVar13 + 1;
        acStack_88[0] = cVar4;
        FUN_100b1671c(&lStack_c0,acStack_88);
        if (lStack_c0 == -0x8000000000000000) {
          uStack_118 = uVar13 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_b8;
          pcStack_130 = pcVar11;
          if (uVar13 != 0) {
            puVar16 = (undefined8 *)(uVar7 + 0x20);
            do {
              if (puVar16[-4] != 0) {
                _free(puVar16[-3]);
              }
              if (puVar16[-1] != 0) {
                _free(*puVar16);
              }
              puVar16 = puVar16 + 7;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (uStack_110 != 0) {
            _free(uVar7);
          }
          goto LAB_1012b2cf4;
        }
        lStack_e0 = lStack_a8;
        lStack_e8 = lStack_b0;
        lStack_d0 = lStack_98;
        lStack_d8 = lStack_a0;
        lStack_c8 = lStack_90;
        lStack_f8 = lStack_c0;
        uStack_f0 = uStack_b8;
        if (uVar13 == uStack_110) {
          FUN_108854bd8(&uStack_110);
          uVar7 = uStack_108;
        }
        plVar2 = (long *)(uVar7 + lVar15);
        plVar2[6] = lStack_c8;
        plVar2[3] = lStack_e0;
        plVar2[2] = lStack_e8;
        plVar2[5] = lStack_d0;
        plVar2[4] = lStack_d8;
        plVar2[1] = uStack_f0;
        *plVar2 = lStack_f8;
        pcVar12 = pcVar10;
        uVar5 = uVar9 + 1;
        uStack_100 = uVar1;
        if (uVar14 != 0) goto code_r0x0001012b2c34;
        goto LAB_1012b2cd4;
      }
      pcVar12 = pcVar3 + 0x20;
      uVar5 = 0;
    }
LAB_1012b2cd4:
    uStack_118 = uVar5;
    pcVar11 = pcVar12;
    param_1[1] = uStack_108;
    *param_1 = uStack_110;
    param_1[2] = uStack_100;
    uVar13 = *param_1;
    pcStack_130 = pcVar11;
    if (uVar13 == 0x8000000000000000) {
LAB_1012b2cf4:
      lVar15 = ((ulong)((long)pcVar10 - (long)pcVar11) >> 5) + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100e077ec(pcVar11);
        pcVar11 = pcVar11 + 0x20;
      }
    }
    else {
      pcVar3 = (char *)param_1[1];
      uVar9 = param_1[2];
      uVar8 = FUN_100fbc738(&pcStack_138);
      if (uVar8 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar8;
      uVar8 = uVar13;
      if (uVar9 != 0) {
        pcVar10 = pcVar3 + 0x20;
        do {
          if (*(long *)(pcVar10 + -0x20) != 0) {
            _free(*(undefined8 *)(pcVar10 + -0x18));
          }
          if (*(long *)(pcVar10 + -8) != 0) {
            _free(*(undefined8 *)pcVar10);
          }
          pcVar10 = pcVar10 + 0x38;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    if (uVar8 != 0) {
      _free(pcVar3);
    }
  }
  else {
    uVar13 = FUN_108855b04(param_2,&lStack_c0,&UNK_10b20a3e0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar13;
  }
  return;
code_r0x0001012b2c34:
  pcVar12 = pcVar11 + 0x20;
  cVar4 = *pcVar11;
  uVar14 = uVar14 - 0x20;
  lVar15 = lVar15 + 0x38;
  uVar13 = uVar13 + 1;
  pcVar11 = pcVar12;
  uVar5 = uVar13;
  if (cVar4 == '\x16') goto LAB_1012b2cd4;
  goto LAB_1012b2ba8;
}

