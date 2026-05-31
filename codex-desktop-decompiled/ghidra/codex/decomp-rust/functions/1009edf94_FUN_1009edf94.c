
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009edf94(undefined8 *param_1,ulong param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined2 *puVar9;
  char *pcVar10;
  long *plVar11;
  long **pplVar12;
  long *unaff_x23;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  byte *pbStack_250;
  long **pplStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  long lStack_220;
  byte *pbStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [16];
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_3 == (long *)0x0) {
    uVar8 = 0;
LAB_1009ee018:
    param_1[2] = uVar8;
    param_1[3] = param_2;
    param_1[1] = 0x8000000000000002;
    *param_1 = 2;
    return;
  }
  if ((long)param_3 + ((ulong)(0x7fffffffffffffff < param_2) - 1) == -1) {
    uVar8 = 1;
    goto LAB_1009ee018;
  }
  puVar4 = (undefined8 *)_malloc(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x2074756f20726562;
    *puVar4 = 0x6d756e204e4f534a;
    puVar4[2] = 0x65676e617220666f;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 0;
    param_1[3] = 0x18;
    param_1[4] = puVar4;
    param_1[6] = 0;
    param_1[5] = 0x18;
    param_1[7] = 8;
    return;
  }
  auVar21 = func_0x0001087c9084(1,0x18);
  puVar4 = auVar21._0_8_;
  uStack_28 = 0x1009ee040;
  if (param_3 == (long *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = auVar21._8_8_;
    puVar4[1] = 0x8000000000000002;
    *puVar4 = 2;
    return;
  }
  puStack_30 = &stack0xfffffffffffffff0;
  puVar5 = (undefined8 *)_malloc(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x2074756f20726562;
    *puVar5 = 0x6d756e204e4f534a;
    puVar5[2] = 0x65676e617220666f;
    *puVar4 = 0;
    puVar4[3] = 0x18;
    puVar4[4] = puVar5;
    puVar4[6] = 0;
    puVar4[5] = 0x18;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[7] = 8;
    return;
  }
  auVar21 = func_0x0001087c9084(1,0x18);
  plVar11 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  uStack_48 = 0x1009ee0c8;
  pbVar2 = (byte *)*plVar11;
  pbStack_218 = (byte *)plVar11[1];
  ppuStack_50 = &puStack_30;
  if (pbVar2 == pbStack_218) goto LAB_1009ee2a4;
  pbVar17 = pbVar2 + 0x40;
  *plVar11 = (long)pbVar17;
  pbVar1 = pbVar2 + 0x20;
  lStack_220 = plVar11[3];
  plVar11[2] = (long)pbVar1;
  plVar11[3] = lStack_220 + 1;
  bVar3 = *pbVar2;
  if (bVar3 < 0xe) {
    pplVar12 = &plStack_f0;
    if (bVar3 == 0xc) {
      plVar15 = *(long **)(pbVar2 + 0x10);
      plVar14 = *(long **)(pbVar2 + 0x18);
      if (plVar14 != (long *)0x0) goto LAB_1009ee174;
LAB_1009ee14c:
      plVar13 = (long *)0x1;
LAB_1009ee26c:
      param_3 = plVar14;
      _memcpy(plVar13,plVar15);
      plStack_100 = plVar14;
      plStack_f8 = plVar13;
    }
    else {
      if (bVar3 != 0xd) goto LAB_1009ee734;
      plVar15 = *(long **)(pbVar2 + 8);
      plVar14 = *(long **)(pbVar2 + 0x10);
      if (plVar14 == (long *)0x0) goto LAB_1009ee14c;
LAB_1009ee174:
      if (plVar14 != (long *)0x1e) {
        plVar13 = (long *)_malloc(plVar14);
        if (plVar13 == (long *)0x0) {
          func_0x0001087c9084(1,plVar14);
          unaff_x23 = (long *)0x0;
LAB_1009ee7c8:
          func_0x0001087c9084(1,0x1e);
          goto LAB_1009ee7d4;
        }
        goto LAB_1009ee26c;
      }
      if (((*plVar15 == 0x6a5f656472657324 && plVar15[1] == 0x6972703a3a6e6f73) &&
          plVar15[2] == 0x61523a3a65746176) && *(long *)((long)plVar15 + 0x16) == 0x65756c6156776152
         ) {
        plVar14 = (long *)0x8000000000000000;
        pplVar12 = &plStack_100;
        plVar13 = unaff_x23;
      }
      else {
        plVar13 = (long *)_malloc(0x1e);
        if (plVar13 == (long *)0x0) goto LAB_1009ee7c8;
        lVar20 = plVar15[1];
        lVar19 = *plVar15;
        uVar8 = *(undefined8 *)((long)plVar15 + 0xe);
        *(undefined8 *)((long)plVar13 + 0x16) = *(undefined8 *)((long)plVar15 + 0x16);
        *(undefined8 *)((long)plVar13 + 0xe) = uVar8;
        plVar13[1] = lVar20;
        *plVar13 = lVar19;
        plStack_100 = plVar14;
        plStack_f8 = plVar13;
      }
    }
    *pplVar12 = plVar14;
  }
  else {
    if (bVar3 == 0xe) {
      plStack_148 = *(long **)(pbVar2 + 0x10);
      plStack_140 = *(long **)(pbVar2 + 0x18);
LAB_1009ee204:
      plStack_150 = (long *)CONCAT71(plStack_150._1_7_,6);
      param_3 = &lStack_210;
      FUN_1087e3db0(&plStack_108,&plStack_150,param_3,&UNK_10b20a6a0);
      plVar13 = plStack_f8;
    }
    else {
      if (bVar3 == 0xf) {
        plStack_148 = *(long **)(pbVar2 + 8);
        plStack_140 = *(long **)(pbVar2 + 0x10);
        goto LAB_1009ee204;
      }
LAB_1009ee734:
      param_3 = &lStack_210;
      FUN_108855bf0(&plStack_108,pbVar2,param_3,&UNK_10b20a6a0);
      plVar13 = plStack_f8;
    }
    plStack_f8 = plVar13;
    if (plStack_108 != (long *)0x2) {
      plVar6[5] = (long)plStack_e0;
      plVar6[4] = (long)plStack_e8;
      plVar6[7] = (long)plStack_d0;
      plVar6[6] = (long)plStack_d8;
      plVar6[9] = (long)plStack_c0;
      plVar6[8] = (long)plStack_c8;
      plVar6[10] = (long)plStack_b8;
      *plVar6 = (long)plStack_108;
      plVar6[1] = (long)plStack_100;
      plVar6[2] = (long)plVar13;
      plVar6[3] = (long)plStack_f0;
      return;
    }
  }
  plVar15 = plStack_100;
  if (plStack_100 != (long *)0x8000000000000000) {
    if (plStack_100 != (long *)0x8000000000000001) {
      pauVar7 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar7[1][0] == '\x01') {
        auStack_1d8 = *pauVar7;
      }
      else {
        auStack_1d8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar7 + 8) = auStack_1d8._8_8_;
        pauVar7[1][0] = 1;
      }
      lStack_1f0 = 0;
      puStack_1f8 = &UNK_108c56c70;
      *(long *)*pauVar7 = auStack_1d8._0_8_ + 1;
      lStack_210 = 0;
      lStack_208 = 8;
      lStack_200 = 0;
      lStack_1e0 = 0;
      lStack_1e8 = 0;
      plVar11[2] = 0;
      plStack_1c8 = plVar15;
      plStack_1c0 = plVar13;
      func_0x0001004d9068(plVar6,pbVar1);
      if (*plVar6 != 2) {
        if (plVar15 != (long *)0x0) {
          _free(plVar13);
        }
joined_r0x0001009ee538:
        if ((lStack_1f0 != 0) && (lStack_1f0 * 9 != -0x11)) {
          _free(puStack_1f8 + lStack_1f0 * -8 + -8);
        }
        func_0x000100cd7284(&lStack_210);
        return;
      }
      FUN_101497a9c(&plStack_108,&lStack_210,&plStack_1c8,plVar6 + 1);
      plStack_148 = plStack_f8;
      plStack_150 = plStack_100;
      plStack_138 = plStack_e8;
      plStack_140 = plStack_f0;
      plStack_128 = plStack_d8;
      plStack_130 = plStack_e0;
      plStack_118 = plStack_c8;
      plStack_120 = plStack_d0;
      plStack_110 = plStack_c0;
      if (plStack_100 != (long *)0x8000000000000005) {
        FUN_100de6690(&plStack_150);
      }
      if (pbVar17 != pbStack_218) {
        lVar19 = lStack_220 + 2;
        do {
          pbVar2 = pbVar17 + 0x40;
          *plVar11 = (long)pbVar2;
          plVar11[3] = lVar19;
          func_0x0001004e0914(&plStack_108,pbVar17);
          plVar13 = plStack_f0;
          plVar14 = plStack_f8;
          plVar15 = plStack_100;
          if (plStack_108 != (long *)0x2) {
            plStack_188 = plStack_d0;
            plStack_190 = plStack_d8;
            plStack_178 = plStack_c0;
            plStack_180 = plStack_c8;
            plStack_170 = plStack_b8;
            plStack_1a8 = plStack_f0;
            plStack_1b0 = plStack_f8;
            plStack_198 = plStack_e0;
            plStack_1a0 = plStack_e8;
            plVar16 = plStack_108;
            plVar18 = plStack_100;
LAB_1009ee6d0:
            plVar6[7] = (long)plStack_188;
            plVar6[6] = (long)plStack_190;
            plVar6[9] = (long)plStack_178;
            plVar6[8] = (long)plStack_180;
            plVar6[10] = (long)plStack_170;
            plVar6[3] = (long)plStack_1a8;
            plVar6[2] = (long)plStack_1b0;
            plVar6[5] = (long)plStack_198;
            plVar6[4] = (long)plStack_1a0;
            *plVar6 = (long)plVar16;
            plVar6[1] = (long)plVar18;
            goto joined_r0x0001009ee538;
          }
          func_0x0001004d9068(&plStack_108,pbVar17 + 0x20);
          plVar18 = plStack_100;
          if (plStack_108 != (long *)0x2) {
            plStack_188 = plStack_d0;
            plStack_190 = plStack_d8;
            plStack_178 = plStack_c0;
            plStack_180 = plStack_c8;
            plStack_170 = plStack_b8;
            plStack_1a8 = plStack_f0;
            plStack_1b0 = plStack_f8;
            plStack_198 = plStack_e0;
            plStack_1a0 = plStack_e8;
            plVar16 = plStack_108;
            if (plVar15 != (long *)0x0) {
              _free(plVar14);
            }
            goto LAB_1009ee6d0;
          }
          plStack_188 = plStack_d8;
          plStack_190 = plStack_e0;
          plStack_178 = plStack_c8;
          plStack_180 = plStack_d0;
          plStack_170 = plStack_c0;
          plStack_1a8 = plStack_f8;
          plStack_1b0 = plStack_100;
          plStack_198 = plStack_e8;
          plStack_1a0 = plStack_f0;
          if (plVar15 == (long *)0x8000000000000000) break;
          plVar16 = plVar14;
          plVar18 = plVar13;
          if (plVar15 == (long *)0x8000000000000001) goto LAB_1009ee6d0;
          plStack_168 = plVar15;
          plStack_160 = plVar14;
          plStack_158 = plVar13;
          FUN_101497a9c(&plStack_108,&lStack_210,&plStack_168,&plStack_1b0);
          plStack_148 = plStack_f8;
          plStack_150 = plStack_100;
          plStack_138 = plStack_e8;
          plStack_140 = plStack_f0;
          plStack_128 = plStack_d8;
          plStack_130 = plStack_e0;
          plStack_118 = plStack_c8;
          plStack_120 = plStack_d0;
          plStack_110 = plStack_c0;
          if (plStack_100 != (long *)0x8000000000000005) {
            FUN_100de6690(&plStack_150);
          }
          lVar19 = lVar19 + 1;
          pbVar17 = pbVar2;
        } while (pbVar2 != pbStack_218);
      }
      plVar6[4] = (long)puStack_1f8;
      plVar6[3] = lStack_200;
      plVar6[6] = lStack_1e8;
      plVar6[5] = lStack_1f0;
      plVar6[8] = auStack_1d8._0_8_;
      plVar6[7] = lStack_1e0;
      plVar6[9] = auStack_1d8._8_8_;
      plVar6[2] = lStack_208;
      plVar6[1] = lStack_210;
      *plVar6 = 2;
      return;
    }
LAB_1009ee2a4:
    pauVar7 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar7[1][0] == '\x01') {
      auVar21 = *pauVar7;
    }
    else {
      auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar7 + 8) = auVar21._8_8_;
      pauVar7[1][0] = 1;
    }
    *(long *)*pauVar7 = auVar21._0_8_ + 1;
    plVar6[2] = 8;
    plVar6[3] = 0;
    plVar6[5] = 0;
    plVar6[4] = (long)&UNK_108c56c70;
    plVar6[7] = 0;
    plVar6[6] = 0;
    *(undefined1 (*) [16])(plVar6 + 8) = auVar21;
    plVar6[1] = 0;
    *plVar6 = 2;
    return;
  }
  plVar11[2] = 0;
  bVar3 = *pbVar1;
  if (0xd < bVar3) {
    if (bVar3 == 0xe) {
      plStack_148 = *(long **)(pbVar2 + 0x30);
      plStack_140 = *(long **)(pbVar2 + 0x38);
    }
    else {
      if (bVar3 != 0xf) goto LAB_1009ee774;
      plStack_148 = *(long **)(pbVar2 + 0x28);
      plStack_140 = *(long **)(pbVar2 + 0x30);
    }
    plStack_150 = (long *)CONCAT71(plStack_150._1_7_,6);
    FUN_1087e3db0(&plStack_108,&plStack_150,&lStack_210,&UNK_10b20a6c0);
    plVar13 = plStack_100;
    plVar11 = plStack_f8;
joined_r0x0001009ee5dc:
    if (plStack_108 != (long *)0x2) {
      plVar6[5] = (long)plStack_e0;
      plVar6[4] = (long)plStack_e8;
      plVar6[7] = (long)plStack_d0;
      plVar6[6] = (long)plStack_d8;
      plVar6[9] = (long)plStack_c0;
      plVar6[8] = (long)plStack_c8;
      plVar6[10] = (long)plStack_b8;
      plVar6[1] = (long)plVar13;
      *plVar6 = (long)plStack_108;
      plVar6[3] = (long)plStack_f0;
      plVar6[2] = (long)plVar11;
      return;
    }
    goto LAB_1009ee5e4;
  }
  if (bVar3 == 0xc) {
    pplVar12 = *(long ***)(pbVar2 + 0x30);
    plVar11 = *(long **)(pbVar2 + 0x38);
    if (plVar11 == (long *)0x0) goto LAB_1009ee340;
LAB_1009ee580:
    plVar13 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plVar11,1);
    plVar14 = (long *)0x8000000000000000;
    unaff_x23 = (long *)0x0;
    plVar15 = plStack_f0;
    if (plVar13 == (long *)0x0) {
LAB_1009ee7d4:
      uVar8 = func_0x0001087c9084(1,plVar11);
      if (plVar14 != (long *)0x0) {
        _free(unaff_x23);
        uVar8 = __Unwind_Resume(uVar8);
        if (unaff_x23 != (long *)0x0) {
          _free(plVar15);
        }
        FUN_100e8442c(&lStack_210);
      }
      __Unwind_Resume(uVar8);
      auVar21 = FUN_107c05ccc();
      pcVar10 = auVar21._8_8_;
      puVar9 = auVar21._0_8_;
      pcStack_228 = FUN_1009ee844;
      if (param_3 == (long *)0x6) {
        if (*pcVar10 == 'a') {
          if ((((pcVar10[1] == 'c') && (pcVar10[2] == 'c')) && (pcVar10[3] == 'e')) &&
             ((pcVar10[4] == 'p' && (pcVar10[5] == 't')))) {
            *puVar9 = 0;
            return;
          }
        }
        else if (((*pcVar10 == 'c') && (pcVar10[1] == 'a')) &&
                ((pcVar10[2] == 'n' &&
                 (((pcVar10[3] == 'c' && (pcVar10[4] == 'e')) && (pcVar10[5] == 'l')))))) {
          *puVar9 = 0x200;
          return;
        }
      }
      else if ((((param_3 == (long *)0x7) && (*pcVar10 == 'd')) && (pcVar10[1] == 'e')) &&
              (((pcVar10[2] == 'c' && (pcVar10[3] == 'l')) &&
               ((pcVar10[4] == 'i' && ((pcVar10[5] == 'n' && (pcVar10[6] == 'e')))))))) {
        *puVar9 = 0x100;
        return;
      }
      pbStack_250 = pbVar1;
      pplStack_248 = pplVar12;
      plStack_240 = plVar11;
      uStack_238 = uVar8;
      pppuStack_230 = &ppuStack_50;
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_268,pcVar10,param_3);
      uVar8 = FUN_1087e4494(uStack_260,uStack_258,&UNK_10b229ee0,3);
      *(undefined8 *)(puVar9 + 4) = uVar8;
      *(undefined1 *)puVar9 = 1;
      if ((uStack_268 & 0x7fffffffffffffff) != 0) {
        _free(uStack_260);
      }
      return;
    }
  }
  else {
    if (bVar3 != 0xd) {
LAB_1009ee774:
      FUN_108855bf0(&plStack_108,pbVar1,&lStack_210,&UNK_10b20a6c0);
      plVar13 = plStack_100;
      plVar11 = plStack_f8;
      goto joined_r0x0001009ee5dc;
    }
    pplVar12 = *(long ***)(pbVar2 + 0x28);
    plVar11 = *(long **)(pbVar2 + 0x30);
    if (plVar11 != (long *)0x0) goto LAB_1009ee580;
LAB_1009ee340:
    plVar13 = (long *)0x1;
  }
  _memcpy(plVar13,pplVar12,plVar11);
LAB_1009ee5e4:
  plStack_f8 = (long *)0x0;
  plStack_f0 = (long *)0x0;
  plStack_108 = plVar13;
  plStack_100 = plVar11;
  plStack_e8 = plVar13;
  plStack_e0 = plVar11;
  FUN_10064dc08(&plStack_150,&plStack_108);
  if (plStack_150 == (long *)0x8000000000000005) {
    func_0x00010112d238(&plStack_108,plStack_148);
    plVar6[5] = (long)plStack_e0;
    plVar6[4] = (long)plStack_e8;
    plVar6[7] = (long)plStack_d0;
    plVar6[6] = (long)plStack_d8;
    plVar6[9] = (long)plStack_c0;
    plVar6[8] = (long)plStack_c8;
    plVar6[10] = (long)plStack_b8;
    plVar6[1] = (long)plStack_100;
    *plVar6 = (long)plStack_108;
    plVar6[3] = (long)plStack_f0;
    plVar6[2] = (long)plStack_f8;
  }
  else {
    plVar6[4] = (long)plStack_138;
    plVar6[3] = (long)plStack_140;
    plVar6[6] = (long)plStack_128;
    plVar6[5] = (long)plStack_130;
    plVar6[8] = (long)plStack_118;
    plVar6[7] = (long)plStack_120;
    plVar6[9] = (long)plStack_110;
    plVar6[2] = (long)plStack_148;
    plVar6[1] = (long)plStack_150;
    *plVar6 = 2;
  }
  if (plVar11 != (long *)0x0) {
    _free(plVar13);
  }
  return;
}

