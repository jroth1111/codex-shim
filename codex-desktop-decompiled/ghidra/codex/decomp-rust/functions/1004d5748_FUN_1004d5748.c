
undefined8 FUN_1004d5748(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long lStack_208;
  long *plStack_200;
  undefined1 auStack_1d0 [8];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_3;
  puVar3 = (undefined4 *)_malloc(7);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar3 + 3) = 0x73726564;
    *puVar3 = 0x64616568;
    uStack_f0 = 7;
    uStack_e0 = 7;
    puStack_e8 = puVar3;
    FUN_100645a24(&lStack_d8,param_2,param_3);
    if (lStack_d8 == -0x7ffffffffffffffb) {
      _free(puVar3);
    }
    else {
      FUN_101497a9c(auStack_90,param_1 + 0x18,&uStack_f0,&lStack_d8);
      uStack_138 = uStack_80;
      lStack_140 = lStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_118 = uStack_60;
      uStack_120 = uStack_68;
      uStack_108 = uStack_50;
      uStack_110 = uStack_58;
      uStack_100 = uStack_48;
      if (lStack_88 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_140);
      }
      uStack_d0 = 0;
    }
    return uStack_d0;
  }
  uVar4 = FUN_107c03c64(1,7);
  _free();
  auVar13 = __Unwind_Resume(uVar4);
  lStack_228 = _malloc(lVar5);
  if (lStack_228 != 0) {
    _memcpy(lStack_228,auVar13._8_8_,lVar5);
    uStack_218 = 0x8000000000000000;
    lStack_230 = lVar5;
    lStack_220 = lVar5;
    if (*param_4 != -0x8000000000000000) {
      lVar1 = param_4[1];
      param_4 = (long *)param_4[2];
      if (param_4 == (long *)0x0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(param_4);
        if (lVar5 == 0) {
          FUN_107c03c64(1,param_4);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d58e8);
          (*pcVar2)();
        }
      }
      _memcpy(lVar5,lVar1,param_4);
      uStack_218 = 0x8000000000000003;
    }
    plStack_210 = param_4;
    lStack_208 = lVar5;
    plStack_200 = param_4;
    uVar4 = FUN_101497a9c(auStack_1d0,auVar13._0_8_ + 0x18,&lStack_230,&uStack_218);
    uStack_278 = uStack_1c0;
    lStack_280 = lStack_1c8;
    uStack_268 = uStack_1b0;
    uStack_270 = uStack_1b8;
    uStack_258 = uStack_1a0;
    uStack_260 = uStack_1a8;
    uStack_248 = uStack_190;
    uStack_250 = uStack_198;
    uStack_240 = uStack_188;
    if (lStack_1c8 != -0x7ffffffffffffffb) {
      uVar4 = FUN_100de6690(&lStack_280);
    }
    return uVar4;
  }
  uVar4 = FUN_107c03c64(1,lVar5);
  _free(param_3);
  auVar13 = __Unwind_Resume(uVar4);
  lVar11 = auVar13._8_8_;
  plVar6 = auVar13._0_8_;
  lVar5 = *(long *)(lVar11 + 8);
  lVar1 = *(long *)(lVar11 + 0x10);
  if (lVar1 == 0) {
    lVar7 = 1;
    _memcpy(1,lVar5,0);
    uVar4 = *(undefined8 *)(lVar11 + 0x20);
    lVar5 = *(long *)(lVar11 + 0x28);
    if (lVar5 == 0) goto LAB_1004d5a5c;
LAB_1004d59e4:
    lVar8 = _malloc(lVar5);
    if (lVar8 == 0) goto LAB_1004d5ae8;
    _memcpy(lVar8,uVar4,lVar5);
    uVar4 = *(undefined8 *)(lVar11 + 0x38);
    lVar12 = *(long *)(lVar11 + 0x40);
    if (lVar12 != 0) goto LAB_1004d5a08;
LAB_1004d5a78:
    lVar9 = 1;
    _memcpy(1,uVar4,lVar12);
    uVar4 = *(undefined8 *)(lVar11 + 0x50);
    lVar11 = *(long *)(lVar11 + 0x58);
  }
  else {
    lVar7 = _malloc(lVar1);
    if (lVar7 == 0) {
      FUN_107c03c64(1,lVar1);
LAB_1004d5ae8:
      FUN_107c03c64(1,lVar5);
      goto LAB_1004d5b14;
    }
    _memcpy(lVar7,lVar5,lVar1);
    uVar4 = *(undefined8 *)(lVar11 + 0x20);
    lVar5 = *(long *)(lVar11 + 0x28);
    if (lVar5 != 0) goto LAB_1004d59e4;
LAB_1004d5a5c:
    lVar8 = 1;
    _memcpy(1,uVar4,lVar5);
    uVar4 = *(undefined8 *)(lVar11 + 0x38);
    lVar12 = *(long *)(lVar11 + 0x40);
    if (lVar12 == 0) goto LAB_1004d5a78;
LAB_1004d5a08:
    lVar9 = _malloc(lVar12);
    if (lVar9 == 0) {
      FUN_107c03c64(1,lVar12);
      goto LAB_1004d5b14;
    }
    _memcpy(lVar9,uVar4,lVar12);
    uVar4 = *(undefined8 *)(lVar11 + 0x50);
    lVar11 = *(long *)(lVar11 + 0x58);
  }
  if (lVar11 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = _malloc(lVar11);
    if (lVar10 == 0) {
      FUN_107c03c64(1,lVar11);
LAB_1004d5b14:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d5b18);
      (*pcVar2)();
    }
  }
  uVar4 = _memcpy(lVar10,uVar4,lVar11);
  *plVar6 = lVar1;
  plVar6[1] = lVar7;
  plVar6[2] = lVar1;
  plVar6[3] = lVar5;
  plVar6[4] = lVar8;
  plVar6[5] = lVar5;
  plVar6[6] = lVar12;
  plVar6[7] = lVar9;
  plVar6[8] = lVar12;
  plVar6[9] = lVar11;
  plVar6[10] = lVar10;
  plVar6[0xb] = lVar11;
  return uVar4;
}

