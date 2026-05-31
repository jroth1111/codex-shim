
void FUN_10131d1e0(long *param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  char cVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  char cVar16;
  byte bVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  char *pcStack_1b0;
  char *pcStack_1a8;
  long lStack_1a0;
  char *pcStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  char cStack_170;
  undefined7 uStack_16f;
  long *plStack_168;
  ulong *puStack_160;
  ulong uStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  long *plStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  long *plStack_128;
  ulong *puStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  ulong uStack_f9;
  ulong uStack_f0;
  long *plStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  char cStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  ulong uStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  long *plStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long *plStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  if (*param_2 == '\x14') {
    lVar5 = *(long *)(param_2 + 8);
    pcVar3 = *(char **)(param_2 + 0x10);
    lVar6 = *(long *)(param_2 + 0x18) * 0x20;
    pcVar1 = pcVar3 + lVar6;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 1;
    lStack_178 = 0;
    pcVar14 = pcVar3;
    pcStack_1b0 = pcVar3;
    lStack_1a0 = lVar5;
    pcStack_198 = pcVar1;
    lVar12 = lStack_190;
    if (*(long *)(param_2 + 0x18) != 0) {
      cVar16 = *pcVar3;
      if (cVar16 == '\x16') {
        pcVar14 = pcVar3 + 0x20;
        lVar12 = 0;
      }
      else {
        lVar18 = 0;
        puVar10 = (undefined8 *)((ulong)&cStack_170 | 1);
        puVar8 = (undefined8 *)((ulong)&cStack_b0 | 1);
        uVar15 = lVar6 - 0x20;
        uVar7 = uVar15 >> 5;
        pcVar13 = pcVar3 + 0x20;
        pcStack_1a8 = pcVar3;
        do {
          uVar20 = *(undefined8 *)(pcVar13 + -0x1f);
          puVar10[1] = *(undefined8 *)(pcVar13 + -0x17);
          *puVar10 = uVar20;
          uVar20 = *(undefined8 *)(pcVar13 + -0x10);
          *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)(pcVar13 + -8);
          *(undefined8 *)((long)puVar10 + 0xf) = uVar20;
          cStack_170 = cVar16;
          if ((cVar16 != '\f') && (cVar16 != '\r')) {
            if (cVar16 == '\x15') {
              puStack_138 = puStack_160 + uStack_158 * 8;
              puStack_150 = puStack_160;
              puStack_148 = puStack_160;
              plStack_140 = plStack_168;
              if (uStack_158 == 0) {
LAB_10131d710:
                lStack_190 = lVar18 + 1;
                uStack_f0 = CONCAT71(uStack_f0._1_7_,0xb);
                pcStack_1a8 = pcVar13;
                plVar19 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&uStack_f0,&UNK_10b20a580,&UNK_10b20a590);
              }
              else {
                puVar9 = puStack_160 + 8;
                cVar11 = (char)*puStack_160;
                puStack_148 = puVar9;
                if (cVar11 == '\x16') goto LAB_10131d710;
                uVar20 = *(undefined8 *)((long)puStack_160 + 1);
                puVar8[1] = *(undefined8 *)((long)puStack_160 + 9);
                *puVar8 = uVar20;
                uVar21 = puStack_160[2];
                plStack_88 = (long *)puStack_160[5];
                uStack_90 = puStack_160[4];
                *(ulong *)((long)puVar8 + 0x17) = puStack_160[3];
                *(ulong *)((long)puVar8 + 0xf) = uVar21;
                uStack_78 = puStack_160[7];
                uStack_80 = puStack_160[6];
                cStack_b0 = cVar11;
                if (uStack_158 == 1) {
LAB_10131d32c:
                  uStack_130 = CONCAT71(uStack_af,cVar11);
                  plStack_128 = plStack_a8;
                  uStack_118 = uStack_98;
                  puStack_120 = puStack_a0;
                  cVar11 = (char)uStack_90;
                  uStack_110 = *(undefined8 *)((long)puStack_160 + 0x21);
                  uStack_108 = (undefined7)*(undefined8 *)((long)puStack_160 + 0x29);
                  uStack_f9 = puStack_160[7];
                  uStack_101 = (undefined1)puStack_160[6];
                  uStack_100 = (undefined7)(puStack_160[6] >> 8);
                  bVar17 = 1;
                  FUN_100d34830(&puStack_150);
                  goto LAB_10131d36c;
                }
                puStack_148 = puStack_160 + 0x10;
                plStack_e8 = (long *)puStack_160[9];
                uStack_f0 = *puVar9;
                uStack_d8 = puStack_160[0xb];
                puStack_e0 = (ulong *)puStack_160[10];
                uStack_b8 = puStack_160[0xf];
                uStack_c8 = (undefined1)puStack_160[0xd];
                uStack_c7 = (undefined7)(puStack_160[0xd] >> 8);
                cStack_d0 = (char)puStack_160[0xc];
                uStack_cf = (undefined7)(puStack_160[0xc] >> 8);
                uStack_c0 = (undefined1)puStack_160[0xe];
                uStack_bf = (undefined7)(puStack_160[0xe] >> 8);
                if ((byte)uStack_f0 == '\x16') goto LAB_10131d32c;
                lStack_190 = lVar18 + 1;
                pcStack_1a8 = pcVar13;
                FUN_100e077ec(&uStack_f0);
                FUN_100e077ec(&cStack_d0);
                uStack_f0 = CONCAT71(uStack_f0._1_7_,0xb);
                plVar19 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&uStack_f0,&UNK_10b20a580,&UNK_10b20a590);
                FUN_100e077ec(&uStack_90);
                FUN_100e077ec(&cStack_b0);
              }
              FUN_100d34830(&puStack_150);
            }
            else {
              lStack_190 = lVar18 + 1;
              pcStack_1a8 = pcVar13;
              FUN_1088556a8(&uStack_f0,&cStack_170);
              plVar19 = (long *)func_0x000108a4a50c(&uStack_f0,&UNK_10b20a5b0,&UNK_10b20a590);
              FUN_100e077ec(&cStack_170);
            }
LAB_10131d7bc:
            *param_1 = -0x8000000000000000;
            param_1[1] = (long)plVar19;
            goto LAB_10131d7c4;
          }
          bVar17 = 0;
          uStack_130 = CONCAT71(uStack_16f,cVar16);
          plStack_128 = plStack_168;
          uStack_118 = uStack_158;
          puStack_120 = puStack_160;
          cVar11 = '\x16';
LAB_10131d36c:
          puVar9 = puStack_120;
          plVar4 = plStack_128;
          plStack_e8 = plStack_128;
          uStack_f0 = uStack_130;
          uVar21 = uStack_f0;
          uStack_d8 = uStack_118;
          puStack_e0 = puStack_120;
          uStack_c7 = uStack_108;
          uStack_cf = (undefined7)uStack_110;
          uStack_c8 = (undefined1)((ulong)uStack_110 >> 0x38);
          uStack_b8 = uStack_f9;
          uStack_c0 = uStack_101;
          uStack_bf = uStack_100;
          uStack_f0._0_1_ = (byte)uStack_130;
          uStack_f0 = uVar21;
          cStack_d0 = cVar11;
          if ((byte)uStack_f0 < 0xd) {
            if ((byte)uStack_f0 == 1) {
              plVar19 = (long *)(uStack_130 >> 8 & 0xff);
              if (plVar19 == (long *)0x0) {
LAB_10131d52c:
                plVar19 = (long *)0x0;
              }
              else {
                uStack_90 = CONCAT71(uStack_90._1_7_,1);
                plStack_88 = plVar19;
                plVar19 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                            (&uStack_90,&UNK_10b22b418,&UNK_10b20a590);
              }
LAB_10131d530:
              FUN_100e077ec(&uStack_f0);
              goto LAB_10131d538;
            }
            if ((byte)uStack_f0 == 4) {
              if (plStack_128 == (long *)0x0) goto LAB_10131d52c;
              plStack_88 = plStack_128;
              uStack_90 = CONCAT71(uStack_90._1_7_,1);
              plVar19 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&uStack_90,&UNK_10b22b418,&UNK_10b20a590);
              goto LAB_10131d530;
            }
            if ((byte)uStack_f0 == 0xc) {
              if ((uStack_118 == 0x18) &&
                 ((*puStack_120 == 0x5f64657473757274 && puStack_120[1] == 0x665f737365636361) &&
                  puStack_120[2] == 0x72656279635f726f)) {
                plVar19 = (long *)0x0;
                uStack_f0 = uStack_130;
              }
              else {
                plVar19 = (long *)FUN_1087e4494(puStack_120,uStack_118,&UNK_10b222758,1);
              }
              goto joined_r0x00010131d490;
            }
LAB_10131d648:
            plVar19 = (long *)FUN_108855b04(&uStack_f0,&puStack_150,&UNK_10b210640);
            plStack_88 = (long *)CONCAT71(uStack_c7,uStack_c8);
            uStack_90 = CONCAT71(uStack_cf,cStack_d0);
            uStack_80 = CONCAT71(uStack_bf,uStack_c0);
joined_r0x00010131d550:
            uStack_78 = uStack_b8;
            if (cStack_d0 != '\x16') {
              FUN_100e077ec(&uStack_90);
            }
          }
          else {
            if ((byte)uStack_f0 == 0xd) {
              if ((puStack_120 == (ulong *)0x18) &&
                 ((*plStack_128 == 0x5f64657473757274 && plStack_128[1] == 0x665f737365636361) &&
                  plStack_128[2] == 0x72656279635f726f)) goto LAB_10131d52c;
              plVar19 = (long *)FUN_1087e4494(plStack_128,puStack_120,&UNK_10b222758,1);
              goto LAB_10131d530;
            }
            if ((byte)uStack_f0 != 0xe) {
              if ((byte)uStack_f0 != 0xf) goto LAB_10131d648;
              plVar19 = (long *)func_0x000100b217d8(plStack_128,puStack_120);
              goto LAB_10131d530;
            }
            plVar19 = (long *)func_0x000100b217d8(puStack_120,uStack_118);
joined_r0x00010131d490:
            if (plVar4 != (long *)0x0) {
              _free(puVar9);
            }
LAB_10131d538:
            plStack_88 = (long *)CONCAT71(uStack_c7,uStack_c8);
            uStack_90 = CONCAT71(uStack_cf,cStack_d0);
            uStack_80 = CONCAT71(uStack_bf,uStack_c0);
            uStack_78 = uStack_b8;
            if (plVar19 != (long *)0x0) goto joined_r0x00010131d550;
            plVar19 = (long *)CONCAT71(uStack_c7,uStack_c8);
            if (cVar11 != '\x17') {
              *(undefined4 *)puVar8 = (undefined4)uStack_110;
              *(undefined4 *)((long)puVar8 + 3) = uStack_110._3_4_;
              puStack_a0 = (ulong *)CONCAT71(uStack_100,uStack_101);
              uStack_98 = uStack_f9;
              cStack_b0 = cVar11;
              plStack_a8 = plVar19;
              if (cVar11 != '\x16') {
                if ((cVar11 != '\x12') && ((cVar11 != '\x15' || (uStack_f9 != 0)))) {
                  plVar19 = (long *)FUN_108855b04(&cStack_b0,&puStack_150,&UNK_10b20a5c0);
                  goto LAB_10131d5c8;
                }
                FUN_100e077ec(&cStack_b0);
              }
              plVar19 = (long *)0x0;
            }
          }
LAB_10131d5c8:
          bVar2 = (bool)(bVar17 ^ 1);
          if (cVar16 == '\x15') {
            bVar2 = true;
          }
          if (!bVar2) {
            FUN_100e077ec(&cStack_170);
          }
          lVar12 = lStack_178;
          if (plVar19 != (long *)0x0) {
            lStack_190 = lVar18 + 1;
            pcStack_1a8 = pcVar13;
            goto LAB_10131d7bc;
          }
          if (lStack_178 == -1) {
            func_0x0001088801bc(&lStack_188);
          }
          lStack_178 = lVar12 + 1;
          pcVar14 = pcVar1;
          lVar12 = uVar7 + 1;
          if (uVar15 == 0) break;
          pcVar14 = pcVar13 + 0x20;
          cVar16 = *pcVar13;
          uVar15 = uVar15 - 0x20;
          lVar18 = lVar18 + 1;
          pcVar13 = pcVar14;
          lVar12 = lVar18;
        } while (cVar16 != '\x16');
      }
    }
    lStack_190 = lVar12;
    pcVar13 = pcVar14;
    param_1[1] = lStack_180;
    *param_1 = lStack_188;
    param_1[2] = lStack_178;
    pcStack_1a8 = pcVar13;
    if (*param_1 == -0x8000000000000000) {
LAB_10131d7c4:
      lVar12 = ((ulong)((long)pcVar1 - (long)pcVar13) >> 5) + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100e077ec(pcVar13);
        pcVar13 = pcVar13 + 0x20;
      }
      if (lVar5 == 0) {
        return;
      }
      _free(pcVar3);
      return;
    }
    lVar5 = FUN_100fbc738(&pcStack_1b0);
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    lVar5 = FUN_108855b04(param_2,&puStack_150,&UNK_10b209d60);
  }
  *param_1 = -0x8000000000000000;
  param_1[1] = lVar5;
  return;
}

