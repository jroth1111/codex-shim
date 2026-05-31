
/* WARNING: Possible PIC construction at 0x00010060e37c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060e380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10060e030(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong *puVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  long lVar15;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined8 unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auStack_300 [80];
  ulong uStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [16];
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar19 = &stack0xfffffffffffffff0;
  puVar5 = &uStack_2b0;
  uVar14 = *param_2;
  uVar12 = uVar14 ^ 0x8000000000000000;
  if (-1 < (long)uVar14) {
    uVar12 = 6;
  }
  if (3 < (long)uVar12) {
    if (uVar12 == 5) {
      uVar12 = param_2[1];
      puVar17 = (undefined *)param_2[2];
      uVar14 = param_2[3];
      puStack_198 = puVar17 + uVar14 * 0x50;
      puStack_220 = (undefined *)CONCAT71(puStack_220._1_7_,10);
      puStack_1b0 = puVar17;
      puStack_1a8 = puVar17;
      uStack_1a0 = uVar12;
      thunk_FUN_1087e3db0(&ppuStack_2a8,&puStack_220,&uStack_180,&UNK_10b209b80);
      uStack_c8 = uStack_298;
      puStack_d0 = puStack_2a0;
      uStack_b8 = uStack_288;
      uStack_c0 = uStack_290;
      uStack_a8 = uStack_278;
      uStack_b0 = uStack_280;
      if (ppuStack_2a8 == (undefined **)0x2) {
        uStack_128 = uStack_298;
        puStack_130 = puStack_2a0;
        uStack_118 = uStack_288;
        uStack_120 = uStack_290;
        uStack_108 = uStack_278;
        uStack_110 = uStack_280;
        if (uVar14 == 0) {
          param_1[2] = uStack_298;
          param_1[1] = puStack_2a0;
          param_1[4] = uStack_288;
          param_1[3] = uStack_290;
          param_1[6] = uStack_278;
          param_1[5] = uStack_280;
          *param_1 = 2;
        }
        else {
          thunk_FUN_1087e427c(&ppuStack_2a8,uVar14,&UNK_10b21cb80,&UNK_10b20a590);
          param_1[5] = uStack_280;
          param_1[4] = uStack_288;
          param_1[7] = uStack_270;
          param_1[6] = uStack_278;
          param_1[9] = uStack_260;
          param_1[8] = uStack_268;
          param_1[10] = uStack_258;
          param_1[1] = puStack_2a0;
          *param_1 = ppuStack_2a8;
          param_1[3] = uStack_290;
          param_1[2] = uStack_298;
          FUN_100cb56bc(&puStack_130);
        }
        lVar16 = uVar14 + 1;
        puVar9 = puVar17;
        while (lVar16 = lVar16 + -1, lVar16 != 0) {
          FUN_100ddb5bc(puVar9);
          puVar9 = puVar9 + 0x50;
        }
      }
      else {
        param_1[8] = uStack_268;
        param_1[7] = uStack_270;
        param_1[10] = uStack_258;
        param_1[9] = uStack_260;
        param_1[2] = uStack_298;
        param_1[1] = puStack_2a0;
        param_1[4] = uStack_288;
        param_1[3] = uStack_290;
        param_1[6] = uStack_278;
        param_1[5] = uStack_280;
        lVar16 = uVar14 + 1;
        *param_1 = ppuStack_2a8;
        puVar9 = puVar17;
        while (lVar16 = lVar16 + -1, lVar16 != 0) {
          FUN_100ddb5bc(puVar9);
          puVar9 = puVar9 + 0x50;
        }
      }
      if (uVar12 != 0) {
        _free(puVar17);
        return;
      }
      return;
    }
    if (uVar12 == 6) {
      uVar18 = param_2[6];
      uVar12 = param_2[1];
      uVar1 = param_2[2];
      uVar13 = param_2[4];
      if ((uVar13 != 0) && (uVar13 * 9 != -0x11)) {
        _free(param_2[3] + uVar13 * -8 + -8);
      }
      uStack_228 = uVar12 + uVar1 * 0x70;
      ppuStack_2a8 = (undefined **)0x8000000000000000;
      uVar13 = uVar1;
      if (0x5554 < uVar1) {
        uVar13 = 0x5555;
      }
      uStack_240 = uVar12;
      uStack_238 = uVar12;
      uStack_230 = uVar14;
      pauVar7 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar7[1][0] == '\x01') {
        auVar20 = *pauVar7;
        *(long *)*pauVar7 = *(long *)*pauVar7 + 1;
      }
      else {
        auVar20 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        pauVar7[1][0] = 1;
        *(long *)*pauVar7 = auVar20._0_8_ + 1;
        *(long *)(*pauVar7 + 8) = auVar20._8_8_;
      }
      uStack_2b0 = uVar18;
      if (uVar1 == 0) {
        uVar14 = 0;
        uVar12 = 0;
        puVar17 = &UNK_108c56c70;
      }
      else {
        uVar18 = 4;
        if (3 < uVar1) {
          uVar18 = (uVar13 & 8) + 8;
        }
        if (0xe < uVar1) {
          uVar18 = (0xffffffffffffffffU >>
                   (LZCOUNT(((ulong)(uint)((int)uVar13 << 3) * 0x92492493 >> 0x22) - 1) & 0x3fU)) +
                   1;
        }
        lVar15 = uVar18 * 0x30;
        lVar16 = uVar18 + 8;
        lVar8 = _malloc(lVar15 + lVar16);
        if (lVar8 == 0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar15 + lVar16);
          goto LAB_10060e630;
        }
        puVar17 = (undefined *)(lVar8 + lVar15);
        uVar14 = uVar18 - 1;
        uVar12 = uVar14;
        if (7 < uVar14) {
          uVar12 = (uVar18 >> 3) * 7;
        }
        _memset(puVar17,0xff,lVar16);
      }
      puStack_198 = (undefined *)0x0;
      puStack_1b0 = puVar17;
      puStack_1a8 = (undefined *)uVar14;
      uStack_1a0 = uVar12;
      auStack_190 = auVar20;
      do {
        FUN_1011ae894(&puStack_130,&ppuStack_2a8);
        uVar3 = uStack_118;
        uVar2 = uStack_120;
        uVar12 = uStack_128;
        if (puStack_130 != (undefined *)0x2) {
          uStack_150 = uStack_100;
          uStack_178 = uStack_f0;
          uStack_180 = uStack_f8;
          uStack_168 = uStack_e0;
          uStack_170 = uStack_e8;
          uStack_158 = uStack_108;
          uStack_160 = uStack_110;
LAB_10060e4f8:
          uStack_1c8 = uStack_158;
          uStack_1d0 = uStack_160;
          uStack_1c0 = uStack_150;
          FUN_100cb56bc(&puStack_1b0);
          uStack_1e0 = uStack_1c0;
          uStack_1e8 = uStack_1c8;
          uStack_1f0 = uStack_1d0;
          param_1[5] = uStack_1c8;
          param_1[4] = uStack_1d0;
          param_1[6] = uStack_1c0;
          *param_1 = puStack_130;
          param_1[1] = uStack_128;
          param_1[2] = uStack_120;
          param_1[3] = uStack_118;
          param_1[8] = uStack_178;
          param_1[7] = uStack_180;
          param_1[10] = uStack_168;
          param_1[9] = uStack_170;
LAB_10060e53c:
          FUN_100deffc0(&ppuStack_2a8);
          return;
        }
        if (uStack_128 == 0x8000000000000000) {
          uStack_208 = puStack_198;
          uStack_218 = (ulong)puStack_1a8;
          puStack_220 = puStack_1b0;
          uStack_210 = uStack_1a0;
          auStack_200 = auStack_190;
          if (uStack_228 == uStack_238) {
            param_1[2] = puStack_1a8;
            param_1[1] = puStack_1b0;
            param_1[4] = puStack_198;
            param_1[3] = uStack_1a0;
            *(undefined1 (*) [16])(param_1 + 5) = auStack_190;
            *param_1 = 2;
          }
          else {
            thunk_FUN_1087e427c(&puStack_d0,uStack_2b0,&UNK_10b21cb90,&UNK_10b20a590);
            param_1[5] = uStack_a8;
            param_1[4] = uStack_b0;
            param_1[7] = uStack_98;
            param_1[6] = uStack_a0;
            param_1[9] = uStack_88;
            param_1[8] = uStack_90;
            param_1[10] = uStack_80;
            param_1[1] = uStack_c8;
            *param_1 = puStack_d0;
            param_1[3] = uStack_b8;
            param_1[2] = uStack_c0;
            FUN_100cb56bc(&puStack_220);
          }
          goto LAB_10060e53c;
        }
        FUN_1011aea70(&puStack_d0,&ppuStack_2a8);
        if (puStack_d0 != (undefined *)0x2) {
          uStack_150 = uStack_a0;
          uStack_178 = uStack_90;
          uStack_180 = uStack_98;
          uStack_168 = uStack_80;
          uStack_170 = uStack_88;
          uStack_158 = uStack_a8;
          uStack_160 = uStack_b0;
          uStack_120 = uStack_c0;
          uStack_128 = uStack_c8;
          uStack_118 = uStack_b8;
          puStack_130 = puStack_d0;
          if (uVar12 != 0) {
            _free(uVar2);
          }
          goto LAB_10060e4f8;
        }
        uStack_158 = uStack_c0;
        uStack_160 = uStack_c8;
        uStack_150 = uStack_b8;
        uStack_148 = uVar12;
        uStack_140 = uVar2;
        uStack_138 = uVar3;
        FUN_1016e4cfc(&puStack_d0,&puStack_1b0,&uStack_148,&uStack_160);
        if ((puStack_d0 != (undefined *)0x8000000000000000) && (puStack_d0 != (undefined *)0x0)) {
          _free(uStack_c8);
        }
      } while( true );
    }
    puStack_1a8 = (undefined *)param_2[2];
    puStack_1b0 = (undefined *)param_2[1];
    uStack_1a0 = param_2[3];
    puStack_d0 = (undefined *)0x0;
    uStack_c8 = 1;
    uStack_c0 = 0;
    uStack_298 = 0x60000020;
    ppuStack_2a8 = &puStack_d0;
    puStack_2a0 = &UNK_10b209290;
    iVar6 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&puStack_1b0,&ppuStack_2a8);
    if (iVar6 == 0) {
      uStack_128 = uStack_c8;
      puStack_130 = puStack_d0;
      uStack_120 = uStack_c0;
      ppuVar10 = &puStack_130;
      unaff_x30 = 0x10060e380;
      unaff_x19 = param_1;
SUB_107c04d1c:
      *(undefined8 *)((long)puVar5 + -0x30) = unaff_x22;
      *(undefined8 *)((long)puVar5 + -0x28) = unaff_x21;
      *(ulong *)((long)puVar5 + -0x20) = uVar14;
      *(undefined8 **)((long)puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar5 + -0x10) = puVar19;
      *(undefined8 *)((long)puVar5 + -8) = unaff_x30;
      puVar17 = ppuVar10[1];
      puVar9 = ppuVar10[2];
      *(undefined **)((long)puVar5 + -0x48) = puVar17;
      *(undefined **)((long)puVar5 + -0x40) = puVar9;
      *(undefined1 *)((long)puVar5 + -0x50) = 5;
      FUN_1087e3db0(param_1,(undefined1 *)((long)puVar5 + -0x50),
                    (undefined1 *)((long)puVar5 + -0x31),&UNK_10b209b80);
      if (*ppuVar10 != (undefined *)0x0) {
        _free(puVar17);
      }
      return;
    }
    FUN_107c05cb4(&UNK_108cc3daa,0x37,&uStack_180,&UNK_10b235000,&UNK_10b2346c0);
LAB_10060e630:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10060e634);
    (*pcVar4)();
  }
  if ((long)uVar12 < 2) {
    if (uVar12 == 0) {
      ppuVar10 = (undefined **)(param_2 + 1);
      puVar5 = (ulong *)register0x00000008;
      uVar14 = unaff_x20;
      puVar19 = unaff_x29;
      goto SUB_107c04d1c;
    }
    puStack_2a0 = (undefined *)param_2[1];
    uVar11 = 2;
  }
  else {
    if (uVar12 != 2) {
      ppuStack_2a8 = (undefined **)((ulong)CONCAT61(ppuStack_2a8._2_6_,(char)param_2[1]) << 8);
      goto LAB_10060e2ac;
    }
    puStack_2a0 = (undefined *)param_2[1];
    uVar11 = 3;
  }
  ppuStack_2a8 = (undefined **)CONCAT71(ppuStack_2a8._1_7_,uVar11);
LAB_10060e2ac:
  thunk_FUN_1087e3db0(param_1,&ppuStack_2a8,&uStack_180,&UNK_10b209b80);
  return;
}

