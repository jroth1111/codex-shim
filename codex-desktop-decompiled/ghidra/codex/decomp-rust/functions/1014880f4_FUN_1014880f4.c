
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014880f4(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 *puStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined8 *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined8 *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 (*pauVar5) [16];
  
  if (*param_1 == -0x8000000000000000) {
    uStack_180 = 10;
    lVar7 = func_0x000108a4a0f8(&uStack_180,0,0);
    return lVar7;
  }
  puVar4 = (undefined8 *)_malloc(0x13);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x13);
LAB_101488898:
    func_0x0001087c9084(1,0x1d);
    goto LAB_1014888b4;
  }
  *(undefined4 *)((long)puVar4 + 0xf) = 0x736e6f69;
  puVar4[1] = 0x6973696365645f65;
  *puVar4 = 0x6c62616c69617661;
  uVar10 = 0x8000000000000000;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  auVar1._8_8_ = auStack_130._8_8_;
  auVar1._0_8_ = auStack_130._0_8_;
  auVar13._8_8_ = auStack_190._8_8_;
  auVar13._0_8_ = auStack_190._0_8_;
  param_1[10] = (long)puVar4;
  param_1[0xb] = 0x13;
  param_1[9] = -0x8000000000000000;
  lStack_248 = param_1[0xb];
  lStack_250 = param_1[10];
  uStack_258 = 0x13;
  if (*param_2 == -0x8000000000000000) {
    puStack_1d8 = (undefined8 *)0x8000000000000000;
    goto LAB_10148877c;
  }
  uVar12 = param_2[2];
  lVar7 = uVar12 * 0x48;
  if (0x1c71c71c71c71c7 < uVar12) {
    uVar10 = 0;
LAB_1014881d0:
    func_0x0001087c9084(uVar10,lVar7);
LAB_1014888b4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1014888b8);
    (*pcVar3)();
  }
  puVar11 = (ulong *)param_2[1];
  if (lVar7 == 0) {
    uStack_240 = 0;
    puStack_238 = (undefined8 *)0x8;
    uVar9 = uStack_240;
    puVar4 = puStack_238;
  }
  else {
    puVar4 = (undefined8 *)_malloc(lVar7);
    auVar1._8_8_ = auStack_130._8_8_;
    auVar1._0_8_ = auStack_130._0_8_;
    auVar13._8_8_ = auStack_190._8_8_;
    auVar13._0_8_ = auStack_190._0_8_;
    uVar9 = uVar12;
    if (puVar4 == (undefined8 *)0x0) {
      uVar10 = 8;
      goto LAB_1014881d0;
    }
  }
  puStack_238 = puVar4;
  uStack_240 = uVar9;
  uStack_230 = 0;
  if (uVar12 == 0) {
LAB_10148876c:
    uStack_118 = uStack_230;
    puStack_120 = puStack_238;
    uVar10 = 0x8000000000000004;
    puStack_1d8 = (undefined8 *)uStack_240;
LAB_10148877c:
    uStack_1c8 = uStack_118;
    puStack_1d0 = puStack_120;
    uStack_1b8 = uStack_108;
    uStack_1c0 = uStack_110;
    puStack_1a8 = puStack_f8;
    puStack_1b0 = (undefined *)uStack_100;
    lStack_1a0 = lStack_f0;
    uStack_1e0 = uVar10;
    auStack_190 = auVar13;
    auStack_130 = auVar1;
    FUN_101497a9c(&uStack_180,param_1,&uStack_258,&uStack_1e0);
    uStack_b8 = uStack_170;
    puStack_c0 = puStack_178;
    uStack_a8 = uStack_160;
    uStack_b0 = uStack_168;
    puStack_98 = puStack_150;
    uStack_a0 = uStack_158;
    uStack_88 = uStack_140;
    lStack_90 = lStack_148;
    uStack_80 = uStack_138;
    if (puStack_178 != (undefined8 *)0x8000000000000005) {
      FUN_100de6690(&puStack_c0);
    }
    return 0;
  }
  uStack_230 = 0;
  lVar7 = uVar12 << 5;
  auVar13 = (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  uVar10 = auVar13._8_8_;
  pauVar5 = auVar13._0_8_;
  uVar12 = 0;
LAB_1014882b0:
  uVar9 = *puVar11 ^ 0x8000000000000000;
  if (-1 < (long)*puVar11) {
    uVar9 = 3;
  }
  if ((long)uVar9 < 3) {
    if (uVar9 == 0) {
      puVar4 = (undefined8 *)_malloc(8,uVar10);
      uVar10 = 8;
      if (puVar4 == (undefined8 *)0x0) goto LAB_101488874;
      *puVar4 = 0x6465766f72707061;
      lStack_220 = 8;
    }
    else {
      if (uVar9 == 1) {
        puVar4 = (undefined8 *)_malloc(0x1d,uVar10);
        uVar10 = 0x1d;
        if (puVar4 == (undefined8 *)0x0) goto LAB_101488880;
        puVar4[1] = 0x6c6f70636578655f;
        *puVar4 = 0x6465766f72707061;
        *(undefined8 *)((long)puVar4 + 0x15) = 0x746e656d646e656d;
        *(undefined8 *)((long)puVar4 + 0xd) = 0x615f7963696c6f70;
        if (pauVar5[1][0] == '\x01') {
          auVar13 = *pauVar5;
        }
        else {
          auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(puVar4,0x1d);
          *(long *)(*pauVar5 + 8) = auVar13._8_8_;
          pauVar5[1][0] = 1;
        }
        *(long *)*pauVar5 = auVar13._0_8_ + 1;
        uStack_1c8 = 0;
        puStack_1d0 = (undefined8 *)0x1d;
        uStack_1c0 = 8;
        uStack_1b8 = 0;
        puStack_1a8 = (undefined *)0x0;
        puStack_1b0 = &UNK_109b9f7e8;
        uStack_198 = 0;
        lStack_1a0 = 0;
        uStack_1e0 = 0x1d;
        uVar12 = puVar11[2];
        uVar9 = puVar11[3];
        puStack_1d8 = puVar4;
        auStack_190 = auVar13;
        puVar6 = (undefined8 *)_malloc(0x1d);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[1] = 0x6c6f70636578655f;
          *puVar6 = 0x6465736f706f7270;
          *(undefined8 *)((long)puVar6 + 0x15) = 0x746e656d646e656d;
          *(undefined8 *)((long)puVar6 + 0xd) = 0x615f7963696c6f70;
          uStack_d8 = 0x1d;
          uStack_c8 = 0x1d;
          puStack_d0 = puVar6;
          func_0x000100633f00(&puStack_c0,uVar12,uVar9);
          uVar12 = uStack_b8;
          if (puStack_c0 == (undefined8 *)0x8000000000000005) {
            _free(puVar6);
            lStack_228 = -0x7ffffffffffffffb;
            lStack_220 = uVar12;
            _free(puVar4);
            if ((puStack_1a8 != (undefined *)0x0) && ((long)puStack_1a8 * 9 != -0x11)) {
              _free(puStack_1b0 + (long)puStack_1a8 * -8 + -8);
            }
            func_0x000100cd7284(&uStack_1c8);
            uVar10 = extraout_x1_00;
          }
          else {
            FUN_101497a9c(&uStack_180,&uStack_1c8,&uStack_d8,&puStack_c0);
            uStack_118 = uStack_170;
            puStack_120 = puStack_178;
            uStack_108 = uStack_160;
            uStack_110 = uStack_168;
            puStack_f8 = puStack_150;
            uStack_100 = uStack_158;
            uStack_e8 = uStack_140;
            lStack_f0 = lStack_148;
            uStack_e0 = uStack_138;
            if (puStack_178 != (undefined8 *)0x8000000000000005) {
              FUN_100de6690(&puStack_120);
            }
            uStack_158 = uStack_1b8;
            uStack_160 = uStack_1c0;
            lStack_148 = (long)puStack_1a8;
            puStack_150 = puStack_1b0;
            uStack_138 = uStack_198;
            uStack_140 = lStack_1a0;
            puStack_178 = puStack_1d8;
            uStack_180 = uStack_1e0;
            uStack_168 = uStack_1c8;
            uStack_170 = (ulong)puStack_1d0;
            auStack_130 = auStack_190;
            func_0x000105dc3b04(&lStack_228,&uStack_180);
            uVar10 = extraout_x1_01;
          }
          goto LAB_101488718;
        }
        goto LAB_101488898;
      }
      puVar4 = (undefined8 *)_malloc(0x14,uVar10);
      uVar10 = 0x14;
      if (puVar4 == (undefined8 *)0x0) goto LAB_101488874;
      *(undefined4 *)(puVar4 + 2) = 0x6e6f6973;
      puVar4[1] = 0x7365735f726f665f;
      *puVar4 = 0x6465766f72707061;
      lStack_220 = 0x14;
    }
  }
  else {
    if ((long)uVar9 < 5) {
      if (uVar9 != 3) {
        puVar4 = (undefined8 *)_malloc(6,uVar10);
        uVar10 = 6;
        if (puVar4 == (undefined8 *)0x0) goto LAB_101488874;
        *(undefined2 *)((long)puVar4 + 4) = 0x6465;
        *(undefined4 *)puVar4 = 0x696e6564;
        lStack_220 = 6;
        goto LAB_10148860c;
      }
      puVar4 = (undefined8 *)_malloc(0x18,uVar10);
      uVar10 = 0x18;
      if (puVar4 == (undefined8 *)0x0) {
LAB_101488880:
        func_0x0001087c9084(1,uVar10);
        goto LAB_1014888b4;
      }
      puVar4[1] = 0x615f7963696c6f70;
      *puVar4 = 0x5f6b726f7774656e;
      puVar4[2] = 0x746e656d646e656d;
      if (pauVar5[1][0] == '\x01') {
        auVar13 = *pauVar5;
      }
      else {
        auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar5 + 8) = auVar13._8_8_;
        pauVar5[1][0] = 1;
      }
      *(long *)*pauVar5 = auVar13._0_8_ + 1;
      uStack_1c8 = 0;
      puStack_1d0 = (undefined8 *)0x18;
      uStack_1c0 = 8;
      uStack_1b8 = 0;
      puStack_1a8 = (undefined *)0x0;
      puStack_1b0 = &UNK_109b9f7e8;
      uStack_198 = 0;
      lStack_1a0 = 0;
      uStack_1e0 = 0x18;
      puStack_1d8 = puVar4;
      auStack_190 = auVar13;
      puVar6 = (undefined8 *)_malloc(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x18);
        goto LAB_1014888b4;
      }
      puVar6[1] = 0x615f7963696c6f70;
      *puVar6 = 0x5f6b726f7774656e;
      puVar6[2] = 0x746e656d646e656d;
      uStack_d8 = 0x18;
      uStack_c8 = 0x18;
      puStack_d0 = puVar6;
      func_0x0001006484d0(&puStack_c0,puVar11);
      uVar12 = uStack_b8;
      if (puStack_c0 == (undefined8 *)0x8000000000000005) {
        _free(puVar6);
        lStack_228 = -0x7ffffffffffffffb;
        lStack_220 = uVar12;
        _free(puVar4);
        if ((puStack_1a8 != (undefined *)0x0) && ((long)puStack_1a8 * 9 != -0x11)) {
          _free(puStack_1b0 + (long)puStack_1a8 * -8 + -8);
        }
        func_0x000100cd7284(&uStack_1c8);
        uVar10 = extraout_x1;
      }
      else {
        FUN_101497a9c(&uStack_180,&uStack_1c8,&uStack_d8,&puStack_c0);
        uStack_118 = uStack_170;
        puStack_120 = puStack_178;
        uStack_108 = uStack_160;
        uStack_110 = uStack_168;
        puStack_f8 = puStack_150;
        uStack_100 = uStack_158;
        uStack_e8 = uStack_140;
        lStack_f0 = lStack_148;
        uStack_e0 = uStack_138;
        if (puStack_178 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_120);
        }
        uStack_158 = uStack_1b8;
        uStack_160 = uStack_1c0;
        lStack_148 = (long)puStack_1a8;
        puStack_150 = puStack_1b0;
        uStack_138 = uStack_198;
        uStack_140 = lStack_1a0;
        puStack_178 = puStack_1d8;
        uStack_180 = uStack_1e0;
        uStack_168 = uStack_1c8;
        uStack_170 = (ulong)puStack_1d0;
        auStack_130 = auStack_190;
        func_0x000105dc3b04(&lStack_228,&uStack_180);
        uVar10 = extraout_x1_02;
      }
LAB_101488718:
      lVar2 = lStack_220;
      puVar4 = puStack_238;
      uVar12 = uStack_230;
      if (lStack_228 == -0x7ffffffffffffffb) {
        lVar7 = uStack_230 + 1;
        puVar6 = puStack_238;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_100de6690(puVar6);
          puVar6 = puVar6 + 9;
        }
        if (uStack_240 != 0) {
          _free(puVar4);
        }
        _free(lStack_250);
        return lVar2;
      }
      goto LAB_101488724;
    }
    if (uVar9 == 5) {
      puVar4 = (undefined8 *)_malloc(9,uVar10);
      uVar10 = 9;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar4 + 1) = 0x74;
        *puVar4 = 0x756f5f64656d6974;
        lStack_220 = 9;
        goto LAB_10148860c;
      }
LAB_101488874:
      func_0x0001087c9084(1);
      goto LAB_1014888b4;
    }
    puVar4 = (undefined8 *)_malloc(5,uVar10);
    uVar10 = 5;
    if (puVar4 == (undefined8 *)0x0) goto LAB_101488874;
    *(undefined1 *)((long)puVar4 + 4) = 0x74;
    *(undefined4 *)puVar4 = 0x726f6261;
    lStack_220 = 5;
  }
LAB_10148860c:
  lStack_228 = -0x7ffffffffffffffd;
  puStack_218 = puVar4;
  lStack_210 = lStack_220;
LAB_101488724:
  if (uVar12 == uStack_240) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_240);
    uVar10 = extraout_x1_03;
  }
  plVar8 = puStack_238 + uVar12 * 9;
  plVar8[1] = lStack_220;
  *plVar8 = lStack_228;
  plVar8[3] = lStack_210;
  plVar8[2] = (long)puStack_218;
  plVar8[5] = lStack_200;
  plVar8[4] = lStack_208;
  plVar8[7] = lStack_1f0;
  plVar8[6] = lStack_1f8;
  plVar8[8] = lStack_1e8;
  uVar12 = uVar12 + 1;
  lVar7 = lVar7 + -0x20;
  puVar11 = puVar11 + 4;
  uStack_230 = uVar12;
  auVar13 = auStack_190;
  auVar1 = auStack_130;
  if (lVar7 == 0) goto LAB_10148876c;
  goto LAB_1014882b0;
}

