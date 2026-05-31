
undefined8 FUN_1014824d4(long *param_1,ulong param_2)

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
    puVar2 = (undefined8 *)_malloc(0x12);
    if (puVar2 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x12);
      goto LAB_101482684;
    }
    *(undefined2 *)(puVar2 + 2) = 0x7265;
    puVar2[1] = 0x7765697665725f73;
    *puVar2 = 0x6c61766f72707061;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 0x12;
    param_1[9] = -0x8000000000000000;
    lStack_e8 = param_1[0xb];
    lStack_f0 = param_1[10];
    uStack_f8 = 0x12;
    if (((uint)param_2 & 0xff) == 2) {
      uStack_e0 = 0x8000000000000000;
      uStack_d8 = 0x8000000000000000;
      uStack_c8 = 2;
    }
    else if ((param_2 & 1) == 0) {
      param_2 = 4;
      puVar2 = (undefined8 *)_malloc(4);
      if (puVar2 == (undefined8 *)0x0) goto LAB_101482684;
      *(undefined4 *)puVar2 = 0x72657375;
      uStack_d8 = 4;
      uStack_e0 = 0x8000000000000003;
      uStack_c8 = 4;
    }
    else {
      param_2 = 0x11;
      puVar2 = (undefined8 *)_malloc(0x11);
      if (puVar2 == (undefined8 *)0x0) {
LAB_101482684:
        func_0x0001087c9084(1,param_2);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101482694);
        (*pcVar1)();
      }
      *(undefined1 *)(puVar2 + 2) = 0x74;
      puVar2[1] = 0x6e6567616275735f;
      *puVar2 = 0x6e61696472617567;
      uStack_d8 = 0x11;
      uStack_e0 = 0x8000000000000003;
      uStack_c8 = 0x11;
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

