
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
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
  ulong uStack_48;
  ulong uStack_40;
  
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x1b0);
  do {
    lVar6 = *(long *)(lVar9 + 0x1a0);
    uVar8 = *(ulong *)(lVar6 + 0xb00);
    while (uVar8 != (uVar10 & 0xffffffffffffffe0)) {
      lVar6 = *(long *)(lVar6 + 0xb08);
      uVar8 = 3;
      if (lVar6 == 0) goto LAB_105af4864;
      *(long *)(lVar9 + 0x1a0) = lVar6;
      InstructionSynchronizationBarrier();
      uVar8 = *(ulong *)(lVar6 + 0xb00);
    }
    lVar5 = *(long *)(lVar9 + 0x1a8);
    if (lVar5 == lVar6) {
      uVar10 = *(ulong *)(lVar9 + 0x1b0) & 0x1f;
      uVar4 = *(ulong *)(lVar6 + 0xb10);
      uVar8 = uVar4 >> uVar10;
    }
    else {
      do {
        if (((*(ulong *)(lVar5 + 0xb10) >> 0x20 & 1) == 0) ||
           (*(ulong *)(lVar9 + 0x1b0) < *(ulong *)(lVar5 + 0xb18))) break;
        if (*(long *)(lVar5 + 0xb08) == 0) {
          func_0x000108a07a20(&UNK_10b40eb48);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x105af48e0);
          (*pcVar3)();
        }
        *(long *)(lVar9 + 0x1a8) = *(long *)(lVar5 + 0xb08);
        *(undefined8 *)(lVar5 + 0xb00) = 0;
        *(undefined8 *)(lVar5 + 0xb10) = 0;
        *(undefined8 *)(lVar5 + 0xb08) = 0;
        lVar6 = *(long *)(lVar9 + 0x80);
        *(long *)(lVar5 + 0xb00) = *(long *)(lVar6 + 0xb00) + 0x20;
        plVar1 = (long *)(lVar6 + 0xb08);
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        else {
          *(long *)(lVar5 + 0xb00) = *(long *)(lVar6 + 0xb00) + 0x20;
          lVar2 = *(long *)(lVar6 + 0xb08);
          if (lVar2 == 0) {
            *(long *)(lVar6 + 0xb08) = lVar5;
          }
          else {
            *(long *)(lVar5 + 0xb00) = *(long *)(lVar2 + 0xb00) + 0x20;
            if (*(long *)(lVar2 + 0xb08) == 0) {
              *(long *)(lVar2 + 0xb08) = lVar5;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar5 = *(long *)(lVar9 + 0x1a8);
      } while (lVar5 != *(long *)(lVar9 + 0x1a0));
      lVar6 = *(long *)(lVar9 + 0x1a0);
      uVar10 = *(ulong *)(lVar9 + 0x1b0) & 0x1f;
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
      lVar6 = *(long *)(lVar9 + 0x1a8);
      do {
        lVar6 = *(long *)(lVar6 + 0xb08);
        _free();
      } while (lVar6 != 0);
      if (*(long *)(lVar9 + 0x100) != 0) {
        (**(code **)(*(long *)(lVar9 + 0x100) + 0x18))(*(undefined8 *)(lVar9 + 0x108));
      }
      if (lVar9 != -1) {
        lVar6 = *(long *)(lVar9 + 8);
        *(long *)(lVar9 + 8) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          _free(lVar9);
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
    uStack_48 = puVar7[9];
    uStack_50 = puVar7[8];
    uStack_40 = puVar7[10];
    uVar8 = uStack_90;
    if (1 < uStack_90) goto LAB_105af4864;
    uVar10 = *(long *)(lVar9 + 0x1b0) + 1;
    *(ulong *)(lVar9 + 0x1b0) = uVar10;
    FUN_105af3d38(&uStack_90);
  } while( true );
}

