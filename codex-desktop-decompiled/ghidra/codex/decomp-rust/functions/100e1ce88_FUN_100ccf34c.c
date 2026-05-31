
/* WARNING: Possible PIC construction at 0x000100ccf528: Changing call to branch */

void FUN_100ccf34c(long *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  bVar2 = *(byte *)((long)param_1 + 0x2dc);
  if (bVar2 < 4) {
    plVar4 = param_1;
    if (bVar2 != 0) {
      if (bVar2 != 3) {
        return;
      }
      FUN_100cd5a2c(param_1 + 0x5c);
      bVar2 = *(byte *)((long)param_1 + 0x2df);
      goto joined_r0x000100ccf3e8;
    }
  }
  else {
    if (bVar2 == 4) {
      if (((char)param_1[0x67] == '\x03') && ((char)param_1[0x66] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x5e);
        if (param_1[0x5f] != 0) {
          (**(code **)(param_1[0x5f] + 0x18))(param_1[0x60]);
        }
      }
    }
    else {
      if (bVar2 == 5) {
        if (((char)param_1[0x67] == '\x03') && ((char)param_1[0x66] == '\x03')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x5e);
          if (param_1[0x5f] != 0) {
            (**(code **)(param_1[0x5f] + 0x18))(param_1[0x60]);
          }
        }
      }
      else {
        if (bVar2 != 6) {
          return;
        }
        lVar6 = param_1[0x60];
        puVar5 = (undefined8 *)param_1[0x61];
        pcVar3 = (code *)*puVar5;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar6);
        }
        if (puVar5[1] != 0) {
          _free(lVar6);
        }
        lVar6 = *(long *)param_1[0x5e];
        *(long *)param_1[0x5e] = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(param_1 + 0x5e);
        }
      }
      if (param_1[0x58] != 0) {
        _free(param_1[0x59]);
      }
      unaff_x20 = 0x8000000000000000;
      if ((param_1[0x55] != -0x8000000000000000) && (param_1[0x55] != 0)) {
        _free(param_1[0x56]);
      }
      if ((param_1[0x52] != -0x8000000000000000) && (param_1[0x52] != 0)) {
        _free(param_1[0x53]);
      }
      if (param_1[0x4f] != 0) {
        _free(param_1[0x50]);
      }
      if (param_1[0x4c] != 0) {
        _free(param_1[0x4d]);
      }
      if (param_1[0x49] != 0) {
        _free(param_1[0x4a]);
      }
      plVar4 = (long *)param_1[0x47];
      if ((plVar4 != (long *)0x0) && (*(char *)((long)param_1 + 0x2de) == '\x01')) {
        lVar6 = *plVar4;
        *plVar4 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(param_1 + 0x47);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x2de) = 0;
    if ((*(byte *)((long)param_1 + 0x2dd) & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x2dd) = 0;
      bVar2 = *(byte *)((long)param_1 + 0x2df);
joined_r0x000100ccf3e8:
      if ((bVar2 & 1) != 0) {
        func_0x000100e1ce88(param_1 + 0x19);
      }
      *(undefined1 *)((long)param_1 + 0x2df) = 0;
      return;
    }
    unaff_x30 = 0x100ccf52c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    plVar4 = param_1 + 0x30;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*plVar4 != 0) {
    _free(plVar4[1]);
  }
  if (plVar4[3] != 0) {
    _free(plVar4[4]);
  }
  if (plVar4[9] == -0x8000000000000000 || plVar4[9] == 0) {
    if (plVar4[0xc] != -0x8000000000000000 && plVar4[0xc] != 0) {
LAB_100e1cf48:
      _free(plVar4[0xd]);
      lVar6 = plVar4[6];
      goto joined_r0x000100e1cf54;
    }
  }
  else {
    _free(plVar4[10]);
    if (plVar4[0xc] != -0x8000000000000000 && plVar4[0xc] != 0) goto LAB_100e1cf48;
  }
  lVar6 = plVar4[6];
joined_r0x000100e1cf54:
  if (lVar6 != 0) {
    _free(plVar4[7]);
  }
  if ((plVar4[0xf] != -0x8000000000000000) && (plVar4[0xf] != 0)) {
    _free(plVar4[0x10]);
  }
  if ((plVar4[0x12] != -0x8000000000000000) && (plVar4[0x12] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar4[0x13]);
    return;
  }
  return;
}

