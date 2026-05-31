
undefined8 FUN_101488b1c(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
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
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
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
    puVar2 = (undefined8 *)_malloc(5);
    if (puVar2 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,5);
      goto LAB_101488cd8;
    }
    *(undefined1 *)((long)puVar2 + 4) = 0x65;
    *(undefined4 *)puVar2 = 0x73616870;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 5;
    param_1[9] = -0x8000000000000000;
    lStack_e8 = param_1[0xb];
    lStack_f0 = param_1[10];
    uStack_f8 = 5;
    if (((uint)param_2 & 0xff) == 2) {
      uStack_e0 = 0x8000000000000000;
      uStack_d8 = 0x8000000000000000;
      uStack_c8 = 2;
    }
    else if ((param_2 & 1) == 0) {
      param_2 = 10;
      puVar2 = (undefined8 *)_malloc(10);
      if (puVar2 == (undefined8 *)0x0) goto LAB_101488cd8;
      *(undefined2 *)(puVar2 + 1) = 0x7972;
      *puVar2 = 0x61746e656d6d6f63;
      uStack_d8 = 10;
      uStack_e0 = 0x8000000000000003;
      uStack_c8 = 10;
    }
    else {
      param_2 = 0xc;
      puVar2 = (undefined8 *)_malloc(0xc);
      if (puVar2 == (undefined8 *)0x0) {
LAB_101488cd8:
        func_0x0001087c9084(1,param_2);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101488ce8);
        (*pcVar1)();
      }
      *(undefined4 *)(puVar2 + 1) = 0x72657773;
      *puVar2 = 0x6e615f6c616e6966;
      uStack_d8 = 0xc;
      uStack_e0 = 0x8000000000000003;
      uStack_c8 = 0xc;
    }
    puStack_d0 = puVar2;
    FUN_101497a9c(&uStack_90,param_1,&uStack_f8,&uStack_e0);
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

