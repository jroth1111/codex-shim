
bool FUN_1046d1578(long param_1,undefined2 param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined6 uStack_36;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 >> 0xf == 0) {
    lVar6 = param_3[1];
    lVar4 = *param_3;
    lVar10 = param_3[3];
    lVar8 = param_3[2];
    lVar7 = param_4[1];
    lVar5 = *param_4;
    lVar11 = param_4[3];
    lVar9 = param_4[2];
    lVar2 = param_4[4];
    if (uVar3 == *(ulong *)(param_1 + 0x18)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0d91c6a94bb3f406E();
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 0x68);
    puVar1[3] = lVar5;
    puVar1[2] = uStack_88;
    puVar1[5] = lVar9;
    puVar1[4] = lVar7;
    puVar1[1] = uStack_90;
    *puVar1 = 0;
    puVar1[0xc] = CONCAT62(uStack_36,param_2);
    puVar1[9] = lVar6;
    puVar1[8] = lVar4;
    puVar1[0xb] = lVar10;
    puVar1[10] = lVar8;
    puVar1[7] = lVar2;
    puVar1[6] = lVar11;
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
  }
  else {
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}

