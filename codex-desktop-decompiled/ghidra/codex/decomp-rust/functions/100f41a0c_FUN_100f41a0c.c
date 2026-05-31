
void FUN_100f41a0c(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  
  lVar6 = param_1[2];
  uVar2 = 3;
  if (0xffff < param_2) {
    uVar2 = 4;
  }
  uVar3 = 2;
  if (0x7ff < param_2) {
    uVar3 = uVar2;
  }
  uVar2 = 1;
  if (0x7f < param_2) {
    uVar2 = uVar3;
  }
  if ((ulong)(*param_1 - lVar6) < uVar2) {
    FUN_108855060(param_1,lVar6,uVar2,1,1);
    pbVar1 = (byte *)(param_1[1] + param_1[2]);
  }
  else {
    pbVar1 = (byte *)(param_1[1] + lVar6);
  }
  if (param_2 < 0x80) {
    *pbVar1 = (byte)param_2;
  }
  else {
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
      pbVar1[1] = bVar4;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 < 0x10000) {
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
      }
      else {
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
      }
    }
  }
  param_1[2] = uVar2 + lVar6;
  return;
}

