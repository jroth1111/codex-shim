
void FUN_10155fa60(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  long in_x9;
  long lVar3;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  long lVar4;
  long lVar5;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
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
  
  lStack_1d8 = param_2[1];
  lVar4 = *param_2;
  lVar5 = param_2[3];
  lStack_200 = param_2[2];
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  lStack_1d0 = lVar3;
  lStack_1c0 = lVar3;
  lStack_210 = lVar4;
  lStack_208 = lStack_1d8;
  lStack_1f8 = lVar5;
  lStack_1f0 = lVar3;
  if (lVar4 < 4) {
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        lStack_1e0 = 0;
        lStack_1d0 = in_x9;
        lStack_1c0 = unaff_x23;
        lStack_1d8 = unaff_x27;
        goto LAB_10155fb6c;
      }
    }
    else if (lVar4 == 2) {
      if (lVar3 == 0) {
        unaff_x24 = 1;
      }
      else {
        unaff_x24 = _malloc(lVar3);
        if (unaff_x24 == 0) goto LAB_10155fc98;
      }
      _memcpy(unaff_x24,lVar5,lVar3);
      lStack_1e0 = 2;
      goto LAB_10155fb6c;
    }
  }
  else if ((lVar4 < 6) && (lVar4 == 4)) {
    if (lVar3 == 0) {
      unaff_x24 = 1;
    }
    else {
      unaff_x24 = _malloc(lVar3);
      if (unaff_x24 == 0) {
LAB_10155fc98:
        func_0x0001087c9084(1,lVar3);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10155fca8);
        (*pcVar2)();
      }
    }
    _memcpy(unaff_x24,lVar5,lVar3);
    lStack_1e0 = 4;
    goto LAB_10155fb6c;
  }
  lStack_1e0 = *param_2;
  unaff_x24 = param_2[3];
  lStack_1d0 = param_2[2];
  lStack_1c0 = param_2[4];
  lStack_1d8 = param_2[1];
LAB_10155fb6c:
  uStack_190 = param_3[5];
  uStack_198 = param_3[4];
  uStack_180 = param_3[7];
  uStack_188 = param_3[6];
  uStack_170 = param_3[9];
  uStack_178 = param_3[8];
  uStack_160 = param_3[0xb];
  uStack_168 = param_3[10];
  uStack_1b0 = param_3[1];
  uStack_1b8 = *param_3;
  uStack_1a0 = param_3[3];
  uStack_1a8 = param_3[2];
  uStack_158 = param_3[0xc];
  lStack_1c8 = unaff_x24;
  lStack_f0 = lStack_1e0;
  lStack_e8 = lStack_1d8;
  lStack_e0 = lStack_1d0;
  lStack_d8 = unaff_x24;
  lStack_d0 = lStack_1c0;
  func_0x00010159f794(param_1,param_3,&lStack_f0,lVar1);
  lVar3 = *param_1;
  if (lVar3 != 2) {
    lStack_98 = param_1[5];
    lStack_a0 = param_1[4];
    lStack_88 = param_1[7];
    lStack_90 = param_1[6];
    lStack_78 = param_1[9];
    lStack_80 = param_1[8];
    lStack_70 = param_1[10];
    lStack_b8 = param_1[1];
    lStack_c0 = *param_1;
    lStack_a8 = param_1[3];
    lStack_b0 = param_1[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar1,&lStack_f0);
  }
  if (((lStack_f0 == 2) || (lStack_f0 == 4)) && (lStack_e0 != 0)) {
    _free(lStack_d8);
  }
  if (lVar3 != 2) {
    lStack_128 = param_1[5];
    lStack_130 = param_1[4];
    lStack_118 = param_1[7];
    lStack_120 = param_1[6];
    lStack_108 = param_1[9];
    lStack_110 = param_1[8];
    lStack_100 = param_1[10];
    lStack_148 = param_1[1];
    lStack_150 = *param_1;
    lStack_138 = param_1[3];
    lStack_140 = param_1[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar1,&lStack_210);
  }
  if (((lVar4 == 2) || (lVar4 == 4)) && (lStack_200 != 0)) {
    _free(lStack_1f8);
  }
  return;
}

