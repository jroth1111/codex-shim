
void FUN_100ca715c(long param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x560) == '\x03') {
    if (*(char *)(param_1 + 0x18) == '\x04') {
      if ((*(char *)(param_1 + 0x78) == '\x03') && (*(char *)(param_1 + 0x70) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x30);
        if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ca71d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(*(undefined8 *)(param_1 + 0x40));
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x18) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x46b);
      if (cVar1 == '\x03') {
        uVar4 = *(undefined8 *)(param_1 + 0x470);
        puVar3 = *(undefined8 **)(param_1 + 0x478);
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar4);
        }
        if (puVar3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(uVar4);
          return;
        }
      }
      else {
        if (cVar1 == '\x04') {
          if ((*(char *)(param_1 + 0x4c8) == '\x03') && (*(char *)(param_1 + 0x4c0) == '\x03')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x480);
            if (*(long *)(param_1 + 0x488) != 0) {
              (**(code **)(*(long *)(param_1 + 0x488) + 0x18))(*(undefined8 *)(param_1 + 0x490));
            }
          }
        }
        else {
          if (cVar1 != '\x05') {
            return;
          }
          if ((*(char *)(param_1 + 0x558) == '\x03') && (*(char *)(param_1 + 0x550) == '\x03')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x510);
            if (*(long *)(param_1 + 0x518) != 0) {
              (**(code **)(*(long *)(param_1 + 0x518) + 0x18))(*(undefined8 *)(param_1 + 0x520));
            }
          }
          *(undefined1 *)(param_1 + 0x468) = 0;
          FUN_100e2ac5c(param_1 + 0x470);
        }
        FUN_100e1376c(param_1 + 0x2f8);
        *(undefined2 *)(param_1 + 0x469) = 0;
      }
      return;
    }
  }
  return;
}

