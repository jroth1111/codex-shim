
byte FUN_10179b6b0(long *param_1,undefined8 *param_2)

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
  lStack_38 = lVar6;
  bStack_28 = (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_108ce616d,5);
  bStack_27 = 0;
  puStack_30 = param_2;
  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
            (&puStack_30,&UNK_108ce64e1,6,lVar6 + 0x20,&UNK_10b25aaf0);
  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
            (&puStack_30,&UNK_108ce61c9,7,&lStack_38,&UNK_10b25a9f0);
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

