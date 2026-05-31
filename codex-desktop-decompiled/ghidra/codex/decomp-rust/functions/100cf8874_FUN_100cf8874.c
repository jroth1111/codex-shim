
void FUN_100cf8874(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (*param_1 == 0) {
    return;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar5 = plVar4[10];
  do {
    uVar3 = uVar5;
    if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_100cf88b8;
    uVar5 = plVar4[10];
  } while (uVar5 != uVar3);
  plVar4[10] = uVar3 | 2;
LAB_100cf88b8:
  if ((uVar3 & 5) == 1) {
    (**(code **)(plVar4[8] + 0x10))(plVar4[9]);
  }
  lVar1 = *plVar4;
  *plVar4 = lVar1 + -1;
  LORelease();
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar1 = param_1[1];
  uVar5 = *(ulong *)(lVar1 + 0x50);
  if ((uVar5 & 1) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x40) + 0x18))(*(undefined8 *)(lVar1 + 0x48));
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0x18))(*(undefined8 *)(lVar1 + 0x38));
  }
  uVar5 = *(ulong *)(lVar1 + 0x10);
  if (uVar5 == 0x8000000000000007) goto LAB_1034c6824;
  uVar3 = uVar5 ^ 0x8000000000000000;
  if (-1 < (long)uVar5) {
    uVar3 = 3;
  }
  if (uVar3 == 3) {
    if (uVar5 == 0) goto LAB_1034c6824;
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  else {
    if (uVar3 != 1) goto LAB_1034c6824;
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

