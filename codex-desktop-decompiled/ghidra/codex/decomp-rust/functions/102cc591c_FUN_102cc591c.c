
void FUN_102cc591c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  int *piStack_168;
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
  long lStack_88;
  long lStack_80;
  
  if (*param_2 == 0) {
LAB_102cc5a1c:
    func_0x0001032f8fe0(param_2);
    *param_2 = 0;
    lVar4 = param_2[8];
    if (lVar4 != 0) {
      lVar5 = param_2[9];
joined_r0x000102cc5a40:
      if (lVar4 != lVar5) {
        lVar4 = lVar4 + 0x130;
        param_2[8] = lVar4;
        func_0x0001050236d0(&lStack_188);
        lVar3 = lStack_178;
        lVar8 = lStack_180;
        lVar2 = lStack_188;
        lVar10 = lStack_178 * 0xf8;
        lVar11 = lStack_180 + lVar10;
        func_0x0001032f8fe0(param_2);
        *param_2 = lVar8;
        param_2[1] = lVar8;
        param_2[2] = lVar2;
        param_2[3] = lVar11;
        if (lVar3 != 0) {
          lVar8 = lVar8 + 0xf8;
          do {
            while( true ) {
              lStack_a8 = *(long *)(lVar8 + -0x30);
              lStack_b0 = *(long *)(lVar8 + -0x38);
              lStack_98 = *(long *)(lVar8 + -0x20);
              lStack_a0 = *(long *)(lVar8 + -0x28);
              lStack_88 = *(long *)(lVar8 + -0x10);
              lStack_90 = *(long *)(lVar8 + -0x18);
              lStack_80 = *(long *)(lVar8 + -8);
              lStack_e8 = *(long *)(lVar8 + -0x70);
              lStack_f0 = *(long *)(lVar8 + -0x78);
              lStack_d8 = *(long *)(lVar8 + -0x60);
              lStack_e0 = *(long *)(lVar8 + -0x68);
              lStack_c8 = *(long *)(lVar8 + -0x50);
              lStack_d0 = *(long *)(lVar8 + -0x58);
              lStack_b8 = *(long *)(lVar8 + -0x40);
              lStack_c0 = *(long *)(lVar8 + -0x48);
              lStack_128 = *(long *)(lVar8 + -0xb0);
              lStack_130 = *(long *)(lVar8 + -0xb8);
              lStack_118 = *(long *)(lVar8 + -0xa0);
              lStack_120 = *(long *)(lVar8 + -0xa8);
              lStack_108 = *(long *)(lVar8 + -0x90);
              lStack_110 = *(long *)(lVar8 + -0x98);
              lStack_f8 = *(long *)(lVar8 + -0x80);
              lStack_100 = *(long *)(lVar8 + -0x88);
              piStack_168 = *(int **)(lVar8 + -0xf0);
              lVar11 = *(long *)(lVar8 + -0xf8);
              lStack_158 = *(long *)(lVar8 + -0xe0);
              lStack_160 = *(long *)(lVar8 + -0xe8);
              lStack_148 = *(long *)(lVar8 + -0xd0);
              lStack_150 = *(long *)(lVar8 + -0xd8);
              lStack_138 = *(long *)(lVar8 + -0xc0);
              lStack_140 = *(long *)(lVar8 + -200);
              param_2[1] = lVar8;
              lStack_170 = lVar11;
              if ((lStack_160 != 4) ||
                 ((*piStack_168 != 0x63657865 && (*piStack_168 != 0x74696177)))) break;
              FUN_1033ac3e8(&lStack_170);
              lVar8 = lVar8 + 0xf8;
              lVar10 = lVar10 + -0xf8;
              if (lVar10 == 0) goto joined_r0x000102cc5a40;
            }
            if (lVar11 != -0x8000000000000000) {
              lStack_a8 = *(long *)(lVar8 + -0x28);
              lStack_b0 = *(long *)(lVar8 + -0x30);
              lStack_98 = *(long *)(lVar8 + -0x18);
              lStack_a0 = *(long *)(lVar8 + -0x20);
              lStack_c8 = *(long *)(lVar8 + -0x48);
              lStack_d0 = *(long *)(lVar8 + -0x50);
              lStack_b8 = *(long *)(lVar8 + -0x38);
              lStack_c0 = *(long *)(lVar8 + -0x40);
              lStack_88 = *(long *)(lVar8 + -8);
              lStack_90 = *(long *)(lVar8 + -0x10);
              lStack_e8 = *(long *)(lVar8 + -0x68);
              lStack_f0 = *(long *)(lVar8 + -0x70);
              lStack_d8 = *(long *)(lVar8 + -0x58);
              lStack_e0 = *(long *)(lVar8 + -0x60);
              lStack_108 = *(long *)(lVar8 + -0x88);
              lStack_110 = *(long *)(lVar8 + -0x90);
              lStack_f8 = *(long *)(lVar8 + -0x78);
              lStack_100 = *(long *)(lVar8 + -0x80);
              lStack_128 = *(long *)(lVar8 + -0xa8);
              lStack_130 = *(long *)(lVar8 + -0xb0);
              lStack_118 = *(long *)(lVar8 + -0x98);
              lStack_120 = *(long *)(lVar8 + -0xa0);
              piStack_168 = *(int **)(lVar8 + -0xe8);
              lStack_170 = *(long *)(lVar8 + -0xf0);
              lStack_158 = *(long *)(lVar8 + -0xd8);
              lStack_160 = *(long *)(lVar8 + -0xe0);
              lStack_148 = *(long *)(lVar8 + -200);
              lStack_150 = *(long *)(lVar8 + -0xd0);
              lStack_138 = *(long *)(lVar8 + -0xb8);
              lStack_140 = *(long *)(lVar8 + -0xc0);
              goto LAB_102cc5d6c;
            }
            lVar8 = lVar8 + 0xf8;
            lVar10 = lVar10 + -0xf8;
          } while (lVar10 != 0);
        }
        goto joined_r0x000102cc5a40;
      }
    }
    func_0x0001032f8fe0(param_2);
    *param_2 = 0;
    plVar7 = param_2 + 4;
    if (*plVar7 == 0) {
LAB_102cc5c50:
      func_0x0001032f8fe0(plVar7);
      *plVar7 = 0;
      *param_1 = -0x8000000000000000;
      return;
    }
    plVar9 = (long *)param_2[7];
    plVar6 = (long *)param_2[5];
    do {
      while( true ) {
        plVar1 = plVar6;
        if (plVar1 == plVar9) goto LAB_102cc5c50;
        lStack_a8 = plVar1[0x19];
        lStack_b0 = plVar1[0x18];
        lStack_98 = plVar1[0x1b];
        lStack_a0 = plVar1[0x1a];
        lStack_88 = plVar1[0x1d];
        lStack_90 = plVar1[0x1c];
        lStack_e8 = plVar1[0x11];
        lStack_f0 = plVar1[0x10];
        lStack_d8 = plVar1[0x13];
        lStack_e0 = plVar1[0x12];
        lStack_c8 = plVar1[0x15];
        lStack_d0 = plVar1[0x14];
        lStack_b8 = plVar1[0x17];
        lStack_c0 = plVar1[0x16];
        lStack_128 = plVar1[9];
        lStack_130 = plVar1[8];
        lStack_118 = plVar1[0xb];
        lStack_120 = plVar1[10];
        lStack_108 = plVar1[0xd];
        lStack_110 = plVar1[0xc];
        lStack_f8 = plVar1[0xf];
        lStack_100 = plVar1[0xe];
        lStack_80 = plVar1[0x1e];
        piStack_168 = (int *)plVar1[1];
        lVar11 = *plVar1;
        lStack_158 = plVar1[3];
        lStack_160 = plVar1[2];
        lStack_148 = plVar1[5];
        lStack_150 = plVar1[4];
        lStack_138 = plVar1[7];
        lStack_140 = plVar1[6];
        plVar6 = plVar1 + 0x1f;
        param_2[5] = (long)plVar6;
        lStack_170 = lVar11;
        if ((lStack_160 != 4) || ((*piStack_168 != 0x63657865 && (*piStack_168 != 0x74696177))))
        break;
        FUN_1033ac3e8(&lStack_170);
      }
    } while (lVar11 == -0x8000000000000000);
    lStack_b8 = plVar1[0x18];
    lStack_c0 = plVar1[0x17];
    lStack_a8 = plVar1[0x1a];
    lStack_b0 = plVar1[0x19];
    lStack_98 = plVar1[0x1c];
    lStack_a0 = plVar1[0x1b];
    lStack_88 = plVar1[0x1e];
    lStack_90 = plVar1[0x1d];
    lStack_f8 = plVar1[0x10];
    lStack_100 = plVar1[0xf];
    lStack_e8 = plVar1[0x12];
    lStack_f0 = plVar1[0x11];
    lStack_d8 = plVar1[0x14];
    lStack_e0 = plVar1[0x13];
    lStack_c8 = plVar1[0x16];
    lStack_d0 = plVar1[0x15];
    lStack_138 = plVar1[8];
    lStack_140 = plVar1[7];
    lStack_128 = plVar1[10];
    lStack_130 = plVar1[9];
    lStack_118 = plVar1[0xc];
    lStack_120 = plVar1[0xb];
    lStack_108 = plVar1[0xe];
    lStack_110 = plVar1[0xd];
    piStack_168 = (int *)plVar1[2];
    lStack_170 = plVar1[1];
    lStack_158 = plVar1[4];
    lStack_160 = plVar1[3];
    lStack_148 = plVar1[6];
    lStack_150 = plVar1[5];
  }
  else {
    plVar6 = (long *)param_2[3];
    plVar7 = (long *)param_2[1];
    do {
      while( true ) {
        plVar9 = plVar7;
        if (plVar9 == plVar6) goto LAB_102cc5a1c;
        lStack_a8 = plVar9[0x19];
        lStack_b0 = plVar9[0x18];
        lStack_98 = plVar9[0x1b];
        lStack_a0 = plVar9[0x1a];
        lStack_88 = plVar9[0x1d];
        lStack_90 = plVar9[0x1c];
        lStack_e8 = plVar9[0x11];
        lStack_f0 = plVar9[0x10];
        lStack_d8 = plVar9[0x13];
        lStack_e0 = plVar9[0x12];
        lStack_c8 = plVar9[0x15];
        lStack_d0 = plVar9[0x14];
        lStack_b8 = plVar9[0x17];
        lStack_c0 = plVar9[0x16];
        lStack_128 = plVar9[9];
        lStack_130 = plVar9[8];
        lStack_118 = plVar9[0xb];
        lStack_120 = plVar9[10];
        lStack_108 = plVar9[0xd];
        lStack_110 = plVar9[0xc];
        lStack_f8 = plVar9[0xf];
        lStack_100 = plVar9[0xe];
        lStack_80 = plVar9[0x1e];
        piStack_168 = (int *)plVar9[1];
        lVar11 = *plVar9;
        lStack_158 = plVar9[3];
        lStack_160 = plVar9[2];
        lStack_148 = plVar9[5];
        lStack_150 = plVar9[4];
        lStack_138 = plVar9[7];
        lStack_140 = plVar9[6];
        plVar7 = plVar9 + 0x1f;
        param_2[1] = (long)plVar7;
        lStack_170 = lVar11;
        if ((lStack_160 != 4) || ((*piStack_168 != 0x63657865 && (*piStack_168 != 0x74696177))))
        break;
        FUN_1033ac3e8(&lStack_170);
      }
    } while (lVar11 == -0x8000000000000000);
    lStack_b8 = plVar9[0x18];
    lStack_c0 = plVar9[0x17];
    lStack_a8 = plVar9[0x1a];
    lStack_b0 = plVar9[0x19];
    lStack_98 = plVar9[0x1c];
    lStack_a0 = plVar9[0x1b];
    lStack_88 = plVar9[0x1e];
    lStack_90 = plVar9[0x1d];
    lStack_f8 = plVar9[0x10];
    lStack_100 = plVar9[0xf];
    lStack_e8 = plVar9[0x12];
    lStack_f0 = plVar9[0x11];
    lStack_d8 = plVar9[0x14];
    lStack_e0 = plVar9[0x13];
    lStack_c8 = plVar9[0x16];
    lStack_d0 = plVar9[0x15];
    lStack_138 = plVar9[8];
    lStack_140 = plVar9[7];
    lStack_128 = plVar9[10];
    lStack_130 = plVar9[9];
    lStack_118 = plVar9[0xc];
    lStack_120 = plVar9[0xb];
    lStack_108 = plVar9[0xe];
    lStack_110 = plVar9[0xd];
    piStack_168 = (int *)plVar9[2];
    lStack_170 = plVar9[1];
    lStack_158 = plVar9[4];
    lStack_160 = plVar9[3];
    lStack_148 = plVar9[6];
    lStack_150 = plVar9[5];
  }
LAB_102cc5d6c:
  param_1[0x18] = lStack_b8;
  param_1[0x17] = lStack_c0;
  param_1[0x1a] = lStack_a8;
  param_1[0x19] = lStack_b0;
  param_1[0x1c] = lStack_98;
  param_1[0x1b] = lStack_a0;
  param_1[0x1e] = lStack_88;
  param_1[0x1d] = lStack_90;
  param_1[0x10] = lStack_f8;
  param_1[0xf] = lStack_100;
  param_1[0x12] = lStack_e8;
  param_1[0x11] = lStack_f0;
  param_1[0x14] = lStack_d8;
  param_1[0x13] = lStack_e0;
  param_1[0x16] = lStack_c8;
  param_1[0x15] = lStack_d0;
  param_1[8] = lStack_138;
  param_1[7] = lStack_140;
  param_1[10] = lStack_128;
  param_1[9] = lStack_130;
  param_1[0xc] = lStack_118;
  param_1[0xb] = lStack_120;
  param_1[0xe] = lStack_108;
  param_1[0xd] = lStack_110;
  param_1[2] = (long)piStack_168;
  param_1[1] = lStack_170;
  param_1[4] = lStack_158;
  param_1[3] = lStack_160;
  *param_1 = lVar11;
  param_1[6] = lStack_148;
  param_1[5] = lStack_150;
  return;
}

