
void FUN_100e48ed0(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    lVar3 = param_1[3];
  }
  else {
    _free(param_1[1]);
    lVar3 = param_1[3];
  }
  if (lVar3 == -0x8000000000000000) {
    return;
  }
  puVar2 = (ulong *)param_1[4];
  lVar3 = param_1[5];
  puVar1 = puVar2;
  do {
    if (lVar3 == 0) {
      if (param_1[3] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puVar2);
      return;
    }
    uVar5 = *puVar1;
    lVar4 = uVar5 + 0x7ffffffffffffffb;
    if (uVar5 < 0x8000000000000005) {
      lVar4 = 2;
    }
    if ((lVar4 == 0) || (lVar4 == 1)) {
      uVar5 = puVar1[1];
joined_r0x000100e797c0:
      if (uVar5 != 0) {
        lVar4 = 0x10;
LAB_100e797c8:
        _free(*(undefined8 *)((long)puVar1 + lVar4));
      }
    }
    else {
      uVar6 = uVar5 ^ 0x8000000000000000;
      if (-1 < (long)uVar5) {
        uVar6 = 5;
      }
      if (uVar6 < 5) {
        if (uVar6 == 2) {
          uVar5 = puVar1[1] & 0x7fffffffffffffff;
          goto joined_r0x000100e797c0;
        }
      }
      else {
        if (uVar5 != 0) {
          _free(puVar1[1]);
        }
        if ((puVar1[3] & 0x7fffffffffffffff) != 0) {
          lVar4 = 0x20;
          goto LAB_100e797c8;
        }
      }
    }
    puVar1 = puVar1 + 7;
    lVar3 = lVar3 + -1;
  } while( true );
}

