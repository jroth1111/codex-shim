
/* WARNING: Possible PIC construction at 0x00010060de88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060de8c) */

void FUN_10060da0c(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  undefined *puVar12;
  undefined8 unaff_x21;
  ulong uVar13;
  undefined **unaff_x22;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  undefined1 auStack_2b0 [80];
  undefined **ppuStack_260;
  undefined *puStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar18 = &stack0xfffffffffffffff0;
  pppuVar4 = &ppuStack_260;
  uVar11 = *param_2;
  uVar9 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar9 = 6;
  }
  if (3 < (long)uVar9) {
    if (uVar9 == 5) {
      uVar9 = param_2[1];
      puVar1 = (undefined *)param_2[2];
      uVar11 = param_2[3];
      puStack_b0 = puVar1 + uVar11 * 0x50;
      puStack_120 = (undefined *)CONCAT71(puStack_120._1_7_,10);
      puStack_c8 = puVar1;
      puStack_c0 = puVar1;
      puStack_b8 = (undefined *)uVar9;
      thunk_FUN_1087e3db0(&ppuStack_260,&puStack_120,&puStack_138,&UNK_10b209cc0);
      puStack_1b8 = (undefined *)uStack_250;
      puStack_1c0 = puStack_258;
      puStack_1b0 = (undefined *)uStack_248;
      if (ppuStack_260 == (undefined **)0x2) {
        uStack_168 = uStack_250;
        puStack_170 = puStack_258;
        uStack_160 = uStack_248;
        if (uVar11 == 0) {
          param_1[2] = uStack_250;
          param_1[1] = (ulong)puStack_258;
          param_1[3] = uStack_248;
          *param_1 = 2;
        }
        else {
          thunk_FUN_1087e427c(&ppuStack_260,uVar11,&UNK_10b21cb80,&UNK_10b20a590);
          param_1[5] = uStack_238;
          param_1[4] = uStack_240;
          param_1[7] = uStack_228;
          param_1[6] = uStack_230;
          param_1[9] = uStack_218;
          param_1[8] = uStack_220;
          param_1[10] = uStack_210;
          param_1[1] = (ulong)puStack_258;
          *param_1 = (ulong)ppuStack_260;
          param_1[3] = uStack_248;
          param_1[2] = uStack_250;
          func_0x000100cd0da8(&puStack_170);
        }
        lVar14 = uVar11 + 1;
        puVar6 = puVar1;
        while (lVar14 = lVar14 + -1, lVar14 != 0) {
          FUN_100ddb5bc(puVar6);
          puVar6 = puVar6 + 0x50;
        }
      }
      else {
        param_1[5] = uStack_238;
        param_1[4] = uStack_240;
        param_1[7] = uStack_228;
        param_1[6] = uStack_230;
        param_1[9] = uStack_218;
        param_1[8] = uStack_220;
        param_1[10] = uStack_210;
        param_1[2] = uStack_250;
        param_1[1] = (ulong)puStack_258;
        param_1[3] = uStack_248;
        lVar14 = uVar11 + 1;
        *param_1 = (ulong)ppuStack_260;
        puVar6 = puVar1;
        while (lVar14 = lVar14 + -1, lVar14 != 0) {
          FUN_100ddb5bc(puVar6);
          puVar6 = puVar6 + 0x50;
        }
      }
      if (uVar9 == 0) {
        return;
      }
      _free(puVar1);
      return;
    }
    unaff_x22 = &puStack_120;
    if (uVar9 == 6) {
      uVar13 = param_2[6];
      uVar9 = param_2[1];
      uVar2 = param_2[2];
      uVar10 = param_2[4];
      if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
        _free(param_2[3] + uVar10 * -8 + -8);
      }
      uStack_1e0 = uVar9 + uVar2 * 0x70;
      ppuStack_260 = (undefined **)0x8000000000000000;
      puStack_188 = (undefined *)0x0;
      uStack_178 = 0;
      uStack_1f8 = uVar9;
      uStack_1f0 = uVar9;
      uStack_1e8 = uVar11;
      do {
        FUN_1011ae894(&puStack_120,&ppuStack_260);
        puVar17 = puStack_108;
        puVar6 = puStack_110;
        puVar1 = puStack_118;
        if (puStack_120 != (undefined *)0x2) {
          puStack_140 = puStack_f0;
          uStack_168 = uStack_e0;
          puStack_170 = puStack_e8;
          uStack_158 = uStack_d0;
          uStack_160 = uStack_d8;
          puStack_148 = puStack_f8;
          puStack_150 = puStack_100;
          puVar12 = puStack_110;
          puVar15 = puStack_118;
          puVar16 = puStack_108;
          puVar17 = puStack_120;
LAB_10060dd50:
          puStack_1b8 = puStack_148;
          puStack_1c0 = puStack_150;
          puStack_1b0 = puStack_140;
          uStack_1a0 = uStack_168;
          puStack_1a8 = puStack_170;
          uStack_190 = uStack_158;
          uStack_198 = uStack_160;
          if (puStack_188 == (undefined *)0x0) {
            uStack_88 = 0;
          }
          else {
            puStack_c0 = (undefined *)0x0;
            puStack_b8 = puStack_188;
            puStack_b0 = puStack_180;
            puStack_a0 = (undefined *)0x0;
            puStack_98 = puStack_188;
            puStack_90 = puStack_180;
            uStack_88 = uStack_178;
          }
          puStack_c8 = (undefined *)(ulong)(puStack_188 != (undefined *)0x0);
          puStack_a8 = puStack_c8;
          while (FUN_100f3a3c8(&puStack_120,&puStack_c8), puVar6 = puStack_110, puVar1 = puStack_120
                , puStack_120 != (undefined *)0x0) {
            if (*(long *)(puStack_120 + (long)puStack_110 * 0x18 + 8) != 0) {
              _free(*(undefined8 *)(puStack_120 + (long)puStack_110 * 0x18 + 0x10));
            }
            if (*(long *)(puVar1 + (long)puVar6 * 0x18 + 0x110) != 0) {
              _free(*(undefined8 *)(puVar1 + (long)puVar6 * 0x18 + 0x118));
            }
          }
          param_1[5] = (ulong)puStack_1b8;
          param_1[4] = (ulong)puStack_1c0;
          param_1[7] = (ulong)puStack_1a8;
          param_1[6] = (ulong)puStack_1b0;
          param_1[9] = uStack_198;
          param_1[8] = uStack_1a0;
          param_1[10] = uStack_190;
          *param_1 = (ulong)puVar17;
          param_1[1] = (ulong)puVar15;
          param_1[2] = (ulong)puVar12;
          param_1[3] = (ulong)puVar16;
LAB_10060de00:
          FUN_100deffc0(&ppuStack_260);
          return;
        }
        if (puStack_118 == (undefined *)0x8000000000000000) {
          puStack_1d0 = puStack_180;
          puStack_1d8 = puStack_188;
          uStack_1c8 = uStack_178;
          if (uStack_1e0 == uStack_1f0) {
            param_1[2] = (ulong)puStack_180;
            param_1[1] = (ulong)puStack_188;
            param_1[3] = uStack_178;
            *param_1 = 2;
          }
          else {
            thunk_FUN_1087e427c(&puStack_c8,uVar13,&UNK_10b21cb90,&UNK_10b20a590);
            param_1[5] = (ulong)puStack_a0;
            param_1[4] = (ulong)puStack_a8;
            param_1[7] = (ulong)puStack_90;
            param_1[6] = (ulong)puStack_98;
            param_1[9] = uStack_80;
            param_1[8] = uStack_88;
            param_1[10] = uStack_78;
            param_1[1] = (ulong)puStack_c0;
            *param_1 = (ulong)puStack_c8;
            param_1[3] = (ulong)puStack_b0;
            param_1[2] = (ulong)puStack_b8;
            func_0x000100cd0da8(&puStack_1d8);
          }
          goto LAB_10060de00;
        }
        FUN_1011aea70(&puStack_c8,&ppuStack_260);
        puVar16 = puStack_b0;
        puVar12 = puStack_b8;
        puVar15 = puStack_c0;
        if (puStack_c8 != (undefined *)0x2) {
          puStack_140 = puStack_98;
          uStack_168 = uStack_88;
          puStack_170 = puStack_90;
          uStack_158 = uStack_78;
          uStack_160 = uStack_80;
          puStack_148 = puStack_a0;
          puStack_150 = puStack_a8;
          puVar17 = puStack_c8;
          if (puVar1 != (undefined *)0x0) {
            _free(puVar6);
          }
          goto LAB_10060dd50;
        }
        puStack_148 = puStack_b8;
        puStack_150 = puStack_c0;
        puStack_140 = puStack_b0;
        puStack_138 = puVar1;
        puStack_130 = puVar6;
        puStack_128 = puVar17;
        FUN_100f38238(&puStack_c8,&puStack_188,&puStack_138,&puStack_150);
        if ((puStack_c8 != (undefined *)0x8000000000000000) && (puStack_c8 != (undefined *)0x0)) {
          _free(puStack_c0);
        }
      } while( true );
    }
    puStack_1b8 = (undefined *)param_2[2];
    puStack_1c0 = (undefined *)param_2[1];
    puStack_1b0 = (undefined *)param_2[3];
    puStack_c8 = (undefined *)0x0;
    puStack_c0 = (undefined *)0x1;
    puStack_b8 = (undefined *)0x0;
    uStack_250 = 0x60000020;
    ppuStack_260 = &puStack_c8;
    puStack_258 = &UNK_10b209290;
    iVar5 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&puStack_1c0,&ppuStack_260);
    if (iVar5 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&puStack_138,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060df50);
      (*pcVar3)();
    }
    puStack_118 = puStack_c0;
    puStack_120 = puStack_c8;
    puStack_110 = puStack_b8;
    ppuVar7 = &puStack_120;
    unaff_x30 = 0x10060de8c;
    unaff_x19 = param_1;
SUB_107c04a74:
    *(undefined ***)((long)pppuVar4 + -0x30) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x28) = unaff_x21;
    *(ulong *)((long)pppuVar4 + -0x20) = uVar11;
    *(ulong **)((long)pppuVar4 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar4 + -0x10) = puVar18;
    *(undefined8 *)((long)pppuVar4 + -8) = unaff_x30;
    puVar1 = ppuVar7[1];
    puVar6 = ppuVar7[2];
    *(undefined **)((long)pppuVar4 + -0x48) = puVar1;
    *(undefined **)((long)pppuVar4 + -0x40) = puVar6;
    *(undefined1 *)((long)pppuVar4 + -0x50) = 5;
    FUN_1087e3db0(param_1,(undefined1 *)((long)pppuVar4 + -0x50),
                  (undefined1 *)((long)pppuVar4 + -0x31),&UNK_10b209cc0);
    if (*ppuVar7 != (undefined *)0x0) {
      _free(puVar1);
    }
    return;
  }
  if ((long)uVar9 < 2) {
    if (uVar9 == 0) {
      ppuVar7 = (undefined **)(param_2 + 1);
      pppuVar4 = (undefined ***)register0x00000008;
      uVar11 = unaff_x20;
      puVar18 = unaff_x29;
      goto SUB_107c04a74;
    }
    puStack_258 = (undefined *)param_2[1];
    uVar8 = 2;
  }
  else {
    if (uVar9 != 2) {
      ppuStack_260 = (undefined **)((ulong)CONCAT61(ppuStack_260._2_6_,(char)param_2[1]) << 8);
      goto LAB_10060dc48;
    }
    puStack_258 = (undefined *)param_2[1];
    uVar8 = 3;
  }
  ppuStack_260 = (undefined **)CONCAT71(ppuStack_260._1_7_,uVar8);
LAB_10060dc48:
  thunk_FUN_1087e3db0(param_1,&ppuStack_260,&puStack_138,&UNK_10b209cc0);
  return;
}

