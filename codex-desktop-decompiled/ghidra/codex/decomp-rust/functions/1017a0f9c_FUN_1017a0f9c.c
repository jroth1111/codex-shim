
void FUN_1017a0f9c(long *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong in_xzr;
  long alStack_60 [2];
  
  plVar11 = (long *)*param_1;
  LOAcquire();
  lVar4 = plVar11[0x3e];
  plVar11[0x3e] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    LOAcquire();
    uVar5 = plVar11[0x11];
    plVar11[0x11] = uVar5 + 1;
    uVar12 = uVar5 & 0xffffffffffffffe0;
    lVar4 = plVar11[0x10];
    uVar6 = uVar12 - *(long *)(lVar4 + 0x800);
    if (uVar6 != 0) {
      plVar9 = (long *)(lVar4 + 0x800);
      bVar3 = (uVar5 & 0x1f) < uVar6 >> 5;
      lVar8 = lVar4;
      do {
        while( true ) {
          lVar4 = *(long *)(lVar8 + 0x808);
          if (*(long *)(lVar8 + 0x808) == 0) {
            lVar4 = *plVar9;
            lVar7 = _malloc(0x820);
            if (lVar7 == 0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x820);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1017a1194);
              (*pcVar2)();
            }
            *(long *)(lVar7 + 0x800) = lVar4 + 0x20;
            *(undefined8 *)(lVar7 + 0x808) = 0;
            *(undefined8 *)(lVar7 + 0x818) = 0;
            *(undefined8 *)(lVar7 + 0x810) = 0;
            lVar4 = *(long *)(lVar8 + 0x808);
            if (lVar4 == 0) {
              *(long *)(lVar8 + 0x808) = lVar7;
              lVar4 = lVar7;
            }
            else {
              *(long *)(lVar7 + 0x800) = *(long *)(lVar4 + 0x800) + 0x20;
              lVar10 = *(long *)(lVar4 + 0x808);
              if (lVar10 == 0) {
                *(long *)(lVar4 + 0x808) = lVar7;
              }
              else {
                do {
                  InstructionSynchronizationBarrier();
                  *(long *)(lVar7 + 0x800) = *(long *)(lVar10 + 0x800) + 0x20;
                  plVar9 = (long *)(lVar10 + 0x808);
                  lVar10 = *plVar9;
                } while (lVar10 != 0);
                *plVar9 = lVar7;
              }
            }
          }
          if (((bool)(bVar3 & (int)*(undefined8 *)(lVar8 + 0x810) == -1)) &&
             (plVar11[0x10] == lVar8)) break;
          bVar3 = false;
          InstructionSynchronizationBarrier();
          plVar9 = (long *)(lVar4 + 0x800);
          lVar8 = lVar4;
          if (*(ulong *)(lVar4 + 0x800) == uVar12) goto LAB_1017a0ff0;
        }
        plVar11[0x10] = lVar4;
        uVar6 = plVar11[0x11];
        plVar11[0x11] = uVar6 | in_xzr;
        LORelease();
        *(ulong *)(lVar8 + 0x818) = uVar6;
        *(ulong *)(lVar8 + 0x810) = *(ulong *)(lVar8 + 0x810) | 0x100000000;
        LORelease();
        bVar3 = true;
        InstructionSynchronizationBarrier();
        plVar9 = (long *)(lVar4 + 0x800);
        lVar8 = lVar4;
      } while (*(ulong *)(lVar4 + 0x800) != uVar12);
    }
LAB_1017a0ff0:
    *(ulong *)(lVar4 + 0x810) = *(ulong *)(lVar4 + 0x810) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(plVar11 + 0x22);
    LOAcquire();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | 2;
    LORelease();
    if (uVar6 == 0) {
      lVar4 = plVar11[0x20];
      plVar11[0x20] = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(plVar11[0x21]);
      }
    }
  }
  lVar4 = *plVar11;
  *plVar11 = lVar4 + -1;
  LORelease();
  if (lVar4 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar4 = *param_1;
  while (func_0x0001017af414(alStack_60,lVar4 + 0x1a0,lVar4 + 0x80), 1 < alStack_60[0] - 7U) {
    FUN_1017a7f20(alStack_60);
  }
  lVar8 = *(long *)(lVar4 + 0x1a8);
  do {
    lVar8 = *(long *)(lVar8 + 0x808);
    _free();
  } while (lVar8 != 0);
  if (*(long *)(lVar4 + 0x100) != 0) {
    (**(code **)(*(long *)(lVar4 + 0x100) + 0x18))(*(undefined8 *)(lVar4 + 0x108));
  }
  if (lVar4 != -1) {
    lVar8 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
  }
  return;
}

