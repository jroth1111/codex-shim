
undefined8 FUN_103ebf6ec(byte *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x1;
  long *unaff_x21;
  undefined8 auStack_48 [3];
  
  if ((*param_1 & 1) != 0) {
    auStack_48[0] = 10;
    uVar2 = func_0x000108a4a0f8(auStack_48,0,0);
    return uVar2;
  }
  FUN_103ea7d88();
  if (*param_1 == 1) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff50);
    lVar3 = extraout_x1;
  }
  else {
    unaff_x21 = *(long **)(param_1 + 8);
    param_1 = (byte *)*unaff_x21;
    lVar3 = *(long *)(param_1 + 0x10);
    if (1 < (ulong)(*(long *)param_1 - lVar3)) goto LAB_103ebf73c;
  }
  FUN_10897c4d0(param_1,lVar3,2,1,1);
  lVar3 = *(long *)(param_1 + 0x10);
LAB_103ebf73c:
  *(undefined2 *)(*(long *)(param_1 + 8) + lVar3) = 0x203a;
  *(long *)(param_1 + 0x10) = lVar3 + 2;
  plVar1 = (long *)*unaff_x21;
  if (*param_4 == -0x8000000000000000) {
    lVar3 = plVar1[2];
    if ((ulong)(*plVar1 - lVar3) < 4) {
      FUN_10897c4d0(plVar1,lVar3,4,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar3) = 0x6c6c756e;
    plVar1[2] = lVar3 + 4;
  }
  else {
    func_0x000103d1d504(plVar1,param_4[1],param_4[2]);
  }
  *(undefined1 *)(unaff_x21 + 4) = 1;
  return 0;
}

