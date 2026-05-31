
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1011dd528(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong extraout_x8;
  ulong uVar12;
  long extraout_x8_00;
  long lVar13;
  byte bVar14;
  ulong extraout_x9;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong extraout_x10;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  long lVar22;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined8 unaff_x30;
  undefined1 auVar24 [16];
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (*param_2 == 1) {
    lVar13 = *(long *)(param_2 + 0x12);
    uVar18 = *(ulong *)(param_2 + 0x14);
    uVar16 = *(ulong *)(param_2 + 0x18);
    bVar7 = *(long *)(param_2 + 0xe) != -1;
    uVar12 = *(long *)(param_2 + 10) + (uVar16 - 1);
    if (uVar18 <= uVar12) {
LAB_100e8dc0c:
      uVar11 = 0;
      *(ulong *)(param_2 + 10) = uVar18;
LAB_100e8dc30:
      *param_1 = uVar11;
      return param_1;
    }
    uVar19 = *(ulong *)(param_2 + 2);
    uVar20 = *(ulong *)(param_2 + 0xe);
    lVar17 = *(long *)(param_2 + 10);
LAB_100e8db44:
    if ((*(ulong *)(param_2 + 8) >> ((ulong)*(byte *)(lVar13 + uVar12) & 0x3f) & 1) == 0) {
      lVar9 = lVar17 + uVar16;
      *(long *)(param_2 + 10) = lVar9;
      if (!bVar7) goto LAB_100e8db34;
LAB_100e8dbb4:
      uVar12 = 0;
      goto LAB_100e8db2c;
    }
    uVar12 = uVar20;
    if (uVar20 <= uVar19) {
      uVar12 = uVar19;
    }
    uVar10 = uVar19;
    if (bVar7) {
      uVar10 = uVar12;
    }
    uVar12 = uVar10 + lVar17;
    lVar9 = uVar12 - uVar19;
    pcVar21 = (char *)(*(long *)(param_2 + 0x16) + uVar10);
    lVar22 = 0;
    if (uVar10 <= uVar16) {
      lVar22 = uVar16 - uVar10;
    }
    do {
      if (lVar22 == 0) {
        uVar10 = uVar19;
        uVar12 = 0;
        if (bVar7) {
          uVar12 = uVar20;
        }
        goto LAB_100e8dbc8;
      }
      if (uVar18 <= uVar12) {
        uVar12 = uVar18;
        if (uVar18 <= uVar10 + lVar17) {
          uVar12 = uVar10 + lVar17;
        }
        func_0x000108a07bdc(uVar12,uVar18,&UNK_10b234d88);
        uVar15 = extraout_x9;
        goto LAB_100e8dc60;
      }
      cVar4 = *pcVar21;
      pcVar1 = (char *)(lVar13 + uVar12);
      lVar9 = lVar9 + 1;
      uVar12 = uVar12 + 1;
      pcVar21 = pcVar21 + 1;
      lVar22 = lVar22 + -1;
    } while (cVar4 == *pcVar1);
    *(long *)(param_2 + 10) = lVar9;
    if (bVar7) goto LAB_100e8dbb4;
    goto LAB_100e8db34;
  }
  if ((*(byte *)((long)param_2 + 0x1a) & 1) != 0) {
    *param_1 = 0;
    return param_1;
  }
  uVar12 = *(ulong *)(param_2 + 2);
  lVar13 = *(long *)(param_2 + 0x12);
  uVar18 = *(ulong *)(param_2 + 0x14);
  bVar14 = *(byte *)(param_2 + 6);
  if (uVar12 == 0) {
LAB_1011dd598:
    if (uVar12 == uVar18) {
      *(byte *)(param_2 + 6) = (bVar14 ^ 0xff) & 1;
      if ((bVar14 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x1a) = 1;
        *param_1 = 0;
        return param_1;
      }
      goto LAB_1011dd6c0;
    }
    pbVar2 = (byte *)(lVar13 + uVar12);
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
    uVar16 = uVar12;
    if ((bVar14 & 1) == 0) {
      if (uVar3 < 0x80) {
        lVar17 = 1;
      }
      else if (uVar3 < 0x800) {
        lVar17 = 2;
      }
      else {
        lVar17 = 3;
        if (0xffff < uVar3) {
          lVar17 = 4;
        }
      }
      uVar12 = lVar17 + uVar12;
      *(ulong *)(param_2 + 2) = uVar12;
      if (uVar12 != 0) {
        uVar8 = uVar12 == uVar18;
        if (uVar18 <= uVar12) goto LAB_1011dd694;
        uVar8 = *(char *)(lVar13 + uVar12) == -0x40;
        if (*(char *)(lVar13 + uVar12) < -0x40) goto LAB_1011dd664;
      }
      goto LAB_1011dd698;
    }
  }
  else {
    puVar6 = (undefined1 *)register0x00000008;
    puVar23 = unaff_x29;
    if (uVar12 < uVar18) {
      uVar8 = *(char *)(lVar13 + uVar12) == -0x40;
      if (-0x41 < *(char *)(lVar13 + uVar12)) goto LAB_1011dd598;
    }
    else {
      uVar8 = 0;
      if (uVar12 == uVar18) goto LAB_1011dd598;
    }
    while( true ) {
      register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x10);
      unaff_x29 = puVar6 + -0x10;
      *(undefined1 **)(puVar6 + -0x10) = puVar23;
      *(undefined8 *)(puVar6 + -8) = unaff_x30;
      *(byte *)(param_2 + 6) = (bVar14 ^ 0xff) & 1;
      unaff_x30 = 0x1011dd694;
      auVar24 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar13,uVar18,uVar12);
      lVar13 = extraout_x8_00;
      uVar12 = extraout_x10;
LAB_1011dd694:
      param_2 = auVar24._8_8_;
      if ((bool)uVar8) break;
LAB_1011dd664:
      bVar14 = 1;
      puVar6 = (undefined1 *)register0x00000008;
      puVar23 = unaff_x29;
    }
LAB_1011dd698:
    uVar16 = uVar18;
    if (uVar12 != uVar18) {
      uVar16 = uVar12;
    }
  }
  param_1 = auVar24._0_8_;
  *(undefined1 *)(auVar24._8_8_ + 0x18) = 0;
  uVar18 = uVar16;
LAB_1011dd6c0:
  param_1[1] = uVar18;
  param_1[2] = uVar18;
  *param_1 = 1;
  return param_1;
  while( true ) {
    uVar10 = uVar10 - 1;
    if (uVar16 <= uVar10) goto LAB_100e8dc74;
    uVar15 = uVar10 + lVar17;
    if (uVar18 <= uVar15) goto LAB_100e8dc60;
    if (*(char *)(*(long *)(param_2 + 0x16) + uVar10) != *(char *)(lVar13 + uVar15)) break;
LAB_100e8dbc8:
    if (uVar10 <= uVar12) {
      *(ulong *)(param_2 + 10) = lVar17 + uVar16;
      if (bVar7) {
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      param_1[1] = lVar17;
      param_1[2] = lVar17 + uVar16;
      uVar11 = 1;
      goto LAB_100e8dc30;
    }
  }
  lVar9 = lVar17 + *(long *)(param_2 + 6);
  *(long *)(param_2 + 10) = lVar9;
  uVar12 = uVar16 - *(long *)(param_2 + 6);
  if (bVar7) {
LAB_100e8db2c:
    *(ulong *)(param_2 + 0xe) = uVar12;
    uVar20 = uVar12;
  }
LAB_100e8db34:
  uVar12 = lVar9 + (uVar16 - 1);
  lVar17 = lVar9;
  if (uVar18 <= uVar12) goto LAB_100e8dc0c;
  goto LAB_100e8db44;
LAB_100e8dc60:
  func_0x000108a07bdc(uVar15,uVar18,&UNK_10b234d70);
  uVar10 = extraout_x8;
LAB_100e8dc74:
  uStack_44 = 0xb234d58;
  auStack_70 = func_0x000108a07bdc(uVar10,uVar16);
  uStack_38 = 0x100e8dc88;
  uStack_90 = auStack_70._0_8_ ^ 0x736f6d6570736575;
  uStack_88 = auStack_70._0_8_ ^ 0x6c7967656e657261;
  uStack_80 = auStack_70._8_8_ ^ 0x646f72616e646f6d;
  uStack_78 = auStack_70._8_8_ ^ 0x7465646279746573;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_60 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10118f26c(&uStack_90,&uStack_44,4);
  uStack_58 = uStack_58 | lStack_60 << 0x38;
  uStack_78 = uStack_58 ^ uStack_78;
  uStack_90 = uStack_80 + uStack_90;
  uVar18 = uStack_90 ^ (uStack_80 >> 0x33 | uStack_80 << 0xd);
  uVar12 = uStack_78 + uStack_88 + uVar18;
  uVar16 = uStack_78 + uStack_88 ^ (uStack_78 >> 0x30 | uStack_78 << 0x10);
  uVar19 = uVar12 ^ (uVar18 >> 0x2f | uVar18 << 0x11);
  uVar18 = uVar16 + (uStack_90 >> 0x20 | uStack_90 << 0x20);
  uVar20 = uVar18 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
  uVar18 = (uVar18 ^ uStack_58) + uVar19;
  uVar19 = uVar18 ^ (uVar19 >> 0x33 | uVar19 << 0xd);
  uVar12 = uVar20 + ((uVar12 >> 0x20 | uVar12 << 0x20) ^ 0xff);
  uVar16 = uVar19 + uVar12;
  uVar12 = uVar12 ^ (uVar20 >> 0x30 | uVar20 << 0x10);
  uVar19 = uVar16 ^ (uVar19 >> 0x2f | uVar19 << 0x11);
  uVar18 = uVar12 + (uVar18 >> 0x20 | uVar18 << 0x20);
  uVar20 = uVar19 + uVar18;
  uVar18 = uVar18 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
  uVar19 = uVar20 ^ (uVar19 >> 0x33 | uVar19 << 0xd);
  uVar12 = uVar18 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar16 = uVar19 + uVar12;
  uVar12 = uVar12 ^ (uVar18 >> 0x30 | uVar18 << 0x10);
  uVar19 = uVar16 ^ (uVar19 >> 0x2f | uVar19 << 0x11);
  uVar18 = uVar12 + (uVar20 >> 0x20 | uVar20 << 0x20);
  uVar20 = uVar18 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
  uVar19 = uVar19 + uVar18 ^ (uVar19 >> 0x33 | uVar19 << 0xd);
  uVar12 = uVar20 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar18 = uVar19 + uVar12;
  uVar12 = uVar12 ^ (uVar20 >> 0x30 | uVar20 << 0x10);
  return (undefined8 *)
         ((uVar12 >> 0x2b | uVar12 << 0x15) ^ (uVar19 >> 0x2f | uVar19 << 0x11) ^
          (uVar18 >> 0x20 | uVar18 << 0x20) ^ uVar18);
}

