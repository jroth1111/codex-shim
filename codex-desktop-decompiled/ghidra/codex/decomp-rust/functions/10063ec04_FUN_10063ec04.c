
void FUN_10063ec04(long *param_1,ulong param_2)

{
  code *pcVar1;
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
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
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
    puStack_d0 = (undefined8 *)_malloc(0x13);
    unaff_x20 = param_2;
    if (puStack_d0 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puStack_d0 + 0xf) = 0x77656976;
      puStack_d0[1] = 0x765f72656b636970;
      *puStack_d0 = 0x5f6e6f6973736573;
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
        _free(param_1[10]);
      }
      param_1[10] = (long)puStack_d0;
      param_1[0xb] = 0x13;
      param_1[9] = -0x8000000000000000;
      lStack_e8 = param_1[0xb];
      lStack_f0 = param_1[10];
      uStack_f8 = 0x13;
      if (((uint)param_2 & 0xff) == 2) {
        uStack_e0 = 0x8000000000000000;
        uStack_d8 = 0x8000000000000000;
        uStack_c8 = 2;
LAB_10063ed24:
        FUN_101497a9c(auStack_90,param_1,&uStack_f8,&uStack_e0);
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
      if ((param_2 & 1) == 0) {
        unaff_x20 = 0xb;
        puStack_d0 = (undefined8 *)_malloc(0xb);
        if (puStack_d0 != (undefined8 *)0x0) {
          *(undefined4 *)((long)puStack_d0 + 7) = 0x656c6261;
          *puStack_d0 = 0x6174726f666d6f63;
          uStack_d8 = 0xb;
          uStack_e0 = 0x8000000000000003;
          uStack_c8 = 0xb;
          goto LAB_10063ed24;
        }
      }
      else {
        unaff_x20 = 5;
        puStack_d0 = (undefined8 *)_malloc(5);
        if (puStack_d0 != (undefined8 *)0x0) {
          *(undefined1 *)((long)puStack_d0 + 4) = 0x65;
          *(undefined4 *)puStack_d0 = 0x736e6564;
          uStack_d8 = 5;
          uStack_e0 = 0x8000000000000003;
          uStack_c8 = 5;
          goto LAB_10063ed24;
        }
      }
      goto LAB_10063edbc;
    }
  }
  FUN_107c03c64(1,0x13);
LAB_10063edbc:
  FUN_107c03c64(1,unaff_x20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063edcc);
  (*pcVar1)();
}

