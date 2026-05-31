
void FUN_1039cf4dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  char *pcStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined2 uStack_108;
  undefined1 uStack_106;
  char *pcStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  
  uVar9 = func_0x0001039d29fc(param_1[1],*param_1);
  iVar10 = func_0x0001039d29fc(param_1[3],param_1[2]);
  uVar23 = (ulong)(uVar9 ^ 1);
  uVar13 = 2;
  if (iVar10 != 0) {
    uVar13 = 3;
  }
  uVar2 = 2;
  if (iVar10 == 0) {
    uVar2 = 3;
  }
  iVar10 = func_0x0001039d29fc(param_1[uVar13],param_1[uVar9]);
  iVar11 = func_0x0001039d29fc(param_1[uVar2],param_1[uVar23]);
  uVar4 = uVar13;
  if (iVar11 == 0) {
    uVar4 = uVar23;
  }
  uVar3 = uVar23;
  uVar7 = (ulong)uVar9;
  if (iVar10 == 0) {
    uVar3 = uVar13;
    uVar7 = uVar4;
    uVar13 = (ulong)uVar9;
  }
  uVar4 = uVar2;
  if (iVar11 == 0) {
    uVar4 = uVar3;
    uVar23 = uVar2;
  }
  iVar10 = func_0x0001039d29fc(param_1[uVar4],param_1[uVar7]);
  uVar2 = uVar7;
  if (iVar10 == 0) {
    uVar2 = uVar4;
    uVar4 = uVar7;
  }
  *param_3 = param_1[uVar13];
  param_3[1] = param_1[uVar4];
  param_3[2] = param_1[uVar2];
  puVar22 = param_3 + 3;
  *puVar22 = param_1[uVar23];
  puVar19 = param_1 + 4;
  uVar9 = func_0x0001039d29fc(param_1[5],*puVar19);
  iVar10 = func_0x0001039d29fc(param_1[7],param_1[6]);
  uVar23 = (ulong)(uVar9 ^ 1);
  uVar13 = 2;
  if (iVar10 != 0) {
    uVar13 = 3;
  }
  uVar2 = 2;
  if (iVar10 == 0) {
    uVar2 = 3;
  }
  iVar10 = func_0x0001039d29fc(puVar19[uVar13],puVar19[uVar9]);
  iVar11 = func_0x0001039d29fc(puVar19[uVar2],puVar19[uVar23]);
  uVar4 = uVar13;
  if (iVar11 == 0) {
    uVar4 = uVar23;
  }
  uVar3 = uVar23;
  uVar7 = (ulong)uVar9;
  if (iVar10 == 0) {
    uVar3 = uVar13;
    uVar7 = uVar4;
    uVar13 = (ulong)uVar9;
  }
  uVar4 = uVar2;
  if (iVar11 == 0) {
    uVar4 = uVar3;
    uVar23 = uVar2;
  }
  iVar10 = func_0x0001039d29fc(puVar19[uVar4],puVar19[uVar7]);
  uVar2 = uVar7;
  if (iVar10 == 0) {
    uVar2 = uVar4;
    uVar4 = uVar7;
  }
  uVar12 = puVar19[uVar13];
  puVar21 = param_3 + 4;
  *puVar21 = uVar12;
  param_3[5] = puVar19[uVar4];
  param_3[6] = puVar19[uVar2];
  uVar20 = puVar19[uVar23];
  param_3[7] = uVar20;
  uVar9 = func_0x0001039d29fc(uVar12,*param_3);
  puVar19 = puVar21;
  if (uVar9 == 0) {
    puVar19 = param_3;
  }
  *param_2 = *puVar19;
  puVar21 = puVar21 + uVar9;
  puVar19 = param_3 + (uVar9 ^ 1);
  uVar13 = func_0x0001039d29fc(uVar20,*puVar22);
  lVar18 = 0x18;
  if ((int)uVar13 == 0) {
    lVar18 = 0x38;
  }
  param_2[7] = *(undefined8 *)((long)param_3 + lVar18);
  puVar22 = puVar22 + -(uVar13 & 1);
  uVar9 = func_0x0001039d29fc(*puVar21,*puVar19);
  puVar5 = puVar21;
  if (uVar9 == 0) {
    puVar5 = puVar19;
  }
  param_2[1] = *puVar5;
  puVar21 = puVar21 + uVar9;
  puVar19 = puVar19 + (uVar9 ^ 1);
  puVar17 = param_3 + 7 + ((uVar13 & 0xffffffff) - 1);
  uVar13 = func_0x0001039d29fc(*puVar17,*puVar22);
  puVar5 = puVar22;
  if ((int)uVar13 == 0) {
    puVar5 = puVar17;
  }
  param_2[6] = *puVar5;
  puVar22 = puVar22 + -(uVar13 & 1);
  uVar9 = func_0x0001039d29fc(*puVar21,*puVar19);
  puVar5 = puVar21;
  if (uVar9 == 0) {
    puVar5 = puVar19;
  }
  param_2[2] = *puVar5;
  puVar21 = puVar21 + uVar9;
  puVar19 = puVar19 + (uVar9 ^ 1);
  puVar17 = puVar17 + ((uVar13 & 0xffffffff) - 1);
  uVar13 = func_0x0001039d29fc(*puVar17,*puVar22);
  puVar5 = puVar22;
  if ((int)uVar13 == 0) {
    puVar5 = puVar17;
  }
  param_2[5] = *puVar5;
  puVar22 = puVar22 + -(uVar13 & 1);
  uVar9 = func_0x0001039d29fc(*puVar21,*puVar19);
  puVar5 = puVar21;
  if (uVar9 == 0) {
    puVar5 = puVar19;
  }
  param_2[3] = *puVar5;
  puVar17 = puVar17 + ((uVar13 & 0xffffffff) - 1);
  uVar13 = func_0x0001039d29fc(*puVar17,*puVar22);
  puVar5 = puVar22;
  if ((int)uVar13 == 0) {
    puVar5 = puVar17;
  }
  param_2[4] = *puVar5;
  if (puVar19 + (uVar9 ^ 1) == puVar22 + (1 - (uVar13 & 1)) &&
      puVar21 + uVar9 == puVar17 + (uVar13 & 0xffffffff)) {
    return;
  }
  auVar28 = __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
  plVar14 = auVar28._0_8_;
  lVar18 = 0;
  plVar15 = plVar14 + 1;
  plVar24 = plVar14;
  do {
    plVar16 = plVar15;
    iVar10 = func_0x0001039d29fc(plVar24[1],*plVar24);
    if (iVar10 != 0) {
      lVar26 = plVar24[1];
      lVar25 = lVar18;
      do {
        lVar27 = lVar25;
        puVar22 = (undefined8 *)((long)plVar14 + lVar27);
        puVar22[1] = *puVar22;
        plVar15 = plVar14;
        if (lVar27 == 0) goto LAB_1039cf81c;
        lVar25 = puVar22[-1];
        uVar1 = 0x1000203U >> (ulong)((*(byte *)(lVar26 + 0x140) & 3) << 3) & 0xff;
        uVar9 = 0x1000203U >> (ulong)((*(byte *)(lVar25 + 0x140) & 3) << 3) & 0xff;
        cVar8 = uVar9 < uVar1;
        if (uVar1 < uVar9) {
          cVar8 = -1;
        }
        if (uVar1 == uVar9) {
          uVar23 = *(ulong *)(lVar26 + 0x10);
          uVar2 = *(ulong *)(lVar25 + 0x10);
          uVar13 = uVar23;
          if (uVar2 <= uVar23) {
            uVar13 = uVar2;
          }
          iVar10 = _memcmp(*(undefined8 *)(lVar26 + 8),*(undefined8 *)(lVar25 + 8),uVar13);
          lVar6 = uVar23 - uVar2;
          if (iVar10 != 0) {
            lVar6 = (long)iVar10;
          }
          cVar8 = 0 < lVar6;
          if (lVar6 < 0) {
            cVar8 = -1;
          }
        }
        if (cVar8 == '\0') {
          pcStack_140 = *(char **)(lVar26 + 0x38);
          lStack_138 = *(long *)(lVar26 + 0x40);
          if (lStack_138 == 0) {
            uStack_106 = false;
          }
          else {
            uStack_106 = *pcStack_140 == '/';
          }
          pcStack_100 = *(char **)(lVar25 + 0x38);
          lStack_f8 = *(long *)(lVar25 + 0x40);
          uStack_130 = 6;
          uStack_108 = 0x201;
          if (lStack_f8 == 0) {
            uStack_c6 = false;
          }
          else {
            uStack_c6 = *pcStack_100 == '/';
          }
          uStack_f0 = 6;
          uStack_c8 = 0x201;
          cVar8 = func_0x00010603668c(&pcStack_140,&pcStack_100);
        }
        lVar25 = lVar27 + -8;
      } while (cVar8 == -1);
      plVar15 = (long *)((long)plVar14 + lVar27);
LAB_1039cf81c:
      *plVar15 = lVar26;
    }
    plVar15 = plVar16 + 1;
    lVar18 = lVar18 + 8;
    plVar24 = plVar16;
    if (plVar15 == plVar14 + auVar28._8_8_) {
      return;
    }
  } while( true );
}

