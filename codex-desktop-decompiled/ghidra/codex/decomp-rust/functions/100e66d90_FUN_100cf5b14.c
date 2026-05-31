
void FUN_100cf5b14(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  cVar2 = *(char *)(param_1 + 0x3d);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x38) != -1) {
      _close();
    }
    lVar3 = **(long **)(param_1 + 0x20);
    **(long **)(param_1 + 0x20) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
    }
    plVar5 = (long *)(param_1 + 0x28);
    plVar6 = (long *)*plVar5;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      *plVar6 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
code_r0x0001047f2050:
        lVar3 = *plVar5;
        puVar1 = (undefined8 *)plVar5[1];
        uVar7 = puVar1[2];
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(lVar3 + (uVar7 - 1 & 0xfffffffffffffff0) + 0x10);
        }
        if (lVar3 != -1) {
          lVar4 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            if (uVar7 < 9) {
              uVar7 = 8;
            }
            if ((uVar7 + puVar1[1] + 0xf & -uVar7) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__free_10b61b0a8)(lVar3);
              return;
            }
          }
        }
        return;
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      plVar5 = (long *)(param_1 + 0x40);
      if (*(char *)(param_1 + 0x657) == '\0') {
        lVar3 = **(long **)(param_1 + 0x648);
        **(long **)(param_1 + 0x648) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(param_1 + 0x648);
        }
        _close(*(undefined4 *)(param_1 + 0x650));
        plVar6 = (long *)*plVar5;
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          *plVar6 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x0001047f2050;
          }
        }
      }
      else if (*(char *)(param_1 + 0x657) == '\x03') {
        FUN_100ca7208(param_1 + 0x50);
        *(undefined2 *)(param_1 + 0x654) = 0;
        *(undefined1 *)(param_1 + 0x656) = 0;
      }
      return;
    }
    if (cVar2 == '\x04') {
      cVar2 = *(char *)(param_1 + 0x99);
      if (cVar2 == '\0') {
        lVar3 = **(long **)(param_1 + 0x60);
        **(long **)(param_1 + 0x60) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
        }
        plVar5 = (long *)(param_1 + 0x68);
        plVar6 = (long *)*plVar5;
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          *plVar6 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x0001047f2050;
          }
        }
      }
      else {
        if (cVar2 == '\x03') {
          FUN_100d3407c(param_1 + 0xb8);
        }
        else {
          if (cVar2 != '\x04') {
            return;
          }
          FUN_100ca7208(param_1 + 0xa0);
        }
        *(undefined1 *)(param_1 + 0x9d) = 0;
        if (((*(byte *)(param_1 + 0x9b) & 1) != 0) &&
           (plVar5 = *(long **)(param_1 + 0xa8), plVar5 != (long *)0x0)) {
          lVar3 = *plVar5;
          *plVar5 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
          }
        }
        *(undefined1 *)(param_1 + 0x9b) = 0;
        if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
          lVar3 = **(long **)(param_1 + 0xa0);
          **(long **)(param_1 + 0xa0) = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
          }
        }
        *(undefined1 *)(param_1 + 0x9c) = 0;
      }
      return;
    }
  }
  return;
}

