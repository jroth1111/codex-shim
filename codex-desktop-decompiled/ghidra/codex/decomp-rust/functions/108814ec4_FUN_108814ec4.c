
void FUN_108814ec4(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3[1];
  lStack_38 = param_3[2];
  auStack_48[0] = 5;
  lStack_40 = lVar1;
  uVar2 = func_0x000108a4a50c(auStack_48,param_2,&UNK_10b21ad70);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 0x16;
  if (*param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

