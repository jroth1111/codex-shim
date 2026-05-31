
/* WARNING: Type propagation algorithm not settling */

void FUN_1012d2c90(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  long **pplVar10;
  ulong uVar11;
  ulong uVar12;
  ulong ***pppuVar13;
  long ***ppplVar14;
  long lVar15;
  long ***ppplVar16;
  long ****pppplStack_260;
  long ***ppplStack_258;
  ulong uStack_250;
  long lStack_248;
  long ***ppplStack_240;
  ulong uStack_238;
  long lStack_230;
  ulong **ppuStack_228;
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long ***ppplStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong ***pppuStack_1c0;
  long ***ppplStack_1b8;
  ulong uStack_1b0;
  ulong **ppuStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long ***ppplStack_188;
  ulong uStack_180;
  long lStack_178;
  long ***ppplStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  long ***ppplStack_150;
  ulong uStack_148;
  long lStack_140;
  long ***ppplStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong ***pppuStack_120;
  long ***ppplStack_118;
  ulong uStack_110;
  long lStack_108;
  long ***ppplStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong **ppuStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong ***pppuStack_c8;
  long ***ppplStack_c0;
  ulong uStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  
  uVar12 = *param_2;
  uVar8 = uVar12 ^ 0x8000000000000000;
  if (-1 < (long)uVar12) {
    uVar8 = 6;
  }
  if ((long)uVar8 < 4) {
    if ((long)uVar8 < 2) {
      if (uVar8 == 0) {
        func_0x00010880e98c(&pppuStack_120,param_2 + 1);
        goto joined_r0x0001012d3248;
      }
      ppplStack_258 = (long ***)param_2[1];
      uVar7 = 2;
LAB_1012d2fe0:
      pppplStack_260 = (long ****)CONCAT71(pppplStack_260._1_7_,uVar7);
    }
    else {
      if (uVar8 == 2) {
        ppplStack_258 = (long ***)param_2[1];
        uVar7 = 3;
        goto LAB_1012d2fe0;
      }
      pppplStack_260 = (long ****)((ulong)CONCAT61(pppplStack_260._2_6_,(char)param_2[1]) << 8);
    }
    FUN_1087e3db0(&pppuStack_120,&pppplStack_260,&ppplStack_138,&UNK_10b21b610);
  }
  else if (uVar8 == 5) {
    uVar8 = param_2[1];
    ppplVar5 = (long ***)param_2[2];
    uVar12 = param_2[3];
    ppplStack_b0 = ppplVar5 + uVar12 * 10;
    pppuStack_120 = (ulong ***)CONCAT71(pppuStack_120._1_7_,10);
    pppuStack_c8 = (ulong ***)ppplVar5;
    ppplStack_c0 = ppplVar5;
    uStack_b8 = uVar8;
    FUN_1087e3db0(&pppplStack_260,&pppuStack_120,&ppplStack_138,&UNK_10b21b610);
    ppplStack_1b8 = (long ***)uStack_250;
    pppuStack_1c0 = (ulong ***)ppplStack_258;
    uStack_1b0 = lStack_248;
    if (pppplStack_260 != (long ****)0x2) {
      uStack_f8 = uStack_238;
      ppplStack_100 = ppplStack_240;
      ppuStack_e8 = ppuStack_228;
      lStack_f0 = lStack_230;
      uStack_d8 = uStack_218;
      uStack_e0 = uStack_220;
      lStack_d0 = lStack_210;
      uStack_110 = uStack_250;
      ppplStack_118 = ppplStack_258;
      lVar15 = uVar12 + 1;
      lStack_108 = lStack_248;
      pppuStack_120 = (ulong ***)pppplStack_260;
      ppplVar16 = ppplVar5;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100ddb5bc(ppplVar16);
        ppplVar16 = ppplVar16 + 10;
      }
      if (uVar8 != 0) {
        _free(ppplVar5);
      }
      goto LAB_1012d3090;
    }
    uStack_168 = uStack_250;
    ppplStack_170 = ppplStack_258;
    uStack_160 = lStack_248;
    if (uVar12 == 0) {
      uStack_110 = uStack_250;
      ppplStack_118 = ppplStack_258;
      lStack_108 = lStack_248;
      pppuStack_120 = (ulong ***)0x2;
    }
    else {
      FUN_1087e427c(&pppplStack_260,uVar12,&UNK_10b21cb80,&UNK_10b20a590);
      uStack_f8 = uStack_238;
      ppplStack_100 = ppplStack_240;
      ppuStack_e8 = ppuStack_228;
      lStack_f0 = lStack_230;
      uStack_d8 = uStack_218;
      uStack_e0 = uStack_220;
      lStack_d0 = lStack_210;
      ppplStack_118 = ppplStack_258;
      pppuStack_120 = (ulong ***)pppplStack_260;
      lStack_108 = lStack_248;
      uStack_110 = uStack_250;
      func_0x000100d85484(&ppplStack_170);
    }
    lVar15 = uVar12 + 1;
    ppplVar16 = ppplVar5;
    while (lVar15 = lVar15 + -1, lVar15 != 0) {
      FUN_100ddb5bc(ppplVar16);
      ppplVar16 = ppplVar16 + 10;
    }
    if (uVar8 != 0) {
      _free(ppplVar5);
    }
  }
  else if (uVar8 == 6) {
    uVar9 = param_2[6];
    uVar8 = param_2[1];
    uVar1 = param_2[2];
    uVar11 = param_2[4];
    if ((uVar11 != 0) && (uVar11 * 9 != -0x11)) {
      _free(param_2[3] + uVar11 * -8 + -8);
    }
    uStack_1e0 = uVar8 + uVar1 * 0x70;
    pppplStack_260 = (long ****)0x8000000000000000;
    ppplStack_188 = (long ***)0x0;
    lStack_178 = 0;
    uStack_1f8 = uVar8;
    uStack_1f0 = uVar8;
    uStack_1e8 = uVar12;
    while (FUN_1011ae894(&pppuStack_120,&pppplStack_260), lVar15 = lStack_108, uVar8 = uStack_110,
          ppplVar5 = ppplStack_118, pppuStack_120 == (ulong ***)0x2) {
      if (ppplStack_118 == (long ***)0x8000000000000000) {
        uStack_1d0 = uStack_180;
        ppplStack_1d8 = ppplStack_188;
        lStack_1c8 = lStack_178;
        if (uStack_1e0 == uStack_1f0) {
          uStack_110 = uStack_180;
          ppplStack_118 = ppplStack_188;
          lStack_108 = lStack_178;
          pppuStack_120 = (ulong ***)0x2;
        }
        else {
          FUN_1087e427c(&pppuStack_c8,uVar9,&UNK_10b21cb90,&UNK_10b20a590);
          uStack_f8 = uStack_a0;
          ppplStack_100 = ppplStack_a8;
          ppuStack_e8 = ppuStack_90;
          lStack_f0 = lStack_98;
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          lStack_d0 = lStack_78;
          ppplStack_118 = ppplStack_c0;
          pppuStack_120 = pppuStack_c8;
          lStack_108 = (long)ppplStack_b0;
          uStack_110 = uStack_b8;
          func_0x000100d85484(&ppplStack_1d8);
        }
        goto LAB_1012d3190;
      }
      func_0x0001011aec00(&pppuStack_c8,&pppplStack_260);
      if (pppuStack_c8 != (ulong ***)0x2) {
        lStack_140 = lStack_98;
        uStack_168 = uStack_88;
        ppplStack_170 = (long ***)ppuStack_90;
        lStack_158 = lStack_78;
        uStack_160 = uStack_80;
        uStack_148 = uStack_a0;
        ppplStack_150 = ppplStack_a8;
        pppuVar13 = pppuStack_c8;
        uVar12 = uStack_b8;
        ppplVar16 = ppplStack_c0;
        ppplVar14 = ppplStack_b0;
        if (ppplVar5 != (long ***)0x0) {
          _free(uVar8);
        }
        goto LAB_1012d3150;
      }
      uStack_148 = uStack_b8;
      ppplStack_150 = ppplStack_c0;
      lStack_140 = (long)ppplStack_b0;
      ppplStack_138 = ppplVar5;
      uStack_130 = uVar8;
      lStack_128 = lVar15;
      func_0x000100f333f0(&pppuStack_c8,&ppplStack_188,&ppplStack_138,&ppplStack_150);
      if ((pppuStack_c8 != (ulong ***)0x0) && (ppplStack_c0 != (long ***)0x0)) {
        ppplVar5 = ppplStack_c0;
        uVar8 = uStack_b8;
        if (ppplStack_b0 == (long ***)0x0) {
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            ppplVar5 = (long ***)ppplVar5[0x44];
          }
        }
        else {
          ppplVar5 = (long ***)0x0;
          ppplVar14 = ppplStack_b0;
          ppplVar16 = ppplStack_c0;
          do {
            if (ppplVar5 == (long ***)0x0) {
              for (; ppplVar5 = ppplVar16, uVar8 != 0; uVar8 = uVar8 - 1) {
                ppplVar16 = (long ***)ppplVar5[0x44];
              }
              ppplVar16 = (long ***)0x0;
              uVar8 = 0;
              if (*(short *)((long)ppplVar5 + 0x21a) == 0) goto LAB_1012d2e50;
            }
            else if (*(ushort *)((long)ppplVar5 + 0x21a) <= uVar8) {
LAB_1012d2e50:
              do {
                ppplVar6 = (long ***)*ppplVar5;
                if (ppplVar6 == (long ***)0x0) {
                  _free();
                  func_0x000108a07a20(&UNK_10b2382b0);
                  goto LAB_1012d3320;
                }
                ppplVar16 = (long ***)((long)ppplVar16 + 1);
                uVar2 = *(ushort *)(ppplVar5 + 0x43);
                uVar8 = (ulong)uVar2;
                _free();
                ppplVar5 = ppplVar6;
              } while (*(ushort *)((long)ppplVar6 + 0x21a) <= uVar2);
            }
            if (ppplVar16 == (long ***)0x0) {
              ppplVar16 = ppplVar5 + uVar8 * 3 + 1;
              pplVar10 = *ppplVar16;
              uVar8 = uVar8 + 1;
            }
            else {
              ppplVar6 = ppplVar5 + uVar8 + 1;
              do {
                ppplVar6 = (long ***)ppplVar6[0x44];
                ppplVar16 = (long ***)((long)ppplVar16 + -1);
              } while (ppplVar16 != (long ***)0x0);
              ppplVar16 = ppplVar5 + uVar8 * 3 + 1;
              pplVar10 = *ppplVar16;
              uVar8 = 0;
              ppplVar5 = ppplVar6;
            }
            if (pplVar10 != (long **)0x0) {
              _free(ppplVar16[1]);
            }
            if (ppplVar16[0x21] != (long **)0x0) {
              _free(ppplVar16[0x22]);
            }
            ppplVar16 = (long ***)0x0;
            ppplVar14 = (long ***)((long)ppplVar14 + -1);
          } while (ppplVar14 != (long ***)0x0);
        }
        ppplVar16 = (long ***)*ppplVar5;
        while (ppplVar14 = ppplVar16, ppplVar14 != (long ***)0x0) {
          _free(ppplVar5);
          ppplVar5 = ppplVar14;
          ppplVar16 = (long ***)*ppplVar14;
        }
        _free(ppplVar5);
      }
    }
    lStack_140 = lStack_f0;
    uStack_168 = uStack_e0;
    ppplStack_170 = (long ***)ppuStack_e8;
    lStack_158 = lStack_d0;
    uStack_160 = uStack_d8;
    uStack_148 = uStack_f8;
    ppplStack_150 = ppplStack_100;
    pppuVar13 = pppuStack_120;
    uVar12 = uStack_110;
    ppplVar16 = ppplStack_118;
    ppplVar14 = (long ***)lStack_108;
LAB_1012d3150:
    ppplStack_1b8 = (long ***)uStack_148;
    pppuStack_1c0 = (ulong ***)ppplStack_150;
    uStack_1b0 = lStack_140;
    uStack_1a0 = uStack_168;
    ppuStack_1a8 = (ulong **)ppplStack_170;
    lStack_190 = lStack_158;
    uStack_198 = uStack_160;
    func_0x000100d85484(&ppplStack_188);
    uStack_f8 = (ulong)ppplStack_1b8;
    ppplStack_100 = (long ***)pppuStack_1c0;
    ppuStack_e8 = ppuStack_1a8;
    lStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    lStack_d0 = lStack_190;
    pppuStack_120 = pppuVar13;
    ppplStack_118 = ppplVar16;
    uStack_110 = uVar12;
    lStack_108 = (long)ppplVar14;
LAB_1012d3190:
    FUN_100deffc0(&pppplStack_260);
  }
  else {
    uStack_168 = param_2[2];
    ppplStack_170 = (long ***)param_2[1];
    uStack_160 = param_2[3];
    pppuStack_c8 = (ulong ***)0x0;
    ppplStack_c0 = (long ***)0x1;
    uStack_b8 = 0;
    uStack_250 = 0x60000020;
    pppplStack_260 = (long ****)&pppuStack_c8;
    ppplStack_258 = (long ***)&UNK_10b209290;
    iVar4 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&ppplStack_170,&pppplStack_260);
    if (iVar4 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&ppplStack_138,&UNK_10b235000,&UNK_10b2346c0);
LAB_1012d3320:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d3324);
      (*pcVar3)();
    }
    ppplStack_1b8 = ppplStack_c0;
    pppuStack_1c0 = pppuStack_c8;
    uStack_1b0 = uStack_b8;
    func_0x00010880e98c(&pppuStack_120,&pppuStack_1c0);
  }
joined_r0x0001012d3248:
  if (pppuStack_120 == (ulong ***)0x2) {
    param_1[4] = lStack_108;
    param_1[1] = 1;
    *param_1 = 2;
    param_1[3] = uStack_110;
    param_1[2] = (long)ppplStack_118;
    return;
  }
LAB_1012d3090:
  param_1[5] = uStack_f8;
  param_1[4] = (long)ppplStack_100;
  param_1[7] = (long)ppuStack_e8;
  param_1[6] = lStack_f0;
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[10] = lStack_d0;
  param_1[1] = (long)ppplStack_118;
  *param_1 = (long)pppuStack_120;
  param_1[3] = lStack_108;
  param_1[2] = uStack_110;
  return;
}

