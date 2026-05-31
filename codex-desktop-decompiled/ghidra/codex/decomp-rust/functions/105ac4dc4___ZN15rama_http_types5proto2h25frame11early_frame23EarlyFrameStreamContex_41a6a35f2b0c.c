
void __ZN15rama_http_types5proto2h25frame11early_frame23EarlyFrameStreamContext12new_replayer17ha158b1e6b6ea41f1E
               (undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  lVar8 = param_2[1];
  uVar2 = param_2[2];
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      *param_1 = 0x8000000000000002;
      *(undefined4 *)(param_1 + 5) = 2;
      if (*param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar8);
      return;
    }
  }
  else {
    uVar4 = uVar2 >> 1;
    puVar5 = (undefined8 *)(lVar8 + uVar2 * 0x80 + -0x40);
    puVar6 = (undefined8 *)(lVar8 + 0x40);
    do {
      uVar9 = puVar6[-7];
      uVar7 = puVar6[-8];
      uVar11 = puVar6[-5];
      uVar10 = puVar6[-6];
      uVar12 = puVar5[-8];
      uVar14 = puVar5[-5];
      uVar13 = puVar5[-6];
      puVar6[-7] = puVar5[-7];
      puVar6[-8] = uVar12;
      puVar6[-5] = uVar14;
      puVar6[-6] = uVar13;
      puVar5[-7] = uVar9;
      puVar5[-8] = uVar7;
      puVar5[-5] = uVar11;
      puVar5[-6] = uVar10;
      uVar9 = puVar6[-3];
      uVar7 = puVar6[-4];
      uVar11 = puVar6[-1];
      uVar10 = puVar6[-2];
      uVar12 = puVar5[-4];
      uVar14 = puVar5[-1];
      uVar13 = puVar5[-2];
      puVar6[-3] = puVar5[-3];
      puVar6[-4] = uVar12;
      puVar6[-1] = uVar14;
      puVar6[-2] = uVar13;
      puVar5[-3] = uVar9;
      puVar5[-4] = uVar7;
      puVar5[-1] = uVar11;
      puVar5[-2] = uVar10;
      uVar9 = puVar6[1];
      uVar7 = *puVar6;
      uVar11 = puVar6[3];
      uVar10 = puVar6[2];
      uVar12 = *puVar5;
      uVar14 = puVar5[3];
      uVar13 = puVar5[2];
      puVar6[1] = puVar5[1];
      *puVar6 = uVar12;
      puVar6[3] = uVar14;
      puVar6[2] = uVar13;
      puVar5[1] = uVar9;
      *puVar5 = uVar7;
      puVar5[3] = uVar11;
      puVar5[2] = uVar10;
      uVar7 = puVar6[4];
      uVar10 = puVar6[7];
      uVar9 = puVar6[6];
      uVar12 = puVar5[5];
      uVar11 = puVar5[4];
      uVar14 = puVar5[7];
      uVar13 = puVar5[6];
      puVar5[5] = puVar6[5];
      puVar5[4] = uVar7;
      puVar5[7] = uVar10;
      puVar5[6] = uVar9;
      puVar5 = puVar5 + -0x10;
      puVar6[5] = uVar12;
      puVar6[4] = uVar11;
      puVar6[7] = uVar14;
      puVar6[6] = uVar13;
      puVar6 = puVar6 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_2[2] = uVar2 - 1;
  puVar1 = (uint *)(lVar8 + (uVar2 - 1) * 0x80);
  uVar3 = *puVar1;
  if (uVar3 < 2) {
    uStack_38 = *(undefined8 *)(puVar1 + 0x13);
    uStack_40 = *(undefined8 *)(puVar1 + 0x11);
    uStack_28 = *(undefined8 *)(puVar1 + 0x17);
    uStack_30 = *(undefined8 *)(puVar1 + 0x15);
    uStack_20 = *(undefined8 *)(puVar1 + 0x19);
    uStack_18 = (undefined4)*(undefined8 *)(puVar1 + 0x1b);
    uStack_c = *(undefined8 *)(puVar1 + 0x1e);
    uStack_14 = (undefined4)*(undefined8 *)(puVar1 + 0x1c);
    uStack_10 = (undefined4)((ulong)*(undefined8 *)(puVar1 + 0x1c) >> 0x20);
    uStack_78 = *(undefined8 *)(puVar1 + 3);
    uStack_80 = *(undefined8 *)(puVar1 + 1);
    uStack_68 = *(undefined8 *)(puVar1 + 7);
    uStack_70 = *(undefined8 *)(puVar1 + 5);
    uStack_58 = *(undefined8 *)(puVar1 + 0xb);
    uStack_60 = *(undefined8 *)(puVar1 + 9);
    uStack_48 = *(undefined8 *)(puVar1 + 0xf);
    uStack_50 = *(undefined8 *)(puVar1 + 0xd);
  }
  else {
    param_2[2] = uVar2;
    uVar3 = 2;
  }
  lVar8 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = lVar8;
  *(undefined8 *)((long)param_1 + 0x74) = uStack_38;
  *(undefined8 *)((long)param_1 + 0x6c) = uStack_40;
  *(undefined8 *)((long)param_1 + 0x84) = uStack_28;
  *(undefined8 *)((long)param_1 + 0x7c) = uStack_30;
  *(ulong *)((long)param_1 + 0x94) = CONCAT44(uStack_14,uStack_18);
  *(undefined8 *)((long)param_1 + 0x8c) = uStack_20;
  param_1[0x14] = uStack_c;
  param_1[0x13] = CONCAT44(uStack_10,uStack_14);
  *(undefined8 *)((long)param_1 + 0x34) = uStack_78;
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_80;
  *(undefined8 *)((long)param_1 + 0x44) = uStack_68;
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_70;
  *(undefined8 *)((long)param_1 + 0x54) = uStack_58;
  *(undefined8 *)((long)param_1 + 0x4c) = uStack_60;
  param_1[3] = param_2[2];
  *param_1 = 0x8000000000000001;
  *(uint *)(param_1 + 5) = uVar3;
  *(undefined8 *)((long)param_1 + 100) = uStack_48;
  *(undefined8 *)((long)param_1 + 0x5c) = uStack_50;
  return;
}

