
void FUN_10112ce54(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  if (lVar2 != 0) {
    lVar4 = _malloc(lVar2);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,lVar2);
    }
    else {
      _memcpy(lVar4,lVar1,lVar2);
      lVar5 = _malloc(lVar2);
      if (lVar5 != 0) goto LAB_10112ceb0;
      func_0x0001087c9084(1,lVar2);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10112cf38);
    (*pcVar3)();
  }
  lVar4 = 1;
  lVar5 = 1;
LAB_10112ceb0:
  _memcpy(lVar5,lVar4,lVar2);
  param_1[3] = lVar2;
  param_1[4] = lVar5;
  param_1[5] = lVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 8;
  *param_1 = 0;
  if (lVar2 != 0) {
    _free(lVar4);
  }
  if (*param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar1);
  return;
}

