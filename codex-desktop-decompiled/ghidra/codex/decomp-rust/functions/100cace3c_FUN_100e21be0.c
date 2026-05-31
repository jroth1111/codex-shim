
void FUN_100e21be0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  FUN_100e3106c(param_1 + 3);
  lVar1 = param_1[0x19];
  lVar2 = param_1[0x1a];
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (param_1[0x18] != 0) {
    _free(lVar1);
  }
  lVar1 = param_1[0x1c];
  lVar2 = param_1[0x1d];
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x30);
    do {
      if (plVar3[-6] != 0) {
        _free(plVar3[-5]);
      }
      if (plVar3[-3] == -0x8000000000000000 || plVar3[-3] == 0) {
        if (*plVar3 == -0x8000000000000000 || *plVar3 == 0) goto LAB_100cacea4;
LAB_100caced0:
        _free(plVar3[1]);
        if (plVar3[3] != -0x8000000000000000 && plVar3[3] != 0) goto LAB_100cacee8;
      }
      else {
        _free(plVar3[-2]);
        if (*plVar3 != -0x8000000000000000 && *plVar3 != 0) goto LAB_100caced0;
LAB_100cacea4:
        if (plVar3[3] != -0x8000000000000000 && plVar3[3] != 0) {
LAB_100cacee8:
          _free(plVar3[4]);
        }
      }
      plVar3 = plVar3 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (param_1[0x1b] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

