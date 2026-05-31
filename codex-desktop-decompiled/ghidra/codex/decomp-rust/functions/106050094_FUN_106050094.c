
bool FUN_106050094(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 < 5) {
    if (lVar2 == 2) {
      return true;
    }
    if (lVar2 == 3) {
      return *(ushort *)(param_1 + 1) < 0x100;
    }
    if (lVar2 == 4) {
      uVar1 = (ulong)*(uint *)(param_1 + 1);
LAB_1060500c4:
      return uVar1 < 0x100;
    }
  }
  else {
    if (lVar2 == 5) {
LAB_1060500e8:
      return (ulong)param_1[1] < 0x100;
    }
    if (lVar2 == 6) {
      uVar1 = param_1[1];
      if (-1 < (long)uVar1) goto LAB_1060500c4;
    }
    else if (lVar2 == 7) goto LAB_1060500e8;
  }
  return false;
}

