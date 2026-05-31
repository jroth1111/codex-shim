
void FUN_100d89d24(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    return;
  }
  uVar6 = param_1[0x21];
  uVar5 = param_1[0x20];
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 2) = 4;
    puStack_140 = puVar2;
    puVar3 = (undefined8 *)_malloc(0x11);
    if (puVar3 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x11);
    }
    else {
      *(undefined1 *)(puVar3 + 2) = 100;
      puVar3[1] = 0x65736f6c63206e6f;
      *puVar3 = 0x697463656e6e6f63;
      puVar4 = (undefined8 *)_malloc(0x18);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0x11;
        puVar4[1] = puVar3;
        puVar4[2] = 0x11;
        *puVar2 = puVar4;
        puVar2[1] = &UNK_10b209118;
        uStack_78 = param_1[0x19];
        uStack_80 = param_1[0x18];
        uStack_68 = param_1[0x1b];
        uStack_70 = param_1[0x1a];
        uStack_58 = param_1[0x1d];
        uStack_60 = param_1[0x1c];
        uStack_48 = param_1[0x1f];
        uStack_50 = param_1[0x1e];
        uStack_b8 = param_1[0x11];
        uStack_c0 = param_1[0x10];
        uStack_a8 = param_1[0x13];
        uStack_b0 = param_1[0x12];
        uStack_98 = param_1[0x15];
        uStack_a0 = param_1[0x14];
        uStack_88 = param_1[0x17];
        uStack_90 = param_1[0x16];
        uStack_f8 = param_1[9];
        uStack_100 = param_1[8];
        uStack_e8 = param_1[0xb];
        uStack_f0 = param_1[10];
        uStack_d8 = param_1[0xd];
        uStack_e0 = param_1[0xc];
        uStack_c8 = param_1[0xf];
        uStack_d0 = param_1[0xe];
        uStack_138 = param_1[1];
        puStack_140 = (undefined8 *)*param_1;
        uStack_128 = param_1[3];
        uStack_130 = param_1[2];
        uStack_118 = param_1[5];
        uStack_120 = param_1[4];
        uStack_108 = param_1[7];
        uStack_110 = param_1[6];
        puStack_40 = puVar2;
        FUN_10084e7d8(uVar5,uVar6,&puStack_140);
        return;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100d89e9c);
  (*pcVar1)();
}

