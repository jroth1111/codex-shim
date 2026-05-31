
void FUN_10042af2c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_3f8 [280];
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  plVar7 = *(long **)(param_2 + 0x18);
  plVar6 = *(long **)(param_2 + 8);
  if (plVar6 != plVar7) {
    plVar5 = *(long **)(param_2 + 0x20);
    do {
      lStack_2d8 = plVar6[1];
      lStack_2e0 = *plVar6;
      lStack_2c8 = plVar6[3];
      lStack_2d0 = plVar6[2];
      lStack_2b8 = plVar6[5];
      lStack_2c0 = plVar6[4];
      lStack_2a8 = plVar6[7];
      lStack_2b0 = plVar6[6];
      lStack_298 = plVar6[9];
      lStack_2a0 = plVar6[8];
      lStack_288 = plVar6[0xb];
      lStack_290 = plVar6[10];
      lStack_278 = plVar6[0xd];
      lStack_280 = plVar6[0xc];
      lStack_268 = plVar6[0xf];
      lStack_270 = plVar6[0xe];
      lStack_258 = plVar6[0x11];
      lStack_260 = plVar6[0x10];
      lStack_248 = plVar6[0x13];
      lStack_250 = plVar6[0x12];
      lStack_238 = plVar6[0x15];
      lStack_240 = plVar6[0x14];
      lStack_228 = plVar6[0x17];
      lStack_230 = plVar6[0x16];
      lStack_218 = plVar6[0x19];
      lStack_220 = plVar6[0x18];
      lStack_208 = plVar6[0x1b];
      lStack_210 = plVar6[0x1a];
      plVar6 = plVar6 + 0x1c;
      *(long **)(param_2 + 8) = plVar6;
      plVar1 = (long *)0x0;
      if (lStack_298 != -0x8000000000000000) {
        plVar1 = &lStack_298;
      }
      func_0x000104aa15b8(&uStack_1f8,plVar1,&UNK_108cb04d1,0xc);
      func_0x000104aa15b8(&lStack_1a8,plVar1,&UNK_108cb04dd,0xe);
      if (lStack_1a8 == -0x8000000000000000) {
        func_0x000104aa15b8(&lStack_1e0,plVar1,&UNK_108cb55fd,0x16);
      }
      else {
        uStack_1d8 = uStack_1a0;
        lStack_1e0 = lStack_1a8;
        uStack_1d0 = uStack_198;
      }
      func_0x000104aa15b8(&lStack_1a8,plVar1,&UNK_108cb55e8,0x15);
      if (lStack_1a8 == -0x8000000000000000) {
        func_0x000104aa15b8(&lStack_1c0,plVar1,&UNK_108cb5613,0x14);
      }
      else {
        uStack_1b8 = uStack_1a0;
        lStack_1c0 = lStack_1a8;
        uStack_1b0 = uStack_198;
      }
      lVar3 = lStack_2d8;
      lVar2 = lStack_2e0;
      lStack_e8 = lStack_228;
      lStack_f0 = lStack_230;
      lStack_d8 = lStack_218;
      lStack_e0 = lStack_220;
      lStack_c8 = lStack_208;
      lStack_d0 = lStack_210;
      lStack_128 = lStack_268;
      lStack_130 = lStack_270;
      lStack_118 = lStack_258;
      lStack_120 = lStack_260;
      lStack_108 = lStack_248;
      lStack_110 = lStack_250;
      lStack_f8 = lStack_238;
      lStack_100 = lStack_240;
      lStack_168 = lStack_2a8;
      lStack_170 = lStack_2b0;
      lStack_158 = lStack_298;
      lStack_160 = lStack_2a0;
      lStack_148 = lStack_288;
      lStack_150 = lStack_290;
      lStack_138 = lStack_278;
      lStack_140 = lStack_280;
      lStack_188 = lStack_2c8;
      lStack_190 = lStack_2d0;
      lStack_178 = lStack_2b8;
      lStack_180 = lStack_2c0;
      uStack_b8 = uStack_1f0;
      uStack_c0 = uStack_1f8;
      uStack_b0 = uStack_1e8;
      uStack_a0 = uStack_1d8;
      lStack_a8 = lStack_1e0;
      uStack_98 = uStack_1d0;
      uStack_88 = uStack_1b8;
      lStack_90 = lStack_1c0;
      uStack_80 = uStack_1b0;
      if (lStack_2e0 == -0x7fffffffffffffff) {
        puVar4 = (undefined8 *)*plVar5;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)();
        }
        *plVar5 = lVar3;
        break;
      }
      _memcpy(auStack_3f8,&lStack_190,0x118);
      if (lVar2 != -0x7ffffffffffffffe) {
        _memcpy(param_1 + 2,auStack_3f8,0x118);
        *param_1 = lVar2;
        param_1[1] = lVar3;
        return;
      }
    } while (plVar6 != plVar7);
  }
  *param_1 = -0x7fffffffffffffff;
  return;
}

