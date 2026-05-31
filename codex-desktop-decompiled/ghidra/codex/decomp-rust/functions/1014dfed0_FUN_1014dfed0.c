
void FUN_1014dfed0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = (ulong *)param_2[0x12];
  if (puVar8 == (ulong *)param_2[0x14]) {
LAB_1014dff20:
    param_1[1] = 0x8000000000000000;
    *param_1 = 2;
    return;
  }
  param_2[0x12] = (ulong)(puVar8 + 0x12);
  uVar11 = *puVar8;
  if (uVar11 == 0x8000000000000001) goto LAB_1014dff20;
  uVar1 = puVar8[1];
  uVar3 = puVar8[2];
  uVar2 = puVar8[3];
  uVar4 = puVar8[4];
  uVar13 = puVar8[10];
  uVar12 = puVar8[9];
  uVar15 = puVar8[0xc];
  uVar14 = puVar8[0xb];
  uVar17 = puVar8[0xe];
  uVar16 = puVar8[0xd];
  uVar19 = puVar8[0x10];
  uVar18 = puVar8[0xf];
  uVar21 = puVar8[6];
  uVar20 = puVar8[5];
  uVar23 = puVar8[8];
  uVar22 = puVar8[7];
  uVar9 = uVar3;
  if (uVar11 == 0x8000000000000000) {
    uVar6 = uVar1;
    if (uVar3 != 0) goto LAB_1014dffb8;
    uVar10 = uVar1;
    uVar6 = 1;
  }
  else {
    if (uVar3 == 0) {
      uVar9 = 0;
      uVar6 = 1;
      goto LAB_1014dffec;
    }
    uVar6 = _malloc(uVar3);
    if (uVar6 == 0) goto LAB_1014e0094;
    _memcpy(uVar6,uVar1,uVar3);
    if (uVar3 != 0x8000000000000000) goto LAB_1014dffec;
LAB_1014dffb8:
    uVar7 = _malloc(uVar3);
    uVar10 = uVar6;
    uVar6 = uVar7;
    if (uVar7 == 0) {
LAB_1014e0094:
      func_0x0001087c9084(1,uVar3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1014e00a4);
      (*pcVar5)();
    }
  }
  _memcpy(uVar6,uVar10,uVar3);
LAB_1014dffec:
  if (*param_2 != 0x8000000000000001) {
    if ((*param_2 & 0x7fffffffffffffff) != 0) {
      _free(param_2[1]);
    }
    FUN_100dfe50c(param_2 + 5);
  }
  *param_2 = uVar11;
  param_2[1] = uVar1;
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  param_2[4] = uVar4;
  param_2[10] = uVar13;
  param_2[9] = uVar12;
  param_2[0xc] = uVar15;
  param_2[0xb] = uVar14;
  param_2[0xe] = uVar17;
  param_2[0xd] = uVar16;
  param_2[0x10] = uVar19;
  param_2[0xf] = uVar18;
  param_2[6] = uVar21;
  param_2[5] = uVar20;
  param_2[8] = uVar23;
  param_2[7] = uVar22;
  param_1[10] = uStack_68;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[3] = uVar3;
  param_1[2] = uVar6;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[1] = uVar9;
  *param_1 = 2;
  return;
}

