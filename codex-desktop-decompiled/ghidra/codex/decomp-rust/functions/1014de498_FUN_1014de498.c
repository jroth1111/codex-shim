
undefined8 FUN_1014de498(byte *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x1;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 auStack_38 [3];
  
  if ((*param_1 & 1) != 0) {
    auStack_38[0] = 10;
    uVar1 = func_0x000108a4a0f8(auStack_38,0,0);
    return uVar1;
  }
  FUN_1013fe3ec(param_1,&UNK_108cbf8f3,7);
  if (*param_1 == 1) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar2 = extraout_x1;
  }
  else {
    unaff_x20 = *(undefined8 **)(param_1 + 8);
    param_1 = (byte *)*unaff_x20;
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(long *)param_1 != lVar2) goto LAB_1014de4e8;
  }
  FUN_108855060(param_1,lVar2,1,1,1);
  lVar2 = *(long *)(param_1 + 0x10);
LAB_1014de4e8:
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar2) = 0x3a;
  *(long *)(param_1 + 0x10) = lVar2 + 1;
  plVar3 = (long *)*unaff_x20;
  lVar2 = plVar3[2];
  if (*plVar3 == lVar2) {
    FUN_108855060(plVar3,lVar2,1,1,1);
    lVar2 = plVar3[2];
  }
  *(undefined1 *)(plVar3[1] + lVar2) = 0x22;
  plVar3[2] = lVar2 + 1;
  FUN_100657654(plVar3,&UNK_108cbb521,3);
  lVar2 = plVar3[2];
  if (*plVar3 == lVar2) {
    FUN_108855060(plVar3,lVar2,1,1,1);
    lVar2 = plVar3[2];
  }
  *(undefined1 *)(plVar3[1] + lVar2) = 0x22;
  plVar3[2] = lVar2 + 1;
  return 0;
}

