
void FUN_100cb203c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
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
  
  cVar3 = (char)param_1[0x10];
  if (cVar3 == '\0') {
    lVar10 = *param_1;
    LOAcquire();
    lVar5 = *(long *)(lVar10 + 0x1c8);
    *(long *)(lVar10 + 0x1c8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar10 + 0x88);
      *(long *)(lVar10 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcb63c(lVar10 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x1510) = *(ulong *)(lVar5 + 0x1510) | 0x200000000;
      LORelease();
      puVar8 = (ulong *)(lVar10 + 0x110);
      LOAcquire();
      uVar6 = *puVar8;
      *puVar8 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar5 = *(long *)(lVar10 + 0x100);
        *(undefined8 *)(lVar10 + 0x100) = 0;
        *puVar8 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar10 + 0x108));
        }
      }
    }
  }
  else {
    if (cVar3 == '\x03') {
      func_0x000100e7dc4c(param_1 + 0x11);
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      func_0x000100e84ee8(param_1 + 0x11);
      FUN_100def764(param_1 + 4);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    lVar10 = *param_1;
    LOAcquire();
    lVar5 = *(long *)(lVar10 + 0x1c8);
    *(long *)(lVar10 + 0x1c8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar10 + 0x88);
      *(long *)(lVar10 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcb63c(lVar10 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x1510) = *(ulong *)(lVar5 + 0x1510) | 0x200000000;
      LORelease();
      puVar8 = (ulong *)(lVar10 + 0x110);
      LOAcquire();
      uVar6 = *puVar8;
      *puVar8 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar5 = *(long *)(lVar10 + 0x100);
        *(undefined8 *)(lVar10 + 0x100) = 0;
        *puVar8 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar10 + 0x108));
        }
      }
    }
  }
  lVar5 = *(long *)*param_1;
  *(long *)*param_1 = lVar5 + -1;
  LORelease();
  if (lVar5 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar5 = *param_1;
  uVar6 = *(ulong *)(lVar5 + 0x1b0);
  do {
    lVar10 = *(long *)(lVar5 + 0x1a0);
    uVar9 = *(ulong *)(lVar10 + 0x1500);
    while (uVar9 != (uVar6 & 0xffffffffffffffe0)) {
      lVar10 = *(long *)(lVar10 + 0x1508);
      if (lVar10 == 0) goto LAB_102872d80;
      *(long *)(lVar5 + 0x1a0) = lVar10;
      InstructionSynchronizationBarrier();
      uVar9 = *(ulong *)(lVar10 + 0x1500);
    }
    lVar7 = *(long *)(lVar5 + 0x1a8);
    if (lVar7 == lVar10) {
      uVar6 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
      uVar9 = *(ulong *)(lVar10 + 0x1510) >> uVar6;
    }
    else {
      do {
        if (((*(ulong *)(lVar7 + 0x1510) >> 0x20 & 1) == 0) ||
           (*(ulong *)(lVar5 + 0x1b0) < *(ulong *)(lVar7 + 0x1518))) break;
        if (*(long *)(lVar7 + 0x1508) == 0) {
          func_0x000108a07a20(&UNK_10b28f3d0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102872df8);
          (*pcVar4)();
        }
        *(long *)(lVar5 + 0x1a8) = *(long *)(lVar7 + 0x1508);
        *(undefined8 *)(lVar7 + 0x1500) = 0;
        *(undefined8 *)(lVar7 + 0x1510) = 0;
        *(undefined8 *)(lVar7 + 0x1508) = 0;
        lVar10 = *(long *)(lVar5 + 0x80);
        *(long *)(lVar7 + 0x1500) = *(long *)(lVar10 + 0x1500) + 0x20;
        plVar1 = (long *)(lVar10 + 0x1508);
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar7;
        }
        else {
          *(long *)(lVar7 + 0x1500) = *(long *)(lVar10 + 0x1500) + 0x20;
          lVar2 = *(long *)(lVar10 + 0x1508);
          if (lVar2 == 0) {
            *(long *)(lVar10 + 0x1508) = lVar7;
          }
          else {
            *(long *)(lVar7 + 0x1500) = *(long *)(lVar2 + 0x1500) + 0x20;
            if (*(long *)(lVar2 + 0x1508) == 0) {
              *(long *)(lVar2 + 0x1508) = lVar7;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar7 = *(long *)(lVar5 + 0x1a8);
      } while (lVar7 != *(long *)(lVar5 + 0x1a0));
      lVar10 = *(long *)(lVar5 + 0x1a0);
      uVar6 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
      uVar9 = *(ulong *)(lVar10 + 0x1510) >> uVar6;
    }
    if ((uVar9 & 1) == 0) {
LAB_102872d80:
      lVar10 = *(long *)(lVar5 + 0x1a8);
      do {
        lVar10 = *(long *)(lVar10 + 0x1508);
        _free();
      } while (lVar10 != 0);
      if (*(long *)(lVar5 + 0x100) != 0) {
        (**(code **)(*(long *)(lVar5 + 0x100) + 0x18))(*(undefined8 *)(lVar5 + 0x108));
      }
      if (lVar5 != -1) {
        lVar10 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          _free(lVar5);
        }
      }
      return;
    }
    puVar8 = (ulong *)(lVar10 + uVar6 * 0xa8);
    uStack_e8 = puVar8[1];
    uStack_f0 = *puVar8;
    uStack_d8 = puVar8[3];
    uStack_e0 = puVar8[2];
    uStack_c8 = puVar8[5];
    uStack_d0 = puVar8[4];
    uStack_b8 = puVar8[7];
    uStack_c0 = puVar8[6];
    uStack_a8 = puVar8[9];
    uStack_b0 = puVar8[8];
    uStack_98 = puVar8[0xb];
    uStack_a0 = puVar8[10];
    uStack_88 = puVar8[0xd];
    uStack_90 = puVar8[0xc];
    uStack_78 = puVar8[0xf];
    uStack_80 = puVar8[0xe];
    uStack_68 = puVar8[0x11];
    uStack_70 = puVar8[0x10];
    uStack_58 = puVar8[0x13];
    uStack_60 = puVar8[0x12];
    uStack_50 = puVar8[0x14];
    if ((uStack_f0 & 0xe) == 0xc) goto LAB_102872d80;
    uVar6 = *(long *)(lVar5 + 0x1b0) + 1;
    *(ulong *)(lVar5 + 0x1b0) = uVar6;
    func_0x0001028651b8(&uStack_f0);
  } while( true );
}

