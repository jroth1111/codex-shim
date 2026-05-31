
/* WARNING: Possible PIC construction at 0x000100cbc8cc: Changing call to branch */

void FUN_100cbc7f8(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  cVar1 = *(char *)((long)param_1 + 0xa3);
  if (cVar1 == '\0') {
    FUN_100e76b20(param_1 + 0xb);
    FUN_100e2c954(param_1 + 0xc);
    FUN_100e3da24(param_1 + 0xf);
    plVar3 = (long *)param_1[0xd];
    if (*plVar3 == 0xcc) {
      *plVar3 = 0x84;
    }
    else {
      (**(code **)(plVar3[2] + 0x20))();
    }
    plVar3 = (long *)param_1[10];
    if (plVar3 != (long *)0x0) {
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
    }
    plVar3 = param_1 + 0xe;
    lVar2 = *(long *)*plVar3;
    *(long *)*plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
  }
  else {
    if (cVar1 == '\x03') {
      plVar3 = (long *)param_1[0x15];
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      plVar3 = (long *)param_1[0x17];
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
      *(undefined1 *)((long)param_1 + 0xa1) = 0;
    }
    FUN_100e76b20(param_1 + 1);
    FUN_100e2c954(param_1 + 2);
    FUN_100e3da24(param_1 + 5);
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
    }
    plVar3 = param_1 + 4;
    lVar2 = *(long *)*plVar3;
    *(long *)*plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 != 1) {
      *(undefined1 *)((long)param_1 + 0xa2) = 0;
      return;
    }
    DataMemoryBarrier(2,1);
  }
  if (*plVar3 != -1) {
    plVar3 = (long *)(*plVar3 + 8);
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)();
      return;
    }
  }
  return;
}

