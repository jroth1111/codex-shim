
ulong FUN_1008927b8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        FUN_107c05cc0(&UNK_10b224cc0);
      }
      uVar4 = FUN_107c05cc4();
      if ((*(byte *)((long)param_1 + 0xb9) & 1) != 0) {
        FUN_100e44ed8(param_1 + 0x18);
      }
      *(undefined1 *)((long)param_1 + 0xb9) = 0;
      if (((*(byte *)((long)param_1 + 0xba) & 1) != 0) &&
         ((param_1[0x13] & 0x7fffffffffffffff) != 0)) {
        _free(param_1[0x14]);
      }
      *(undefined1 *)((long)param_1 + 0xba) = 0;
      *(undefined1 *)(param_1 + 0x17) = 2;
      __Unwind_Resume(uVar4);
      puVar5 = (undefined8 *)FUN_107c05ccc();
      bVar1 = *(byte *)(puVar5 + 0x1f);
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          puVar5[0x1b] = puVar5[0xd];
          puVar5[0x1a] = puVar5[0xc];
          puVar5[0x1d] = puVar5[0xf];
          puVar5[0x1c] = puVar5[0xe];
          uVar4 = puVar5[0x11];
          puVar5[0x1e] = puVar5[0x10];
          puVar5[0x13] = puVar5[5];
          puVar5[0x12] = puVar5[4];
          puVar5[0x15] = puVar5[7];
          puVar5[0x14] = puVar5[6];
          puVar5[0x17] = puVar5[9];
          puVar5[0x16] = puVar5[8];
          puVar5[0x19] = puVar5[0xb];
          puVar5[0x18] = puVar5[10];
          if (puVar5[0x12] == -0x8000000000000000) {
            puVar5[0x21] = puVar5[1];
            puVar5[0x20] = *puVar5;
            puVar5[0x23] = puVar5[3];
            puVar5[0x22] = puVar5[2];
            puVar5[0x25] = puVar5[6];
            puVar5[0x24] = puVar5[5];
            puVar5[0x27] = puVar5[8];
            puVar5[0x26] = puVar5[7];
            puVar5[0x29] = puVar5[10];
            puVar5[0x28] = puVar5[9];
            puVar5[0x2b] = puVar5[0xc];
            puVar5[0x2a] = puVar5[0xb];
            puVar5[0x2c] = puVar5[0xd];
            puVar5[0x2d] = uVar4;
            *(undefined1 *)(puVar5 + 0x1ee) = 0;
LAB_100892b54:
            puVar5[0x31] = puVar5[0x23];
            puVar5[0x30] = puVar5[0x22];
            puVar5[0x38] = puVar5[0x29];
            puVar5[0x37] = puVar5[0x28];
            puVar5[0x3a] = puVar5[0x2b];
            puVar5[0x39] = puVar5[0x2a];
            puVar5[0x2e] = puVar5[0x20];
            puVar5[0x2f] = puVar5[0x21];
            puVar5[0x32] = 0x8000000000000052;
            puVar5[0x3b] = puVar5[0x2c];
            puVar5[0x34] = puVar5[0x25];
            puVar5[0x33] = puVar5[0x24];
            puVar5[0x36] = puVar5[0x27];
            puVar5[0x35] = puVar5[0x26];
            puVar5[0xa9] = uVar4;
            *(undefined1 *)(puVar5 + 0xbc) = 0;
            goto LAB_100892ba0;
          }
          puVar5[0x2d] = *puVar5;
          puVar5[0x2c] = puVar5[0x10];
          puVar5[0x2f] = puVar5[2];
          puVar5[0x2e] = puVar5[1];
          puVar5[0x25] = puVar5[9];
          puVar5[0x24] = puVar5[8];
          puVar5[0x27] = puVar5[0xb];
          puVar5[0x26] = puVar5[10];
          puVar5[0x29] = puVar5[0xd];
          puVar5[0x28] = puVar5[0xc];
          puVar5[0x2b] = puVar5[0xf];
          puVar5[0x2a] = puVar5[0xe];
          puVar5[0x21] = puVar5[5];
          puVar5[0x20] = puVar5[4];
          puVar5[0x23] = puVar5[7];
          puVar5[0x22] = puVar5[6];
          puVar5[0x30] = puVar5[3];
          puVar5[0x31] = uVar4;
          *(undefined1 *)(puVar5 + 0x37) = 0;
          goto LAB_100892c28;
        }
        if (bVar1 == 1) {
          FUN_107c05cc0(&UNK_10b224cd8);
        }
        FUN_107c05cc4();
      }
      else {
        if (bVar1 != 3) {
LAB_100892c28:
          uVar3 = FUN_1008927b8(puVar5 + 0x20);
          if ((uVar3 & 1) == 0) {
            FUN_100d84c5c(puVar5 + 0x20);
            uVar3 = 0;
            uVar6 = 1;
          }
          else {
            uVar3 = 1;
            uVar6 = 4;
          }
LAB_100892c50:
          *(undefined1 *)(puVar5 + 0x1f) = uVar6;
          return uVar3;
        }
        bVar1 = *(byte *)(puVar5 + 0x1ee);
        if (1 < bVar1) {
          if (bVar1 != 3) {
            FUN_107c05cc4(&UNK_10b224cf0);
            goto LAB_100892ca4;
          }
LAB_100892ba0:
          uVar3 = FUN_100892e70(puVar5 + 0x2e);
          if ((uVar3 & 1) == 0) {
            FUN_100cf6de0(puVar5 + 0x2e);
            uVar6 = 1;
          }
          else {
            uVar6 = 3;
          }
          *(undefined1 *)(puVar5 + 0x1ee) = uVar6;
          goto LAB_100892c50;
        }
        if (bVar1 == 0) {
          uVar4 = puVar5[0x2d];
          goto LAB_100892b54;
        }
      }
      FUN_107c05cc0(&UNK_10b224cf0);
LAB_100892ca4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100892ca8);
      (*pcVar2)();
    }
    param_1[0x12] = param_1[0x11];
    param_1[0x14] = param_1[0xe];
    param_1[0x13] = param_1[0xd];
    param_1[0x16] = param_1[0x10];
    param_1[0x15] = param_1[0xf];
    *(undefined2 *)((long)param_1 + 0xb9) = 0x101;
    param_1[0x21] = param_1[9];
    param_1[0x20] = param_1[8];
    param_1[0x23] = param_1[0xb];
    param_1[0x22] = param_1[10];
    param_1[0x19] = param_1[1];
    param_1[0x18] = *param_1;
    param_1[0x1b] = param_1[3];
    param_1[0x1a] = param_1[2];
    param_1[0x1d] = param_1[5];
    param_1[0x1c] = param_1[4];
    param_1[0x1f] = param_1[7];
    param_1[0x1e] = param_1[6];
    param_1[0x24] = param_1[0xc];
    param_1[0x25] = param_1[0x11];
    param_1[0x26] = param_1 + 0x13;
    *(undefined1 *)(param_1 + 0x37) = 0;
LAB_10089283c:
    FUN_100894560(&lStack_208,param_1 + 0x25,param_2);
    if (lStack_208 == 4) {
      uVar3 = 1;
      uVar6 = 3;
      goto LAB_1008929cc;
    }
    uStack_138 = uStack_1b0;
    uStack_140 = uStack_1b8;
    uStack_128 = uStack_1a0;
    uStack_130 = uStack_1a8;
    uStack_188 = uStack_200;
    lStack_190 = lStack_208;
    uStack_178 = uStack_1f0;
    uStack_180 = uStack_1f8;
    uStack_168 = uStack_1e0;
    uStack_170 = uStack_1e8;
    uStack_120 = uStack_198;
    uStack_158 = uStack_1d0;
    uStack_160 = uStack_1d8;
    uStack_148 = uStack_1c0;
    uStack_150 = uStack_1c8;
    if ((((*(char *)(param_1 + 0x37) == '\x03') && (*(char *)(param_1 + 0x36) == '\x03')) &&
        (*(char *)(param_1 + 0x35) == '\x03')) && (*(char *)(param_1 + 0x2c) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x2d);
      if (param_1[0x2e] != 0) {
        (**(code **)(param_1[0x2e] + 0x18))(param_1[0x2f]);
      }
    }
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_108 = uStack_188;
    lStack_110 = lStack_190;
    uStack_f8 = uStack_178;
    uStack_100 = uStack_180;
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_d8 = uStack_158;
    uStack_e0 = uStack_160;
    *(undefined1 *)((long)param_1 + 0xba) = 0;
    *(undefined1 *)((long)param_1 + 0xb9) = 0;
    uStack_90 = param_1[0x19];
    uStack_98 = param_1[0x18];
    uStack_80 = param_1[0x1b];
    uStack_88 = param_1[0x1a];
    uStack_38 = param_1[0x24];
    uStack_a0 = uStack_120;
    uStack_50 = param_1[0x21];
    uStack_58 = param_1[0x20];
    uStack_40 = param_1[0x23];
    uStack_48 = param_1[0x22];
    uStack_70 = param_1[0x1d];
    uStack_78 = param_1[0x1c];
    uStack_60 = param_1[0x1f];
    uStack_68 = param_1[0x1e];
    param_1[0x19] = uStack_188;
    param_1[0x18] = lStack_190;
    param_1[0x1b] = uStack_178;
    param_1[0x1a] = uStack_180;
    param_1[0x21] = uStack_148;
    param_1[0x20] = uStack_150;
    param_1[0x23] = uStack_138;
    param_1[0x22] = uStack_140;
    param_1[0x1d] = uStack_168;
    param_1[0x1c] = uStack_170;
    param_1[0x1f] = uStack_158;
    param_1[0x1e] = uStack_160;
    param_1[0x29] = uStack_88;
    param_1[0x28] = uStack_90;
    param_1[0x2b] = uStack_78;
    param_1[0x2a] = uStack_80;
    param_1[0x25] = uStack_128;
    param_1[0x24] = uStack_130;
    param_1[0x27] = uStack_98;
    param_1[0x26] = uStack_120;
    param_1[0x31] = uStack_48;
    param_1[0x30] = uStack_50;
    param_1[0x33] = uStack_38;
    param_1[0x32] = uStack_40;
    param_1[0x2d] = uStack_68;
    param_1[0x2c] = uStack_70;
    param_1[0x2f] = uStack_58;
    param_1[0x2e] = uStack_60;
    param_1[0x34] = param_1[0x13];
    param_1[0x35] = param_1[0x14];
    param_1[0x37] = param_1[0x16];
    param_1[0x36] = param_1[0x15];
    param_1[0x38] = param_1[0x12];
    *(undefined1 *)(param_1 + 0x147) = 0;
  }
  else if (bVar1 == 3) goto LAB_10089283c;
  uVar3 = FUN_100892d08(param_1 + 0x18,param_2);
  if ((uVar3 & 1) == 0) {
    FUN_100cf6ce4(param_1 + 0x18);
    uVar3 = 0;
    *(undefined2 *)((long)param_1 + 0xb9) = 0;
    uVar6 = 1;
  }
  else {
    uVar3 = 1;
    uVar6 = 4;
  }
LAB_1008929cc:
  *(undefined1 *)(param_1 + 0x17) = uVar6;
  return uVar3;
}

