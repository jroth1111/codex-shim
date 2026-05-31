
void FUN_100e8449c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar5 = plVar3[10];
  do {
    uVar4 = uVar5;
    if (((uint)uVar4 >> 2 & 1) != 0) goto LAB_100e844d4;
    uVar5 = plVar3[10];
  } while (uVar5 != uVar4);
  plVar3[10] = uVar4 | 2;
LAB_100e844d4:
  if ((uVar4 & 5) == 1) {
    (**(code **)(plVar3[8] + 0x10))(plVar3[9]);
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      return;
    }
  }
  lVar1 = *plVar3;
  *plVar3 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar1 = *param_1;
  uVar5 = *(ulong *)(lVar1 + 0x50);
  if ((uVar5 & 1) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x40) + 0x18))(*(undefined8 *)(lVar1 + 0x48));
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0x18))(*(undefined8 *)(lVar1 + 0x38));
  }
  uVar5 = *(ulong *)(lVar1 + 0x10);
  if (uVar5 == 0x8000000000000007) goto LAB_1034c6824;
  uVar4 = uVar5 ^ 0x8000000000000000;
  if (-1 < (long)uVar5) {
    uVar4 = 3;
  }
  if (uVar4 == 3) {
    if (uVar5 == 0) goto LAB_1034c6824;
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  else {
    if (uVar4 != 1) goto LAB_1034c6824;
    lVar2 = *(long *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (*(long *)(lVar1 + 0x18) == 0) goto LAB_1034c6824;
  }
  _free(lVar2);
LAB_1034c6824:
  if (lVar1 != -1) {
    lVar2 = *(long *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

