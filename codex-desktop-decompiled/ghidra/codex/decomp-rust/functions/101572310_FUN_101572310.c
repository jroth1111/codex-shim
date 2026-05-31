
void FUN_101572310(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  long in_x9;
  undefined8 extraout_x9;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x26;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = param_2[1];
  lVar10 = *param_2;
  lVar12 = param_2[3];
  lStack_2f0 = param_2[2];
  lVar2 = param_2[4];
  lVar3 = param_2[5];
  lStack_300 = lVar10;
  lStack_2f8 = lVar11;
  lStack_2e8 = lVar12;
  lStack_2e0 = lVar2;
  if (lVar10 < 4) {
    if (lVar10 < 2) {
      if (lVar10 == 0) {
        lStack_278 = 0;
        lStack_268 = in_x9;
        lStack_258 = unaff_x21;
        lStack_270 = unaff_x26;
      }
      else {
LAB_1015723d4:
        lStack_278 = *param_2;
        unaff_x22 = param_2[3];
        lStack_268 = param_2[2];
        lStack_258 = param_2[4];
        lStack_270 = param_2[1];
      }
    }
    else {
      if (lVar10 != 2) goto LAB_1015723d4;
      if (lVar2 == 0) {
        unaff_x22 = 1;
      }
      else {
        unaff_x22 = _malloc(lVar2);
        if (unaff_x22 == 0) goto LAB_101572758;
      }
      _memcpy(unaff_x22,lVar12,lVar2);
      lStack_278 = 2;
      lStack_268 = lVar2;
      lStack_258 = lVar2;
      lStack_270 = lVar11;
    }
  }
  else {
    if ((5 < lVar10) || (lVar10 != 4)) goto LAB_1015723d4;
    if (lVar2 == 0) {
      unaff_x22 = 1;
    }
    else {
      unaff_x22 = _malloc(lVar2);
      if (unaff_x22 == 0) {
LAB_101572758:
        func_0x0001087c9084(1,lVar2);
        goto LAB_101572774;
      }
    }
    _memcpy(unaff_x22,lVar12,lVar2);
    lStack_278 = 4;
    lStack_268 = lVar2;
    lStack_258 = lVar2;
    lStack_270 = lVar11;
  }
  uStack_220 = param_3[1];
  uStack_228 = *param_3;
  uStack_210 = param_3[3];
  uStack_218 = param_3[2];
  uStack_200 = param_3[5];
  uStack_208 = param_3[4];
  uStack_1f0 = param_3[7];
  uStack_1f8 = param_3[6];
  uStack_1e0 = param_3[9];
  uStack_1e8 = param_3[8];
  uVar9 = param_3[10];
  uStack_1c8 = param_3[0xc];
  uStack_1d0 = param_3[0xb];
  uVar8 = param_3[0xb];
  plStack_248 = &lStack_278;
  uStack_250 = 5;
  lStack_260 = unaff_x22;
  uStack_1d8 = uVar9;
  lStack_1c0 = lVar3;
  func_0x00010060b3e0(&puStack_b8,&uStack_250);
  puStack_108 = puStack_a8;
  puStack_110 = puStack_b0;
  if (puStack_b8 == (undefined8 *)0x2) {
    puStack_128 = puStack_a8;
    puStack_130 = puStack_b0;
    puStack_120 = puStack_a0;
    puStack_118 = puStack_98;
    FUN_1013f91dc(&puStack_b8,&puStack_130);
    if (puStack_b8 == (undefined8 *)0x2) {
      puStack_f8 = puStack_a8;
      puStack_100 = puStack_b0;
      puStack_f0 = puStack_a0;
      puStack_108 = (undefined8 *)0x0;
    }
    else {
      uStack_e8 = uStack_90;
      puStack_f0 = puStack_98;
      uStack_d8 = uStack_80;
      uStack_e0 = uStack_88;
      uStack_c8 = uStack_70;
      uStack_d0 = uStack_78;
      uStack_c0 = uStack_68;
      puStack_108 = puStack_b0;
      puStack_110 = puStack_b8;
      puStack_f8 = puStack_a0;
      puStack_100 = puStack_a8;
      if (puStack_b8 != (undefined8 *)0x2) {
        FUN_100de3b58(&puStack_110);
        func_0x0001004e052c(&puStack_b8,&puStack_130);
        if (puStack_b8 == (undefined8 *)0x2) {
          puStack_f8 = puStack_a8;
          puStack_100 = puStack_b0;
          puStack_f0 = puStack_a0;
          puStack_108 = (undefined8 *)0x1;
        }
        else {
          uStack_e8 = uStack_90;
          puStack_f0 = puStack_98;
          uStack_d8 = uStack_80;
          uStack_e0 = uStack_88;
          uStack_c8 = uStack_70;
          uStack_d0 = uStack_78;
          uStack_c0 = uStack_68;
          puStack_108 = puStack_b0;
          puStack_110 = puStack_b8;
          puStack_f8 = puStack_a0;
          puStack_100 = puStack_a8;
          if (puStack_b8 != (undefined8 *)0x2) {
            FUN_100de3b58(&puStack_110);
            puVar7 = (undefined8 *)_malloc(0x3f);
            if (puVar7 == (undefined8 *)0x0) {
              func_0x0001087c9084(1,0x3f);
LAB_101572774:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101572778);
              (*pcVar5)();
            }
            puVar7[1] = 0x74616d20746f6e20;
            *puVar7 = 0x6469642061746164;
            puVar7[3] = 0x6f20746e61697261;
            puVar7[2] = 0x7620796e61206863;
            puVar7[5] = 0x206d756e65206465;
            puVar7[4] = 0x676761746e752066;
            *(undefined8 *)((long)puVar7 + 0x37) = 0x6365705373676e69;
            *(undefined8 *)((long)puVar7 + 0x2f) = 0x646e696279654b20;
            uStack_150 = 0;
            uStack_148 = 0;
            FUN_100e077ec(&puStack_130);
            uStack_88 = 0;
            uStack_90 = 0x3f;
            puStack_a0 = (undefined8 *)0x3f;
            uStack_80 = 8;
            uStack_68 = extraout_x9;
            puStack_98 = puVar7;
            puStack_b8 = (undefined8 *)0x0;
            goto LAB_1015724f0;
          }
        }
      }
    }
    puVar4 = puStack_f0;
    puVar7 = puStack_f8;
    puStack_138 = puStack_100;
    puStack_140 = puStack_108;
    FUN_100e077ec(&puStack_130);
    param_1[2] = puStack_138;
    param_1[1] = puStack_140;
    param_1[3] = puVar7;
    param_1[4] = puVar4;
    *param_1 = 2;
    bVar6 = true;
  }
  else {
    uStack_148 = uStack_70;
    uStack_150 = uStack_78;
    puStack_138 = puStack_a8;
    puStack_140 = puStack_b0;
LAB_1015724f0:
    param_1[2] = puStack_138;
    param_1[1] = puStack_140;
    *param_1 = puStack_b8;
    param_1[3] = puStack_a0;
    param_1[4] = puStack_98;
    param_1[6] = uStack_88;
    param_1[5] = uStack_90;
    param_1[7] = uStack_80;
    param_1[9] = uStack_148;
    param_1[8] = uStack_150;
    param_1[10] = uStack_68;
    uStack_1a8 = param_1[1];
    uStack_1b0 = *param_1;
    uStack_198 = param_1[3];
    uStack_1a0 = param_1[2];
    uStack_188 = param_1[5];
    uStack_190 = param_1[4];
    uStack_178 = param_1[7];
    uStack_180 = param_1[6];
    uStack_168 = param_1[9];
    uStack_170 = param_1[8];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_278);
    bVar6 = ((ulong)puStack_b8 & 1) == 0;
    uVar1 = param_1[2];
    if (bVar6) {
      uVar1 = uVar8;
    }
    param_1[2] = uVar1;
    uStack_218 = param_1[7];
    uStack_220 = param_1[6];
    uStack_208 = param_1[9];
    uStack_210 = param_1[8];
    uStack_238 = param_1[3];
    uStack_240 = param_1[2];
    uStack_228 = param_1[5];
    uStack_230 = param_1[4];
    uVar8 = param_1[1];
    if (bVar6) {
      uVar8 = uVar9;
    }
    *param_1 = 1;
    param_1[1] = uVar8;
    uStack_200 = param_1[10];
    plStack_248 = (long *)param_1[1];
    uStack_250 = *param_1;
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_278);
    bVar6 = false;
  }
  if (((lStack_278 == 2) || (lStack_278 == 4)) && (lStack_268 != 0)) {
    _free(lStack_260);
  }
  if (!bVar6) {
    uStack_2a8 = param_1[5];
    uStack_2b0 = param_1[4];
    uStack_298 = param_1[7];
    uStack_2a0 = param_1[6];
    uStack_288 = param_1[9];
    uStack_290 = param_1[8];
    uStack_280 = param_1[10];
    uStack_2c8 = param_1[1];
    uStack_2d0 = *param_1;
    uStack_2b8 = param_1[3];
    uStack_2c0 = param_1[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_300);
  }
  if (((lVar10 == 2) || (lVar10 == 4)) && (lStack_2f0 != 0)) {
    _free(lStack_2e8);
  }
  return;
}

