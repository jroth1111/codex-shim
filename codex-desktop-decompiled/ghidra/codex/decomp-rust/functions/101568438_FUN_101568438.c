
void FUN_101568438(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long in_x9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long lVar7;
  long lVar8;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
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
  long lStack_200;
  long lStack_1f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_368 = param_2[1];
  lVar7 = *param_2;
  lVar8 = param_2[3];
  lStack_3f0 = param_2[2];
  lVar2 = param_2[4];
  lVar3 = param_2[5];
  lStack_360 = lVar2;
  lStack_350 = lVar2;
  lStack_400 = lVar7;
  lStack_3f8 = lStack_368;
  lStack_3e8 = lVar8;
  lStack_3e0 = lVar2;
  if (lVar7 < 4) {
    if (lVar7 < 2) {
      if (lVar7 == 0) {
        lStack_370 = 0;
        lStack_360 = in_x9;
        lStack_350 = unaff_x21;
        lStack_368 = unaff_x26;
      }
      else {
LAB_1015684fc:
        lStack_370 = *param_2;
        unaff_x22 = param_2[3];
        lStack_360 = param_2[2];
        lStack_350 = param_2[4];
        lStack_368 = param_2[1];
      }
    }
    else {
      if (lVar7 != 2) goto LAB_1015684fc;
      if (lVar2 == 0) {
        unaff_x22 = 1;
      }
      else {
        unaff_x22 = _malloc(lVar2);
        if (unaff_x22 == 0) goto LAB_1015687e0;
      }
      _memcpy(unaff_x22,lVar8,lVar2);
      lStack_370 = 2;
    }
  }
  else {
    if ((5 < lVar7) || (lVar7 != 4)) goto LAB_1015684fc;
    if (lVar2 == 0) {
      unaff_x22 = 1;
    }
    else {
      unaff_x22 = _malloc(lVar2);
      if (unaff_x22 == 0) {
LAB_1015687e0:
        func_0x0001087c9084(1,lVar2);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1015687f0);
        (*pcVar6)();
      }
    }
    _memcpy(unaff_x22,lVar8,lVar2);
    lStack_370 = 4;
  }
  uStack_318 = param_3[1];
  uStack_320 = *param_3;
  uStack_308 = param_3[3];
  uStack_310 = param_3[2];
  uStack_2f8 = param_3[5];
  uStack_300 = param_3[4];
  uStack_2e8 = param_3[7];
  uStack_2f0 = param_3[6];
  uStack_2d8 = param_3[9];
  uStack_2e0 = param_3[8];
  uStack_2c0 = param_3[0xc];
  uStack_2c8 = param_3[0xb];
  lVar2 = param_3[10];
  lVar8 = param_3[0xb];
  plStack_340 = &lStack_370;
  uStack_348 = 5;
  lStack_f0 = 5;
  uStack_d8 = uStack_330;
  lStack_e0 = lStack_338;
  uStack_d0 = uStack_328;
  lStack_358 = unaff_x22;
  lStack_2d0 = lVar2;
  lStack_2b8 = lVar3;
  plStack_e8 = plStack_340;
  func_0x0001015f421c(&lStack_250,&uStack_320,&lStack_f0,lVar3);
  lVar1 = lStack_250;
  if (lStack_250 == 4) {
    lStack_98 = lStack_220;
    lStack_a0 = lStack_228;
    lStack_88 = lStack_210;
    lStack_90 = lStack_218;
    lStack_78 = lStack_200;
    lStack_80 = lStack_208;
    lStack_70 = lStack_1f8;
    lStack_b8 = lStack_240;
    lStack_c0 = lStack_248;
    lStack_a8 = lStack_230;
    lStack_b0 = lStack_238;
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_f0);
    lStack_250 = 4;
  }
  if (((lStack_f0 == 2) || (lStack_f0 == 4)) && (lStack_e0 != 0)) {
    _free(uStack_d8);
  }
  if (lVar1 == 4) {
    param_1[6] = lStack_220;
    param_1[5] = lStack_228;
    param_1[8] = lStack_210;
    param_1[7] = lStack_218;
    param_1[10] = lStack_200;
    param_1[9] = lStack_208;
    param_1[0xb] = lStack_1f8;
    param_1[2] = lStack_240;
    param_1[1] = lStack_248;
    param_1[4] = lStack_230;
    param_1[3] = lStack_238;
    *param_1 = 5;
  }
  else {
    _memcpy(param_1,&lStack_250,0x158);
    if (*param_1 != 5) {
      bVar4 = false;
      goto joined_r0x000101568744;
    }
  }
  lStack_288 = param_1[6];
  lStack_290 = param_1[5];
  lStack_278 = param_1[8];
  lStack_280 = param_1[7];
  lStack_268 = param_1[10];
  lStack_270 = param_1[9];
  lStack_260 = param_1[0xb];
  lStack_2a8 = param_1[2];
  lStack_2b0 = param_1[1];
  lStack_298 = param_1[4];
  lStack_2a0 = param_1[3];
  __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_370);
  lVar1 = param_1[3];
  lVar5 = param_1[2];
  if ((*(uint *)(param_1 + 1) & 1) == 0) {
    lVar1 = lVar8;
    lVar5 = lVar2;
  }
  param_1[2] = lVar5;
  param_1[3] = lVar1;
  param_1[1] = 1;
  *param_1 = 5;
  lStack_228 = param_1[6];
  lStack_230 = param_1[5];
  lStack_218 = param_1[8];
  lStack_220 = param_1[7];
  lStack_208 = param_1[10];
  lStack_210 = param_1[9];
  lStack_200 = param_1[0xb];
  lStack_248 = param_1[2];
  lStack_250 = param_1[1];
  lStack_238 = param_1[4];
  lStack_240 = param_1[3];
  __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_370);
  *param_1 = 5;
  bVar4 = true;
joined_r0x000101568744:
  if (((lStack_370 == 2) || (lStack_370 == 4)) && (lStack_360 != 0)) {
    _free(lStack_358);
  }
  if (bVar4) {
    lStack_3a8 = param_1[6];
    lStack_3b0 = param_1[5];
    lStack_398 = param_1[8];
    lStack_3a0 = param_1[7];
    lStack_388 = param_1[10];
    lStack_390 = param_1[9];
    lStack_380 = param_1[0xb];
    lStack_3c8 = param_1[2];
    lStack_3d0 = param_1[1];
    lStack_3b8 = param_1[4];
    lStack_3c0 = param_1[3];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_400);
    *param_1 = 5;
  }
  if (((lVar7 == 2) || (lVar7 == 4)) && (lStack_3f0 != 0)) {
    _free(lStack_3e8);
  }
  return;
}

