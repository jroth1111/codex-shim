
ulong * FUN_105aba468(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined2 *puVar4;
  long lVar5;
  byte *pbVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar13;
  undefined2 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined8 auStack_210 [3];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined2 uStack_1b8;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  long lStack_1a0;
  short sStack_198;
  undefined1 uStack_196;
  undefined5 uStack_195;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  int aiStack_58 [2];
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar13 = param_1[2];
  uVar15 = *param_1;
  if (uVar13 == uVar15) {
    uVar19 = param_1[5] + param_1[6];
    uVar15 = uVar19;
    if (0x7fffffffffffffe < uVar19) {
      uVar15 = 0x7ffffffffffffff;
    }
    if ((uVar15 - uVar13 < 2 || uVar19 < uVar13) ||
       (func_0x000108a32714(aiStack_58,uVar13,param_1[1],uVar15,8,0x10), aiStack_58[0] == 1)) {
      uVar15 = uVar13 + 1;
      puVar11 = (undefined8 *)0x10;
      func_0x000108a32714(aiStack_58,uVar13,param_1[1],uVar15,8);
      if (aiStack_58[0] == 1) {
        auVar32 = func_0x0001087c9084(uStack_50,uStack_48);
        uVar19 = auVar32._8_8_;
        plVar9 = auVar32._0_8_;
        uStack_68 = 0x105aba5c8;
        uVar12 = plVar9[2];
        if (uVar12 < 6) {
          plVar16 = plVar9 + 1;
          uVar18 = 5;
          uVar17 = uVar12;
        }
        else {
          plVar16 = (long *)*plVar9;
          uVar17 = plVar9[1];
          uVar18 = uVar12;
        }
        puStack_a0 = param_1;
        uStack_98 = param_4;
        plStack_90 = param_3;
        uStack_88 = param_2;
        uStack_80 = uVar15;
        uStack_78 = uVar13;
        puStack_70 = &stack0xfffffffffffffff0;
        if (uVar19 < uVar17) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b16861,0x20,&UNK_10b4075b0);
        }
        else {
          if (5 < uVar19) {
            if (uVar19 == uVar18) {
              return (ulong *)0x8000000000000001;
            }
            if ((long)uVar19 < 0) {
              return (ulong *)0x0;
            }
            if (uVar12 < 6) {
              lVar5 = _malloc(uVar19);
              if (lVar5 == 0) {
                return (ulong *)0x1;
              }
              _memcpy(lVar5,plVar16,uVar17);
            }
            else {
              if ((long)uVar18 < 0) {
                return (ulong *)0x0;
              }
              lVar5 = _realloc(plVar16);
              if (lVar5 == 0) {
                return (ulong *)0x1;
              }
            }
            plVar9[1] = uVar17;
            plVar9[2] = uVar19;
            *plVar9 = lVar5;
            return (ulong *)0x8000000000000001;
          }
          if (uVar12 < 6) {
            return (ulong *)0x8000000000000001;
          }
          *plVar9 = 0;
          _memcpy(plVar9 + 1,plVar16,uVar17);
          plVar9[2] = uVar17;
          param_3 = plVar9;
          if (-1 < (long)uVar18) {
            _free(plVar16);
            return (ulong *)0x8000000000000001;
          }
        }
        uStack_b0 = 0;
        puVar10 = &UNK_10b406308;
        uStack_a8 = uVar18;
        auVar32 = func_0x000108a07a3c(&UNK_109b15719,0x2b,&uStack_b0,&UNK_10b406308,&UNK_10b407568);
        uVar15 = auVar32._8_8_;
        puVar4 = auVar32._0_8_;
        uStack_b8 = 0x105aba72c;
        uVar13 = *(ulong *)(puVar4 + 0x14);
        if (uVar13 < 9) {
          puVar14 = puVar4 + 1;
          uVar19 = 8;
          uVar12 = uVar13;
        }
        else {
          puVar14 = *(undefined2 **)(puVar4 + 8);
          uVar19 = uVar13;
          uVar12 = *(ulong *)(puVar4 + 4);
        }
        puStack_f0 = param_1;
        uStack_e8 = param_4;
        plStack_e0 = param_3;
        uStack_d8 = uVar18;
        plStack_d0 = plVar16;
        uStack_c8 = uVar17;
        ppuStack_c0 = &puStack_70;
        if (uVar15 < uVar12) {
          plVar9 = (long *)&UNK_10b4075b0;
          auVar32 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b16861,0x20);
          puVar8 = auVar32._8_8_;
          pbVar6 = auVar32._0_8_;
          uStack_230 = (undefined2)puVar11[1];
          uStack_238 = (undefined2)*puVar11;
          uStack_236 = (undefined6)((ulong)*puVar11 >> 0x10);
          lStack_1a0 = puVar11[2];
          sStack_198 = *(short *)(pbVar6 + 0xb8);
          if (sStack_198 == 0) {
            sStack_198 = 200;
          }
          uStack_1f8 = 0;
          uStack_1f0 = 8;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          uStack_1d8 = 8;
          uStack_1d0 = 0;
          uStack_1c8 = 2;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1ae = uStack_236;
          uStack_1b0 = uStack_238;
          uStack_1a6 = (undefined6)((ulong)puVar11[1] >> 0x10);
          uStack_196 = 3;
          auStack_210[0] = 0;
          uVar15 = *(ulong *)(pbVar6 + 0xa8);
          if (5 < uVar15) {
            uVar15 = *(ulong *)(pbVar6 + 0xa0);
          }
          uStack_1a8 = uStack_230;
          if (uVar15 != 0) {
            uStack_188 = *(undefined8 *)(pbVar6 + 0xa0);
            uStack_190 = *(undefined8 *)(pbVar6 + 0x98);
            uStack_178 = *(undefined8 *)(pbVar6 + 0xb0);
            uStack_180 = *(undefined8 *)(pbVar6 + 0xa8);
            FUN_105ac0130(&uStack_1b0,&uStack_190);
          }
          lVar5 = plVar9[2];
          if (lVar5 != 0) {
            FUN_105ac02b8(&uStack_1b0,plVar9);
          }
          puVar11 = (undefined8 *)_malloc(8);
          lVar2 = lStack_1a0;
          if (puVar11 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,8);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x105abab38);
            (*pcVar3)();
          }
          *puVar11 = puVar10;
          if (lStack_1a0 == CONCAT62(uStack_1ae,uStack_1b0)) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(&uStack_1b0);
          }
          puVar1 = (undefined8 *)(CONCAT62(uStack_1a6,uStack_1a8) + lVar2 * 0x20);
          *puVar1 = puVar11;
          puVar1[1] = &UNK_10b4069a8;
          puVar1[3] = 0xad5f736dbe5d68ea;
          puVar1[2] = 0xe6101cc296cd0f14;
          lStack_1a0 = lVar2 + 1;
          puVar7 = (ulong *)func_0x000105aaddc8(auStack_210);
          uVar23 = puVar8[9];
          uVar22 = puVar8[8];
          uVar21 = puVar8[0xb];
          uVar20 = puVar8[10];
          uVar27 = puVar8[1];
          uVar26 = *puVar8;
          uVar25 = puVar8[3];
          uVar24 = puVar8[2];
          uVar31 = puVar8[5];
          uVar30 = puVar8[4];
          uVar29 = puVar8[7];
          uVar28 = puVar8[6];
          extraout_x8_00[0xd] = CONCAT62(uStack_1a6,uStack_1a8);
          extraout_x8_00[0xc] = CONCAT62(uStack_1ae,uStack_1b0);
          extraout_x8_00[0xf] = CONCAT53(uStack_195,CONCAT12(uStack_196,sStack_198));
          extraout_x8_00[0xe] = lStack_1a0;
          extraout_x8_00[1] = uVar27;
          *extraout_x8_00 = uVar26;
          extraout_x8_00[3] = uVar25;
          extraout_x8_00[2] = uVar24;
          extraout_x8_00[5] = uVar31;
          extraout_x8_00[4] = uVar30;
          extraout_x8_00[7] = uVar29;
          extraout_x8_00[6] = uVar28;
          extraout_x8_00[9] = uVar23;
          extraout_x8_00[8] = uVar22;
          extraout_x8_00[0xb] = uVar21;
          extraout_x8_00[10] = uVar20;
          if ((lVar5 == 0) && (*plVar9 != 0)) {
            puVar7 = (ulong *)_free(plVar9[1]);
          }
          if (((*pbVar6 != 0xb) && (9 < *pbVar6)) && (*(long *)(pbVar6 + 0x10) != 0)) {
            puVar7 = (ulong *)_free(*(undefined8 *)(pbVar6 + 8));
          }
          if (*(long *)(pbVar6 + 0x18) != 0) {
            puVar7 = (ulong *)(**(code **)(*(long *)(pbVar6 + 0x18) + 0x20))
                                        (pbVar6 + 0x30,*(undefined8 *)(pbVar6 + 0x20),
                                         *(undefined8 *)(pbVar6 + 0x28));
          }
          if (*(long *)(pbVar6 + 0x38) != 0) {
            puVar7 = (ulong *)(**(code **)(*(long *)(pbVar6 + 0x38) + 0x20))
                                        (pbVar6 + 0x50,*(undefined8 *)(pbVar6 + 0x40),
                                         *(undefined8 *)(pbVar6 + 0x48));
          }
          if (*(long *)(pbVar6 + 0x58) != 0) {
            puVar7 = (ulong *)(**(code **)(*(long *)(pbVar6 + 0x58) + 0x20))
                                        (pbVar6 + 0x70,*(undefined8 *)(pbVar6 + 0x60),
                                         *(undefined8 *)(pbVar6 + 0x68));
          }
          if (*(long *)(pbVar6 + 0x78) != 0) {
            puVar7 = (ulong *)(**(code **)(*(long *)(pbVar6 + 0x78) + 0x20))
                                        (pbVar6 + 0x90,*(undefined8 *)(pbVar6 + 0x80),
                                         *(undefined8 *)(pbVar6 + 0x88));
          }
          if ((uVar15 == 0) && (5 < *(ulong *)(pbVar6 + 0xa8))) {
            puVar7 = (ulong *)_free(*(undefined8 *)(pbVar6 + 0x98));
          }
          return puVar7;
        }
        if (uVar15 < 9) {
          if (8 < uVar13) {
            *puVar4 = 0;
            _memcpy(puVar4 + 1,puVar14,uVar12 << 2);
            *(ulong *)(puVar4 + 0x14) = uVar12;
            uStack_f8 = uVar19 << 2;
            if ((uVar19 >> 0x3e != 0) || (0x7ffffffffffffffe < uStack_f8)) {
              uStack_100 = 0;
              func_0x000108a07a3c(&UNK_109b15719,0x2b,&uStack_100,&UNK_10b406308,&UNK_10b407568);
              return extraout_x8;
            }
            _free(puVar14);
          }
        }
        else if (uVar15 != uVar19) {
          uVar17 = uVar15 * 4;
          if (uVar15 >> 0x3e != 0) {
            return (ulong *)0x0;
          }
          if (0x7ffffffffffffffe < uVar17) {
            return (ulong *)0x0;
          }
          if (uVar13 < 9) {
            lVar5 = _malloc(uVar17);
            if (lVar5 == 0) {
              return (ulong *)0x2;
            }
            _memcpy(lVar5,puVar14,uVar12 << 2);
          }
          else {
            if (uVar19 >> 0x3e != 0) {
              return (ulong *)0x0;
            }
            if (0x7ffffffffffffffe < uVar19 << 2) {
              return (ulong *)0x0;
            }
            lVar5 = _realloc(puVar14,uVar17);
            if (lVar5 == 0) {
              return (ulong *)0x2;
            }
          }
          *puVar4 = 1;
          *(ulong *)(puVar4 + 4) = uVar12;
          *(long *)(puVar4 + 8) = lVar5;
          *(ulong *)(puVar4 + 0x14) = uVar15;
        }
        return (ulong *)0x8000000000000001;
      }
      *param_1 = uVar15;
      param_1[1] = uStack_50;
      goto LAB_105aba498;
    }
    *param_1 = uVar15;
    param_1[1] = uStack_50;
  }
  if (uVar13 == uVar15) {
    func_0x000108a325dc();
  }
LAB_105aba498:
  puVar11 = (undefined8 *)(param_1[1] + uVar13 * 0x10);
  *puVar11 = param_2;
  *(int *)(puVar11 + 1) = (int)param_3;
  *(int *)((long)puVar11 + 0xc) = (int)param_4;
  param_1[2] = uVar13 + 1;
  return param_1;
}

