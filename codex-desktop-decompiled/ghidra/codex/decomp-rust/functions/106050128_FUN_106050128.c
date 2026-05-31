
bool FUN_106050128(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 < 5) {
    if (lVar2 == 2) {
      return (ulong)*(byte *)(param_1 + 1) < 0x10000;
    }
    if (lVar2 == 3) {
      return true;
    }
    if (lVar2 == 4) {
      uVar1 = (ulong)*(uint *)(param_1 + 1);
LAB_106050158:
      return uVar1 < 0x10000;
    }
  }
  else {
    if (lVar2 == 5) {
LAB_10605017c:
      return (ulong)param_1[1] < 0x10000;
    }
    if (lVar2 == 6) {
      uVar1 = param_1[1];
      if (-1 < (long)uVar1) goto LAB_106050158;
    }
    else if (lVar2 == 7) goto LAB_10605017c;
  }
  return false;
}

