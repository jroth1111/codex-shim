
void FUN_1002d3a10(long param_1,long *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong in_xzr;
  undefined1 auVar13 [16];
  long *plStack_1e8;
  undefined1 auStack_1b0 [368];
  
  lVar11 = *param_2;
  uVar5 = *(ulong *)(lVar11 + 0x1c0);
  while( true ) {
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_10b61b3a8)(param_1,param_3,0x170);
      return;
    }
    if (uVar5 == 0xfffffffffffffffe) break;
    uVar10 = uVar5 + 2;
    uVar2 = *(ulong *)(lVar11 + 0x1c0);
    bVar3 = uVar2 == uVar5;
    uVar5 = uVar2;
    if (bVar3) {
      *(ulong *)(lVar11 + 0x1c0) = uVar10;
      _memcpy(auStack_1b0,param_3,0x170);
      LOAcquire();
      uVar5 = *(ulong *)(lVar11 + 0x88);
      *(ulong *)(lVar11 + 0x88) = uVar5 + 1;
      lVar6 = FUN_1002d388c(lVar11 + 0x80,uVar5);
      _memcpy(lVar6 + (uVar5 & 0x1f) * 0x170,auStack_1b0,0x170);
      *(ulong *)(lVar6 + 0x2e10) = *(ulong *)(lVar6 + 0x2e10) | 1L << (uVar5 & 0x1f);
      LORelease();
      puVar1 = (ulong *)(lVar11 + 0x110);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar6 = *(long *)(lVar11 + 0x100);
        *(undefined8 *)(lVar11 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar11 + 0x108));
        }
      }
      *(undefined8 *)(param_1 + 0x158) = 3;
      return;
    }
  }
  uVar7 = __ZN3std7process5abort17hdc01e45e25b715e8E();
  FUN_1002b7fa4(auStack_1b0);
  __Unwind_Resume(uVar7);
  auVar13 = FUN_107c05ccc();
  plVar9 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 2;
    plStack_1e8 = plVar9;
    if (*plVar12 != 5) {
      if (*plVar12 == 4) {
        FUN_1002be704(plVar9 + 3);
        FUN_1002c07f4(plVar9 + 0x11);
      }
      else {
        FUN_1002b4e34(plVar12);
      }
    }
    _memcpy(plVar12,param_3,0x160);
    uVar5 = plVar9[0x32];
    do {
      uVar10 = uVar5;
      if (((uint)uVar10 >> 2 & 1) != 0) goto LAB_1002d3bd0;
      uVar5 = plVar9[0x32];
    } while (uVar5 != uVar10);
    plVar9[0x32] = uVar10 | 2;
LAB_1002d3bd0:
    if ((uVar10 & 5) == 1) {
      (**(code **)(plVar9[0x30] + 0x10))(plVar9[0x31]);
    }
    if (((uint)uVar10 >> 2 & 1) == 0) {
      *plVar8 = 5;
      lVar11 = *plVar9;
      *plVar9 = lVar11 + -1;
      LORelease();
    }
    else {
      lVar11 = *plVar12;
      *plVar12 = 5;
      if (lVar11 == 5) {
        FUN_107c05cb0(&UNK_10b1f6618);
        goto LAB_1002d3c80;
      }
      _memcpy(plVar8 + 1,plVar9 + 3,0x158);
      *plVar8 = lVar11;
      lVar11 = *plVar9;
      *plVar9 = lVar11 + -1;
      LORelease();
    }
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hffac591e655df859E(&plStack_1e8);
    }
    return;
  }
  FUN_107c05cb0(&UNK_10b1f6600);
LAB_1002d3c80:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002d3c84);
  (*pcVar4)();
}

