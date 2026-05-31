
void FUN_100e6cd20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 3) * -0x3333333333333333 + 1;
  lVar1 = param_1[1] + 0x18;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x28;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

