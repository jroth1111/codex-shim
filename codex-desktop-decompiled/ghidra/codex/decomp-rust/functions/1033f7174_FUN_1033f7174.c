
ulong FUN_1033f7174(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uStack_80 = param_1 ^ 0x736f6d6570736575;
  uStack_78 = param_1 ^ 0x6c7967656e657261;
  uStack_70 = param_2 ^ 0x646f72616e646f6d;
  uStack_68 = param_2 ^ 0x7465646279746573;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  FUN_1035f1960(&uStack_80,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  uStack_38 = CONCAT71(uStack_38._1_7_,0xff);
  FUN_1035f1960(&uStack_80,&uStack_38,1);
  lVar6 = *(long *)(param_3 + 0x18);
  uStack_38 = (ulong)(lVar6 != -0x8000000000000000);
  FUN_1035f1960(&uStack_80,&uStack_38,8);
  if (lVar6 != -0x8000000000000000) {
    FUN_1035f1960(&uStack_80,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    uStack_38 = CONCAT71(uStack_38._1_7_,0xff);
    FUN_1035f1960(&uStack_80,&uStack_38,1);
  }
  uStack_48 = uStack_48 | lStack_50 << 0x38;
  uStack_68 = uStack_48 ^ uStack_68;
  uStack_80 = uStack_70 + uStack_80;
  uVar4 = uStack_80 ^ (uStack_70 >> 0x33 | uStack_70 << 0xd);
  uVar2 = uStack_68 + uStack_78 + uVar4;
  uVar3 = uStack_68 + uStack_78 ^ (uStack_68 >> 0x30 | uStack_68 << 0x10);
  uVar5 = uVar2 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar4 = uVar3 + (uStack_80 >> 0x20 | uStack_80 << 0x20);
  uVar1 = uVar4 ^ (uVar3 >> 0x2b | uVar3 << 0x15);
  uVar4 = (uVar4 ^ uStack_48) + uVar5;
  uVar5 = uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar2 = uVar1 + ((uVar2 >> 0x20 | uVar2 << 0x20) ^ 0xff);
  uVar3 = uVar5 + uVar2;
  uVar2 = uVar2 ^ (uVar1 >> 0x30 | uVar1 << 0x10);
  uVar5 = uVar3 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar4 = uVar2 + (uVar4 >> 0x20 | uVar4 << 0x20);
  uVar1 = uVar5 + uVar4;
  uVar4 = uVar4 ^ (uVar2 >> 0x2b | uVar2 << 0x15);
  uVar5 = uVar1 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar2 = uVar4 + (uVar3 >> 0x20 | uVar3 << 0x20);
  uVar3 = uVar5 + uVar2;
  uVar2 = uVar2 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar5 = uVar3 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar4 = uVar2 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar1 = uVar4 ^ (uVar2 >> 0x2b | uVar2 << 0x15);
  uVar5 = uVar5 + uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar2 = uVar1 + (uVar3 >> 0x20 | uVar3 << 0x20);
  uVar4 = uVar5 + uVar2;
  uVar2 = uVar2 ^ (uVar1 >> 0x30 | uVar1 << 0x10);
  return (uVar2 >> 0x2b | uVar2 << 0x15) ^ (uVar5 >> 0x2f | uVar5 << 0x11) ^
         (uVar4 >> 0x20 | uVar4 << 0x20) ^ uVar4;
}

