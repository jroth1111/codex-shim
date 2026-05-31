
void __ZN16codex_app_server18request_processors16thread_processor34collect_resume_override_mismatches17h624f4c4c94eb9693E
               (long *param_1,long param_2,long ****param_3)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  long ****pppplVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte bVar14;
  long ***ppplVar15;
  long ***ppplVar16;
  char cVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long lVar20;
  long ****pppplVar21;
  undefined4 uVar22;
  ulong uVar23;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long **pplStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long **pplStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long **pplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long **pplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long **pplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  undefined8 uStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f0;
  long ***ppplStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined2 uStack_b8;
  bool bStack_b6;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  undefined *puStack_98;
  undefined2 uStack_78;
  undefined1 uStack_76;
  
  lStack_258 = 0;
  lStack_250 = 8;
  lStack_248 = 0;
  if (*(long *)(param_2 + 0x48) != -0x8000000000000000) {
    uStack_f0 = *(long *****)(param_2 + 0x50);
    ppplStack_e8 = *(long ****)(param_2 + 0x58);
    if ((ppplStack_e8 != param_3[2]) || (iVar7 = _memcmp(uStack_f0,param_3[1]), iVar7 != 0)) {
      ppplStack_b0 = (long ***)&uStack_f0;
      ppplStack_a8 = (long ***)&DAT_10192d9a4;
      puStack_98 = &DAT_1019a7324;
      ppplStack_a0 = (long ***)param_3;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_240,s_model_requested__active__108addb3a,&ppplStack_b0);
      lVar20 = lStack_248;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      puVar11[1] = uStack_238;
      *puVar11 = uStack_240;
      puVar11[2] = uStack_230;
      lStack_248 = lVar20 + 1;
    }
  }
  if (*(long *)(param_2 + 0x60) != -0x8000000000000000) {
    uStack_f0 = *(long *****)(param_2 + 0x68);
    ppplStack_e8 = *(long ****)(param_2 + 0x70);
    if ((ppplStack_e8 != param_3[5]) || (iVar7 = _memcmp(uStack_f0,param_3[4]), iVar7 != 0)) {
      ppplStack_a0 = (long ***)(param_3 + 3);
      ppplStack_b0 = (long ***)&uStack_f0;
      ppplStack_a8 = (long ***)&DAT_10192d9a4;
      puStack_98 = &DAT_1019a7324;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_228,s_model_provider_requested__active_108addb57,&ppplStack_b0);
      lVar20 = lStack_248;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      puVar11[1] = uStack_220;
      *puVar11 = uStack_228;
      puVar11[2] = uStack_218;
      lStack_248 = lVar20 + 1;
    }
  }
  ppplVar15 = (long ***)(param_2 + 0xf0);
  if (*ppplVar15 == (long **)0x8000000000000001) {
LAB_101899ee8:
    if (*(long *)(param_2 + 0x78) == -0x8000000000000000) goto LAB_101899efc;
LAB_101899fbc:
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    pppplVar19 = *(long *****)(param_2 + 0x88);
    if (pppplVar19 == (long ****)0x0) {
      bStack_b6 = false;
      pppplVar18 = (long ****)param_3[7];
      pppplVar10 = (long ****)param_3[8];
      pppplVar9 = (long ****)0x1;
LAB_10189a000:
      uStack_e0 = 6;
      uStack_b8 = 0x201;
      if (pppplVar10 == (long ****)0x0) {
        uStack_76 = false;
      }
      else {
        uStack_76 = *(char *)pppplVar18 == '/';
      }
      ppplStack_a0 = (long ***)CONCAT71(ppplStack_a0._1_7_,6);
      uStack_78 = 0x201;
      uStack_f0 = pppplVar9;
      ppplStack_e8 = (long ***)pppplVar19;
      ppplStack_b0 = (long ***)pppplVar18;
      ppplStack_a8 = (long ***)pppplVar10;
      uVar12 = func_0x0001019a7450(&uStack_f0,&ppplStack_b0);
      if ((uVar12 & 1) == 0) {
        ppplStack_b0 = (long ***)&ppplStack_110;
        ppplStack_a8 = (long ***)
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        ppplStack_a0 = (long ***)&uStack_f0;
        puStack_98 = &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        ppplStack_110 = (long ***)pppplVar9;
        ppplStack_108 = (long ***)pppplVar19;
        uStack_f0 = pppplVar18;
        ppplStack_e8 = (long ***)pppplVar10;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_1f0,s_cwd_requested__active__108addba1,&ppplStack_b0);
        lVar20 = lStack_248;
        if (lStack_248 == lStack_258) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
        }
        puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
        puVar11[1] = uStack_1e8;
        *puVar11 = uStack_1f0;
        puVar11[2] = uStack_1e0;
        lStack_248 = lVar20 + 1;
      }
      if (pppplVar19 != (long ****)0x0) {
        _free(pppplVar9);
      }
      if (*(long *)(param_2 + 0x90) != -0x8000000000000000) {
        __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                  (&uStack_f0,uVar2,pppplVar19);
        ppplVar15 = ppplStack_e8;
        __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                  (&ppplStack_b0,ppplStack_e8,CONCAT71(uStack_df,uStack_e0),pppplVar18,pppplVar10);
        pppplVar5 = (long ****)ppplStack_a0;
        pppplVar9 = (long ****)ppplStack_a8;
        ppplVar16 = ppplStack_b0;
        if (uStack_f0 != (long ****)0x0) {
          _free(ppplVar15);
        }
        pppplVar19 = pppplVar10;
        if ((long ****)ppplVar16 == (long ****)0x8000000000000000) goto LAB_10189a12c;
        pppplVar18 = *(long *****)(param_2 + 0xa0);
        pppplVar19 = (long ****)ppplVar16;
joined_r0x00010189a210:
        if (pppplVar18 == (long ****)0x0) {
          ppplStack_128 = (long ***)0x0;
          ppplStack_120 = (long ***)0x8;
        }
        else {
          lVar20 = *(long *)(param_2 + 0x98);
          pppplVar10 = (long ****)_malloc((long)pppplVar18 * 0x18);
          if (pppplVar10 == (long ****)0x0) {
            func_0x0001087c9084(8,(long)pppplVar18 * 0x18);
            goto LAB_10189a9a4;
          }
          pppplVar21 = (long ****)0x0;
          puVar11 = (undefined8 *)(lVar20 + 0x10);
          uStack_118 = 0;
          ppplStack_128 = (long ***)pppplVar18;
          ppplStack_120 = (long ***)pppplVar10;
          do {
            __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                      (&uStack_f0,puVar11[-1],*puVar11);
            ppplVar15 = ppplStack_e8;
            __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                      (&ppplStack_b0,ppplStack_e8,CONCAT71(uStack_df,uStack_e0),pppplVar9,pppplVar5)
            ;
            ppplStack_108 = ppplStack_a8;
            ppplStack_110 = ppplStack_b0;
            ppplStack_100 = ppplStack_a0;
            if (uStack_f0 != (long ****)0x0) {
              _free(ppplVar15);
            }
            puVar11 = puVar11 + 3;
            pppplVar10[1] = ppplStack_108;
            *pppplVar10 = ppplStack_110;
            pppplVar10[2] = ppplStack_100;
            pppplVar21 = (long ****)((long)pppplVar21 + 1);
            pppplVar10 = pppplVar10 + 3;
          } while (pppplVar18 != pppplVar21);
        }
        ppplStack_108 = ppplStack_120;
        ppplStack_110 = ppplStack_128;
        ppplStack_100 = (long ***)pppplVar18;
        if (pppplVar18 == (long ****)param_3[0xb]) {
          if (pppplVar18 != (long ****)0x0) {
            ppplVar15 = param_3[10] + 2;
            pppplVar10 = (long ****)(ppplStack_120 + 2);
            do {
              pppplVar18 = (long ****)((long)pppplVar18 + -1);
              uStack_f0 = (long ****)pppplVar10[-1];
              ppplStack_e8 = *pppplVar10;
              if ((long ****)ppplStack_e8 == (long ****)0x0) {
                ppplStack_b0 = (long ***)ppplVar15[-1];
                ppplStack_a8 = (long ***)*ppplVar15;
                bStack_b6 = false;
                if ((long ****)ppplStack_a8 == (long ****)0x0) goto LAB_10189a2b4;
LAB_10189a288:
                uStack_76 = *(char *)ppplStack_b0 == '/';
              }
              else {
                bStack_b6 = *(char *)uStack_f0 == '/';
                ppplStack_b0 = (long ***)ppplVar15[-1];
                ppplStack_a8 = (long ***)*ppplVar15;
                if ((long ****)ppplStack_a8 != (long ****)0x0) goto LAB_10189a288;
LAB_10189a2b4:
                uStack_76 = false;
              }
              uStack_b8 = 0x201;
              uStack_e0 = 6;
              ppplStack_a0 = (long ***)CONCAT71(ppplStack_a0._1_7_,6);
              uStack_78 = 0x201;
              uVar8 = func_0x0001019a7450(&uStack_f0,&ppplStack_b0);
              ppplVar15 = ppplVar15 + 3;
              pppplVar10 = pppplVar10 + 3;
              uVar1 = 0;
              if (pppplVar18 != (long ****)0x0) {
                uVar1 = uVar8;
              }
            } while ((uVar1 & 1) != 0);
            if ((uVar8 & 1) == 0) goto LAB_10189a2ec;
          }
        }
        else {
LAB_10189a2ec:
          ppplStack_b0 = (long ***)&ppplStack_110;
          ppplStack_a8 = (long ***)&DAT_1019a7efc;
          ppplStack_a0 = (long ***)(param_3 + 9);
          puStack_98 = &DAT_1019a7efc;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_1d8,s__runtime_workspace_roots_request_108addbbc,&ppplStack_b0);
          lVar20 = lStack_248;
          if (lStack_248 == lStack_258) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
          }
          puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
          puVar11[1] = uStack_1d0;
          *puVar11 = uStack_1d8;
          puVar11[2] = uStack_1c8;
          lStack_248 = lVar20 + 1;
        }
        ppplVar15 = ppplStack_108;
        if ((long ****)ppplStack_100 != (long ****)0x0) {
          pppplVar18 = (long ****)(ppplStack_108 + 1);
          pppplVar10 = (long ****)ppplStack_100;
          do {
            if (pppplVar18[-1] != (long ***)0x0) {
              _free(*pppplVar18);
            }
            pppplVar18 = pppplVar18 + 3;
            pppplVar10 = (long ****)((long)pppplVar10 + -1);
          } while (pppplVar10 != (long ****)0x0);
        }
        if ((long ****)ppplStack_110 != (long ****)0x0) {
          _free(ppplVar15);
        }
        if (pppplVar19 != (long ****)0x0) {
          _free(pppplVar9);
        }
      }
      goto LAB_10189a3a0;
    }
    pppplVar9 = (long ****)_malloc(pppplVar19);
    if (pppplVar9 != (long ****)0x0) {
      _memcpy(pppplVar9,uVar2,pppplVar19);
      pppplVar18 = (long ****)param_3[7];
      pppplVar10 = (long ****)param_3[8];
      bStack_b6 = *(char *)pppplVar9 == '/';
      goto LAB_10189a000;
    }
  }
  else {
    ppplVar16 = param_3[0x17];
    pplStack_210 = (long **)ppplVar15;
    if (*ppplVar15 == (long **)0x8000000000000000) {
      if (ppplVar16 == (long ***)0x8000000000000000) goto LAB_101899ee8;
    }
    else if (((ppplVar16 != (long ***)0x8000000000000000) &&
             (*(long ****)(param_2 + 0x100) == param_3[0x19])) &&
            (iVar7 = _memcmp(*(undefined8 *)(param_2 + 0xf8),param_3[0x18]), iVar7 == 0))
    goto LAB_101899ee8;
    ppplStack_b0 = &pplStack_210;
    ppplStack_a8 = (long ***)&DAT_10192d558;
    puStack_98 = &LAB_1019aa514;
    ppplStack_a0 = (long ***)(param_3 + 0x17);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_208,s_service_tier_requested__active__108addb7d,&ppplStack_b0);
    lVar20 = lStack_248;
    if (lStack_248 == lStack_258) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
    }
    puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
    puVar11[1] = uStack_200;
    *puVar11 = uStack_208;
    puVar11[2] = uStack_1f8;
    lStack_248 = lVar20 + 1;
    if (*(long *)(param_2 + 0x78) != -0x8000000000000000) goto LAB_101899fbc;
LAB_101899efc:
    if (*(long *)(param_2 + 0x90) != -0x8000000000000000) {
      pppplVar18 = (long ****)param_3[7];
      pppplVar19 = (long ****)param_3[8];
LAB_10189a12c:
      if (pppplVar19 == (long ****)0x0) {
        pppplVar9 = (long ****)0x1;
      }
      else {
        pppplVar9 = (long ****)_malloc(pppplVar19);
        if (pppplVar9 == (long ****)0x0) goto LAB_10189a988;
      }
      _memcpy(pppplVar9,pppplVar18,pppplVar19);
      pppplVar18 = *(long *****)(param_2 + 0xa0);
      pppplVar5 = pppplVar19;
      goto joined_r0x00010189a210;
    }
LAB_10189a3a0:
    bVar3 = *(byte *)(param_2 + 0x13d);
    if (bVar3 != 7) {
      pplStack_1c0 = (long **)(param_2 + 0x13d);
      bVar14 = *(byte *)((long)param_3 + 0x18d);
      bVar4 = bVar14 - 2;
      if (bVar14 < 2) {
        bVar4 = 3;
      }
      if (bVar4 < 2) {
        if (bVar4 == 0) {
          bVar14 = 2;
        }
        else {
          bVar14 = 3;
        }
LAB_10189a44c:
        uStack_f0 = (long ****)CONCAT71(uStack_f0._1_7_,bVar14);
        cVar17 = bVar3 - 2;
        if (bVar3 < 2) {
          cVar17 = '\x03';
        }
        if (cVar17 == (byte)(bVar14 - 2)) {
LAB_10189a46c:
          if ((cVar17 != '\x03') ||
             (((bVar3 == bVar14 && (*(char *)(param_2 + 0x13e) == uStack_f0._1_1_)) &&
              ((*(char *)(param_2 + 0x13f) == uStack_f0._2_1_ &&
               ((*(char *)(param_2 + 0x140) == uStack_f0._3_1_ &&
                (*(char *)(param_2 + 0x141) == uStack_f0._4_1_)))))))) goto LAB_10189a52c;
        }
      }
      else {
        if (bVar4 == 2) {
          bVar14 = 4;
          goto LAB_10189a44c;
        }
        if (bVar4 != 3) {
          bVar14 = 6;
          goto LAB_10189a44c;
        }
        uVar22 = *(undefined4 *)((long)param_3 + 0x18d);
        uVar12 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar22 >> 0x18),
                                                 (uint6)(byte)((uint)uVar22 >> 0x10) << 0x20) >>
                                       0x10),(ushort)(byte)uVar22) & 0xffffffffffffff01;
        uVar23 = CONCAT44((int)(uVar12 >> 0x20),
                          (uint)CONCAT12((char)((uint)uVar22 >> 8),(short)uVar12)) &
                 0xffffffffff01ffff;
        uVar12 = CONCAT26((short)(uVar23 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar23)) &
                 0xff01ff01ffffffff;
        bVar14 = bVar14 & 1;
        uStack_f0 = (long ****)
                    (CONCAT35(uStack_f0._5_3_,
                              CONCAT14(*(char *)((long)param_3 + 0x191),
                                       CONCAT13((char)(uVar12 >> 0x30),
                                                CONCAT12((char)(uVar12 >> 0x20),
                                                         CONCAT11((char)(uVar12 >> 0x10),
                                                                  (char)uVar23))))) &
                    0xffffff01ffffffff);
        cVar17 = bVar3 - 2;
        if (bVar3 < 2) {
          cVar17 = '\x03';
        }
        if (cVar17 == '\x03') goto LAB_10189a46c;
      }
      ppplStack_b0 = &pplStack_1c0;
      ppplStack_a8 = (long ***)&DAT_10192bd84;
      ppplStack_a0 = (long ***)&uStack_f0;
      puStack_98 = &DAT_1017f3a18;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_1b8,s_approval_policy_requested__activ_108addbeb,&ppplStack_b0);
      lVar20 = lStack_248;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      puVar11[1] = uStack_1b0;
      *puVar11 = uStack_1b8;
      puVar11[2] = uStack_1a8;
      lStack_248 = lVar20 + 1;
    }
LAB_10189a52c:
    if (*(char *)(param_2 + 0x13a) != '\x02') {
      pplStack_1a0 = (long **)(param_2 + 0x13a);
      uStack_f0 = (long ****)CONCAT71(uStack_f0._1_7_,*(char *)(param_3 + 0x31));
      if (*(char *)(param_2 + 0x13a) != *(char *)(param_3 + 0x31)) {
        ppplStack_b0 = &pplStack_1a0;
        ppplStack_a8 = (long ***)&DAT_10192bdac;
        ppplStack_a0 = (long ***)&uStack_f0;
        puStack_98 = &DAT_1017f5818;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_198,s_approvals_reviewer_requested__ac_108addc12,&ppplStack_b0);
        lVar20 = lStack_248;
        if (lStack_248 == lStack_258) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
        }
        puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
        puVar11[1] = uStack_190;
        *puVar11 = uStack_198;
        puVar11[2] = uStack_188;
        lStack_248 = lVar20 + 1;
      }
    }
    if (*(char *)(param_2 + 0x13b) != '\x03') {
      pplStack_180 = (long **)(param_2 + 0x13b);
      func_0x000102ce5cbc(&uStack_f0,param_3);
      if (*(char *)pplStack_180 == '\x02') {
        uVar12 = (ulong)uStack_f0 ^ 0x8000000000000000;
        if (-1 < (long)uStack_f0) {
          uVar12 = 3;
        }
        if ((uVar12 & 0xfffffffffffffffd) != 0) goto LAB_10189a638;
        if (-0x7ffffffffffffffe < (long)uStack_f0) goto LAB_10189a6b8;
      }
      else {
        if (*(char *)pplStack_180 == '\x01') {
          if ((long)uStack_f0 < 0) goto LAB_10189a638;
        }
        else {
          if (uStack_f0 == (long ****)0x8000000000000001) goto LAB_10189a6f4;
LAB_10189a638:
          ppplStack_b0 = &pplStack_180;
          ppplStack_a8 = (long ***)&DAT_10192c12c;
          ppplStack_a0 = (long ***)&uStack_f0;
          puStack_98 = &DAT_1019e14dc;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_178,s_sandbox_requested__active__108addc3c,&ppplStack_b0);
          lVar20 = lStack_248;
          if (lStack_248 == lStack_258) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
          }
          puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
          puVar11[1] = uStack_170;
          *puVar11 = uStack_178;
          puVar11[2] = uStack_168;
          lStack_248 = lVar20 + 1;
          if ((long)uStack_f0 < -0x7ffffffffffffffd) goto LAB_10189a6f4;
        }
LAB_10189a6b8:
        ppplVar15 = ppplStack_e8;
        pppplVar18 = uStack_f0;
        lVar20 = CONCAT71(uStack_df,uStack_e0);
        if (lVar20 != 0) {
          pppplVar19 = (long ****)(ppplStack_e8 + 1);
          do {
            if (pppplVar19[-1] != (long ***)0x0) {
              _free(*pppplVar19);
            }
            pppplVar19 = pppplVar19 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (pppplVar18 != (long ****)0x0) {
          _free(ppplVar15);
        }
      }
    }
LAB_10189a6f4:
    if (*(long *)(param_2 + 0xa8) != -0x8000000000000000) {
      ppplStack_b0 = (long ***)(param_3 + 0x1a);
      ppplStack_a8 = (long ***)&DAT_1019aa7e8;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_160,s_Dpermissions_override_was_provid_108addc5b,&ppplStack_b0);
      lVar20 = lStack_248;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      puVar11[1] = uStack_158;
      *puVar11 = uStack_160;
      puVar11[2] = uStack_150;
      lStack_248 = lVar20 + 1;
    }
    if ((*(char *)(param_2 + 0x13c) != '\x03') &&
       (pplStack_148 = (long **)(param_2 + 0x13c),
       *(char *)((long)param_3 + 0x18a) != *(char *)(param_2 + 0x13c))) {
      ppplStack_a0 = (long ***)((long)param_3 + 0x18a);
      ppplStack_b0 = &pplStack_148;
      ppplStack_a8 = (long ***)&DAT_10192bf8c;
      puStack_98 = &DAT_1019aa950;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_140,s_personality_requested__active__108addca2,&ppplStack_b0);
      lVar20 = lStack_248;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar11 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      puVar11[1] = uStack_138;
      *puVar11 = uStack_140;
      puVar11[2] = uStack_130;
      lStack_248 = lVar20 + 1;
    }
    if (*(long *)(param_2 + 0x108) != 0) {
      pppplVar19 = (long ****)0x38;
      puVar11 = (undefined8 *)_malloc(0x38);
      lVar20 = lStack_248;
      if (puVar11 == (undefined8 *)0x0) goto LAB_10189a988;
      puVar11[1] = 0x7365646972726576;
      *puVar11 = 0x6f206769666e6f63;
      puVar11[3] = 0x612064656469766f;
      puVar11[2] = 0x7270206572657720;
      puVar11[5] = 0x656c696877206465;
      puVar11[4] = 0x726f6e676920646e;
      puVar11[6] = 0x676e696e6e757220;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar13 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      *puVar13 = 0x38;
      puVar13[1] = puVar11;
      puVar13[2] = 0x38;
      lStack_248 = lVar20 + 1;
    }
    if (*(long *)(param_2 + 0xc0) != -0x8000000000000000) {
      pppplVar19 = (long ****)0x40;
      puVar11 = (undefined8 *)_malloc(0x40);
      lVar20 = lStack_248;
      if (puVar11 == (undefined8 *)0x0) goto LAB_10189a988;
      puVar11[1] = 0x736e6f6974637572;
      *puVar11 = 0x74736e4965736162;
      puVar11[3] = 0x7270207361772065;
      puVar11[2] = 0x6469727265766f20;
      puVar11[5] = 0x726f6e676920646e;
      puVar11[4] = 0x612064656469766f;
      puVar11[7] = 0x676e696e6e757220;
      puVar11[6] = 0x656c696877206465;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar13 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      *puVar13 = 0x40;
      puVar13[1] = puVar11;
      puVar13[2] = 0x40;
      lStack_248 = lVar20 + 1;
    }
    if (*(long *)(param_2 + 0xd8) == -0x8000000000000000) {
LAB_10189a954:
      param_1[1] = lStack_250;
      *param_1 = lStack_258;
      param_1[2] = lStack_248;
      return;
    }
    pppplVar19 = (long ****)0x45;
    puVar11 = (undefined8 *)_malloc(0x45);
    lVar20 = lStack_248;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[5] = 0x20646e6120646564;
      puVar11[4] = 0x69766f7270207361;
      puVar11[7] = 0x757220656c696877;
      puVar11[6] = 0x206465726f6e6769;
      *(undefined8 *)((long)puVar11 + 0x3d) = 0x676e696e6e757220;
      puVar11[1] = 0x63757274736e4972;
      *puVar11 = 0x65706f6c65766564;
      puVar11[3] = 0x7720656469727265;
      puVar11[2] = 0x766f20736e6f6974;
      if (lStack_248 == lStack_258) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_258);
      }
      puVar13 = (undefined8 *)(lStack_250 + lVar20 * 0x18);
      *puVar13 = 0x45;
      puVar13[1] = puVar11;
      puVar13[2] = 0x45;
      lStack_248 = lVar20 + 1;
      goto LAB_10189a954;
    }
  }
LAB_10189a988:
  func_0x0001087c9084(1,pppplVar19);
LAB_10189a9a4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10189a9a8);
  (*pcVar6)();
}

