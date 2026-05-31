
void FUN_100e298fc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    lVar2 = param_1[3];
  }
  else {
    _free(param_1[1]);
    lVar2 = param_1[3];
  }
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)param_1[4];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(lVar2);
    }
    if (puVar3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

