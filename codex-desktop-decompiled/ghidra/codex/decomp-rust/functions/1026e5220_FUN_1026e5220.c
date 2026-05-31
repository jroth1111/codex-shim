
undefined8 FUN_1026e5220(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
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
  undefined8 *puStack_210;
  ulong uStack_208;
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
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
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
    uVar4 = func_0x000108a4a0f8(&uStack_90,0,0);
  }
  else {
    lVar3 = _malloc(param_3);
    if (lVar3 == 0) {
      uVar4 = func_0x0001087c9084(1,param_3);
      _free(lStack_f8);
      auVar9 = __Unwind_Resume(uVar4);
      uVar8 = auVar9._8_8_;
      plVar5 = auVar9._0_8_;
      if (*plVar5 == -0x8000000000000000) {
        uStack_1d0 = 10;
        uVar4 = func_0x000108a4a0f8(&uStack_1d0,0,0);
      }
      else {
        puVar6 = (undefined8 *)_malloc(0xc);
        if (puVar6 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0xc);
          goto LAB_1026e55b8;
        }
        *(undefined4 *)(puVar6 + 1) = 0x65637275;
        *puVar6 = 0x6f53646165726874;
        if ((plVar5[9] & 0x7fffffffffffffffU) != 0) {
          _free(plVar5[10]);
        }
        plVar5[10] = (long)puVar6;
        plVar5[0xb] = 0xc;
        plVar5[9] = -0x8000000000000000;
        lStack_228 = plVar5[0xb];
        lStack_230 = plVar5[10];
        uStack_238 = 0xc;
        uVar1 = auVar9._8_4_ & 0xff;
        uStack_208 = (ulong)uVar1;
        if (uVar1 == 1 || (uVar8 & 0xff) == 0) {
          if ((uVar8 & 0xff) == 0) {
            uVar8 = 4;
            puVar6 = (undefined8 *)_malloc(4);
            if (puVar6 == (undefined8 *)0x0) {
LAB_1026e55b8:
              func_0x0001087c9084(1,uVar8);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1026e55c8);
              (*pcVar2)();
            }
            *(undefined4 *)puVar6 = 0x72657375;
            uStack_218 = 4;
            uStack_220 = 0x8000000000000003;
            uStack_208 = 4;
          }
          else {
            uVar8 = 8;
            puVar6 = (undefined8 *)_malloc(8);
            if (puVar6 == (undefined8 *)0x0) goto LAB_1026e55b8;
            *puVar6 = 0x746e656761627573;
            uStack_218 = 8;
            uStack_220 = 0x8000000000000003;
            uStack_208 = 8;
          }
        }
        else if (uVar1 == 2) {
          uVar8 = 0x14;
          puVar6 = (undefined8 *)_malloc(0x14);
          if (puVar6 == (undefined8 *)0x0) goto LAB_1026e55b8;
          *(undefined4 *)(puVar6 + 2) = 0x6e6f6974;
          puVar6[1] = 0x6164696c6f736e6f;
          *puVar6 = 0x635f79726f6d656d;
          uStack_218 = 0x14;
          uStack_220 = 0x8000000000000003;
          uStack_208 = 0x14;
        }
        else {
          uStack_220 = 0x8000000000000000;
          uStack_218 = 0x8000000000000000;
        }
        puStack_210 = puVar6;
        func_0x0001026ea188(&uStack_1d0,plVar5,&uStack_238,&uStack_220);
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
        uVar4 = 0;
      }
      return uVar4;
    }
    _memcpy(lVar3,param_2,param_3);
    if ((param_1[9] & 0x7fffffffffffffffU) != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar3;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_f0 = param_1[0xb];
    lStack_f8 = param_1[10];
    lStack_100 = param_3;
    if (*param_4 == -0x8000000000000000) {
      uVar8 = param_4[1];
      puVar7 = &uStack_e0;
      uStack_d8 = 0x8000000000000002;
      uStack_d0 = uVar8 >> 0x3f;
    }
    else {
      lVar3 = param_4[1];
      uVar8 = param_4[2];
      if (uVar8 == 0) {
        uStack_e0 = 1;
      }
      else {
        uStack_e0 = _malloc(uVar8);
        if (uStack_e0 == 0) {
          func_0x0001087c9084(1,uVar8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026e52f4);
          (*pcVar2)();
        }
      }
      _memcpy(uStack_e0,lVar3,uVar8);
      puVar7 = &uStack_e8;
      uStack_d8 = 0x8000000000000003;
      uStack_d0 = uVar8;
    }
    *puVar7 = uVar8;
    uStack_c8 = uStack_e0;
    uStack_c0 = uStack_e8;
    func_0x0001026ea188(&uStack_90,param_1,&lStack_100,&uStack_d8);
    uStack_148 = uStack_80;
    lStack_150 = lStack_88;
    uStack_138 = uStack_70;
    uStack_140 = uStack_78;
    uStack_128 = uStack_60;
    uStack_130 = uStack_68;
    uStack_118 = uStack_50;
    uStack_120 = uStack_58;
    uStack_110 = uStack_48;
    if (lStack_88 != -0x7ffffffffffffffb) {
      func_0x0001026a9020(&lStack_150);
    }
    uVar4 = 0;
  }
  return uVar4;
}

