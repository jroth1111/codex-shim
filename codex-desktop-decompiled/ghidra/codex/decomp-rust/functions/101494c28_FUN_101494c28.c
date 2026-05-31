
void FUN_101494c28(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  lVar6 = param_2[0x1a];
  lStack_150 = *param_2;
  *param_2 = -0x8000000000000000;
  if (lStack_150 == -0x8000000000000000) {
    uStack_160 = 8;
  }
  else {
    lStack_168 = param_2[2];
    lStack_170 = param_2[1];
    uStack_160 = 2;
  }
  lVar7 = param_2[0x1b];
  lStack_140 = lStack_168;
  lStack_148 = lStack_170;
  uVar9 = param_2[3];
  uVar1 = param_2[4];
  uVar8 = param_2[5];
  uVar5 = param_2[0x12];
  uVar2 = param_2[0x13];
  param_2[3] = -0x7fffffffffffffff;
  lStack_158 = lVar6;
  lStack_138 = lVar7;
  if (uVar9 != 0x8000000000000001) {
    uStack_a8 = param_2[0xd];
    uStack_b0 = param_2[0xc];
    puStack_98 = (ulong *)param_2[0xf];
    uStack_a0 = param_2[0xe];
    uStack_88 = param_2[0x11];
    uStack_90 = param_2[0x10];
    uStack_c8 = param_2[9];
    uStack_d0 = param_2[8];
    uStack_b8 = param_2[0xb];
    uStack_c0 = param_2[10];
    uStack_70 = 0;
    uStack_80 = uVar5;
    uStack_78 = uVar2;
    FUN_10155fa60(param_1,&uStack_160,&uStack_d0);
    if (*param_1 == 2) {
      if ((uVar9 & 0x7fffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(uVar1);
        return;
      }
    }
    else {
      uStack_a8 = param_1[5];
      uStack_b0 = param_1[4];
      puStack_98 = (ulong *)param_1[7];
      uStack_a0 = param_1[6];
      uStack_88 = param_1[9];
      uStack_90 = param_1[8];
      uStack_80 = param_1[10];
      uStack_d0 = *param_1;
      uStack_b8 = param_1[3];
      uStack_c8 = param_1[1];
      uStack_c0 = param_1[2];
      if ((uStack_d0 & 1) == 0) {
        uStack_d0 = 1;
        uStack_c8 = uVar5;
        uStack_c0 = uVar2;
      }
      uVar5 = uVar1;
      if (uVar9 == 0x8000000000000000) {
        if (uVar8 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = _malloc(uVar8);
          if (uVar5 == 0) {
            func_0x0001087c9084(1,uVar8);
            goto LAB_101494e6c;
          }
        }
        _memcpy(uVar5,uVar1,uVar8);
        uVar9 = uVar8;
      }
      uVar1 = uStack_90;
      if (uStack_90 == uStack_a0) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_a0);
      }
      puVar3 = puStack_98;
      if (uVar1 != 0) {
        _memmove(puStack_98 + 3,puStack_98,uVar1 * 0x18);
      }
      *puVar3 = uVar9;
      puVar3[1] = uVar5;
      puVar3[2] = uVar8;
      uStack_90 = uVar1 + 1;
      param_1[5] = uStack_a8;
      param_1[4] = uStack_b0;
      param_1[7] = (ulong)puStack_98;
      param_1[6] = uStack_a0;
      param_1[10] = uStack_80;
      param_1[1] = uStack_c8;
      *param_1 = uStack_d0;
      param_1[3] = uStack_b8;
      param_1[2] = uStack_c0;
      param_1[9] = uStack_88;
      param_1[8] = uStack_90;
      if (*param_1 != 2) {
        uStack_108 = param_1[5];
        uStack_110 = param_1[4];
        uStack_f8 = param_1[7];
        uStack_100 = param_1[6];
        uStack_e8 = param_1[9];
        uStack_f0 = param_1[8];
        uStack_e0 = param_1[10];
        uStack_128 = param_1[1];
        uStack_130 = *param_1;
        uStack_118 = param_1[3];
        uStack_120 = param_1[2];
        __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar7,lVar6);
      }
    }
    return;
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
LAB_101494e6c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101494e70);
  (*pcVar4)();
}

