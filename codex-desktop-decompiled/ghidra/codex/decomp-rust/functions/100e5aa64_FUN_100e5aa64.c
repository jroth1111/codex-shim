
void FUN_100e5aa64(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 in_wzr;
  
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + 0x40) = 1;
  LOAcquire();
  cVar1 = *(char *)(lVar3 + 0x20);
  *(char *)(lVar3 + 0x20) = '\x01';
  LORelease();
  if (cVar1 == '\0') {
    lVar2 = *(long *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined1 *)(lVar3 + 0x20) = in_wzr;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar3 + 0x18));
    }
  }
  LOAcquire();
  cVar1 = *(char *)(lVar3 + 0x38);
  *(char *)(lVar3 + 0x38) = '\x01';
  LORelease();
  if (cVar1 == '\0') {
    lVar2 = *(long *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar3 + 0x30));
    }
    *(undefined1 *)(lVar3 + 0x38) = in_wzr;
    lVar3 = *(long *)*param_1;
    *(long *)*param_1 = lVar3 + -1;
    LORelease();
  }
  else {
    lVar3 = *(long *)*param_1;
    *(long *)*param_1 = lVar3 + -1;
    LORelease();
  }
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 0x10) != 0) {
      (**(code **)(*(long *)(lVar3 + 0x10) + 0x18))(*(undefined8 *)(lVar3 + 0x18));
    }
    if (*(long *)(lVar3 + 0x28) != 0) {
      (**(code **)(*(long *)(lVar3 + 0x28) + 0x18))(*(undefined8 *)(lVar3 + 0x30));
    }
    if (lVar3 != -1) {
      lVar2 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar3);
        return;
      }
    }
    return;
  }
  return;
}

