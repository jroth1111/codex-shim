
void FUN_10061ef84(undefined1 *param_1,long *param_2)

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
      goto joined_r0x00010061f0a8;
    }
  }
  else if (lVar3 == 0xb) {
    if (*plVar1 == 0x7665725f6f747561 && *(long *)((long)plVar1 + 3) == 0x7765697665725f6f) {
LAB_10061f06c:
      param_1[1] = 1;
      *param_1 = 0;
      lVar3 = *param_2;
      goto joined_r0x00010061f0a8;
    }
  }
  else if ((lVar3 == 0x11) &&
          ((*plVar1 == 0x6e61696472617567 && plVar1[1] == 0x6e6567616275735f) &&
           (char)plVar1[2] == 't')) goto LAB_10061f06c;
  uVar2 = thunk_FUN_1087e4494(plVar1,lVar3,&UNK_10b2222c8,3);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  lVar3 = *param_2;
joined_r0x00010061f0a8:
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar1);
  return;
}

