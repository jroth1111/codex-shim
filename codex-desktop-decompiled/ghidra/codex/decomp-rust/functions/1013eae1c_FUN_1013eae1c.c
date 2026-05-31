
void FUN_1013eae1c(ulong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  char *pcStack_100;
  char *pcStack_f8;
  ulong uStack_f0;
  char *pcStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined2 uStack_c0;
  ulong uStack_b8;
  char acStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_2 == '\x14') {
    uVar8 = *(ulong *)(param_2 + 8);
    pcVar16 = *(char **)(param_2 + 0x10);
    uVar9 = *(ulong *)(param_2 + 0x18);
    pcVar1 = pcVar16 + uVar9 * 0x20;
    lStack_e0 = 0;
    uVar12 = uVar9;
    if (0xfffff < uVar9) {
      uVar12 = 0x100000;
    }
    pcStack_100 = pcVar16;
    uStack_f0 = uVar8;
    pcStack_e8 = pcVar1;
    if (uVar9 == 0) {
      uStack_d8 = 0;
      uStack_d0 = 1;
      uStack_c8 = 0;
      pcVar11 = pcVar16;
      lVar13 = 0;
    }
    else {
      pcStack_f8 = pcVar16;
      uStack_d0 = _malloc(uVar12);
      if (uStack_d0 == 0) {
        func_0x0001087c9084(1,uVar12);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1013eb0a8);
        (*pcVar7)();
      }
      lVar14 = 0;
      uStack_c8 = 0;
      puVar15 = (undefined8 *)((ulong)acStack_b0 | 1);
      pcVar3 = pcVar16;
      uStack_d8 = uVar12;
      while( true ) {
        puVar6 = puStack_a8;
        pcVar10 = pcVar3 + 0x20;
        cVar2 = *pcVar3;
        pcVar11 = pcVar10;
        lVar13 = lVar14;
        if (cVar2 == '\x16') break;
        uVar17 = *(undefined8 *)(pcVar3 + 1);
        puVar15[1] = *(undefined8 *)(pcVar3 + 9);
        *puVar15 = uVar17;
        uVar17 = *(undefined8 *)(pcVar3 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar3 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar17;
        acStack_b0[0] = cVar2;
        if (cVar2 == '\x10') {
LAB_1013eaf18:
          uStack_c0 = 0x200;
          FUN_100e077ec(acStack_b0);
          uVar12 = uStack_c8;
          uVar4 = uStack_c0;
        }
        else if (cVar2 == '\x11') {
          uStack_88 = puStack_a8[1];
          uStack_90 = *puStack_a8;
          uStack_78 = puStack_a8[3];
          uStack_80 = puStack_a8[2];
          FUN_101429444(&uStack_c0,&uStack_90);
          _free(puVar6);
          uVar12 = uStack_c8;
          uVar4 = uStack_c0;
        }
        else {
          if (cVar2 == '\x12') goto LAB_1013eaf18;
          FUN_101429444(&uStack_c0,acStack_b0);
          uVar12 = uStack_c8;
          uVar4 = uStack_c0;
        }
        uStack_c8 = uVar12;
        uStack_c0 = uVar4;
        if ((uVar4 & 1) != 0) {
          lStack_e0 = lVar14 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_b8;
          pcStack_f8 = pcVar10;
          if (uStack_d8 != 0) {
            _free(uStack_d0);
          }
          goto LAB_1013eb004;
        }
        uStack_c0._1_1_ = (undefined1)(uVar4 >> 8);
        uVar5 = uStack_c0._1_1_;
        if (uVar12 == uStack_d8) {
          func_0x0001089bed08(&uStack_d8);
        }
        *(undefined1 *)(uStack_d0 + uVar12) = uVar5;
        uStack_c8 = uVar12 + 1;
        lVar14 = lVar14 + 1;
        pcVar11 = pcVar1;
        lVar13 = (uVar9 * 0x20 - 0x20 >> 5) + 1;
        pcVar3 = pcVar10;
        if (pcVar10 == pcVar1) break;
      }
    }
    param_1[1] = uStack_d0;
    *param_1 = uStack_d8;
    param_1[2] = uStack_c8;
    uVar12 = *param_1;
    pcVar10 = pcVar11;
    pcStack_f8 = pcVar11;
    lStack_e0 = lVar13;
    if (uVar12 == 0x8000000000000000) {
LAB_1013eb004:
      lVar13 = ((ulong)((long)pcVar1 - (long)pcVar10) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pcVar10);
        pcVar10 = pcVar10 + 0x20;
      }
    }
    else {
      pcVar16 = (char *)param_1[1];
      uVar8 = FUN_100fbc738(&pcStack_100);
      if (uVar8 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar8;
      uVar8 = uVar12;
    }
    if (uVar8 != 0) {
      _free(pcVar16);
    }
  }
  else {
    uVar12 = FUN_108855b04(param_2,&pcStack_100,&UNK_10b209fa0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar12;
  }
  return;
}

