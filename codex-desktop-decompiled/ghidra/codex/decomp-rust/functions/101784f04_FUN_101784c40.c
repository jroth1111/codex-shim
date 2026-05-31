
void FUN_101784c40(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  undefined7 uVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined *puVar19;
  ulong uStack_358;
  long *plStack_350;
  ulong uStack_348;
  undefined *puStack_340;
  int *piStack_338;
  ulong uStack_330;
  long *plStack_328;
  ulong uStack_320;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  int *piStack_2a0;
  ulong uStack_298;
  long *plStack_290;
  long *plStack_288;
  ulong uStack_280;
  long *plStack_278;
  long lStack_270;
  byte bStack_220;
  undefined7 uStack_21f;
  char cStack_218;
  undefined7 uStack_217;
  char cStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  int *piStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  long *plStack_188;
  undefined7 uStack_170;
  char cStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  ulong uStack_159;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined5 uStack_12e;
  char cStack_129;
  undefined7 uStack_128;
  char cStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  long *plStack_108;
  ulong uStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  
  puStack_150 = &UNK_108cde34c;
  uStack_148 = 4;
  puStack_140 = &UNK_108ce3293;
  uStack_138 = 0x23;
  uVar12 = *param_2;
  uVar8 = uVar12 ^ 0x8000000000000000;
  if (-1 < (long)uVar12) {
    uVar8 = 5;
  }
  if ((long)uVar8 < 3) {
    if (uVar8 == 0) {
      uStack_130 = 7;
    }
    else if (uVar8 == 1) {
      uStack_12f = (undefined1)param_2[1];
      uStack_130 = 0;
    }
    else {
      cStack_121 = (char)(param_2[2] >> 0x38);
      uStack_128 = (undefined7)param_2[2];
      if (param_2[1] == 0) {
        uStack_130 = 1;
      }
      else if (param_2[1] == 1) {
        uStack_130 = 2;
      }
      else {
        uStack_130 = 3;
      }
    }
    uVar8 = func_0x000108a4a50c(&uStack_130,&puStack_150,&UNK_10b259300);
    goto LAB_10178526c;
  }
  if (uVar8 == 4) {
    uStack_190 = param_2[1];
    uStack_1a0 = (long *)param_2[2];
    uVar8 = param_2[3];
    plVar6 = uStack_1a0 + uVar8 * 9;
    plVar13 = uStack_1a0;
    plStack_188 = plVar6;
    if (uVar8 == 0) {
LAB_101784ee4:
      uStack_1d0 = (undefined8 *)&UNK_108cde34c;
      puStack_1c8 = (undefined *)0x4;
      uStack_130 = SUB81(&uStack_1d0,0);
      uStack_12f = (undefined1)((ulong)&uStack_1d0 >> 8);
      uStack_12e = (undefined5)((ulong)&uStack_1d0 >> 0x10);
      cStack_129 = (char)((ulong)&uStack_1d0 >> 0x38);
      uStack_128 = 0x10179e9f8;
      cStack_121 = '\0';
      plStack_198 = plVar13;
      puVar9 = (undefined *)FUN_108880790(s_missing_field_____108ac28f7,&uStack_130);
LAB_101784f14:
      cStack_218 = (char)puVar9;
      uStack_217 = (undefined7)((ulong)puVar9 >> 8);
LAB_101784f20:
      bStack_220 = 0xf;
      FUN_1017a5c10(plVar13,((ulong)((long)plVar6 - (long)plVar13) >> 3) * -0x71c71c71c71c71c7);
      uVar15 = 0xf;
    }
    else {
      plVar13 = uStack_1a0 + 9;
      lVar14 = *uStack_1a0;
      if (lVar14 == -0x7ffffffffffffffb) goto LAB_101784ee4;
      uStack_130 = (undefined1)lVar14;
      uStack_12f = (undefined1)((ulong)lVar14 >> 8);
      uStack_12e = (undefined5)((ulong)lVar14 >> 0x10);
      cStack_129 = (char)((ulong)lVar14 >> 0x38);
      uStack_120 = (undefined7)uStack_1a0[2];
      uStack_119 = (undefined1)((ulong)uStack_1a0[2] >> 0x38);
      uStack_128 = (undefined7)uStack_1a0[1];
      cStack_121 = (char)((ulong)uStack_1a0[1] >> 0x38);
      uStack_110 = (undefined7)uStack_1a0[4];
      uStack_109 = (undefined1)((ulong)uStack_1a0[4] >> 0x38);
      uStack_118 = (undefined7)uStack_1a0[3];
      uStack_111 = (undefined1)((ulong)uStack_1a0[3] >> 0x38);
      uStack_100 = uStack_1a0[6];
      plStack_108 = (long *)uStack_1a0[5];
      lStack_f0 = uStack_1a0[8];
      plStack_f8 = (long *)uStack_1a0[7];
      plStack_198 = plVar13;
      FUN_1017bd860(&uStack_1d0,&uStack_130);
      puVar9 = puStack_1c8;
      if ((char)uStack_1d0 == '\x01') goto LAB_101784f14;
      bVar4 = uStack_1d0._1_1_;
      uVar15 = (uint)uStack_1d0._1_1_;
      FUN_1017c6368(&puStack_340,&uStack_1a0);
      plVar13 = plStack_198;
      cStack_218 = (char)piStack_338;
      cVar2 = cStack_218;
      uStack_217 = (undefined7)((ulong)piStack_338 >> 8);
      uVar3 = uStack_217;
      plVar6 = plStack_188;
      if ((char)puStack_340 == '\x16') goto LAB_101784f20;
      uStack_111 = SUB81(plStack_328,0);
      uStack_110 = (undefined7)((ulong)plStack_328 >> 8);
      uStack_119 = (undefined1)uStack_330;
      uStack_118 = (undefined7)(uStack_330 >> 8);
      uStack_128 = (undefined7)((ulong)puStack_340 >> 8);
      bStack_220 = bVar4;
      uStack_21f = CONCAT52(uStack_12e,CONCAT11(uStack_12f,uStack_130));
      uStack_207 = uStack_118;
      uStack_20f = uStack_217;
      uStack_208 = uStack_119;
      uStack_217 = uStack_128;
      cStack_210 = cStack_218;
      cStack_218 = (char)puStack_340;
      plStack_290 = plStack_328;
      puStack_2a8 = puStack_340;
      puStack_2b0 = (undefined8 *)CONCAT71(uStack_21f,bVar4);
      uStack_298 = uStack_330;
      piStack_2a0 = piStack_338;
      uVar12 = (long)plStack_188 - (long)plStack_198;
      uStack_200 = uStack_111;
      uStack_1ff = uStack_110;
      cStack_129 = (char)puStack_340;
      cStack_121 = cVar2;
      uStack_120 = uVar3;
      if (uVar12 != 0) {
        uVar7 = FUN_108878f3c(uVar8,&UNK_10b2593d0,&UNK_10b258940);
        cStack_218 = (char)uVar7;
        uStack_217 = (undefined7)((ulong)uVar7 >> 8);
        uVar15 = 0xf;
        bStack_220 = 0xf;
        func_0x0001017a6a48((ulong)&puStack_2b0 | 8);
      }
      FUN_1017a5c10(plVar13,(uVar12 >> 3) * -0x71c71c71c71c71c7);
    }
    if (uStack_190 == 0) goto LAB_101785260;
    _free(uStack_1a0);
    uVar8 = CONCAT71(uStack_217,cStack_218);
  }
  else if (uVar8 == 5) {
    uVar16 = param_2[6];
    plVar6 = (long *)param_2[1];
    uVar8 = param_2[2];
    uVar10 = param_2[4];
    if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
      _free(param_2[3] + uVar10 * -8 + -8);
    }
    lVar14 = uVar8 * 0x68;
    plVar13 = plVar6 + uVar8 * 0xd;
    uStack_130 = 5;
    uStack_12f = 0;
    uStack_12e = 0;
    cStack_129 = -0x80;
    uVar10 = uVar8;
    if (0x3fff < uVar8) {
      uVar10 = 0x4000;
    }
    plStack_e8 = plVar6;
    plStack_e0 = plVar6;
    uStack_d8 = uVar12;
    plStack_d0 = plVar13;
    if (uVar8 == 0) {
      uStack_358 = 0;
      plStack_350 = (long *)0x8;
      uStack_348 = 0;
    }
    else {
      plStack_350 = (long *)_malloc(uVar10 << 6);
      if (plStack_350 == (long *)0x0) {
        func_0x0001087c9084(8,uVar10 << 6);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10178fc14);
        (*pcVar5)();
      }
      uStack_348 = 0;
      plStack_e0 = plVar6 + 0xd;
      puVar9 = (undefined *)*plVar6;
      uStack_358 = uVar10;
      if (puVar9 == (undefined *)0x8000000000000000) {
        uVar15 = 0xf;
      }
      else {
        uVar15 = 0xf;
        plVar11 = plVar6;
        do {
          lVar14 = lVar14 + -0x68;
          piVar1 = (int *)plVar11[1];
          uVar8 = plVar11[2];
          puVar19 = (undefined *)plVar11[4];
          puVar17 = (undefined8 *)plVar11[3];
          uStack_128 = SUB87(puVar19,0);
          cStack_121 = (char)((ulong)puVar19 >> 0x38);
          uStack_130 = SUB81(puVar17,0);
          uStack_12f = (undefined1)((ulong)puVar17 >> 8);
          uStack_12e = (undefined5)((ulong)puVar17 >> 0x10);
          cStack_129 = (char)((ulong)puVar17 >> 0x38);
          uVar12 = plVar11[6];
          piVar18 = (int *)plVar11[5];
          uStack_118 = (undefined7)uVar12;
          uStack_111 = (undefined1)(uVar12 >> 0x38);
          uStack_120 = SUB87(piVar18,0);
          uStack_119 = (undefined1)((ulong)piVar18 >> 0x38);
          plStack_108 = (long *)plVar11[8];
          plVar6 = (long *)plVar11[7];
          uStack_110 = SUB87(plVar6,0);
          uStack_109 = (undefined1)((ulong)plVar6 >> 0x38);
          plStack_f8 = (long *)plVar11[10];
          uStack_100 = plVar11[9];
          lStack_f0 = plVar11[0xb];
          if ((uVar8 != 4) || (*piVar1 != 0x65707974)) {
            uStack_1d0 = (undefined8 *)CONCAT71(uStack_1d0._1_7_,0xc);
            uStack_130 = 5;
            uStack_12f = 0;
            uStack_12e = 0;
            cStack_129 = -0x80;
            puStack_1c8 = puVar9;
            piStack_1c0 = piVar1;
            uStack_1b8 = uVar8;
            if (puVar17 == (undefined8 *)0x8000000000000005) {
              plVar6 = (long *)FUN_108880728(&UNK_108cde170,0x10);
            }
            else {
              puStack_2b0 = puVar17;
              puStack_2a8 = puVar19;
              piStack_2a0 = piVar18;
              uStack_298 = uVar12;
              plStack_290 = plVar6;
              plStack_288 = plStack_108;
              uStack_280 = uStack_100;
              plStack_278 = plStack_f8;
              lStack_270 = lStack_f0;
              FUN_10177c7ec(&uStack_1a0,&puStack_2b0);
              uVar8 = uStack_348;
              plVar6 = plStack_198;
              if ((char)uStack_1a0 != '\x16') {
                plStack_288 = plStack_198;
                plStack_290 = uStack_1a0;
                plStack_278 = plStack_188;
                uStack_280 = uStack_190;
                puStack_2a8 = puStack_1c8;
                puStack_2b0 = uStack_1d0;
                uStack_298 = uStack_1b8;
                piStack_2a0 = piStack_1c0;
                if (uStack_348 == uStack_358) {
                  func_0x0001089a4c60(&uStack_358);
                }
                plVar6 = plStack_350 + uVar8 * 8;
                plVar6[1] = (long)puStack_2a8;
                *plVar6 = (long)puStack_2b0;
                plVar6[3] = uStack_298;
                plVar6[2] = (long)piStack_2a0;
                plVar6[5] = (long)plStack_288;
                plVar6[4] = (long)plStack_290;
                plVar6[7] = (long)plStack_278;
                plVar6[6] = uStack_280;
                uStack_348 = uVar8 + 1;
                goto joined_r0x000101785108;
              }
            }
            cStack_218 = (char)plVar6;
            uStack_217 = (undefined7)((ulong)plVar6 >> 8);
            bStack_220 = 0xf;
            func_0x0001017a6a48(&uStack_1d0);
            goto LAB_101785234;
          }
          if (puVar9 != (undefined *)0x0) {
            _free();
          }
          if (uVar15 != 0xf) {
            uStack_1a0 = (long *)&UNK_108cde34c;
            plStack_198 = (long *)0x4;
            puStack_2b0 = &uStack_1a0;
            puStack_2a8 = &DAT_10179e9f8;
            plVar6 = (long *)FUN_108880790(s_duplicate_field_____108ac2973,&puStack_2b0);
            goto LAB_101784ed0;
          }
          puVar17 = (undefined8 *)
                    CONCAT17(cStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,uStack_130)));
          uStack_130 = 5;
          uStack_12f = 0;
          uStack_12e = 0;
          cStack_129 = -0x80;
          if (puVar17 == (undefined8 *)0x8000000000000005) {
            plVar6 = (long *)FUN_108880728(&UNK_108cde170,0x10);
            goto LAB_101784ed0;
          }
          piStack_2a0 = (int *)CONCAT17(uStack_119,uStack_120);
          puStack_2a8 = (undefined *)CONCAT17(cStack_121,uStack_128);
          plStack_290 = (long *)CONCAT17(uStack_109,uStack_110);
          uStack_298 = CONCAT17(uStack_111,uStack_118);
          uStack_280 = uStack_100;
          plStack_288 = plStack_108;
          lStack_270 = lStack_f0;
          plStack_278 = plStack_f8;
          puStack_2b0 = puVar17;
          FUN_1017bd860(&uStack_1a0,&puStack_2b0);
          plVar6 = plStack_198;
          if ((char)uStack_1a0 == '\x01') goto LAB_101784ed0;
          uVar15 = (uint)uStack_1a0._1_1_;
joined_r0x000101785108:
          plVar6 = plVar13;
          uStack_217 = uStack_170;
          if (lVar14 == 0) goto joined_r0x00010178511c;
          plVar6 = plVar11 + 0xd;
          puVar9 = (undefined *)*plVar6;
          plStack_e0 = plVar11 + 0x1a;
          plVar11 = plVar6;
        } while (puVar9 != (undefined *)0x8000000000000000);
      }
      plVar6 = plVar6 + 0xd;
      uStack_217 = uStack_170;
joined_r0x00010178511c:
      if (uVar15 != 0xf) {
        uStack_161 = SUB81(plStack_350,0);
        uStack_160 = (undefined7)((ulong)plStack_350 >> 8);
        cStack_169 = (char)uStack_358;
        uStack_168 = (undefined7)(uStack_358 >> 8);
        bStack_220 = (byte)uVar15;
        cStack_218 = '\x15';
        uStack_200 = (undefined1)uStack_348;
        uStack_1ff = (undefined7)(uStack_348 >> 8);
        uStack_20f = uStack_168;
        uStack_208 = uStack_161;
        cStack_210 = cStack_169;
        piStack_338 = (int *)CONCAT71(uStack_217,0x15);
        puStack_340 = (undefined *)CONCAT71(uStack_21f,bStack_220);
        uStack_330 = uStack_358;
        plStack_328 = plStack_350;
        uStack_320 = uStack_348;
        uStack_207 = uStack_160;
        uStack_159 = uStack_348;
        if (plVar13 != plVar6) {
          uVar7 = FUN_108878f3c(uVar16,&UNK_10b2593e0,&UNK_10b258940);
          cStack_218 = (char)uVar7;
          uStack_217 = (undefined7)((ulong)uVar7 >> 8);
          uVar15 = 0xf;
          bStack_220 = 0xf;
          func_0x0001017a6a48((ulong)&puStack_340 | 8);
        }
        FUN_1017a4824(&plStack_e8);
        uVar8 = CONCAT71(uStack_217,cStack_218);
        if (uVar15 == 0xf) goto LAB_10178526c;
        goto LAB_1017852bc;
      }
    }
    uStack_1a0 = (long *)&UNK_108cde34c;
    plStack_198 = (long *)0x4;
    puStack_2b0 = &uStack_1a0;
    puStack_2a8 = &DAT_10179e9f8;
    plVar6 = (long *)FUN_108880790(s_missing_field_____108ac28f7,&puStack_2b0);
LAB_101784ed0:
    cStack_218 = (char)plVar6;
    uStack_217 = (undefined7)((ulong)plVar6 >> 8);
    bStack_220 = 0xf;
LAB_101785234:
    FUN_1017a1524(&uStack_358);
    FUN_1017a4824(&plStack_e8);
    if (CONCAT17(cStack_129,CONCAT52(uStack_12e,CONCAT11(uStack_12f,uStack_130))) !=
        -0x7ffffffffffffffb) {
      FUN_1017a4698(&uStack_130);
    }
    uVar15 = 0xf;
LAB_101785260:
    uVar8 = CONCAT71(uStack_217,cStack_218);
  }
  else {
    FUN_10887c688(&bStack_220,&puStack_150,param_2 + 1);
    uVar15 = (uint)bStack_220;
    uVar8 = CONCAT71(uStack_217,cStack_218);
  }
  if (uVar15 != 0xf) {
LAB_1017852bc:
                    /* WARNING: Could not recover jumptable at 0x0001017852f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1017852fc + (ulong)(byte)(&UNK_108ce272e)[uVar15] * 4))
              (uVar8 >> 8,uVar8 >> 0x20);
    return;
  }
LAB_10178526c:
  param_1[1] = uVar8;
  *param_1 = 0x11;
  return;
}

