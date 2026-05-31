
/* WARNING: Type propagation algorithm not settling */

void __ZN14rama_http_core5proto2h26client11new_builder17h8ebcd107f62830c6E
               (undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_138;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined2 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined2 auStack_60 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_88 = *(undefined8 *)(param_2 + 0x28);
  uStack_11c = param_2[0x2a];
  uStack_fc = param_2[0x2b];
  uStack_ec = param_2[0x2c];
  uStack_70 = param_2[0x2d];
  uStack_168 = 0x400;
  uStack_170 = 1;
  uStack_160 = 0;
  uStack_138 = 0x8000000000000000;
  uStack_120 = 1;
  uStack_10c = (uint)*(byte *)((long)param_2 + 0xba);
  uStack_110 = 1;
  uStack_100 = 1;
  uStack_f0 = 1;
  uStack_d8 = 2;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_90 = 0;
  uStack_78 = 0x14;
  uStack_80 = 0x32;
  uStack_6c = 1;
  uStack_68 = 0;
  if (param_2[8] == 1) {
    uStack_f4 = param_2[9];
    uVar1 = *param_2;
  }
  else {
    uVar1 = *param_2;
  }
  uStack_f8 = ZEXT14(param_2[8] == 1);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2[4];
  }
  else {
    uStack_80 = *(undefined8 *)(param_2 + 2);
    uVar1 = param_2[4];
  }
  if (uVar1 == 1) {
    uStack_78 = *(undefined8 *)(param_2 + 6);
    uVar1 = param_2[10];
  }
  else {
    uVar1 = param_2[10];
  }
  if (uVar1 != 1) {
    uVar2 = param_2[0xc];
  }
  else {
    uStack_114 = param_2[0xb];
    uVar2 = param_2[0xc];
  }
  uStack_118 = ZEXT14(uVar1 == 1);
  if (uVar2 == 1) {
    uStack_104 = param_2[0xd];
    uVar1 = param_2[0xe];
  }
  else {
    uVar1 = param_2[0xe];
  }
  uStack_108 = ZEXT14(uVar2 == 1);
  if (uVar1 != 1) {
    uVar2 = param_2[0x10];
  }
  else {
    uStack_e4 = param_2[0xf];
    uVar2 = param_2[0x10];
  }
  uStack_e8 = (uint)(uVar1 == 1);
  if (uVar2 == 1) {
    uStack_dc = param_2[0x11];
    sVar3 = (short)param_2[0x1a];
  }
  else {
    sVar3 = (short)param_2[0x1a];
  }
  uStack_e0 = (uint)(uVar2 == 1);
  if (sVar3 != 2) {
    FUN_105ab54cc(auStack_60);
    uStack_a8 = (ulong)(ushort)param_2[0x26];
    uStack_b8 = uStack_40;
    uStack_c0 = uStack_48;
    uStack_d8 = auStack_60[0];
    uStack_c8 = uStack_50;
    uStack_b0 = uStack_38;
  }
  _memcpy(param_1,&uStack_170,0x110);
  return;
}

