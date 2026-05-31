
void FUN_100d5b224(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  cVar2 = *(char *)(param_1 + 0x38);
  if (cVar2 == '\x03') {
    if (((*(char *)(param_1 + 0xb8) == '\x03') && (*(char *)(param_1 + 0xb0) == '\x03')) &&
       (*(char *)(param_1 + 0xa8) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d5b2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x70) + 0x18))(*(undefined8 *)(param_1 + 0x78));
        return;
      }
    }
  }
  else if (cVar2 == '\x04') {
    if (*(char *)(param_1 + 0xbd8) == '\x03') {
      if (*(char *)(param_1 + 0xbd0) == '\x03') {
        FUN_100e7aab8(param_1 + 200);
      }
      FUN_100de8a5c(param_1 + 0x50);
    }
    plVar4 = *(long **)(param_1 + 0x40);
    lVar5 = *plVar4;
    *plVar4 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      lVar5 = *(long *)(param_1 + 0x40);
      FUN_103399de0(lVar5 + 0x10);
      if (lVar5 != -1) {
        lVar3 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          goto _free;
        }
      }
      return;
    }
  }
  else if (cVar2 == '\x05') {
    bVar1 = *(byte *)(param_1 + 0x70);
    if (bVar1 < 5) {
      if (bVar1 == 3) {
        if (((*(char *)(param_1 + 0xe8) == '\x03') && (*(char *)(param_1 + 0xe0) == '\x03')) &&
           (*(char *)(param_1 + 0x98) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0xa0);
          if (*(long *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d54ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(param_1 + 0xa8) + 0x18))(*(undefined8 *)(param_1 + 0xb0));
            return;
          }
        }
      }
      else if (bVar1 == 4) {
        if (*(char *)(param_1 + 0x1f0) == '\0') {
          lVar5 = *(long *)(param_1 + 0x78);
          if (lVar5 == -0x8000000000000000) {
            return;
          }
          if (*(long *)(param_1 + 0x90) != -0x7ffffffffffffffb) {
            FUN_100de6690();
          }
          if (lVar5 == 0) {
            return;
          }
          lVar5 = 8;
        }
        else {
          if (*(char *)(param_1 + 0x1f0) != '\x03') {
            return;
          }
          if (((*(char *)(param_1 + 0x1e8) == '\x03') && (*(char *)(param_1 + 0x1e0) == '\x03')) &&
             (*(char *)(param_1 + 0x198) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x1a0);
            if (*(long *)(param_1 + 0x1a8) != 0) {
              (**(code **)(*(long *)(param_1 + 0x1a8) + 0x18))(*(undefined8 *)(param_1 + 0x1b0));
            }
          }
          lVar5 = *(long *)(param_1 + 0x110);
          if (lVar5 == -0x8000000000000000) {
            return;
          }
          if (*(long *)(param_1 + 0x128) != -0x7ffffffffffffffb) {
            FUN_100de6690();
          }
          if (lVar5 == 0) {
            return;
          }
          lVar5 = 0xa0;
        }
        lVar5 = *(long *)(param_1 + 0x78 + lVar5);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar5);
        return;
      }
    }
    else {
      if (bVar1 == 5) {
        if (*(char *)(param_1 + 0xa0) == '\x03') {
          if (((*(char *)(param_1 + 0x118) == '\x03') && (*(char *)(param_1 + 0x110) == '\x03')) &&
             (*(char *)(param_1 + 200) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0xd0);
            if (*(long *)(param_1 + 0xd8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ce9fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
              return;
            }
          }
        }
        else if (*(char *)(param_1 + 0xa0) == '\x04') {
          if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x120) == '\x03')) &&
             (*(char *)(param_1 + 0xd8) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0xe0);
            if (*(long *)(param_1 + 0xe8) != 0) {
              (**(code **)(*(long *)(param_1 + 0xe8) + 0x18))(*(undefined8 *)(param_1 + 0xf0));
            }
          }
          plVar4 = *(long **)(param_1 + 0xb0);
          lVar5 = *plVar4;
          *plVar4 = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            lVar5 = *(long *)(param_1 + 0xb0);
            FUN_101958f10(lVar5 + 0x38);
            if (lVar5 != -1) {
              lVar3 = *(long *)(lVar5 + 8);
              *(long *)(lVar5 + 8) = lVar3 + -1;
              LORelease();
              if (lVar3 == 1) {
                DataMemoryBarrier(2,1);
                goto _free;
              }
            }
            return;
          }
        }
        return;
      }
      if (bVar1 == 6) {
        if (*(char *)(param_1 + 0xde0) == '\x03') {
          FUN_100dae278(param_1 + 0xa8);
        }
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar5 = *(long *)(param_1 + 0x80);
          goto _free;
        }
      }
    }
    return;
  }
  return;
}

