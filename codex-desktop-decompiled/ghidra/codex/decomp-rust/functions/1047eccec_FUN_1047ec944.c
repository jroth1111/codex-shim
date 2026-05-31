
undefined8 * FUN_1047ec944(undefined8 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  short *psVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ushort *puVar22;
  ulong uVar23;
  short *psVar24;
  short *psVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  int aiStack_1a8 [2];
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  long *plStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 **ppuStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long *plStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  uVar28 = *(ulong *)(param_2 + 0x28);
  puStack_d0 = param_1;
  if (uVar28 == 0) {
LAB_1047ecb24:
    *(undefined1 *)(puStack_d0 + 4) = 2;
    return param_1;
  }
  lStack_d8 = param_2;
  param_1 = (undefined8 *)FUN_1047eb5ec(param_2,param_3);
  uVar29 = 0;
  uVar9 = (uint)param_1 & 0xffff;
  uVar5 = *(ushort *)(param_2 + 0x58);
  uVar15 = (ulong)(uVar5 & uVar9);
  lVar2 = *(long *)(param_2 + 0x48);
  uVar4 = *(ulong *)(param_2 + 0x50);
  lVar13 = *(long *)(param_2 + 0x20);
  do {
    if ((uVar4 <= uVar15) && (uVar15 = 0, uVar4 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar22 = (ushort *)(lVar2 + uVar15 * 4);
    uVar27 = (ulong)*puVar22;
    if ((uVar27 == 0xffff) ||
       (uVar6 = puVar22[1], ((ulong)((int)uVar15 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar29))
    goto LAB_1047ecb24;
    if (uVar6 == uVar9) {
      if (uVar28 <= uVar27) {
        plVar14 = (long *)&UNK_10b3331a8;
        auVar30 = func_0x000108a07bdc(uVar27,uVar28);
        lVar13 = auVar30._8_8_;
        puStack_148 = auVar30._0_8_;
        uStack_100 = 0xffff;
        uStack_e8 = 0x1047ecb64;
        uVar26 = *(ulong *)(lVar13 + 0x28);
        if (uVar26 == 0) {
          uVar19 = 0;
          goto LAB_1047eccb0;
        }
        uStack_140 = (ulong)uVar5;
        uStack_138 = (ulong)uVar9;
        uStack_130 = uVar29;
        lStack_128 = lVar2;
        plStack_120 = param_3;
        uStack_118 = uVar28;
        uStack_110 = uVar27;
        uStack_108 = uVar15;
        uStack_f8 = uVar4;
        puStack_f0 = &stack0xfffffffffffffff0;
        uVar9 = FUN_1047eb5ec(lVar13,plVar14);
        uVar29 = 0;
        uVar5 = *(ushort *)(lVar13 + 0x58);
        uVar15 = (ulong)((uint)uVar5 & uVar9 & 0xffff);
        lVar2 = *(long *)(lVar13 + 0x48);
        uVar4 = *(ulong *)(lVar13 + 0x50);
        lVar16 = *(long *)(lVar13 + 0x20);
        break;
      }
      lVar16 = lVar13 + uVar27 * 0x68;
      if ((*(long *)(lVar16 + 0x40) != 0) != (*param_3 == 0)) {
        if (*(long *)(lVar16 + 0x40) == 0) {
          if (*(char *)(lVar16 + 0x48) == (char)param_3[1]) {
LAB_1047eca5c:
            lVar2 = lStack_d8;
            piVar17 = (int *)(lVar13 + uVar27 * 0x68);
            if (*piVar17 == 1) {
              FUN_1047ed024(auStack_c8,lVar13,uVar28,lStack_d8 + 0x30,*(undefined8 *)(piVar17 + 2));
              if (uStack_b8 == 1) {
                do {
                  uVar19 = uStack_b0;
                  (**(code **)(lStack_a8 + 0x20))(&uStack_90,uStack_a0,uStack_98);
                  FUN_1047ed024(auStack_c8,*(undefined8 *)(lVar2 + 0x20),
                                *(undefined8 *)(lVar2 + 0x28),lVar2 + 0x30,uVar19);
                } while ((uStack_b8 & 1) != 0);
              }
              (**(code **)(lStack_a8 + 0x20))(&uStack_90,uStack_a0,uStack_98);
            }
            puVar11 = (undefined8 *)FUN_1047ebcd0(auStack_c8,lVar2,uVar15,uVar27);
            puStack_d0[1] = lStack_a8;
            *puStack_d0 = uStack_b0;
            puStack_d0[3] = uStack_98;
            puStack_d0[2] = uStack_a0;
            puStack_d0[4] = uStack_90;
            if (lStack_88 == 0) {
              return puVar11;
            }
            puVar11 = (undefined8 *)(**(code **)(lStack_88 + 0x20))(auStack_70,uStack_80,uStack_78);
            return puVar11;
          }
        }
        else if ((*(long *)(lVar16 + 0x50) == param_3[2]) &&
                (lStack_e0 = lVar13,
                param_1 = (undefined8 *)_memcmp(*(undefined8 *)(lVar16 + 0x48),param_3[1]),
                lVar13 = lStack_e0, (int)param_1 == 0)) goto LAB_1047eca5c;
      }
    }
    uVar29 = uVar29 + 1;
    uVar15 = uVar15 + 1;
  } while( true );
LAB_1047ecbe0:
  if ((uVar4 <= uVar15) && (uVar15 = 0, uVar4 == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar22 = (ushort *)(lVar2 + uVar15 * 4);
  uVar28 = (ulong)*puVar22;
  if ((uVar28 == 0xffff) ||
     (uVar6 = puVar22[1], ((ulong)((int)uVar15 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar29)) {
    uVar19 = 0;
    goto LAB_1047eccb0;
  }
  if ((uint)uVar6 == (uVar9 & 0xffff)) {
    if (uVar26 <= uVar28) {
      auVar30 = func_0x000108a07bdc(uVar28,uVar26,&UNK_10b3331a8);
      uVar29 = auVar30._8_8_;
      lVar16 = auVar30._0_8_;
      uStack_158 = 0x1047eccec;
      if (0x8000 < uVar29) goto LAB_1047ece70;
      psVar3 = *(short **)(lVar16 + 0x48);
      uVar4 = *(ulong *)(lVar16 + 0x50);
      if (uVar4 == 0) goto LAB_1047ecda4;
      uVar27 = 0;
      lVar18 = uVar4 << 2;
      puVar22 = (ushort *)(psVar3 + 1);
      goto LAB_1047ecd3c;
    }
    lVar18 = lVar16 + uVar28 * 0x68;
    if ((*(long *)(lVar18 + 0x40) != 0) != (*plVar14 == 0)) {
      if (*(long *)(lVar18 + 0x40) == 0) {
        if (*(char *)(lVar18 + 0x48) == (char)plVar14[1]) {
LAB_1047ecc90:
          uVar19 = 1;
LAB_1047eccb0:
          puStack_148[1] = uVar28;
          puStack_148[2] = lVar13;
          *puStack_148 = uVar19;
          return puStack_148;
        }
      }
      else if ((*(long *)(lVar18 + 0x50) == plVar14[2]) &&
              (uStack_150 = uVar26, iVar10 = _memcmp(*(undefined8 *)(lVar18 + 0x48),plVar14[1]),
              uVar26 = uStack_150, iVar10 == 0)) goto LAB_1047ecc90;
    }
  }
  uVar29 = uVar29 + 1;
  uVar15 = uVar15 + 1;
  goto LAB_1047ecbe0;
  while( true ) {
    puVar22 = puVar22 + 2;
    uVar27 = uVar27 + 1;
    lVar18 = lVar18 + -4;
    if (lVar18 == 0) break;
LAB_1047ecd3c:
    if ((puVar22[-1] != 0xffff) &&
       (((int)uVar27 - (uint)(*puVar22 & *(ushort *)(lVar16 + 0x58)) &
        (uint)*(ushort *)(lVar16 + 0x58)) == 0)) goto joined_r0x0001047ecd5c;
  }
LAB_1047ecda4:
  uVar27 = 0;
joined_r0x0001047ecd5c:
  lStack_190 = lVar2;
  uStack_188 = uVar28;
  plStack_180 = plVar14;
  uStack_178 = uVar26;
  lStack_170 = lVar13;
  uStack_168 = uVar15;
  ppuStack_160 = &puStack_f0;
  if (uVar29 == 0) {
    puVar12 = (undefined4 *)0x2;
    *(undefined8 *)(lVar16 + 0x48) = 2;
    *(undefined8 *)(lVar16 + 0x50) = 0;
    *(undefined2 *)(lVar16 + 0x58) = 0xffff;
    lVar2 = lStack_198;
joined_r0x0001047ecd9c:
    if (uVar4 < uVar27) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar27,uVar4,uVar4,&UNK_10b3331c0)
      ;
      goto LAB_1047ecff4;
    }
    uVar9 = auVar30._8_4_ - 1;
    psVar1 = psVar3 + uVar27 * 2;
    if (uVar27 != uVar4) {
      psVar7 = psVar1 + 2;
      psVar25 = psVar1;
      do {
        psVar24 = psVar7;
        if (*psVar25 != -1) {
          uVar5 = psVar25[1];
          uVar28 = (ulong)(uVar5 & uVar9);
          while( true ) {
            do {
              uVar15 = uVar28;
              uVar28 = 0;
            } while (uVar29 <= uVar15);
            if (*(short *)(puVar12 + uVar15) == -1) break;
            uVar28 = uVar15 + 1;
          }
          *(short *)(puVar12 + uVar15) = *psVar25;
          *(ushort *)((long)(puVar12 + uVar15) + 2) = uVar5;
        }
        lVar13 = 0;
        if (psVar24 != psVar3 + uVar4 * 2) {
          lVar13 = 4;
        }
        psVar7 = (short *)((long)psVar24 + lVar13);
        psVar25 = psVar24;
      } while (psVar24 != psVar3 + uVar4 * 2);
    }
    if (uVar27 != 0) {
      psVar7 = psVar3 + 2;
      psVar25 = psVar3;
      do {
        psVar24 = psVar7;
        if (*psVar25 != -1) {
          uVar5 = psVar25[1];
          uVar28 = (ulong)(uVar5 & uVar9);
          while( true ) {
            do {
              uVar15 = uVar28;
              uVar28 = 0;
            } while (uVar29 <= uVar15);
            if (*(short *)(puVar12 + uVar15) == -1) break;
            uVar28 = uVar15 + 1;
          }
          *(short *)(puVar12 + uVar15) = *psVar25;
          *(ushort *)((long)(puVar12 + uVar15) + 2) = uVar5;
        }
        lVar13 = 0;
        if (psVar24 != psVar1) {
          lVar13 = 4;
        }
        psVar7 = (short *)((long)psVar24 + lVar13);
        psVar25 = psVar24;
      } while (psVar24 != psVar1);
    }
    uVar28 = *(ulong *)(lVar16 + 0x28);
    uVar15 = uVar29 - (uVar28 + (uVar29 >> 2));
    lStack_198 = *(long *)(lVar16 + 0x18);
    if (uVar15 <= lStack_198 - uVar28) {
joined_r0x0001047ece64:
      if (uVar4 != 0) {
        _free(psVar3);
      }
LAB_1047ece70:
      return (undefined8 *)(ulong)(0x8000 < uVar29);
    }
    if (CARRY8(uVar15,uVar28)) {
      uStack_1a0 = 0;
    }
    else {
      func_0x00010899eab8(aiStack_1a8,lStack_198,*(undefined8 *)(lVar16 + 0x20),uVar15 + uVar28,8,
                          0x68);
      lStack_198 = lVar2;
      if (aiStack_1a8[0] != 1) {
        *(ulong *)(lVar16 + 0x18) = uVar15 + uVar28;
        *(undefined8 *)(lVar16 + 0x20) = uStack_1a0;
        goto joined_r0x0001047ece64;
      }
    }
  }
  else {
    puVar12 = (undefined4 *)_malloc(uVar29 << 2);
    if (puVar12 != (undefined4 *)0x0) {
      uVar28 = uVar29 - 1;
      lVar2 = lStack_198;
      if (uVar28 == 0) {
        *puVar12 = 0xffff;
        *(undefined4 **)(lVar16 + 0x48) = puVar12;
        *(ulong *)(lVar16 + 0x50) = uVar29;
        *(short *)(lVar16 + 0x58) = auVar30._8_2_ + -1;
        goto joined_r0x0001047ecd9c;
      }
      if (uVar29 < 0x21) {
        uVar26 = 1;
        puVar21 = puVar12;
LAB_1047ecf58:
        lVar13 = uVar29 - uVar26;
        puVar20 = puVar21;
        do {
          puVar21 = puVar20 + 1;
          *puVar20 = 0xffff;
          lVar13 = lVar13 + -1;
          puVar20 = puVar21;
        } while (lVar13 != 0);
      }
      else {
        uVar23 = uVar28 & 0xffffffffffffffe0;
        puVar21 = puVar12 + uVar23;
        uVar26 = uVar23 | 1;
        puVar11 = (undefined8 *)(puVar12 + 0x10);
        uVar15 = uVar23;
        do {
          puVar11[-7] = 0xffff0000ffff;
          puVar11[-8] = 0xffff0000ffff;
          puVar11[-5] = 0xffff0000ffff;
          puVar11[-6] = 0xffff0000ffff;
          puVar11[-3] = 0xffff0000ffff;
          puVar11[-4] = 0xffff0000ffff;
          puVar11[-1] = 0xffff0000ffff;
          puVar11[-2] = 0xffff0000ffff;
          puVar11[1] = 0xffff0000ffff;
          *puVar11 = 0xffff0000ffff;
          puVar11[3] = 0xffff0000ffff;
          puVar11[2] = 0xffff0000ffff;
          puVar11[5] = 0xffff0000ffff;
          puVar11[4] = 0xffff0000ffff;
          puVar11[7] = 0xffff0000ffff;
          puVar11[6] = 0xffff0000ffff;
          puVar11 = puVar11 + 0x10;
          uVar15 = uVar15 - 0x20;
        } while (uVar15 != 0);
        if (uVar28 != uVar23) goto LAB_1047ecf58;
      }
      *(undefined2 *)puVar21 = 0xffff;
      *(undefined2 *)((long)puVar21 + 2) = 0;
      *(undefined4 **)(lVar16 + 0x48) = puVar12;
      *(ulong *)(lVar16 + 0x50) = uVar29;
      *(short *)(lVar16 + 0x58) = auVar30._8_2_ + -1;
      goto joined_r0x0001047ecd9c;
    }
    func_0x0001087c9084(2,uVar29 << 2);
  }
  func_0x0001087c9084(uStack_1a0,lStack_198);
LAB_1047ecff4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1047ecff8);
  (*pcVar8)();
}

