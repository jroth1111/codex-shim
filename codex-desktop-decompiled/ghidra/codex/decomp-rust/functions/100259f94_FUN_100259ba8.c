
/* WARNING: Possible PIC construction at 0x000100259d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100259d64) */
/* WARNING: Removing unreachable block (ram,0x000100259d94) */

void FUN_100259ba8(long param_1,long *param_2,ulong *param_3,long *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  int *piVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  ulong uVar30;
  ulong uVar31;
  undefined *puVar32;
  ulong uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  ulong uStack_f8;
  uint uStack_ec;
  undefined *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar10 = FUN_10025a420(param_2);
  if (iVar10 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 3;
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000100259c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
  lStack_e0 = param_1;
  plStack_d0 = param_4;
  uVar9 = FUN_1002599cc(param_2,param_3);
  uVar26 = 0;
  uVar4 = *(ushort *)(param_2 + 0xb);
  uVar33 = (ulong)uVar4;
  uVar30 = (ulong)(uint)uVar9;
  uVar16 = (ulong)(uVar4 & uVar9);
  lVar18 = param_2[9];
  uVar11 = param_2[10];
  lVar27 = param_2[4];
  puVar28 = (undefined *)param_2[5];
  puVar32 = (undefined *)*param_3;
  uVar25 = param_3[1];
  uVar24 = (uint)(byte)param_3[1];
  uVar31 = param_3[2];
  plStack_d8 = param_2;
  puStack_c8 = param_3;
  do {
    plVar7 = plStack_d8;
    if ((uVar11 <= uVar16) && (uVar16 = 0, uVar11 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar18 + uVar16 * 4);
    puVar34 = (undefined *)(ulong)*puVar1;
    if (puVar34 == (undefined *)0xffff) {
      uStack_b8 = puStack_c8[1];
      uStack_c0 = *puStack_c8;
      uStack_a8 = puStack_c8[3];
      uStack_b0 = puStack_c8[2];
      lStack_88 = plStack_d0[1];
      lStack_90 = *plStack_d0;
      lStack_78 = plStack_d0[3];
      lStack_80 = plStack_d0[2];
      lStack_70 = plStack_d0[4];
      plVar14 = &lStack_90;
      iVar10 = func_0x00010025a76c(plStack_d8,uVar30,&uStack_c0);
      if (iVar10 != 0) {
LAB_100259e5c:
        uVar15 = 3;
        goto LAB_100259e64;
      }
      if (uVar16 < (ulong)plVar7[10]) {
        puVar2 = (undefined2 *)(plVar7[9] + uVar16 * 4);
        *puVar2 = (short)puVar28;
        puVar2[1] = uVar9;
        goto LAB_100259e04;
      }
      puVar13 = &UNK_10b1f2230;
      uVar26 = FUN_107c05cd0(uVar16);
      if (*puStack_c8 != 0) {
        puVar13 = (undefined *)puStack_c8[2];
        (**(code **)(*puStack_c8 + 0x20))(puStack_c8 + 3,puStack_c8[1]);
      }
      __Unwind_Resume(uVar26);
      uVar35 = 0x100259f94;
      auVar44 = FUN_107c05ccc();
      goto SUB_100259f94;
    }
    uVar5 = puVar1[1];
    if (((int)uVar16 - (uint)(uVar5 & uVar4) & uVar33) < uVar26) {
      lVar18 = *plStack_d8;
      uStack_b8 = puStack_c8[1];
      uStack_c0 = *puStack_c8;
      uStack_a8 = puStack_c8[3];
      uStack_b0 = puStack_c8[2];
      lStack_88 = plStack_d0[1];
      lStack_90 = *plStack_d0;
      lStack_78 = plStack_d0[3];
      lStack_80 = plStack_d0[2];
      lStack_70 = plStack_d0[4];
      uVar11 = func_0x00010025a76c(plStack_d8,uVar30,&uStack_c0,&lStack_90);
      if ((uVar11 & 1) != 0) goto LAB_100259e5c;
      uVar11 = 0;
      lVar27 = plVar7[9];
      uVar25 = plVar7[10];
      uVar24 = (uint)puVar28 & 0xffff;
      while( true ) {
        uVar4 = (ushort)uVar30;
        uVar9 = (ushort)uVar24;
        if ((uVar25 <= uVar16) && (uVar16 = 0, uVar25 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar1 = (ushort *)(lVar27 + uVar16 * 4);
        uVar24 = (uint)*puVar1;
        if (uVar24 == 0xffff) break;
        uVar11 = uVar11 + 1;
        uVar30 = (ulong)puVar1[1];
        *puVar1 = uVar9;
        puVar1[1] = uVar4;
        uVar16 = uVar16 + 1;
      }
      *puVar1 = uVar9;
      puVar1[1] = uVar4;
      if ((0x7f < uVar11 || 0x1ff < uVar26 && lVar18 != 2) && (*plVar7 == 0)) {
        *plVar7 = 1;
      }
LAB_100259e04:
      uVar15 = 2;
LAB_100259e64:
      *(undefined1 *)(lStack_e0 + 0x20) = uVar15;
      return;
    }
    if ((uint)uVar5 == (uint)uVar9) {
      if (puVar28 <= puVar34) {
        FUN_107c05cd0(puVar34,puVar28,&UNK_10b1f2218);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100259f2c);
        (*pcVar8)();
      }
      lVar17 = lVar27 + (long)puVar34 * 0x68;
      if ((puVar32 == (undefined *)0x0) != (*(long *)(lVar17 + 0x40) != 0)) {
        if (*(long *)(lVar17 + 0x40) == 0) {
          if (*(byte *)(lVar17 + 0x48) == uVar24) break;
        }
        else if ((*(ulong *)(lVar17 + 0x50) == uVar31) &&
                (uStack_f8 = uVar25, uStack_ec = uVar24, puStack_e8 = puVar28,
                iVar10 = _memcmp(*(undefined8 *)(lVar17 + 0x48),uVar25,uVar31), puVar28 = puStack_e8
                , uVar25 = uStack_f8, uVar24 = uStack_ec, iVar10 == 0)) break;
      }
    }
    uVar26 = uVar26 + 1;
    uVar16 = uVar16 + 1;
  } while( true );
  lStack_88 = plStack_d0[1];
  lStack_90 = *plStack_d0;
  lStack_78 = plStack_d0[3];
  lStack_80 = plStack_d0[2];
  lStack_70 = plStack_d0[4];
  auVar44._8_8_ = plStack_d8;
  auVar44._0_8_ = &uStack_c0;
  plVar14 = &lStack_90;
  uVar35 = 0x100259d64;
  puVar13 = puVar34;
  puVar28 = puVar32;
SUB_100259f94:
  lVar17 = auVar44._8_8_;
  puVar12 = auVar44._0_8_;
  puVar32 = *(undefined **)(lVar17 + 0x28);
  puStack_160 = puVar34;
  uStack_158 = uVar33;
  uStack_150 = uVar11;
  uStack_148 = uVar16;
  lStack_140 = lVar18;
  uStack_138 = uVar31;
  uStack_130 = uVar30;
  lStack_128 = lVar27;
  puStack_120 = puVar28;
  uStack_118 = uVar26;
  puStack_110 = &stack0xfffffffffffffff0;
  uStack_108 = uVar35;
  if (puVar13 < puVar32) {
    lVar18 = *(long *)(lVar17 + 0x20);
    puVar19 = (uint *)(lVar18 + (long)puVar13 * 0x68);
    if ((*puVar19 & 1) == 0) {
LAB_10025a234:
      lVar18 = lVar18 + (long)puVar13 * 0x68;
      uVar35 = *(undefined8 *)(lVar18 + 0x18);
      uVar37 = *(undefined8 *)(lVar18 + 0x30);
      uVar36 = *(undefined8 *)(lVar18 + 0x28);
      puVar12[1] = *(undefined8 *)(lVar18 + 0x20);
      *puVar12 = uVar35;
      puVar12[3] = uVar37;
      puVar12[2] = uVar36;
      puVar12[4] = *(undefined8 *)(lVar18 + 0x38);
      lVar27 = plVar14[4];
      lVar38 = *plVar14;
      lVar23 = plVar14[3];
      lVar17 = plVar14[2];
      *(long *)(lVar18 + 0x20) = plVar14[1];
      *(long *)(lVar18 + 0x18) = lVar38;
      *(long *)(lVar18 + 0x30) = lVar23;
      *(long *)(lVar18 + 0x28) = lVar17;
      *(long *)(lVar18 + 0x38) = lVar27;
      return;
    }
    puVar28 = *(undefined **)(puVar19 + 2);
    puVar34 = *(undefined **)(lVar17 + 0x40);
    if (puVar28 < puVar34) {
      lVar27 = *(long *)(lVar17 + 0x38);
      puStack_228 = &UNK_10b1f2380;
      puStack_220 = &UNK_10b1f22c0;
      puVar29 = puVar28;
      puVar6 = (undefined8 *)(lVar27 + (long)puVar34 * 0x48);
      do {
        puVar19 = (uint *)(lVar27 + (long)puVar29 * 0x48);
        puVar28 = *(undefined **)(puVar19 + 2);
        puVar21 = *(undefined **)(puVar19 + 6);
        if ((*puVar19 & 1) == 0) {
          if (puVar19[4] == 0) {
            if (puVar32 <= puVar28) {
              puStack_220 = &UNK_10b1f22a8;
              goto LAB_10025a39c;
            }
            *(undefined8 *)(lVar18 + (long)puVar28 * 0x68) = 0;
          }
          else {
            if (puVar32 <= puVar28) goto LAB_10025a39c;
            piVar20 = (int *)(lVar18 + (long)puVar28 * 0x68);
            if (*piVar20 != 1) {
              puVar32 = &UNK_10b1f22d8;
LAB_10025a298:
              FUN_107c05cb0(puVar32);
              goto LAB_10025a3c8;
            }
            *(undefined **)(piVar20 + 2) = puVar21;
            if (puVar34 <= puVar21) {
              puStack_220 = &UNK_10b1f22f0;
              puVar32 = puVar34;
              puVar28 = puVar21;
              goto LAB_10025a39c;
            }
            puVar22 = (undefined8 *)(lVar27 + (long)puVar21 * 0x48);
            *puVar22 = 0;
            puVar22[1] = puVar28;
          }
        }
        else if ((puVar19[4] & 1) == 0) {
          if (puVar32 <= puVar21) {
            puStack_220 = &UNK_10b1f2308;
            puVar28 = puVar21;
            goto LAB_10025a39c;
          }
          piVar20 = (int *)(lVar18 + (long)puVar21 * 0x68);
          if (*piVar20 != 1) {
            puVar32 = &UNK_10b1f2320;
            goto LAB_10025a298;
          }
          *(undefined **)(piVar20 + 4) = puVar28;
          if (puVar34 <= puVar28) {
            puStack_220 = &UNK_10b1f2338;
            puVar32 = puVar34;
            goto LAB_10025a39c;
          }
          lVar23 = lVar27 + (long)puVar28 * 0x48;
          *(undefined8 *)(lVar23 + 0x10) = 0;
          *(undefined **)(lVar23 + 0x18) = puVar21;
        }
        else {
          if (puVar34 <= puVar28) {
            puStack_220 = &UNK_10b1f2350;
            puVar32 = puVar34;
            goto LAB_10025a39c;
          }
          lVar23 = lVar27 + (long)puVar28 * 0x48;
          *(undefined8 *)(lVar23 + 0x10) = 1;
          *(undefined **)(lVar23 + 0x18) = puVar21;
          if (puVar34 <= puVar21) {
            puStack_220 = &UNK_10b1f2368;
            puVar32 = puVar34;
            puVar28 = puVar21;
            goto LAB_10025a39c;
          }
          puVar22 = (undefined8 *)(lVar27 + (long)puVar21 * 0x48);
          *puVar22 = 1;
          puVar22[1] = puVar28;
        }
        puStack_1a8 = *(undefined **)(puVar19 + 2);
        lStack_1b0 = *(long *)puVar19;
        puStack_198 = *(undefined **)(puVar19 + 6);
        uStack_1a0 = *(ulong *)(puVar19 + 4);
        uStack_188 = *(undefined8 *)(puVar19 + 10);
        lStack_190 = *(long *)(puVar19 + 8);
        uStack_178 = *(undefined8 *)(puVar19 + 0xe);
        uStack_180 = *(undefined8 *)(puVar19 + 0xc);
        uStack_170 = *(undefined8 *)(puVar19 + 0x10);
        puVar34 = puVar34 + -1;
        uVar36 = puVar6[-8];
        uVar35 = puVar6[-9];
        uVar39 = puVar6[-6];
        uVar37 = puVar6[-7];
        uVar41 = puVar6[-4];
        uVar40 = puVar6[-5];
        uVar43 = puVar6[-2];
        uVar42 = puVar6[-3];
        *(undefined8 *)(puVar19 + 0x10) = puVar6[-1];
        *(undefined8 *)(puVar19 + 10) = uVar41;
        *(undefined8 *)(puVar19 + 8) = uVar40;
        *(undefined8 *)(puVar19 + 0xe) = uVar43;
        *(undefined8 *)(puVar19 + 0xc) = uVar42;
        *(undefined8 *)(puVar19 + 2) = uVar36;
        *(undefined8 *)puVar19 = uVar35;
        *(undefined8 *)(puVar19 + 6) = uVar39;
        *(undefined8 *)(puVar19 + 4) = uVar37;
        *(undefined **)(lVar17 + 0x40) = puVar34;
        if ((lStack_1b0 != 0) && (puVar34 == puStack_1a8)) {
          lStack_1b0 = 1;
          puStack_1a8 = puVar29;
        }
        if ((uStack_1a0 != 0) && (puVar34 == puStack_198)) {
          uStack_1a0 = 1;
          puStack_198 = puVar29;
        }
        puVar28 = puStack_198;
        if (puVar34 == puVar29) goto LAB_10025a1c4;
        puVar21 = puVar29;
        if (puVar34 <= puVar29) {
LAB_10025a374:
          FUN_107c05cd0(puVar21,puVar34,puStack_228);
          goto LAB_10025a3c8;
        }
        uVar26 = *(ulong *)(puVar19 + 4);
        puVar3 = *(undefined **)(puVar19 + 6);
        puVar21 = *(undefined **)(puVar19 + 2);
        if ((*puVar19 & 1) == 0) {
          if (puVar32 <= puVar21) {
            puStack_228 = &UNK_10b1f2398;
            puVar34 = puVar32;
            goto LAB_10025a374;
          }
          piVar20 = (int *)(lVar18 + (long)puVar21 * 0x68);
          if (*piVar20 == 1) goto LAB_10025a18c;
          puVar32 = &UNK_10b1f23b0;
LAB_10025a2b8:
          FUN_107c05cb0(puVar32);
          goto LAB_10025a3c8;
        }
        if (puVar34 <= puVar21) {
          puStack_228 = &UNK_10b1f23c8;
          goto LAB_10025a374;
        }
        piVar20 = (int *)(lVar27 + (long)puVar21 * 0x48 + 0x10);
        piVar20[0] = 1;
        piVar20[1] = 0;
LAB_10025a18c:
        *(undefined **)(piVar20 + 2) = puVar29;
        puVar21 = puVar3;
        if ((uVar26 & 1) == 0) {
          if (puVar32 <= puVar3) {
            puStack_228 = &UNK_10b1f23e0;
            puVar34 = puVar32;
            goto LAB_10025a374;
          }
          piVar20 = (int *)(lVar18 + (long)puVar3 * 0x68);
          if (*piVar20 != 1) {
            puVar32 = &UNK_10b1f23f8;
            goto LAB_10025a2b8;
          }
          *(undefined **)(piVar20 + 4) = puVar29;
        }
        else {
          if (puVar34 <= puVar3) {
            puStack_228 = &UNK_10b1f2410;
            goto LAB_10025a374;
          }
          puVar22 = (undefined8 *)(lVar27 + (long)puVar3 * 0x48);
          *puVar22 = 1;
          puVar22[1] = puVar29;
        }
LAB_10025a1c4:
        uStack_1c8 = uStack_178;
        uStack_1c0 = uStack_170;
        if ((uStack_1a0 & 1) == 0) {
          (**(code **)(lStack_190 + 0x20))(&uStack_1c8,uStack_188,uStack_180);
          goto LAB_10025a234;
        }
        (**(code **)(lStack_190 + 0x20))(&uStack_1c8,uStack_188,uStack_180);
        puVar29 = puVar28;
        puVar6 = puVar6 + -9;
      } while (puVar28 < puVar34);
    }
    puStack_220 = &UNK_10b1f2290;
    puVar32 = puVar34;
LAB_10025a39c:
    FUN_107c05cd0(puVar28,puVar32,puStack_220);
  }
  else {
    FUN_107c05cd0(puVar13,puVar32,&UNK_10b1f2248);
  }
LAB_10025a3c8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10025a3cc);
  (*pcVar8)();
}

