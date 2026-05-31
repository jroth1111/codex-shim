
/* WARNING: Type propagation algorithm not settling */

void FUN_1012cb6e0(long *param_1,ulong *param_2)

{
  int *piVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  char cVar15;
  long *plVar16;
  long lVar17;
  long ***ppplStack_280;
  char cStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
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
  long lStack_230;
  long *plStack_220;
  long *plStack_218;
  ulong uStack_210;
  long *plStack_208;
  undefined8 ****ppppuStack_1f8;
  char cStack_1f0;
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
  char cStack_168;
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
  char cStack_110;
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
  
  uVar9 = *param_2;
  uVar7 = uVar9 ^ 0x8000000000000000;
  if (-1 < (long)uVar9) {
    uVar7 = 6;
  }
  if ((long)uVar7 < 4) {
    if ((long)uVar7 < 2) {
      if (uVar7 == 0) {
        func_0x00010880f004(&ppplStack_280,param_2 + 1);
        goto joined_r0x0001012cbc74;
      }
      cStack_1f0 = (char)param_2[1];
      uStack_1ef = (undefined7)(param_2[1] >> 8);
      uVar6 = 2;
LAB_1012cb834:
      ppppuStack_1f8 = (undefined8 ****)CONCAT71(ppppuStack_1f8._1_7_,uVar6);
    }
    else {
      if (uVar7 == 2) {
        cStack_1f0 = (char)param_2[1];
        uStack_1ef = (undefined7)(param_2[1] >> 8);
        uVar6 = 3;
        goto LAB_1012cb834;
      }
      ppppuStack_1f8 =
           (undefined8 ****)((ulong)CONCAT61(ppppuStack_1f8._2_6_,(char)param_2[1]) << 8);
    }
    FUN_1087e3db0(&ppplStack_280,&ppppuStack_1f8,&ppplStack_170,&UNK_10b219c70);
  }
  else {
    if (uVar7 == 5) {
      uVar7 = param_2[1];
      plVar13 = (long *)param_2[2];
      uVar9 = param_2[3];
      plVar14 = plVar13 + uVar9 * 10;
      plVar10 = plVar13;
      plVar16 = plVar14;
      plStack_220 = plVar13;
      plStack_218 = plVar13;
      uStack_210 = uVar7;
      plStack_208 = plVar14;
      if (uVar9 == 0) {
LAB_1012cb874:
        FUN_1087e427c(&ppplStack_118,0,&UNK_10b22b9a0,&UNK_10b20a590);
        ppplStack_280 = ppplStack_118;
        cStack_278 = cStack_110;
        if (ppplStack_118 == (long ***)0x2) {
LAB_1012cb904:
          if (plVar14 == plVar16) {
            ppplStack_280 = (long ***)0x2;
          }
          else {
            FUN_1087e427c(&ppppuStack_1f8,uVar9,&UNK_10b21cb80,&UNK_10b20a590);
            uStack_258 = uStack_1d0;
            uStack_257 = uStack_1cf;
            uStack_260 = uStack_1d8;
            uStack_25f = uStack_1d7;
            uStack_248 = uStack_1c0;
            uStack_247 = uStack_1bf;
            uStack_250 = uStack_1c8;
            uStack_24f = uStack_1c7;
            uStack_238 = uStack_1b0;
            uStack_237 = uStack_1af;
            uStack_240 = uStack_1b8;
            uStack_23f = uStack_1b7;
            lStack_230 = lStack_1a8;
            ppplStack_280 = (long ***)ppppuStack_1f8;
            cStack_278 = cStack_1f0;
            uStack_277 = uStack_1ef;
            uStack_268 = uStack_1e0;
            uStack_267 = uStack_1df;
            uStack_270 = uStack_1e8;
            uStack_26f = uStack_1e7;
          }
          lVar17 = ((ulong)((long)plVar14 - (long)plVar10) >> 4) * -0x3333333333333333 + 1;
          while (lVar17 = lVar17 + -1, lVar17 != 0) {
            FUN_100ddb5bc(plVar10);
            plVar10 = plVar10 + 10;
          }
          if (uVar7 != 0) {
            _free(plVar13);
          }
          goto joined_r0x0001012cbc74;
        }
      }
      else {
        plVar10 = plVar13 + 10;
        plVar16 = plVar10;
        plStack_218 = plVar10;
        if ((long ***)*plVar13 == (long ***)0x8000000000000006) goto LAB_1012cb874;
        uStack_150 = (undefined1)plVar13[4];
        uStack_14f = (undefined7)((ulong)plVar13[4] >> 8);
        uStack_158 = (undefined1)plVar13[3];
        uStack_157 = (undefined7)((ulong)plVar13[3] >> 8);
        uStack_140 = (undefined1)plVar13[6];
        uStack_13f = (undefined7)((ulong)plVar13[6] >> 8);
        uStack_148 = (undefined1)plVar13[5];
        uStack_147 = (undefined7)((ulong)plVar13[5] >> 8);
        uStack_130 = (undefined1)plVar13[8];
        uStack_12f = (undefined7)((ulong)plVar13[8] >> 8);
        uStack_138 = (undefined1)plVar13[7];
        uStack_137 = (undefined7)((ulong)plVar13[7] >> 8);
        uStack_128 = (undefined1)plVar13[9];
        uStack_127 = (undefined7)((ulong)plVar13[9] >> 8);
        uStack_160 = (undefined1)plVar13[2];
        uStack_15f = (undefined7)((ulong)plVar13[2] >> 8);
        cStack_168 = (char)plVar13[1];
        uStack_167 = (undefined7)((ulong)plVar13[1] >> 8);
        ppplStack_170 = (long ***)*plVar13;
        FUN_100616c64(&ppppuStack_1f8,&ppplStack_170);
        cStack_278 = cStack_1f0;
        if (ppppuStack_1f8 == (undefined8 ****)0x2) {
          if (cStack_1f0 == '\x03') goto LAB_1012cb874;
          goto LAB_1012cb904;
        }
        uStack_f7 = uStack_1d7;
        uStack_f0 = uStack_1d0;
        uStack_ff = uStack_1df;
        uStack_f8 = uStack_1d8;
        uStack_e7 = uStack_1c7;
        uStack_e0 = uStack_1c0;
        uStack_ef = uStack_1cf;
        uStack_e8 = uStack_1c8;
        uStack_d7 = uStack_1b7;
        uStack_df = uStack_1bf;
        uStack_d8 = uStack_1b8;
        lStack_c8 = lStack_1a8;
        uStack_d0 = uStack_1b0;
        uStack_cf = uStack_1af;
        uStack_107 = uStack_1e7;
        uStack_100 = uStack_1e0;
        uStack_10f = uStack_1ef;
        uStack_108 = uStack_1e8;
        ppplStack_280 = (long ***)ppppuStack_1f8;
      }
      uStack_25f = uStack_f7;
      uStack_258 = uStack_f0;
      uStack_267 = uStack_ff;
      uStack_260 = uStack_f8;
      uStack_24f = uStack_e7;
      uStack_248 = uStack_e0;
      uStack_257 = uStack_ef;
      uStack_250 = uStack_e8;
      uStack_23f = uStack_d7;
      uStack_247 = uStack_df;
      uStack_240 = uStack_d8;
      lStack_230 = lStack_c8;
      uStack_238 = uStack_d0;
      uStack_237 = uStack_cf;
      uStack_26f = uStack_107;
      uStack_268 = uStack_100;
      uStack_277 = uStack_10f;
      uStack_270 = uStack_108;
      lVar17 = ((ulong)((long)plVar14 - (long)plVar10) >> 4) * -0x3333333333333333 + 1;
      while (lVar17 = lVar17 + -1, lVar17 != 0) {
        FUN_100ddb5bc(plVar10);
        plVar10 = plVar10 + 10;
      }
      if (uVar7 != 0) {
        _free(plVar13);
      }
      goto LAB_1012cbd30;
    }
    if (uVar7 != 6) {
      plStack_218 = (long *)param_2[2];
      plStack_220 = (long *)param_2[1];
      uStack_210 = param_2[3];
      ppplStack_118 = (long ***)0x0;
      cStack_110 = '\x01';
      uStack_10f = 0;
      uStack_108 = 0;
      uStack_107 = 0;
      uStack_1e8 = 0x20;
      uStack_1e7 = 0x600000;
      ppppuStack_1f8 = &ppplStack_118;
      cStack_1f0 = -0x70;
      uStack_1ef = 0x10b2092;
      iVar4 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                        (&plStack_220,&ppppuStack_1f8);
      if (iVar4 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,&ppplStack_170,&UNK_10b235000,&UNK_10b2346c0);
LAB_1012cbe00:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012cbe04);
        (*pcVar3)();
      }
      cStack_168 = cStack_110;
      uStack_167 = uStack_10f;
      ppplStack_170 = ppplStack_118;
      uStack_160 = uStack_108;
      uStack_15f = uStack_107;
      func_0x00010880f004(&ppplStack_280,&ppplStack_170);
      goto joined_r0x0001012cbc74;
    }
    uVar12 = param_2[6];
    plVar13 = (long *)param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[4];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_2[3] + uVar8 * -8 + -8);
    }
    plStack_178 = plVar13 + uVar7 * 0xe;
    ppppuStack_1f8 = (undefined8 ****)0x8000000000000000;
    plStack_190 = plVar13;
    uStack_180 = uVar9;
    if (uVar7 == 0) {
      plStack_188 = plVar13;
      cStack_278 = '\x02';
LAB_1012cbad8:
      ppplStack_280 = (long ***)0x2;
    }
    else {
      lVar17 = *plVar13;
      plStack_188 = plVar13 + 0xe;
      if (lVar17 == -0x8000000000000000) {
        cVar15 = '\x03';
      }
      else {
        cVar15 = '\x03';
        do {
          piVar1 = (int *)plVar13[1];
          ppppuVar2 = (undefined8 ****)plVar13[2];
          lStack_a8 = plVar13[6];
          lStack_b0 = plVar13[5];
          lStack_98 = plVar13[8];
          lStack_a0 = plVar13[7];
          lStack_88 = plVar13[10];
          lStack_90 = plVar13[9];
          lStack_78 = plVar13[0xc];
          lStack_80 = plVar13[0xb];
          lStack_b8 = plVar13[4];
          lStack_c0 = plVar13[3];
          if (ppppuVar2 == (undefined8 ****)0x0) {
            lVar5 = 1;
          }
          else {
            lVar5 = _malloc(ppppuVar2);
            if (lVar5 == 0) {
              func_0x0001087c9084(1,ppppuVar2);
              goto LAB_1012cbe00;
            }
          }
          _memcpy(lVar5,piVar1,ppppuVar2);
          if (ppppuStack_1f8 != (undefined8 ****)0x8000000000000000) {
            if (ppppuStack_1f8 != (undefined8 ****)0x0) {
              _free(CONCAT71(uStack_1ef,cStack_1f0));
            }
            FUN_100ddb5bc(&uStack_1e0);
          }
          cStack_1f0 = (char)lVar5;
          uStack_1ef = (undefined7)((ulong)lVar5 >> 8);
          uStack_1e8 = SUB81(ppppuVar2,0);
          uStack_1e7 = (undefined7)((ulong)ppppuVar2 >> 8);
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
          if (ppppuVar2 == (undefined8 ****)0x7) {
            bVar11 = *piVar1 != 0x62616e65 || *(int *)((long)piVar1 + 3) != 0x64656c62;
          }
          else {
            bVar11 = true;
          }
          ppppuStack_1f8 = ppppuVar2;
          if (lVar17 != 0) {
            _free(piVar1);
          }
          if (!bVar11) {
            if (cVar15 != '\x03') {
              FUN_1087e4364(&ppplStack_170,&UNK_108ca2209,7);
              goto LAB_1012cbc9c;
            }
            FUN_100f21638(&ppplStack_118,&ppppuStack_1f8);
            cVar15 = cStack_110;
            if (ppplStack_118 == (long ***)0x2) goto LAB_1012cba98;
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
            ppplStack_280 = ppplStack_118;
            cStack_278 = cStack_110;
LAB_1012cbcf8:
            uStack_25f = uStack_14f;
            uStack_258 = uStack_148;
            uStack_267 = uStack_157;
            uStack_260 = uStack_150;
            uStack_24f = uStack_13f;
            uStack_248 = uStack_138;
            uStack_257 = uStack_147;
            uStack_250 = uStack_140;
            uStack_23f = uStack_12f;
            uStack_247 = uStack_137;
            uStack_240 = uStack_130;
            lStack_230 = lStack_120;
            uStack_238 = uStack_128;
            uStack_237 = uStack_127;
            uStack_26f = uStack_15f;
            uStack_268 = uStack_158;
            uStack_277 = uStack_167;
            uStack_270 = uStack_160;
            FUN_100deffc0(&ppppuStack_1f8);
            goto LAB_1012cbd30;
          }
          FUN_1011aef20(&ppplStack_118,&ppppuStack_1f8);
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
            cStack_168 = cStack_110;
            uStack_167 = uStack_10f;
            ppplStack_170 = ppplStack_118;
            uStack_158 = uStack_100;
            uStack_157 = uStack_ff;
            uStack_160 = uStack_108;
            uStack_15f = uStack_107;
LAB_1012cbc9c:
            ppplStack_280 = ppplStack_170;
            cStack_278 = cStack_168;
            if (ppplStack_170 != (long ***)0x2) goto LAB_1012cbcf8;
            cStack_278 = cStack_168;
            if (plStack_178 == plStack_188) goto LAB_1012cbad8;
            goto LAB_1012cbbc4;
          }
LAB_1012cba98:
          if (plStack_188 == plStack_178) {
            cStack_278 = '\x02';
            if (cVar15 != '\x03') {
              cStack_278 = cVar15;
            }
            goto LAB_1012cbad8;
          }
          plVar10 = plStack_188 + 0xe;
          lVar17 = *plStack_188;
          plVar13 = plStack_188;
          plStack_188 = plVar10;
        } while (lVar17 != -0x8000000000000000);
      }
      cStack_278 = '\x02';
      if (cVar15 != '\x03') {
        cStack_278 = cVar15;
      }
      if (plStack_178 == plVar13 + 0xe) goto LAB_1012cbad8;
LAB_1012cbbc4:
      FUN_1087e427c(&ppplStack_118,uVar12,&UNK_10b21cb90,&UNK_10b20a590);
      uStack_258 = uStack_f0;
      uStack_257 = uStack_ef;
      uStack_260 = uStack_f8;
      uStack_25f = uStack_f7;
      uStack_248 = uStack_e0;
      uStack_247 = uStack_df;
      uStack_250 = uStack_e8;
      uStack_24f = uStack_e7;
      uStack_238 = uStack_d0;
      uStack_237 = uStack_cf;
      uStack_240 = uStack_d8;
      uStack_23f = uStack_d7;
      lStack_230 = lStack_c8;
      ppplStack_280 = ppplStack_118;
      cStack_278 = cStack_110;
      uStack_277 = uStack_10f;
      uStack_268 = uStack_100;
      uStack_267 = uStack_ff;
      uStack_270 = uStack_108;
      uStack_26f = uStack_107;
    }
    FUN_100deffc0(&ppppuStack_1f8);
  }
joined_r0x0001012cbc74:
  if (ppplStack_280 == (long ***)0x2) {
    *(char *)(param_1 + 1) = cStack_278;
    *param_1 = 2;
    return;
  }
LAB_1012cbd30:
  param_1[5] = CONCAT71(uStack_257,uStack_258);
  param_1[4] = CONCAT71(uStack_25f,uStack_260);
  param_1[7] = CONCAT71(uStack_247,uStack_248);
  param_1[6] = CONCAT71(uStack_24f,uStack_250);
  param_1[9] = CONCAT71(uStack_237,uStack_238);
  param_1[8] = CONCAT71(uStack_23f,uStack_240);
  param_1[10] = lStack_230;
  param_1[1] = CONCAT71(uStack_277,cStack_278);
  *param_1 = (long)ppplStack_280;
  param_1[3] = CONCAT71(uStack_267,uStack_268);
  param_1[2] = CONCAT71(uStack_26f,uStack_270);
  return;
}

