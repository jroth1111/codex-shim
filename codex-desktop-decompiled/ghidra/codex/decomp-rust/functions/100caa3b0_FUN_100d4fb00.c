
/* WARNING: Possible PIC construction at 0x000100d4fb58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d4fb5c) */

void FUN_100d4fb00(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x19;
  long *plVar5;
  undefined8 unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar3 = param_1;
  if ((char)param_1[0x1d] != '\0') {
    if ((char)param_1[0x1d] != '\x03') {
      return;
    }
    if (((char)param_1[0x1c] == '\x03') && ((char)param_1[0x13] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x14);
      if (param_1[0x15] != 0) {
        (**(code **)(param_1[0x15] + 0x18))(param_1[0x16]);
      }
    }
    unaff_x30 = 0x100d4fb5c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar3 = param_1 + 7;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (0 < plVar3[2]) {
    _free(plVar3[3]);
  }
  if (*plVar3 != 0) {
    plVar5 = (long *)plVar3[1];
    if (plVar5 != (long *)0x0) {
      uVar6 = plVar5[6];
      do {
        uVar4 = uVar6;
        if (((uint)uVar4 >> 2 & 1) != 0) goto LAB_100caa408;
        uVar6 = plVar5[6];
      } while (uVar6 != uVar4);
      plVar5[6] = uVar4 | 2;
LAB_100caa408:
      if ((uVar4 & 5) == 1) {
        (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      }
      lVar2 = *plVar5;
      *plVar5 = lVar2 + -1;
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
        lVar2 = plVar3[1];
        uVar6 = *(ulong *)(lVar2 + 0x30);
        if ((uVar6 & 1) != 0) {
          (**(code **)(*(long *)(lVar2 + 0x20) + 0x18))(*(undefined8 *)(lVar2 + 0x28));
        }
        if (((uint)uVar6 >> 3 & 1) != 0) {
          (**(code **)(*(long *)(lVar2 + 0x10) + 0x18))(*(undefined8 *)(lVar2 + 0x18));
        }
        lVar7 = *(long *)(lVar2 + 0x38);
        if (-0x7fffffffffffffff < lVar7) {
          if (*(long *)(lVar2 + 0x50) != -0x7ffffffffffffffb) {
            func_0x00010194dc28();
          }
          if (lVar7 != 0) {
            _free(*(undefined8 *)(lVar2 + 0x40));
          }
        }
        if (lVar2 != -1) {
          lVar7 = *(long *)(lVar2 + 8);
          *(long *)(lVar2 + 8) = lVar7 + -1;
          LORelease();
          if (lVar7 == 1) {
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
  }
  return;
}

