
/* WARNING: Possible PIC construction at 0x0001013d67e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d67e4) */

void FUN_1013d639c(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong uVar10;
  undefined8 unaff_x21;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined8 unaff_x30;
  undefined1 auStack_290 [88];
  ulong *puStack_238;
  undefined *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined *puStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined *puStack_ff;
  undefined8 uStack_f7;
  undefined8 uStack_ef;
  undefined8 uStack_e7;
  undefined8 uStack_df;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
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
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  puVar13 = &stack0xfffffffffffffff0;
  puVar4 = auStack_290 + 0x50;
  uVar10 = *param_2;
  uVar7 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar7 = 6;
  }
  if (3 < (long)uVar7) {
    unaff_x22 = &uStack_1b0;
    if (uVar7 == 5) {
      uVar7 = param_2[1];
      uVar10 = param_2[2];
      uVar12 = param_2[3];
      uStack_b0 = uVar10 + uVar12 * 0x50;
      uStack_120 = CONCAT71(uStack_120._1_7_,10);
      uStack_c8 = uVar10;
      puStack_c0 = (undefined *)uVar10;
      uStack_b8 = uVar7;
      FUN_1087e3db0(&puStack_238,&uStack_120,&uStack_198,&UNK_10b209c80);
      uStack_178 = uStack_228;
      puStack_180 = puStack_230;
      uStack_170 = uStack_220;
      if (puStack_238 == (ulong *)0x2) {
        uStack_138 = uStack_228;
        puStack_140 = puStack_230;
        uStack_130 = uStack_220;
        if (uVar12 == 0) {
          param_1[2] = uStack_228;
          param_1[1] = (ulong)puStack_230;
          param_1[3] = uStack_220;
          *param_1 = 2;
        }
        else {
          FUN_1087e427c(&puStack_238,uVar12,&UNK_10b21cb80,&UNK_10b20a590);
          param_1[5] = uStack_210;
          param_1[4] = uStack_218;
          param_1[7] = uStack_200;
          param_1[6] = uStack_208;
          param_1[9] = uStack_1f0;
          param_1[8] = uStack_1f8;
          param_1[10] = uStack_1e8;
          param_1[1] = (ulong)puStack_230;
          *param_1 = (ulong)puStack_238;
          param_1[3] = uStack_220;
          param_1[2] = uStack_228;
          func_0x000100d2ad0c(&puStack_140);
        }
        lVar8 = uVar12 + 1;
        uVar12 = uVar10;
        while (lVar8 = lVar8 + -1, lVar8 != 0) {
          FUN_100ddb5bc(uVar12);
          uVar12 = uVar12 + 0x50;
        }
      }
      else {
        param_1[5] = uStack_210;
        param_1[4] = uStack_218;
        param_1[7] = uStack_200;
        param_1[6] = uStack_208;
        param_1[9] = uStack_1f0;
        param_1[8] = uStack_1f8;
        param_1[10] = uStack_1e8;
        param_1[2] = uStack_228;
        param_1[1] = (ulong)puStack_230;
        param_1[3] = uStack_220;
        lVar8 = uVar12 + 1;
        *param_1 = (ulong)puStack_238;
        uVar12 = uVar10;
        while (lVar8 = lVar8 + -1, lVar8 != 0) {
          FUN_100ddb5bc(uVar12);
          uVar12 = uVar12 + 0x50;
        }
      }
      if (uVar7 == 0) {
        return;
      }
      _free(uVar10);
      return;
    }
    if (uVar7 == 6) {
      uVar11 = param_2[6];
      uVar7 = param_2[1];
      uVar12 = param_2[2];
      uVar9 = param_2[4];
      if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
        _free(param_2[3] + uVar9 * -8 + -8);
      }
      uStack_1b8 = uVar7 + uVar12 * 0x70;
      puStack_238 = (ulong *)0x8000000000000000;
      uStack_198 = 0;
      uStack_188 = 0;
      uStack_1d0 = uVar7;
      uStack_1c8 = uVar7;
      uStack_1c0 = uVar10;
      do {
        FUN_1011ae894(&uStack_120,&puStack_238);
        uVar12 = uStack_108;
        uVar9 = uStack_110;
        puVar2 = puStack_118;
        uStack_178 = uStack_f7;
        puStack_180 = puStack_ff;
        uStack_168 = uStack_e7;
        uStack_170 = uStack_ef;
        uStack_160 = uStack_df;
        uStack_158 = uStack_d7;
        uStack_151 = uStack_d0;
        uStack_150 = uStack_cf;
        uVar7 = uStack_120;
        puVar1 = puStack_118;
        uVar10 = uStack_110;
        uVar6 = uStack_100;
        if (uStack_120 != 2) {
joined_r0x0001013d664c:
          if (uStack_198 == 0) {
            uVar9 = 0;
          }
          else {
            puStack_c0 = (undefined *)0x0;
            uStack_a0 = 0;
            uStack_9f = 0;
            uStack_98 = (undefined1)uStack_198;
            uStack_97 = (undefined7)(uStack_198 >> 8);
            uStack_90 = (undefined1)uStack_190;
            uStack_8f = (undefined7)(uStack_190 >> 8);
            uVar9 = uStack_188;
            uStack_b8 = uStack_198;
          }
          uStack_a8 = uStack_198 != 0;
          uStack_c8 = (ulong)(byte)uStack_a8;
          uStack_a7 = 0;
          uStack_88 = (undefined1)uVar9;
          uStack_87 = (undefined7)(uVar9 >> 8);
          while (FUN_100f3a554(&uStack_120,&uStack_c8), uStack_120 != 0) {
            lVar8 = uStack_120 + uStack_110 * 0x18;
            if (*(long *)(lVar8 + 8) != 0) {
              _free(*(undefined8 *)(lVar8 + 0x10));
            }
          }
          *(ulong *)((long)param_1 + 0x29) = uStack_178;
          *(undefined **)((long)param_1 + 0x21) = puStack_180;
          *(undefined8 *)((long)param_1 + 0x39) = uStack_168;
          *(ulong *)((long)param_1 + 0x31) = uStack_170;
          *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_151,uStack_158);
          *(undefined8 *)((long)param_1 + 0x41) = uStack_160;
          param_1[10] = CONCAT71(uStack_150,uStack_151);
          *param_1 = uVar7;
          param_1[1] = (ulong)puVar1;
          param_1[2] = uVar10;
          param_1[3] = uVar12;
          *(undefined1 *)(param_1 + 4) = uVar6;
LAB_1013d6758:
          FUN_100deffc0(&puStack_238);
          return;
        }
        if (puStack_118 == (undefined *)0x8000000000000000) {
          uStack_1a8 = uStack_190;
          uStack_1b0 = uStack_198;
          uStack_1a0 = uStack_188;
          if (uStack_1b8 == uStack_1c8) {
            param_1[2] = uStack_190;
            param_1[1] = uStack_198;
            param_1[3] = uStack_188;
            *param_1 = 2;
          }
          else {
            FUN_1087e427c(&uStack_c8,uVar11,&UNK_10b21cb90,&UNK_10b20a590);
            param_1[5] = CONCAT71(uStack_9f,uStack_a0);
            param_1[4] = CONCAT71(uStack_a7,uStack_a8);
            param_1[7] = CONCAT71(uStack_8f,uStack_90);
            param_1[6] = CONCAT71(uStack_97,uStack_98);
            param_1[9] = CONCAT71(uStack_7f,uStack_80);
            param_1[8] = CONCAT71(uStack_87,uStack_88);
            param_1[10] = CONCAT71(uStack_77,uStack_78);
            param_1[1] = (ulong)puStack_c0;
            *param_1 = uStack_c8;
            param_1[3] = uStack_b0;
            param_1[2] = uStack_b8;
            func_0x000100d2ad0c(&uStack_1b0);
          }
          goto LAB_1013d6758;
        }
        func_0x0001011aed90(&uStack_c8,&puStack_238);
        uVar10 = uStack_b8;
        puVar1 = puStack_c0;
        if (uStack_c8 != 2) {
          uStack_178 = CONCAT17(uStack_98,uStack_9f);
          puStack_180 = (undefined *)CONCAT17(uStack_a0,uStack_a7);
          uStack_168 = CONCAT17(uStack_88,uStack_8f);
          uStack_170 = CONCAT17(uStack_90,uStack_97);
          uStack_160 = CONCAT17(uStack_80,uStack_87);
          uStack_158 = uStack_7f;
          uStack_151 = uStack_78;
          uStack_150 = uStack_77;
          uVar7 = uStack_c8;
          uVar12 = uStack_b0;
          uVar6 = uStack_a8;
          if (puVar2 != (undefined *)0x0) {
            _free(uVar9);
          }
          goto joined_r0x0001013d664c;
        }
        puStack_140 = puVar2;
        uStack_138 = uVar9;
        uStack_130 = uVar12;
        FUN_100f32b40(&uStack_198,&puStack_140,(ulong)puStack_c0 & 0xff);
      } while( true );
    }
    uStack_178 = param_2[2];
    puStack_180 = (undefined *)param_2[1];
    uStack_170 = param_2[3];
    uStack_c8 = 0;
    puStack_c0 = (undefined *)0x1;
    uStack_b8 = 0;
    uStack_228 = 0x60000020;
    puStack_238 = &uStack_c8;
    puStack_230 = &UNK_10b209290;
    iVar5 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&puStack_180,&puStack_238);
    if (iVar5 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&uStack_198,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d68b0);
      (*pcVar3)();
    }
    puStack_118 = puStack_c0;
    uStack_120 = uStack_c8;
    uStack_110 = uStack_b8;
    param_2 = &uStack_120;
    unaff_x30 = 0x1013d67e4;
    unaff_x19 = param_1;
SUB_108810dcc:
    *(ulong **)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(ulong *)(puVar4 + -0x20) = uVar10;
    *(ulong **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar13;
    *(undefined8 *)(puVar4 + -8) = unaff_x30;
    uVar7 = param_2[1];
    uVar10 = param_2[2];
    *(ulong *)(puVar4 + -0x48) = uVar7;
    *(ulong *)(puVar4 + -0x40) = uVar10;
    puVar4[-0x50] = 5;
    FUN_1087e3db0(param_1,puVar4 + -0x50,puVar4 + -0x31,&UNK_10b209c80);
    if (*param_2 != 0) {
      _free(uVar7);
    }
    return;
  }
  if ((long)uVar7 < 2) {
    if (uVar7 == 0) {
      param_2 = param_2 + 1;
      puVar4 = (undefined1 *)register0x00000008;
      uVar10 = unaff_x20;
      puVar13 = unaff_x29;
      goto SUB_108810dcc;
    }
    puStack_230 = (undefined *)param_2[1];
    uVar6 = 2;
  }
  else {
    if (uVar7 != 2) {
      puStack_238 = (ulong *)((ulong)CONCAT61(puStack_238._2_6_,(char)param_2[1]) << 8);
      goto LAB_1013d65ac;
    }
    puStack_230 = (undefined *)param_2[1];
    uVar6 = 3;
  }
  puStack_238 = (ulong *)CONCAT71(puStack_238._1_7_,uVar6);
LAB_1013d65ac:
  FUN_1087e3db0(param_1,&puStack_238,&uStack_198,&UNK_10b209c80);
  return;
}

