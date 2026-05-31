
void FUN_100cb5d18(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong in_xzr;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  lVar9 = *param_1;
  LOAcquire();
  lVar4 = *(long *)(lVar9 + 0x1c8);
  *(long *)(lVar9 + 0x1c8) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    LOAcquire();
    lVar4 = *(long *)(lVar9 + 0x88);
    *(long *)(lVar9 + 0x88) = lVar4 + 1;
    lVar4 = func_0x000100fcb63c(lVar9 + 0x80,lVar4);
    *(ulong *)(lVar4 + 0x1510) = *(ulong *)(lVar4 + 0x1510) | 0x200000000;
    LORelease();
    puVar7 = (ulong *)(lVar9 + 0x110);
    LOAcquire();
    uVar5 = *puVar7;
    *puVar7 = uVar5 | 2;
    LORelease();
    if (uVar5 == 0) {
      lVar4 = *(long *)(lVar9 + 0x100);
      *(undefined8 *)(lVar9 + 0x100) = 0;
      *puVar7 = in_xzr;
      LORelease();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar9 + 0x108));
      }
    }
  }
  lVar4 = *(long *)*param_1;
  *(long *)*param_1 = lVar4 + -1;
  LORelease();
  if (lVar4 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar4 = *param_1;
  uVar5 = *(ulong *)(lVar4 + 0x1b0);
  do {
    lVar9 = *(long *)(lVar4 + 0x1a0);
    uVar8 = *(ulong *)(lVar9 + 0x1500);
    while (uVar8 != (uVar5 & 0xffffffffffffffe0)) {
      lVar9 = *(long *)(lVar9 + 0x1508);
      if (lVar9 == 0) goto LAB_102872d80;
      *(long *)(lVar4 + 0x1a0) = lVar9;
      InstructionSynchronizationBarrier();
      uVar8 = *(ulong *)(lVar9 + 0x1500);
    }
    lVar6 = *(long *)(lVar4 + 0x1a8);
    if (lVar6 == lVar9) {
      uVar5 = *(ulong *)(lVar4 + 0x1b0) & 0x1f;
      uVar8 = *(ulong *)(lVar9 + 0x1510) >> uVar5;
    }
    else {
      do {
        if (((*(ulong *)(lVar6 + 0x1510) >> 0x20 & 1) == 0) ||
           (*(ulong *)(lVar4 + 0x1b0) < *(ulong *)(lVar6 + 0x1518))) break;
        if (*(long *)(lVar6 + 0x1508) == 0) {
          func_0x000108a07a20(&UNK_10b28f3d0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102872df8);
          (*pcVar3)();
        }
        *(long *)(lVar4 + 0x1a8) = *(long *)(lVar6 + 0x1508);
        *(undefined8 *)(lVar6 + 0x1500) = 0;
        *(undefined8 *)(lVar6 + 0x1510) = 0;
        *(undefined8 *)(lVar6 + 0x1508) = 0;
        lVar9 = *(long *)(lVar4 + 0x80);
        *(long *)(lVar6 + 0x1500) = *(long *)(lVar9 + 0x1500) + 0x20;
        plVar1 = (long *)(lVar9 + 0x1508);
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar6;
        }
        else {
          *(long *)(lVar6 + 0x1500) = *(long *)(lVar9 + 0x1500) + 0x20;
          lVar2 = *(long *)(lVar9 + 0x1508);
          if (lVar2 == 0) {
            *(long *)(lVar9 + 0x1508) = lVar6;
          }
          else {
            *(long *)(lVar6 + 0x1500) = *(long *)(lVar2 + 0x1500) + 0x20;
            if (*(long *)(lVar2 + 0x1508) == 0) {
              *(long *)(lVar2 + 0x1508) = lVar6;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar6 = *(long *)(lVar4 + 0x1a8);
      } while (lVar6 != *(long *)(lVar4 + 0x1a0));
      lVar9 = *(long *)(lVar4 + 0x1a0);
      uVar5 = *(ulong *)(lVar4 + 0x1b0) & 0x1f;
      uVar8 = *(ulong *)(lVar9 + 0x1510) >> uVar5;
    }
    if ((uVar8 & 1) == 0) {
LAB_102872d80:
      lVar9 = *(long *)(lVar4 + 0x1a8);
      do {
        lVar9 = *(long *)(lVar9 + 0x1508);
        _free();
      } while (lVar9 != 0);
      if (*(long *)(lVar4 + 0x100) != 0) {
        (**(code **)(*(long *)(lVar4 + 0x100) + 0x18))(*(undefined8 *)(lVar4 + 0x108));
      }
      if (lVar4 != -1) {
        lVar9 = *(long *)(lVar4 + 8);
        *(long *)(lVar4 + 8) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          _free(lVar4);
        }
      }
      return;
    }
    puVar7 = (ulong *)(lVar9 + uVar5 * 0xa8);
    uStack_e8 = puVar7[1];
    uStack_f0 = *puVar7;
    uStack_d8 = puVar7[3];
    uStack_e0 = puVar7[2];
    uStack_c8 = puVar7[5];
    uStack_d0 = puVar7[4];
    uStack_b8 = puVar7[7];
    uStack_c0 = puVar7[6];
    uStack_a8 = puVar7[9];
    uStack_b0 = puVar7[8];
    uStack_98 = puVar7[0xb];
    uStack_a0 = puVar7[10];
    uStack_88 = puVar7[0xd];
    uStack_90 = puVar7[0xc];
    uStack_78 = puVar7[0xf];
    uStack_80 = puVar7[0xe];
    uStack_68 = puVar7[0x11];
    uStack_70 = puVar7[0x10];
    uStack_58 = puVar7[0x13];
    uStack_60 = puVar7[0x12];
    uStack_50 = puVar7[0x14];
    if ((uStack_f0 & 0xe) == 0xc) goto LAB_102872d80;
    uVar5 = *(long *)(lVar4 + 0x1b0) + 1;
    *(ulong *)(lVar4 + 0x1b0) = uVar5;
    func_0x0001028651b8(&uStack_f0);
  } while( true );
}

