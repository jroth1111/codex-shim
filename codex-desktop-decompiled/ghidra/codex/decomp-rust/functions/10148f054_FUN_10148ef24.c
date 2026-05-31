
undefined8 FUN_10148ef24(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  ulong uStack_218;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
    uVar4 = func_0x000108a4a0f8(&uStack_a0,0,0);
  }
  else {
    lVar3 = _malloc(param_3);
    if (lVar3 == 0) {
      auVar8 = func_0x0001087c9084(1,param_3);
      uVar7 = auVar8._8_8_;
      plVar5 = auVar8._0_8_;
      if (*plVar5 == -0x8000000000000000) {
        uStack_1e0 = 10;
        uVar4 = func_0x000108a4a0f8(&uStack_1e0,0,0);
      }
      else {
        puVar6 = (undefined8 *)_malloc(0xc);
        if (puVar6 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0xc);
          goto LAB_10148f254;
        }
        *(undefined4 *)(puVar6 + 1) = 0x65646f6d;
        *puVar6 = 0x5f786f62646e6173;
        if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
          _free(plVar5[10]);
        }
        plVar5[10] = (long)puVar6;
        plVar5[0xb] = 0xc;
        plVar5[9] = -0x8000000000000000;
        lStack_238 = plVar5[0xb];
        lStack_240 = plVar5[10];
        uStack_248 = 0xc;
        uVar1 = auVar8._8_4_ & 0xff;
        uStack_218 = (ulong)uVar1;
        if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
          if ((uVar7 & 0xff) == 0) {
            uVar7 = 9;
            puVar6 = (undefined8 *)_malloc(9);
            if (puVar6 == (undefined8 *)0x0) {
LAB_10148f254:
              func_0x0001087c9084(1,uVar7);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10148f264);
              (*pcVar2)();
            }
            *(undefined1 *)(puVar6 + 1) = 0x79;
            *puVar6 = 0x6c6e6f2d64616572;
            uStack_228 = 9;
            uStack_230 = 0x8000000000000003;
            uStack_218 = 9;
          }
          else {
            uVar7 = 0xf;
            puVar6 = (undefined8 *)_malloc(0xf);
            if (puVar6 == (undefined8 *)0x0) goto LAB_10148f254;
            *puVar6 = 0x636170736b726f77;
            *(undefined8 *)((long)puVar6 + 7) = 0x65746972772d6563;
            uStack_228 = 0xf;
            uStack_230 = 0x8000000000000003;
            uStack_218 = 0xf;
          }
        }
        else if (uVar1 == 2) {
          uVar7 = 0x12;
          puVar6 = (undefined8 *)_malloc(0x12);
          if (puVar6 == (undefined8 *)0x0) goto LAB_10148f254;
          *(undefined2 *)(puVar6 + 2) = 0x7373;
          puVar6[1] = 0x656363612d6c6c75;
          *puVar6 = 0x662d7265676e6164;
          uStack_228 = 0x12;
          uStack_230 = 0x8000000000000003;
          uStack_218 = 0x12;
        }
        else {
          uStack_230 = 0x8000000000000000;
          uStack_228 = 0x8000000000000000;
        }
        puStack_220 = puVar6;
        FUN_101497a9c(&uStack_1e0,plVar5,&uStack_248,&uStack_230);
        uStack_288 = uStack_1d0;
        lStack_290 = lStack_1d8;
        uStack_278 = uStack_1c0;
        uStack_280 = uStack_1c8;
        uStack_268 = uStack_1b0;
        uStack_270 = uStack_1b8;
        uStack_258 = uStack_1a0;
        uStack_260 = uStack_1a8;
        uStack_250 = uStack_198;
        if (lStack_1d8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_290);
        }
        uVar4 = 0;
      }
      return uVar4;
    }
    _memcpy(lVar3,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar3;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_f8 = param_1[0xb];
    lStack_100 = param_1[10];
    uStack_e8 = 0;
    uStack_f0 = 0x8000000000000002;
    lStack_108 = param_3;
    uStack_e0 = param_4;
    FUN_101497a9c(&uStack_a0,param_1,&lStack_108,&uStack_f0);
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
      FUN_100de6690(&lStack_150);
    }
    uVar4 = 0;
  }
  return uVar4;
}

