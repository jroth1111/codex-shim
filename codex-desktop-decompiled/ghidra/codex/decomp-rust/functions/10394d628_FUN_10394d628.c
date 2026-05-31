
void FUN_10394d628(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = 0;
  puVar1 = param_1 + 3;
  puVar6 = param_1;
  do {
    puVar7 = puVar1;
    cVar5 = func_0x0001038d9fcc(puVar6[4],puVar6[5],puVar6[1],puVar6[2]);
    if (cVar5 == -1) {
      uVar2 = puVar6[3];
      uVar3 = puVar6[4];
      uVar8 = puVar6[5];
      lVar4 = lVar9;
      do {
        lVar10 = lVar4;
        puVar1 = (undefined8 *)((long)param_1 + lVar10);
        puVar1[4] = puVar1[1];
        puVar1[3] = *puVar1;
        puVar1[5] = puVar1[2];
        puVar6 = param_1;
        if (lVar10 == 0) goto LAB_10394d668;
        cVar5 = func_0x0001038d9fcc(uVar3,uVar8,puVar1[-2],puVar1[-1]);
        lVar4 = lVar10 + -0x18;
      } while (cVar5 == -1);
      puVar6 = (undefined8 *)((long)param_1 + lVar10);
LAB_10394d668:
      *puVar6 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar8;
    }
    puVar1 = puVar7 + 3;
    lVar9 = lVar9 + 0x18;
    puVar6 = puVar7;
    if (puVar1 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}

