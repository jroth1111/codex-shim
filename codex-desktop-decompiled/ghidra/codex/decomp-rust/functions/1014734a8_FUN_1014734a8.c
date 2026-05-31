
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014734a8(long *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_d0 = 10;
    lVar4 = func_0x000108a4a0f8(&lStack_d0,0,0);
    return lVar4;
  }
  lVar4 = _malloc(param_3);
  if (lVar4 == 0) {
    func_0x0001087c9084(1,param_3);
    lVar4 = param_3;
  }
  else {
    _memcpy(lVar4,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar4;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_1a0 = param_1[0xb];
    lStack_1a8 = param_1[10];
    lVar4 = param_5 * 0x48;
    lStack_1b0 = param_3;
    if (0x1c71c71c71c71c7 < param_5) {
      uVar5 = 0;
      goto LAB_10147355c;
    }
    if (lVar4 == 0) {
      uStack_198 = 0;
      lStack_190 = 8;
joined_r0x0001014735ac:
      uStack_188 = 0;
      if (param_5 != 0) {
        uStack_188 = 0;
        lVar4 = param_5 * 0x50;
        pauVar6 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        puVar10 = (undefined8 *)(param_4 + 0x28);
        do {
          lVar9 = puVar10[-5];
          if (lVar9 < 2) {
            if (lVar9 == 0) {
              if (pauVar6[1][0] == '\x01') {
                auVar11 = *pauVar6;
              }
              else {
                auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar6 + 8) = auVar11._8_8_;
                pauVar6[1][0] = 1;
              }
              *(long *)*pauVar6 = auVar11._0_8_ + 1;
              FUN_105dc99f8(&lStack_d0,4,auVar11._0_8_,auVar11._8_8_);
              uStack_88 = 0x8000000000000000;
              if (lStack_d0 != -0x7fffffffffffffff) {
                uStack_f8 = uStack_98;
                uStack_100 = uStack_a0;
                uStack_e8 = 0x8000000000000000;
                uStack_f0 = uStack_90;
                uStack_d8 = uStack_78;
                uStack_e0 = uStack_80;
                uStack_118 = uStack_b8;
                lStack_120 = uStack_c0;
                uStack_108 = uStack_a8;
                uStack_110 = uStack_b0;
                lStack_130 = lStack_d0;
                uStack_128 = lStack_c8;
                if (lStack_d0 == -0x8000000000000000) {
LAB_101473684:
                  lStack_d0 = 10;
                  lVar9 = func_0x000108a4a0f8(&lStack_d0,0,0);
                }
                else {
                  lVar9 = func_0x0001006358e0(&lStack_130,&UNK_108cde34c,4,&UNK_108c60fec,4);
                  if (lVar9 == 0) {
                    if (lStack_130 == -0x8000000000000000) goto LAB_101473684;
                    lVar9 = FUN_10063fe00(&lStack_130,&UNK_108cade40,3,puVar10[-3],puVar10[-2]);
                    if (lVar9 == 0) {
                      if (lStack_130 == -0x8000000000000000) goto LAB_101473684;
                      lVar9 = FUN_10063fe00(&lStack_130,&UNK_108c61018,4,*puVar10,puVar10[1]);
                      if (lVar9 == 0) {
                        if (lStack_130 == -0x8000000000000000) goto LAB_101473684;
                        lVar9 = func_0x0001006437e8(&lStack_130,&UNK_108c61038,4,puVar10[3],
                                                    puVar10[4]);
                        if (lVar9 == 0) {
                          uStack_a8 = uStack_108;
                          uStack_b0 = uStack_110;
                          uStack_98 = uStack_f8;
                          uStack_a0 = uStack_100;
                          uStack_88 = uStack_e8;
                          uStack_90 = uStack_f0;
                          uStack_78 = uStack_d8;
                          uStack_80 = uStack_e0;
                          lStack_c8 = uStack_128;
                          lStack_d0 = lStack_130;
                          uStack_b8 = uStack_118;
                          uStack_c0 = lStack_120;
                          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                                    (&lStack_180,&lStack_d0);
                          goto LAB_1014737c8;
                        }
                      }
                    }
                  }
                }
                lStack_180 = -0x7ffffffffffffffb;
                lStack_178 = lVar9;
                FUN_100e040f0(&lStack_130);
                goto LAB_1014737c8;
              }
            }
            else {
              if (pauVar6[1][0] == '\x01') {
                auVar11 = *pauVar6;
              }
              else {
                auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar6 + 8) = auVar11._8_8_;
                pauVar6[1][0] = 1;
              }
              *(long *)*pauVar6 = auVar11._0_8_ + 1;
              FUN_105dc99f8(&lStack_d0,3,auVar11._0_8_,auVar11._8_8_);
              uStack_88 = 0x8000000000000000;
              if (lStack_d0 != -0x7fffffffffffffff) {
                uStack_f8 = uStack_98;
                uStack_100 = uStack_a0;
                uStack_e8 = 0x8000000000000000;
                uStack_f0 = uStack_90;
                uStack_d8 = uStack_78;
                uStack_e0 = uStack_80;
                uStack_118 = uStack_b8;
                lStack_120 = uStack_c0;
                uStack_108 = uStack_a8;
                uStack_110 = uStack_b0;
                lStack_130 = lStack_d0;
                uStack_128 = lStack_c8;
                if (lStack_d0 == -0x8000000000000000) {
LAB_101473774:
                  lStack_d0 = 10;
                  lVar9 = func_0x000108a4a0f8(&lStack_d0,0,0);
                }
                else {
                  lVar9 = func_0x0001006358e0(&lStack_130,&UNK_108cde34c,4,&UNK_108cade43,10);
                  if (lVar9 == 0) {
                    if (lStack_130 == -0x8000000000000000) goto LAB_101473774;
                    lVar9 = FUN_10063fe00(&lStack_130,&UNK_108cade40,3,*puVar10,puVar10[1]);
                    if (lVar9 == 0) {
                      if (lStack_130 == -0x8000000000000000) goto LAB_101473774;
                      lVar9 = func_0x000100643448(&lStack_130,&UNK_108c61038,4,puVar10 + -4);
                      if (lVar9 == 0) {
                        uStack_a8 = uStack_108;
                        uStack_b0 = uStack_110;
                        uStack_98 = uStack_f8;
                        uStack_a0 = uStack_100;
                        uStack_88 = uStack_e8;
                        uStack_90 = uStack_f0;
                        uStack_78 = uStack_d8;
                        uStack_80 = uStack_e0;
                        lStack_c8 = uStack_128;
                        lStack_d0 = lStack_130;
                        uStack_b8 = uStack_118;
                        uStack_c0 = lStack_120;
                        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                                  (&lStack_180,&lStack_d0);
                        goto LAB_1014737c8;
                      }
                    }
                  }
                }
                lStack_180 = -0x7ffffffffffffffb;
                lStack_178 = lVar9;
                FUN_100e040f0(&lStack_130);
                goto LAB_1014737c8;
              }
            }
LAB_1014737c4:
            uStack_88 = 0x8000000000000000;
            lStack_180 = -0x7ffffffffffffffb;
            lStack_178 = lStack_c8;
          }
          else if (lVar9 == 2) {
            if (pauVar6[1][0] == '\x01') {
              auVar11 = *pauVar6;
            }
            else {
              auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar6 + 8) = auVar11._8_8_;
              pauVar6[1][0] = 1;
            }
            *(long *)*pauVar6 = auVar11._0_8_ + 1;
            FUN_105dc99f8(&lStack_d0,4,auVar11._0_8_,auVar11._8_8_);
            uStack_88 = 0x8000000000000000;
            if (lStack_d0 == -0x7fffffffffffffff) goto LAB_1014737c4;
            uStack_f8 = uStack_98;
            uStack_100 = uStack_a0;
            uStack_e8 = 0x8000000000000000;
            uStack_f0 = uStack_90;
            uStack_d8 = uStack_78;
            uStack_e0 = uStack_80;
            uStack_118 = uStack_b8;
            lStack_120 = uStack_c0;
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            lStack_130 = lStack_d0;
            uStack_128 = lStack_c8;
            if (lStack_d0 == -0x8000000000000000) {
LAB_101473700:
              lStack_d0 = 10;
              lVar9 = func_0x000108a4a0f8(&lStack_d0,0,0);
            }
            else {
              lVar9 = func_0x0001006358e0(&lStack_130,&UNK_108cde34c,4,&UNK_108cade4d,6);
              if (lVar9 == 0) {
                if (lStack_130 == -0x8000000000000000) goto LAB_101473700;
                lVar9 = FUN_10063fe00(&lStack_130,&UNK_108cade40,3,puVar10[3],puVar10[4]);
                if (lVar9 == 0) {
                  if (lStack_130 == -0x8000000000000000) goto LAB_101473700;
                  lVar9 = func_0x000100643448(&lStack_130,&UNK_108cabfee,5,puVar10 + -4);
                  if (lVar9 == 0) {
                    if (lStack_130 == -0x8000000000000000) goto LAB_101473700;
                    lVar9 = func_0x000100643448(&lStack_130,&UNK_108c61038,4,puVar10 + -1);
                    if (lVar9 == 0) {
                      uStack_a8 = uStack_108;
                      uStack_b0 = uStack_110;
                      uStack_98 = uStack_f8;
                      uStack_a0 = uStack_100;
                      uStack_88 = uStack_e8;
                      uStack_90 = uStack_f0;
                      uStack_78 = uStack_d8;
                      uStack_80 = uStack_e0;
                      lStack_c8 = uStack_128;
                      lStack_d0 = lStack_130;
                      uStack_b8 = uStack_118;
                      uStack_c0 = lStack_120;
                      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                                (&lStack_180,&lStack_d0);
                      goto LAB_1014737c8;
                    }
                  }
                }
              }
            }
            lStack_180 = -0x7ffffffffffffffb;
            lStack_178 = lVar9;
            FUN_100e040f0(&lStack_130);
          }
          else {
            if (pauVar6[1][0] == '\x01') {
              auVar11 = *pauVar6;
            }
            else {
              auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar6 + 8) = auVar11._8_8_;
              pauVar6[1][0] = 1;
            }
            *(long *)*pauVar6 = auVar11._0_8_ + 1;
            FUN_105dc99f8(&lStack_d0,2,auVar11._0_8_,auVar11._8_8_);
            uStack_88 = 0x8000000000000000;
            if (lStack_d0 == -0x7fffffffffffffff) goto LAB_1014737c4;
            uStack_f8 = uStack_98;
            uStack_100 = uStack_a0;
            uStack_e8 = 0x8000000000000000;
            uStack_f0 = uStack_90;
            uStack_d8 = uStack_78;
            uStack_e0 = uStack_80;
            uStack_118 = uStack_b8;
            lStack_120 = uStack_c0;
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            lStack_130 = lStack_d0;
            uStack_128 = lStack_c8;
            if (lStack_d0 == -0x8000000000000000) {
LAB_101473814:
              lStack_d0 = 10;
              lVar9 = func_0x000108a4a0f8(&lStack_d0,0,0);
            }
            else {
              lVar9 = func_0x0001006358e0(&lStack_130,&UNK_108cde34c,4,&UNK_108ca7eab,7);
              if (lVar9 == 0) {
                if (lStack_130 == -0x8000000000000000) goto LAB_101473814;
                lVar9 = FUN_10063fe00(&lStack_130,&UNK_108cade40,3,puVar10[-3],puVar10[-2]);
                if (lVar9 != 0) goto LAB_1014738f0;
                uStack_a8 = uStack_108;
                uStack_b0 = uStack_110;
                uStack_98 = uStack_f8;
                uStack_a0 = uStack_100;
                uStack_88 = uStack_e8;
                uStack_90 = uStack_f0;
                uStack_78 = uStack_d8;
                uStack_80 = uStack_e0;
                lStack_c8 = uStack_128;
                lStack_d0 = lStack_130;
                uStack_b8 = uStack_118;
                uStack_c0 = lStack_120;
                __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                          (&lStack_180,&lStack_d0);
                goto LAB_1014737c8;
              }
            }
LAB_1014738f0:
            lStack_180 = -0x7ffffffffffffffb;
            lStack_178 = lVar9;
            FUN_100e040f0(&lStack_130);
          }
LAB_1014737c8:
          lVar2 = lStack_178;
          uVar1 = uStack_188;
          lVar9 = lStack_190;
          if (lStack_180 == -0x7ffffffffffffffb) {
            lVar4 = uStack_188 + 1;
            lVar7 = lStack_190;
            while (lVar4 = lVar4 + -1, lVar4 != 0) {
              FUN_100de6690(lVar7);
              lVar7 = lVar7 + 0x48;
            }
            if (uStack_198 != 0) {
              _free(lVar9);
            }
            _free(lStack_1a8);
            return lVar2;
          }
          if (uStack_188 == uStack_198) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_198);
          }
          plVar8 = (long *)(lStack_190 + uVar1 * 0x48);
          plVar8[1] = lStack_178;
          *plVar8 = lStack_180;
          plVar8[3] = lStack_168;
          plVar8[2] = lStack_170;
          plVar8[5] = lStack_158;
          plVar8[4] = lStack_160;
          plVar8[7] = lStack_148;
          plVar8[6] = lStack_150;
          plVar8[8] = lStack_140;
          uStack_188 = uVar1 + 1;
          puVar10 = puVar10 + 10;
          lVar4 = lVar4 + -0x50;
        } while (lVar4 != 0);
      }
      uStack_118 = uStack_188;
      lStack_120 = lStack_190;
      lStack_130 = -0x7ffffffffffffffc;
      uStack_128 = uStack_198;
      FUN_101497a9c(&lStack_d0,param_1,&lStack_1b0,&lStack_130);
      lStack_178 = uStack_c0;
      lStack_180 = lStack_c8;
      lStack_168 = uStack_b0;
      lStack_170 = uStack_b8;
      lStack_158 = uStack_a0;
      lStack_160 = uStack_a8;
      lStack_148 = uStack_90;
      lStack_150 = uStack_98;
      lStack_140 = uStack_88;
      if (lStack_c8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_180);
      }
      return 0;
    }
    lStack_190 = _malloc(lVar4);
    uStack_198 = param_5;
    if (lStack_190 != 0) goto joined_r0x0001014735ac;
  }
  uVar5 = 8;
LAB_10147355c:
  func_0x0001087c9084(uVar5,lVar4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101473564);
  (*pcVar3)();
}

