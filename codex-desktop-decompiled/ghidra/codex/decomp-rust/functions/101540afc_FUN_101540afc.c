
void FUN_101540afc(ulong *param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long in_x9;
  long unaff_x21;
  ulong uVar5;
  long unaff_x22;
  ulong uVar6;
  ulong uVar7;
  long unaff_x26;
  long lVar8;
  long lVar9;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
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
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
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
  ulong uStack_128;
  long lStack_120;
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
  ulong uStack_70;
  ulong uStack_68;
  
  lStack_1d0 = param_2[1];
  lVar8 = *param_2;
  lVar9 = param_2[3];
  lStack_250 = param_2[2];
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lStack_1c8 = lVar1;
  lStack_1b8 = lVar1;
  lStack_260 = lVar8;
  lStack_258 = lStack_1d0;
  lStack_248 = lVar9;
  lStack_240 = lVar1;
  if (lVar8 < 4) {
    if (lVar8 < 2) {
      if (lVar8 == 0) {
        lStack_1d8 = 0;
        lStack_1c8 = in_x9;
        lStack_1b8 = unaff_x21;
        lStack_1d0 = unaff_x26;
        goto LAB_101540c0c;
      }
    }
    else if (lVar8 == 2) {
      if (lVar1 == 0) {
        unaff_x22 = 1;
      }
      else {
        unaff_x22 = _malloc(lVar1);
        if (unaff_x22 == 0) goto LAB_101540dfc;
      }
      _memcpy(unaff_x22,lVar9,lVar1);
      lStack_1d8 = 2;
      goto LAB_101540c0c;
    }
  }
  else if ((lVar8 < 6) && (lVar8 == 4)) {
    if (lVar1 == 0) {
      unaff_x22 = 1;
    }
    else {
      unaff_x22 = _malloc(lVar1);
      if (unaff_x22 == 0) {
LAB_101540dfc:
        func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101540e0c);
        (*pcVar3)();
      }
    }
    _memcpy(unaff_x22,lVar9,lVar1);
    lStack_1d8 = 4;
    goto LAB_101540c0c;
  }
  lStack_1d8 = *param_2;
  unaff_x22 = param_2[3];
  lStack_1c8 = param_2[2];
  lStack_1b8 = param_2[4];
  lStack_1d0 = param_2[1];
LAB_101540c0c:
  uStack_180 = param_3[1];
  uStack_188 = *param_3;
  uStack_170 = param_3[3];
  uStack_178 = param_3[2];
  uStack_160 = param_3[5];
  uStack_168 = param_3[4];
  uStack_150 = param_3[7];
  uStack_158 = param_3[6];
  uStack_140 = param_3[9];
  uStack_148 = param_3[8];
  uVar7 = param_3[10];
  uStack_128 = param_3[0xc];
  uStack_130 = param_3[0xb];
  uVar5 = param_3[0xb];
  plStack_1a8 = &lStack_1d8;
  uStack_1b0 = 5;
  lStack_1c0 = unaff_x22;
  uStack_138 = uVar7;
  lStack_120 = lVar2;
  func_0x000100613244(&uStack_b8,&uStack_1b0);
  if (uStack_b8 == 2) {
    param_1[2] = uStack_a8;
    param_1[1] = uStack_b0;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[6] = uStack_88;
    param_1[5] = uStack_90;
    *param_1 = 2;
    bVar4 = true;
  }
  else {
    param_1[5] = uStack_90;
    param_1[4] = uStack_98;
    param_1[7] = uStack_80;
    param_1[6] = uStack_88;
    param_1[9] = uStack_70;
    param_1[8] = uStack_78;
    param_1[10] = uStack_68;
    param_1[1] = uStack_b0;
    *param_1 = uStack_b8;
    param_1[3] = uStack_a0;
    param_1[2] = uStack_a8;
    uVar6 = *param_1;
    if (uVar6 == 2) {
      bVar4 = true;
    }
    else {
      uStack_e8 = param_1[5];
      uStack_f0 = param_1[4];
      uStack_d8 = param_1[7];
      uStack_e0 = param_1[6];
      uStack_c8 = param_1[9];
      uStack_d0 = param_1[8];
      uStack_c0 = param_1[10];
      uStack_108 = param_1[1];
      uStack_110 = *param_1;
      uStack_f8 = param_1[3];
      uStack_100 = param_1[2];
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar2,&lStack_1d8);
      bVar4 = (uVar6 & 1) == 0;
      uVar6 = param_1[2];
      if (bVar4) {
        uVar6 = uVar5;
      }
      param_1[2] = uVar6;
      uStack_178 = param_1[7];
      uStack_180 = param_1[6];
      uStack_168 = param_1[9];
      uStack_170 = param_1[8];
      uStack_198 = param_1[3];
      uStack_1a0 = param_1[2];
      uStack_188 = param_1[5];
      uStack_190 = param_1[4];
      uVar5 = param_1[1];
      if (bVar4) {
        uVar5 = uVar7;
      }
      *param_1 = 1;
      param_1[1] = uVar5;
      uStack_160 = param_1[10];
      plStack_1a8 = (long *)param_1[1];
      uStack_1b0 = *param_1;
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar2,&lStack_1d8);
      bVar4 = false;
    }
  }
  if (((lStack_1d8 == 2) || (lStack_1d8 == 4)) && (lStack_1c8 != 0)) {
    _free(lStack_1c0);
  }
  if (!bVar4) {
    uStack_208 = param_1[5];
    uStack_210 = param_1[4];
    uStack_1f8 = param_1[7];
    uStack_200 = param_1[6];
    uStack_1e8 = param_1[9];
    uStack_1f0 = param_1[8];
    uStack_1e0 = param_1[10];
    uStack_228 = param_1[1];
    uStack_230 = *param_1;
    uStack_218 = param_1[3];
    uStack_220 = param_1[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar2,&lStack_260);
  }
  if (((lVar8 == 2) || (lVar8 == 4)) && (lStack_250 != 0)) {
    _free(lStack_248);
  }
  return;
}

