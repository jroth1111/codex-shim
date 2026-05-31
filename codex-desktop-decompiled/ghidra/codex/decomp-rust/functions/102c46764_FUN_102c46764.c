
void FUN_102c46764(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    do {
      if ((puVar4[-1] & 0x7fffffffffffffff) == 0) {
        if ((puVar4[2] & 0x7fffffffffffffff) == 0) goto LAB_102c467ac;
LAB_102c467cc:
        _free(puVar4[3]);
        lVar2 = puVar4[-4];
      }
      else {
        _free(*puVar4);
        if ((puVar4[2] & 0x7fffffffffffffff) != 0) goto LAB_102c467cc;
LAB_102c467ac:
        lVar2 = puVar4[-4];
      }
      if (lVar2 != 0) {
        _free(puVar4[-3]);
      }
      puVar4 = puVar4 + 9;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

