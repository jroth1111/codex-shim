
void FUN_10061f4ac(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_2[1];
  lVar2 = param_2[2];
  if (lVar2 == 9) {
    if (*plVar1 == 0x6c6e6f2d64616572 && (char)plVar1[1] == 'y') {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      lVar2 = *param_2;
      goto joined_r0x00010061f51c;
    }
  }
  else if (lVar2 == 0xf) {
    if (*plVar1 == 0x636170736b726f77 && *(long *)((long)plVar1 + 7) == 0x65746972772d6563) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      lVar2 = *param_2;
      goto joined_r0x00010061f51c;
    }
  }
  else if ((lVar2 == 0x12) &&
          ((*plVar1 == 0x662d7265676e6164 && plVar1[1] == 0x656363612d6c6c75) &&
           (short)plVar1[2] == 0x7373)) {
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 2;
    lVar2 = *param_2;
    goto joined_r0x00010061f51c;
  }
  thunk_FUN_1087e44e4(param_1,plVar1,lVar2,&UNK_10b222498,3);
  lVar2 = *param_2;
joined_r0x00010061f51c:
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar1);
  return;
}

