
void FUN_100d39bd0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_100d4014c(param_1 + 0x150);
  plVar1 = *(long **)(param_1 + 0x90);
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
  else if (*(long *)(param_1 + 0x88) + ((ulong)plVar1 >> 5) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x78) - ((ulong)plVar1 >> 5));
LAB_100e0df90:
    _free(plVar1);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    _free(*(undefined8 *)(param_1 + 0x50));
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != -0x7fffffffffffffff && lVar2 != 0) {
    if (lVar2 == -0x8000000000000000) {
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_100e0dfe4;
      lVar2 = 0x10;
    }
    else {
      lVar2 = 8;
    }
    _free(*(undefined8 *)(param_1 + 0xb0 + lVar2));
  }
LAB_100e0dfe4:
  if (*(char *)(param_1 + 0xf8) != '\x02') {
    (**(code **)(*(long *)(param_1 + 0xd8) + 0x20))
              (param_1 + 0xf0,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8));
  }
  if (*(char *)(param_1 + 0x140) == '\x02') {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  _deflateEnd(uVar3);
  _free(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  _inflateEnd(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar3);
  return;
}

