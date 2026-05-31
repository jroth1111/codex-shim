
void FUN_100639614(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong unaff_x20;
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
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_90 [8];
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
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
  }
  else {
    puVar2 = (undefined8 *)_malloc(10);
    unaff_x20 = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar2 + 1) = 0x726f;
      *puVar2 = 0x68636e615f746570;
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
        _free(param_1[10]);
      }
      param_1[10] = (long)puVar2;
      param_1[0xb] = 10;
      param_1[9] = -0x8000000000000000;
      lStack_e0 = param_1[0xb];
      lStack_e8 = param_1[10];
      uStack_f0 = 10;
      if ((param_2 & 1) == 0) {
        unaff_x20 = 8;
        puStack_c8 = (undefined8 *)_malloc(8);
        if (puStack_c8 != (undefined8 *)0x0) {
          *puStack_c8 = 0x7265736f706d6f63;
          uStack_d0 = 8;
          goto LAB_100639704;
        }
      }
      else {
        unaff_x20 = 0xd;
        puStack_c8 = (undefined8 *)_malloc(0xd);
        if (puStack_c8 != (undefined8 *)0x0) {
          *puStack_c8 = 0x622d6e6565726373;
          *(undefined8 *)((long)puStack_c8 + 5) = 0x6d6f74746f622d6e;
          uStack_d0 = 0xd;
LAB_100639704:
          uStack_d8 = 0x8000000000000003;
          uStack_c0 = uStack_d0;
          FUN_101497a9c(auStack_90,param_1,&uStack_f0,&uStack_d8);
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
          return;
        }
      }
      goto LAB_1006397a0;
    }
  }
  FUN_107c03c64(1,10);
LAB_1006397a0:
  FUN_107c03c64(1,unaff_x20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006397b0);
  (*pcVar1)();
}

