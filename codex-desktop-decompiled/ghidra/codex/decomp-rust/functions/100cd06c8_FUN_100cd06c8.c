
void FUN_100cd06c8(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong in_xzr;
  ulong uStack_248;
  undefined1 auStack_240 [496];
  
  lVar9 = *param_1;
  LOAcquire();
  lVar5 = *(long *)(lVar9 + 0x1f0);
  *(long *)(lVar9 + 0x1f0) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    LOAcquire();
    lVar5 = *(long *)(lVar9 + 0x88);
    *(long *)(lVar9 + 0x88) = lVar5 + 1;
    lVar5 = FUN_100fca4a4(lVar9 + 0x80,lVar5);
    *(ulong *)(lVar5 + 0x3f10) = *(ulong *)(lVar5 + 0x3f10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar9 + 0x110);
    LOAcquire();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | 2;
    LORelease();
    if (uVar6 == 0) {
      lVar5 = *(long *)(lVar9 + 0x100);
      *(undefined8 *)(lVar9 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar9 + 0x108));
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
    lVar9 = *(long *)(lVar5 + 0x1a0);
    uVar8 = *(ulong *)(lVar9 + 0x3f00);
    while (uVar8 != (uVar6 & 0xffffffffffffffe0)) {
      lVar9 = *(long *)(lVar9 + 0x3f08);
      if (lVar9 == 0) goto LAB_101994e30;
      *(long *)(lVar5 + 0x1a0) = lVar9;
      InstructionSynchronizationBarrier();
      uVar8 = *(ulong *)(lVar9 + 0x3f00);
    }
    lVar7 = *(long *)(lVar5 + 0x1a8);
    if (lVar7 == lVar9) {
      uVar6 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
      uVar8 = *(ulong *)(lVar9 + 0x3f10) >> uVar6;
    }
    else {
      do {
        if (((*(ulong *)(lVar7 + 0x3f10) >> 0x20 & 1) == 0) ||
           (*(ulong *)(lVar5 + 0x1b0) < *(ulong *)(lVar7 + 0x3f18))) break;
        if (*(long *)(lVar7 + 0x3f08) == 0) {
          func_0x000108a07a20(&UNK_10b269340);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101994eac);
          (*pcVar4)();
        }
        *(long *)(lVar5 + 0x1a8) = *(long *)(lVar7 + 0x3f08);
        *(undefined8 *)(lVar7 + 0x3f00) = 0;
        *(undefined8 *)(lVar7 + 0x3f10) = 0;
        *(undefined8 *)(lVar7 + 0x3f08) = 0;
        lVar9 = *(long *)(lVar5 + 0x80);
        *(long *)(lVar7 + 0x3f00) = *(long *)(lVar9 + 0x3f00) + 0x20;
        plVar2 = (long *)(lVar9 + 0x3f08);
        lVar9 = *plVar2;
        if (lVar9 == 0) {
          *plVar2 = lVar7;
        }
        else {
          *(long *)(lVar7 + 0x3f00) = *(long *)(lVar9 + 0x3f00) + 0x20;
          lVar3 = *(long *)(lVar9 + 0x3f08);
          if (lVar3 == 0) {
            *(long *)(lVar9 + 0x3f08) = lVar7;
          }
          else {
            *(long *)(lVar7 + 0x3f00) = *(long *)(lVar3 + 0x3f00) + 0x20;
            if (*(long *)(lVar3 + 0x3f08) == 0) {
              *(long *)(lVar3 + 0x3f08) = lVar7;
            }
            else {
              _free();
            }
          }
        }
        InstructionSynchronizationBarrier();
        lVar7 = *(long *)(lVar5 + 0x1a8);
      } while (lVar7 != *(long *)(lVar5 + 0x1a0));
      lVar9 = *(long *)(lVar5 + 0x1a0);
      uVar6 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
      uVar8 = *(ulong *)(lVar9 + 0x3f10) >> uVar6;
    }
    if (((uVar8 & 1) == 0) ||
       (_memcpy(&uStack_248,lVar9 + uVar6 * 0x1f8,0x1f8),
       (uStack_248 & 0xfffffffffffffffe) == 0x8000000000000044)) {
LAB_101994e30:
      lVar9 = *(long *)(lVar5 + 0x1a8);
      do {
        lVar9 = *(long *)(lVar9 + 0x3f08);
        _free();
      } while (lVar9 != 0);
      if (*(long *)(lVar5 + 0x100) != 0) {
        (**(code **)(*(long *)(lVar5 + 0x100) + 0x18))(*(undefined8 *)(lVar5 + 0x108));
      }
      if (lVar5 != -1) {
        lVar9 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          _free(lVar5);
        }
      }
      return;
    }
    uVar6 = *(long *)(lVar5 + 0x1b0) + 1;
    *(ulong *)(lVar5 + 0x1b0) = uVar6;
    lVar9 = uStack_248 + 0x7fffffffffffffbf;
    if (uStack_248 < 0x8000000000000041) {
      lVar9 = 1;
    }
    if (lVar9 == 1) {
      FUN_10196502c(&uStack_248);
    }
    else if (lVar9 == 0) {
      FUN_101962cd4(auStack_240);
    }
  } while( true );
}

