
void FUN_1012eb004(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong *puStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  byte bStack_150;
  undefined1 uStack_14f;
  ulong uStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
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
  
  if (*param_2 == -0x7ffffffffffffffc) {
    lVar2 = param_2[1];
    puVar3 = (ulong *)param_2[2];
    uVar9 = param_2[3];
    lVar11 = uVar9 * 0x48;
    puVar1 = puVar3 + uVar9 * 9;
    uVar10 = uVar9;
    if (0xfffff < uVar9) {
      uVar10 = 0x100000;
    }
    if (uVar9 == 0) {
      uStack_1b0 = 0;
      uStack_1a8 = 1;
      uStack_1a0 = 0;
      puVar12 = puVar3;
    }
    else {
      uStack_1a8 = _malloc(uVar10);
      if (uStack_1a8 == 0) {
        func_0x0001087c9084(1,uVar10);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1012eb488);
        (*pcVar6)();
      }
      uStack_1a0 = 0;
      puVar4 = puVar3;
      uStack_1b0 = uVar10;
      while( true ) {
        puVar8 = puVar4 + 9;
        uVar10 = *puVar4;
        puVar12 = puVar8;
        if (uVar10 == 0x8000000000000005) break;
        uVar13 = puVar4[2];
        puVar12 = (ulong *)puVar4[1];
        uStack_178 = puVar4[4];
        uStack_180 = puVar4[3];
        uStack_168 = puVar4[6];
        uStack_170 = puVar4[5];
        uStack_158 = puVar4[8];
        uStack_160 = puVar4[7];
        uVar7 = uVar10 ^ 0x8000000000000000;
        if (-1 < (long)uVar10) {
          uVar7 = 5;
        }
        uStack_198 = uVar10;
        puStack_190 = puVar12;
        uStack_188 = uVar13;
        if (uVar7 == 3) {
          uStack_c8 = puVar4[2];
          uStack_d0 = puVar4[1];
          uStack_c0 = puVar4[3];
          uStack_b8 = 0x8000000000000005;
          func_0x000100b230f4(&bStack_150,&uStack_d0);
        }
        else if (uVar7 == 5) {
          if ((uStack_178 != 0) && (uStack_178 * 9 != -0x11)) {
            _free(uStack_180 + uStack_178 * -8 + -8);
          }
          puStack_128 = puVar12 + uVar13 * 0xd;
          puStack_138 = puVar12;
          puStack_140 = puVar12;
          uStack_130 = uVar10;
          if (uVar13 == 0) {
LAB_1012eb200:
            uStack_d0 = CONCAT71(uStack_d0._1_7_,0xb);
            uStack_148 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                   (&uStack_d0,&UNK_10b20a580,&UNK_10b20a590);
            bStack_150 = 1;
          }
          else {
            puStack_138 = puVar12 + 0xd;
            uVar10 = *puVar12;
            if (uVar10 == 0x8000000000000000) goto LAB_1012eb200;
            uVar7 = puVar12[1];
            uStack_c0 = puVar12[2];
            uStack_108 = puVar12[6];
            uStack_110 = puVar12[5];
            uStack_f8 = puVar12[8];
            uStack_100 = puVar12[7];
            uStack_e8 = puVar12[10];
            uStack_f0 = puVar12[9];
            uStack_e0 = puVar12[0xb];
            uStack_118 = puVar12[4];
            uStack_120 = puVar12[3];
            if (uVar13 == 1) {
LAB_1012eb1a0:
              uStack_a0 = puVar12[6];
              uStack_a8 = puVar12[5];
              uStack_90 = puVar12[8];
              uStack_98 = puVar12[7];
              uStack_80 = puVar12[10];
              uStack_88 = puVar12[9];
              uStack_78 = puVar12[0xb];
              uStack_b0 = puVar12[4];
              uStack_b8 = puVar12[3];
              uStack_d0 = uVar10;
              uStack_c8 = uVar7;
              func_0x000100b230f4(&bStack_150,&uStack_d0);
            }
            else {
              puStack_138 = puVar12 + 0x1a;
              uStack_d0 = puVar12[0xd];
              if (uStack_d0 == 0x8000000000000000) goto LAB_1012eb1a0;
              uStack_c0 = puVar12[0xf];
              uStack_c8 = puVar12[0xe];
              uStack_b0 = puVar12[0x11];
              uStack_b8 = puVar12[0x10];
              uStack_a0 = puVar12[0x13];
              uStack_a8 = puVar12[0x12];
              uStack_90 = puVar12[0x15];
              uStack_98 = puVar12[0x14];
              uStack_80 = puVar12[0x17];
              uStack_88 = puVar12[0x16];
              uStack_78 = puVar12[0x18];
              if (uStack_d0 != 0) {
                _free(uStack_c8);
              }
              FUN_100de6690(&uStack_b8);
              uStack_d0 = CONCAT71(uStack_d0._1_7_,0xb);
              uStack_148 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                     (&uStack_d0,&UNK_10b20a580,&UNK_10b20a590);
              bStack_150 = 1;
              FUN_100de6690(&uStack_120);
              if (uVar10 != 0) {
                _free(uVar7);
              }
            }
          }
          FUN_100de8910(&puStack_140);
        }
        else {
          __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
                    (&uStack_d0,&uStack_198);
          uStack_148 = func_0x000108a4a50c(&uStack_d0,&UNK_10b20a5b0,&UNK_10b20a590);
          bStack_150 = 1;
          FUN_100de6690(&uStack_198);
        }
        uVar5 = uStack_14f;
        uVar10 = uStack_1a0;
        if ((bStack_150 & 1) != 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_148;
          if (uStack_1b0 != 0) {
            _free(uStack_1a8);
          }
          goto LAB_1012eb3b0;
        }
        if (uStack_1a0 == uStack_1b0) {
          func_0x00010899db84(&uStack_1b0);
        }
        *(undefined1 *)(uStack_1a8 + uVar10) = uVar5;
        uStack_1a0 = uVar10 + 1;
        lVar11 = lVar11 + -0x48;
        puVar12 = puVar1;
        puVar4 = puVar8;
        if (lVar11 == 0) break;
      }
    }
    param_1[1] = uStack_1a8;
    *param_1 = uStack_1b0;
    param_1[2] = uStack_1a0;
    uVar10 = *param_1;
    puVar8 = puVar12;
    if ((uVar10 != 0x8000000000000000) && (puVar8 = puVar1, puVar1 != puVar12)) {
      uVar7 = param_1[1];
      uVar9 = FUN_1087e422c(uVar9,&UNK_10b21cb80,&UNK_10b20a590);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      puVar8 = puVar12;
      if (uVar10 != 0) {
        _free(uVar7);
      }
    }
LAB_1012eb3b0:
    lVar11 = ((ulong)((long)puVar1 - (long)puVar8) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100de6690(puVar8);
      puVar8 = puVar8 + 9;
    }
    if (lVar2 != 0) {
      _free(puVar3);
    }
  }
  else {
    uVar10 = FUN_108832ea0(param_2,&uStack_d0,&UNK_10b21cde0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    FUN_100de6690(param_2);
  }
  return;
}

