
void FUN_1035d4ab0(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  undefined1 auStack_1b0 [80];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_108;
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
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  
  uVar8 = *param_2;
  uVar6 = uVar8 ^ 0x8000000000000000;
  if (-1 < (long)uVar8) {
    uVar6 = 6;
  }
  if ((long)uVar6 < 3) {
    if (uVar6 == 0) {
      uVar6 = param_2[1];
      uVar8 = param_2[2];
      *param_1 = 2;
      if (uVar6 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar8);
      return;
    }
LAB_1035d4b68:
    *param_1 = 2;
    return;
  }
  if ((long)uVar6 < 5) {
    if (uVar6 == 3) goto LAB_1035d4b68;
    puStack_a8 = (ulong *)param_2[2];
    puStack_b0 = (ulong *)param_2[1];
    uStack_a0 = param_2[3];
    uStack_108 = 0;
    uStack_100 = 1;
    uStack_ff = 0;
    uStack_f8 = 0;
    uStack_f7 = 0;
    uStack_228 = 0x20;
    uStack_227 = 0x600000;
    puStack_238 = &uStack_108;
    uStack_230 = 0x48;
    uStack_22f = 0x10b29a4;
    iVar5 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&puStack_b0,&puStack_238);
    if (iVar5 != 0) {
      func_0x000108a07a3c(&UNK_108d8639e,0x37,auStack_1b0,&UNK_10b2c0eb8,&UNK_10b2c0b18);
LAB_1035d4fc0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1035d4fc4);
      (*pcVar4)();
    }
    puVar2 = (ulong *)CONCAT71(uStack_ff,uStack_100);
    *param_1 = 2;
    uVar6 = uStack_108;
    goto joined_r0x0001035d4e84;
  }
  if (uVar6 != 5) {
    uVar7 = param_2[6];
    plVar1 = (long *)param_2[1];
    uVar6 = param_2[2];
    uVar12 = param_2[4];
    if ((uVar12 != 0) && (uVar12 * 9 != -0x11)) {
      _free(param_2[3] + uVar12 * -8 + -8);
    }
    plStack_1b8 = plVar1 + uVar6 * 0xe;
    puStack_238 = (ulong *)0x8000000000000000;
    plStack_1d0 = plVar1;
    plStack_1c8 = plVar1;
    uStack_1c0 = uVar8;
    if (uVar6 != 0) {
      puVar13 = (ulong *)*plVar1;
      while (plStack_1c8 = plVar1 + 0xe, puVar13 != (ulong *)0x8000000000000000) {
        uVar6 = plVar1[1];
        puVar2 = (ulong *)plVar1[2];
        lStack_148 = plVar1[6];
        lStack_150 = plVar1[5];
        lStack_138 = plVar1[8];
        lStack_140 = plVar1[7];
        uStack_128 = plVar1[10];
        lStack_130 = plVar1[9];
        lStack_118 = plVar1[0xc];
        lStack_120 = plVar1[0xb];
        lStack_158 = plVar1[4];
        lStack_160 = plVar1[3];
        if (puVar2 == (ulong *)0x0) {
          lVar11 = 1;
        }
        else {
          lVar11 = _malloc(puVar2);
          if (lVar11 == 0) {
            func_0x0001087c9084(1,puVar2);
            goto LAB_1035d4fc0;
          }
        }
        _memcpy(lVar11,uVar6,puVar2);
        if (puStack_238 != (ulong *)0x8000000000000000) {
          if (puStack_238 != (ulong *)0x0) {
            _free(CONCAT71(uStack_22f,uStack_230));
          }
          FUN_10337b6e4(&uStack_220);
        }
        uStack_208 = (undefined1)lStack_148;
        uStack_207 = (undefined7)((ulong)lStack_148 >> 8);
        uStack_210 = (undefined1)lStack_150;
        uStack_20f = (undefined7)((ulong)lStack_150 >> 8);
        uStack_1f8 = (undefined1)lStack_138;
        uStack_1f7 = (undefined7)((ulong)lStack_138 >> 8);
        uStack_200 = (undefined1)lStack_140;
        uStack_1ff = (undefined7)((ulong)lStack_140 >> 8);
        uStack_1e8 = uStack_128;
        uStack_1f0 = (undefined1)lStack_130;
        uStack_1ef = (undefined7)((ulong)lStack_130 >> 8);
        lStack_1d8 = lStack_118;
        lStack_1e0 = lStack_120;
        uStack_230 = (undefined1)lVar11;
        uStack_22f = (undefined7)((ulong)lVar11 >> 8);
        uStack_228 = SUB81(puVar2,0);
        uStack_227 = (undefined7)((ulong)puVar2 >> 8);
        uStack_218 = (undefined1)lStack_158;
        uStack_217 = (undefined7)((ulong)lStack_158 >> 8);
        uStack_220 = (undefined1)lStack_160;
        uStack_21f = (undefined7)((ulong)lStack_160 >> 8);
        puStack_b0 = (ulong *)0x8000000000000000;
        puStack_238 = puVar2;
        puStack_a8 = puVar13;
        uStack_a0 = uVar6;
        puStack_98 = puVar2;
        FUN_1035d4ab0(&uStack_108,&puStack_b0);
        if ((uStack_108 != 2) || (FUN_103607dc0(&uStack_108,&puStack_238), uStack_108 != 2)) {
          *(undefined1 *)(param_1 + 1) = uStack_100;
          *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_e0,uStack_e7);
          *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_e8,uStack_ef);
          *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_d0,uStack_d7);
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_d8,uStack_df);
          *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_c0,uStack_c7);
          *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_c8,uStack_cf);
          param_1[10] = uStack_b8;
          param_1[9] = CONCAT71(uStack_bf,uStack_c0);
          *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_f0,uStack_f7);
          *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_f8,uStack_ff);
          goto LAB_1035d4cc8;
        }
        if (plStack_1c8 == plStack_1b8) goto LAB_1035d4cc4;
        plVar1 = plStack_1c8;
        puVar13 = (ulong *)*plStack_1c8;
      }
      if (plStack_1b8 != plVar1 + 0xe) {
        FUN_1089223ec(&uStack_108,uVar7,&UNK_10b2b6878,&UNK_10b29b520);
        param_1[5] = CONCAT71(uStack_df,uStack_e0);
        param_1[4] = CONCAT71(uStack_e7,uStack_e8);
        param_1[7] = CONCAT71(uStack_cf,uStack_d0);
        param_1[6] = CONCAT71(uStack_d7,uStack_d8);
        param_1[9] = CONCAT71(uStack_bf,uStack_c0);
        param_1[8] = CONCAT71(uStack_c7,uStack_c8);
        param_1[10] = uStack_b8;
        param_1[1] = CONCAT71(uStack_ff,uStack_100);
        *param_1 = uStack_108;
        param_1[3] = CONCAT71(uStack_ef,uStack_f0);
        param_1[2] = CONCAT71(uStack_f7,uStack_f8);
        goto LAB_1035d4ccc;
      }
    }
LAB_1035d4cc4:
    uStack_108 = 2;
LAB_1035d4cc8:
    *param_1 = uStack_108;
LAB_1035d4ccc:
    FUN_10338a7ec(&puStack_238);
    return;
  }
  uVar6 = param_2[1];
  puVar2 = (ulong *)param_2[2];
  uVar8 = param_2[3];
  puVar13 = puVar2 + uVar8 * 10;
  puVar10 = puVar2;
  puStack_b0 = puVar2;
  uStack_a0 = uVar6;
  puStack_98 = puVar13;
  if (uVar8 == 0) {
LAB_1035d4cd8:
    puVar9 = puVar10;
    if (puVar13 == puVar10) goto LAB_1035d4ce4;
    puStack_a8 = puVar10;
    FUN_1089223ec(&puStack_238,uVar8,&UNK_10b2b6868,&UNK_10b29b520);
    param_1[5] = CONCAT71(uStack_20f,uStack_210);
    param_1[4] = CONCAT71(uStack_217,uStack_218);
    param_1[7] = CONCAT71(uStack_1ff,uStack_200);
    param_1[6] = CONCAT71(uStack_207,uStack_208);
    param_1[9] = CONCAT71(uStack_1ef,uStack_1f0);
    param_1[8] = CONCAT71(uStack_1f7,uStack_1f8);
    param_1[10] = uStack_1e8;
    param_1[1] = CONCAT71(uStack_22f,uStack_230);
    *param_1 = (ulong)puStack_238;
    param_1[3] = CONCAT71(uStack_21f,uStack_220);
    param_1[2] = CONCAT71(uStack_227,uStack_228);
  }
  else {
    uVar12 = uVar8 * 0x50 - 0x50;
    puVar3 = puVar2;
    do {
      puVar10 = puVar3 + 10;
      if (*puVar3 == 0x8000000000000006) goto LAB_1035d4cd8;
      uStack_e8 = (undefined1)puVar3[4];
      uStack_e7 = (undefined7)(puVar3[4] >> 8);
      uStack_f0 = (undefined1)puVar3[3];
      uStack_ef = (undefined7)(puVar3[3] >> 8);
      uStack_d8 = (undefined1)puVar3[6];
      uStack_d7 = (undefined7)(puVar3[6] >> 8);
      uStack_e0 = (undefined1)puVar3[5];
      uStack_df = (undefined7)(puVar3[5] >> 8);
      uStack_c8 = (undefined1)puVar3[8];
      uStack_c7 = (undefined7)(puVar3[8] >> 8);
      uStack_d0 = (undefined1)puVar3[7];
      uStack_cf = (undefined7)(puVar3[7] >> 8);
      uStack_c0 = (undefined1)puVar3[9];
      uStack_bf = (undefined7)(puVar3[9] >> 8);
      uStack_f8 = (undefined1)puVar3[2];
      uStack_f7 = (undefined7)(puVar3[2] >> 8);
      uStack_100 = (undefined1)puVar3[1];
      uStack_ff = (undefined7)(puVar3[1] >> 8);
      uStack_108 = *puVar3;
      FUN_1035d4ab0(&puStack_238,&uStack_108);
      if (puStack_238 != (ulong *)0x2) {
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_210,uStack_217);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_218,uStack_21f);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_200,uStack_207);
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_208,uStack_20f);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_1f0,uStack_1f7);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_1f8,uStack_1ff);
        param_1[10] = uStack_1e8;
        param_1[9] = CONCAT71(uStack_1ef,uStack_1f0);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_220,uStack_227);
        *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_228,uStack_22f);
        *param_1 = (ulong)puStack_238;
        *(undefined1 *)(param_1 + 1) = uStack_230;
        lVar11 = uVar12 / 0x50 + 1;
        while (lVar11 = lVar11 + -1, lVar11 != 0) {
          FUN_10337b6e4(puVar10);
          puVar10 = puVar10 + 10;
        }
        goto joined_r0x0001035d4e84;
      }
      uVar12 = uVar12 - 0x50;
      puVar9 = puVar13;
      puVar3 = puVar10;
    } while (uVar12 != 0xffffffffffffffb0);
LAB_1035d4ce4:
    *param_1 = 2;
    puVar10 = puVar9;
    puStack_a8 = puVar9;
  }
  lVar11 = ((ulong)((long)puVar13 - (long)puVar10) >> 4) * -0x3333333333333333 + 1;
  while (lVar11 = lVar11 + -1, lVar11 != 0) {
    FUN_10337b6e4(puVar10);
    puVar10 = puVar10 + 10;
  }
joined_r0x0001035d4e84:
  if (uVar6 == 0) {
    return;
  }
  _free(puVar2);
  return;
}

