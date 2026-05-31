
void FUN_102c49730(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar11 = 0;
  puVar1 = param_1 + 3;
  puVar9 = param_1;
  do {
    puVar10 = puVar1;
    uVar5 = puVar9[4];
    uVar6 = puVar9[5];
    uVar7 = puVar9[2];
    uVar3 = uVar6;
    if (uVar7 <= uVar6) {
      uVar3 = uVar7;
    }
    iVar8 = _memcmp(uVar5,puVar9[1],uVar3);
    lVar2 = uVar6 - uVar7;
    if (iVar8 != 0) {
      lVar2 = (long)iVar8;
    }
    if (lVar2 < 0) {
      uVar12 = puVar9[3];
      lVar2 = lVar11;
      do {
        lVar13 = lVar2;
        puVar1 = (undefined8 *)((long)param_1 + lVar13);
        puVar1[4] = puVar1[1];
        puVar1[3] = *puVar1;
        puVar1[5] = puVar1[2];
        puVar9 = param_1;
        if (lVar13 == 0) goto LAB_102c4976c;
        uVar7 = puVar1[-1];
        uVar3 = uVar6;
        if (uVar7 <= uVar6) {
          uVar3 = uVar7;
        }
        iVar8 = _memcmp(uVar5,puVar1[-2],uVar3);
        lVar4 = uVar6 - uVar7;
        if (iVar8 != 0) {
          lVar4 = (long)iVar8;
        }
        lVar2 = lVar13 + -0x18;
      } while (lVar4 < 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar13);
LAB_102c4976c:
      *puVar9 = uVar12;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
    }
    puVar1 = puVar10 + 3;
    lVar11 = lVar11 + 0x18;
    puVar9 = puVar10;
    if (puVar1 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}

