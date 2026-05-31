
void __ZN15rama_http_types5proto2h25frame7setting14SettingsConfig5merge17h4bdb6178d1a52c0dE
               (undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*param_2 == 1) {
    iVar2 = param_2[1];
    iVar1 = param_2[2];
    *param_1 = 1;
    param_1[1] = iVar2;
  }
  else {
    iVar1 = param_2[2];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[3];
    iVar1 = param_2[4];
    param_1[2] = 1;
    param_1[3] = iVar2;
  }
  else {
    iVar1 = param_2[4];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[5];
    iVar1 = param_2[6];
    param_1[4] = 1;
    param_1[5] = iVar2;
  }
  else {
    iVar1 = param_2[6];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[7];
    iVar1 = param_2[8];
    param_1[6] = 1;
    param_1[7] = iVar2;
  }
  else {
    iVar1 = param_2[8];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[9];
    iVar1 = param_2[10];
    param_1[8] = 1;
    param_1[9] = iVar2;
  }
  else {
    iVar1 = param_2[10];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[0xb];
    iVar1 = param_2[0xc];
    param_1[10] = 1;
    param_1[0xb] = iVar2;
  }
  else {
    iVar1 = param_2[0xc];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[0xd];
    iVar1 = param_2[0xe];
    param_1[0xc] = 1;
    param_1[0xd] = iVar2;
  }
  else {
    iVar1 = param_2[0xe];
  }
  if (iVar1 == 1) {
    iVar2 = param_2[0xf];
    param_1[0xe] = 1;
    param_1[0xf] = iVar2;
    sVar3 = (short)param_2[0x10];
  }
  else {
    sVar3 = (short)param_2[0x10];
  }
  if (sVar3 == 2) {
    return;
  }
  if ((*(short *)(param_1 + 0x10) != 2) && (8 < *(ulong *)(param_1 + 0x1a))) {
    _free(*(undefined8 *)(param_1 + 0x14));
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x16);
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  return;
}

