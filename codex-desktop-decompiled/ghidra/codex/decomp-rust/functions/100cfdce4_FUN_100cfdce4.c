
void FUN_100cfdce4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[4];
  if (lVar1 != 0 && lVar1 * 9 != -0x11) {
    _free(param_1[3] + lVar1 * -8 + -8);
  }
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = lVar1 + 0x18;
    do {
      if (*(long *)(lVar2 + -0x18) != 0) {
        _free(*(undefined8 *)(lVar2 + -0x10));
      }
      func_0x000100e38614(lVar2);
      lVar2 = lVar2 + 0x50;
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

