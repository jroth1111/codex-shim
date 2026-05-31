
void FUN_10127c068(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long **pplStack_150;
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
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long lStack_100;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  uVar11 = *param_2;
  uVar8 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar8 = 6;
  }
  if (3 < (long)uVar8) {
    if (uVar8 != 4) {
      if (uVar8 != 5) {
        uVar10 = param_2[6];
        uVar8 = param_2[1];
        uVar3 = param_2[2];
        uVar9 = param_2[4];
        if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
          _free(param_2[3] + uVar9 * -8 + -8);
        }
        lStack_d0 = uVar8 + uVar3 * 0x70;
        pplStack_150 = (long **)0x8000000000000000;
        uStack_70 = CONCAT71(uStack_70._1_7_,0xb);
        uStack_e8 = uVar8;
        uStack_e0 = uVar8;
        uStack_d8 = uVar11;
        FUN_1087e3db0(&plStack_c8,&uStack_70,&uStack_51,&UNK_10b21ae90);
        if (plStack_c8 == (long *)0x2) {
          if (uVar3 == 0) {
            *(undefined1 *)(param_1 + 1) = uStack_c0;
            *param_1 = 2;
          }
          else {
            FUN_1087e427c(&plStack_c8,uVar10,&UNK_10b21cb90,&UNK_10b20a590);
            param_1[5] = CONCAT71(uStack_9f,uStack_a0);
            param_1[4] = CONCAT71(uStack_a7,uStack_a8);
            param_1[7] = CONCAT71(uStack_8f,uStack_90);
            param_1[6] = CONCAT71(uStack_97,uStack_98);
            param_1[9] = CONCAT71(uStack_7f,uStack_80);
            param_1[8] = CONCAT71(uStack_87,uStack_88);
            param_1[10] = lStack_78;
            param_1[1] = CONCAT71(uStack_bf,uStack_c0);
            *param_1 = (long)plStack_c8;
            param_1[3] = CONCAT71(uStack_af,uStack_b0);
            param_1[2] = CONCAT71(uStack_b7,uStack_b8);
          }
        }
        else {
          *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_a0,uStack_a7);
          *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_a8,uStack_af);
          *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_90,uStack_97);
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_98,uStack_9f);
          *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_80,uStack_87);
          *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_88,uStack_8f);
          param_1[10] = lStack_78;
          param_1[9] = CONCAT71(uStack_7f,uStack_80);
          *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_b0,uStack_b7);
          *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_b8,uStack_bf);
          *param_1 = (long)plStack_c8;
          *(undefined1 *)(param_1 + 1) = uStack_c0;
        }
        FUN_100deffc0(&pplStack_150);
        return;
      }
      plVar1 = (long *)param_2[1];
      plVar2 = (long *)param_2[2];
      uVar8 = param_2[3];
      uStack_c0 = SUB81(plVar2,0);
      uStack_bf = (undefined7)((ulong)plVar2 >> 8);
      uStack_b8 = SUB81(plVar1,0);
      uStack_b7 = (undefined7)((ulong)plVar1 >> 8);
      uStack_b0 = SUB81(plVar2 + uVar8 * 10,0);
      uStack_af = (undefined7)((ulong)(plVar2 + uVar8 * 10) >> 8);
      uStack_70 = CONCAT71(uStack_70._1_7_,10);
      plStack_c8 = plVar2;
      FUN_1087e3db0(&pplStack_150,&uStack_70,&uStack_51,&UNK_10b21ae90);
      if (pplStack_150 == (long **)0x2) {
        if (uVar8 == 0) {
          *(undefined1 *)(param_1 + 1) = uStack_148;
          *param_1 = 2;
        }
        else {
          FUN_1087e427c(&pplStack_150,uVar8,&UNK_10b21cb80,&UNK_10b20a590);
          param_1[5] = CONCAT71(uStack_127,uStack_128);
          param_1[4] = CONCAT71(uStack_12f,uStack_130);
          param_1[7] = CONCAT71(uStack_117,uStack_118);
          param_1[6] = CONCAT71(uStack_11f,uStack_120);
          param_1[9] = CONCAT71(uStack_107,uStack_108);
          param_1[8] = CONCAT71(uStack_10f,uStack_110);
          param_1[10] = lStack_100;
          param_1[1] = CONCAT71(uStack_147,uStack_148);
          *param_1 = (long)pplStack_150;
          param_1[3] = CONCAT71(uStack_137,uStack_138);
          param_1[2] = CONCAT71(uStack_13f,uStack_140);
        }
        lVar12 = uVar8 + 1;
        plVar6 = plVar2;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          FUN_100ddb5bc(plVar6);
          plVar6 = plVar6 + 10;
        }
      }
      else {
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_128,uStack_12f);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_130,uStack_137);
        *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_118,uStack_11f);
        *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_120,uStack_127);
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_108,uStack_10f);
        *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_110,uStack_117);
        param_1[10] = lStack_100;
        param_1[9] = CONCAT71(uStack_107,uStack_108);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_138,uStack_13f);
        *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_140,uStack_147);
        *param_1 = (long)pplStack_150;
        lVar12 = uVar8 + 1;
        *(undefined1 *)(param_1 + 1) = uStack_148;
        plVar6 = plVar2;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          FUN_100ddb5bc(plVar6);
          plVar6 = plVar6 + 10;
        }
      }
      goto joined_r0x00010127c424;
    }
    uStack_68 = param_2[2];
    uStack_70 = param_2[1];
    uStack_60 = param_2[3];
    plStack_c8 = (long *)0x0;
    uStack_c0 = 1;
    uStack_bf = 0;
    uStack_b8 = 0;
    uStack_b7 = 0;
    uStack_140 = 0x20;
    uStack_13f = 0x600000;
    pplStack_150 = &plStack_c8;
    uStack_148 = 0x90;
    uStack_147 = 0x10b2092;
    iVar5 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&uStack_70,&pplStack_150);
    plVar1 = plStack_c8;
    if (iVar5 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&uStack_51,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10127c4b0);
      (*pcVar4)();
    }
    plVar2 = (long *)CONCAT71(uStack_bf,uStack_c0);
    lVar12 = CONCAT71(uStack_b7,uStack_b8);
    if (lVar12 == 5) {
      if ((int)*plVar2 == 0x61636f6c && *(char *)((long)plVar2 + 4) == 'l') {
        uVar7 = 0;
LAB_10127c418:
        *(undefined1 *)(param_1 + 1) = uVar7;
        *param_1 = 2;
        goto joined_r0x00010127c424;
      }
    }
    else if ((lVar12 == 9) && (*plVar2 == 0x726f6d656d5f6e69 && (char)plVar2[1] == 'y')) {
      uVar7 = 1;
      goto LAB_10127c418;
    }
    FUN_1087e44e4(param_1,plVar2,lVar12,&UNK_10b22e1a8,2);
joined_r0x00010127c424:
    if (plVar1 == (long *)0x0) {
      return;
    }
    _free(plVar2);
    return;
  }
  if (0 < (long)uVar8) {
    if (uVar8 == 1) {
      uStack_148 = (undefined1)param_2[1];
      uStack_147 = (undefined7)(param_2[1] >> 8);
      uVar7 = 2;
    }
    else {
      if (uVar8 != 2) {
        pplStack_150 = (long **)((ulong)CONCAT61(pplStack_150._2_6_,(char)param_2[1]) << 8);
        goto LAB_10127c454;
      }
      uStack_148 = (undefined1)param_2[1];
      uStack_147 = (undefined7)(param_2[1] >> 8);
      uVar7 = 3;
    }
    pplStack_150 = (long **)CONCAT71(pplStack_150._1_7_,uVar7);
LAB_10127c454:
    FUN_1087e3db0(param_1,&pplStack_150,&uStack_51,&UNK_10b21ae90);
    return;
  }
  uVar8 = param_2[1];
  plVar1 = (long *)param_2[2];
  uVar11 = param_2[3];
  if (uVar11 == 5) {
    if ((int)*plVar1 == 0x61636f6c && *(char *)((long)plVar1 + 4) == 'l') {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      if (uVar8 == 0) {
        return;
      }
      goto LAB_10127c308;
    }
LAB_10127c0dc:
    FUN_1087e44e4(param_1,plVar1,uVar11,&UNK_10b22e1a8,2);
  }
  else {
    if ((uVar11 != 9) || (*plVar1 != 0x726f6d656d5f6e69 || (char)plVar1[1] != 'y'))
    goto LAB_10127c0dc;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
  }
  if (uVar8 == 0) {
    return;
  }
LAB_10127c308:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar1);
  return;
}

