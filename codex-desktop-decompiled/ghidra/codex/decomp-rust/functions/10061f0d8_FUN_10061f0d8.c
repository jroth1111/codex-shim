
/* WARNING: Type propagation algorithm not settling */

void FUN_10061f0d8(undefined1 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 4) {
    if ((int)*plVar1 == 0x72657375) {
      param_1[1] = 0;
      *param_1 = 0;
      lVar3 = *param_2;
      goto joined_r0x00010061f134;
    }
  }
  else if (lVar3 == 8) {
    if (*plVar1 == 0x746e656761627573) {
      param_1[1] = 1;
      *param_1 = 0;
      lVar3 = *param_2;
      goto joined_r0x00010061f134;
    }
  }
  else if ((lVar3 == 0x14) &&
          ((*plVar1 == 0x635f79726f6d656d && plVar1[1] == 0x6164696c6f736e6f) &&
           (int)plVar1[2] == 0x6e6f6974)) {
    param_1[1] = 2;
    *param_1 = 0;
    lVar3 = *param_2;
    goto joined_r0x00010061f134;
  }
  uVar2 = thunk_FUN_1087e4494(plVar1,lVar3,&UNK_10b222a88,3);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  lVar3 = *param_2;
joined_r0x00010061f134:
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar1);
    return;
  }
  return;
}

