
void FUN_1017c1d58(ulong *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
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
    uVar2 = *(ulong *)(param_2 + 8);
    pcVar3 = *(char **)(param_2 + 0x10);
    uVar10 = *(ulong *)(param_2 + 0x18);
    pcVar1 = pcVar3 + uVar10 * 0x20;
    lStack_138 = 0;
    uVar13 = uVar10;
    if (0x38e2 < uVar10) {
      uVar13 = 0x38e3;
    }
    pcStack_158 = pcVar3;
    uStack_148 = uVar2;
    pcStack_140 = pcVar1;
    if (uVar10 == 0) {
      uStack_130 = 0;
      uStack_128 = 8;
      uStack_120 = 0;
      pcVar9 = pcVar3;
      lVar14 = lStack_138;
    }
    else {
      pcStack_150 = pcVar3;
      uStack_128 = _malloc(uVar13 * 0x48);
      if (uStack_128 == 0) {
        func_0x0001087c9084(8,uVar13 * 0x48);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1017c2000);
        (*pcVar7)();
      }
      uStack_120 = 0;
      cVar4 = *pcVar3;
      uStack_130 = uVar13;
      if (cVar4 == '\x16') {
        pcVar9 = pcVar3 + 0x20;
        lVar14 = 0;
      }
      else {
        lVar12 = 0;
        puVar15 = (undefined8 *)((ulong)acStack_88 | 1);
        uVar10 = uVar10 * 0x20 - 0x20;
        uVar13 = uVar10 >> 5;
        pcVar8 = pcVar3 + 0x20;
        do {
          uVar16 = *(undefined8 *)(pcVar8 + -0x1f);
          puVar15[1] = *(undefined8 *)(pcVar8 + -0x17);
          *puVar15 = uVar16;
          uVar16 = *(undefined8 *)(pcVar8 + -0x10);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar8 + -8);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar16;
          acStack_88[0] = cVar4;
          func_0x000101776e54(&lStack_d0,acStack_88);
          uVar6 = uStack_120;
          uVar5 = uStack_128;
          if (lStack_d0 == -0x7ffffffffffffffb) {
            lStack_138 = lVar12 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = uStack_c8;
            pcStack_150 = pcVar8;
            FUN_1017a5c10(uStack_128,uStack_120);
            if (uStack_130 != 0) {
              _free(uVar5);
            }
            goto LAB_1017c1f54;
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
          plVar11 = (long *)(uStack_128 + uVar6 * 0x48);
          plVar11[1] = uStack_110;
          *plVar11 = lStack_118;
          plVar11[3] = lStack_100;
          plVar11[2] = lStack_108;
          plVar11[5] = lStack_f0;
          plVar11[4] = lStack_f8;
          plVar11[7] = lStack_e0;
          plVar11[6] = lStack_e8;
          plVar11[8] = lStack_d8;
          uStack_120 = uVar6 + 1;
          pcVar9 = pcVar1;
          lVar14 = uVar13 + 1;
          if (uVar10 == 0) break;
          pcVar9 = pcVar8 + 0x20;
          cVar4 = *pcVar8;
          uVar10 = uVar10 - 0x20;
          lVar12 = lVar12 + 1;
          pcVar8 = pcVar9;
          lVar14 = lVar12;
        } while (cVar4 != '\x16');
      }
    }
    lStack_138 = lVar14;
    pcVar8 = pcVar9;
    param_1[1] = uStack_128;
    *param_1 = uStack_130;
    param_1[2] = uStack_120;
    uVar13 = *param_1;
    pcStack_150 = pcVar8;
    if (uVar13 == 0x8000000000000000) {
LAB_1017c1f54:
      lVar14 = ((ulong)((long)pcVar1 - (long)pcVar8) >> 5) + 1;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        func_0x0001017a6a48(pcVar8);
        pcVar8 = pcVar8 + 0x20;
      }
    }
    else {
      pcVar3 = (char *)param_1[1];
      uVar2 = param_1[2];
      uVar10 = FUN_1017aefb0(&pcStack_158);
      if (uVar10 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      FUN_1017a5c10(pcVar3,uVar2);
      uVar2 = uVar13;
    }
    if (uVar2 != 0) {
      _free(pcVar3);
    }
  }
  else {
    uVar13 = FUN_10888066c(param_2,&lStack_d0,&UNK_10b258890);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar13;
  }
  return;
}

