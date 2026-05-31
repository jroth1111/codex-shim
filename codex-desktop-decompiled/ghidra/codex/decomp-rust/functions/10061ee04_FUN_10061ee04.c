
/* WARNING: Type propagation algorithm not settling */

void FUN_10061ee04(undefined1 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 9) {
    if (*plVar1 == 0x6c6e6f2d64616572 && (char)plVar1[1] == 'y') {
      param_1[1] = 0;
      *param_1 = 0;
      lVar3 = *param_2;
      goto joined_r0x00010061ee78;
    }
  }
  else if (lVar3 == 0xf) {
    if (*plVar1 == 0x636170736b726f77 && *(long *)((long)plVar1 + 7) == 0x65746972772d6563) {
      param_1[1] = 1;
      *param_1 = 0;
      lVar3 = *param_2;
      goto joined_r0x00010061ee78;
    }
  }
  else if ((lVar3 == 0x12) &&
          ((*plVar1 == 0x662d7265676e6164 && plVar1[1] == 0x656363612d6c6c75) &&
           (short)plVar1[2] == 0x7373)) {
    param_1[1] = 2;
    *param_1 = 0;
    lVar3 = *param_2;
    goto joined_r0x00010061ee78;
  }
  uVar2 = thunk_FUN_1087e4494(plVar1,lVar3,&UNK_10b222498,3);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  lVar3 = *param_2;
joined_r0x00010061ee78:
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar1);
    return;
  }
  return;
}

