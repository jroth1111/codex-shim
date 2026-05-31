
undefined8 FUN_101472ddc(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_80 = 10;
    uVar3 = func_0x000108a4a0f8(&uStack_80,0,0);
    return uVar3;
  }
  puVar2 = (undefined8 *)_malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,8);
  }
  else {
    *puVar2 = 0x6970615f65726977;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 8;
    param_1[9] = -0x8000000000000000;
    lStack_d8 = param_1[0xb];
    lStack_e0 = param_1[10];
    uStack_e8 = 8;
    puStack_c0 = (undefined8 *)_malloc(9);
    if (puStack_c0 != (undefined8 *)0x0) {
      *(undefined1 *)(puStack_c0 + 1) = 0x73;
      *puStack_c0 = 0x65736e6f70736572;
      uStack_c8 = 9;
      uStack_d0 = 0x8000000000000003;
      uStack_b8 = 9;
      FUN_101497a9c(&uStack_80,param_1,&uStack_e8,&uStack_d0);
      uStack_128 = uStack_70;
      lStack_130 = lStack_78;
      uStack_118 = uStack_60;
      uStack_120 = uStack_68;
      uStack_108 = uStack_50;
      uStack_110 = uStack_58;
      uStack_f8 = uStack_40;
      uStack_100 = uStack_48;
      uStack_f0 = uStack_38;
      if (lStack_78 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_130);
      }
      return 0;
    }
  }
  func_0x0001087c9084(1,9);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101472f40);
  (*pcVar1)();
}

