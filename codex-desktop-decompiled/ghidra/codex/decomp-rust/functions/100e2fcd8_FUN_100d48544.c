
/* WARNING: Possible PIC construction at 0x000100d4859c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d485a0) */

void FUN_100d48544(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  ulong uVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar4 = param_1;
  if ((char)param_1[0x21] != '\0') {
    if ((char)param_1[0x21] != '\x03') {
      return;
    }
    if (((char)param_1[0x20] == '\x03') && ((char)param_1[0x17] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x18);
      if (param_1[0x19] != 0) {
        (**(code **)(param_1[0x19] + 0x18))(param_1[0x1a]);
      }
    }
    unaff_x30 = 0x100d485a0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar4 = param_1 + 9;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*plVar4 != 4 || (short)plVar4[5] != 0x12) {
    (**(code **)(plVar4[1] + 0x20))(plVar4 + 4,plVar4[2],plVar4[3]);
  }
  plVar6 = (long *)plVar4[7];
  if (plVar6 != (long *)0x0) {
    uVar7 = plVar6[10];
    do {
      uVar5 = uVar7;
      if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_100e2fd3c;
      uVar7 = plVar6[10];
    } while (uVar7 != uVar5);
    plVar6[10] = uVar5 | 2;
LAB_100e2fd3c:
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar6[8] + 0x10))(plVar6[9]);
    }
    lVar2 = *plVar6;
    *plVar6 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar2 = plVar4[7];
      uVar7 = *(ulong *)(lVar2 + 0x50);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*(long *)(lVar2 + 0x40) + 0x18))(*(undefined8 *)(lVar2 + 0x48));
      }
      if (((uint)uVar7 >> 3 & 1) != 0) {
        (**(code **)(*(long *)(lVar2 + 0x30) + 0x18))(*(undefined8 *)(lVar2 + 0x38));
      }
      if (1 < *(long *)(lVar2 + 0x10) - 0x15U) {
        FUN_1017a49cc(lVar2 + 0x10);
      }
      if (lVar2 != -1) {
        lVar3 = *(long *)(lVar2 + 8);
        *(long *)(lVar2 + 8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar2);
          return;
        }
      }
      return;
    }
  }
  return;
}

