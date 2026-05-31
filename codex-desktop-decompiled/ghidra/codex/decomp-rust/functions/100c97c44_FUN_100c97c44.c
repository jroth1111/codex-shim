
void FUN_100c97c44(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((char)param_1[0xd] == '\0') {
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    plVar2 = (long *)param_1[3];
    if (*plVar2 == 0xcc) {
      *plVar2 = 0x84;
    }
    else {
      (**(code **)(plVar2[2] + 0x20))();
    }
    param_1 = param_1 + 4;
    lVar1 = *(long *)*param_1;
    *(long *)*param_1 = lVar1 + -1;
    LORelease();
  }
  else {
    if ((char)param_1[0xd] != '\x03') {
      return;
    }
    plVar2 = (long *)param_1[0xc];
    if (*plVar2 == 0xcc) {
      *plVar2 = 0x84;
    }
    else {
      (**(code **)(plVar2[2] + 0x20))();
    }
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    param_1 = param_1 + 10;
    lVar1 = *(long *)*param_1;
    *(long *)*param_1 = lVar1 + -1;
    LORelease();
  }
  if (lVar1 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  if (*param_1 != -1) {
    plVar2 = (long *)(*param_1 + 8);
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)();
      return;
    }
  }
  return;
}

