
void FUN_105ab10dc(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x1;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar9 = FUN_105ab193c(param_2);
  if (iVar9 == 0) {
    uVar8 = FUN_105ab0ca4(param_2,param_3);
    uVar20 = 0;
    uVar5 = *(ushort *)(param_2 + 0xb);
    uVar14 = (ulong)(uVar5 & uVar8);
    lVar17 = param_2[9];
    uVar10 = param_2[10];
    lVar12 = param_2[4];
    uVar11 = param_2[5];
    lVar3 = *param_3;
    lVar4 = param_3[1];
    lVar7 = param_3[1];
    lVar19 = param_3[2];
    do {
      if ((uVar10 <= uVar14) && (uVar14 = 0, uVar10 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar17 + uVar14 * 4);
      uVar21 = (ulong)*puVar1;
      if (uVar21 == 0xffff) {
        lStack_a8 = param_3[1];
        lStack_b0 = *param_3;
        lStack_98 = param_3[3];
        lStack_a0 = param_3[2];
        lStack_88 = param_4[1];
        lStack_90 = *param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        lStack_70 = param_4[4];
        iVar9 = FUN_105ab1cb0(param_2,uVar8,&lStack_b0,&lStack_90);
        if (iVar9 != 0) {
LAB_105ab13c8:
          uVar13 = 3;
          goto LAB_105ab13d0;
        }
        if ((ulong)param_2[10] <= uVar14) {
          func_0x000108a07bdc(uVar14,param_2[10],&UNK_10b406428);
          uVar11 = extraout_x1;
          goto LAB_105ab14a8;
        }
        puVar2 = (undefined2 *)(param_2[9] + uVar14 * 4);
        *puVar2 = (short)uVar11;
        puVar2[1] = uVar8;
        goto LAB_105ab1370;
      }
      uVar6 = puVar1[1];
      if (((ulong)((int)uVar14 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar20) {
        lVar17 = *param_2;
        lStack_a8 = param_3[1];
        lStack_b0 = *param_3;
        lStack_98 = param_3[3];
        lStack_a0 = param_3[2];
        lStack_88 = param_4[1];
        lStack_90 = *param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        lStack_70 = param_4[4];
        uVar10 = FUN_105ab1cb0(param_2,uVar8,&lStack_b0,&lStack_90);
        if ((uVar10 & 1) != 0) goto LAB_105ab13c8;
        uVar10 = 0;
        lVar12 = param_2[9];
        uVar21 = param_2[10];
        uVar18 = (uint)uVar11 & 0xffff;
        while( true ) {
          uVar5 = (ushort)uVar18;
          if ((uVar21 <= uVar14) && (uVar14 = 0, uVar21 == 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar1 = (ushort *)(lVar12 + uVar14 * 4);
          uVar18 = (uint)*puVar1;
          if (uVar18 == 0xffff) break;
          uVar10 = uVar10 + 1;
          uVar6 = puVar1[1];
          *puVar1 = uVar5;
          puVar1[1] = uVar8;
          uVar14 = uVar14 + 1;
          uVar8 = uVar6;
        }
        *puVar1 = uVar5;
        puVar1[1] = uVar8;
        if ((0x7f < uVar10 || 0x1ff < uVar20 && lVar17 != 2) && (*param_2 == 0)) {
          *param_2 = 1;
        }
LAB_105ab1370:
        uVar13 = 2;
LAB_105ab13d0:
        *(undefined1 *)(param_1 + 4) = uVar13;
        return;
      }
      if (uVar6 == uVar8) {
        if (uVar11 <= uVar21) {
          func_0x000108a07bdc(uVar21,uVar11,&UNK_10b406410);
          goto LAB_105ab14b8;
        }
        lVar15 = lVar12 + uVar21 * 0x68;
        if ((lVar3 == 0) != (*(long *)(lVar15 + 0x40) != 0)) {
          if (*(long *)(lVar15 + 0x40) == 0) {
            if (*(char *)(lVar15 + 0x48) == (char)lVar7) goto LAB_105ab127c;
          }
          else if ((*(long *)(lVar15 + 0x50) == lVar19) &&
                  (iVar9 = _memcmp(*(undefined8 *)(lVar15 + 0x48),lVar4,lVar19), iVar9 == 0))
          goto LAB_105ab127c;
        }
      }
      uVar20 = uVar20 + 1;
      uVar14 = uVar14 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 3;
  (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
  if (*param_3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
  lVar17 = param_3[1];
  lVar12 = param_3[2];
LAB_105ab1148:
                    /* WARNING: Could not recover jumptable at 0x000105ab1164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3 + 3,lVar17,lVar12);
  return;
LAB_105ab127c:
  lStack_88 = param_4[1];
  lStack_90 = *param_4;
  lStack_78 = param_4[3];
  lStack_80 = param_4[2];
  lStack_70 = param_4[4];
  puVar16 = (uint *)(lVar12 + uVar21 * 0x68);
  if ((*puVar16 & 1) != 0) {
    FUN_105ab1dd8(param_2,*(undefined8 *)(puVar16 + 2));
    uVar11 = param_2[5];
  }
  if (uVar11 <= uVar21) {
LAB_105ab14a8:
    func_0x000108a07bdc(uVar21,uVar11,&UNK_10b4064b8);
LAB_105ab14b8:
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x105ab14bc);
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar17 = param_2[4] + uVar21 * 0x68;
  uVar22 = *(undefined8 *)(lVar17 + 0x18);
  uVar24 = *(undefined8 *)(lVar17 + 0x30);
  uVar23 = *(undefined8 *)(lVar17 + 0x28);
  param_1[1] = *(undefined8 *)(lVar17 + 0x20);
  *param_1 = uVar22;
  param_1[3] = uVar24;
  param_1[2] = uVar23;
  uVar13 = *(undefined1 *)(lVar17 + 0x38);
  *(undefined4 *)((long)param_1 + 0x21) = *(undefined4 *)(lVar17 + 0x39);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(lVar17 + 0x3c);
  *(long *)(lVar17 + 0x20) = lStack_88;
  *(long *)(lVar17 + 0x18) = lStack_90;
  *(long *)(lVar17 + 0x30) = lStack_78;
  *(long *)(lVar17 + 0x28) = lStack_80;
  *(long *)(lVar17 + 0x38) = lStack_70;
  *(undefined1 *)(param_1 + 4) = uVar13;
  if (*param_3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
  lVar17 = param_3[1];
  lVar12 = param_3[2];
  goto LAB_105ab1148;
}

