
undefined8 __ZN9codex_tui3tui3Tui16leave_alt_screen17hd8f8b221d5172fdaE(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *extraout_x8;
  code *pcVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined8 unaff_x22;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ushort uStack_90;
  short sStack_8e;
  ushort uStack_8c;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_48;
  
  if (*(char *)(param_1 + 0xdc) != '\x01') {
    return 0;
  }
  puVar12 = (undefined8 *)(param_1 + 0x40);
  uVar6 = FUN_10512b0c0(puVar12,&UNK_108ede6f0,8);
  if (((uVar6 == 0) &&
      (puStack_48 = puVar12,
      uVar6 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                        (&puStack_48), uVar6 == 0)) || ((uVar6 & 3) != 1)) {
    uVar6 = FUN_10512b0c0(puVar12,&UNK_108c98778,8);
    if (uVar6 == 0) goto LAB_1055091f4;
LAB_105509250:
    if ((uVar6 & 3) != 1) goto LAB_105509260;
    unaff_x22 = *(undefined8 *)(uVar6 - 1);
    puVar12 = *(undefined8 **)(uVar6 + 7);
    if ((code *)*puVar12 != (code *)0x0) {
      (*(code *)*puVar12)(unaff_x22);
    }
    if (puVar12[1] != 0) {
      _free(unaff_x22);
    }
    _free((undefined8 *)(uVar6 - 1));
    uVar11 = *(ushort *)(param_1 + 0xd0);
    uVar10 = *(undefined8 *)(param_1 + 0xd2);
    *(undefined2 *)(param_1 + 0xd0) = 0;
  }
  else {
    unaff_x22 = *(undefined8 *)(uVar6 - 1);
    puVar13 = *(undefined8 **)(uVar6 + 7);
    pcVar9 = (code *)*puVar13;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(unaff_x22);
    }
    if (puVar13[1] != 0) {
      _free(unaff_x22);
    }
    _free((undefined8 *)(uVar6 - 1));
    uVar6 = FUN_10512b0c0(puVar12,&UNK_108c98778,8);
    if (uVar6 != 0) goto LAB_105509250;
LAB_1055091f4:
    puStack_48 = puVar12;
    uVar6 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                      (&puStack_48);
    if (uVar6 != 0) goto LAB_105509250;
LAB_105509260:
    uVar11 = *(ushort *)(param_1 + 0xd0);
    uVar10 = *(undefined8 *)(param_1 + 0xd2);
    *(undefined2 *)(param_1 + 0xd0) = 0;
  }
  if ((uVar11 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x48);
    if (uVar6 < 2) {
      __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE(param_1 + uVar6 * 0x20,uVar10);
      uVar6 = 1 - *(long *)(param_1 + 0x48);
      if (uVar6 < 2) {
        uVar11 = (ushort)((ulong)uVar10 >> 0x10);
        __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE(param_1 + uVar6 * 0x20,uVar10);
        *(short *)(param_1 + 0x50) = (short)uVar10;
        *(ushort *)(param_1 + 0x52) = uVar11;
        *(int *)(param_1 + 0x54) = (int)((ulong)uVar10 >> 0x20);
        if ((uint)*(ushort *)(param_1 + 0x60) <= ((uint)((ulong)uVar10 >> 0x10) & 0xffff)) {
          uVar11 = *(ushort *)(param_1 + 0x60);
        }
        *(ushort *)(param_1 + 0x60) = uVar11;
        goto LAB_1055092d0;
      }
    }
    else {
      uVar6 = func_0x000108a07bdc(uVar6,2,&UNK_10b3872e8);
    }
    uVar7 = func_0x000108a07bdc(uVar6,2,&UNK_10b3872d0);
    if (puVar12[1] != 0) {
      _free(unaff_x22);
    }
    _free(uVar10);
    lVar8 = __Unwind_Resume(uVar7);
    uStack_58 = 0x10550938c;
    uStack_80 = unaff_x22;
    puStack_78 = puVar12;
    uStack_70 = uVar10;
    uStack_68 = uVar7;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar10 = __ZN9crossterm8terminal4size17h59acbc74b9110907E(&uStack_90);
    if (uStack_90 == 1) {
      *(ulong *)(extraout_x8 + 2) = uStack_88;
      *(undefined2 *)extraout_x8 = 1;
    }
    else {
      if (sStack_8e != *(short *)(lVar8 + 0x58) || uStack_8c != *(ushort *)(lVar8 + 0x5a)) {
        uVar10 = FUN_105030bd8(&uStack_90);
        if ((uStack_90 & 1) == 0) {
          iVar5 = (uint)uStack_8c - (uint)*(ushort *)(lVar8 + 0x5e);
          if (iVar5 != 0) {
            uVar6 = *(ulong *)(lVar8 + 0x50);
            uVar1 = (uint)uVar6 & 0xffff;
            uVar2 = ((uint)(uVar6 >> 0x20) ^ 0xffffffff) & 0xffff;
            if (uVar2 <= uVar1) {
              uVar1 = uVar2;
            }
            uVar2 = iVar5 + ((uint)uVar6 >> 0x10);
            uVar4 = (ushort)(uVar6 >> 0x30) ^ 0xffff;
            uVar3 = uVar2;
            if ((int)uVar4 <= (int)uVar2) {
              uVar3 = uVar4;
            }
            uVar4 = 0;
            if (-1 < (int)uVar2) {
              uVar4 = uVar3 << 0x10;
            }
            *(ulong *)(extraout_x8 + 1) = uVar6 & 0xffffffff00000000 | (ulong)uVar1 | (ulong)uVar4;
            *extraout_x8 = 0x10000;
            return uVar10;
          }
        }
        else if ((uStack_88 & 3) == 1) {
          uVar10 = *(undefined8 *)(uStack_88 - 1);
          puVar12 = *(undefined8 **)(uStack_88 + 7);
          pcVar9 = (code *)*puVar12;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar10);
          }
          if (puVar12[1] != 0) {
            _free(uVar10);
          }
          uVar10 = _free((undefined8 *)(uStack_88 - 1));
        }
      }
      *extraout_x8 = 0;
    }
    return uVar10;
  }
LAB_1055092d0:
  *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x10) = 0;
  return 0;
}

