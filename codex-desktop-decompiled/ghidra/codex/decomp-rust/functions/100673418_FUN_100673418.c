
void FUN_100673418(char *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  char cStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  uVar11 = *param_2;
  uVar5 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar5 = 5;
  }
  if ((long)uVar5 < 3) {
    if (uVar5 == 0) {
      *param_1 = '\x12';
    }
    else if (uVar5 == 1) {
      uVar5 = param_2[1];
      *param_1 = '\0';
      param_1[1] = (char)uVar5;
    }
    else {
      uVar5 = param_2[2];
      if (param_2[1] == 0) {
        cVar8 = '\x04';
      }
      else if (param_2[1] == 1) {
        cVar8 = '\b';
      }
      else {
        cVar8 = '\n';
      }
      *param_1 = cVar8;
      *(ulong *)(param_1 + 8) = uVar5;
    }
  }
  else if (uVar5 == 3) {
    uVar11 = param_2[2];
    uStack_1e1 = (undefined1)uVar11;
    uStack_1e9 = (undefined1)param_2[1];
    uStack_1e8 = (undefined7)(param_2[1] >> 8);
    uVar5 = param_2[3];
    *param_1 = '\f';
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_1e1,uStack_1e8);
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_1e9,uStack_1f0);
    *(ulong *)(param_1 + 0x18) = uVar5;
    *(ulong *)(param_1 + 0x10) = uVar11;
  }
  else if (uVar5 == 4) {
    uVar5 = param_2[2];
    uVar11 = param_2[3];
    lVar10 = uVar5 + uVar11 * 0x48;
    uStack_c0 = (undefined7)uVar5;
    uStack_b9 = (undefined1)(uVar5 >> 0x38);
    uStack_b0 = (undefined7)param_2[1];
    uStack_a9 = (undefined1)(param_2[1] >> 0x38);
    uStack_a8 = (undefined7)lVar10;
    uStack_a1 = (undefined1)((ulong)lVar10 >> 0x38);
    uStack_b8 = uStack_c0;
    uStack_b1 = uStack_b9;
    FUN_1013f0180(param_1,&uStack_c0);
    if (*param_1 == '\x16') {
      lVar10 = ((ulong)(CONCAT17(uStack_a1,uStack_a8) - CONCAT17(uStack_b1,uStack_b8)) >> 3) *
               -0x71c71c71c71c71c7 + 1;
      lVar12 = CONCAT17(uStack_b1,uStack_b8);
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        FUN_100de6690(lVar12);
        lVar12 = lVar12 + 0x48;
      }
    }
    else {
      uStack_1e8 = (undefined7)*(undefined8 *)(param_1 + 8);
      uStack_1e1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 8) >> 0x38);
      uStack_1f0 = (undefined7)*(undefined8 *)param_1;
      uStack_1e9 = (undefined1)((ulong)*(undefined8 *)param_1 >> 0x38);
      uStack_1d8 = (undefined7)*(undefined8 *)(param_1 + 0x18);
      uStack_1d1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x38);
      uStack_1e0 = (undefined7)*(undefined8 *)(param_1 + 0x10);
      uStack_1d9 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
      lVar10 = CONCAT17(uStack_b1,uStack_b8);
      uVar5 = CONCAT17(uStack_a1,uStack_a8) - lVar10;
      if (uVar5 != 0) {
        uVar4 = thunk_FUN_1087e422c(uVar11,&UNK_10b21cb80,&UNK_10b20a590);
        *(undefined8 *)(param_1 + 8) = uVar4;
        *param_1 = '\x16';
        FUN_100e077ec(&uStack_1f0);
      }
      lVar12 = (uVar5 >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar12 = lVar12 + -1, lVar12 != 0) {
        FUN_100de6690(lVar10);
        lVar10 = lVar10 + 0x48;
      }
    }
    if (CONCAT17(uStack_a9,uStack_b0) != 0) {
      _free(CONCAT17(uStack_b9,uStack_c0));
    }
  }
  else {
    uVar14 = param_2[6];
    plVar6 = (long *)param_2[1];
    uVar5 = param_2[2];
    uVar9 = param_2[4];
    if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
      _free(param_2[3] + uVar9 * -8 + -8);
    }
    plVar13 = plVar6 + uVar5 * 0xd;
    uStack_1f0 = 5;
    uStack_1e9 = 0x80;
    uVar9 = uVar5;
    if (0x3fff < uVar5) {
      uVar9 = 0x4000;
    }
    plStack_1a8 = plVar6;
    uStack_198 = uVar11;
    plStack_190 = plVar13;
    if (uVar5 == 0) {
      uStack_158 = 0;
      lStack_150 = 8;
      uStack_148 = 0;
      plVar7 = plVar13;
    }
    else {
      plStack_1a0 = plVar6;
      lStack_150 = _malloc(uVar9 << 6);
      if (lStack_150 == 0) {
        FUN_107c03c64(8,uVar9 << 6);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006738a4);
        (*pcVar3)();
      }
      uStack_148 = 0;
      plVar2 = plVar6;
      uStack_158 = uVar9;
      do {
        plVar6 = plVar2 + 0xd;
        lVar10 = *plVar2;
        plVar7 = plVar6;
        if (lVar10 == -0x8000000000000000) break;
        lStack_f0 = plVar2[1];
        lStack_e8 = plVar2[2];
        lStack_1c8 = plVar2[8];
        lStack_1d0 = plVar2[7];
        lStack_1b8 = plVar2[10];
        lStack_1c0 = plVar2[9];
        lStack_1b0 = plVar2[0xb];
        lVar12 = plVar2[3];
        uStack_1e8 = (undefined7)plVar2[4];
        uStack_1e1 = (undefined1)((ulong)plVar2[4] >> 0x38);
        uStack_1d8 = (undefined7)plVar2[6];
        uStack_1d1 = (undefined1)((ulong)plVar2[6] >> 0x38);
        uStack_1e0 = (undefined7)plVar2[5];
        uStack_1d9 = (undefined1)((ulong)plVar2[5] >> 0x38);
        auStack_100[0] = 0xc;
        uStack_1f0 = 5;
        uStack_1e9 = 0x80;
        lStack_f8 = lVar10;
        if (lVar12 == -0x7ffffffffffffffb) {
          plStack_1a0 = plVar6;
          uVar4 = thunk_FUN_1088561c0(&UNK_108cde170,0x10);
          plVar6 = plStack_1a0;
LAB_100673798:
          plStack_1a0 = plVar6;
          FUN_100e077ec(auStack_100);
          *(undefined8 *)(param_1 + 8) = uVar4;
          *param_1 = '\x16';
          FUN_100d03040(&uStack_158);
          goto LAB_10067380c;
        }
        uStack_c0 = (undefined7)lVar12;
        uStack_b9 = (undefined1)((ulong)lVar12 >> 0x38);
        lStack_a0 = plVar2[7];
        uStack_b0 = (undefined7)plVar2[5];
        uStack_a9 = (undefined1)((ulong)plVar2[5] >> 0x38);
        uStack_b8 = (undefined7)plVar2[4];
        uStack_b1 = (undefined1)((ulong)plVar2[4] >> 0x38);
        uStack_a8 = (undefined7)plVar2[6];
        uStack_a1 = (undefined1)((ulong)plVar2[6] >> 0x38);
        lStack_90 = plVar2[9];
        lStack_98 = plVar2[8];
        lStack_80 = plVar2[0xb];
        lStack_88 = plVar2[10];
        FUN_100673418(&cStack_e0,&uStack_c0);
        uVar5 = uStack_148;
        uVar4 = uStack_d8;
        if (cStack_e0 == '\x16') goto LAB_100673798;
        lStack_98 = lStack_c8;
        lStack_a0 = lStack_d0;
        uStack_a8 = (undefined7)uStack_d8;
        uStack_a1 = (undefined1)((ulong)uStack_d8 >> 0x38);
        uStack_b0 = (undefined7)CONCAT71(uStack_df,cStack_e0);
        uStack_a9 = (undefined1)((uint7)uStack_df >> 0x30);
        uStack_118 = uStack_d8;
        uStack_120 = CONCAT17(uStack_a9,uStack_b0);
        lStack_108 = lStack_c8;
        lStack_110 = lStack_d0;
        lStack_128 = lStack_e8;
        lStack_130 = lStack_f0;
        uStack_140 = 0xc;
        lStack_138 = lVar10;
        if (uStack_148 == uStack_158) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&uStack_158);
        }
        puVar1 = (undefined8 *)(lStack_150 + uVar5 * 0x40);
        puVar1[1] = lStack_138;
        *puVar1 = CONCAT71(uStack_13f,uStack_140);
        puVar1[3] = lStack_128;
        puVar1[2] = lStack_130;
        puVar1[5] = uStack_118;
        puVar1[4] = uStack_120;
        puVar1[7] = lStack_108;
        puVar1[6] = lStack_110;
        uStack_148 = uVar5 + 1;
        plVar7 = plVar13;
        plVar2 = plVar6;
      } while (plVar6 != plVar13);
    }
    plStack_1a0 = plVar6;
    uStack_b1 = (undefined1)lStack_150;
    uStack_b0 = (undefined7)((ulong)lStack_150 >> 8);
    uStack_b9 = (undefined1)uStack_158;
    uStack_b8 = (undefined7)(uStack_158 >> 8);
    uStack_a9 = (undefined1)uStack_148;
    uStack_a8 = (undefined7)(uStack_148 >> 8);
    *param_1 = '\x15';
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_b1,uStack_b8);
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_b9,uStack_c0);
    *(ulong *)(param_1 + 0x18) = uStack_148;
    *(long *)(param_1 + 0x10) = lStack_150;
    uStack_178 = *(undefined8 *)(param_1 + 8);
    uStack_180 = *(undefined8 *)param_1;
    uStack_168 = *(undefined8 *)(param_1 + 0x18);
    uStack_170 = *(undefined8 *)(param_1 + 0x10);
    if (plVar13 != plVar7) {
      uVar4 = thunk_FUN_1087e422c(uVar14,&UNK_10b21cb90,&UNK_10b20a590);
      *(undefined8 *)(param_1 + 8) = uVar4;
      *param_1 = '\x16';
      FUN_100e077ec(&uStack_180);
    }
LAB_10067380c:
    FUN_100de8910(&plStack_1a8);
  }
  return;
}

