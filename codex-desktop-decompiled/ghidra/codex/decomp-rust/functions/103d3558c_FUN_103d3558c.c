
void FUN_103d3558c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x1;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  
  func_0x000103ea78b0();
  if ((char)*param_1 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff50);
    lVar2 = extraout_x1;
  }
  else {
    unaff_x21 = (undefined8 *)param_1[1];
    param_1 = (long *)*unaff_x21;
    lVar2 = param_1[2];
    if (*param_1 != lVar2) goto LAB_103d355cc;
  }
  FUN_10897c4d0(param_1,lVar2,1,1,1);
  lVar2 = param_1[2];
LAB_103d355cc:
  *(undefined1 *)(param_1[1] + lVar2) = 0x3a;
  param_1[2] = lVar2 + 1;
  plVar4 = (long *)*unaff_x21;
  if (*param_4 == -0x8000000000000000) {
    lVar2 = plVar4[2];
    if ((ulong)(*plVar4 - lVar2) < 4) {
      FUN_10897c4d0(plVar4,lVar2,4,1,1);
      lVar2 = plVar4[2];
    }
    *(undefined4 *)(plVar4[1] + lVar2) = 0x6c6c756e;
    lVar2 = lVar2 + 4;
  }
  else {
    lVar2 = param_4[1];
    lVar1 = param_4[2];
    lVar3 = plVar4[2];
    if (*plVar4 == lVar3) {
      FUN_10897c4d0(plVar4,lVar3,1,1,1);
      lVar3 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar3) = 0x22;
    plVar4[2] = lVar3 + 1;
    func_0x000103d37ee8(plVar4,lVar2,lVar1);
    lVar2 = plVar4[2];
    if (*plVar4 == lVar2) {
      FUN_10897c4d0(plVar4,lVar2,1,1,1);
      lVar2 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar2) = 0x22;
    lVar2 = lVar2 + 1;
  }
  plVar4[2] = lVar2;
  return;
}

