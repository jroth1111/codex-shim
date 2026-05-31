
ulong FUN_100ea12b8(long *param_1,long *param_2,long *param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ushort uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong extraout_x1;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined1 uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long lStack_190;
  uint uStack_184;
  ulong uStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  byte bStack_78;
  uint uStack_77;
  uint3 uStack_73;
  long lStack_70;
  long lStack_68;
  
  uVar7 = FUN_100ea2680(param_2);
  if ((uVar7 & 1) == 0) {
    plStack_a0 = param_1;
    uVar8 = func_0x000100ea0a4c(param_2,param_3);
    uVar29 = 0;
    uVar22 = (uint)uVar8 & 0xffff;
    uVar3 = *(ushort *)(param_2 + 0xb);
    uVar16 = (ulong)(uVar3 & uVar22);
    lVar19 = param_2[9];
    uVar12 = param_2[10];
    lVar14 = param_2[4];
    uVar25 = param_2[5];
    uVar7 = uVar8;
    plStack_98 = param_2;
    do {
      plVar13 = plStack_98;
      if ((uVar12 <= uVar16) && (uVar16 = 0, uVar12 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar19 + uVar16 * 4);
      uVar27 = (ulong)*puVar1;
      if ((uVar27 == 0xffff) ||
         (uVar5 = puVar1[1], ((ulong)((int)uVar16 - (uint)(uVar5 & uVar3)) & (ulong)uVar3) < uVar29)
         ) {
        uVar26 = 0x1ff < uVar29 && *plStack_98 != 2;
        if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
          uVar29 = 0;
          bStack_78 = *(byte *)(param_3 + 1);
          lStack_80 = 0;
        }
        else {
          uVar7 = (**(code **)*param_3)(&lStack_80,param_3 + 3,param_3[1],param_3[2]);
          lStack_88 = lStack_68;
          lStack_90 = lStack_70;
          uVar29 = (ulong)uStack_77 << 8 | (ulong)uStack_73 << 0x28;
        }
        *plStack_a0 = (long)plVar13;
        plStack_a0[1] = lStack_80;
        plStack_a0[2] = uVar29 | bStack_78;
        plStack_a0[4] = lStack_88;
        plStack_a0[3] = lStack_90;
        plStack_a0[5] = uVar16;
        *(short *)(plStack_a0 + 6) = (short)uVar8;
        param_1 = plStack_a0;
        goto LAB_100ea1484;
      }
      if (uVar5 == uVar22) {
        if (uVar25 <= uVar27) {
          plVar13 = (long *)&UNK_10b236140;
          auVar32 = func_0x000108a07bdc(uVar27);
          plVar15 = auVar32._8_8_;
          lVar17 = auVar32._0_8_;
          uStack_e0 = 0xffff;
          uStack_b8 = 0x100ea14b8;
          uStack_110 = uVar12;
          uStack_108 = (ulong)uVar3;
          uStack_100 = uVar29;
          uStack_f8 = uVar16;
          uStack_f0 = (ulong)uVar22;
          uStack_e8 = uVar27;
          plStack_d8 = param_3;
          lStack_d0 = lVar14;
          lStack_c8 = lVar19;
          puStack_c0 = &stack0xfffffffffffffff0;
          iVar6 = FUN_100ea2680();
          if (iVar6 != 0) {
            (**(code **)(*plVar13 + 0x20))(plVar13 + 3,plVar13[1],plVar13[2]);
            if (*plVar15 == 0) {
              return 2;
            }
            (**(code **)(*plVar15 + 0x20))(plVar15 + 3,plVar15[1],plVar15[2]);
            return 2;
          }
          plStack_170 = plVar13;
          uVar5 = FUN_100ea0e80(lVar17,plVar15);
          uVar7 = 0;
          uVar3 = *(ushort *)(lVar17 + 0x58);
          uVar25 = (ulong)(uint)uVar5;
          uVar29 = (ulong)(uVar3 & uVar5);
          lVar19 = *(long *)(lVar17 + 0x48);
          uVar16 = *(ulong *)(lVar17 + 0x50);
          lVar14 = *(long *)(lVar17 + 0x20);
          uVar12 = *(ulong *)(lVar17 + 0x28);
          lVar17 = *plVar15;
          lVar24 = plVar15[1];
          uVar22 = (uint)*(byte *)(plVar15 + 1);
          lVar28 = plVar15[2];
          goto LAB_100ea1578;
        }
        lVar17 = lVar14 + uVar27 * 0x68;
        if ((*(long *)(lVar17 + 0x40) != 0) != (*param_3 == 0)) {
          if (*(long *)(lVar17 + 0x40) == 0) {
            if (*(char *)(lVar17 + 0x48) == (char)param_3[1]) goto LAB_100ea13e4;
          }
          else if ((*(long *)(lVar17 + 0x50) == param_3[2]) &&
                  (uStack_a8 = uVar25, uVar7 = _memcmp(*(undefined8 *)(lVar17 + 0x48),param_3[1]),
                  uVar25 = uStack_a8, (int)uVar7 == 0)) goto LAB_100ea13e4;
        }
      }
      uVar29 = uVar29 + 1;
      uVar16 = uVar16 + 1;
    } while( true );
  }
  uVar26 = 3;
LAB_100ea1484:
  *(undefined1 *)((long)param_1 + 0x32) = uVar26;
  return uVar7;
LAB_100ea1578:
  plStack_168 = auVar32._8_8_;
  plStack_178 = auVar32._0_8_;
  plVar13 = plStack_178;
  if ((uVar16 <= uVar29) && (uVar29 = 0, uVar16 == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (ushort *)(lVar19 + uVar29 * 4);
  uVar8 = (ulong)*puVar1;
  if (uVar8 == 0xffff) {
    lStack_158 = plStack_168[1];
    lStack_160 = *plStack_168;
    lStack_148 = plStack_168[3];
    lStack_150 = plStack_168[2];
    lStack_138 = plStack_170[1];
    lStack_140 = *plStack_170;
    lStack_128 = plStack_170[3];
    lStack_130 = plStack_170[2];
    lStack_120 = plStack_170[4];
    plVar15 = &lStack_140;
    uVar27 = FUN_100ea29f4(plStack_178,uVar25,&lStack_160);
    if ((uVar27 & 1) != 0) {
      return 2;
    }
    if (uVar29 < (ulong)plVar13[10]) {
      puVar2 = (undefined2 *)(plVar13[9] + uVar29 * 4);
      *puVar2 = (short)uVar12;
      puVar2[1] = uVar5;
      return 0;
    }
    plVar13 = (long *)&UNK_10b236188;
    uVar9 = func_0x000108a07bdc(uVar29);
    if (*plStack_168 != 0) {
      plVar13 = (long *)plStack_168[2];
      (**(code **)(*plStack_168 + 0x20))(plStack_168 + 3,plStack_168[1]);
    }
    __Unwind_Resume(uVar9);
    auVar32 = func_0x000108a07bc4();
    plVar11 = auVar32._8_8_;
    puVar10 = auVar32._0_8_;
    pcStack_198 = FUN_100ea1868;
    uStack_1f0 = uVar7;
    uStack_1e8 = uVar8;
    uStack_1e0 = (ulong)uVar3;
    lStack_1d8 = lVar28;
    uStack_1d0 = uVar29;
    uStack_1c8 = uVar16;
    lStack_1c0 = lVar19;
    uStack_1b8 = uVar25;
    uStack_1b0 = uVar12;
    uStack_1a8 = uVar9;
    ppuStack_1a0 = &puStack_c0;
    iVar6 = FUN_100ea2680(plVar11);
    if (iVar6 == 0) {
      uVar8 = FUN_100ea0e80(plVar11,plVar13);
      uVar7 = 0;
      uVar3 = *(ushort *)(plVar11 + 0xb);
      uVar22 = (uint)uVar8 & 0xffff;
      uVar29 = (ulong)(uVar3 & uVar22);
      lVar19 = plVar11[9];
      uVar16 = plVar11[10];
      lVar14 = plVar11[4];
      uVar12 = plVar11[5];
      lVar17 = *plVar13;
      lVar24 = plVar13[1];
      lVar28 = plVar13[1];
      lVar18 = plVar13[2];
      uVar25 = uVar8;
      goto LAB_100ea194c;
    }
    *(undefined1 *)(puVar10 + 4) = 3;
    uVar7 = (**(code **)(*plVar15 + 0x20))(plVar15 + 3,plVar15[1],plVar15[2]);
    if (*plVar13 == 0) {
      return uVar7;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 0x20);
    lVar19 = plVar13[1];
    lVar14 = plVar13[2];
    goto LAB_100ea18d4;
  }
  uVar4 = puVar1[1];
  if (((ulong)((int)uVar29 - (uint)(uVar4 & uVar3)) & (ulong)uVar3) < uVar7) {
    lVar19 = *plStack_178;
    lStack_158 = plStack_168[1];
    lStack_160 = *plStack_168;
    lStack_148 = plStack_168[3];
    lStack_150 = plStack_168[2];
    lStack_138 = plStack_170[1];
    lStack_140 = *plStack_170;
    lStack_128 = plStack_170[3];
    lStack_130 = plStack_170[2];
    lStack_120 = plStack_170[4];
    uVar16 = FUN_100ea29f4(plStack_178,uVar25,&lStack_160,&lStack_140);
    if ((uVar16 & 1) != 0) {
      return 2;
    }
    uVar16 = 0;
    lVar14 = plVar13[9];
    uVar8 = plVar13[10];
    uVar22 = (uint)uVar12 & 0xffff;
    while( true ) {
      uVar3 = (ushort)uVar25;
      uVar5 = (ushort)uVar22;
      if ((uVar8 <= uVar29) && (uVar29 = 0, uVar8 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar14 + uVar29 * 4);
      uVar22 = (uint)*puVar1;
      if (uVar22 == 0xffff) break;
      uVar16 = uVar16 + 1;
      uVar25 = (ulong)puVar1[1];
      *puVar1 = uVar5;
      puVar1[1] = uVar3;
      uVar29 = uVar29 + 1;
    }
    *puVar1 = uVar5;
    puVar1[1] = uVar3;
    if (uVar16 < 0x80 && (uVar7 < 0x200 || lVar19 == 2)) {
      return 0;
    }
    if (*plVar13 == 0) {
      *plVar13 = 1;
      return 0;
    }
    return 0;
  }
  if ((uint)uVar4 == (uint)uVar5) {
    if (uVar12 <= uVar8) {
      func_0x000108a07bdc(uVar8,uVar12,&UNK_10b236170);
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100ea1800);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar18 = lVar14 + uVar8 * 0x68;
    if ((lVar17 == 0) != (*(long *)(lVar18 + 0x40) != 0)) {
      if (*(long *)(lVar18 + 0x40) == 0) {
        if (*(byte *)(lVar18 + 0x48) == uVar22) {
LAB_100ea162c:
          plStack_168 = auVar32._8_8_;
          plStack_178 = auVar32._0_8_;
          lStack_138 = plStack_170[1];
          lStack_140 = *plStack_170;
          lStack_128 = plStack_170[3];
          lStack_130 = plStack_170[2];
          lStack_120 = plStack_170[4];
          FUN_100ea08a0(uVar8,lVar14 + uVar8 * 0x68,(long)plStack_178 + 0x30,&lStack_140);
          if (*plStack_168 != 0) {
            (**(code **)(*plStack_168 + 0x20))(plStack_168 + 3,plStack_168[1],plStack_168[2]);
          }
          return 1;
        }
      }
      else if (*(long *)(lVar18 + 0x50) == lVar28) {
        lStack_190 = lVar24;
        uStack_184 = uVar22;
        uStack_180 = uVar12;
        iVar6 = _memcmp(*(undefined8 *)(lVar18 + 0x48),lVar24,lVar28);
        auVar32._8_8_ = plStack_168;
        auVar32._0_8_ = plStack_178;
        uVar12 = uStack_180;
        lVar24 = lStack_190;
        uVar22 = uStack_184;
        if (iVar6 == 0) goto LAB_100ea162c;
      }
    }
  }
  uVar7 = uVar7 + 1;
  uVar29 = uVar29 + 1;
  goto LAB_100ea1578;
LAB_100ea194c:
  if ((uVar16 <= uVar29) && (uVar29 = 0, uVar16 == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (ushort *)(lVar19 + uVar29 * 4);
  uVar27 = (ulong)*puVar1;
  if (uVar27 == 0xffff) {
    lStack_238 = plVar13[1];
    lStack_240 = *plVar13;
    lStack_228 = plVar13[3];
    lStack_230 = plVar13[2];
    lStack_218 = plVar15[1];
    lStack_220 = *plVar15;
    lStack_208 = plVar15[3];
    lStack_210 = plVar15[2];
    lStack_200 = plVar15[4];
    uVar16 = FUN_100ea29f4(plVar11,uVar22,&lStack_240,&lStack_220);
    if ((int)uVar16 != 0) {
LAB_100ea1b54:
      uVar26 = 3;
      goto LAB_100ea1b5c;
    }
    if (uVar29 < (ulong)plVar11[10]) {
      puVar2 = (undefined2 *)(plVar11[9] + uVar29 * 4);
      *puVar2 = (short)uVar12;
      puVar2[1] = (short)uVar8;
      goto LAB_100ea1afc;
    }
    func_0x000108a07bdc(uVar29,plVar11[10],&UNK_10b2361b8);
    uVar12 = extraout_x1;
    goto LAB_100ea1c34;
  }
  uVar5 = puVar1[1];
  if (((ulong)((int)uVar29 - (uint)(uVar5 & uVar3)) & (ulong)uVar3) < uVar7) {
    lVar19 = *plVar11;
    lStack_238 = plVar13[1];
    lStack_240 = *plVar13;
    lStack_228 = plVar13[3];
    lStack_230 = plVar13[2];
    lStack_218 = plVar15[1];
    lStack_220 = *plVar15;
    lStack_208 = plVar15[3];
    lStack_210 = plVar15[2];
    lStack_200 = plVar15[4];
    uVar16 = FUN_100ea29f4(plVar11,uVar22,&lStack_240,&lStack_220);
    if ((uVar16 & 1) != 0) goto LAB_100ea1b54;
    uVar25 = 0;
    lVar14 = plVar11[9];
    uVar8 = plVar11[10];
    uVar23 = (uint)uVar12 & 0xffff;
    while( true ) {
      uVar3 = (ushort)uVar22;
      uVar5 = (ushort)uVar23;
      if ((uVar8 <= uVar29) && (uVar29 = 0, uVar8 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar14 + uVar29 * 4);
      uVar23 = (uint)*puVar1;
      if (uVar23 == 0xffff) break;
      uVar25 = uVar25 + 1;
      uVar22 = (uint)puVar1[1];
      *puVar1 = uVar5;
      puVar1[1] = uVar3;
      uVar29 = uVar29 + 1;
    }
    *puVar1 = uVar5;
    puVar1[1] = uVar3;
    if ((0x7f < uVar25 || 0x1ff < uVar7 && lVar19 != 2) && (*plVar11 == 0)) {
      *plVar11 = 1;
    }
LAB_100ea1afc:
    uVar26 = 2;
LAB_100ea1b5c:
    *(undefined1 *)(puVar10 + 4) = uVar26;
    return uVar16;
  }
  if (uVar5 == uVar22) {
    if (uVar12 <= uVar27) {
      func_0x000108a07bdc(uVar27,uVar12,&UNK_10b2361a0);
      goto LAB_100ea1c44;
    }
    lVar20 = lVar14 + uVar27 * 0x68;
    if ((lVar17 == 0) != (*(long *)(lVar20 + 0x40) != 0)) {
      if (*(long *)(lVar20 + 0x40) == 0) {
        if (*(char *)(lVar20 + 0x48) == (char)lVar28) {
LAB_100ea1a08:
          lStack_218 = plVar15[1];
          lStack_220 = *plVar15;
          lStack_208 = plVar15[3];
          lStack_210 = plVar15[2];
          lStack_200 = plVar15[4];
          puVar21 = (uint *)(lVar14 + uVar27 * 0x68);
          if ((*puVar21 & 1) != 0) {
            uVar25 = FUN_100ea2b1c(plVar11,*(undefined8 *)(puVar21 + 2));
            uVar12 = plVar11[5];
          }
          if (uVar27 < uVar12) {
            lVar19 = plVar11[4] + uVar27 * 0x68;
            uVar9 = *(undefined8 *)(lVar19 + 0x18);
            uVar31 = *(undefined8 *)(lVar19 + 0x30);
            uVar30 = *(undefined8 *)(lVar19 + 0x28);
            puVar10[1] = *(undefined8 *)(lVar19 + 0x20);
            *puVar10 = uVar9;
            puVar10[3] = uVar31;
            puVar10[2] = uVar30;
            uVar26 = *(undefined1 *)(lVar19 + 0x38);
            *(undefined4 *)((long)puVar10 + 0x21) = *(undefined4 *)(lVar19 + 0x39);
            *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)(lVar19 + 0x3c);
            *(long *)(lVar19 + 0x20) = lStack_218;
            *(long *)(lVar19 + 0x18) = lStack_220;
            *(long *)(lVar19 + 0x30) = lStack_208;
            *(long *)(lVar19 + 0x28) = lStack_210;
            *(long *)(lVar19 + 0x38) = lStack_200;
            *(undefined1 *)(puVar10 + 4) = uVar26;
            if (*plVar13 == 0) {
              return uVar25;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 0x20);
            lVar19 = plVar13[1];
            lVar14 = plVar13[2];
LAB_100ea18d4:
                    /* WARNING: Could not recover jumptable at 0x000100ea18f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*UNRECOVERED_JUMPTABLE)(plVar13 + 3,lVar19,lVar14);
            return uVar7;
          }
LAB_100ea1c34:
          func_0x000108a07bdc(uVar27,uVar12,&UNK_10b236248);
LAB_100ea1c44:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100ea1c48);
          (*UNRECOVERED_JUMPTABLE)();
        }
      }
      else if ((*(long *)(lVar20 + 0x50) == lVar18) &&
              (uVar25 = _memcmp(*(undefined8 *)(lVar20 + 0x48),lVar24,lVar18), (int)uVar25 == 0))
      goto LAB_100ea1a08;
    }
  }
  uVar7 = uVar7 + 1;
  uVar29 = uVar29 + 1;
  goto LAB_100ea194c;
LAB_100ea13e4:
  *plStack_a0 = (long)plStack_98;
  plStack_a0[1] = uVar16;
  uVar26 = 2;
  plStack_a0[2] = uVar27;
  param_1 = plStack_a0;
  goto LAB_100ea1484;
}

