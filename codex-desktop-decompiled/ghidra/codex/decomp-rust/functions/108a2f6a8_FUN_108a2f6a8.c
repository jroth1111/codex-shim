
void FUN_108a2f6a8(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4,long *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_1d0;
  undefined8 uStack_1b8;
  undefined1 uStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  
  __ZN15rama_http_types5proto2h17headers3map14Http1HeaderMap13with_capacity17h8c873a2d3fda7a39E
            (&uStack_3c0,*(long *)(param_2 + 0x40) + *(long *)(param_2 + 0x28));
  __ZN15rama_http_types5proto2h17headers3map14Http1HeaderMap3new17h2b39f30394b86745E
            (&uStack_348,param_2,param_4);
  if (lStack_2d8 == 0) {
    uStack_280 = uStack_310;
    uStack_288 = uStack_318;
    uStack_278 = uStack_308;
    if (lStack_2f8 != 0) {
      _free(uStack_300);
    }
    uStack_2c8 = uStack_288;
    lStack_2d0 = lStack_290;
    uStack_2b8 = uStack_278;
    uStack_2c0 = uStack_280;
    FUN_105ada09c(lStack_2e0,0);
    lStack_228 = lStack_328 + lStack_320 * 0x68;
    if (lStack_2e8 != 0) {
      _free(lStack_2e0);
    }
    lStack_328 = 0;
    lStack_290 = 0;
    lStack_1d0 = -0x7fffffffffffffff;
  }
  else {
    lStack_228 = 0;
    lStack_1d0 = lStack_2e0 + lStack_2d8 * 0x40;
    uStack_2a8 = uStack_340;
    uStack_2b0 = uStack_348;
    uStack_298 = uStack_330;
    uStack_2a0 = uStack_338;
    uStack_2c8 = uStack_318;
    lStack_2d0 = lStack_320;
    uStack_2b8 = uStack_308;
    uStack_2c0 = uStack_310;
    lStack_290 = 2;
  }
  uStack_280 = uStack_2a8;
  uStack_288 = uStack_2b0;
  uStack_270 = uStack_298;
  uStack_278 = uStack_2a0;
  uStack_258 = uStack_2c8;
  lStack_260 = lStack_2d0;
  uStack_248 = uStack_2b8;
  uStack_250 = uStack_2c0;
  uStack_220 = 3;
  uStack_150 = 4;
  uStack_1b8 = 0;
  lStack_268 = lStack_328;
  do {
    __ZN123__LT_rama_http_types__proto__h1__headers__map__Http1HeaderMapIntoIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3242b0fdf4d4bb07E
              (&lStack_148,&lStack_290);
    auVar10._8_8_ = uStack_138;
    auVar10._0_8_ = uStack_140;
    auVar2._8_8_ = uStack_118;
    auVar2._0_8_ = uStack_120;
    if (cStack_e8 == '\x02') {
      FUN_105aaf230(&lStack_290);
      param_1[9] = uStack_378;
      param_1[8] = uStack_380;
      param_1[0xb] = uStack_368;
      param_1[10] = uStack_370;
      param_1[0xd] = uStack_358;
      param_1[0xc] = uStack_360;
      param_1[0xe] = uStack_350;
      param_1[1] = uStack_3b8;
      *param_1 = uStack_3c0;
      param_1[3] = uStack_3a8;
      param_1[2] = uStack_3b0;
      param_1[5] = uStack_398;
      param_1[4] = uStack_3a0;
      param_1[7] = uStack_388;
      param_1[6] = uStack_390;
      return;
    }
    uStack_d8 = uStack_140;
    lStack_e0 = lStack_148;
    uStack_c8 = uStack_130;
    uStack_d0 = uStack_138;
    uStack_b8 = uStack_120;
    lStack_c0 = lStack_128;
    uStack_a8 = uStack_110;
    uStack_b0 = uStack_118;
    uStack_98 = uStack_100;
    uStack_a0 = uStack_108;
    uStack_88 = uStack_f0;
    uStack_90 = uStack_f8;
    if ((param_3 & 1) == 0) {
      if (lStack_128 == 0) {
        if (lStack_148 == 0) {
          auVar10 = FUN_10579b148(uStack_140 & 0xff);
          lVar7 = param_5[2];
          if ((ulong)(*param_5 - lVar7) < auVar10._8_8_) goto LAB_108a2facc;
        }
        else {
          lVar7 = param_5[2];
          if ((ulong)(*param_5 - lVar7) < uStack_138) {
LAB_108a2facc:
            FUN_108a3285c(param_5,lVar7,auVar10._8_8_,1,1);
            lVar7 = param_5[2];
          }
        }
      }
      else {
        lVar7 = param_5[2];
        auVar10 = auVar2;
        if ((ulong)(*param_5 - lVar7) < uStack_118) goto LAB_108a2facc;
      }
      _memcpy(param_5[1] + lVar7,auVar10._0_8_,auVar10._8_8_);
      lVar7 = lVar7 + auVar10._8_8_;
      param_5[2] = lVar7;
    }
    else {
      if (lStack_128 == 0) {
        if (lStack_148 == 0) {
          auVar10 = FUN_10579b148(uStack_140 & 0xff);
          lVar7 = param_5[2];
          if (auVar10._8_8_ <= (ulong)(*param_5 - lVar7)) goto LAB_108a2f8d4;
          goto LAB_108a2f978;
        }
        lVar7 = param_5[2];
        if ((ulong)(*param_5 - lVar7) < uStack_138) goto LAB_108a2f978;
LAB_108a2f8d4:
        if (auVar10._8_8_ == 0) goto LAB_108a2f9d8;
      }
      else {
        lVar7 = param_5[2];
        auVar10 = auVar2;
        if (uStack_118 <= (ulong)(*param_5 - lVar7)) goto LAB_108a2f8d4;
LAB_108a2f978:
        FUN_108a3285c(param_5,lVar7,auVar10._8_8_,1,1);
        lVar7 = param_5[2];
      }
      bVar5 = 0x2d;
      do {
        pbVar8 = auVar10._0_8_;
        bVar1 = *pbVar8;
        bVar9 = 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f) || bVar5 != 0x2d) {
          bVar9 = 0;
        }
        if (lVar7 == *param_5) {
          func_0x0001087c90b8(param_5);
        }
        bVar5 = bVar9 ^ bVar1;
        *(byte *)(param_5[1] + lVar7) = bVar5;
        lVar7 = lVar7 + 1;
        param_5[2] = lVar7;
        lVar6 = auVar10._8_8_ + -1;
        auVar10._8_8_ = lVar6;
        auVar10._0_8_ = pbVar8 + 1;
      } while (lVar6 != 0);
    }
LAB_108a2f9d8:
    uVar4 = uStack_90;
    if (uStack_90 == 0) {
      if ((ulong)(*param_5 - lVar7) < 3) {
        FUN_108a3285c(param_5,lVar7,3,1,1);
        lVar7 = param_5[2];
      }
      lVar6 = param_5[1];
      *(undefined2 *)(lVar6 + lVar7) = 0xd3a;
      *(undefined1 *)((undefined2 *)(lVar6 + lVar7) + 1) = 10;
      lVar7 = lVar7 + 3;
    }
    else {
      if ((ulong)(*param_5 - lVar7) < 2) {
        FUN_108a3285c(param_5,lVar7,2,1,1);
        lVar7 = param_5[2];
      }
      uVar3 = uStack_98;
      *(undefined2 *)(param_5[1] + lVar7) = 0x203a;
      lVar7 = lVar7 + 2;
      param_5[2] = lVar7;
      if ((ulong)(*param_5 - lVar7) < uVar4) {
        FUN_108a3285c(param_5,lVar7,uVar4,1,1);
        lVar7 = param_5[2];
      }
      _memcpy(param_5[1] + lVar7,uVar3,uVar4);
      lVar7 = lVar7 + uVar4;
      param_5[2] = lVar7;
      if ((ulong)(*param_5 - lVar7) < 2) {
        FUN_108a3285c(param_5,lVar7,2,1,1);
        lVar7 = param_5[2];
      }
      *(undefined2 *)(param_5[1] + lVar7) = 0xa0d;
      lVar7 = lVar7 + 2;
    }
    param_5[2] = lVar7;
    func_0x000105aa7328(&uStack_3c0,&lStack_148,&uStack_108);
  } while( true );
}

