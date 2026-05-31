
void FUN_100f3f514(ulong *param_1,long param_2,undefined *param_3,undefined4 *param_4,ulong param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *extraout_x1;
  undefined8 *puVar12;
  undefined *extraout_x1_00;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *extraout_x8;
  undefined8 *puVar20;
  ulong unaff_x19;
  ulong *puVar21;
  undefined4 *unaff_x20;
  ulong uVar22;
  undefined2 *puVar23;
  long unaff_x23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 auStack_250 [8];
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  int aiStack_1e0 [2];
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 *puStack_140;
  undefined4 *puStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  if (param_3 == (undefined *)0x0) {
LAB_100f3f5c4:
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  lVar27 = (long)param_3 * 0x18;
  uVar16 = (lVar27 - 0x18U >> 3) * -0x5555555555555555;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_5;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar16;
  uVar24 = param_5;
  if (SUB168(auVar28 * auVar6,8) == 0) {
    unaff_x19 = param_5 * uVar16;
    lVar17 = lVar27;
    lVar19 = param_2;
    do {
      puVar14 = param_3;
      unaff_x20 = param_4;
      if (lVar17 == 0) goto LAB_100f3f5b4;
      puVar21 = (ulong *)(lVar19 + 0x10);
      lVar19 = lVar19 + 0x18;
      lVar17 = lVar17 + -0x18;
      bVar9 = CARRY8(*puVar21,unaff_x19);
      unaff_x19 = *puVar21 + unaff_x19;
      unaff_x23 = param_2;
    } while (!bVar9);
  }
  param_2 = unaff_x23;
  puVar14 = &UNK_10b238328;
  param_1 = (ulong *)func_0x000108a079f0(&UNK_108cc61c4,0x35);
LAB_100f3f5b4:
  if ((long)unaff_x19 < 0) {
    param_1 = (ulong *)func_0x0001087c9084(0,unaff_x19);
    goto LAB_100f3f5c4;
  }
  puStack_80 = param_1;
  if (unaff_x19 == 0) {
    uStack_70 = 1;
    lStack_68 = 0;
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar24 = *(ulong *)(param_2 + 0x10);
    uStack_78 = unaff_x19;
    if (uVar24 != 0) {
LAB_100f3f878:
      lStack_68 = 0;
      uStack_78 = unaff_x19;
      FUN_108855060(&uStack_78,0,uVar24,1,1);
    }
  }
  else {
    uVar16 = _malloc(unaff_x19);
    if (uVar16 == 0) {
      uVar10 = func_0x0001087c9084(1,unaff_x19);
      if (uStack_78 != 0) {
        _free(uStack_70);
      }
      auVar28 = __Unwind_Resume(uVar10);
      puVar12 = auVar28._8_8_;
      puVar21 = auVar28._0_8_;
      uStack_d8 = 0x18;
      uStack_88 = 0x100f3f8c4;
      if (puVar14 == (undefined *)0x0) {
LAB_100f3f95c:
        *puVar21 = 0;
        puVar21[1] = 1;
        puVar21[2] = 0;
        return;
      }
      lVar17 = (long)puVar14 * 0x10;
      puVar4 = puVar12 + (long)puVar14 * 2;
      puVar25 = puVar12 + 2;
      uVar22 = (lVar17 - 0x10U >> 4) * uVar24;
      lVar19 = lVar17;
      puVar20 = puVar12;
      do {
        puVar15 = param_4;
        lStack_e0 = lVar27;
        puStack_90 = &stack0xfffffffffffffff0;
        if (lVar19 == 0) goto LAB_100f3f94c;
        puVar11 = puVar20 + 1;
        puVar20 = puVar20 + 2;
        lVar19 = lVar19 + -0x10;
        bVar9 = CARRY8(*puVar11,uVar22);
        uVar22 = *puVar11 + uVar22;
      } while (!bVar9);
      puVar14 = &UNK_10b238328;
      func_0x000108a079f0(&UNK_108cc61c4,0x35);
      puVar12 = extraout_x1;
LAB_100f3f94c:
      if ((long)uVar22 < 0) {
        func_0x0001087c9084(0,uVar22);
        goto LAB_100f3f95c;
      }
      uStack_100 = uVar24;
      if (uVar22 == 0) {
        uStack_f0 = 1;
        lStack_e8 = 0;
        uVar10 = *puVar12;
        uVar24 = puVar12[1];
        uStack_f8 = uVar22;
        if (uVar24 == 0) goto LAB_100f3f9c4;
      }
      else {
        uVar18 = _malloc(uVar22);
        if (uVar18 == 0) {
          puVar11 = (ulong *)func_0x0001087c9084(1,uVar22);
          if (uStack_f8 != 0) {
            _free(uStack_f0);
            puVar21 = puVar11;
          }
          auVar28 = __Unwind_Resume(puVar11);
          lVar27 = auVar28._8_8_;
          puVar20 = auVar28._0_8_;
          uStack_168 = 0x10;
          uStack_118 = 0x100f3fb00;
          puVar13 = (undefined *)0x0;
          if (uVar24 <= param_7) {
            puVar13 = puVar14;
          }
          lStack_170 = lVar17;
          puStack_160 = puVar25;
          puStack_158 = puVar4;
          uStack_150 = uVar16;
          uStack_148 = uVar18;
          puStack_140 = puVar12;
          puStack_138 = param_4;
          uStack_130 = uVar22;
          puStack_128 = puVar21;
          ppuStack_120 = &puStack_90;
          if ((long)puVar13 < 0) {
            func_0x0001087c9084(0);
            puVar13 = extraout_x1_00;
            puVar20 = extraout_x8;
          }
          if (puVar13 != (undefined *)0x0) {
            lVar19 = _malloc(puVar13);
            puStack_268 = puVar14;
            if (lVar19 != 0) goto LAB_100f3fb8c;
            func_0x0001087c9084(1,puVar13);
          }
          puStack_268 = (undefined *)0x0;
          lVar19 = 1;
LAB_100f3fb8c:
          lStack_258 = 0;
          lStack_260 = lVar19;
          __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                    (aiStack_1e0,lVar27,puVar14,puVar15,uVar24);
          lVar17 = 0;
          uStack_1f0 = uStack_180;
          uStack_208 = uStack_198;
          uStack_210 = uStack_1a0;
          uStack_1f8 = uStack_188;
          uStack_200 = uStack_190;
          lStack_248 = lStack_1d8;
          uStack_238 = uStack_1c8;
          lStack_240 = lStack_1d0;
          uStack_228 = uStack_1b8;
          uStack_230 = uStack_1c0;
          uStack_218 = uStack_1a8;
          uStack_220 = uStack_1b0;
          lVar26 = 0;
          while (FUN_1011dd528(aiStack_1e0,auStack_250), lVar7 = lStack_1d0, aiStack_1e0[0] == 1) {
            uVar24 = lStack_1d8 - lVar26;
            if ((ulong)((long)puStack_268 - lVar17) < uVar24) {
              FUN_108855060(&puStack_268,lVar17,uVar24,1,1);
              lVar19 = lStack_260;
              lVar17 = lStack_258;
            }
            puVar13 = puStack_268;
            _memcpy(lVar19 + lVar17,lVar27 + lVar26,uVar24);
            lStack_258 = lVar17 + uVar24;
            if ((ulong)((long)puVar13 - lStack_258) < param_7) {
              FUN_108855060(&puStack_268,lStack_258,param_7,1,1);
              lVar19 = lStack_260;
            }
            lVar17 = lStack_258;
            _memcpy(lVar19 + lStack_258,param_6,param_7);
            lVar17 = lVar17 + param_7;
            lVar26 = lVar7;
            lStack_258 = lVar17;
          }
          uVar24 = (long)puVar14 - lVar26;
          if ((ulong)((long)puStack_268 - lVar17) < uVar24) {
            FUN_108855060(&puStack_268,lVar17,uVar24,1,1);
            lVar19 = lStack_260;
            lVar17 = lStack_258;
          }
          _memcpy(lVar19 + lVar17,lVar27 + lVar26,uVar24);
          puVar20[2] = lVar17 + uVar24;
          puVar20[1] = lStack_260;
          *puVar20 = puStack_268;
          return;
        }
        lStack_e8 = 0;
        uVar10 = *puVar12;
        uVar24 = puVar12[1];
        uStack_f8 = uVar22;
        uStack_f0 = uVar18;
        if (uVar24 <= uVar22) goto LAB_100f3f9c4;
      }
      lStack_e8 = 0;
      uStack_108 = uVar10;
      uStack_f8 = uVar22;
      FUN_108855060(&uStack_f8,0,uVar24,1,1);
      uVar10 = uStack_108;
LAB_100f3f9c4:
      lVar27 = lStack_e8;
      uVar16 = uStack_f0;
      _memcpy(uStack_f0 + lStack_e8,uVar10,uVar24);
      puVar23 = (undefined2 *)(uVar16 + lVar27 + uVar24);
      uVar24 = uVar22 - (lVar27 + uVar24);
      if (uStack_100 == 2) {
        if (lVar17 != 0x10) {
          do {
            uVar16 = uVar24 - 2;
            if (uVar24 < 2) {
LAB_100f3fa90:
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b238340);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100f3faac);
              (*pcVar8)();
            }
            puVar12 = puVar25 + 2;
            uVar10 = *puVar25;
            uVar18 = puVar25[1];
            *puVar23 = *(undefined2 *)param_4;
            uVar24 = uVar16 - uVar18;
            if (uVar16 < uVar18) goto LAB_100f3fa90;
            puVar2 = puVar23 + 1;
            puVar23 = (undefined2 *)((long)puVar2 + uVar18);
            _memcpy(puVar2,uVar10);
            puVar25 = puVar12;
          } while (puVar12 != puVar4);
        }
      }
      else if (lVar17 != 0x10) {
        do {
          if (uVar24 == 0) goto LAB_100f3fa90;
          puVar12 = puVar25 + 2;
          uVar10 = *puVar25;
          uVar16 = puVar25[1];
          uVar18 = uVar24 - 1;
          *(undefined1 *)puVar23 = *(undefined1 *)param_4;
          uVar24 = uVar18 - uVar16;
          if (uVar18 < uVar16) goto LAB_100f3fa90;
          puVar3 = (undefined1 *)((long)puVar23 + 1);
          puVar23 = (undefined2 *)(puVar3 + uVar16);
          _memcpy(puVar3,uVar10);
          puVar25 = puVar12;
        } while (puVar12 != puVar4);
      }
      puVar21[1] = uStack_f0;
      *puVar21 = uStack_f8;
      puVar21[2] = uVar22 - uVar24;
      return;
    }
    lStack_68 = 0;
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar24 = *(ulong *)(param_2 + 0x10);
    uStack_78 = unaff_x19;
    uStack_70 = uVar16;
    if (unaff_x19 < uVar24) goto LAB_100f3f878;
  }
  lVar27 = lStack_68;
  uVar16 = uStack_70;
  _memcpy(uStack_70 + lStack_68,uVar10,uVar24);
  puVar15 = (undefined4 *)(uVar16 + lVar27 + uVar24);
  uVar24 = unaff_x19 - (lVar27 + uVar24);
  if ((long)param_5 < 2) {
    if (param_5 == 0) {
      lVar27 = (long)param_3 * -0x18 + 0x18;
      if (lVar27 != 0) {
        puVar21 = (ulong *)(param_2 + 0x28);
        do {
          uVar16 = *puVar21;
          bVar9 = uVar24 < uVar16;
          uVar24 = uVar24 - uVar16;
          if (bVar9) goto LAB_100f3f85c;
          _memcpy(puVar15,puVar21[-1]);
          puVar21 = puVar21 + 3;
          lVar27 = lVar27 + 0x18;
          puVar15 = (undefined4 *)((long)puVar15 + uVar16);
        } while (lVar27 != 0);
      }
      goto LAB_100f3f828;
    }
    if (param_5 == 1) {
      lVar27 = (long)param_3 * -0x18 + 0x18;
      if (lVar27 != 0) {
        puVar21 = (ulong *)(param_2 + 0x28);
        do {
          if (uVar24 == 0) goto LAB_100f3f85c;
          uVar16 = puVar21[-1];
          uVar22 = *puVar21;
          uVar18 = uVar24 - 1;
          *(undefined1 *)puVar15 = *(undefined1 *)unaff_x20;
          uVar24 = uVar18 - uVar22;
          if (uVar18 < uVar22) goto LAB_100f3f85c;
          puVar21 = puVar21 + 3;
          lVar19 = (long)puVar15 + 1;
          puVar15 = (undefined4 *)(lVar19 + uVar22);
          _memcpy(lVar19,uVar16);
          lVar27 = lVar27 + 0x18;
        } while (lVar27 != 0);
      }
      goto LAB_100f3f828;
    }
  }
  else {
    if (param_5 == 2) {
      lVar27 = (long)param_3 * -0x18 + 0x18;
      if (lVar27 != 0) {
        puVar21 = (ulong *)(param_2 + 0x28);
        do {
          uVar16 = uVar24 - 2;
          if (uVar24 < 2) goto LAB_100f3f85c;
          uVar22 = puVar21[-1];
          uVar18 = *puVar21;
          *(undefined2 *)puVar15 = *(undefined2 *)unaff_x20;
          uVar24 = uVar16 - uVar18;
          if (uVar16 < uVar18) goto LAB_100f3f85c;
          puVar21 = puVar21 + 3;
          lVar19 = (long)puVar15 + 2;
          puVar15 = (undefined4 *)(lVar19 + uVar18);
          _memcpy(lVar19,uVar22);
          lVar27 = lVar27 + 0x18;
        } while (lVar27 != 0);
      }
      goto LAB_100f3f828;
    }
    if (param_5 == 3) {
      lVar27 = (long)param_3 * -0x18 + 0x18;
      if (lVar27 != 0) {
        puVar21 = (ulong *)(param_2 + 0x28);
        do {
          uVar16 = uVar24 - 3;
          if (uVar24 < 3) goto LAB_100f3f85c;
          uVar22 = puVar21[-1];
          uVar18 = *puVar21;
          uVar5 = *(undefined2 *)unaff_x20;
          *(undefined1 *)((long)puVar15 + 2) = *(undefined1 *)((long)unaff_x20 + 2);
          *(undefined2 *)puVar15 = uVar5;
          uVar24 = uVar16 - uVar18;
          if (uVar16 < uVar18) goto LAB_100f3f85c;
          puVar21 = puVar21 + 3;
          lVar19 = (long)puVar15 + 3;
          puVar15 = (undefined4 *)(lVar19 + uVar18);
          _memcpy(lVar19,uVar22);
          lVar27 = lVar27 + 0x18;
        } while (lVar27 != 0);
      }
      goto LAB_100f3f828;
    }
    if (param_5 == 4) {
      lVar27 = (long)param_3 * -0x18 + 0x18;
      if (lVar27 != 0) {
        puVar21 = (ulong *)(param_2 + 0x28);
        do {
          uVar16 = uVar24 - 4;
          if (uVar24 < 4) {
LAB_100f3f85c:
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b238340);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100f3f878);
            (*pcVar8)();
          }
          uVar22 = puVar21[-1];
          uVar18 = *puVar21;
          *puVar15 = *unaff_x20;
          uVar24 = uVar16 - uVar18;
          if (uVar16 < uVar18) goto LAB_100f3f85c;
          puVar21 = puVar21 + 3;
          puVar1 = puVar15 + 1;
          puVar15 = (undefined4 *)((long)puVar1 + uVar18);
          _memcpy(puVar1,uVar22);
          lVar27 = lVar27 + 0x18;
        } while (lVar27 != 0);
      }
      goto LAB_100f3f828;
    }
  }
  lVar27 = (long)param_3 * -0x18 + 0x18;
  if (lVar27 != 0) {
    puVar21 = (ulong *)(param_2 + 0x28);
    do {
      uVar16 = uVar24 - param_5;
      if (uVar24 < param_5) goto LAB_100f3f85c;
      uVar22 = puVar21[-1];
      uVar18 = *puVar21;
      _memcpy(puVar15,unaff_x20,param_5);
      uVar24 = uVar16 - uVar18;
      if (uVar16 < uVar18) goto LAB_100f3f85c;
      puVar21 = puVar21 + 3;
      lVar19 = (long)puVar15 + param_5;
      puVar15 = (undefined4 *)(lVar19 + uVar18);
      _memcpy(lVar19,uVar22,uVar18);
      lVar27 = lVar27 + 0x18;
    } while (lVar27 != 0);
  }
LAB_100f3f828:
  puStack_80[1] = uStack_70;
  *puStack_80 = uStack_78;
  puStack_80[2] = unaff_x19 - uVar24;
  return;
}

