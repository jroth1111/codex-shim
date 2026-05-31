
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101478ef4(long *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  code *pcVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_d0 = 10;
    lVar18 = func_0x000108a4a0f8(&lStack_d0,0,0);
    return lVar18;
  }
  puVar10 = (undefined8 *)_malloc(8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,8);
LAB_101479dc4:
    func_0x0001087c9084(1,unaff_x20);
    goto LAB_101479dd0;
  }
  *puVar10 = 0x7365727574616566;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar10;
  param_1[0xb] = 8;
  param_1[9] = -0x8000000000000000;
  lStack_248 = param_1[0xb];
  lStack_250 = param_1[10];
  uStack_258 = 8;
  lVar18 = *param_2;
  if (lVar18 == 4) {
    lStack_130 = -0x8000000000000000;
    goto LAB_101478fa4;
  }
  pauVar11 = (undefined1 (*) [16])
             (*
             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
             )();
  if (pauVar11[1][0] == '\x01') {
    auVar21 = *pauVar11;
  }
  else {
    auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar11 + 8) = auVar21._8_8_;
    pauVar11[1][0] = 1;
  }
  *(long *)*pauVar11 = auVar21._0_8_ + 1;
  FUN_105dc99f8(&lStack_d0,0,auVar21._0_8_,auVar21._8_8_);
  uStack_88 = 0x8000000000000000;
  lVar12 = lStack_c8;
  if (lStack_d0 == -0x7fffffffffffffff) goto LAB_101479b80;
  uStack_208 = uStack_98;
  uStack_210 = uStack_a0;
  uStack_1f8 = 0x8000000000000000;
  uStack_200 = uStack_90;
  uStack_1e8 = uStack_78;
  puStack_1f0 = puStack_80;
  uStack_228 = uStack_b8;
  uStack_230 = uStack_c0;
  uStack_218 = uStack_a8;
  uStack_220 = uStack_b0;
  lStack_240 = lStack_d0;
  lStack_238 = lStack_c8;
  if (lVar18 == 3) {
LAB_1014794f0:
    lVar18 = param_2[0x24];
    if (lVar18 != -0x7ffffffffffffffe) {
      if (lStack_240 == -0x8000000000000000) goto LAB_101479ce0;
      unaff_x20 = 0x16;
      puVar10 = (undefined8 *)_malloc(0x16);
      if (puVar10 == (undefined8 *)0x0) goto LAB_101479dc4;
      puVar10[1] = 0x766f5f687461705f;
      *puVar10 = 0x70636d5f73707061;
      *(undefined8 *)((long)puVar10 + 0xe) = 0x656469727265766f;
      if ((uStack_1f8 != 0x8000000000000000) && (uStack_1f8 != 0)) {
        _free(puStack_1f0);
      }
      uStack_1e8 = 0x16;
      uStack_1f8 = 0x8000000000000000;
      uStack_180 = 0x16;
      uStack_190 = 0x16;
      puStack_1f0 = puVar10;
      puStack_188 = puVar10;
      if (lVar18 == -0x7fffffffffffffff) {
        uStack_170 = (undefined1)param_2[0x25];
        lStack_178 = -0x7fffffffffffffff;
LAB_101479598:
        FUN_101497a9c(&lStack_d0,&lStack_240,&uStack_190,&lStack_178);
        uStack_1d8 = uStack_c0;
        lStack_1e0 = lStack_c8;
        uStack_1c8 = uStack_b0;
        uStack_1d0 = uStack_b8;
        uStack_1b8 = uStack_a0;
        uStack_1c0 = uStack_a8;
        uStack_1a8 = uStack_90;
        uStack_1b0 = uStack_98;
        uStack_1a0 = uStack_88;
        if (lStack_c8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_1e0);
        }
      }
      else {
        cVar1 = (char)param_2[0x27];
        cVar9 = cVar1 != '\x02';
        if (lVar18 != -0x8000000000000000) {
          cVar9 = cVar9 + '\x01';
        }
        if (pauVar11[1][0] == '\x01') {
          auVar21 = *pauVar11;
        }
        else {
          auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar11 + 8) = auVar21._8_8_;
          pauVar11[1][0] = 1;
        }
        *(long *)*pauVar11 = auVar21._0_8_ + 1;
        FUN_105dc99f8(&lStack_d0,cVar9,auVar21._0_8_,auVar21._8_8_);
        uStack_88 = 0x8000000000000000;
        lVar12 = lStack_c8;
        if (lStack_d0 != -0x7fffffffffffffff) {
          uStack_f8 = uStack_98;
          uStack_100 = uStack_a0;
          uStack_e8 = 0x8000000000000000;
          uStack_f0 = uStack_90;
          uStack_d8 = uStack_78;
          puStack_e0 = puStack_80;
          uStack_118 = uStack_b8;
          uStack_120 = uStack_c0;
          uStack_108 = uStack_a8;
          uStack_110 = uStack_b0;
          lStack_130 = lStack_d0;
          lStack_128 = lStack_c8;
          if (cVar1 == '\x02') {
LAB_101479694:
            if (lVar18 != -0x8000000000000000) {
              if (lStack_130 == -0x8000000000000000) goto LAB_1014796ac;
              lVar12 = func_0x000100643448(&lStack_130,&UNK_108c61038,4,param_2 + 0x24);
              if (lVar12 != 0) goto LAB_1014796c8;
            }
            uStack_a8 = uStack_108;
            uStack_b0 = uStack_110;
            uStack_98 = uStack_f8;
            uStack_a0 = uStack_100;
            uStack_88 = uStack_e8;
            uStack_90 = uStack_f0;
            uStack_78 = uStack_d8;
            puStack_80 = puStack_e0;
            lStack_c8 = lStack_128;
            lStack_d0 = lStack_130;
            uStack_b8 = uStack_118;
            uStack_c0 = uStack_120;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (&lStack_178,&lStack_d0);
            if (lStack_178 != -0x7ffffffffffffffb) goto LAB_101479598;
            lVar12 = CONCAT71(uStack_16f,uStack_170);
          }
          else {
            if (lStack_d0 == -0x8000000000000000) {
LAB_1014796ac:
              lStack_d0 = 10;
              lVar12 = func_0x000108a4a0f8(&lStack_d0,0,0);
            }
            else {
              lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108ca2209,7,cVar1);
              if (lVar12 == 0) goto LAB_101479694;
            }
LAB_1014796c8:
            FUN_100e040f0(&lStack_130);
          }
        }
        _free(puStack_188);
        if (lVar12 != 0) goto LAB_101479b78;
      }
    }
    if (lStack_240 == -0x8000000000000000) {
LAB_101479ce0:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
      goto LAB_101479dd0;
    }
    unaff_x20 = 0xd;
    puVar10 = (undefined8 *)_malloc(0xd);
    if (puVar10 == (undefined8 *)0x0) goto LAB_101479dc4;
    *puVar10 = 0x5f6b726f7774656e;
    *(undefined8 *)((long)puVar10 + 5) = 0x79786f72705f6b72;
    if ((uStack_1f8 != 0x8000000000000000) && (uStack_1f8 != 0)) {
      _free(puStack_1f0);
    }
    uStack_1e8 = 0xd;
    uStack_1f8 = 0x8000000000000000;
    uStack_180 = 0xd;
    uStack_190 = 0xd;
    lVar18 = param_2[0x15];
    puStack_1f0 = puVar10;
    puStack_188 = puVar10;
    if (lVar18 == 3) {
      lStack_178 = -0x8000000000000000;
LAB_1014797e4:
      FUN_101497a9c(&lStack_d0,&lStack_240,&uStack_190,&lStack_178);
      uStack_1d8 = uStack_c0;
      lStack_1e0 = lStack_c8;
      uStack_1c8 = uStack_b0;
      uStack_1d0 = uStack_b8;
      uStack_1b8 = uStack_a0;
      uStack_1c0 = uStack_a8;
      uStack_1a8 = uStack_90;
      uStack_1b0 = uStack_98;
      uStack_1a0 = uStack_88;
      if (lStack_c8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_1e0);
      }
    }
    else {
      if (lVar18 == 2) {
        uStack_170 = (undefined1)param_2[0x16];
        lStack_178 = -0x7fffffffffffffff;
        goto LAB_1014797e4;
      }
      lVar19 = param_2[0x1d];
      cVar9 = (char)param_2[0x23];
      lVar12 = lVar18;
      if (cVar9 != '\x02') {
        lVar12 = lVar18 + 1;
      }
      cVar1 = *(char *)((long)param_2 + 0x119);
      if (lVar19 != -0x8000000000000000) {
        lVar12 = lVar12 + 1;
      }
      lVar16 = param_2[0x20];
      if (cVar1 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      cVar2 = *(char *)((long)param_2 + 0x11a);
      if (lVar16 != -0x8000000000000000) {
        lVar12 = lVar12 + 1;
      }
      cVar3 = *(char *)((long)param_2 + 0x11b);
      if (cVar2 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      cVar4 = *(char *)((long)param_2 + 0x11c);
      if (cVar3 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      cVar5 = *(char *)((long)param_2 + 0x11d);
      if (cVar4 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      cVar6 = *(char *)((long)param_2 + 0x11e);
      if (cVar5 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      lVar13 = param_2[0x19];
      cVar7 = *(char *)((long)param_2 + 0x11f);
      lVar12 = lVar12 + lVar13;
      if (cVar6 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      if (cVar7 != '\x02') {
        lVar12 = lVar12 + 1;
      }
      if (pauVar11[1][0] == '\x01') {
        auVar21 = *pauVar11;
      }
      else {
        auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar11 + 8) = auVar21._8_8_;
        pauVar11[1][0] = 1;
      }
      *(long *)*pauVar11 = auVar21._0_8_ + 1;
      FUN_105dc99f8(&lStack_d0,lVar12,auVar21._0_8_,auVar21._8_8_);
      uStack_88 = 0x8000000000000000;
      lVar12 = lStack_c8;
      if (lStack_d0 == -0x7fffffffffffffff) {
LAB_101479b6c:
        _free(puStack_188);
      }
      else {
        uStack_f8 = uStack_98;
        uStack_100 = uStack_a0;
        uStack_e8 = 0x8000000000000000;
        uStack_f0 = uStack_90;
        uStack_d8 = uStack_78;
        puStack_e0 = puStack_80;
        uStack_118 = uStack_b8;
        uStack_120 = uStack_c0;
        uStack_108 = uStack_a8;
        uStack_110 = uStack_b0;
        lStack_130 = lStack_d0;
        lStack_128 = lStack_c8;
        if (cVar9 != '\x02') {
          if (lStack_d0 == -0x8000000000000000) {
LAB_101479b48:
            lStack_d0 = 10;
            lVar12 = func_0x000108a4a0f8(&lStack_d0,0,0);
          }
          else {
            lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108ca2209,7,cVar9);
            if (lVar12 == 0) goto LAB_101479a04;
          }
LAB_101479b64:
          FUN_100e040f0(&lStack_130);
          goto LAB_101479b6c;
        }
LAB_101479a04:
        if (lVar19 != -0x8000000000000000) {
          if (lStack_130 == -0x8000000000000000) goto LAB_101479b48;
          lVar12 = func_0x000100643448(&lStack_130,&UNK_108cabfa3,9,param_2 + 0x1d);
          if (lVar12 != 0) goto LAB_101479b64;
        }
        if (cVar1 != '\x02') {
          if (lStack_130 == -0x8000000000000000) goto LAB_101479b48;
          lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108cabfac,0xd,cVar1);
          if (lVar12 != 0) goto LAB_101479b64;
        }
        if (lVar16 != -0x8000000000000000) {
          if (lStack_130 == -0x8000000000000000) goto LAB_101479b48;
          lVar12 = func_0x000100643448(&lStack_130,&UNK_108cabfb9,9,param_2 + 0x20);
          if (lVar12 != 0) goto LAB_101479b64;
        }
        if (cVar2 != '\x02') {
          if (lStack_130 == -0x8000000000000000) goto LAB_101479b48;
          lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108cabfc2,0x11,cVar2);
          if (lVar12 != 0) goto LAB_101479b64;
        }
        if (cVar3 != '\x02') {
          if (lStack_130 == -0x8000000000000000) goto LAB_101479b48;
          lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108ca2223,0x14,cVar3);
          if (lVar12 != 0) goto LAB_101479b64;
        }
        if (cVar4 != '\x02') {
          if (lStack_130 == -0x8000000000000000) goto LAB_101479b48;
          lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108ca2237,0x24,cVar4);
          if (lVar12 != 0) goto LAB_101479b64;
        }
        if ((((((cVar5 != '\x02') &&
               (lVar12 = FUN_101486eb8(&lStack_130,&UNK_108ca225b,0x22,cVar5), lVar12 != 0)) ||
              ((cVar6 != '\x02' && (lVar12 = func_0x00010148d998(&lStack_130,cVar6), lVar12 != 0))))
             || ((lVar18 != 0 &&
                 (lVar12 = func_0x000101485e0c(&lStack_130,param_2 + 0x15), lVar12 != 0)))) ||
            ((lVar13 != 0 && (lVar12 = FUN_10146ad10(&lStack_130,param_2 + 0x19), lVar12 != 0)))) ||
           ((cVar7 != '\x02' &&
            (lVar12 = FUN_101486eb8(&lStack_130,&UNK_108ca22db,0x13,cVar7), lVar12 != 0))))
        goto LAB_101479b64;
        uStack_a8 = uStack_108;
        uStack_b0 = uStack_110;
        uStack_98 = uStack_f8;
        uStack_a0 = uStack_100;
        uStack_88 = uStack_e8;
        uStack_90 = uStack_f0;
        uStack_78 = uStack_d8;
        puStack_80 = puStack_e0;
        lStack_c8 = lStack_128;
        lStack_d0 = lStack_130;
        uStack_b8 = uStack_118;
        uStack_c0 = uStack_120;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_178,&lStack_d0);
        if (lStack_178 != -0x7ffffffffffffffb) goto LAB_1014797e4;
        lVar12 = CONCAT71(uStack_16f,uStack_170);
        _free(puStack_188);
      }
      if (lVar12 != 0) goto LAB_101479b78;
    }
    lVar12 = FUN_10063330c(&lStack_240,param_2 + 0x28);
    if (lVar12 == 0) {
      uStack_a8 = uStack_218;
      uStack_b0 = uStack_220;
      uStack_98 = uStack_208;
      uStack_a0 = uStack_210;
      uStack_88 = uStack_1f8;
      uStack_90 = uStack_200;
      uStack_78 = uStack_1e8;
      puStack_80 = puStack_1f0;
      lStack_c8 = lStack_238;
      lStack_d0 = lStack_240;
      uStack_b8 = uStack_228;
      uStack_c0 = uStack_230;
      if (lStack_240 == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_101479dd0:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101479dd4);
        (*pcVar8)();
      }
      uStack_108 = uStack_218;
      uStack_110 = uStack_220;
      uStack_f8 = uStack_208;
      uStack_100 = uStack_210;
      uStack_f0 = uStack_200;
      lStack_128 = lStack_238;
      lStack_130 = lStack_240;
      uStack_118 = uStack_228;
      uStack_120 = uStack_230;
      if ((uStack_1f8 & 0x7fffffffffffffff) != 0) {
        _free(puStack_1f0);
      }
      lVar12 = lStack_128;
      if (lStack_130 != -0x7ffffffffffffffb) {
LAB_101478fa4:
        FUN_101497a9c(&lStack_d0,param_1,&uStack_258,&lStack_130);
        lStack_238 = uStack_c0;
        lStack_240 = lStack_c8;
        uStack_228 = uStack_b0;
        uStack_230 = uStack_b8;
        uStack_218 = uStack_a0;
        uStack_220 = uStack_a8;
        uStack_208 = uStack_90;
        uStack_210 = uStack_98;
        uStack_200 = uStack_88;
        if (lStack_c8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_240);
        }
        return 0;
      }
      goto LAB_101479b80;
    }
  }
  else {
    if (lStack_d0 == -0x8000000000000000) goto LAB_101479ce0;
    unaff_x20 = 0xe;
    puVar10 = (undefined8 *)_malloc(0xe);
    if (puVar10 == (undefined8 *)0x0) goto LAB_101479dc4;
    *puVar10 = 0x67615f69746c756d;
    *(undefined8 *)((long)puVar10 + 6) = 0x32765f746e656761;
    if ((uStack_1f8 != 0x8000000000000000) && (uStack_1f8 != 0)) {
      _free(puStack_1f0);
    }
    uStack_1e8 = 0xe;
    uStack_1f8 = 0x8000000000000000;
    uStack_180 = 0xe;
    uStack_190 = 0xe;
    puStack_1f0 = puVar10;
    puStack_188 = puVar10;
    if (lVar18 == 2) {
      uStack_170 = (undefined1)param_2[1];
      lStack_178 = -0x7fffffffffffffff;
LAB_101479100:
      FUN_101497a9c(&lStack_d0,&lStack_240,&uStack_190,&lStack_178);
      uStack_1d8 = uStack_c0;
      lStack_1e0 = lStack_c8;
      uStack_1c8 = uStack_b0;
      uStack_1d0 = uStack_b8;
      uStack_1b8 = uStack_a0;
      uStack_1c0 = uStack_a8;
      uStack_1a8 = uStack_90;
      uStack_1b0 = uStack_98;
      uStack_1a0 = uStack_88;
      if (lStack_c8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_1e0);
      }
      goto LAB_1014794f0;
    }
    lVar19 = param_2[8];
    cVar9 = (char)param_2[0x14];
    lVar20 = param_2[2];
    lVar13 = param_2[4];
    lVar16 = param_2[6];
    cVar1 = *(char *)((long)param_2 + 0xa1);
    lVar12 = lVar20 + lVar18;
    if (cVar9 != '\x02') {
      lVar12 = lVar12 + 1;
    }
    lVar12 = lVar12 + lVar13 + lVar16;
    if (cVar1 != '\x02') {
      lVar12 = lVar12 + 1;
    }
    lVar14 = param_2[0xb];
    if (lVar19 != -0x8000000000000000) {
      lVar12 = lVar12 + 1;
    }
    lVar17 = param_2[0xe];
    if (lVar14 != -0x8000000000000000) {
      lVar12 = lVar12 + 1;
    }
    lVar15 = param_2[0x11];
    if (lVar17 != -0x8000000000000000) {
      lVar12 = lVar12 + 1;
    }
    cVar2 = *(char *)((long)param_2 + 0xa2);
    if (lVar15 != -0x8000000000000000) {
      lVar12 = lVar12 + 1;
    }
    cVar3 = *(char *)((long)param_2 + 0xa3);
    if (cVar2 != '\x02') {
      lVar12 = lVar12 + 1;
    }
    if (cVar3 != '\x02') {
      lVar12 = lVar12 + 1;
    }
    if (pauVar11[1][0] == '\x01') {
      auVar21 = *pauVar11;
    }
    else {
      auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar11 + 8) = auVar21._8_8_;
      pauVar11[1][0] = 1;
    }
    *(long *)*pauVar11 = auVar21._0_8_ + 1;
    FUN_105dc99f8(&lStack_d0,lVar12,auVar21._0_8_,auVar21._8_8_);
    uStack_88 = 0x8000000000000000;
    lVar12 = lStack_c8;
    if (lStack_d0 == -0x7fffffffffffffff) {
LAB_1014794e4:
      _free(puStack_188);
    }
    else {
      uStack_f8 = uStack_98;
      uStack_100 = uStack_a0;
      uStack_e8 = 0x8000000000000000;
      uStack_f0 = uStack_90;
      uStack_d8 = uStack_78;
      puStack_e0 = puStack_80;
      uStack_118 = uStack_b8;
      uStack_120 = uStack_c0;
      uStack_108 = uStack_a8;
      uStack_110 = uStack_b0;
      lStack_130 = lStack_d0;
      lStack_128 = lStack_c8;
      if (cVar9 != '\x02') {
        if (lStack_d0 == -0x8000000000000000) {
LAB_1014792d0:
          lStack_d0 = 10;
          lVar12 = func_0x000108a4a0f8(&lStack_d0,0,0);
        }
        else {
          lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108ca2209,7,cVar9);
          if (lVar12 == 0) goto LAB_1014792bc;
        }
LAB_1014794dc:
        FUN_100e040f0(&lStack_130);
        goto LAB_1014794e4;
      }
LAB_1014792bc:
      if (lVar18 != 0) {
        if (lStack_130 == -0x8000000000000000) goto LAB_1014792d0;
        lVar12 = func_0x00010063b76c(&lStack_130,&UNK_108cad63e,0x22,1,param_2[1]);
        if (lVar12 != 0) goto LAB_1014794dc;
      }
      if ((((lVar20 != 0) &&
           (lVar12 = func_0x00010147c3f4(&lStack_130,&UNK_108cad660,0x13,1,param_2[3]), lVar12 != 0)
           ) || ((lVar13 != 0 &&
                 (lVar12 = func_0x00010147c3f4(&lStack_130,&UNK_108cad673,0x13,1,param_2[5]),
                 lVar12 != 0)))) ||
         ((lVar16 != 0 &&
          (lVar12 = func_0x00010147c3f4(&lStack_130,&UNK_108cad686,0x17,1,param_2[7]), lVar12 != 0))
         )) goto LAB_1014794dc;
      if (cVar1 != '\x02') {
        if (lStack_130 == -0x8000000000000000) goto LAB_1014792d0;
        lVar12 = func_0x0001006384d0(&lStack_130,&UNK_108cad69d,0x12,cVar1);
        if (lVar12 != 0) goto LAB_1014794dc;
      }
      if (((((lVar19 != -0x8000000000000000) &&
            (lVar12 = FUN_10147d38c(&lStack_130,&UNK_108cad6af,0xf,param_2 + 8), lVar12 != 0)) ||
           ((lVar14 != -0x8000000000000000 &&
            (lVar12 = FUN_10147d38c(&lStack_130,&UNK_108cad6be,0x1a,param_2 + 0xb), lVar12 != 0))))
          || (((lVar17 != -0x8000000000000000 &&
               (lVar12 = FUN_10147d38c(&lStack_130,&UNK_108cad6d8,0x18,param_2 + 0xe), lVar12 != 0))
              || ((lVar15 != -0x8000000000000000 &&
                  (lVar12 = FUN_10147d38c(&lStack_130,&UNK_108cad6f0,0xe,param_2 + 0x11),
                  lVar12 != 0)))))) ||
         (((cVar2 != '\x02' &&
           (lVar12 = FUN_101486eb8(&lStack_130,&UNK_108cad6fe,0x19,cVar2), lVar12 != 0)) ||
          ((cVar3 != '\x02' &&
           (lVar12 = FUN_101486eb8(&lStack_130,&UNK_108cad717,0x12,cVar3), lVar12 != 0))))))
      goto LAB_1014794dc;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      uStack_98 = uStack_f8;
      uStack_a0 = uStack_100;
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      puStack_80 = puStack_e0;
      lStack_c8 = lStack_128;
      lStack_d0 = lStack_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                (&lStack_178,&lStack_d0);
      if (lStack_178 != -0x7ffffffffffffffb) goto LAB_101479100;
      lVar12 = CONCAT71(uStack_16f,uStack_170);
      _free(puStack_188);
    }
    if (lVar12 == 0) goto LAB_1014794f0;
  }
LAB_101479b78:
  FUN_100e040f0(&lStack_240);
LAB_101479b80:
  _free(lStack_250);
  return lVar12;
}

