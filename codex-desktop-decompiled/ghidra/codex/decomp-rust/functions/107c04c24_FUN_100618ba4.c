
/* WARNING: Possible PIC construction at 0x0001006190b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006190b8) */

void FUN_100618ba4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong *puVar6;
  int iVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong *unaff_x21;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 unaff_x22;
  ulong *puVar16;
  ulong uVar17;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  undefined1 auStack_250 [80];
  ulong uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  ulong uStack_1b0;
  ulong *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong *puStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  
  puVar18 = &stack0xfffffffffffffff0;
  puVar6 = &uStack_200;
  uVar17 = *param_2;
  uVar9 = uVar17 ^ 0x8000000000000000;
  if (-1 < (long)uVar17) {
    uVar9 = 6;
  }
  if (3 < (long)uVar9) {
    if (uVar9 == 5) {
      uVar9 = param_2[1];
      puVar15 = (ulong *)param_2[2];
      puVar16 = (ulong *)param_2[3];
      uVar17 = (long)puVar16 * 0x50;
      puVar6 = puVar15 + (long)puVar16 * 10;
      puVar1 = puVar16;
      if ((ulong *)0xaaa9 < puVar16) {
        puVar1 = (ulong *)0xaaaa;
      }
      puStack_1f0 = puVar15;
      puStack_1e0 = (ulong *)uVar9;
      puStack_1d8 = puVar6;
      if (puVar16 == (ulong *)0x0) {
        puStack_90 = (ulong *)0x0;
        uStack_88 = 8;
        puStack_1b8 = (ulong *)0x0;
        puVar1 = puVar15;
        puVar14 = puVar15;
        puStack_1c8 = puStack_90;
        uStack_1c0 = uStack_88;
        uVar2 = uStack_e8;
      }
      else {
        puStack_1e8 = puVar15;
        uStack_88 = _malloc((long)puVar1 * 0x18);
        if (uStack_88 == 0) {
          FUN_107c03c64(8,(long)puVar1 * 0x18);
          goto LAB_100619138;
        }
        puStack_80 = (ulong *)0x0;
        uStack_200 = uVar9;
        puStack_1f8 = puVar15;
        uVar9 = *puVar15;
        puStack_90 = puVar1;
        uVar2 = uStack_e8;
        while (uStack_e8 = uVar9, puVar15 = puVar15 + 10, uVar9 = uStack_200, puVar1 = puStack_1f8,
              puVar14 = puVar15, puStack_1c8 = puStack_90, uStack_1c0 = uStack_88,
              puStack_1b8 = puStack_80, uStack_e8 != 0x8000000000000006) {
          uVar17 = uVar17 - 0x50;
          uStack_c8 = puVar15[-6];
          puStack_d0 = (ulong *)puVar15[-7];
          uStack_b8 = puVar15[-4];
          uStack_c0 = puVar15[-5];
          uStack_a8 = puVar15[-2];
          uStack_b0 = puVar15[-3];
          uStack_a0 = puVar15[-1];
          uStack_d8 = puVar15[-8];
          puStack_e0 = (ulong *)puVar15[-9];
          FUN_1014a7bb4(&puStack_170,&uStack_e8);
          puVar4 = puStack_80;
          uVar9 = uStack_88;
          uVar12 = uStack_158;
          uVar11 = uStack_160;
          puVar3 = puStack_168;
          if (puStack_170 != (ulong *)0x2) {
            puStack_1a8 = (ulong *)uStack_148;
            uStack_1b0 = uStack_150;
            uStack_198 = uStack_138;
            uStack_1a0 = uStack_140;
            uStack_188 = uStack_128;
            uStack_190 = uStack_130;
            uStack_180 = uStack_120;
            if (puStack_80 != (ulong *)0x0) {
              puVar10 = (undefined8 *)(uStack_88 + 8);
              puVar6 = puStack_80;
              do {
                if (puVar10[-1] != 0) {
                  _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                puVar6 = (ulong *)((long)puVar6 - 1);
              } while (puVar6 != (ulong *)0x0);
            }
            if (puStack_90 != (ulong *)0x0) {
              _free(uVar9);
            }
            puVar6 = puStack_1f8;
            uVar9 = uStack_200;
            *param_1 = (ulong)puStack_170;
            param_1[1] = (ulong)puStack_168;
            param_1[2] = uStack_160;
            param_1[3] = uStack_158;
            param_1[5] = (ulong)puStack_1a8;
            param_1[4] = uStack_1b0;
            param_1[7] = uStack_198;
            param_1[6] = uStack_1a0;
            param_1[9] = uStack_188;
            param_1[8] = uStack_190;
            param_1[10] = uStack_180;
            lVar13 = uVar17 / 0x50 + 1;
            while (lVar13 = lVar13 + -1, lVar13 != 0) {
              FUN_100ddb5bc(puVar15);
              puVar15 = puVar15 + 10;
            }
            if (uVar9 == 0) {
              return;
            }
            _free(puVar6);
            return;
          }
          uVar9 = uStack_200;
          puVar1 = puStack_1f8;
          puStack_1c8 = puStack_90;
          uStack_1c0 = uStack_88;
          puStack_1b8 = puStack_80;
          uVar2 = uStack_e8;
          if (puStack_168 == (undefined *)0x8000000000000000) break;
          if (puStack_80 == puStack_90) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&puStack_90);
          }
          puVar10 = (undefined8 *)(uStack_88 + (long)puVar4 * 0x18);
          *puVar10 = puVar3;
          puVar10[1] = uVar11;
          puVar10[2] = uVar12;
          puStack_80 = (ulong *)((long)puVar4 + 1);
          uVar9 = uStack_200;
          puVar1 = puStack_1f8;
          puVar14 = puVar6;
          puStack_1c8 = puStack_90;
          uStack_1c0 = uStack_88;
          puStack_1b8 = puStack_80;
          uVar2 = uStack_e8;
          if (uVar17 == 0) break;
          uVar9 = *puVar15;
        }
      }
      uStack_e8 = uVar2;
      puStack_1e8 = puVar14;
      puStack_90 = puStack_1c8;
      uStack_88 = uStack_1c0;
      if ((long)puVar6 - (long)puVar14 == 0) {
        param_1[2] = uStack_1c0;
        param_1[1] = (ulong)puStack_1c8;
        param_1[3] = (ulong)puStack_1b8;
        *param_1 = 2;
      }
      else {
        thunk_FUN_1087e427c(&puStack_170,puVar16,&UNK_10b21cb80,&UNK_10b20a590);
        param_1[5] = uStack_148;
        param_1[4] = uStack_150;
        param_1[7] = uStack_138;
        param_1[6] = uStack_140;
        param_1[9] = uStack_128;
        param_1[8] = uStack_130;
        param_1[10] = uStack_120;
        param_1[1] = (ulong)puStack_168;
        *param_1 = (ulong)puStack_170;
        param_1[3] = uStack_158;
        param_1[2] = uStack_160;
        FUN_100e582c8(&puStack_1c8);
      }
      lVar13 = ((ulong)((long)puVar6 - (long)puVar14) >> 4) * -0x3333333333333333 + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100ddb5bc(puVar14);
        puVar14 = puVar14 + 10;
      }
      if (uVar9 == 0) {
        return;
      }
      _free(puVar1);
      return;
    }
    unaff_x21 = &uStack_e8;
    if (uVar9 != 6) {
      puStack_1e8 = (ulong *)param_2[2];
      puStack_1f0 = (ulong *)param_2[1];
      puStack_1e0 = (ulong *)param_2[3];
      uStack_e8 = 0;
      puStack_e0 = (ulong *)0x1;
      uStack_d8 = 0;
      uStack_160 = 0x60000020;
      puStack_170 = &uStack_e8;
      puStack_168 = &UNK_10b209290;
      iVar7 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                        (&puStack_1f0,&puStack_170);
      if (iVar7 == 0) {
        puStack_1a8 = puStack_e0;
        uStack_1b0 = uStack_e8;
        uStack_1a0 = uStack_d8;
        param_2 = &uStack_1b0;
        unaff_x30 = 0x1006190b8;
        unaff_x19 = param_1;
        goto SUB_107c04c24;
      }
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&puStack_1c8,&UNK_10b235000,&UNK_10b2346c0);
LAB_100619138:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10061913c);
      (*pcVar5)();
    }
    uVar12 = param_2[6];
    uVar9 = param_2[1];
    uVar2 = param_2[2];
    uVar11 = param_2[4];
    if ((uVar11 != 0) && (uVar11 * 9 != -0x11)) {
      _free(param_2[3] + uVar11 * -8 + -8);
    }
    lStack_f0 = uVar9 + uVar2 * 0x70;
    puStack_170 = (ulong *)0x8000000000000000;
    uStack_1b0 = CONCAT71(uStack_1b0._1_7_,0xb);
    uStack_108 = uVar9;
    uStack_100 = uVar9;
    uStack_f8 = uVar17;
    thunk_FUN_1087e3db0(&uStack_e8,&uStack_1b0,&puStack_1c8,&UNK_10b20a460);
    puStack_1e8 = (ulong *)uStack_d8;
    puStack_1f0 = puStack_e0;
    puStack_1e0 = puStack_d0;
    if (uStack_e8 == 2) {
      uStack_88 = uStack_d8;
      puStack_90 = puStack_e0;
      puStack_80 = puStack_d0;
      if (uVar2 != 0) {
        thunk_FUN_1087e427c(&uStack_e8,uVar12,&UNK_10b21cb90,&UNK_10b20a590);
        param_1[5] = uStack_c0;
        param_1[4] = uStack_c8;
        param_1[7] = uStack_b0;
        param_1[6] = uStack_b8;
        param_1[9] = uStack_a0;
        param_1[8] = uStack_a8;
        param_1[10] = uStack_98;
        param_1[1] = (ulong)puStack_e0;
        *param_1 = uStack_e8;
        param_1[3] = (ulong)puStack_d0;
        param_1[2] = uStack_d8;
        FUN_100e582c8(&puStack_90);
        goto LAB_100618e3c;
      }
      param_1[2] = uStack_d8;
      param_1[1] = (ulong)puStack_e0;
      param_1[3] = (ulong)puStack_d0;
      uStack_e8 = 2;
    }
    else {
      param_1[5] = uStack_c0;
      param_1[4] = uStack_c8;
      param_1[7] = uStack_b0;
      param_1[6] = uStack_b8;
      param_1[9] = uStack_a0;
      param_1[8] = uStack_a8;
      param_1[10] = uStack_98;
      param_1[2] = uStack_d8;
      param_1[1] = (ulong)puStack_e0;
      param_1[3] = (ulong)puStack_d0;
    }
    *param_1 = uStack_e8;
LAB_100618e3c:
    FUN_100deffc0(&puStack_170);
    return;
  }
  if ((long)uVar9 < 2) {
    if (uVar9 == 0) {
      param_2 = param_2 + 1;
      puVar6 = (ulong *)register0x00000008;
      puVar18 = unaff_x29;
SUB_107c04c24:
      *(undefined8 *)((long)puVar6 + -0x30) = unaff_x22;
      *(ulong **)((long)puVar6 + -0x28) = unaff_x21;
      *(undefined8 *)((long)puVar6 + -0x20) = unaff_x20;
      *(ulong **)((long)puVar6 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar6 + -0x10) = puVar18;
      *(undefined8 *)((long)puVar6 + -8) = unaff_x30;
      uVar9 = param_2[1];
      uVar17 = param_2[2];
      *(ulong *)((long)puVar6 + -0x48) = uVar9;
      *(ulong *)((long)puVar6 + -0x40) = uVar17;
      *(undefined1 *)((long)puVar6 + -0x50) = 5;
      FUN_1087e3db0(param_1,(undefined1 *)((long)puVar6 + -0x50),
                    (undefined1 *)((long)puVar6 + -0x31),&UNK_10b20a460);
      if (*param_2 != 0) {
        _free(uVar9);
      }
      return;
    }
    puStack_168 = (undefined *)param_2[1];
    uVar8 = 2;
  }
  else {
    if (uVar9 != 2) {
      puStack_170 = (ulong *)((ulong)CONCAT61(puStack_170._2_6_,(char)param_2[1]) << 8);
      goto LAB_100618df4;
    }
    puStack_168 = (undefined *)param_2[1];
    uVar8 = 3;
  }
  puStack_170 = (ulong *)CONCAT71(puStack_170._1_7_,uVar8);
LAB_100618df4:
  thunk_FUN_1087e3db0(param_1,&puStack_170,&puStack_1c8,&UNK_10b20a460);
  return;
}

