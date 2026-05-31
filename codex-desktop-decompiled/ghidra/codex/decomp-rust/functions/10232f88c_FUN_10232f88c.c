
void FUN_10232f88c(ulong *param_1,uint *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  param_1[6] = param_1[6] + param_3;
  uVar3 = param_1[8];
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar3 = param_3 & 7;
    param_3 = param_3 & 0xfffffffffffffff8;
    if (param_3 != 0) goto LAB_10232f9c4;
LAB_10232f8e8:
    if (uVar3 < 4) goto LAB_10232fa1c;
LAB_10232f8f0:
    uVar5 = (ulong)*(uint *)((long)param_2 + uVar2);
    uVar4 = 4;
    if (uVar3 < 6) goto LAB_10232fa48;
  }
  else {
    uVar2 = 8 - uVar3;
    uVar5 = uVar2;
    if (param_3 <= uVar2) {
      uVar5 = param_3;
    }
    if (uVar5 < 4) {
      uVar7 = 0;
      uVar4 = 0;
      if (1 < uVar5) goto LAB_10232f91c;
    }
    else {
      uVar4 = (ulong)*param_2;
      uVar7 = 4;
      if (5 < uVar5) {
LAB_10232f91c:
        uVar4 = (ulong)*(ushort *)((long)param_2 + uVar7) << (uVar7 << 3) | uVar4;
        uVar7 = uVar7 | 2;
      }
    }
    if (uVar7 < uVar5) {
      uVar4 = (ulong)*(byte *)((long)param_2 + uVar7) << (uVar7 << 3) | uVar4;
    }
    uVar5 = param_1[7] | uVar4 << ((uVar3 & 7) << 3);
    param_1[7] = uVar5;
    if (param_3 < uVar2) {
      param_1[8] = uVar3 + param_3;
      return;
    }
    uVar4 = param_1[2];
    uVar7 = param_1[3] ^ uVar5;
    uVar3 = uVar4 + *param_1;
    uVar6 = uVar3 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
    uVar4 = param_1[1] + uVar7 + uVar6;
    uVar7 = param_1[1] + uVar7 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
    uVar3 = uVar7 + (uVar3 >> 0x20 | uVar3 << 0x20);
    param_1[2] = uVar4 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
    param_1[3] = uVar3 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
    *param_1 = uVar3 ^ uVar5;
    param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar3 = param_3 - uVar2 & 7;
    param_3 = param_3 - uVar2 & 0xfffffffffffffff8;
    if (param_3 <= uVar2) goto LAB_10232f8e8;
LAB_10232f9c4:
    uVar7 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = *param_1;
    uVar6 = param_1[1];
    do {
      uVar4 = *(ulong *)((long)param_2 + uVar2) ^ uVar4;
      uVar5 = uVar5 + uVar7;
      uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
      uVar1 = uVar4 + uVar6 + uVar7;
      uVar6 = uVar4 + uVar6 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
      uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
      uVar4 = uVar6 + (uVar5 >> 0x20 | uVar5 << 0x20);
      uVar5 = uVar4 ^ *(ulong *)((long)param_2 + uVar2);
      uVar4 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
      uVar6 = uVar1 >> 0x20 | uVar1 << 0x20;
      uVar2 = uVar2 + 8;
    } while (uVar2 < param_3);
    param_1[2] = uVar7;
    param_1[3] = uVar4;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    if (3 < uVar3) goto LAB_10232f8f0;
LAB_10232fa1c:
    uVar4 = 0;
    uVar5 = 0;
    if (uVar3 < 2) goto LAB_10232fa48;
  }
  uVar5 = (ulong)*(ushort *)((long)param_2 + uVar4 + uVar2) << (uVar4 << 3) | uVar5;
  uVar4 = uVar4 | 2;
LAB_10232fa48:
  if (uVar4 < uVar3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar4 + uVar2) << (uVar4 << 3) | uVar5;
    param_1[8] = uVar3;
    return;
  }
  param_1[7] = uVar5;
  param_1[8] = uVar3;
  return;
}

