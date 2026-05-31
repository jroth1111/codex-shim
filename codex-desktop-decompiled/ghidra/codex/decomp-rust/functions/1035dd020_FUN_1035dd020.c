
void FUN_1035dd020(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  uVar8 = *param_2;
  uVar6 = uVar8 ^ 0x8000000000000000;
  if (-1 < (long)uVar8) {
    uVar6 = 6;
  }
  if (3 < (long)uVar6) {
    if (uVar6 != 4) {
      if (uVar6 != 5) {
        uVar7 = param_2[6];
        uVar6 = param_2[1];
        uVar4 = param_2[2];
        uVar9 = param_2[4];
        if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
          _free(param_2[3] + uVar9 * -8 + -8);
        }
        lStack_d0 = uVar6 + uVar4 * 0x70;
        puStack_150 = (ulong *)0x8000000000000000;
        uStack_70 = CONCAT71(uStack_70._1_7_,0xb);
        uStack_e8 = uVar6;
        uStack_e0 = uVar6;
        uStack_d8 = uVar8;
        FUN_108921f70(&uStack_c8,&uStack_70,&uStack_51,&UNK_10b29b570);
        uVar8 = uStack_b8;
        uVar6 = uStack_c0;
        if (uStack_c8 == 2) {
          if (uVar4 == 0) {
            param_1[2] = uStack_b8;
            param_1[3] = uStack_b0;
            *param_1 = 2;
            param_1[1] = uStack_c0;
          }
          else {
            FUN_1089223ec(&uStack_c8,uVar7,&UNK_10b2b6878,&UNK_10b29b520);
            param_1[5] = uStack_a0;
            param_1[4] = uStack_a8;
            param_1[7] = uStack_90;
            param_1[6] = uStack_98;
            param_1[9] = uStack_80;
            param_1[8] = uStack_88;
            param_1[10] = uStack_78;
            param_1[1] = uStack_c0;
            *param_1 = uStack_c8;
            param_1[3] = uStack_b0;
            param_1[2] = uStack_b8;
            if (uVar6 != 0) {
              _free(uVar8);
            }
          }
        }
        else {
          param_1[5] = uStack_a0;
          param_1[4] = uStack_a8;
          param_1[7] = uStack_90;
          param_1[6] = uStack_98;
          param_1[9] = uStack_80;
          param_1[8] = uStack_88;
          param_1[10] = uStack_78;
          *param_1 = uStack_c8;
          param_1[1] = uStack_c0;
          param_1[2] = uStack_b8;
          param_1[3] = uStack_b0;
        }
        FUN_10338a7ec(&puStack_150);
        return;
      }
      uVar6 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uStack_b0 = uVar8 + uVar9 * 0x50;
      uStack_70 = CONCAT71(uStack_70._1_7_,10);
      uStack_c8 = uVar8;
      uStack_c0 = uVar8;
      uStack_b8 = uVar6;
      FUN_108921f70(&puStack_150,&uStack_70,&uStack_51,&UNK_10b29b570);
      uVar4 = uStack_140;
      puVar1 = puStack_148;
      if (puStack_150 == (ulong *)0x2) {
        if (uVar9 == 0) {
          param_1[2] = uStack_140;
          param_1[3] = uStack_138;
          *param_1 = 2;
          param_1[1] = (ulong)puStack_148;
        }
        else {
          FUN_1089223ec(&puStack_150,uVar9,&UNK_10b2b6868,&UNK_10b29b520);
          param_1[5] = uStack_128;
          param_1[4] = uStack_130;
          param_1[7] = uStack_118;
          param_1[6] = uStack_120;
          param_1[9] = uStack_108;
          param_1[8] = uStack_110;
          param_1[10] = uStack_100;
          param_1[1] = (ulong)puStack_148;
          *param_1 = (ulong)puStack_150;
          param_1[3] = uStack_138;
          param_1[2] = uStack_140;
          if (puVar1 != (undefined *)0x0) {
            _free(uVar4);
          }
        }
        lVar10 = uVar9 + 1;
        uVar4 = uVar8;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_10337b6e4(uVar4);
          uVar4 = uVar4 + 0x50;
        }
      }
      else {
        param_1[5] = uStack_128;
        param_1[4] = uStack_130;
        param_1[7] = uStack_118;
        param_1[6] = uStack_120;
        param_1[9] = uStack_108;
        param_1[8] = uStack_110;
        param_1[10] = uStack_100;
        *param_1 = (ulong)puStack_150;
        param_1[1] = (ulong)puStack_148;
        lVar10 = uVar9 + 1;
        param_1[2] = uStack_140;
        param_1[3] = uStack_138;
        uVar4 = uVar8;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_10337b6e4(uVar4);
          uVar4 = uVar4 + 0x50;
        }
      }
      if (uVar6 == 0) {
        return;
      }
      _free(uVar8);
      return;
    }
    uStack_68 = param_2[2];
    uStack_70 = param_2[1];
    uStack_60 = param_2[3];
    uStack_c8 = 0;
    uStack_c0 = 1;
    uStack_b8 = 0;
    uStack_140 = 0x60000020;
    puStack_150 = &uStack_c8;
    puStack_148 = &UNK_10b29a448;
    iVar3 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&uStack_70,&puStack_150);
    if (iVar3 != 0) {
      func_0x000108a07a3c(&UNK_108d8639e,0x37,&uStack_51,&UNK_10b2c0eb8,&UNK_10b2c0b18);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1035dd30c);
      (*pcVar2)();
    }
    param_1[2] = uStack_c0;
    param_1[1] = uStack_c8;
LAB_1035dd154:
    param_1[3] = uStack_b8;
    *param_1 = 2;
    return;
  }
  if ((long)uVar6 < 1) {
    uVar6 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    uStack_b8 = param_2[3];
    goto LAB_1035dd154;
  }
  if (uVar6 == 1) {
    puStack_148 = (undefined *)param_2[1];
    uVar5 = 2;
  }
  else {
    if (uVar6 != 2) {
      puStack_150 = (ulong *)((ulong)CONCAT61(puStack_150._2_6_,(char)param_2[1]) << 8);
      goto LAB_1035dd2b0;
    }
    puStack_148 = (undefined *)param_2[1];
    uVar5 = 3;
  }
  puStack_150 = (ulong *)CONCAT71(puStack_150._1_7_,uVar5);
LAB_1035dd2b0:
  FUN_108921f70(param_1,&puStack_150,&uStack_51,&UNK_10b29b570);
  return;
}

