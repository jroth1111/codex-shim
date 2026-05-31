
void FUN_1015967a4(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x27;
  long lVar4;
  long lVar5;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
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
  
  lStack_150 = param_2[1];
  lVar4 = *param_2;
  lVar5 = param_2[3];
  lStack_170 = param_2[2];
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lStack_148 = lVar1;
  lStack_138 = lVar1;
  lStack_180 = lVar4;
  lStack_178 = lStack_150;
  lStack_168 = lVar5;
  lStack_160 = lVar1;
  if (lVar4 < 4) {
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        lStack_158 = 0;
        lStack_148 = in_x9;
        lStack_138 = unaff_x22;
        lStack_150 = unaff_x27;
        goto LAB_1015968b8;
      }
    }
    else if (lVar4 == 2) {
      if (lVar1 == 0) {
        unaff_x23 = 1;
      }
      else {
        unaff_x23 = _malloc(lVar1);
        if (unaff_x23 == 0) goto LAB_101596974;
      }
      _memcpy(unaff_x23,lVar5,lVar1);
      lStack_158 = 2;
      goto LAB_1015968b8;
    }
  }
  else if ((lVar4 < 6) && (lVar4 == 4)) {
    if (lVar1 == 0) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = _malloc(lVar1);
      if (unaff_x23 == 0) {
LAB_101596974:
        func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101596984);
        (*pcVar3)();
      }
    }
    _memcpy(unaff_x23,lVar5,lVar1);
    lStack_158 = 4;
    goto LAB_1015968b8;
  }
  lStack_158 = *param_2;
  unaff_x23 = param_2[3];
  lStack_148 = param_2[2];
  lStack_138 = param_2[4];
  lStack_150 = param_2[1];
LAB_1015968b8:
  uStack_108 = param_3[5];
  uStack_110 = param_3[4];
  uStack_f8 = param_3[7];
  uStack_100 = param_3[6];
  uStack_e8 = param_3[9];
  uStack_f0 = param_3[8];
  uStack_d8 = param_3[0xb];
  uStack_e0 = param_3[10];
  uStack_128 = param_3[1];
  uStack_130 = *param_3;
  uStack_118 = param_3[3];
  uStack_120 = param_3[2];
  uStack_d0 = param_3[0xc];
  lStack_140 = unaff_x23;
  lStack_c8 = lVar2;
  func_0x00010060ced0(param_1,&lStack_158);
  if (*param_1 != 2) {
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
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar2,&lStack_180);
  }
  if (((lVar4 == 2) || (lVar4 == 4)) && (lStack_170 != 0)) {
    _free(lStack_168);
  }
  return;
}

