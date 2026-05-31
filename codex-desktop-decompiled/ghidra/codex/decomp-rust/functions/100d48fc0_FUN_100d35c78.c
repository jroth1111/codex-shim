
void FUN_100d35c78(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = *(char *)(param_1 + 200);
  if (cVar1 != '\0') {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0xf1) == '\x04') {
        FUN_100d1ddbc(param_1 + 0xf8);
        *(undefined1 *)(param_1 + 0xf0) = 0;
        return;
      }
      if (*(char *)(param_1 + 0xf1) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x168) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x160) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x118) != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x120);
      if (*(long *)(param_1 + 0x128) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100d35cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x128) + 0x18))(*(undefined8 *)(param_1 + 0x130));
      return;
    }
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      if (*(char *)(param_1 + 0x2a0) != '\x03') {
        return;
      }
      if (((*(char *)(param_1 + 0x298) == '\x03') && (*(char *)(param_1 + 0x290) == '\x03')) &&
         (*(char *)(param_1 + 0x248) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x250);
        if (*(long *)(param_1 + 600) != 0) {
          (**(code **)(*(long *)(param_1 + 600) + 0x18))(*(undefined8 *)(param_1 + 0x260));
        }
      }
      if (*(long *)(param_1 + 0x1d0) == -0x8000000000000000 || *(long *)(param_1 + 0x1d0) == 0) {
        lVar3 = *(long *)(param_1 + 0x1e8);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x1d8));
        lVar3 = *(long *)(param_1 + 0x1e8);
      }
      if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
        _free(*(undefined8 *)(param_1 + 0x1f0));
      }
      if ((-0x7fffffffffffffff < *(long *)(param_1 + 0x200)) && (*(long *)(param_1 + 0x200) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x208));
      }
      *(undefined1 *)(param_1 + 0x2a1) = 0;
      return;
    }
    if (*(long *)(param_1 + 0x120) == -0x8000000000000000 || *(long *)(param_1 + 0x120) == 0) {
      if (*(long *)(param_1 + 0x138) != -0x8000000000000000 && *(long *)(param_1 + 0x138) != 0)
      goto LAB_100d4909c;
LAB_100d49068:
      if (*(long *)(param_1 + 0x150) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x150) == 0) {
        return;
      }
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x128));
      if (*(long *)(param_1 + 0x138) == -0x8000000000000000 || *(long *)(param_1 + 0x138) == 0)
      goto LAB_100d49068;
LAB_100d4909c:
      _free(*(undefined8 *)(param_1 + 0x140));
      if (*(long *)(param_1 + 0x150) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x150) == 0) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    goto code_r0x000108aa97c4;
  }
  if (*(long *)(param_1 + 0x50) == -0x8000000000000000 || *(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x68) != -0x8000000000000000 && *(long *)(param_1 + 0x68) != 0)
    goto LAB_100d35d84;
LAB_100d35d30:
    if (*(long *)(param_1 + 0x80) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x80) == 0) {
      return;
    }
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x58));
    if (*(long *)(param_1 + 0x68) == -0x8000000000000000 || *(long *)(param_1 + 0x68) == 0)
    goto LAB_100d35d30;
LAB_100d35d84:
    _free(*(undefined8 *)(param_1 + 0x70));
    if (*(long *)(param_1 + 0x80) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x80) == 0) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x88);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

