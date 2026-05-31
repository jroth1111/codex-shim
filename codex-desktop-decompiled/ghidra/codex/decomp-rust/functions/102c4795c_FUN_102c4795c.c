
void FUN_102c4795c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    uVar3 = param_1[3];
  }
  else {
    _free(param_1[1]);
    uVar3 = param_1[3];
  }
  if (uVar3 != 0x8000000000000000) {
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    if (uVar2 != 0) {
      puVar4 = (undefined8 *)(uVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (uVar3 != 0) {
      _free(uVar1);
    }
  }
  uVar3 = param_1[6];
  if (uVar3 != 0x8000000000000000) {
    uVar1 = param_1[7];
    uVar2 = param_1[8];
    if (uVar2 != 0) {
      puVar4 = (undefined8 *)(uVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (uVar3 != 0) {
      _free(uVar1);
    }
  }
  if ((param_1[9] & 0x7fffffffffffffff) == 0) {
    uVar3 = param_1[0xc];
  }
  else {
    _free(param_1[10]);
    uVar3 = param_1[0xc];
  }
  if (uVar3 == 0x8000000000000000) {
    uVar3 = param_1[0xf];
  }
  else {
    func_0x000102c46764();
    uVar3 = param_1[0xf];
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    uVar3 = param_1[0x12];
  }
  else {
    _free(param_1[0x10]);
    uVar3 = param_1[0x12];
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    uVar3 = param_1[0x15];
  }
  else {
    _free(param_1[0x13]);
    uVar3 = param_1[0x15];
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    uVar3 = param_1[0x18];
  }
  else {
    _free(param_1[0x16]);
    uVar3 = param_1[0x18];
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    uVar3 = param_1[0x1b];
  }
  else {
    _free(param_1[0x19]);
    uVar3 = param_1[0x1b];
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[0x1c]);
  return;
}

