
void FUN_100ce0d38(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    if (*(char *)(param_1 + 0x39) == '\x04') {
      if (*(char *)(param_1 + 0x6e0) == '\0') {
        FUN_100deb62c(param_1 + 0x40);
      }
      else if (*(char *)(param_1 + 0x6e0) == '\x03') {
        FUN_100d0dcc8(param_1 + 0x70);
      }
    }
    else {
      if (*(char *)(param_1 + 0x39) != '\x03') {
        return;
      }
      if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x120) == '\x03')) &&
         (*(char *)(param_1 + 0x119) == '\x03')) {
        FUN_100deb62c(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x118) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\x04') {
    return;
  }
  FUN_100d65794(param_1 + 0x1a0);
  FUN_100e57728(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0xd8);
  if (((ulong)plVar1 & 1) == 0) {
    lVar2 = plVar1[4];
    plVar1[4] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      if (*plVar1 != 0) {
        _free(plVar1[1]);
      }
      goto LAB_100e0df90;
    }
  }
  else if (*(long *)(param_1 + 0xd0) + ((ulong)plVar1 >> 5) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xc0) - ((ulong)plVar1 >> 5));
LAB_100e0df90:
    _free(plVar1);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    _free(*(undefined8 *)(param_1 + 0x98));
  }
  lVar2 = *(long *)(param_1 + 0xf8);
  if (lVar2 != -0x7fffffffffffffff && lVar2 != 0) {
    if (lVar2 == -0x8000000000000000) {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_100e0dfe4;
      lVar2 = 0x10;
    }
    else {
      lVar2 = 8;
    }
    _free(*(undefined8 *)(param_1 + 0xf8 + lVar2));
  }
LAB_100e0dfe4:
  if (*(char *)(param_1 + 0x140) != '\x02') {
    (**(code **)(*(long *)(param_1 + 0x120) + 0x20))
              (param_1 + 0x138,*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130));
  }
  if (*(char *)(param_1 + 0x188) != '\x02') {
    uVar3 = *(undefined8 *)(param_1 + 0x150);
    _deflateEnd(uVar3);
    _free(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    _inflateEnd(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(uVar3);
    return;
  }
  return;
}

