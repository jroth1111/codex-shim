
bool FUN_102e34bc0(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_38;
  int *piStack_30;
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x638);
  if (lVar3 == 0) {
    return false;
  }
  lVar4 = *(long *)(param_1 + 0x640);
  lVar5 = lVar4;
  lVar6 = lVar3;
  while( true ) {
    uVar9 = (ulong)*(ushort *)(lVar6 + 10);
    uVar8 = 0xffffffffffffffff;
    pbVar7 = (byte *)(lVar6 + 0xc);
    uVar10 = uVar9;
    do {
      if (uVar10 == 0) goto LAB_102e34c2c;
      cVar1 = *pbVar7 < 2;
      if (2 < *pbVar7) {
        cVar1 = -1;
      }
      uVar10 = uVar10 - 1;
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (cVar1 == '\x01');
    uVar9 = uVar8;
    if (cVar1 == '\0') break;
LAB_102e34c2c:
    if (lVar5 == 0) {
      return false;
    }
    lVar6 = *(long *)(lVar6 + uVar9 * 8 + 0x18);
    lVar5 = lVar5 + -1;
  }
  do {
    uVar9 = (ulong)*(ushort *)(lVar3 + 10);
    uVar8 = 0xffffffffffffffff;
    pbVar7 = (byte *)(lVar3 + 0xc);
    uVar10 = uVar9;
    do {
      if (uVar10 == 0) goto LAB_102e34c88;
      cVar1 = *pbVar7 < 3;
      if (3 < *pbVar7) {
        cVar1 = -1;
      }
      uVar10 = uVar10 - 1;
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (cVar1 == '\x01');
    uVar9 = uVar8;
    if (cVar1 == '\0') {
      if (param_3 == '\x02') {
        return false;
      }
      func_0x0001050227a8(&lStack_38,param_2);
      if (lStack_28 == 4) {
        if (*piStack_30 == 0x63657865) {
          bVar2 = false;
        }
        else {
          bVar2 = *piStack_30 != 0x74696177;
        }
      }
      else {
        bVar2 = true;
      }
      if (lStack_38 != 0) {
        _free();
        return bVar2;
      }
      return bVar2;
    }
LAB_102e34c88:
    if (lVar4 == 0) {
      return false;
    }
    lVar3 = *(long *)(lVar3 + uVar9 * 8 + 0x18);
    lVar4 = lVar4 + -1;
  } while( true );
}

