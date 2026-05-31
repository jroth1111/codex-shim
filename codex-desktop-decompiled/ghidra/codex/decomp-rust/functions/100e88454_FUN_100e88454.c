
void FUN_100e88454(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 3) * 0xfc0fc0fc0fc0fc1 + 1;
  lVar1 = param_1[1];
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_100e0c730(lVar1);
    lVar1 = lVar1 + 0x208;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

