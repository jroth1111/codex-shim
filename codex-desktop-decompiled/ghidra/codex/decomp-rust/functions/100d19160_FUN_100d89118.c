
void FUN_100d89118(long param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x48) != '\x03') {
    if (*(char *)(param_1 + 0x48) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x70) == '\x03') {
      if ((*(short *)(param_1 + 0x78) == 3) &&
         (uVar4 = *(ulong *)(param_1 + 0x80), (uVar4 & 3) == 1)) {
        uVar5 = *(undefined8 *)(uVar4 - 1);
        puVar3 = *(undefined8 **)(uVar4 + 7);
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar5);
        }
        if (puVar3[1] != 0) {
          _free(uVar5);
        }
        _free((undefined8 *)(uVar4 - 1));
      }
    }
    else {
      if (*(char *)(param_1 + 0x70) != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0xd0) == '\x03') {
        if (*(char *)(param_1 + 0xcc) == '\x03') {
          FUN_100deb62c(param_1 + 0xa0);
        }
        else if (*(char *)(param_1 + 0xcc) == '\0') {
          _close(*(undefined4 *)(param_1 + 200));
        }
      }
      uVar4 = *(ulong *)(param_1 + 0x78);
      if ((uVar4 & 3) == 1) {
        uVar5 = *(undefined8 *)(uVar4 - 1);
        puVar3 = *(undefined8 **)(uVar4 + 7);
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar5);
        }
        if (puVar3[1] != 0) {
          _free(uVar5);
        }
        _free((undefined8 *)(uVar4 - 1));
      }
      *(undefined1 *)(param_1 + 0x71) = 0;
    }
    *(undefined1 *)(param_1 + 0x72) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x5b0) == '\x03') {
    if (*(char *)(param_1 + 0x68) == '\x04') {
      if ((*(char *)(param_1 + 200) == '\x03') && (*(char *)(param_1 + 0xc0) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x80);
        if (*(long *)(param_1 + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d891b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 0x88) + 0x18))(*(undefined8 *)(param_1 + 0x90));
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x4bb);
      if (cVar1 == '\x03') {
        uVar5 = *(undefined8 *)(param_1 + 0x4c0);
        puVar3 = *(undefined8 **)(param_1 + 0x4c8);
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar5);
        }
        if (puVar3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(uVar5);
          return;
        }
      }
      else {
        if (cVar1 == '\x04') {
          if ((*(char *)(param_1 + 0x518) == '\x03') && (*(char *)(param_1 + 0x510) == '\x03')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x4d0);
            if (*(long *)(param_1 + 0x4d8) != 0) {
              (**(code **)(*(long *)(param_1 + 0x4d8) + 0x18))(*(undefined8 *)(param_1 + 0x4e0));
            }
          }
        }
        else {
          if (cVar1 != '\x05') {
            return;
          }
          if ((*(char *)(param_1 + 0x5a8) == '\x03') && (*(char *)(param_1 + 0x5a0) == '\x03')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x560);
            if (*(long *)(param_1 + 0x568) != 0) {
              (**(code **)(*(long *)(param_1 + 0x568) + 0x18))(*(undefined8 *)(param_1 + 0x570));
            }
          }
          *(undefined1 *)(param_1 + 0x4b8) = 0;
          FUN_100e2ac5c(param_1 + 0x4c0);
        }
        FUN_100e1376c(param_1 + 0x348);
        *(undefined2 *)(param_1 + 0x4b9) = 0;
      }
      return;
    }
  }
  return;
}

