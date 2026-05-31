
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1028793b4(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong extraout_x8;
  ulong uVar13;
  long extraout_x8_00;
  long lVar14;
  byte bVar15;
  ulong extraout_x9;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong extraout_x10;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  long lVar23;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  undefined8 unaff_x30;
  undefined1 auVar25 [16];
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if (*param_2 == 1) {
    lVar14 = *(long *)(param_2 + 0x12);
    uVar19 = *(ulong *)(param_2 + 0x14);
    uVar17 = *(ulong *)(param_2 + 0x18);
    bVar7 = *(long *)(param_2 + 0xe) != -1;
    uVar13 = *(long *)(param_2 + 10) + (uVar17 - 1);
    if (uVar19 <= uVar13) {
LAB_10286d4d8:
      uVar12 = 0;
      *(ulong *)(param_2 + 10) = uVar19;
LAB_10286d4fc:
      *param_1 = uVar12;
      return param_1;
    }
    uVar20 = *(ulong *)(param_2 + 2);
    uVar21 = *(ulong *)(param_2 + 0xe);
    lVar18 = *(long *)(param_2 + 10);
LAB_10286d410:
    if ((*(ulong *)(param_2 + 8) >> ((ulong)*(byte *)(lVar14 + uVar13) & 0x3f) & 1) == 0) {
      lVar10 = lVar18 + uVar17;
      *(long *)(param_2 + 10) = lVar10;
      if (!bVar7) goto LAB_10286d400;
LAB_10286d480:
      uVar13 = 0;
      goto LAB_10286d3f8;
    }
    uVar13 = uVar21;
    if (uVar21 <= uVar20) {
      uVar13 = uVar20;
    }
    uVar11 = uVar20;
    if (bVar7) {
      uVar11 = uVar13;
    }
    uVar13 = uVar11 + lVar18;
    lVar10 = uVar13 - uVar20;
    pcVar22 = (char *)(*(long *)(param_2 + 0x16) + uVar11);
    lVar23 = 0;
    if (uVar11 <= uVar17) {
      lVar23 = uVar17 - uVar11;
    }
    do {
      if (lVar23 == 0) {
        uVar11 = uVar20;
        uVar13 = 0;
        if (bVar7) {
          uVar13 = uVar21;
        }
        goto LAB_10286d494;
      }
      if (uVar19 <= uVar13) {
        uVar13 = uVar19;
        if (uVar19 <= uVar11 + lVar18) {
          uVar13 = uVar11 + lVar18;
        }
        func_0x000108a07bdc(uVar13,uVar19,&UNK_10b28f1e8);
        uVar16 = extraout_x9;
        goto LAB_10286d52c;
      }
      cVar4 = *pcVar22;
      pcVar1 = (char *)(lVar14 + uVar13);
      lVar10 = lVar10 + 1;
      uVar13 = uVar13 + 1;
      pcVar22 = pcVar22 + 1;
      lVar23 = lVar23 + -1;
    } while (cVar4 == *pcVar1);
    *(long *)(param_2 + 10) = lVar10;
    if (bVar7) goto LAB_10286d480;
    goto LAB_10286d400;
  }
  if ((*(byte *)((long)param_2 + 0x1a) & 1) != 0) {
    *param_1 = 0;
    return param_1;
  }
  uVar13 = *(ulong *)(param_2 + 2);
  lVar14 = *(long *)(param_2 + 0x12);
  uVar19 = *(ulong *)(param_2 + 0x14);
  bVar15 = *(byte *)(param_2 + 6);
  if (uVar13 == 0) {
LAB_102879424:
    if (uVar13 == uVar19) {
      *(byte *)(param_2 + 6) = (bVar15 ^ 0xff) & 1;
      if ((bVar15 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x1a) = 1;
        *param_1 = 0;
        return param_1;
      }
      goto LAB_10287954c;
    }
    pbVar2 = (byte *)(lVar14 + uVar13);
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
    uVar17 = uVar13;
    if ((bVar15 & 1) == 0) {
      if (uVar3 < 0x80) {
        lVar18 = 1;
      }
      else if (uVar3 < 0x800) {
        lVar18 = 2;
      }
      else {
        lVar18 = 3;
        if (0xffff < uVar3) {
          lVar18 = 4;
        }
      }
      uVar13 = lVar18 + uVar13;
      *(ulong *)(param_2 + 2) = uVar13;
      if (uVar13 != 0) {
        uVar8 = uVar13 == uVar19;
        if (uVar19 <= uVar13) goto LAB_102879520;
        uVar8 = *(char *)(lVar14 + uVar13) == -0x40;
        if (*(char *)(lVar14 + uVar13) < -0x40) goto LAB_1028794f0;
      }
      goto LAB_102879524;
    }
  }
  else {
    puVar6 = (undefined1 *)register0x00000008;
    puVar24 = unaff_x29;
    if (uVar13 < uVar19) {
      uVar8 = *(char *)(lVar14 + uVar13) == -0x40;
      if (-0x41 < *(char *)(lVar14 + uVar13)) goto LAB_102879424;
    }
    else {
      uVar8 = 0;
      if (uVar13 == uVar19) goto LAB_102879424;
    }
    while( true ) {
      register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x10);
      unaff_x29 = puVar6 + -0x10;
      *(undefined1 **)(puVar6 + -0x10) = puVar24;
      *(undefined8 *)(puVar6 + -8) = unaff_x30;
      *(byte *)(param_2 + 6) = (bVar15 ^ 0xff) & 1;
      unaff_x30 = 0x102879520;
      auVar25 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar14,uVar19,uVar13);
      lVar14 = extraout_x8_00;
      uVar13 = extraout_x10;
LAB_102879520:
      param_2 = auVar25._8_8_;
      if ((bool)uVar8) break;
LAB_1028794f0:
      bVar15 = 1;
      puVar6 = (undefined1 *)register0x00000008;
      puVar24 = unaff_x29;
    }
LAB_102879524:
    uVar17 = uVar19;
    if (uVar13 != uVar19) {
      uVar17 = uVar13;
    }
  }
  param_1 = auVar25._0_8_;
  *(undefined1 *)(auVar25._8_8_ + 0x18) = 0;
  uVar19 = uVar17;
LAB_10287954c:
  param_1[1] = uVar19;
  param_1[2] = uVar19;
  *param_1 = 1;
  return param_1;
  while( true ) {
    uVar11 = uVar11 - 1;
    if (uVar17 <= uVar11) goto LAB_10286d540;
    uVar16 = uVar11 + lVar18;
    if (uVar19 <= uVar16) goto LAB_10286d52c;
    if (*(char *)(*(long *)(param_2 + 0x16) + uVar11) != *(char *)(lVar14 + uVar16)) break;
LAB_10286d494:
    if (uVar11 <= uVar13) {
      *(ulong *)(param_2 + 10) = lVar18 + uVar17;
      if (bVar7) {
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      param_1[1] = lVar18;
      param_1[2] = lVar18 + uVar17;
      uVar12 = 1;
      goto LAB_10286d4fc;
    }
  }
  lVar10 = lVar18 + *(long *)(param_2 + 6);
  *(long *)(param_2 + 10) = lVar10;
  uVar13 = uVar17 - *(long *)(param_2 + 6);
  if (bVar7) {
LAB_10286d3f8:
    *(ulong *)(param_2 + 0xe) = uVar13;
    uVar21 = uVar13;
  }
LAB_10286d400:
  uVar13 = lVar10 + (uVar17 - 1);
  lVar18 = lVar10;
  if (uVar19 <= uVar13) goto LAB_10286d4d8;
  goto LAB_10286d410;
LAB_10286d52c:
  func_0x000108a07bdc(uVar16,uVar19,&UNK_10b28f1d0);
  uVar11 = extraout_x8;
LAB_10286d540:
  puVar9 = &UNK_10b28f1b8;
  auStack_70 = func_0x000108a07bdc(uVar11,uVar17,&UNK_10b28f1b8);
  uStack_38 = 0x10286d554;
  uStack_90 = auStack_70._0_8_ ^ 0x736f6d6570736575;
  uStack_88 = auStack_70._0_8_ ^ 0x6c7967656e657261;
  uStack_80 = auStack_70._8_8_ ^ 0x646f72616e646f6d;
  uStack_78 = auStack_70._8_8_ ^ 0x7465646279746573;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_60 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x000102877d74(&uStack_90,puVar9,uVar19);
  uStack_41 = 0xff;
  func_0x000102877d74(&uStack_90,&uStack_41,1);
  uStack_58 = uStack_58 | lStack_60 << 0x38;
  uStack_78 = uStack_58 ^ uStack_78;
  uStack_90 = uStack_80 + uStack_90;
  uVar19 = uStack_90 ^ (uStack_80 >> 0x33 | uStack_80 << 0xd);
  uVar13 = uStack_78 + uStack_88 + uVar19;
  uVar17 = uStack_78 + uStack_88 ^ (uStack_78 >> 0x30 | uStack_78 << 0x10);
  uVar20 = uVar13 ^ (uVar19 >> 0x2f | uVar19 << 0x11);
  uVar19 = uVar17 + (uStack_90 >> 0x20 | uStack_90 << 0x20);
  uVar21 = uVar19 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
  uVar19 = (uVar19 ^ uStack_58) + uVar20;
  uVar20 = uVar19 ^ (uVar20 >> 0x33 | uVar20 << 0xd);
  uVar13 = uVar21 + ((uVar13 >> 0x20 | uVar13 << 0x20) ^ 0xff);
  uVar17 = uVar20 + uVar13;
  uVar13 = uVar13 ^ (uVar21 >> 0x30 | uVar21 << 0x10);
  uVar20 = uVar17 ^ (uVar20 >> 0x2f | uVar20 << 0x11);
  uVar19 = uVar13 + (uVar19 >> 0x20 | uVar19 << 0x20);
  uVar21 = uVar20 + uVar19;
  uVar19 = uVar19 ^ (uVar13 >> 0x2b | uVar13 << 0x15);
  uVar20 = uVar21 ^ (uVar20 >> 0x33 | uVar20 << 0xd);
  uVar13 = uVar19 + (uVar17 >> 0x20 | uVar17 << 0x20);
  uVar17 = uVar20 + uVar13;
  uVar13 = uVar13 ^ (uVar19 >> 0x30 | uVar19 << 0x10);
  uVar20 = uVar17 ^ (uVar20 >> 0x2f | uVar20 << 0x11);
  uVar19 = uVar13 + (uVar21 >> 0x20 | uVar21 << 0x20);
  uVar21 = uVar19 ^ (uVar13 >> 0x2b | uVar13 << 0x15);
  uVar20 = uVar20 + uVar19 ^ (uVar20 >> 0x33 | uVar20 << 0xd);
  uVar13 = uVar21 + (uVar17 >> 0x20 | uVar17 << 0x20);
  uVar19 = uVar20 + uVar13;
  uVar13 = uVar13 ^ (uVar21 >> 0x30 | uVar21 << 0x10);
  return (undefined8 *)
         ((uVar13 >> 0x2b | uVar13 << 0x15) ^ (uVar20 >> 0x2f | uVar20 << 0x11) ^
          (uVar19 >> 0x20 | uVar19 << 0x20) ^ uVar19);
}

