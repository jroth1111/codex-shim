
void FUN_10061d928(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  undefined1 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  
  uVar18 = *param_2;
  uVar10 = uVar18 ^ 0x8000000000000000;
  if (-1 < (long)uVar18) {
    uVar10 = 6;
  }
  if (3 < (long)uVar10) {
    if (uVar10 == 5) {
      uVar10 = param_2[1];
      plVar2 = (long *)param_2[2];
      plVar17 = (long *)param_2[3];
      uVar18 = (long)plVar17 * 0x50;
      plVar19 = plVar2 + (long)plVar17 * 10;
      plVar15 = plVar17;
      if ((long *)0xaaa9 < plVar17) {
        plVar15 = (long *)0xaaaa;
      }
      plStack_1f0 = plVar2;
      plStack_1e0 = (long *)uVar10;
      plStack_1d8 = plVar19;
      if (plVar17 == (long *)0x0) {
        plStack_90 = (long *)0x0;
        lStack_88 = 8;
        plStack_1b8 = (long *)0x0;
        plVar15 = plVar2;
        plStack_1c8 = plStack_90;
        lStack_1c0 = lStack_88;
        lVar14 = lStack_e8;
      }
      else {
        plStack_1e8 = plVar2;
        lStack_88 = _malloc((long)plVar15 * 0x18);
        if (lStack_88 == 0) {
          FUN_107c03c64(8,(long)plVar15 * 0x18);
          goto LAB_10061debc;
        }
        plStack_80 = (long *)0x0;
        lVar6 = *plVar2;
        plStack_90 = plVar15;
        lVar14 = lStack_e8;
        plVar16 = plVar2;
        while (lStack_e8 = lVar6, plVar16 = plVar16 + 10, plVar15 = plVar16,
              plStack_1c8 = plStack_90, lStack_1c0 = lStack_88, plStack_1b8 = plStack_80,
              lStack_e8 != -0x7ffffffffffffffa) {
          uVar18 = uVar18 - 0x50;
          lStack_c8 = plVar16[-6];
          plStack_d0 = (long *)plVar16[-7];
          lStack_b8 = plVar16[-4];
          lStack_c0 = plVar16[-5];
          lStack_a8 = plVar16[-2];
          lStack_b0 = plVar16[-3];
          lStack_a0 = plVar16[-1];
          lStack_d8 = plVar16[-8];
          plStack_e0 = (long *)plVar16[-9];
          FUN_10117645c(&plStack_170,&lStack_e8);
          plVar5 = plStack_80;
          lVar14 = lStack_88;
          lVar4 = lStack_158;
          lVar6 = lStack_160;
          puVar3 = puStack_168;
          if (plStack_170 != (long *)0x2) {
            plStack_1a8 = (long *)lStack_148;
            lStack_1b0 = lStack_150;
            lStack_198 = lStack_138;
            lStack_1a0 = lStack_140;
            lStack_188 = lStack_128;
            lStack_190 = lStack_130;
            lStack_180 = lStack_120;
            if (plStack_80 != (long *)0x0) {
              puVar11 = (undefined8 *)(lStack_88 + 8);
              plVar19 = plStack_80;
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                plVar19 = (long *)((long)plVar19 - 1);
              } while (plVar19 != (long *)0x0);
            }
            if (plStack_90 != (long *)0x0) {
              _free(lVar14);
            }
            *param_1 = (long)plStack_170;
            param_1[1] = (long)puStack_168;
            param_1[2] = lStack_160;
            param_1[3] = lStack_158;
            param_1[5] = (long)plStack_1a8;
            param_1[4] = lStack_1b0;
            param_1[7] = lStack_198;
            param_1[6] = lStack_1a0;
            param_1[9] = lStack_188;
            param_1[8] = lStack_190;
            param_1[10] = lStack_180;
            lVar14 = uVar18 / 0x50 + 1;
            while (lVar14 = lVar14 + -1, lVar14 != 0) {
              FUN_100ddb5bc(plVar16);
              plVar16 = plVar16 + 10;
            }
            if (uVar10 == 0) {
              return;
            }
            _free(plVar2);
            return;
          }
          plStack_1c8 = plStack_90;
          lStack_1c0 = lStack_88;
          plStack_1b8 = plStack_80;
          lVar14 = lStack_e8;
          if (puStack_168 == (undefined *)0x8000000000000000) break;
          if (plStack_80 == plStack_90) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&plStack_90);
          }
          puVar11 = (undefined8 *)(lStack_88 + (long)plVar5 * 0x18);
          *puVar11 = puVar3;
          puVar11[1] = lVar6;
          puVar11[2] = lVar4;
          plStack_80 = (long *)((long)plVar5 + 1);
          plVar15 = plVar19;
          plStack_1c8 = plStack_90;
          lStack_1c0 = lStack_88;
          plStack_1b8 = plStack_80;
          lVar14 = lStack_e8;
          if (uVar18 == 0) break;
          lVar6 = *plVar16;
        }
      }
      lStack_e8 = lVar14;
      plStack_1e8 = plVar15;
      plStack_90 = plStack_1c8;
      lStack_88 = lStack_1c0;
      if ((long)plVar19 - (long)plVar15 == 0) {
        param_1[2] = lStack_1c0;
        param_1[1] = (long)plStack_1c8;
        param_1[3] = (long)plStack_1b8;
        *param_1 = 2;
      }
      else {
        thunk_FUN_1087e427c(&plStack_170,plVar17,&UNK_10b21cb80,&UNK_10b20a590);
        param_1[5] = lStack_148;
        param_1[4] = lStack_150;
        param_1[7] = lStack_138;
        param_1[6] = lStack_140;
        param_1[9] = lStack_128;
        param_1[8] = lStack_130;
        param_1[10] = lStack_120;
        param_1[1] = (long)puStack_168;
        *param_1 = (long)plStack_170;
        param_1[3] = lStack_158;
        param_1[2] = lStack_160;
        FUN_100e1ad68(&plStack_1c8);
      }
      lVar14 = ((ulong)((long)plVar19 - (long)plVar15) >> 4) * -0x3333333333333333 + 1;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        FUN_100ddb5bc(plVar15);
        plVar15 = plVar15 + 10;
      }
      if (uVar10 == 0) {
        return;
      }
      _free(plVar2);
      return;
    }
    if (uVar10 != 6) {
      plStack_1e8 = (long *)param_2[2];
      plStack_1f0 = (long *)param_2[1];
      plStack_1e0 = (long *)param_2[3];
      lStack_e8 = 0;
      plStack_e0 = (long *)0x1;
      lStack_d8 = 0;
      lStack_160 = 0x60000020;
      plStack_170 = &lStack_e8;
      puStack_168 = &UNK_10b209290;
      iVar8 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                        (&plStack_1f0,&plStack_170);
      if (iVar8 == 0) {
        plStack_1a8 = plStack_e0;
        lStack_1b0 = lStack_e8;
        lStack_1a0 = lStack_d8;
        thunk_FUN_108815998(param_1,&lStack_1b0);
        return;
      }
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&plStack_1c8,&UNK_10b235000,&UNK_10b2346c0);
LAB_10061debc:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10061dec0);
      (*pcVar7)();
    }
    uVar13 = param_2[6];
    uVar10 = param_2[1];
    uVar1 = param_2[2];
    uVar12 = param_2[4];
    if ((uVar12 != 0) && (uVar12 * 9 != -0x11)) {
      _free(param_2[3] + uVar12 * -8 + -8);
    }
    lStack_f0 = uVar10 + uVar1 * 0x70;
    plStack_170 = (long *)0x8000000000000000;
    lStack_1b0 = CONCAT71(lStack_1b0._1_7_,0xb);
    uStack_108 = uVar10;
    uStack_100 = uVar10;
    uStack_f8 = uVar18;
    thunk_FUN_1087e3db0(&lStack_e8,&lStack_1b0,&plStack_1c8,&UNK_10b20a3c0);
    plStack_1e8 = (long *)lStack_d8;
    plStack_1f0 = plStack_e0;
    plStack_1e0 = plStack_d0;
    if (lStack_e8 == 2) {
      lStack_88 = lStack_d8;
      plStack_90 = plStack_e0;
      plStack_80 = plStack_d0;
      if (uVar1 != 0) {
        thunk_FUN_1087e427c(&lStack_e8,uVar13,&UNK_10b21cb90,&UNK_10b20a590);
        param_1[5] = lStack_c0;
        param_1[4] = lStack_c8;
        param_1[7] = lStack_b0;
        param_1[6] = lStack_b8;
        param_1[9] = lStack_a0;
        param_1[8] = lStack_a8;
        param_1[10] = lStack_98;
        param_1[1] = (long)plStack_e0;
        *param_1 = lStack_e8;
        param_1[3] = (long)plStack_d0;
        param_1[2] = lStack_d8;
        FUN_100e1ad68(&plStack_90);
        goto LAB_10061dbc0;
      }
      param_1[2] = lStack_d8;
      param_1[1] = (long)plStack_e0;
      param_1[3] = (long)plStack_d0;
      lStack_e8 = 2;
    }
    else {
      param_1[5] = lStack_c0;
      param_1[4] = lStack_c8;
      param_1[7] = lStack_b0;
      param_1[6] = lStack_b8;
      param_1[9] = lStack_a0;
      param_1[8] = lStack_a8;
      param_1[10] = lStack_98;
      param_1[2] = lStack_d8;
      param_1[1] = (long)plStack_e0;
      param_1[3] = (long)plStack_d0;
    }
    *param_1 = lStack_e8;
LAB_10061dbc0:
    FUN_100deffc0(&plStack_170);
    return;
  }
  if ((long)uVar10 < 2) {
    if (uVar10 == 0) {
      uVar10 = param_2[2];
      FUN_1087e3db0(param_1,&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,&UNK_10b20a3c0);
      if (param_2[1] != 0) {
        _free(uVar10);
      }
      return;
    }
    puStack_168 = (undefined *)param_2[1];
    uVar9 = 2;
  }
  else {
    if (uVar10 != 2) {
      plStack_170 = (long *)((ulong)CONCAT61(plStack_170._2_6_,(char)param_2[1]) << 8);
      goto LAB_10061db78;
    }
    puStack_168 = (undefined *)param_2[1];
    uVar9 = 3;
  }
  plStack_170 = (long *)CONCAT71(plStack_170._1_7_,uVar9);
LAB_10061db78:
  thunk_FUN_1087e3db0(param_1,&plStack_170,&plStack_1c8,&UNK_10b20a3c0);
  return;
}

