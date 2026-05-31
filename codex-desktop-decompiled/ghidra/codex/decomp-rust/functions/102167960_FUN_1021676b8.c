
void FUN_1021676b8(ulong *param_1,long param_2,undefined *param_3,undefined2 *param_4,ulong param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined2 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *extraout_x1;
  undefined *puVar10;
  undefined *puVar11;
  undefined2 *puVar12;
  ulong uVar13;
  undefined8 *extraout_x8;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  long lStack_1b0;
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
  int aiStack_150 [2];
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  if (param_3 == (undefined *)0x0) {
LAB_10216775c:
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  lVar20 = (long)param_3 * 0x18;
  uVar16 = (lVar20 - 0x18U >> 3) * param_5 * -0x5555555555555555;
  lVar15 = param_2;
  do {
    puVar11 = param_3;
    puVar12 = param_4;
    if (lVar20 == 0) goto LAB_10216774c;
    puVar17 = (ulong *)(lVar15 + 0x10);
    lVar15 = lVar15 + 0x18;
    lVar20 = lVar20 + -0x18;
    bVar7 = CARRY8(*puVar17,uVar16);
    uVar16 = *puVar17 + uVar16;
  } while (!bVar7);
  puVar11 = &UNK_10b276c68;
  func_0x000108a079f0(&UNK_108d2398f,0x35);
LAB_10216774c:
  if ((long)uVar16 < 0) {
    func_0x0001087c9084(0,uVar16);
    goto LAB_10216775c;
  }
  if (uVar16 == 0) {
    uStack_70 = 1;
    lStack_68 = 0;
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar18 = *(ulong *)(param_2 + 0x10);
    uStack_78 = uVar16;
    if (uVar18 == 0) goto LAB_1021677bc;
  }
  else {
    uVar18 = param_5;
    uVar8 = _malloc(uVar16);
    if (uVar8 == 0) {
      uVar9 = func_0x0001087c9084(1,uVar16);
      if (uStack_78 != 0) {
        _free(uStack_70);
      }
      auVar22 = __Unwind_Resume(uVar9);
      lVar15 = auVar22._8_8_;
      puVar14 = auVar22._0_8_;
      puVar10 = (undefined *)0x0;
      if (uVar18 <= param_7) {
        puVar10 = puVar11;
      }
      if ((long)puVar10 < 0) {
        func_0x0001087c9084(0);
        puVar10 = extraout_x1;
        puVar14 = extraout_x8;
      }
      if (puVar10 != (undefined *)0x0) {
        lVar20 = _malloc(puVar10);
        puStack_1d8 = puVar11;
        if (lVar20 != 0) goto LAB_1021679ec;
        func_0x0001087c9084(1,puVar10);
      }
      puStack_1d8 = (undefined *)0x0;
      lVar20 = 1;
LAB_1021679ec:
      lStack_1c8 = 0;
      lStack_1d0 = lVar20;
      __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                (aiStack_150,lVar15,puVar11,puVar12,uVar18);
      lVar19 = 0;
      uStack_160 = uStack_f0;
      uStack_178 = uStack_108;
      uStack_180 = uStack_110;
      uStack_168 = uStack_f8;
      uStack_170 = uStack_100;
      lStack_1b8 = lStack_148;
      uStack_1a8 = uStack_138;
      lStack_1b0 = lStack_140;
      uStack_198 = uStack_128;
      uStack_1a0 = uStack_130;
      uStack_188 = uStack_118;
      uStack_190 = uStack_120;
      lVar21 = 0;
      while (FUN_102394bbc(aiStack_150,auStack_1c0), lVar5 = lStack_140, aiStack_150[0] == 1) {
        uVar16 = lStack_148 - lVar21;
        if ((ulong)((long)puStack_1d8 - lVar19) < uVar16) {
          FUN_1088db780(&puStack_1d8,lVar19,uVar16,1,1);
          lVar20 = lStack_1d0;
          lVar19 = lStack_1c8;
        }
        puVar10 = puStack_1d8;
        _memcpy(lVar20 + lVar19,lVar15 + lVar21,uVar16);
        lStack_1c8 = lVar19 + uVar16;
        if ((ulong)((long)puVar10 - lStack_1c8) < param_7) {
          FUN_1088db780(&puStack_1d8,lStack_1c8,param_7,1,1);
          lVar20 = lStack_1d0;
        }
        lVar19 = lStack_1c8;
        _memcpy(lVar20 + lStack_1c8,param_6,param_7);
        lVar19 = lVar19 + param_7;
        lVar21 = lVar5;
        lStack_1c8 = lVar19;
      }
      uVar16 = (long)puVar11 - lVar21;
      if ((ulong)((long)puStack_1d8 - lVar19) < uVar16) {
        FUN_1088db780(&puStack_1d8,lVar19,uVar16,1,1);
        lVar20 = lStack_1d0;
        lVar19 = lStack_1c8;
      }
      _memcpy(lVar20 + lVar19,lVar15 + lVar21,uVar16);
      puVar14[2] = lVar19 + uVar16;
      puVar14[1] = lStack_1d0;
      *puVar14 = puStack_1d8;
      return;
    }
    lStack_68 = 0;
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar18 = *(ulong *)(param_2 + 0x10);
    uStack_78 = uVar16;
    uStack_70 = uVar8;
    if (uVar18 <= uVar16) goto LAB_1021677bc;
  }
  lStack_68 = 0;
  uStack_78 = uVar16;
  FUN_1088db780(&uStack_78,0,uVar18,1,1);
LAB_1021677bc:
  lVar15 = lStack_68;
  uVar8 = uStack_70;
  _memcpy(uStack_70 + lStack_68,uVar9,uVar18);
  puVar12 = (undefined2 *)(uVar8 + lVar15 + uVar18);
  uVar18 = uVar16 - (lVar15 + uVar18);
  if (param_5 == 1) {
    lVar15 = (long)param_3 * -0x18 + 0x18;
    if (lVar15 != 0) {
      puVar17 = (ulong *)(param_2 + 0x28);
      do {
        if (uVar18 == 0) goto LAB_1021678f8;
        uVar8 = puVar17[-1];
        uVar3 = *puVar17;
        uVar13 = uVar18 - 1;
        *(undefined1 *)puVar12 = *(undefined1 *)param_4;
        uVar18 = uVar13 - uVar3;
        if (uVar13 < uVar3) goto LAB_1021678f8;
        puVar17 = puVar17 + 3;
        puVar1 = (undefined1 *)((long)puVar12 + 1);
        puVar12 = (undefined2 *)(puVar1 + uVar3);
        _memcpy(puVar1,uVar8);
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != 0);
    }
  }
  else if (param_5 == 3) {
    lVar15 = (long)param_3 * -0x18 + 0x18;
    if (lVar15 != 0) {
      puVar17 = (ulong *)(param_2 + 0x28);
      do {
        uVar8 = uVar18 - 3;
        if (uVar18 < 3) {
LAB_1021678f8:
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d23894,0x13,&UNK_10b276c80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102167914);
          (*pcVar6)();
        }
        uVar3 = puVar17[-1];
        uVar13 = *puVar17;
        uVar4 = *param_4;
        *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(param_4 + 1);
        *puVar12 = uVar4;
        uVar18 = uVar8 - uVar13;
        if (uVar8 < uVar13) goto LAB_1021678f8;
        puVar17 = puVar17 + 3;
        puVar1 = (undefined1 *)((long)puVar12 + 3);
        puVar12 = (undefined2 *)(puVar1 + uVar13);
        _memcpy(puVar1,uVar3);
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != 0);
    }
  }
  else {
    lVar15 = (long)param_3 * -0x18 + 0x18;
    if (lVar15 != 0) {
      puVar17 = (ulong *)(param_2 + 0x28);
      do {
        uVar8 = uVar18 - 2;
        if (uVar18 < 2) goto LAB_1021678f8;
        uVar3 = puVar17[-1];
        uVar13 = *puVar17;
        *puVar12 = *param_4;
        uVar18 = uVar8 - uVar13;
        if (uVar8 < uVar13) goto LAB_1021678f8;
        puVar17 = puVar17 + 3;
        puVar2 = puVar12 + 1;
        puVar12 = (undefined2 *)((long)puVar2 + uVar13);
        _memcpy(puVar2,uVar3);
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != 0);
    }
  }
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = uVar16 - uVar18;
  return;
}

