
void FUN_1046cfbb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  lVar2 = param_1[1];
  for (lVar4 = param_1[2]; lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = lVar2 + lVar3;
    if (*(long *)(lVar1 + 0x40) != 0) {
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
    lVar3 = lVar3 + 0x68;
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

