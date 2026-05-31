
void FUN_100b16480(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_78;
  
  if (*param_2 == -0x8000000000000000) {
    *param_1 = -0x8000000000000000;
    return;
  }
  plVar7 = (long *)param_2[6];
  lVar3 = *plVar7;
  *plVar7 = lVar3 + 1;
  if (lVar3 < 0) goto LAB_100b16698;
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    lStack_78 = 1;
    _memcpy(1,lVar3,0);
    if (param_4 != 0) goto LAB_100b16510;
LAB_100b165b8:
    lVar3 = 1;
    _memcpy(1,param_3,param_4);
    if (param_6 == 0) goto LAB_100b165d0;
LAB_100b16534:
    lVar4 = _malloc(param_6);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,param_6);
      goto LAB_100b16698;
    }
    _memcpy(lVar4,param_5,param_6);
    if (param_8 != 0) goto LAB_100b16558;
LAB_100b165e8:
    lVar5 = 1;
    _memcpy(1,param_7,param_8);
  }
  else {
    lStack_78 = _malloc(lVar1);
    if (lStack_78 == 0) {
      func_0x0001087c9084(1,lVar1);
      goto LAB_100b16698;
    }
    _memcpy(lStack_78,lVar3,lVar1);
    if (param_4 == 0) goto LAB_100b165b8;
LAB_100b16510:
    lVar3 = _malloc(param_4);
    if (lVar3 == 0) {
      func_0x0001087c9084(1,param_4);
      goto LAB_100b16698;
    }
    _memcpy(lVar3,param_3,param_4);
    if (param_6 != 0) goto LAB_100b16534;
LAB_100b165d0:
    lVar4 = 1;
    _memcpy(1,param_5,param_6);
    if (param_8 == 0) goto LAB_100b165e8;
LAB_100b16558:
    lVar5 = _malloc(param_8);
    if (lVar5 == 0) {
      func_0x0001087c9084(1,param_8);
      goto LAB_100b16698;
    }
    _memcpy(lVar5,param_7,param_8);
  }
  if (param_10 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(param_10);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,param_10);
LAB_100b16698:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b1669c);
      (*pcVar2)();
    }
  }
  _memcpy(lVar6,param_9,param_10);
  *param_1 = lVar1;
  param_1[1] = lStack_78;
  param_1[2] = lVar1;
  param_1[3] = param_4;
  param_1[4] = lVar3;
  param_1[5] = param_4;
  param_1[6] = param_6;
  param_1[7] = lVar4;
  param_1[8] = param_6;
  param_1[9] = param_8;
  param_1[10] = lVar5;
  param_1[0xb] = param_8;
  param_1[0xc] = param_10;
  param_1[0xd] = lVar6;
  param_1[0xe] = param_10;
  param_1[0xf] = (long)plVar7;
  return;
}

