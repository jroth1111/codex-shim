
undefined8 FUN_10146d2a4(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_90 = 10;
    uStack_d0 = func_0x000108a4a0f8(&uStack_90,0,0);
  }
  else {
    puVar2 = (undefined4 *)_malloc(6);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = func_0x0001087c9084(1,6);
      _free(lStack_e8);
      plVar4 = (long *)__Unwind_Resume(uVar3);
      if (*plVar4 == -0x8000000000000000) {
        uStack_1c0 = 10;
        uVar3 = func_0x000108a4a0f8(&uStack_1c0,0,0);
        return uVar3;
      }
      puVar5 = (undefined8 *)_malloc(0xf);
      if (puVar5 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0xf);
      }
      else {
        *puVar5 = 0x6e6f697369636564;
        *(undefined8 *)((long)puVar5 + 7) = 0x656372756f735f6e;
        if (plVar4[9] != -0x8000000000000000 && plVar4[9] != 0) {
          _free(plVar4[10]);
        }
        plVar4[10] = (long)puVar5;
        plVar4[0xb] = 0xf;
        plVar4[9] = -0x8000000000000000;
        lStack_218 = plVar4[0xb];
        lStack_220 = plVar4[10];
        uStack_228 = 0xf;
        puStack_200 = (undefined4 *)_malloc(5);
        if (puStack_200 != (undefined4 *)0x0) {
          *(undefined1 *)(puStack_200 + 1) = 0x74;
          *puStack_200 = 0x6e656761;
          uStack_208 = 5;
          uStack_210 = 0x8000000000000003;
          uStack_1f8 = 5;
          FUN_101497a9c(&uStack_1c0,plVar4,&uStack_228,&uStack_210);
          uStack_268 = uStack_1b0;
          lStack_270 = lStack_1b8;
          uStack_258 = uStack_1a0;
          uStack_260 = uStack_1a8;
          uStack_248 = uStack_190;
          uStack_250 = uStack_198;
          uStack_238 = uStack_180;
          uStack_240 = uStack_188;
          uStack_230 = uStack_178;
          if (lStack_1b8 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_270);
          }
          return 0;
        }
      }
      func_0x0001087c9084(1,5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10146d574);
      (*pcVar1)();
    }
    *(undefined2 *)(puVar2 + 1) = 0x7375;
    *puVar2 = 0x74617473;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 6;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    uStack_f0 = 6;
    func_0x0001007e5358(&lStack_d8,param_2);
    if (lStack_d8 == -0x7ffffffffffffffb) {
      _free(lStack_e8);
    }
    else {
      FUN_101497a9c(&uStack_90,param_1,&uStack_f0,&lStack_d8);
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
  }
  return uStack_d0;
}

