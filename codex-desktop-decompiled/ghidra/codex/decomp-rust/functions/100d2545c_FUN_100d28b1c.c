
void FUN_100d28b1c(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  cVar2 = *(char *)(param_1 + 0x11);
  if (cVar2 == '\x03') {
    if (((*(char *)(param_1 + 0x88) == '\x03') && (*(char *)(param_1 + 0x80) == '\x03')) &&
       (*(char *)(param_1 + 0x38) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
        goto LAB_100d28bdc;
      }
    }
    return;
  }
  if (cVar2 != '\x04') {
    if (cVar2 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x98) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x90) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x88) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x40) != '\x04') {
      return;
    }
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 0x48);
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x58);
LAB_100d28bdc:
                    /* WARNING: Could not recover jumptable at 0x000100d28be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x18))(uVar3);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xd5);
  if (bVar1 < 6) {
    if (bVar1 == 3) {
      if (((*(char *)(param_1 + 0x158) == '\x03') && (*(char *)(param_1 + 0x150) == '\x03')) &&
         ((*(char *)(param_1 + 0x148) == '\x03' && (*(char *)(param_1 + 0x100) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x108);
        if (*(long *)(param_1 + 0x110) != 0) {
          (**(code **)(*(long *)(param_1 + 0x110) + 0x18))(*(undefined8 *)(param_1 + 0x118));
        }
      }
      goto LAB_100d255dc;
    }
    if (bVar1 == 4) {
      FUN_100d2dd5c(param_1 + 0x1e8);
      FUN_100e7c394(param_1 + 0x1c8);
      *(undefined1 *)(param_1 + 0xd4) = 0;
      FUN_100e00278(param_1 + 0x178);
      *(undefined1 *)(param_1 + 0xd2) = 0;
      goto LAB_100d255dc;
    }
    if (bVar1 != 5) {
      return;
    }
    if (*(char *)(param_1 + 0x11a) != '\x03') goto LAB_100d255dc;
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    puVar6 = *(undefined8 **)(param_1 + 0xf0);
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar3);
    }
  }
  else {
    if (bVar1 != 6) {
      if (bVar1 == 7) {
        if (((*(char *)(param_1 + 0x1b0) == '\x03') && (*(char *)(param_1 + 0x1a8) == '\x03')) &&
           ((*(char *)(param_1 + 0x1a0) == '\x03' && (*(char *)(param_1 + 0x158) == '\x04')))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x160);
          if (*(long *)(param_1 + 0x168) != 0) {
            (**(code **)(*(long *)(param_1 + 0x168) + 0x18))(*(undefined8 *)(param_1 + 0x170));
          }
        }
        FUN_100e00278(param_1 + 0xd8);
      }
      else {
        if (bVar1 != 8) {
          return;
        }
        if (*(char *)(param_1 + 0x5880) == '\x03') {
          FUN_100d77d58(param_1 + 0xf0);
        }
      }
      goto LAB_100d255dc;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    puVar6 = *(undefined8 **)(param_1 + 0xe0);
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar3);
    }
  }
  if (puVar6[1] != 0) {
    _free(uVar3);
  }
LAB_100d255dc:
  plVar4 = *(long **)(param_1 + 0xc0);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    *plVar4 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
  }
  if ((*(long *)(param_1 + 0x18) != -0x8000000000000000) && ((*(byte *)(param_1 + 0xd3) & 1) != 0))
  {
    FUN_100e00278((long *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0xd3) = 0;
  return;
}

