
undefined8 FUN_103ebfbf8(byte *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x1;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  undefined8 auStack_48 [3];
  
  if ((*param_1 & 1) != 0) {
    auStack_48[0] = 10;
    uVar1 = func_0x000108a4a0f8(auStack_48,0,0);
    return uVar1;
  }
  FUN_103ea7d88();
  if (*param_1 == 1) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff50);
    lVar2 = extraout_x1;
  }
  else {
    unaff_x21 = *(undefined8 **)(param_1 + 8);
    param_1 = (byte *)*unaff_x21;
    lVar2 = *(long *)(param_1 + 0x10);
    if (1 < (ulong)(*(long *)param_1 - lVar2)) goto LAB_103ebfc48;
  }
  FUN_10897c4d0(param_1,lVar2,2,1,1);
  lVar2 = *(long *)(param_1 + 0x10);
LAB_103ebfc48:
  *(undefined2 *)(*(long *)(param_1 + 8) + lVar2) = 0x203a;
  *(long *)(param_1 + 0x10) = lVar2 + 2;
  plVar4 = (long *)*unaff_x21;
  if ((param_4 & 1) == 0) {
    lVar2 = plVar4[2];
    if ((ulong)(*plVar4 - lVar2) < 5) {
      FUN_10897c4d0(plVar4,lVar2,5,1,1);
      lVar2 = plVar4[2];
    }
    lVar3 = plVar4[1];
    *(undefined4 *)(lVar3 + lVar2) = 0x736c6166;
    *(undefined1 *)((undefined4 *)(lVar3 + lVar2) + 1) = 0x65;
    lVar2 = lVar2 + 5;
  }
  else {
    lVar2 = plVar4[2];
    if ((ulong)(*plVar4 - lVar2) < 4) {
      FUN_10897c4d0(plVar4,lVar2,4,1,1);
      lVar2 = plVar4[2];
    }
    *(undefined4 *)(plVar4[1] + lVar2) = 0x65757274;
    lVar2 = lVar2 + 4;
  }
  plVar4[2] = lVar2;
  *(undefined1 *)(unaff_x21 + 4) = 1;
  return 0;
}

