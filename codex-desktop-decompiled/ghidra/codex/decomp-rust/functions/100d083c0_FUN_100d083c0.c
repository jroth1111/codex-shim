
void FUN_100d083c0(long *param_1)

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
  ulong uStack_268;
  long *plStack_260;
  undefined1 auStack_258 [504];
  
  lVar9 = *param_1;
  LOAcquire();
  lVar5 = *(long *)(lVar9 + 0x1f0);
  *(long *)(lVar9 + 0x1f0) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    LOAcquire();
    lVar5 = *(long *)(lVar9 + 0x88);
    *(long *)(lVar9 + 0x88) = lVar5 + 1;
    lVar5 = func_0x000100fcaed8(lVar9 + 0x80,lVar5);
    *(ulong *)(lVar5 + 0x4110) = *(ulong *)(lVar5 + 0x4110) | 0x200000000;
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
  do {
    do {
      lVar9 = *(long *)(lVar5 + 0x1a0);
      uVar6 = *(ulong *)(lVar9 + 0x4100);
      while (uVar6 != (*(ulong *)(lVar5 + 0x1b0) & 0xffffffffffffffe0)) {
        lVar9 = *(long *)(lVar9 + 0x4108);
        if (lVar9 == 0) goto LAB_1026b2e00;
        *(long *)(lVar5 + 0x1a0) = lVar9;
        InstructionSynchronizationBarrier();
        uVar6 = *(ulong *)(lVar9 + 0x4100);
      }
      lVar7 = *(long *)(lVar5 + 0x1a8);
      if (lVar7 == lVar9) {
        uVar6 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
        uVar8 = *(ulong *)(lVar9 + 0x4110) >> uVar6;
      }
      else {
        do {
          if (((*(ulong *)(lVar7 + 0x4110) >> 0x20 & 1) == 0) ||
             (*(ulong *)(lVar5 + 0x1b0) < *(ulong *)(lVar7 + 0x4118))) break;
          if (*(long *)(lVar7 + 0x4108) == 0) {
            func_0x000108a07a20(&UNK_10b2829f0);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1026b2e80);
            (*pcVar4)();
          }
          *(long *)(lVar5 + 0x1a8) = *(long *)(lVar7 + 0x4108);
          *(undefined8 *)(lVar7 + 0x4100) = 0;
          *(undefined8 *)(lVar7 + 0x4110) = 0;
          *(undefined8 *)(lVar7 + 0x4108) = 0;
          lVar9 = *(long *)(lVar5 + 0x80);
          *(long *)(lVar7 + 0x4100) = *(long *)(lVar9 + 0x4100) + 0x20;
          plVar2 = (long *)(lVar9 + 0x4108);
          lVar9 = *plVar2;
          if (lVar9 == 0) {
            *plVar2 = lVar7;
          }
          else {
            *(long *)(lVar7 + 0x4100) = *(long *)(lVar9 + 0x4100) + 0x20;
            lVar3 = *(long *)(lVar9 + 0x4108);
            if (lVar3 == 0) {
              *(long *)(lVar9 + 0x4108) = lVar7;
            }
            else {
              *(long *)(lVar7 + 0x4100) = *(long *)(lVar3 + 0x4100) + 0x20;
              if (*(long *)(lVar3 + 0x4108) == 0) {
                *(long *)(lVar3 + 0x4108) = lVar7;
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
        uVar8 = *(ulong *)(lVar9 + 0x4110) >> uVar6;
      }
      if (((uVar8 & 1) == 0) || (_memcpy(&uStack_268,lVar9 + uVar6 * 0x208,0x208), 1 < uStack_268))
      {
LAB_1026b2e00:
        lVar9 = *(long *)(lVar5 + 0x1a8);
        do {
          lVar9 = *(long *)(lVar9 + 0x4108);
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
      *(long *)(lVar5 + 0x1b0) = *(long *)(lVar5 + 0x1b0) + 1;
      FUN_1026ace6c(auStack_258);
      plVar2 = plStack_260;
    } while ((uStack_268 == 0) || (plStack_260 == (long *)0x0));
    uVar6 = plStack_260[6];
    do {
      uVar8 = uVar6;
      if (((uint)uVar8 >> 2 & 1) != 0) goto LAB_1026b2dcc;
      uVar6 = plStack_260[6];
    } while (uVar6 != uVar8);
    plStack_260[6] = uVar8 | 2;
LAB_1026b2dcc:
    if ((uVar8 & 5) == 1) {
      (**(code **)(plStack_260[4] + 0x10))(plStack_260[5]);
    }
    lVar9 = *plVar2;
    *plVar2 = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(&plStack_260);
    }
  } while( true );
}

