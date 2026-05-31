
/* WARNING: Possible PIC construction at 0x000100cd8ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100cd90a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100cd8ffc) */
/* WARNING: Removing unreachable block (ram,0x000100cd90ac) */

void FUN_100c9d8a4(long param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined1 *unaff_x29;
  undefined8 uVar8;
  undefined8 unaff_x30;
  undefined8 uVar9;
  
  cVar1 = *(char *)(param_1 + 0x32);
  if (cVar1 == '\x03') {
    unaff_x19 = param_1 + 0x38;
    unaff_x29 = &stack0xfffffffffffffff0;
    bVar2 = *(byte *)(param_1 + 0xa1);
    if (bVar2 < 5) {
      if (bVar2 == 3) {
        if (*(char *)(param_1 + 0x128) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x120) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x118) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0xd0) == '\x04') {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0xd8);
          if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100cd9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(param_1 + 0xe0) + 0x18))(*(undefined8 *)(param_1 + 0xe8));
            return;
          }
          return;
        }
        return;
      }
      if (bVar2 != 4) {
        return;
      }
      func_0x000100cbccb8(param_1 + 0xa8);
      goto LAB_100cd90d8;
    }
    if (bVar2 == 5) {
      if ((((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x120) == '\x03')) &&
          (*(char *)(param_1 + 0x118) == '\x03')) && (*(char *)(param_1 + 0xd0) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xd8);
        if (*(long *)(param_1 + 0xe0) != 0) {
          (**(code **)(*(long *)(param_1 + 0xe0) + 0x18))(*(undefined8 *)(param_1 + 0xe8));
        }
      }
    }
    else {
      if (bVar2 != 6) {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xc0);
      if (cVar1 == '\x05') {
        func_0x000100e8b4b8(param_1 + 200);
      }
      else {
        if (cVar1 == '\x04') {
          plVar5 = (long *)(param_1 + 200);
          unaff_x30 = 0x100cd90ac;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
          goto SUB_100ccde68;
        }
        if (cVar1 == '\x03') {
          param_1 = param_1 + 200;
          unaff_x30 = 0x100cd8ffc;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
          goto SUB_100cd84bc;
        }
      }
    }
    lVar3 = **(long **)(param_1 + 0x70);
    **(long **)(param_1 + 0x70) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
LAB_100cd90d8:
    *(undefined1 *)(param_1 + 0xa0) = 0;
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x60) == '\x03') {
      if (*(char *)(param_1 + 0xe8) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xe0) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xd8) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x90) != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x98);
    }
    else {
      if (*(char *)(param_1 + 0x60) != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0xe8) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xe0) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xd8) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x90) != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x98);
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ca1e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0xa0) + 0x18))(*(undefined8 *)(param_1 + 0xa8));
      return;
    }
    return;
  }
  if (cVar1 != '\x05') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0x4de3) != '\0') {
      if (*(char *)(param_1 + 0x4de3) == '\x03') {
        func_0x000100e74494(param_1 + 0x58);
        *(undefined2 *)(param_1 + 0x4de0) = 0;
        *(undefined1 *)(param_1 + 0x4de2) = 0;
      }
      return;
    }
    lVar3 = **(long **)(param_1 + 0x4dd0);
    **(long **)(param_1 + 0x4dd0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1 + 0x4dd0);
    }
    lVar3 = **(long **)(param_1 + 0x4dd8);
    **(long **)(param_1 + 0x4dd8) = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    plVar5 = (long *)(param_1 + 0x4dd8);
  }
  else if (cVar1 == '\x04') {
    plVar5 = (long *)(param_1 + 0x58);
SUB_100ccde68:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((char)plVar5[0x561] != '\0') {
      if ((char)plVar5[0x561] != '\x03') {
        return;
      }
      func_0x000100cb7ac0(plVar5 + 2);
      lVar3 = *(long *)plVar5[1];
      *(long *)plVar5[1] = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
      }
      lVar3 = *(long *)*plVar5;
      *(long *)*plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x0001034c7088;
    }
    lVar3 = *(long *)plVar5[0x55f];
    *(long *)plVar5[0x55f] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(plVar5 + 0x55f);
    }
    lVar3 = *(long *)plVar5[0x560];
    *(long *)plVar5[0x560] = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    plVar5 = plVar5 + 0x560;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
  }
  else {
    if (cVar1 != '\x03') {
      return;
    }
    param_1 = param_1 + 0x58;
SUB_100cd84bc:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (*(char *)(param_1 + 0x4ae8) != '\0') {
      if (*(char *)(param_1 + 0x4ae8) != '\x03') {
        return;
      }
      func_0x000100cc3f1c(param_1);
      lVar3 = **(long **)(param_1 + 0x4ac8);
      **(long **)(param_1 + 0x4ac8) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_1 + 0x4ac8);
      }
      lVar3 = **(long **)(param_1 + 0x4ac0);
      **(long **)(param_1 + 0x4ac0) = lVar3 + -1;
      LORelease();
      if (lVar3 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      plVar5 = (long *)(param_1 + 0x4ac0);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
code_r0x0001034c7088:
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar7;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar8;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar9;
      lVar3 = *plVar5;
      FUN_103399ec0(lVar3 + 0x10);
      if (lVar3 == -1) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar4 + -1;
      LORelease();
      if (lVar4 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      goto _free;
    }
    lVar3 = **(long **)(param_1 + 0x4ad0);
    **(long **)(param_1 + 0x4ad0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1 + 0x4ad0);
    }
    lVar3 = **(long **)(param_1 + 0x4ad8);
    **(long **)(param_1 + 0x4ad8) = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    plVar5 = (long *)(param_1 + 0x4ad8);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar3 = *plVar5;
  FUN_1033b1528(lVar3 + 0x10);
  if (lVar3 != -1) {
    lVar4 = *(long *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  return;
}

