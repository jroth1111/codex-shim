
ulong FUN_102042f98(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_60 = param_1 ^ 0x736f6d6570736575;
  uStack_58 = param_1 ^ 0x6c7967656e657261;
  uStack_50 = param_2 ^ 0x646f72616e646f6d;
  uStack_48 = param_2 ^ 0x7465646279746573;
  uStack_28 = 0;
  uStack_20 = 0;
  lStack_30 = 0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  FUN_10232f88c(&uStack_60,param_3,param_4);
  uStack_11 = 0xff;
  FUN_10232f88c(&uStack_60,&uStack_11,1);
  uStack_28 = uStack_28 | lStack_30 << 0x38;
  uStack_48 = uStack_28 ^ uStack_48;
  uStack_60 = uStack_50 + uStack_60;
  uVar4 = uStack_60 ^ (uStack_50 >> 0x33 | uStack_50 << 0xd);
  uVar2 = uStack_48 + uStack_58 + uVar4;
  uVar3 = uStack_48 + uStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar5 = uVar2 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar4 = uVar3 + (uStack_60 >> 0x20 | uStack_60 << 0x20);
  uVar1 = uVar4 ^ (uVar3 >> 0x2b | uVar3 << 0x15);
  uVar4 = (uVar4 ^ uStack_28) + uVar5;
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

