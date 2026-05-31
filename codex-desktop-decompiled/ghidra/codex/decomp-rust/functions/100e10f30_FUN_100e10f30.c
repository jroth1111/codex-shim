
void FUN_100e10f30(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != -0x8000000000000000) {
    lVar3 = param_1[7];
    if (lVar3 != 0 && lVar3 * 9 != -0x11) {
      _free(param_1[6] + lVar3 * -8 + -8);
    }
    func_0x000100cd7284(param_1 + 3);
  }
  if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) {
    lVar3 = param_1[1];
    lVar1 = param_1[2];
    lVar2 = lVar3;
  }
  else {
    _free(param_1[0xd]);
    lVar3 = param_1[1];
    lVar1 = param_1[2];
    lVar2 = lVar3;
  }
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    func_0x000100e17918(lVar3);
    if (-0x7fffffffffffffff < *(long *)(lVar3 + 0x90) && *(long *)(lVar3 + 0x90) != 0) {
      _free(*(undefined8 *)(lVar3 + 0x98));
    }
    lVar3 = lVar3 + 0xc0;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

