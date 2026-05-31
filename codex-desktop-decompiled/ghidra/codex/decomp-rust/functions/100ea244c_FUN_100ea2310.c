
undefined8 * FUN_100ea2310(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  short *psVar3;
  short *psVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *extraout_x1;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  undefined *extraout_x8;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *extraout_x9;
  undefined8 uVar22;
  int *piVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *extraout_x13;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  
  uVar17 = (undefined4)((ulong)param_4 >> 0x20);
  uVar16 = (undefined4)param_4;
  uVar26 = *(ulong *)(param_1 + 0x28);
  if (uVar26 == 0) {
    return (undefined8 *)0x0;
  }
  uVar9 = FUN_100ea0e80();
  uVar28 = 0;
  uVar6 = *(ushort *)(param_1 + 0x58);
  uVar18 = (ulong)((uint)uVar6 & uVar9 & 0xffff);
  lVar13 = *(long *)(param_1 + 0x48);
  uVar5 = *(ulong *)(param_1 + 0x50);
  lVar27 = *(long *)(param_1 + 0x20);
  do {
    if ((uVar5 <= uVar18) && (uVar18 = 0, uVar5 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar13 + uVar18 * 4);
    uVar11 = (ulong)*puVar1;
    if (uVar11 == 0xffff) {
      return (undefined8 *)0x0;
    }
    uVar7 = puVar1[1];
    if (((ulong)((int)uVar18 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar28) {
      return (undefined8 *)0x0;
    }
    if ((uint)uVar7 == (uVar9 & 0xffff)) {
      if (uVar26 <= uVar11) {
        puVar15 = &UNK_10b236260;
        auVar53 = func_0x000108a07bdc(uVar11,uVar26);
        lVar13 = auVar53._8_8_;
        puVar12 = auVar53._0_8_;
        puVar14 = *(undefined **)(lVar13 + 0x50);
        if (puVar14 <= puVar15) {
          func_0x000108a07bdc(puVar15,puVar14,&UNK_10b2361d0);
          puVar21 = extraout_x9;
          puVar25 = extraout_x13;
          goto LAB_100ea2648;
        }
        lVar27 = *(long *)(lVar13 + 0x48);
        *(undefined4 *)(lVar27 + (long)puVar15 * 4) = 0xffff;
        uVar26 = *(ulong *)(lVar13 + 0x28);
        if (uVar26 <= CONCAT44(uVar17,uVar16)) {
          func_0x0001087c8ff8(CONCAT44(uVar17,uVar16),uVar26);
          puVar25 = extraout_x8;
          puVar14 = extraout_x1;
          goto LAB_100ea2620;
        }
        piVar23 = (int *)(*(long *)(lVar13 + 0x20) + CONCAT44(uVar17,uVar16) * 0x68);
        uVar38 = *(undefined8 *)(piVar23 + 6);
        uVar35 = *(undefined8 *)(piVar23 + 4);
        uVar32 = *(undefined8 *)(piVar23 + 10);
        uVar29 = *(undefined8 *)(piVar23 + 8);
        uVar44 = *(undefined8 *)(piVar23 + 2);
        uVar41 = *(undefined8 *)piVar23;
        uVar39 = *(undefined8 *)(piVar23 + 0x12);
        uVar36 = *(undefined8 *)(piVar23 + 0x10);
        uVar33 = *(undefined8 *)(piVar23 + 0x16);
        uVar30 = *(undefined8 *)(piVar23 + 0x14);
        uVar22 = *(undefined8 *)(piVar23 + 0x18);
        uVar45 = *(undefined8 *)(piVar23 + 0xe);
        uVar42 = *(undefined8 *)(piVar23 + 0xc);
        uVar26 = uVar26 - 1;
        puVar20 = (undefined8 *)(*(long *)(lVar13 + 0x20) + uVar26 * 0x68);
        uVar34 = puVar20[1];
        uVar31 = *puVar20;
        uVar40 = puVar20[3];
        uVar37 = puVar20[2];
        uVar46 = puVar20[5];
        uVar43 = puVar20[4];
        uVar48 = puVar20[7];
        uVar47 = puVar20[6];
        uVar50 = puVar20[9];
        uVar49 = puVar20[8];
        uVar52 = puVar20[0xb];
        uVar51 = puVar20[10];
        *(undefined8 *)(piVar23 + 0x18) = puVar20[0xc];
        *(undefined8 *)(piVar23 + 0x12) = uVar50;
        *(undefined8 *)(piVar23 + 0x10) = uVar49;
        *(undefined8 *)(piVar23 + 0x16) = uVar52;
        *(undefined8 *)(piVar23 + 0x14) = uVar51;
        *(undefined8 *)(piVar23 + 10) = uVar46;
        *(undefined8 *)(piVar23 + 8) = uVar43;
        *(undefined8 *)(piVar23 + 0xe) = uVar48;
        *(undefined8 *)(piVar23 + 0xc) = uVar47;
        *(undefined8 *)(piVar23 + 2) = uVar34;
        *(undefined8 *)piVar23 = uVar31;
        *(undefined8 *)(piVar23 + 6) = uVar40;
        *(undefined8 *)(piVar23 + 4) = uVar37;
        *(ulong *)(lVar13 + 0x28) = uVar26;
        if (CONCAT44(uVar17,uVar16) < uVar26) {
          uVar6 = *(ushort *)(piVar23 + 0x18);
          puVar21 = (undefined *)(ulong)(uVar6 & *(ushort *)(lVar13 + 0x58));
          while( true ) {
            do {
              puVar25 = puVar21;
              puVar21 = (undefined *)0x0;
            } while (puVar14 <= puVar25);
            uVar28 = (ulong)*(ushort *)(lVar27 + (long)puVar25 * 4);
            if (uVar28 != 0xffff && uVar26 <= uVar28) break;
            puVar21 = puVar25 + 1;
          }
          puVar2 = (undefined2 *)(lVar27 + (long)puVar25 * 4);
          *puVar2 = (short)uVar16;
          puVar2[1] = uVar6;
          if (*piVar23 == 1) {
            puVar25 = *(undefined **)(piVar23 + 2);
            puVar21 = *(undefined **)(lVar13 + 0x40);
            if (puVar21 <= puVar25) {
LAB_100ea2648:
              puVar15 = puVar25;
              puVar25 = &UNK_10b2361e8;
              puVar14 = puVar21;
              goto LAB_100ea2620;
            }
            puVar24 = *(undefined **)(piVar23 + 4);
            lVar19 = *(long *)(lVar13 + 0x38);
            puVar20 = (undefined8 *)(lVar19 + (long)puVar25 * 0x48);
            *puVar20 = 0;
            puVar20[1] = CONCAT44(uVar17,uVar16);
            if (puVar21 <= puVar24) {
              puVar25 = &UNK_10b236200;
              puVar15 = puVar24;
              puVar14 = puVar21;
              goto LAB_100ea2620;
            }
            lVar19 = lVar19 + (long)puVar24 * 0x48;
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(ulong *)(lVar19 + 0x18) = CONCAT44(uVar17,uVar16);
          }
        }
        if (uVar26 != 0) {
          uVar6 = *(ushort *)(lVar13 + 0x58);
          puVar25 = &UNK_10b236218;
          while( true ) {
            puVar21 = (undefined *)0x0;
            if (puVar15 + 1 < puVar14) {
              puVar21 = puVar15 + 1;
            }
            psVar3 = (short *)(lVar27 + (long)puVar21 * 4);
            if ((*psVar3 == -1) ||
               (uVar7 = psVar3[1], ((int)puVar21 - (uint)(uVar7 & uVar6) & (uint)uVar6) == 0))
            break;
            if (puVar14 <= puVar15) {
LAB_100ea2620:
              func_0x000108a07bdc(puVar15,puVar14,puVar25);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100ea2634);
              (*pcVar8)();
            }
            psVar4 = (short *)(lVar27 + (long)puVar15 * 4);
            *psVar4 = *psVar3;
            psVar4[1] = uVar7;
            *psVar3 = -1;
            psVar3[1] = 0;
            puVar15 = puVar21;
          }
        }
        puVar12[9] = uVar39;
        puVar12[8] = uVar36;
        puVar12[0xb] = uVar33;
        puVar12[10] = uVar30;
        puVar12[0xc] = uVar22;
        puVar12[1] = uVar44;
        *puVar12 = uVar41;
        puVar12[3] = uVar38;
        puVar12[2] = uVar35;
        puVar12[5] = uVar32;
        puVar12[4] = uVar29;
        puVar12[7] = uVar45;
        puVar12[6] = uVar42;
        return puVar12;
      }
      lVar19 = lVar27 + uVar11 * 0x68;
      if ((*(long *)(lVar19 + 0x40) != 0) != (*param_2 == 0)) {
        if (*(long *)(lVar19 + 0x40) == 0) {
          if (*(char *)(lVar19 + 0x48) == (char)param_2[1]) {
            return (undefined8 *)0x1;
          }
        }
        else if ((*(long *)(lVar19 + 0x50) == param_2[2]) &&
                (iVar10 = _memcmp(*(undefined8 *)(lVar19 + 0x48),param_2[1]), iVar10 == 0)) {
          return (undefined8 *)0x1;
        }
      }
    }
    uVar28 = uVar28 + 1;
    uVar18 = uVar18 + 1;
  } while( true );
}

