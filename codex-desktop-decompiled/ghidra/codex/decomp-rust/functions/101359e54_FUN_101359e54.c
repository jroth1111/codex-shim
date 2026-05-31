
void FUN_101359e54(ulong *param_1,char *param_2)

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
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcStack_138;
  char *pcStack_130;
  ulong uStack_128;
  char *pcStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  char cStack_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char acStack_c0 [8];
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char acStack_88 [40];
  
  if (*param_2 == '\x14') {
    uVar10 = *(ulong *)(param_2 + 8);
    pcVar2 = *(char **)(param_2 + 0x10);
    uVar11 = *(ulong *)(param_2 + 0x18);
    pcVar1 = pcVar2 + uVar11 * 0x20;
    lStack_118 = 0;
    uVar14 = uVar11;
    if (0x4923 < uVar11) {
      uVar14 = 0x4924;
    }
    pcStack_138 = pcVar2;
    uStack_128 = uVar10;
    pcStack_120 = pcVar1;
    if (uVar11 == 0) {
      uStack_110 = 0;
      uStack_108 = 8;
      uStack_100 = 0;
      pcVar8 = pcVar2;
      lVar6 = lStack_118;
    }
    else {
      pcStack_130 = pcVar2;
      uStack_108 = _malloc(uVar14 * 0x38);
      if (uStack_108 == 0) {
        func_0x0001087c9084(8,uVar14 * 0x38);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10135a140);
        (*pcVar7)();
      }
      uStack_100 = 0;
      cVar3 = *pcVar2;
      uStack_110 = uVar14;
      if (cVar3 != '\x16') {
        lVar13 = 0;
        puVar15 = (undefined8 *)((ulong)acStack_88 | 1);
        uVar11 = uVar11 * 0x20 - 0x20;
        uVar14 = uVar11 >> 5;
        pcVar9 = pcVar2 + 0x20;
LAB_101359f2c:
        uVar16 = *(undefined8 *)(pcVar9 + -0x1f);
        puVar15[1] = *(undefined8 *)(pcVar9 + -0x17);
        *puVar15 = uVar16;
        uVar16 = *(undefined8 *)(pcVar9 + -0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar9 + -8);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar16;
        acStack_88[0] = cVar3;
        func_0x00010078a118(acStack_c0,acStack_88);
        uVar5 = uStack_100;
        uVar4 = uStack_108;
        if (acStack_c0[0] == '\x05') {
          lStack_118 = lVar13 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_b8;
          pcStack_130 = pcVar9;
          uVar14 = uStack_108;
          for (uVar11 = uStack_100; uVar11 != 0; uVar11 = uVar11 - 1) {
            FUN_100e06c08(uVar14);
            uVar14 = uVar14 + 0x38;
          }
          if (uStack_110 != 0) {
            _free(uVar4);
          }
          goto LAB_10135a084;
        }
        *(undefined4 *)((ulong)&cStack_f8 | 1) = *(undefined4 *)((ulong)acStack_c0 | 1);
        *(undefined4 *)((long)((ulong)&cStack_f8 | 1) + 3) =
             *(undefined4 *)((long)((ulong)acStack_c0 | 1) + 3);
        uStack_e0 = uStack_a8;
        uStack_e8 = uStack_b0;
        uStack_d0 = uStack_98;
        uStack_d8 = uStack_a0;
        uStack_c8 = uStack_90;
        cStack_f8 = acStack_c0[0];
        uStack_f0 = uStack_b8;
        if (uStack_100 == uStack_110) {
          func_0x0001089beb68(&uStack_110);
        }
        puVar12 = (undefined8 *)(uStack_108 + uVar5 * 0x38);
        puVar12[1] = uStack_f0;
        *puVar12 = CONCAT71(uStack_f7,cStack_f8);
        puVar12[3] = uStack_e0;
        puVar12[2] = uStack_e8;
        puVar12[5] = uStack_d0;
        puVar12[4] = uStack_d8;
        puVar12[6] = uStack_c8;
        uStack_100 = uVar5 + 1;
        pcVar8 = pcVar1;
        lVar6 = uVar14 + 1;
        if (uVar11 != 0) goto code_r0x000101359fd4;
        goto LAB_10135a064;
      }
      pcVar8 = pcVar2 + 0x20;
      lVar6 = 0;
    }
LAB_10135a064:
    lStack_118 = lVar6;
    pcVar9 = pcVar8;
    param_1[1] = uStack_108;
    *param_1 = uStack_110;
    param_1[2] = uStack_100;
    uVar14 = *param_1;
    pcStack_130 = pcVar9;
    if (uVar14 == 0x8000000000000000) {
LAB_10135a084:
      lVar13 = ((ulong)((long)pcVar1 - (long)pcVar9) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pcVar9);
        pcVar9 = pcVar9 + 0x20;
      }
    }
    else {
      pcVar2 = (char *)param_1[1];
      uVar11 = param_1[2];
      uVar10 = FUN_100fbc738(&pcStack_138);
      if (uVar10 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      pcVar1 = pcVar2;
      for (; uVar10 = uVar14, uVar11 != 0; uVar11 = uVar11 - 1) {
        FUN_100e06c08(pcVar1);
        pcVar1 = pcVar1 + 0x38;
      }
    }
    if (uVar10 != 0) {
      _free(pcVar2);
    }
  }
  else {
    uVar14 = FUN_108855b04(param_2,acStack_c0,&UNK_10b20a100);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
  }
  return;
code_r0x000101359fd4:
  pcVar8 = pcVar9 + 0x20;
  cVar3 = *pcVar9;
  uVar11 = uVar11 - 0x20;
  lVar13 = lVar13 + 1;
  pcVar9 = pcVar8;
  lVar6 = lVar13;
  if (cVar3 == '\x16') goto LAB_10135a064;
  goto LAB_101359f2c;
}

