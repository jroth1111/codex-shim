
byte FUN_103269f88(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lStack_38;
  undefined8 *puStack_30;
  byte bStack_28;
  byte bStack_27;
  undefined8 uVar2;
  
  lVar6 = *param_1;
  lStack_38 = lVar6 + 8;
  bStack_28 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_108d895ea,9);
  bStack_27 = 0;
  puStack_30 = param_2;
  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
            (&puStack_30,&UNK_108d895f3,0xb,lVar6,&UNK_10b2c0b48);
  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
            (&puStack_30,&UNK_108d895fe,9,&lStack_38,&UNK_10b2c90f8);
  bVar1 = bStack_27 | bStack_28;
  if ((bStack_27 == 1) && ((bStack_28 & 1) == 0)) {
    if (*(char *)((long)puStack_30 + 0x12) < '\0') {
      uVar2 = *puStack_30;
      pcVar5 = *(code **)(puStack_30[1] + 0x18);
      puVar3 = &UNK_108f5894b;
      uVar4 = 1;
    }
    else {
      uVar2 = *puStack_30;
      pcVar5 = *(code **)(puStack_30[1] + 0x18);
      puVar3 = &UNK_108f5894c;
      uVar4 = 2;
    }
    bVar1 = (*pcVar5)(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}

