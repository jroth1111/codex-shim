
undefined8 FUN_1026c1ae8(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_a0 = 10;
    uVar3 = func_0x000108a4a0f8(&uStack_a0,0,0);
  }
  else {
    lVar2 = _malloc(param_3);
    if (lVar2 == 0) {
      plVar4 = (long *)func_0x0001087c9084(1,param_3);
      if (*plVar4 == -0x8000000000000000) {
        uStack_1d0 = 10;
        uVar3 = func_0x000108a4a0f8(&uStack_1d0,0,0);
        return uVar3;
      }
      puVar5 = (undefined4 *)_malloc(4);
      if (puVar5 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,4);
      }
      else {
        *puVar5 = 0x65707974;
        if ((plVar4[9] & 0x7fffffffffffffffU) != 0) {
          _free(plVar4[10]);
        }
        plVar4[10] = (long)puVar5;
        plVar4[0xb] = 4;
        plVar4[9] = -0x8000000000000000;
        lStack_228 = plVar4[0xb];
        lStack_230 = plVar4[10];
        uStack_238 = 4;
        puStack_210 = (undefined4 *)_malloc(5);
        if (puStack_210 != (undefined4 *)0x0) {
          *(undefined1 *)(puStack_210 + 1) = 0x79;
          *puStack_210 = 0x61727261;
          uStack_218 = 5;
          uStack_220 = 0x8000000000000003;
          uStack_208 = 5;
          func_0x0001026ea188(&uStack_1d0,plVar4,&uStack_238,&uStack_220);
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
            func_0x0001026a9020(&lStack_280);
          }
          return 0;
        }
      }
      func_0x0001087c9084(1,5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c1d6c);
      (*pcVar1)();
    }
    _memcpy(lVar2,param_2,param_3);
    if ((param_1[9] & 0x7fffffffffffffffU) != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar2;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_f0 = param_1[0xb];
    lStack_f8 = param_1[10];
    uStack_e0 = param_4 >> 0x3f;
    uStack_e8 = 0x8000000000000002;
    lStack_100 = param_3;
    uStack_d8 = param_4;
    func_0x0001026ea188(&uStack_a0,param_1,&lStack_100,&uStack_e8);
    uStack_148 = uStack_90;
    lStack_150 = lStack_98;
    uStack_138 = uStack_80;
    uStack_140 = uStack_88;
    uStack_128 = uStack_70;
    uStack_130 = uStack_78;
    uStack_118 = uStack_60;
    uStack_120 = uStack_68;
    uStack_110 = uStack_58;
    if (lStack_98 != -0x7ffffffffffffffb) {
      func_0x0001026a9020(&lStack_150);
    }
    uVar3 = 0;
  }
  return uVar3;
}

