
undefined8 FUN_101477b90(long *param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  ulong uStack_c8;
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
    uVar4 = func_0x000108a4a0f8(&uStack_90,0,0);
  }
  else {
    puVar3 = (undefined8 *)_malloc(0xb);
    if (puVar3 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0xb);
      goto LAB_101477d80;
    }
    *(undefined4 *)((long)puVar3 + 7) = 0x7974696c;
    *puVar3 = 0x6c616e6f73726570;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar3;
    param_1[0xb] = 0xb;
    param_1[9] = -0x8000000000000000;
    lStack_e8 = param_1[0xb];
    lStack_f0 = param_1[10];
    uStack_f8 = 0xb;
    uVar1 = (uint)param_2 & 0xff;
    uStack_c8 = (ulong)uVar1;
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      if ((param_2 & 0xff) == 0) {
        param_2 = 4;
        puVar3 = (undefined8 *)_malloc(4);
        if (puVar3 == (undefined8 *)0x0) {
LAB_101477d80:
          func_0x0001087c9084(1,param_2);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101477d90);
          (*pcVar2)();
        }
        *(undefined4 *)puVar3 = 0x656e6f6e;
        uStack_d8 = 4;
        uStack_e0 = 0x8000000000000003;
        uStack_c8 = 4;
      }
      else {
        param_2 = 8;
        puVar3 = (undefined8 *)_malloc(8);
        if (puVar3 == (undefined8 *)0x0) goto LAB_101477d80;
        *puVar3 = 0x796c646e65697266;
        uStack_d8 = 8;
        uStack_e0 = 0x8000000000000003;
        uStack_c8 = 8;
      }
    }
    else if (uVar1 == 2) {
      param_2 = 9;
      puVar3 = (undefined8 *)_malloc(9);
      if (puVar3 == (undefined8 *)0x0) goto LAB_101477d80;
      *(undefined1 *)(puVar3 + 1) = 99;
      *puVar3 = 0x6974616d67617270;
      uStack_d8 = 9;
      uStack_e0 = 0x8000000000000003;
      uStack_c8 = 9;
    }
    else {
      uStack_e0 = 0x8000000000000000;
      uStack_d8 = 0x8000000000000000;
    }
    puStack_d0 = puVar3;
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
    uVar4 = 0;
  }
  return uVar4;
}

