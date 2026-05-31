
long FUN_105ab2b14(undefined8 *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar10 = (long *)*param_1;
  uStack_58 = param_1[2];
  uStack_60 = param_1[1];
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  uVar4 = *(ushort *)(param_1 + 6);
  uVar12 = param_1[5];
  cVar3 = *(char *)((long)param_1 + 0x32);
  uVar11 = plVar10[5];
  uVar7 = FUN_105ab1cb0(plVar10,uVar4,&uStack_60,param_2);
  if ((uVar7 & 1) == 0) {
    uVar7 = 0;
    lVar8 = plVar10[9];
    uVar2 = plVar10[10];
    uVar9 = (uint)uVar11 & 0xffff;
    while( true ) {
      uVar6 = (ushort)uVar9;
      if ((uVar2 <= uVar12) && (uVar12 = 0, uVar2 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar8 + uVar12 * 4);
      uVar9 = (uint)*puVar1;
      if (uVar9 == 0xffff) break;
      uVar7 = uVar7 + 1;
      uVar5 = puVar1[1];
      *puVar1 = uVar6;
      puVar1[1] = uVar4;
      uVar12 = uVar12 + 1;
      uVar4 = uVar5;
    }
    *puVar1 = uVar6;
    puVar1[1] = uVar4;
    if (0x7f < uVar7) {
      cVar3 = '\x01';
    }
    if ((cVar3 == '\x01') && (*plVar10 == 0)) {
      *plVar10 = 1;
    }
    if ((ulong)plVar10[5] <= uVar11) {
      uVar12 = func_0x000108a07bdc(uVar11,plVar10[5],&UNK_10b4066b0);
      return *(long *)(&UNK_10b408148 + (uVar12 & 0xff) * 8);
    }
    lVar8 = plVar10[4] + uVar11 * 0x68 + 0x18;
  }
  else {
    lVar8 = 0;
  }
  return lVar8;
}

