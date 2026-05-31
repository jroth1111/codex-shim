
/* WARNING: Possible PIC construction at 0x0001012de2d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012de2dc) */

void FUN_1012ddd84(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  undefined1 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong uVar19;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined8 unaff_x30;
  undefined1 auStack_300 [88];
  ulong uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 *puStack_290;
  ulong uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  undefined8 *puStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  ulong uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar23 = &stack0xfffffffffffffff0;
  puVar11 = auStack_300 + 0x50;
  uVar19 = *param_2;
  uVar17 = uVar19 ^ 0x8000000000000000;
  if (-1 < (long)uVar19) {
    uVar17 = 6;
  }
  if (3 < (long)uVar17) {
    if (uVar17 == 5) {
      uVar17 = param_2[1];
      puVar20 = (undefined8 *)param_2[2];
      uVar19 = param_2[3];
      puStack_b8 = puVar20 + uVar19 * 10;
      puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,10);
      puStack_d0 = puVar20;
      puStack_c8 = puVar20;
      uStack_c0 = uVar17;
      FUN_1087e3db0(&ppuStack_298,&puStack_130,&uStack_1a8,&UNK_10b21c810);
      uStack_188 = uStack_288;
      puStack_190 = puStack_290;
      puStack_180 = puStack_280;
      if (ppuStack_298 == (undefined8 **)0x2) {
        uStack_1d8 = uStack_288;
        puStack_1e0 = puStack_290;
        puStack_1d0 = puStack_280;
        if (uVar19 == 0) {
          param_1[2] = uStack_288;
          param_1[1] = puStack_290;
          param_1[3] = puStack_280;
          *param_1 = 2;
        }
        else {
          FUN_1087e427c(&ppuStack_298,uVar19,&UNK_10b21cb80,&UNK_10b20a590);
          param_1[5] = uStack_270;
          param_1[4] = uStack_278;
          param_1[7] = uStack_260;
          param_1[6] = uStack_268;
          param_1[9] = uStack_250;
          param_1[8] = uStack_258;
          param_1[10] = uStack_248;
          param_1[1] = puStack_290;
          *param_1 = ppuStack_298;
          param_1[3] = puStack_280;
          param_1[2] = uStack_288;
          func_0x000100e7bf04(&puStack_1e0);
        }
        lVar21 = uVar19 + 1;
        puVar13 = puVar20;
        while (lVar21 = lVar21 + -1, lVar21 != 0) {
          FUN_100ddb5bc(puVar13);
          puVar13 = puVar13 + 10;
        }
      }
      else {
        param_1[5] = uStack_270;
        param_1[4] = uStack_278;
        param_1[7] = uStack_260;
        param_1[6] = uStack_268;
        param_1[9] = uStack_250;
        param_1[8] = uStack_258;
        param_1[10] = uStack_248;
        param_1[2] = uStack_288;
        param_1[1] = puStack_290;
        param_1[3] = puStack_280;
        lVar21 = uVar19 + 1;
        *param_1 = ppuStack_298;
        puVar13 = puVar20;
        while (lVar21 = lVar21 + -1, lVar21 != 0) {
          FUN_100ddb5bc(puVar13);
          puVar13 = puVar13 + 10;
        }
      }
      if (uVar17 == 0) {
        return;
      }
      _free(puVar20);
      return;
    }
    unaff_x21 = &uStack_210;
    if (uVar17 == 6) {
      uStack_2a8 = param_2[6];
      uVar17 = param_2[1];
      uVar1 = param_2[2];
      uVar18 = param_2[4];
      puStack_2a0 = param_1;
      if ((uVar18 != 0) && (uVar18 * 9 != -0x11)) {
        _free(param_2[3] + uVar18 * -8 + -8);
      }
      uStack_218 = uVar17 + uVar1 * 0x70;
      ppuStack_298 = (undefined8 **)0x8000000000000000;
      uStack_1f8 = 0;
      uStack_1e8 = 0;
      uStack_230 = uVar17;
      uStack_228 = uVar17;
      uStack_220 = uVar19;
      do {
        FUN_1011ae894(&puStack_190,&ppuStack_298);
        puVar4 = puStack_178;
        puVar3 = puStack_180;
        uVar1 = uStack_188;
        uVar19 = uStack_288;
        puVar2 = puStack_290;
        ppuVar15 = ppuStack_298;
        uVar18 = uStack_160;
        puVar5 = puStack_168;
        uVar6 = uStack_150;
        puVar7 = puStack_158;
        uVar8 = uStack_140;
        uVar9 = uStack_148;
        puVar20 = puStack_190;
        uVar17 = uStack_188;
        puVar13 = puStack_180;
        puVar22 = puStack_178;
        puVar14 = puStack_170;
        if (puStack_190 != (undefined8 *)0x2) {
joined_r0x0001012de0f8:
          uStack_1c0 = uVar9;
          uStack_1b8 = uVar8;
          puStack_1d0 = puVar7;
          uStack_1c8 = uVar6;
          puStack_1e0 = puVar5;
          uStack_1d8 = uVar18;
          if (uStack_1f8 != 0) {
            puStack_c8 = (undefined8 *)0x0;
            puStack_a8 = (undefined8 *)0x0;
            uStack_90 = uStack_1e8;
            uStack_c0 = uStack_1f8;
            puStack_b8 = puStack_1f0;
            uStack_a0 = uStack_1f8;
            puStack_98 = puStack_1f0;
          }
          else {
            uStack_90 = 0;
          }
          puStack_d0 = (undefined8 *)(ulong)(uStack_1f8 != 0);
          puStack_b0 = puStack_d0;
          while (FUN_100f3c2e4(&puStack_130,&puStack_d0), puStack_130 != (undefined8 *)0x0) {
            if (puStack_130[uStack_120 * 3 + 1] != 0) {
              _free(puStack_130[uStack_120 * 3 + 2]);
            }
          }
          puStack_2a0[6] = uStack_1d8;
          puStack_2a0[5] = puStack_1e0;
          puStack_2a0[8] = uStack_1c8;
          puStack_2a0[7] = puStack_1d0;
          puStack_2a0[10] = uStack_1b8;
          puStack_2a0[9] = uStack_1c0;
          *puStack_2a0 = puVar20;
          puStack_2a0[1] = uVar17;
          puStack_2a0[2] = puVar13;
          puStack_2a0[3] = puVar22;
          puStack_2a0[4] = puVar14;
LAB_1012de24c:
          FUN_100deffc0(&ppuStack_298);
          return;
        }
        if (uStack_188 == 0x8000000000000000) {
          puStack_208 = puStack_1f0;
          uStack_210 = uStack_1f8;
          uStack_200 = uStack_1e8;
          if (uStack_218 == uStack_228) {
            puStack_2a0[2] = puStack_1f0;
            puStack_2a0[1] = uStack_1f8;
            puStack_2a0[3] = uStack_1e8;
            *puStack_2a0 = 2;
          }
          else {
            FUN_1087e427c(&puStack_d0,uStack_2a8,&UNK_10b21cb90,&UNK_10b20a590);
            puStack_2a0[5] = puStack_a8;
            puStack_2a0[4] = puStack_b0;
            puStack_2a0[7] = puStack_98;
            puStack_2a0[6] = uStack_a0;
            puStack_2a0[9] = uStack_88;
            puStack_2a0[8] = uStack_90;
            puStack_2a0[10] = uStack_80;
            puStack_2a0[1] = puStack_c8;
            *puStack_2a0 = puStack_d0;
            puStack_2a0[3] = puStack_b8;
            puStack_2a0[2] = uStack_c0;
            func_0x000100e7bf04(&uStack_210);
          }
          goto LAB_1012de24c;
        }
        ppuStack_298 = (undefined8 **)0x8000000000000000;
        if (ppuVar15 == (undefined8 **)0x8000000000000000) {
          puVar14 = (undefined8 *)_malloc(0x10);
          if (puVar14 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x10);
            goto LAB_1012de3b4;
          }
          puVar14[1] = 0x676e697373696d20;
          *puVar14 = 0x73692065756c6176;
          uStack_100 = 0;
          puStack_108 = (undefined8 *)0x10;
          puStack_f8 = (undefined8 *)0x8;
          uStack_f0 = 0;
          uStack_e8 = 0;
          puVar20 = (undefined8 *)0x0;
          puVar22 = (undefined8 *)0x10;
LAB_1012de198:
          puVar13 = (undefined8 *)uStack_120;
          uVar17 = uStack_128;
          uStack_1d8 = uStack_100;
          puStack_1e0 = puStack_108;
          uStack_1c8 = uStack_f0;
          puStack_1d0 = puStack_f8;
          uStack_1b8 = uStack_e0;
          uStack_1c0 = uStack_e8;
          uVar18 = uStack_100;
          puVar5 = puStack_108;
          uVar6 = uStack_f0;
          puVar7 = puStack_f8;
          uVar8 = uStack_e0;
          uVar9 = uStack_e8;
          if (uVar1 != 0) {
            _free(puVar3);
            uVar18 = uStack_1d8;
            puVar5 = puStack_1e0;
            uVar6 = uStack_1c8;
            puVar7 = puStack_1d0;
            uVar8 = uStack_1b8;
            uVar9 = uStack_1c0;
          }
          goto joined_r0x0001012de0f8;
        }
        FUN_100615128(&puStack_130,&puStack_280);
        uVar17 = uStack_f0;
        if (puStack_130 == (undefined8 *)0x2) {
          if (ppuVar15 != (undefined8 **)0x0) {
            _free(puVar2);
          }
        }
        else {
          puStack_98 = puStack_f8;
          uStack_a0 = uStack_100;
          uStack_88 = uStack_e8;
          uStack_90 = uStack_f0;
          puStack_b8 = puStack_118;
          uStack_c0 = uStack_120;
          puStack_a8 = puStack_108;
          puStack_b0 = puStack_110;
          uStack_80 = uStack_e0;
          puStack_c8 = (undefined8 *)uStack_128;
          puStack_d0 = puStack_130;
          if (uStack_f0 == uStack_100) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_a0);
          }
          puVar20 = puStack_98;
          if (uVar17 != 0) {
            _memmove(puStack_98 + 3,puStack_98,uVar17 * 0x18);
          }
          *puVar20 = ppuVar15;
          puVar20[1] = puVar2;
          puVar20[2] = uVar19;
          uStack_f0 = uVar17 + 1;
          puStack_108 = puStack_a8;
          puStack_110 = puStack_b0;
          puStack_f8 = puStack_98;
          uStack_100 = uStack_a0;
          uStack_e0 = uStack_80;
          uStack_128 = (ulong)puStack_c8;
          puStack_130 = puStack_d0;
          puStack_118 = puStack_b8;
          uStack_120 = uStack_c0;
          uStack_e8 = uStack_88;
          puVar14 = puStack_b0;
          puVar20 = puStack_d0;
          puVar22 = puStack_b8;
          uStack_90 = uStack_f0;
          if (puStack_d0 != (undefined8 *)0x2) goto LAB_1012de198;
        }
        uStack_1a8 = uVar1;
        uStack_1a0 = (ulong)puVar3;
        puStack_198 = puVar4;
        func_0x000100f32280(&uStack_1f8,&uStack_1a8,uStack_128);
      } while( true );
    }
    uStack_188 = param_2[2];
    puStack_190 = (undefined8 *)param_2[1];
    puStack_180 = (undefined8 *)param_2[3];
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x1;
    uStack_c0 = 0;
    uStack_288 = 0x60000020;
    ppuStack_298 = &puStack_d0;
    puStack_290 = (undefined8 *)&UNK_10b209290;
    iVar12 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                       (&puStack_190,&ppuStack_298);
    if (iVar12 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&uStack_1a8,&UNK_10b235000,&UNK_10b2346c0);
LAB_1012de3b4:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1012de3b8);
      (*pcVar10)();
    }
    uStack_128 = (ulong)puStack_c8;
    puStack_130 = puStack_d0;
    uStack_120 = uStack_c0;
    ppuVar15 = &puStack_130;
    unaff_x30 = 0x1012de2dc;
    unaff_x19 = param_1;
SUB_10880e1a0:
    *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
    *(ulong **)(puVar11 + -0x28) = unaff_x21;
    *(ulong *)(puVar11 + -0x20) = uVar19;
    *(undefined8 **)(puVar11 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x10) = puVar23;
    *(undefined8 *)(puVar11 + -8) = unaff_x30;
    puVar20 = ppuVar15[1];
    puVar13 = ppuVar15[2];
    *(undefined8 **)(puVar11 + -0x48) = puVar20;
    *(undefined8 **)(puVar11 + -0x40) = puVar13;
    puVar11[-0x50] = 5;
    FUN_1087e3db0(param_1,puVar11 + -0x50,puVar11 + -0x31,&UNK_10b21c810);
    if (*ppuVar15 != (undefined8 *)0x0) {
      _free(puVar20);
    }
    return;
  }
  if ((long)uVar17 < 2) {
    if (uVar17 == 0) {
      ppuVar15 = (undefined8 **)(param_2 + 1);
      puVar11 = (undefined1 *)register0x00000008;
      uVar19 = unaff_x20;
      puVar23 = unaff_x29;
      goto SUB_10880e1a0;
    }
    puStack_290 = (undefined8 *)param_2[1];
    uVar16 = 2;
  }
  else {
    if (uVar17 != 2) {
      ppuStack_298 = (undefined8 **)((ulong)CONCAT61(ppuStack_298._2_6_,(char)param_2[1]) << 8);
      goto LAB_1012de060;
    }
    puStack_290 = (undefined8 *)param_2[1];
    uVar16 = 3;
  }
  ppuStack_298 = (undefined8 **)CONCAT71(ppuStack_298._1_7_,uVar16);
LAB_1012de060:
  FUN_1087e3db0(param_1,&ppuStack_298,&uStack_1a8,&UNK_10b21c810);
  return;
}

