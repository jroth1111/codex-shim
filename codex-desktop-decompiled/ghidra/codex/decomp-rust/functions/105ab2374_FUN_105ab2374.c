
void FUN_105ab2374(undefined8 *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  uVar17 = *(ulong *)(param_2 + 0x28);
  if (uVar17 != 0) {
    uVar10 = FUN_105ab0ca4(param_2,param_3);
    uVar19 = 0;
    uVar6 = *(ushort *)(param_2 + 0x58);
    uVar12 = (ulong)((uint)uVar6 & uVar10 & 0xffff);
    lVar2 = *(long *)(param_2 + 0x48);
    uVar4 = *(ulong *)(param_2 + 0x50);
    lVar15 = *(long *)(param_2 + 0x20);
    lVar3 = *param_3;
    lVar5 = param_3[1];
    lVar8 = param_3[1];
    lVar16 = param_3[2];
    do {
      if ((uVar4 <= uVar12) && (uVar12 = 0, uVar4 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar12 * 4);
      uVar18 = (ulong)*puVar1;
      if ((uVar18 == 0xffff) ||
         (uVar7 = puVar1[1], ((ulong)((int)uVar12 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar19)
         ) break;
      if ((uint)uVar7 == (uVar10 & 0xffff)) {
        if (uVar17 <= uVar18) {
          func_0x000108a07bdc(uVar18,uVar17,&UNK_10b4064d0);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x105ab257c);
          (*pcVar9)();
        }
        lVar13 = lVar15 + uVar18 * 0x68;
        if ((lVar3 == 0) != (*(long *)(lVar13 + 0x40) != 0)) {
          if (*(long *)(lVar13 + 0x40) == 0) {
            if (*(char *)(lVar13 + 0x48) == (char)lVar8) goto LAB_105ab24b0;
          }
          else if ((*(long *)(lVar13 + 0x50) == lVar16) &&
                  (iVar11 = _memcmp(*(undefined8 *)(lVar13 + 0x48),lVar5,lVar16), iVar11 == 0))
          goto LAB_105ab24b0;
        }
      }
      uVar19 = uVar19 + 1;
      uVar12 = uVar12 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 2;
LAB_105ab2528:
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
  }
  return;
LAB_105ab24b0:
  piVar14 = (int *)(lVar15 + uVar18 * 0x68);
  if (*piVar14 == 1) {
    FUN_105ab1dd8(param_2,*(undefined8 *)(piVar14 + 2));
  }
  FUN_105ab1708(auStack_d0,param_2,uVar12,uVar18);
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  param_1[4] = uStack_98;
  if (lStack_90 != 0) {
    (**(code **)(lStack_90 + 0x20))(auStack_78,uStack_88,uStack_80);
  }
  goto LAB_105ab2528;
}

