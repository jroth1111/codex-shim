
void FUN_10337f4f4(ulong *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (((short)param_1[0xb] == 3) && (param_1[0xc] != 0)) {
    (**(code **)(param_1[0xc] + 0x20))(param_1 + 0xf,param_1[0xd],param_1[0xe]);
  }
  uVar3 = param_1[0x10];
  if (uVar3 != 0) {
    puVar2 = (undefined8 *)param_1[0x11];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar2[1] != 0) {
      _free(uVar3);
    }
  }
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[1]);
  return;
}

