
void FUN_10160334c(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  ulong *extraout_x1;
  ulong extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_d0;
  undefined1 auVar8 [16];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  uint auStack_e0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  uVar5 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar5 = 6;
  }
  cVar2 = SBORROW8(uVar5,2);
  cVar3 = (long)(uVar5 - 2) < 0;
  uVar4 = uVar5 == 2;
  if ((long)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar5 = param_2[1];
      cVar2 = SBORROW8(uVar5,-0x8000000000000000);
      cVar3 = (long)(uVar5 + 0x8000000000000000) < 0;
      uVar4 = uVar5 == 0x8000000000000000;
      if ((bool)uVar4) {
        uVar7 = param_2[2];
        uVar6 = param_2[3];
        if (uVar6 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = _malloc(uVar6);
          if (uVar5 == 0) {
            func_0x0001087c9084(1,uVar6);
            param_2 = extraout_x1;
            uVar5 = extraout_x8;
            goto LAB_1016033c4;
          }
        }
        _memcpy(uVar5,uVar7,uVar6);
        uStack_158 = uVar6;
        uStack_150 = uVar5;
        uStack_148 = uVar6;
      }
      else {
        uStack_150 = param_2[2];
        uStack_158 = param_2[1];
        uStack_148 = param_2[3];
      }
    }
    else {
      uStack_f8 = param_2[2];
      uStack_100 = param_2[1];
      uStack_e8 = param_2[4];
      uStack_f0 = param_2[3];
      auVar8 = func_0x00010612451c(&uStack_100,&uStack_100);
      if ((auVar8._0_8_ & 1) == 0) {
        auVar8 = func_0x0001061247b8(&uStack_100);
        if ((auVar8._0_8_ & 1) == 0) {
          func_0x0001061249a4(auStack_e0,&uStack_100);
          if ((auStack_e0[0] & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&uStack_c0,&uStack_100);
            if (((uint)uStack_c0 & 1) == 0) {
              uStack_160 = 0;
              FUN_100f1395c(&uStack_a0,&uStack_160);
              uStack_138 = uStack_78;
              puStack_140 = puStack_80;
              uStack_128 = uStack_68;
              uStack_130 = uStack_70;
              uStack_118 = uStack_58;
              uStack_120 = uStack_60;
              uStack_110 = uStack_50;
              uStack_158 = uStack_98;
              uStack_160 = uStack_a0;
              uStack_148 = uStack_88;
              uStack_150 = uStack_90;
              if ((uStack_100 & 0x7fffffffffffffff) != 0) {
                _free(uStack_f8);
                uStack_a0 = uStack_160;
              }
              goto LAB_1016036c8;
            }
            func_0x000108809c94(&uStack_160,uStack_b0,uStack_a8);
          }
          else {
            func_0x0001087f9538(&uStack_160,uStack_d0,uStack_c8);
          }
        }
        else {
          uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
          uStack_98 = auVar8._8_8_;
          FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b20a5e0);
        }
      }
      else {
        uStack_a0 = CONCAT71(uStack_a0._1_7_,2);
        uStack_98 = auVar8._8_8_;
        FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b20a5e0);
      }
      uVar5 = uStack_160;
      if ((uStack_100 & 0x7fffffffffffffff) == 0) goto joined_r0x0001016036c4;
      _free(uStack_f8);
      uStack_a0 = uStack_160;
      if (uStack_160 != 2) goto LAB_1016036c8;
    }
LAB_101603678:
    param_1[2] = uStack_150;
    param_1[1] = uStack_158;
    param_1[3] = uStack_148;
    *param_1 = 2;
  }
  else {
LAB_1016033c4:
    if ((bool)uVar4 || cVar3 != cVar2) {
      uStack_b8 = param_2[2];
      uStack_c0 = param_2[1];
      uStack_b0 = param_2[3];
      uVar5 = __ZN4toml2de6parser7devalue7DeFloat6to_f6417h9ff40819597a900bE(&uStack_c0);
      if ((uVar5 & 1) != 0) {
        uStack_a0 = CONCAT71(uStack_a0._1_7_,3);
        uStack_98 = extraout_d0;
        FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b20a5e0);
        uVar5 = uStack_160;
        if ((uStack_c0 & 0x7fffffffffffffff) != 0) {
          _free(uStack_b8);
          uVar5 = uStack_160;
        }
        goto joined_r0x0001016036c4;
      }
      puStack_140 = (undefined8 *)_malloc(0x20);
      if (puStack_140 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x20);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10160372c);
        (*pcVar1)();
      }
      puStack_140[1] = 0x6e20746e696f702d;
      *puStack_140 = 0x676e6974616f6c66;
      puStack_140[3] = 0x6465776f6c667265;
      puStack_140[2] = 0x766f207265626d75;
      uStack_148 = 0x20;
      uStack_130 = 0;
      uStack_138 = 0x20;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 8;
      if ((uStack_c0 & 0x7fffffffffffffff) != 0) {
        _free(uStack_b8);
      }
      uStack_a0 = 0;
    }
    else {
      if ((long)uVar5 < 5) {
        if (uVar5 == 3) {
          uStack_a0 = (ulong)CONCAT61(uStack_a0._2_6_,(char)param_2[1]) << 8;
        }
        else {
          uStack_a0 = CONCAT71(uStack_a0._1_7_,0xb);
        }
        FUN_1087e3db0(&uStack_160,&uStack_a0,auStack_e0,&UNK_10b20a5e0);
        uVar5 = uStack_160;
      }
      else if (uVar5 == 5) {
        uStack_90 = param_2[1];
        uStack_a0 = param_2[2];
        uStack_88 = uStack_a0 + param_2[3] * 0x60;
        uStack_98 = uStack_a0;
        func_0x00010882f92c(&uStack_160,&uStack_a0);
        uVar5 = uStack_160;
      }
      else {
        uStack_78 = param_2[5];
        puStack_80 = (undefined8 *)param_2[4];
        uStack_68 = param_2[7];
        uStack_70 = param_2[6];
        uStack_58 = param_2[9];
        uStack_60 = param_2[8];
        uStack_98 = param_2[1];
        uStack_a0 = *param_2;
        uStack_88 = param_2[3];
        uStack_90 = param_2[2];
        uStack_50 = uVar6;
        uStack_48 = uVar7;
        func_0x0001088716cc(&uStack_160,&uStack_a0);
        uVar5 = uStack_160;
      }
joined_r0x0001016036c4:
      uStack_a0 = uVar5;
      if (uStack_a0 == 2) goto LAB_101603678;
    }
LAB_1016036c8:
    param_1[4] = puStack_140;
    param_1[3] = uStack_148;
    param_1[6] = uStack_130;
    param_1[5] = uStack_138;
    param_1[8] = uStack_120;
    param_1[7] = uStack_128;
    param_1[10] = uStack_110;
    param_1[9] = uStack_118;
    if ((uStack_a0 & 1) == 0) {
      uStack_150 = uVar7;
      uStack_158 = uVar6;
    }
    *param_1 = 1;
    param_1[1] = uStack_158;
    param_1[2] = uStack_150;
  }
  return;
}

