
undefined1  [16] FUN_105d83f54(long *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)param_1[1]) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    return auVar5 << 0x40;
  }
  bVar2 = *pbVar1;
  auVar7._9_7_ = 0;
  auVar7[8] = bVar2;
  *param_1 = (long)(pbVar1 + 1);
  if (-1 < (char)bVar2) {
    auVar7._0_8_ = 1;
    return auVar7;
  }
  *param_1 = (long)(pbVar1 + 2);
  bVar3 = pbVar1[1];
  uVar6 = (uint)bVar2;
  if (bVar2 < 0xe0) {
    auVar9._8_4_ = bVar3 & 0x3f | (uVar6 & 0x1f) << 6;
    auVar9._0_8_ = 1;
    auVar9._12_4_ = 0;
    return auVar9;
  }
  *param_1 = (long)(pbVar1 + 3);
  uVar4 = pbVar1[2] & 0x3f | (bVar3 & 0x3f) << 6;
  if (0xef < uVar6) {
    *param_1 = (long)(pbVar1 + 4);
    auVar8._12_4_ = 0;
    auVar8._8_4_ = pbVar1[3] & 0x3f | uVar4 << 6 | (uVar6 & 7) << 0x12;
    auVar8._0_8_ = 1;
    return auVar8;
  }
  auVar10._12_4_ = 0;
  auVar10._8_4_ = uVar4 | (uVar6 & 0x1f) << 0xc;
  auVar10._0_8_ = 1;
  return auVar10;
}

