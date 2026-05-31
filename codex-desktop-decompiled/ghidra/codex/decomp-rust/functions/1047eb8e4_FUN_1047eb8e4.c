
void FUN_1047eb8e4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  short *psVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  code *pcVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *extraout_x1;
  undefined *puVar17;
  long *plVar18;
  undefined1 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *extraout_x8;
  long *plVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *extraout_x9;
  long lVar26;
  int *piVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *extraout_x13;
  long lVar30;
  uint uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
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
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined3 uStack_9b;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar12 = FUN_1047ec048(param_2);
  if (iVar12 != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001047eb96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
  uVar11 = FUN_1047eb5ec(param_2,param_3);
  uVar33 = 0;
  uVar7 = *(ushort *)(param_2 + 0xb);
  uVar20 = (ulong)(uVar7 & uVar11);
  lVar22 = param_2[9];
  uVar13 = param_2[10];
  lVar26 = param_2[4];
  uVar5 = param_2[5];
  lVar30 = *param_3;
  lVar6 = param_3[1];
  lVar9 = param_3[1];
  lVar34 = param_3[2];
  do {
    if ((uVar13 <= uVar20) && (uVar20 = 0, uVar13 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar22 + uVar20 * 4);
    uVar35 = (ulong)*puVar1;
    if (uVar35 == 0xffff) {
      lStack_b8 = param_3[1];
      lStack_c0 = *param_3;
      lStack_a8 = param_3[3];
      lStack_b0 = param_3[2];
      lStack_88 = param_4[1];
      lStack_90 = *param_4;
      lStack_78 = param_4[3];
      lStack_80 = param_4[2];
      lStack_70 = param_4[4];
      plVar18 = &lStack_90;
      iVar12 = func_0x0001047ec3bc(param_2,uVar11,&lStack_c0);
      if (iVar12 != 0) {
LAB_1047ebb98:
        uVar19 = 3;
        goto LAB_1047ebba0;
      }
      if (uVar20 < (ulong)param_2[10]) {
        puVar2 = (undefined2 *)(param_2[9] + uVar20 * 4);
        *puVar2 = (short)uVar5;
        puVar2[1] = uVar11;
        goto LAB_1047ebb40;
      }
      puVar17 = &UNK_10b333100;
      uVar14 = func_0x000108a07bdc(uVar20);
      if (*param_3 != 0) {
        puVar17 = (undefined *)param_3[2];
        (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1]);
      }
      __Unwind_Resume(uVar14);
      auVar60 = func_0x000108a07bc4();
      lVar22 = auVar60._8_8_;
      puVar15 = auVar60._0_8_;
      puVar16 = *(undefined **)(lVar22 + 0x50);
      if (puVar16 <= puVar17) {
        func_0x000108a07bdc(puVar17,puVar16,&UNK_10b333118);
        puVar25 = extraout_x9;
        puVar29 = extraout_x13;
        goto LAB_1047ebecc;
      }
      lVar26 = *(long *)(lVar22 + 0x48);
      *(undefined4 *)(lVar26 + (long)puVar17 * 4) = 0xffff;
      plVar23 = *(long **)(lVar22 + 0x28);
      if (plVar18 < plVar23) {
        piVar27 = (int *)(*(long *)(lVar22 + 0x20) + (long)plVar18 * 0x68);
        uVar45 = *(undefined8 *)(piVar27 + 6);
        uVar42 = *(undefined8 *)(piVar27 + 4);
        uVar39 = *(undefined8 *)(piVar27 + 10);
        uVar36 = *(undefined8 *)(piVar27 + 8);
        uVar51 = *(undefined8 *)(piVar27 + 2);
        uVar48 = *(undefined8 *)piVar27;
        uVar46 = *(undefined8 *)(piVar27 + 0x12);
        uVar43 = *(undefined8 *)(piVar27 + 0x10);
        uVar40 = *(undefined8 *)(piVar27 + 0x16);
        uVar37 = *(undefined8 *)(piVar27 + 0x14);
        uVar14 = *(undefined8 *)(piVar27 + 0x18);
        uVar52 = *(undefined8 *)(piVar27 + 0xe);
        uVar49 = *(undefined8 *)(piVar27 + 0xc);
        plVar23 = (long *)((long)plVar23 + -1);
        puVar24 = (undefined8 *)(*(long *)(lVar22 + 0x20) + (long)plVar23 * 0x68);
        uVar41 = puVar24[1];
        uVar38 = *puVar24;
        uVar47 = puVar24[3];
        uVar44 = puVar24[2];
        uVar53 = puVar24[5];
        uVar50 = puVar24[4];
        uVar55 = puVar24[7];
        uVar54 = puVar24[6];
        uVar57 = puVar24[9];
        uVar56 = puVar24[8];
        uVar59 = puVar24[0xb];
        uVar58 = puVar24[10];
        *(undefined8 *)(piVar27 + 0x18) = puVar24[0xc];
        *(undefined8 *)(piVar27 + 0x12) = uVar57;
        *(undefined8 *)(piVar27 + 0x10) = uVar56;
        *(undefined8 *)(piVar27 + 0x16) = uVar59;
        *(undefined8 *)(piVar27 + 0x14) = uVar58;
        *(undefined8 *)(piVar27 + 10) = uVar53;
        *(undefined8 *)(piVar27 + 8) = uVar50;
        *(undefined8 *)(piVar27 + 0xe) = uVar55;
        *(undefined8 *)(piVar27 + 0xc) = uVar54;
        *(undefined8 *)(piVar27 + 2) = uVar41;
        *(undefined8 *)piVar27 = uVar38;
        *(undefined8 *)(piVar27 + 6) = uVar47;
        *(undefined8 *)(piVar27 + 4) = uVar44;
        *(long **)(lVar22 + 0x28) = plVar23;
        if (plVar18 < plVar23) {
          uVar7 = *(ushort *)(piVar27 + 0x18);
          puVar25 = (undefined *)(ulong)(uVar7 & *(ushort *)(lVar22 + 0x58));
          while( true ) {
            do {
              puVar29 = puVar25;
              puVar25 = (undefined *)0x0;
            } while (puVar16 <= puVar29);
            plVar32 = (long *)(ulong)*(ushort *)(lVar26 + (long)puVar29 * 4);
            if (plVar32 != (long *)0xffff && plVar23 <= plVar32) break;
            puVar25 = puVar29 + 1;
          }
          puVar2 = (undefined2 *)(lVar26 + (long)puVar29 * 4);
          *puVar2 = (short)plVar18;
          puVar2[1] = uVar7;
          if (*piVar27 == 1) {
            puVar29 = *(undefined **)(piVar27 + 2);
            puVar25 = *(undefined **)(lVar22 + 0x40);
            if (puVar25 <= puVar29) {
LAB_1047ebecc:
              puVar17 = puVar29;
              puVar29 = &UNK_10b333130;
              puVar16 = puVar25;
              goto LAB_1047ebea4;
            }
            puVar28 = *(undefined **)(piVar27 + 4);
            lVar30 = *(long *)(lVar22 + 0x38);
            puVar24 = (undefined8 *)(lVar30 + (long)puVar29 * 0x48);
            *puVar24 = 0;
            puVar24[1] = plVar18;
            if (puVar25 <= puVar28) {
              puVar29 = &UNK_10b333148;
              puVar17 = puVar28;
              puVar16 = puVar25;
              goto LAB_1047ebea4;
            }
            lVar30 = lVar30 + (long)puVar28 * 0x48;
            *(undefined8 *)(lVar30 + 0x10) = 0;
            *(long **)(lVar30 + 0x18) = plVar18;
          }
        }
        if (plVar23 != (long *)0x0) {
          uVar7 = *(ushort *)(lVar22 + 0x58);
          puVar29 = &UNK_10b333160;
          while( true ) {
            puVar25 = (undefined *)0x0;
            if (puVar17 + 1 < puVar16) {
              puVar25 = puVar17 + 1;
            }
            psVar3 = (short *)(lVar26 + (long)puVar25 * 4);
            if ((*psVar3 == -1) ||
               (uVar11 = psVar3[1], ((int)puVar25 - (uint)(uVar11 & uVar7) & (uint)uVar7) == 0))
            break;
            if (puVar16 <= puVar17) {
LAB_1047ebea4:
              func_0x000108a07bdc(puVar17,puVar16,puVar29);
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1047ebeb8);
              (*pcVar10)();
            }
            psVar4 = (short *)(lVar26 + (long)puVar17 * 4);
            *psVar4 = *psVar3;
            psVar4[1] = uVar11;
            *psVar3 = -1;
            psVar3[1] = 0;
            puVar17 = puVar25;
          }
        }
        puVar15[9] = uVar46;
        puVar15[8] = uVar43;
        puVar15[0xb] = uVar40;
        puVar15[10] = uVar37;
        puVar15[0xc] = uVar14;
        puVar15[1] = uVar51;
        *puVar15 = uVar48;
        puVar15[3] = uVar45;
        puVar15[2] = uVar42;
        puVar15[5] = uVar39;
        puVar15[4] = uVar36;
        puVar15[7] = uVar52;
        puVar15[6] = uVar49;
        return;
      }
      func_0x0001087c8ff8(plVar18,plVar23);
      puVar29 = extraout_x8;
      puVar16 = extraout_x1;
      goto LAB_1047ebea4;
    }
    uVar8 = puVar1[1];
    if (((ulong)((int)uVar20 - (uint)(uVar8 & uVar7)) & (ulong)uVar7) < uVar33) {
      lVar22 = *param_2;
      lStack_b8 = param_3[1];
      lStack_c0 = *param_3;
      lStack_a8 = param_3[3];
      lStack_b0 = param_3[2];
      lStack_88 = param_4[1];
      lStack_90 = *param_4;
      lStack_78 = param_4[3];
      lStack_80 = param_4[2];
      lStack_70 = param_4[4];
      uVar13 = func_0x0001047ec3bc(param_2,uVar11,&lStack_c0,&lStack_90);
      if ((uVar13 & 1) != 0) goto LAB_1047ebb98;
      uVar13 = 0;
      lVar26 = param_2[9];
      uVar35 = param_2[10];
      uVar31 = (uint)uVar5 & 0xffff;
      while( true ) {
        uVar7 = (ushort)uVar31;
        if ((uVar35 <= uVar20) && (uVar20 = 0, uVar35 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar1 = (ushort *)(lVar26 + uVar20 * 4);
        uVar31 = (uint)*puVar1;
        if (uVar31 == 0xffff) break;
        uVar13 = uVar13 + 1;
        uVar8 = puVar1[1];
        *puVar1 = uVar7;
        puVar1[1] = uVar11;
        uVar20 = uVar20 + 1;
        uVar11 = uVar8;
      }
      *puVar1 = uVar7;
      puVar1[1] = uVar11;
      if ((0x7f < uVar13 || 0x1ff < uVar33 && lVar22 != 2) && (*param_2 == 0)) {
        *param_2 = 1;
      }
LAB_1047ebb40:
      uVar19 = 2;
LAB_1047ebba0:
      *(undefined1 *)(param_1 + 4) = uVar19;
      return;
    }
    if (uVar8 == uVar11) {
      if (uVar5 <= uVar35) {
        func_0x000108a07bdc(uVar35,uVar5,&UNK_10b3330e8);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1047ebc68);
        (*pcVar10)();
      }
      lVar21 = lVar26 + uVar35 * 0x68;
      if ((lVar30 == 0) != (*(long *)(lVar21 + 0x40) != 0)) {
        if (*(long *)(lVar21 + 0x40) == 0) {
          if (*(char *)(lVar21 + 0x48) == (char)lVar9) {
LAB_1047eba7c:
            lStack_88 = param_4[1];
            lStack_90 = *param_4;
            lStack_78 = param_4[3];
            lStack_80 = param_4[2];
            lStack_70 = param_4[4];
            FUN_1047ebf04(&lStack_c0,param_2,uVar35,&lStack_90);
            param_1[1] = lStack_b8;
            *param_1 = lStack_c0;
            param_1[3] = lStack_a8;
            param_1[2] = lStack_b0;
            *(undefined4 *)((long)param_1 + 0x21) = uStack_9f;
            *(uint *)((long)param_1 + 0x24) = CONCAT31(uStack_9b,uStack_9f._3_1_);
            *(undefined1 *)(param_1 + 4) = uStack_a0;
            if (*param_3 == 0) {
              return;
            }
            (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
            return;
          }
        }
        else if ((*(long *)(lVar21 + 0x50) == lVar34) &&
                (iVar12 = _memcmp(*(undefined8 *)(lVar21 + 0x48),lVar6,lVar34), iVar12 == 0))
        goto LAB_1047eba7c;
      }
    }
    uVar33 = uVar33 + 1;
    uVar20 = uVar20 + 1;
  } while( true );
}

