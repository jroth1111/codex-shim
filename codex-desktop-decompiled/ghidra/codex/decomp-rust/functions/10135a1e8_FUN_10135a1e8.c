
/* WARNING: Type propagation algorithm not settling */

void FUN_10135a1e8(long *param_1,ulong *param_2)

{
  long ***ppplVar1;
  int *piVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined1 uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long ***ppplVar15;
  bool bVar16;
  long *plVar17;
  long lVar18;
  long ***ppplStack_270;
  byte bStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  long lStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long ****pppplStack_1f8;
  byte bStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  ulong uStack_180;
  long *plStack_178;
  long ***ppplStack_170;
  byte bStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  long lStack_120;
  long ***ppplStack_118;
  byte bStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
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
  long lStack_78;
  
  uVar14 = *param_2;
  uVar10 = uVar14 ^ 0x8000000000000000;
  if (-1 < (long)uVar14) {
    uVar10 = 6;
  }
  if ((long)uVar10 < 4) {
    if ((long)uVar10 < 2) {
      if (uVar10 == 0) {
        func_0x00010881671c(&ppplStack_270,param_2 + 1);
        goto joined_r0x00010135a450;
      }
      bStack_1f0 = (byte)param_2[1];
      uStack_1ef = (undefined7)(param_2[1] >> 8);
      uVar8 = 2;
LAB_10135a340:
      pppplStack_1f8 = (long ****)CONCAT71(pppplStack_1f8._1_7_,uVar8);
    }
    else {
      if (uVar10 == 2) {
        bStack_1f0 = (byte)param_2[1];
        uStack_1ef = (undefined7)(param_2[1] >> 8);
        uVar8 = 3;
        goto LAB_10135a340;
      }
      pppplStack_1f8 = (long ****)((ulong)CONCAT61(pppplStack_1f8._2_6_,(char)param_2[1]) << 8);
    }
    FUN_1087e3db0(&ppplStack_270,&pppplStack_1f8,&ppplStack_170,&UNK_10b21b110);
  }
  else if (uVar10 == 5) {
    uVar10 = param_2[1];
    ppplVar3 = (long ***)param_2[2];
    uVar14 = param_2[3];
    ppplVar1 = ppplVar3 + uVar14 * 10;
    bStack_168 = (byte)ppplVar3;
    uStack_167 = (undefined7)((ulong)ppplVar3 >> 8);
    uStack_160 = (undefined1)uVar10;
    uStack_15f = (undefined7)(uVar10 >> 8);
    uStack_158 = SUB81(ppplVar1,0);
    uStack_157 = (undefined7)((ulong)ppplVar1 >> 8);
    ppplStack_170 = ppplVar3;
    if (uVar14 == 0) {
      bVar9 = 2;
      ppplVar15 = ppplVar3;
LAB_10135a3e8:
      bStack_268 = bVar9 == 2 | bVar9 & 1;
      ppplStack_270 = (long ***)0x2;
    }
    else {
      ppplVar15 = ppplVar3 + 10;
      bStack_168 = (byte)ppplVar15;
      uStack_167 = (undefined7)((ulong)ppplVar15 >> 8);
      if ((long ***)*ppplVar3 == (long ***)0x8000000000000006) {
        bVar9 = 2;
      }
      else {
        uStack_f8 = SUB81(ppplVar3[4],0);
        uStack_f7 = (undefined7)((ulong)ppplVar3[4] >> 8);
        uStack_100 = SUB81(ppplVar3[3],0);
        uStack_ff = (undefined7)((ulong)ppplVar3[3] >> 8);
        uStack_e8 = SUB81(ppplVar3[6],0);
        uStack_e7 = (undefined7)((ulong)ppplVar3[6] >> 8);
        uStack_f0 = SUB81(ppplVar3[5],0);
        uStack_ef = (undefined7)((ulong)ppplVar3[5] >> 8);
        uStack_d8 = SUB81(ppplVar3[8],0);
        uStack_d7 = (undefined7)((ulong)ppplVar3[8] >> 8);
        uStack_e0 = SUB81(ppplVar3[7],0);
        uStack_df = (undefined7)((ulong)ppplVar3[7] >> 8);
        uStack_d0 = SUB81(ppplVar3[9],0);
        uStack_cf = (undefined7)((ulong)ppplVar3[9] >> 8);
        uStack_108 = SUB81(ppplVar3[2],0);
        uStack_107 = (undefined7)((ulong)ppplVar3[2] >> 8);
        bStack_110 = (byte)ppplVar3[1];
        uStack_10f = (undefined7)((ulong)ppplVar3[1] >> 8);
        ppplStack_118 = (long ***)*ppplVar3;
        FUN_100616c64(&pppplStack_1f8,&ppplStack_118);
        bVar9 = bStack_1f0;
        if (pppplStack_1f8 != (long ****)0x2) {
          uStack_24f = uStack_1d7;
          uStack_248 = uStack_1d0;
          uStack_257 = uStack_1df;
          uStack_250 = uStack_1d8;
          uStack_23f = uStack_1c7;
          uStack_238 = uStack_1c0;
          uStack_247 = uStack_1cf;
          uStack_240 = uStack_1c8;
          uStack_22f = uStack_1b7;
          uStack_237 = uStack_1bf;
          uStack_230 = uStack_1b8;
          lStack_220 = lStack_1a8;
          uStack_228 = uStack_1b0;
          uStack_227 = uStack_1af;
          ppplStack_270 = (long ***)pppplStack_1f8;
          uStack_25f = uStack_1e7;
          uStack_258 = uStack_1e0;
          uStack_267 = uStack_1ef;
          uStack_260 = uStack_1e8;
          lVar18 = (uVar14 * 0x50 - 0x50 >> 4) * -0x3333333333333333 + 1;
          bStack_268 = bStack_1f0;
          while (lVar18 = lVar18 + -1, lVar18 != 0) {
            FUN_100ddb5bc(ppplVar15);
            ppplVar15 = ppplVar15 + 10;
          }
          if (uVar10 != 0) {
            _free(ppplVar3);
          }
          goto LAB_10135a7e0;
        }
      }
      if (uVar14 == 1) goto LAB_10135a3e8;
      FUN_1087e427c(&pppplStack_1f8,uVar14,&UNK_10b21cb80,&UNK_10b20a590);
      uStack_248 = uStack_1d0;
      uStack_247 = uStack_1cf;
      uStack_250 = uStack_1d8;
      uStack_24f = uStack_1d7;
      uStack_238 = uStack_1c0;
      uStack_237 = uStack_1bf;
      uStack_240 = uStack_1c8;
      uStack_23f = uStack_1c7;
      uStack_228 = uStack_1b0;
      uStack_227 = uStack_1af;
      uStack_230 = uStack_1b8;
      uStack_22f = uStack_1b7;
      lStack_220 = lStack_1a8;
      ppplStack_270 = (long ***)pppplStack_1f8;
      bStack_268 = bStack_1f0;
      uStack_267 = uStack_1ef;
      uStack_258 = uStack_1e0;
      uStack_257 = uStack_1df;
      uStack_260 = uStack_1e8;
      uStack_25f = uStack_1e7;
    }
    lVar18 = ((ulong)((long)ppplVar1 - (long)ppplVar15) >> 4) * -0x3333333333333333 + 1;
    while (lVar18 = lVar18 + -1, lVar18 != 0) {
      FUN_100ddb5bc(ppplVar15);
      ppplVar15 = ppplVar15 + 10;
    }
    if (uVar10 != 0) {
      _free(ppplVar3);
    }
  }
  else if (uVar10 == 6) {
    uVar11 = param_2[6];
    plVar17 = (long *)param_2[1];
    uVar10 = param_2[2];
    uVar12 = param_2[4];
    if ((uVar12 != 0) && (uVar12 * 9 != -0x11)) {
      _free(param_2[3] + uVar12 * -8 + -8);
    }
    plVar13 = plVar17 + uVar10 * 0xe;
    pppplStack_1f8 = (long ****)0x8000000000000000;
    plStack_190 = plVar17;
    uStack_180 = uVar14;
    plStack_178 = plVar13;
    if (uVar10 == 0) {
      bVar9 = 2;
      plStack_188 = plVar17;
    }
    else {
      lVar18 = *plVar17;
      plStack_188 = plVar17 + 0xe;
      if (lVar18 == -0x8000000000000000) {
        bVar9 = 2;
      }
      else {
        bVar9 = 2;
        do {
          piVar2 = (int *)plVar17[1];
          pppplVar4 = (long ****)plVar17[2];
          lStack_a8 = plVar17[6];
          lStack_b0 = plVar17[5];
          lStack_98 = plVar17[8];
          lStack_a0 = plVar17[7];
          lStack_88 = plVar17[10];
          lStack_90 = plVar17[9];
          lStack_78 = plVar17[0xc];
          lStack_80 = plVar17[0xb];
          lStack_b8 = plVar17[4];
          lStack_c0 = plVar17[3];
          if (pppplVar4 == (long ****)0x0) {
            lVar7 = 1;
          }
          else {
            lVar7 = _malloc(pppplVar4);
            if (lVar7 == 0) {
              func_0x0001087c9084(1,pppplVar4);
              goto LAB_10135a8ac;
            }
          }
          _memcpy(lVar7,piVar2,pppplVar4);
          if (pppplStack_1f8 != (long ****)0x8000000000000000) {
            if (pppplStack_1f8 != (long ****)0x0) {
              _free(CONCAT71(uStack_1ef,bStack_1f0));
            }
            FUN_100ddb5bc(&uStack_1e0);
          }
          bStack_1f0 = (byte)lVar7;
          uStack_1ef = (undefined7)((ulong)lVar7 >> 8);
          uStack_1e8 = SUB81(pppplVar4,0);
          uStack_1e7 = (undefined7)((ulong)pppplVar4 >> 8);
          uStack_1c8 = (undefined1)lStack_a8;
          uStack_1c7 = (undefined7)((ulong)lStack_a8 >> 8);
          uStack_1d0 = (undefined1)lStack_b0;
          uStack_1cf = (undefined7)((ulong)lStack_b0 >> 8);
          uStack_1b8 = (undefined1)lStack_98;
          uStack_1b7 = (undefined7)((ulong)lStack_98 >> 8);
          uStack_1c0 = (undefined1)lStack_a0;
          uStack_1bf = (undefined7)((ulong)lStack_a0 >> 8);
          lStack_1a8 = lStack_88;
          uStack_1b0 = (undefined1)lStack_90;
          uStack_1af = (undefined7)((ulong)lStack_90 >> 8);
          lStack_198 = lStack_78;
          lStack_1a0 = lStack_80;
          uStack_1d8 = (undefined1)lStack_b8;
          uStack_1d7 = (undefined7)((ulong)lStack_b8 >> 8);
          uStack_1e0 = (undefined1)lStack_c0;
          uStack_1df = (undefined7)((ulong)lStack_c0 >> 8);
          if (pppplVar4 == (long ****)0x7) {
            bVar16 = *piVar2 != 0x62616e65 || *(int *)((long)piVar2 + 3) != 0x64656c62;
          }
          else {
            bVar16 = true;
          }
          pppplStack_1f8 = pppplVar4;
          if (lVar18 != 0) {
            _free(piVar2);
          }
          if (!bVar16) {
            if (bVar9 != 2) {
              FUN_1087e4364(&ppplStack_170,&UNK_108ca2209,7);
              goto LAB_10135a70c;
            }
            func_0x0001011aed90(&ppplStack_118,&pppplStack_1f8);
            bVar9 = bStack_110;
            if (ppplStack_118 == (long ***)0x2) goto LAB_10135a588;
            uStack_14f = uStack_f7;
            uStack_148 = uStack_f0;
            uStack_157 = uStack_ff;
            uStack_150 = uStack_f8;
            uStack_13f = uStack_e7;
            uStack_138 = uStack_e0;
            uStack_147 = uStack_ef;
            uStack_140 = uStack_e8;
            uStack_12f = uStack_d7;
            uStack_137 = uStack_df;
            uStack_130 = uStack_d8;
            lStack_120 = lStack_c8;
            uStack_128 = uStack_d0;
            uStack_127 = uStack_cf;
            uStack_15f = uStack_107;
            uStack_158 = uStack_100;
            uStack_167 = uStack_10f;
            uStack_160 = uStack_108;
            ppplStack_270 = ppplStack_118;
            bStack_268 = bStack_110;
LAB_10135a7a8:
            uStack_24f = uStack_14f;
            uStack_248 = uStack_148;
            uStack_257 = uStack_157;
            uStack_250 = uStack_150;
            uStack_23f = uStack_13f;
            uStack_238 = uStack_138;
            uStack_247 = uStack_147;
            uStack_240 = uStack_140;
            uStack_22f = uStack_12f;
            uStack_237 = uStack_137;
            uStack_230 = uStack_130;
            lStack_220 = lStack_120;
            uStack_228 = uStack_128;
            uStack_227 = uStack_127;
            uStack_25f = uStack_15f;
            uStack_258 = uStack_158;
            uStack_267 = uStack_167;
            uStack_260 = uStack_160;
            FUN_100deffc0(&pppplStack_1f8);
            goto LAB_10135a7e0;
          }
          FUN_1011aef20(&ppplStack_118,&pppplStack_1f8);
          if (ppplStack_118 != (long ***)0x2) {
            uStack_148 = uStack_f0;
            uStack_147 = uStack_ef;
            uStack_150 = uStack_f8;
            uStack_14f = uStack_f7;
            uStack_138 = uStack_e0;
            uStack_137 = uStack_df;
            uStack_140 = uStack_e8;
            uStack_13f = uStack_e7;
            uStack_128 = uStack_d0;
            uStack_127 = uStack_cf;
            uStack_130 = uStack_d8;
            uStack_12f = uStack_d7;
            lStack_120 = lStack_c8;
            bStack_168 = bStack_110;
            uStack_167 = uStack_10f;
            ppplStack_170 = ppplStack_118;
            uStack_158 = uStack_100;
            uStack_157 = uStack_ff;
            uStack_160 = uStack_108;
            uStack_15f = uStack_107;
LAB_10135a70c:
            ppplStack_270 = ppplStack_170;
            bStack_268 = bStack_168;
            if (ppplStack_170 != (long ***)0x2) goto LAB_10135a7a8;
            if (plStack_178 != plStack_188) goto LAB_10135a72c;
            goto LAB_10135a5cc;
          }
LAB_10135a588:
          plVar13 = plStack_178;
          if (plStack_188 == plStack_178) goto LAB_10135a5b0;
          plVar13 = plStack_188 + 0xe;
          lVar18 = *plStack_188;
          plVar17 = plStack_188;
          plStack_188 = plVar13;
        } while (lVar18 != -0x8000000000000000);
      }
      plVar13 = plVar17 + 0xe;
    }
LAB_10135a5b0:
    bStack_168 = bVar9 == 2 | bVar9 & 1;
    if (plStack_178 == plVar13) {
LAB_10135a5cc:
      ppplStack_270 = (long ***)0x2;
      bStack_268 = bStack_168;
    }
    else {
LAB_10135a72c:
      FUN_1087e427c(&ppplStack_118,uVar11,&UNK_10b21cb90,&UNK_10b20a590);
      uStack_248 = uStack_f0;
      uStack_247 = uStack_ef;
      uStack_250 = uStack_f8;
      uStack_24f = uStack_f7;
      uStack_238 = uStack_e0;
      uStack_237 = uStack_df;
      uStack_240 = uStack_e8;
      uStack_23f = uStack_e7;
      uStack_228 = uStack_d0;
      uStack_227 = uStack_cf;
      uStack_230 = uStack_d8;
      uStack_22f = uStack_d7;
      lStack_220 = lStack_c8;
      ppplStack_270 = ppplStack_118;
      bStack_268 = bStack_110;
      uStack_267 = uStack_10f;
      uStack_258 = uStack_100;
      uStack_257 = uStack_ff;
      uStack_260 = uStack_108;
      uStack_25f = uStack_107;
    }
    FUN_100deffc0(&pppplStack_1f8);
  }
  else {
    uStack_208 = param_2[2];
    uStack_210 = param_2[1];
    uStack_200 = param_2[3];
    ppplStack_118 = (long ***)0x0;
    bStack_110 = 1;
    uStack_10f = 0;
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_1e8 = 0x20;
    uStack_1e7 = 0x600000;
    pppplStack_1f8 = &ppplStack_118;
    bStack_1f0 = 0x90;
    uStack_1ef = 0x10b2092;
    iVar6 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&uStack_210,&pppplStack_1f8);
    if (iVar6 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&ppplStack_170,&UNK_10b235000,&UNK_10b2346c0);
LAB_10135a8ac:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10135a8b0);
      (*pcVar5)();
    }
    bStack_168 = bStack_110;
    uStack_167 = uStack_10f;
    ppplStack_170 = ppplStack_118;
    uStack_160 = uStack_108;
    uStack_15f = uStack_107;
    func_0x00010881671c(&ppplStack_270,&ppplStack_170);
  }
joined_r0x00010135a450:
  if (ppplStack_270 == (long ***)0x2) {
    *(byte *)(param_1 + 1) = bStack_268;
    *param_1 = 2;
    return;
  }
LAB_10135a7e0:
  param_1[5] = CONCAT71(uStack_247,uStack_248);
  param_1[4] = CONCAT71(uStack_24f,uStack_250);
  param_1[7] = CONCAT71(uStack_237,uStack_238);
  param_1[6] = CONCAT71(uStack_23f,uStack_240);
  param_1[9] = CONCAT71(uStack_227,uStack_228);
  param_1[8] = CONCAT71(uStack_22f,uStack_230);
  param_1[10] = lStack_220;
  param_1[1] = CONCAT71(uStack_267,bStack_268);
  *param_1 = (long)ppplStack_270;
  param_1[3] = CONCAT71(uStack_257,uStack_258);
  param_1[2] = CONCAT71(uStack_25f,uStack_260);
  return;
}

