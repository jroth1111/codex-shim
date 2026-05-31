
uint FUN_105a6dc0c(long *param_1,long *param_2)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  if (*param_1 == 2) {
    uStack_48 = param_1[2];
    uStack_50 = param_1[1];
    uStack_70 = uStack_50 ^ 0x736f6d6570736575;
    uStack_68 = uStack_50 ^ 0x6c7967656e657261;
    uStack_60 = uStack_48 ^ 0x646f72616e646f6d;
    uStack_58 = uStack_48 ^ 0x7465646279746573;
    uStack_38 = 0;
    uStack_30 = 0;
    lStack_40 = 0;
    lVar10 = *param_2;
    uStack_28 = (ulong)(lVar10 != 0);
    func_0x000105a6e9c0(&uStack_70,&uStack_28,8);
    if (lVar10 == 0) {
      uStack_28 = (ulong)*(byte *)(param_2 + 1);
      puVar2 = &uStack_28;
      lVar10 = 8;
    }
    else {
      puVar2 = (ulong *)param_2[1];
      lVar10 = param_2[2];
    }
    func_0x000105a6e9c0(&uStack_70,puVar2,lVar10);
    uStack_38 = uStack_38 | lStack_40 << 0x38;
    uStack_58 = uStack_38 ^ uStack_58;
    uStack_70 = uStack_60 + uStack_70;
    uVar8 = uStack_70 ^ (uStack_60 >> 0x33 | uStack_60 << 0xd);
    uVar5 = uStack_58 + uStack_68 + uVar8;
    uVar6 = uStack_58 + uStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
    uVar9 = uVar5 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
    uVar8 = uVar6 + (uStack_70 >> 0x20 | uStack_70 << 0x20);
    uVar4 = uVar8 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar8 = (uVar8 ^ uStack_38) + uVar9;
    uVar9 = uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
    uVar5 = uVar4 + ((uVar5 >> 0x20 | uVar5 << 0x20) ^ 0xff);
    uVar6 = uVar9 + uVar5;
    uVar5 = uVar5 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
    uVar9 = uVar6 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
    uVar8 = uVar5 + (uVar8 >> 0x20 | uVar8 << 0x20);
    uVar4 = uVar9 + uVar8;
    uVar8 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    uVar9 = uVar4 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
    uVar5 = uVar8 + (uVar6 >> 0x20 | uVar6 << 0x20);
    uVar6 = uVar9 + uVar5;
    uVar5 = uVar5 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar9 = uVar6 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
    uVar8 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar5 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    uVar8 = uVar9 + uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
    lVar10 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
    lVar1 = uVar8 + lVar10;
    uVar3 = ((uint)((ulong)lVar10 >> 0x20) ^ (uint)(uVar5 >> 0x10)) >> 0xb ^ (uint)(uVar8 >> 0x2f) ^
            (uint)((ulong)lVar1 >> 0x20) ^ (uint)lVar1;
  }
  else {
    uVar3 = (*param_2 != 0 ^ 0x2325) * 0x4a21;
    if (*param_2 == 0) {
      uVar3 = (*(byte *)(param_2 + 1) ^ 0xa2d39c5) * 0x4a21;
    }
    else {
      lVar10 = param_2[2];
      if (lVar10 != 0) {
        pbVar7 = (byte *)param_2[1];
        do {
          uVar3 = (uVar3 ^ *pbVar7) * 0x1b3;
          lVar10 = lVar10 + -1;
          pbVar7 = pbVar7 + 1;
        } while (lVar10 != 0);
      }
    }
  }
  return uVar3 & 0x7fff;
}

