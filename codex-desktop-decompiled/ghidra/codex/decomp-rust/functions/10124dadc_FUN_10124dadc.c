
ulong * FUN_10124dadc(ulong *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lStack_2c8;
  ulong *puStack_2c0;
  long lStack_2b8;
  ulong uStack_260;
  ulong *puStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  char acStack_128 [8];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
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
  
  if (*param_2 == '\x14') {
    lVar7 = *(long *)(param_2 + 0x10);
    uVar5 = *(ulong *)(param_2 + 0x18);
    lVar12 = uVar5 * 0x20;
    lVar1 = lVar7 + lVar12;
    uVar11 = uVar5;
    if (0x1af1 < uVar5) {
      uVar11 = 0x1af2;
    }
    if (uVar5 == 0) {
      uVar5 = 0;
      uStack_260 = 0;
      puStack_258 = (ulong *)0x8;
      uStack_250 = 0;
      puVar4 = param_1;
      lVar8 = lVar7;
    }
    else {
      puStack_258 = (ulong *)_malloc(uVar11 * 0x98);
      if (puStack_258 == (ulong *)0x0) {
        uVar6 = func_0x0001087c9084(8,uVar11 * 0x98);
        FUN_100e4eb04(lVar12);
        __Unwind_Resume(uVar6);
        uVar6 = func_0x000108a07bc4();
        FUN_1004e07f8(&lStack_2c8,uVar6);
        puVar9 = puStack_2c0;
        lVar7 = lStack_2c8;
        puVar4 = puStack_2c0;
        if (lStack_2c8 != -0x8000000000000000) {
          if ((lStack_2b8 == 0x22) &&
             ((((*puStack_2c0 == 0x6163696669746f6e && puStack_2c0[1] == 0x72702f736e6f6974) &&
               puStack_2c0[2] == 0x696c2f7374706d6f) && puStack_2c0[3] == 0x676e6168635f7473) &&
              (short)puStack_2c0[4] == 0x6465)) {
            puVar4 = (ulong *)0x0;
            lStack_2b8 = 0x22;
          }
          else {
            puStack_2c0 = (ulong *)_malloc(0x3e);
            if (puStack_2c0 == (ulong *)0x0) {
              func_0x0001087c9084(1,0x3e);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10124e000);
              (*pcVar3)();
            }
            puStack_2c0[1] = 0x7274732074736e6f;
            *puStack_2c0 = 0x6320746365707865;
            puStack_2c0[3] = 0x6669746f6e222065;
            puStack_2c0[2] = 0x756c617620676e69;
            puStack_2c0[5] = 0x7374706d6f72702f;
            puStack_2c0[4] = 0x736e6f6974616369;
            *(undefined8 *)((long)puStack_2c0 + 0x36) = 0x226465676e616863;
            *(undefined8 *)((long)puStack_2c0 + 0x2e) = 0x5f7473696c2f7374;
            lStack_2c8 = 0x3e;
            lStack_2b8 = 0x3e;
            puVar4 = (ulong *)func_0x000108856114(&lStack_2c8);
          }
          if (lVar7 != 0) {
            _free(puVar9);
          }
        }
        return puVar4;
      }
      uStack_250 = 0;
      uVar5 = (lVar12 - 0x20U >> 5) + 1;
      uStack_260 = uVar11;
      do {
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&uStack_108,lVar7);
        if ((char)uStack_108 == '\x16') {
LAB_10124dd78:
          puVar9 = puStack_258;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_100;
          lVar7 = uStack_250 + 1;
          puVar4 = puStack_258;
          while (lVar7 = lVar7 + -1, lVar7 != 0) {
            func_0x000100e0dab4(puVar4);
            puVar4 = puVar4 + 0x13;
          }
          if (uStack_260 == 0) {
            return puVar4;
          }
          goto LAB_10124ddb0;
        }
        *(undefined4 *)((ulong)acStack_128 | 1) = *(undefined4 *)((ulong)&uStack_108 | 1);
        *(undefined4 *)((long)((ulong)acStack_128 | 1) + 3) =
             *(undefined4 *)((long)((ulong)&uStack_108 | 1) + 3);
        uStack_110 = uStack_f0;
        uStack_118 = uStack_f8;
        acStack_128[0] = (char)uStack_108;
        uStack_120 = uStack_100;
        FUN_1004d9654(&uStack_108,acStack_128);
        if (uStack_108 == 2) {
          FUN_100cd6028(&uStack_108);
          FUN_1004da138(&uStack_108,acStack_128);
          if (uStack_108 == 2) {
            FUN_100cd6028(&uStack_108);
            uVar11 = FUN_1088561c0(&UNK_108cc4f62,0x40);
            FUN_100e077ec(acStack_128);
            uStack_100 = uVar11;
            goto LAB_10124dd78;
          }
        }
        uVar10 = uStack_100;
        uVar2 = uStack_108;
        uStack_148 = uStack_90;
        uStack_150 = uStack_98;
        uStack_138 = uStack_80;
        uStack_140 = uStack_88;
        uStack_130 = uStack_78;
        uStack_188 = uStack_d0;
        uStack_190 = uStack_d8;
        uStack_178 = uStack_c0;
        uStack_180 = uStack_c8;
        uStack_168 = uStack_b0;
        uStack_170 = uStack_b8;
        uStack_158 = uStack_a0;
        uStack_160 = uStack_a8;
        uStack_1a8 = uStack_f0;
        uStack_1b0 = uStack_f8;
        uStack_198 = uStack_e0;
        uStack_1a0 = uStack_e8;
        puVar4 = (ulong *)FUN_100e077ec(acStack_128);
        uVar11 = uStack_250;
        uStack_1d0 = uStack_148;
        uStack_1d8 = uStack_150;
        uStack_1c0 = uStack_138;
        uStack_1c8 = uStack_140;
        uStack_1b8 = uStack_130;
        uStack_210 = uStack_188;
        uStack_218 = uStack_190;
        uStack_200 = uStack_178;
        uStack_208 = uStack_180;
        uStack_1f0 = uStack_168;
        uStack_1f8 = uStack_170;
        uStack_1e0 = uStack_158;
        uStack_1e8 = uStack_160;
        uStack_230 = uStack_1a8;
        uStack_238 = uStack_1b0;
        uStack_220 = uStack_198;
        uStack_228 = uStack_1a0;
        uStack_248 = uVar2;
        uStack_240 = uVar10;
        if (uStack_250 == uStack_260) {
          puVar4 = (ulong *)func_0x000108a421e4(&uStack_260);
        }
        lVar7 = lVar7 + 0x20;
        puVar9 = puStack_258 + uVar11 * 0x13;
        puVar9[0xd] = uStack_1e0;
        puVar9[0xc] = uStack_1e8;
        puVar9[0xf] = uStack_1d0;
        puVar9[0xe] = uStack_1d8;
        puVar9[0x11] = uStack_1c0;
        puVar9[0x10] = uStack_1c8;
        puVar9[0x12] = uStack_1b8;
        puVar9[5] = uStack_220;
        puVar9[4] = uStack_228;
        puVar9[7] = uStack_210;
        puVar9[6] = uStack_218;
        puVar9[9] = uStack_200;
        puVar9[8] = uStack_208;
        puVar9[0xb] = uStack_1f0;
        puVar9[10] = uStack_1f8;
        puVar9[1] = uStack_240;
        *puVar9 = uStack_248;
        puVar9[3] = uStack_230;
        puVar9[2] = uStack_238;
        uStack_250 = uVar11 + 1;
        lVar12 = lVar12 + -0x20;
        lVar8 = lVar1;
      } while (lVar12 != 0);
    }
    param_1[1] = (ulong)puStack_258;
    *param_1 = uStack_260;
    param_1[2] = uStack_250;
    uVar11 = *param_1;
    if ((uVar11 != 0x8000000000000000) && (uVar2 = lVar1 - lVar8, uVar2 != 0)) {
      puVar9 = (ulong *)param_1[1];
      uVar10 = param_1[2];
      uStack_108 = uVar5;
      uVar5 = FUN_1087e422c(uVar5 + (uVar2 >> 5),&uStack_108,&UNK_10b23a1b0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar5;
      lVar7 = uVar10 + 1;
      puVar4 = puVar9;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        func_0x000100e0dab4(puVar4);
        puVar4 = puVar4 + 0x13;
      }
      if (uVar11 != 0) {
LAB_10124ddb0:
        puVar4 = (ulong *)_free(puVar9);
      }
    }
  }
  else {
    puVar4 = (ulong *)FUN_108855c40(param_2,&uStack_108,&UNK_10b213788);
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)puVar4;
  }
  return puVar4;
}

