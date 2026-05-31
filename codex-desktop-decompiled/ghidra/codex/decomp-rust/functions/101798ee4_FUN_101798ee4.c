
void FUN_101798ee4(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auStack_44 [15];
  undefined1 auStack_35 [5];
  
  puVar7 = (ulong *)*param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      lVar2 = FUN_1055b41a0(*puVar7,auStack_44,0x14);
      lVar6 = 0x14 - lVar2;
      puVar5 = auStack_44 + lVar2;
      puVar3 = (undefined *)0x1;
      uVar4 = 0;
      goto LAB_101798fd0;
    }
    lVar2 = 0;
    uVar8 = *puVar7;
    do {
      auStack_35[lVar2] = (&UNK_108f58919)[uVar8 & 0xf];
      lVar2 = lVar2 + -1;
      bVar1 = 0xf < uVar8;
      uVar8 = uVar8 >> 4;
    } while (bVar1);
  }
  else {
    lVar2 = 0;
    uVar8 = *puVar7;
    do {
      auStack_35[lVar2] = (&UNK_108f58907)[uVar8 & 0xf];
      lVar2 = lVar2 + -1;
      bVar1 = 0xf < uVar8;
      uVar8 = uVar8 >> 4;
    } while (bVar1);
  }
  lVar6 = -lVar2;
  puVar3 = &UNK_108f58917;
  puVar5 = auStack_35 + lVar2 + 1;
  uVar4 = 2;
LAB_101798fd0:
  __ZN4core3fmt9Formatter12pad_integral17h3ce8c974c7a8a604E(param_2,1,puVar3,uVar4,puVar5,lVar6);
  return;
}

