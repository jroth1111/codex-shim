
/* WARNING: Removing unreachable block (ram,0x00010199401c) */

void FUN_100cc313c(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong in_xzr;
  
  lVar10 = *param_1;
  LOAcquire();
  lVar5 = *(long *)(lVar10 + 0x1f0);
  *(long *)(lVar10 + 0x1f0) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    LOAcquire();
    lVar5 = *(long *)(lVar10 + 0x88);
    *(long *)(lVar10 + 0x88) = lVar5 + 1;
    lVar5 = func_0x000100fca7ac(lVar10 + 0x80,lVar5);
    *(ulong *)(lVar5 + 0x110) = *(ulong *)(lVar5 + 0x110) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar10 + 0x110);
    LOAcquire();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | 2;
    LORelease();
    if (uVar6 == 0) {
      lVar5 = *(long *)(lVar10 + 0x100);
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar10 + 0x108));
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
    uVar9 = *(ulong *)(lVar10 + 0x100);
    while (uVar9 != (uVar6 & 0xffffffffffffffe0)) {
      lVar10 = *(long *)(lVar10 + 0x108);
      if (lVar10 == 0) goto LAB_101994114;
      *(long *)(lVar5 + 0x1a0) = lVar10;
      InstructionSynchronizationBarrier();
      uVar9 = *(ulong *)(lVar10 + 0x100);
    }
    lVar7 = *(long *)(lVar5 + 0x1a8);
    if (lVar7 == lVar10) {
      uVar9 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
      uVar6 = *(ulong *)(lVar10 + 0x110);
      if ((uVar6 >> uVar9 & 1) != 0) goto LAB_10199400c;
LAB_1019940e8:
      uVar8 = 1;
      if ((uVar6 & 0x200000000) == 0) {
        uVar8 = 2;
      }
      if (uVar8 == 2) {
LAB_101994114:
        lVar10 = *(long *)(lVar5 + 0x1a8);
        do {
          lVar10 = *(long *)(lVar10 + 0x108);
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
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar5);
            return;
          }
        }
        return;
      }
    }
    else {
      do {
        if (((*(ulong *)(lVar7 + 0x110) >> 0x20 & 1) == 0) ||
           (*(ulong *)(lVar5 + 0x1b0) < *(ulong *)(lVar7 + 0x118))) break;
        if (*(long *)(lVar7 + 0x108) == 0) {
          func_0x000108a07a20(&UNK_10b269340);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101994190);
          (*pcVar4)();
        }
        *(long *)(lVar5 + 0x1a8) = *(long *)(lVar7 + 0x108);
        *(undefined8 *)(lVar7 + 0x108) = 0;
        *(undefined8 *)(lVar7 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x100) = 0;
        lVar10 = *(long *)(lVar5 + 0x80);
        *(long *)(lVar7 + 0x100) = *(long *)(lVar10 + 0x100) + 0x20;
        plVar2 = (long *)(lVar10 + 0x108);
        lVar10 = *plVar2;
        if (lVar10 == 0) {
          *plVar2 = lVar7;
        }
        else {
          *(long *)(lVar7 + 0x100) = *(long *)(lVar10 + 0x100) + 0x20;
          lVar3 = *(long *)(lVar10 + 0x108);
          if (lVar3 == 0) {
            *(long *)(lVar10 + 0x108) = lVar7;
          }
          else {
            *(long *)(lVar7 + 0x100) = *(long *)(lVar3 + 0x100) + 0x20;
            if (*(long *)(lVar3 + 0x108) == 0) {
              *(long *)(lVar3 + 0x108) = lVar7;
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
      uVar9 = *(ulong *)(lVar5 + 0x1b0) & 0x1f;
      uVar6 = *(ulong *)(lVar10 + 0x110);
      if ((uVar6 >> uVar9 & 1) == 0) goto LAB_1019940e8;
LAB_10199400c:
      uVar8 = 0;
      lVar7 = *(long *)(lVar10 + uVar9 * 8);
    }
    if ((uVar8 & 1) != 0) goto LAB_101994114;
    uVar6 = *(long *)(lVar5 + 0x1b0) + 1;
    *(ulong *)(lVar5 + 0x1b0) = uVar6;
    if (lVar7 != 0) {
      FUN_101931634();
    }
  } while( true );
}

