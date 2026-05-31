
undefined8 FUN_101479e70(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_90 = 10;
    uVar3 = func_0x000108a4a0f8(&uStack_90,0,0);
  }
  else {
    puVar2 = (undefined4 *)_malloc(5);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,5);
LAB_101479ff4:
      func_0x0001087c9084(1,param_2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10147a004);
      (*pcVar1)();
    }
    *(undefined1 *)(puVar2 + 1) = 0x65;
    *puVar2 = 0x706f6373;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 5;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    uStack_f0 = 5;
    if ((param_2 & 1) == 0) {
      param_2 = 6;
      puStack_c8 = (undefined4 *)_malloc(6);
      if (puStack_c8 == (undefined4 *)0x0) goto LAB_101479ff4;
      *(undefined2 *)(puStack_c8 + 1) = 0x6461;
      *puStack_c8 = 0x65726874;
      uStack_d0 = 6;
    }
    else {
      param_2 = 4;
      puStack_c8 = (undefined4 *)_malloc(4);
      if (puStack_c8 == (undefined4 *)0x0) goto LAB_101479ff4;
      *puStack_c8 = 0x6e727574;
      uStack_d0 = 4;
    }
    uStack_d8 = 0x8000000000000003;
    uStack_c0 = uStack_d0;
    FUN_101497a9c(&uStack_90,param_1,&uStack_f0,&uStack_d8);
    uStack_138 = uStack_80;
    lStack_140 = lStack_88;
    uStack_128 = uStack_70;
    uStack_130 = uStack_78;
    uStack_118 = uStack_60;
    uStack_120 = uStack_68;
    uStack_108 = uStack_50;
    uStack_110 = uStack_58;
    uStack_100 = uStack_48;
    if (lStack_88 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_140);
    }
    uVar3 = 0;
  }
  return uVar3;
}

