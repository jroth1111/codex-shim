
void FUN_100ccfba4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)((long)param_1 + 0x1743) != '\0') {
    if (*(char *)((long)param_1 + 0x1743) == '\x03') {
      FUN_100cb4e98(param_1 + 0x143);
      FUN_100def5a4(param_1 + 0x29);
      if (param_1[0x3e] != 0) {
        _free(param_1[0x3f]);
      }
      if (param_1[0x41] != 0) {
        _free(param_1[0x42]);
      }
      if (param_1[0x44] != 0) {
        _free(param_1[0x45]);
      }
      if (param_1[0x47] != 0) {
        _free(param_1[0x48]);
      }
      if (param_1[0x4a] != 0) {
        _free(param_1[0x4b]);
      }
      if (param_1[0x4d] != 0) {
        _free(param_1[0x4e]);
      }
      if (param_1[0x50] != 0) {
        _free(param_1[0x51]);
      }
      if (param_1[0x53] != 0) {
        _free(param_1[0x54]);
      }
      FUN_100df61a0(param_1 + 0x56);
      FUN_100dfd1c8(param_1 + 0x89);
      FUN_100e03750(param_1 + 0xcb);
      FUN_100dfb140(param_1 + 299);
      *(undefined8 *)((long)param_1 + 0x1744) = 0;
    }
    return;
  }
  if (param_1[3] == -0x8000000000000000) {
    FUN_100e28f98(param_1 + 4);
  }
  else {
    FUN_100e3b304();
  }
  if (param_1[10] == -0x8000000000000000 || param_1[10] == 0) {
    if (param_1[0xd] != -0x8000000000000000 && param_1[0xd] != 0) {
LAB_100e24ffc:
      _free(param_1[0xe]);
      lVar1 = param_1[1];
      lVar2 = param_1[2];
      lVar3 = lVar1;
      goto joined_r0x000100e24fdc;
    }
  }
  else {
    _free(param_1[0xb]);
    if (param_1[0xd] != -0x8000000000000000 && param_1[0xd] != 0) goto LAB_100e24ffc;
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  lVar3 = lVar1;
joined_r0x000100e24fdc:
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_100e171c4(lVar1);
    lVar1 = lVar1 + 0x1a0;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar3);
    return;
  }
  return;
}

