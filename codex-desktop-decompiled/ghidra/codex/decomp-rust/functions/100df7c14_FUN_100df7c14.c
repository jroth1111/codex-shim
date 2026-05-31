
void FUN_100df7c14(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      lVar1 = param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
    }
    else {
      lVar1 = param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
    }
    if (puVar2[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

