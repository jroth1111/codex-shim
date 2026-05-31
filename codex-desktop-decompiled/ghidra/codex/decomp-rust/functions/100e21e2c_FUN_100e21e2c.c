
void FUN_100e21e2c(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      puVar6 = (ulong *)param_1[2];
      goto LAB_100e21ebc;
    }
  }
  else {
    puVar6 = (ulong *)param_1[2];
    puVar1 = puVar6;
    for (lVar2 = param_1[3]; lVar2 != 0; lVar2 = lVar2 + -1) {
      uVar3 = *puVar1;
      uVar5 = uVar3 ^ 0x8000000000000000;
      if (-1 < (long)uVar3) {
        uVar5 = 1;
      }
      if ((uVar5 == 0) || (uVar5 != 1)) {
        if (puVar1[1] != 0) {
          lVar4 = 0x10;
          goto LAB_100e21e58;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_100e21e58:
        _free(*(undefined8 *)((long)puVar1 + lVar4));
      }
      puVar1 = puVar1 + 4;
    }
    if (param_1[1] != 0) {
LAB_100e21ebc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puVar6);
      return;
    }
  }
  return;
}

