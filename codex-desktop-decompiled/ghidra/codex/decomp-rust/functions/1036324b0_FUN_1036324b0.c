
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1036324b0(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  long extraout_x1;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  byte bVar19;
  ulong extraout_x9;
  ulong uVar20;
  ulong uVar21;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long lVar22;
  ulong extraout_x10;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  char *pcVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  undefined8 unaff_x30;
  undefined1 auVar32 [16];
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  if (*param_2 == 1) {
    lVar10 = *(long *)(param_2 + 0x12);
    uVar15 = *(ulong *)(param_2 + 0x14);
    lVar22 = *(long *)(param_2 + 0x16);
    uVar14 = *(ulong *)(param_2 + 0x18);
    bVar8 = *(long *)(param_2 + 0xe) == -1;
    uVar16 = (ulong)bVar8;
    uVar17 = *(long *)(param_2 + 10) + (uVar14 - 1);
    if (uVar15 <= uVar17) {
LAB_1033f6a90:
      uVar18 = 0;
      *(ulong *)(param_2 + 10) = uVar15;
LAB_1033f6ab4:
      *param_1 = uVar18;
      return param_1;
    }
    uVar23 = *(ulong *)(param_2 + 2);
    uVar25 = *(ulong *)(param_2 + 0xe);
    lVar28 = *(long *)(param_2 + 10);
LAB_1033f69c8:
    if ((*(ulong *)(param_2 + 8) >> ((ulong)*(byte *)(lVar10 + uVar17) & 0x3f) & 1) != 0) {
      uVar17 = uVar25;
      if (uVar25 <= uVar23) {
        uVar17 = uVar23;
      }
      uVar24 = uVar23;
      if (!bVar8) {
        uVar24 = uVar17;
      }
      uVar17 = uVar24 + lVar28;
      lVar30 = uVar17 - uVar23;
      pcVar27 = (char *)(lVar22 + uVar24);
      lVar29 = 0;
      if (uVar24 <= uVar14) {
        lVar29 = uVar14 - uVar24;
      }
      do {
        if (lVar29 == 0) {
          uVar24 = uVar23;
          uVar17 = 0;
          if (!bVar8) {
            uVar17 = uVar25;
          }
          goto LAB_1033f6a4c;
        }
        if (uVar15 <= uVar17) {
          uVar17 = uVar15;
          if (uVar15 <= uVar24 + lVar28) {
            uVar17 = uVar24 + lVar28;
          }
          func_0x000108a07bdc(uVar17,uVar15,&UNK_10b2c0d18);
          uVar26 = extraout_x9;
          goto LAB_1033f6ae4;
        }
        cVar4 = *pcVar27;
        pcVar1 = (char *)(lVar10 + uVar17);
        lVar30 = lVar30 + 1;
        uVar17 = uVar17 + 1;
        pcVar27 = pcVar27 + 1;
        lVar29 = lVar29 + -1;
      } while (cVar4 == *pcVar1);
      *(long *)(param_2 + 10) = lVar30;
      if (bVar8) goto LAB_1033f69b8;
LAB_1033f6a38:
      uVar17 = 0;
      goto LAB_1033f69b0;
    }
    lVar30 = lVar28 + uVar14;
    *(long *)(param_2 + 10) = lVar30;
    if (!bVar8) goto LAB_1033f6a38;
    goto LAB_1033f69b8;
  }
  if ((*(byte *)((long)param_2 + 0x1a) & 1) != 0) {
    *param_1 = 0;
    return param_1;
  }
  uVar17 = *(ulong *)(param_2 + 2);
  lVar10 = *(long *)(param_2 + 0x12);
  uVar15 = *(ulong *)(param_2 + 0x14);
  bVar19 = *(byte *)(param_2 + 6);
  if (uVar17 == 0) {
LAB_103632520:
    if (uVar17 == uVar15) {
      *(byte *)(param_2 + 6) = (bVar19 ^ 0xff) & 1;
      if ((bVar19 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x1a) = 1;
        *param_1 = 0;
        return param_1;
      }
      goto LAB_103632648;
    }
    pbVar2 = (byte *)(lVar10 + uVar17);
    uVar3 = (uint)*pbVar2;
    if ((char)*pbVar2 < '\0') {
      if (uVar3 < 0xe0) {
        uVar3 = pbVar2[1] & 0x3f | (uVar3 & 0x1f) << 6;
      }
      else {
        uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
        if (uVar3 < 0xf0) {
          uVar3 = uVar5 | (uVar3 & 0x1f) << 0xc;
        }
        else {
          uVar3 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar3 & 7) << 0x12;
        }
      }
    }
    uVar14 = uVar17;
    if ((bVar19 & 1) == 0) {
      if (uVar3 < 0x80) {
        lVar22 = 1;
      }
      else if (uVar3 < 0x800) {
        lVar22 = 2;
      }
      else {
        lVar22 = 3;
        if (0xffff < uVar3) {
          lVar22 = 4;
        }
      }
      uVar17 = lVar22 + uVar17;
      *(ulong *)(param_2 + 2) = uVar17;
      if (uVar17 != 0) {
        uVar9 = uVar17 == uVar15;
        if (uVar15 <= uVar17) goto LAB_10363261c;
        uVar9 = *(char *)(lVar10 + uVar17) == -0x40;
        if (*(char *)(lVar10 + uVar17) < -0x40) goto LAB_1036325ec;
      }
      goto LAB_103632620;
    }
  }
  else {
    puVar7 = (undefined1 *)register0x00000008;
    puVar31 = unaff_x29;
    if (uVar17 < uVar15) {
      uVar9 = *(char *)(lVar10 + uVar17) == -0x40;
      if (-0x41 < *(char *)(lVar10 + uVar17)) goto LAB_103632520;
    }
    else {
      uVar9 = 0;
      if (uVar17 == uVar15) goto LAB_103632520;
    }
    while( true ) {
      register0x00000008 = (BADSPACEBASE *)(puVar7 + -0x10);
      unaff_x29 = puVar7 + -0x10;
      *(undefined1 **)(puVar7 + -0x10) = puVar31;
      *(undefined8 *)(puVar7 + -8) = unaff_x30;
      *(byte *)(param_2 + 6) = (bVar19 ^ 0xff) & 1;
      unaff_x30 = 0x10363261c;
      auVar32 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar10,uVar15,uVar17);
      lVar10 = extraout_x8_01;
      uVar17 = extraout_x10;
LAB_10363261c:
      param_2 = auVar32._8_8_;
      if ((bool)uVar9) break;
LAB_1036325ec:
      bVar19 = 1;
      puVar7 = (undefined1 *)register0x00000008;
      puVar31 = unaff_x29;
    }
LAB_103632620:
    uVar14 = uVar15;
    if (uVar17 != uVar15) {
      uVar14 = uVar17;
    }
  }
  param_1 = auVar32._0_8_;
  *(undefined1 *)(auVar32._8_8_ + 0x18) = 0;
  uVar15 = uVar14;
LAB_103632648:
  param_1[1] = uVar15;
  param_1[2] = uVar15;
  *param_1 = 1;
  return param_1;
  while( true ) {
    uVar24 = uVar24 - 1;
    if (uVar14 <= uVar24) goto LAB_1033f6af8;
    uVar26 = uVar24 + lVar28;
    if (uVar15 <= uVar26) goto LAB_1033f6ae4;
    if (*(char *)(lVar22 + uVar24) != *(char *)(lVar10 + uVar26)) break;
LAB_1033f6a4c:
    if (uVar24 <= uVar17) {
      *(ulong *)(param_2 + 10) = lVar28 + uVar14;
      if (!bVar8) {
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      param_1[1] = lVar28;
      param_1[2] = lVar28 + uVar14;
      uVar18 = 1;
      goto LAB_1033f6ab4;
    }
  }
  lVar30 = lVar28 + *(long *)(param_2 + 6);
  *(long *)(param_2 + 10) = lVar30;
  uVar17 = uVar14 - *(long *)(param_2 + 6);
  if (!bVar8) {
LAB_1033f69b0:
    *(ulong *)(param_2 + 0xe) = uVar17;
    uVar25 = uVar17;
  }
LAB_1033f69b8:
  uVar17 = lVar30 + (uVar14 - 1);
  lVar28 = lVar30;
  if (uVar15 <= uVar17) goto LAB_1033f6a90;
  goto LAB_1033f69c8;
LAB_1033f6ae4:
  func_0x000108a07bdc(uVar26,uVar15,&UNK_10b2c0d00);
  uVar24 = extraout_x8;
LAB_1033f6af8:
  puVar13 = &UNK_10b2c0ce8;
  auVar32 = func_0x000108a07bdc(uVar24,uVar14);
  lVar10 = auVar32._8_8_;
  puVar12 = auVar32._0_8_;
  uVar17 = *(ulong *)(lVar10 + 0x28);
  uVar25 = uVar17 - uVar14;
  if (uVar15 <= uVar25) goto LAB_1033f6c48;
  uVar24 = *(ulong *)(lVar10 + 8);
  uVar23 = uVar24;
  if (uVar24 <= uVar14) {
    uVar23 = uVar14;
  }
  uVar26 = *(ulong *)(lVar10 + 0x38);
LAB_1033f6b70:
  if ((*(ulong *)(lVar10 + 0x18) >> ((ulong)(byte)puVar13[uVar25] & 0x3f) & 1) != 0) {
    uVar20 = uVar26;
    if (uVar24 <= uVar26) {
      uVar20 = uVar24;
    }
    uVar21 = uVar24;
    if ((uVar16 & 1) == 0) {
      uVar21 = uVar20;
    }
    uVar20 = uVar21 - 1;
    if (uVar14 <= uVar20) {
      if (uVar21 != 0) {
LAB_1033f6cc4:
        iVar11 = func_0x000108a07bdc(uVar20,uVar14,&UNK_10b2c0d60);
        if (iVar11 == 0) {
          return (undefined8 *)0x0;
        }
        lVar10 = **(long **)(extraout_x1 + 0x3d8);
        **(long **)(extraout_x1 + 0x3d8) = lVar10 + 1;
        if (-1 < lVar10) {
          uVar18 = *(undefined8 *)(extraout_x1 + 0x3d8);
          puVar12 = (undefined8 *)_malloc(0x18);
          if (puVar12 != (undefined8 *)0x0) {
            puVar12[1] = 1;
            *puVar12 = 1;
            puVar12[2] = uVar18;
            return puVar12;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1033f6d58);
        (*pcVar6)();
      }
LAB_1033f6be8:
      uVar20 = uVar14;
      if ((int)uVar16 == 0) {
        uVar20 = uVar26;
      }
      if (uVar20 <= uVar24) {
        uVar20 = uVar24;
      }
      uVar21 = uVar24 + uVar25;
      lVar28 = uVar20 - uVar24;
      lVar30 = uVar23 - uVar24;
      pcVar27 = (char *)(lVar22 + uVar24);
      do {
        if (lVar28 == 0) {
          *(ulong *)(lVar10 + 0x28) = uVar25;
          if ((uVar16 & 1) == 0) {
            *(ulong *)(lVar10 + 0x38) = uVar14;
          }
          puVar12[1] = uVar25;
          puVar12[2] = uVar17;
          uVar18 = 1;
          goto LAB_1033f6c68;
        }
        if (lVar30 == 0) {
LAB_1033f6c9c:
          func_0x000108a07bdc(uVar23,uVar14,&UNK_10b2c0d30);
          uVar20 = extraout_x9_00;
LAB_1033f6cb0:
          func_0x000108a07bdc(uVar20,uVar15,&UNK_10b2c0d78);
          uVar20 = extraout_x9_01;
          goto LAB_1033f6cc4;
        }
        if (uVar15 <= uVar21) {
          uVar17 = uVar15;
          if (uVar15 <= uVar25 + uVar24) {
            uVar17 = uVar25 + uVar24;
          }
          func_0x000108a07bdc(uVar17,uVar15,&UNK_10b2c0d48);
          uVar23 = extraout_x8_00;
          goto LAB_1033f6c9c;
        }
        cVar4 = *pcVar27;
        pcVar1 = puVar13 + uVar21;
        uVar21 = uVar21 + 1;
        lVar30 = lVar30 + -1;
        lVar28 = lVar28 + -1;
        pcVar27 = pcVar27 + 1;
      } while (cVar4 == *pcVar1);
      uVar17 = uVar17 - *(ulong *)(lVar10 + 0x10);
      *(ulong *)(lVar10 + 0x28) = uVar17;
      uVar20 = *(ulong *)(lVar10 + 0x10);
      goto joined_r0x0001033f6bdc;
    }
    lVar28 = -uVar21;
    uVar20 = uVar21 + uVar25;
    pcVar27 = (char *)(lVar22 + -1 + uVar21);
    do {
      uVar20 = uVar20 - 1;
      if (lVar28 == 0) goto LAB_1033f6be8;
      if (uVar15 <= uVar20) goto LAB_1033f6cb0;
      cVar4 = *pcVar27;
      lVar28 = lVar28 + 1;
      pcVar27 = pcVar27 + -1;
    } while (cVar4 == puVar13[uVar20]);
    uVar25 = (uVar17 - uVar24) - lVar28;
  }
  *(ulong *)(lVar10 + 0x28) = uVar25;
  uVar20 = uVar14;
  uVar17 = uVar25;
joined_r0x0001033f6bdc:
  if ((uVar16 & 1) == 0) {
    *(ulong *)(lVar10 + 0x38) = uVar20;
    uVar26 = uVar20;
  }
  uVar25 = uVar17 - uVar14;
  if (uVar15 <= uVar25) {
LAB_1033f6c48:
    uVar18 = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
LAB_1033f6c68:
    *puVar12 = uVar18;
    return puVar12;
  }
  goto LAB_1033f6b70;
}

