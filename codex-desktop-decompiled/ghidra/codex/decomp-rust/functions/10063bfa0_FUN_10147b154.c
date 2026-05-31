
undefined8
FUN_10147b154(long *param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x1;
  ulong uVar5;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined1 auStack_1b8 [40];
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    uVar3 = func_0x000108a4a0f8(&stack0xffffffffffffffd8,0,0);
    return uVar3;
  }
  if (*param_1 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    uVar5 = param_4;
  }
  else {
    uVar5 = param_4;
    lVar1 = _malloc(param_3);
    unaff_x20 = param_3;
    if (lVar1 != 0) {
      _memcpy(lVar1,param_2,param_3);
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
        _free(param_1[10]);
      }
      param_1[10] = lVar1;
      param_1[0xb] = param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
      uStack_e0 = param_4 & 0xff;
      uStack_e8 = 0x8000000000000001;
      lStack_100 = param_3;
      FUN_101497a9c(auStack_a0,param_1,&lStack_100,&uStack_e8);
      uStack_148 = uStack_90;
      lStack_150 = lStack_98;
      uStack_138 = uStack_80;
      uStack_140 = uStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_118 = uStack_60;
      uStack_120 = uStack_68;
      uStack_110 = uStack_58;
      if (lStack_98 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_150);
      }
      return 0;
    }
  }
  plVar2 = (long *)FUN_107c03c64(1,unaff_x20);
  uVar3 = FUN_1013fe3ec();
  if ((char)*plVar2 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar1 = extraout_x1;
  }
  else {
    unaff_x22 = (undefined8 *)plVar2[1];
    plVar2 = (long *)*unaff_x22;
    lVar1 = plVar2[2];
    if (*plVar2 != lVar1) goto LAB_10063c118;
  }
  uVar3 = thunk_FUN_108855060(plVar2,lVar1,1,1,1);
  lVar1 = plVar2[2];
LAB_10063c118:
  *(undefined1 *)(plVar2[1] + lVar1) = 0x3a;
  plVar2[2] = lVar1 + 1;
  plVar2 = (long *)*unaff_x22;
  if ((uVar5 & 1) == 0) {
    lVar1 = plVar2[2];
    if ((ulong)(*plVar2 - lVar1) < 4) {
      uVar3 = thunk_FUN_108855060(plVar2,lVar1,4,1,1);
      lVar1 = plVar2[2];
    }
    *(undefined4 *)(plVar2[1] + lVar1) = 0x6c6c756e;
    lVar1 = lVar1 + 4;
  }
  else {
    lVar4 = __ZN38__LT_u32_u20_as_u20_itoa__Unsigned_GT_3fmt17h06c25dc7700f2aa5E
                      (param_5,auStack_1b8);
    uVar5 = 10 - lVar4;
    lVar1 = plVar2[2];
    if ((ulong)(*plVar2 - lVar1) < uVar5) {
      thunk_FUN_108855060(plVar2,lVar1,uVar5,1,1);
      lVar1 = plVar2[2];
    }
    uVar3 = _memcpy(plVar2[1] + lVar1,auStack_1b8 + lVar4,uVar5);
    lVar1 = lVar1 + uVar5;
  }
  plVar2[2] = lVar1;
  return uVar3;
}

