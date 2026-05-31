
void FUN_100f2043c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  undefined1 uStack_c1;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar7 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_10060e030(param_1,param_2 + 3);
    if (*param_1 == 2) {
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar2);
        return;
      }
    }
    else {
      plStack_68 = (long *)param_1[7];
      lStack_70 = param_1[6];
      lStack_58 = param_1[9];
      lVar8 = param_1[8];
      lStack_88 = param_1[3];
      lStack_90 = param_1[2];
      lStack_78 = param_1[5];
      lStack_80 = param_1[4];
      lStack_50 = param_1[10];
      lStack_98 = param_1[1];
      lStack_a0 = *param_1;
      lStack_60 = lVar8;
      if (lVar8 == lStack_70) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar6 = plStack_68;
      if (lVar8 != 0) {
        _memmove(plStack_68 + 3,plStack_68,lVar8 * 0x18);
      }
      *plVar6 = lVar1;
      plVar6[1] = lVar2;
      plVar6[2] = lVar7;
      param_1[5] = lStack_78;
      param_1[4] = lStack_80;
      param_1[7] = (long)plStack_68;
      param_1[6] = lStack_70;
      param_1[10] = lStack_50;
      param_1[1] = lStack_98;
      *param_1 = lStack_a0;
      param_1[3] = lStack_88;
      param_1[2] = lStack_90;
      param_1[9] = lStack_58;
      param_1[8] = lVar8 + 1;
    }
    return;
  }
  puVar3 = (undefined8 *)_malloc(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0x676e697373696d20;
    *puVar3 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar3;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    return;
  }
  uVar4 = func_0x0001087c9084(1,0x10);
  _free(lVar2);
  FUN_100de3b58(&lStack_a0);
  auVar9 = __Unwind_Resume(uVar4);
  plVar6 = auVar9._8_8_;
  puVar5 = auVar9._0_8_;
  uStack_a8 = 0x100f205cc;
  lStack_128 = *plVar6;
  *plVar6 = -0x7ffffffffffffffb;
  lStack_c0 = lVar2;
  uStack_b8 = uVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (lStack_128 == -0x7ffffffffffffffb) {
    uVar4 = FUN_1088561c0(&UNK_108cde170,0x10);
  }
  else {
    uStack_118 = plVar6[2];
    lStack_120 = plVar6[1];
    lStack_108 = plVar6[4];
    lStack_110 = plVar6[3];
    lStack_f8 = plVar6[6];
    lStack_100 = plVar6[5];
    lStack_e8 = plVar6[8];
    lStack_f0 = plVar6[7];
    if (lStack_128 == -0x8000000000000000) {
      *puVar5 = 0;
      FUN_100de6690(&lStack_128);
      return;
    }
    if (lStack_128 == -0x7ffffffffffffffe) {
      uStack_d8 = uStack_118;
      if (lStack_120 == 0) {
        if (uStack_118 < 0x10000) {
LAB_100f20668:
          *(undefined2 *)((long)puVar5 + 2) = 1;
          *(short *)(puVar5 + 1) = (short)uStack_118;
          *(undefined2 *)puVar5 = 0;
          return;
        }
        auStack_e0[0] = 1;
      }
      else {
        if (lStack_120 != 1) {
          auStack_e0[0] = 3;
          uVar4 = func_0x000108a4a50c(auStack_e0,&uStack_c1,&UNK_10b219eb0);
          goto LAB_100f20698;
        }
        if (uStack_118 < 0x10000) goto LAB_100f20668;
        auStack_e0[0] = 2;
      }
      uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_e0,&uStack_c1,&UNK_10b219eb0);
    }
    else {
      uVar4 = FUN_108832ea0(&lStack_128,&uStack_c1,&UNK_10b219eb0);
      FUN_100de6690(&lStack_128);
    }
  }
LAB_100f20698:
  *(undefined8 *)(puVar5 + 2) = uVar4;
  *(undefined2 *)puVar5 = 1;
  return;
}

