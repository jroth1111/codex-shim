
/* WARNING: Possible PIC construction at 0x000100dd993c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd9940) */

void FUN_100dd9824(long *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar8;
  undefined8 unaff_x24;
  long lVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  bVar4 = *(byte *)(param_1 + 0x18);
  if (bVar4 < 4) {
    plVar6 = param_1;
    if (bVar4 == 0) goto SUB_100dfd554;
    if (bVar4 != 3) {
      return;
    }
    if ((char)param_1[0x19] != '\x02' && (char)param_1[0x19] != '\0') {
      lVar5 = *(long *)param_1[0x1a];
      *(long *)param_1[0x1a] = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
    }
  }
  else {
    if (bVar4 == 4) {
      FUN_100d91028(param_1 + 0x19);
    }
    else if (bVar4 == 5) {
      FUN_100d91028(param_1 + 0x1d);
      *(undefined1 *)((long)param_1 + 0xc4) = 0;
    }
    else {
      if (bVar4 != 6) {
        return;
      }
      FUN_100d91028(param_1 + 0x19);
      *(undefined1 *)((long)param_1 + 0xc3) = 0;
      bVar4 = *(byte *)(param_1 + 0xe5);
      if (((bVar4 != 0x20) && (5 < bVar4 - 0x1a)) && (0x18 < bVar4)) {
        lVar5 = *(long *)param_1[0xe6];
        *(long *)param_1[0xe6] = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0xe6);
        }
      }
      if ((*(byte *)(param_1 + 0xe8) != 0x1a) && (0x18 < *(byte *)(param_1 + 0xe8))) {
        lVar5 = *(long *)param_1[0xe9];
        *(long *)param_1[0xe9] = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0xe9);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xc1) = 0;
  }
  unaff_x30 = 0x100dd9940;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  plVar6 = param_1 + 0xd;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
SUB_100dfd554:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*(byte *)(plVar6 + 3) != 0x1a && 0x18 < *(byte *)(plVar6 + 3)) {
    lVar5 = *(long *)plVar6[4];
    *(long *)plVar6[4] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  bVar4 = *(byte *)(plVar6 + 7);
  if ((bVar4 != 0x20) && (5 < bVar4 - 0x1a && 0x18 < bVar4)) {
    lVar5 = *(long *)plVar6[8];
    *(long *)plVar6[8] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar5 = plVar6[1];
  lVar8 = plVar6[2];
  if (lVar8 != 0) {
    lVar9 = lVar5 + 0x28;
    do {
      uVar2 = *(undefined8 *)(lVar9 + -0x28);
      puVar3 = *(undefined8 **)(lVar9 + -0x20);
      pcVar7 = (code *)*puVar3;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar2);
      }
      if (puVar3[1] != 0) {
        _free(uVar2);
      }
      lVar9 = lVar9 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (*plVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar5);
  return;
}

