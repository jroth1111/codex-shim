
void FUN_100d1e594(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar9 = (long *)*param_1;
  if ((*(byte *)(plVar9 + 0x37) & 1) == 0) {
    *(undefined1 *)(plVar9 + 0x37) = 1;
  }
  FUN_1060faa28(plVar9 + 0x38);
  plStack_40 = plVar9 + 0x31;
  if ((char)*plStack_40 == '\0') {
    *(char *)plStack_40 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (plStack_40,extraout_x1,1000000000);
  }
  plStack_48 = plVar9 + 0x30;
  plStack_38 = (long *)*plStack_48;
  __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_48);
  plStack_48 = plVar9 + 0x34;
  plStack_40 = plVar9 + 0x10;
  plStack_38 = plVar9 + 0x38;
  func_0x0001011e9ff0(&plStack_48);
  func_0x0001011e9ff0(&plStack_48);
  lVar3 = *plVar9;
  *plVar9 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar3 = *param_1;
  uVar10 = *(ulong *)(lVar3 + 0x1b0);
  do {
    lVar6 = *(long *)(lVar3 + 0x1a0);
    uVar8 = *(ulong *)(lVar6 + 0xb00);
    while (uVar8 != (uVar10 & 0xffffffffffffffe0)) {
      lVar6 = *(long *)(lVar6 + 0xb08);
      uVar8 = 3;
      if (lVar6 == 0) goto LAB_105af4864;
      *(long *)(lVar3 + 0x1a0) = lVar6;
      InstructionSynchronizationBarrier();
      uVar8 = *(ulong *)(lVar6 + 0xb00);
    }
    lVar5 = *(long *)(lVar3 + 0x1a8);
    if (lVar5 == lVar6) {
      uVar10 = *(ulong *)(lVar3 + 0x1b0) & 0x1f;
      uVar4 = *(ulong *)(lVar6 + 0xb10);
      uVar8 = uVar4 >> uVar10;
    }
    else {
      do {
        if (((*(ulong *)(lVar5 + 0xb10) >> 0x20 & 1) == 0) ||
           (*(ulong *)(lVar3 + 0x1b0) < *(ulong *)(lVar5 + 0xb18))) break;
        if (*(long *)(lVar5 + 0xb08) == 0) {
          func_0x000108a07a20(&UNK_10b40eb48);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x105af48e0);
          (*pcVar2)();
        }
        *(long *)(lVar3 + 0x1a8) = *(long *)(lVar5 + 0xb08);
        *(undefined8 *)(lVar5 + 0xb00) = 0;
        *(undefined8 *)(lVar5 + 0xb10) = 0;
        *(undefined8 *)(lVar5 + 0xb08) = 0;
        lVar6 = *(long *)(lVar3 + 0x80);
        *(long *)(lVar5 + 0xb00) = *(long *)(lVar6 + 0xb00) + 0x20;
        plVar9 = (long *)(lVar6 + 0xb08);
        lVar6 = *plVar9;
        if (lVar6 == 0) {
          *plVar9 = lVar5;
        }
        else {
          *(long *)(lVar5 + 0xb00) = *(long *)(lVar6 + 0xb00) + 0x20;
          lVar1 = *(long *)(lVar6 + 0xb08);
          if (lVar1 == 0) {
            *(long *)(lVar6 + 0xb08) = lVar5;
          }
          else {
            *(long *)(lVar5 + 0xb00) = *(long *)(lVar1 + 0xb00) + 0x20;
            if (*(long *)(lVar1 + 0xb08) == 0) {
              *(long *)(lVar1 + 0xb08) = lVar5;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar5 = *(long *)(lVar3 + 0x1a8);
      } while (lVar5 != *(long *)(lVar3 + 0x1a0));
      lVar6 = *(long *)(lVar3 + 0x1a0);
      uVar10 = *(ulong *)(lVar3 + 0x1b0) & 0x1f;
      uVar4 = *(ulong *)(lVar6 + 0xb10);
      uVar8 = uVar4 >> uVar10;
    }
    if ((uVar8 & 1) == 0) {
      uVar8 = 2;
      if ((uVar4 & 0x200000000) == 0) {
        uVar8 = 3;
      }
LAB_105af4864:
      uStack_90 = uVar8;
      FUN_105af3d38(&uStack_90);
      lVar6 = *(long *)(lVar3 + 0x1a8);
      do {
        lVar6 = *(long *)(lVar6 + 0xb08);
        _free();
      } while (lVar6 != 0);
      if (*(long *)(lVar3 + 0x100) != 0) {
        (**(code **)(*(long *)(lVar3 + 0x100) + 0x18))(*(undefined8 *)(lVar3 + 0x108));
      }
      if (lVar3 != -1) {
        lVar6 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 8) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          _free(lVar3);
        }
      }
      return;
    }
    puVar7 = (ulong *)(lVar6 + uVar10 * 0x58);
    uStack_88 = puVar7[1];
    uStack_90 = *puVar7;
    uStack_78 = puVar7[3];
    uStack_80 = puVar7[2];
    uStack_68 = puVar7[5];
    uStack_70 = puVar7[4];
    uStack_58 = puVar7[7];
    uStack_60 = puVar7[6];
    plStack_48 = (long *)puVar7[9];
    uStack_50 = puVar7[8];
    plStack_40 = (long *)puVar7[10];
    uVar8 = uStack_90;
    if (1 < uStack_90) goto LAB_105af4864;
    uVar10 = *(long *)(lVar3 + 0x1b0) + 1;
    *(ulong *)(lVar3 + 0x1b0) = uVar10;
    FUN_105af3d38(&uStack_90);
  } while( true );
}

