
void FUN_10061ebb8(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)param_2[1];
  lVar2 = param_2[2];
  if (lVar2 == 3) {
    if ((short)*piVar1 == 0x6f6c && *(char *)((long)piVar1 + 2) == 'w') {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      lVar2 = *param_2;
      goto joined_r0x00010061ec14;
    }
  }
  else if (lVar2 == 6) {
    if (*piVar1 == 0x6964656d && (short)piVar1[1] == 0x6d75) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      lVar2 = *param_2;
      goto joined_r0x00010061ec14;
    }
  }
  else if ((lVar2 == 4) && (*piVar1 == 0x68676968)) {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 2;
    lVar2 = *param_2;
    goto joined_r0x00010061ec14;
  }
  thunk_FUN_1087e44e4(param_1,piVar1,lVar2,&UNK_10b222318,3);
  lVar2 = *param_2;
joined_r0x00010061ec14:
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(piVar1);
    return;
  }
  return;
}

