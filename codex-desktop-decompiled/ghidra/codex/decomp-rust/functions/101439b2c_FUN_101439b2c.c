
void FUN_101439b2c(long *param_1,byte *param_2)

{
  byte bVar1;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  ulong uStack_28;
  undefined1 uStack_11;
  
  bVar1 = *param_2;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uStack_28 = (ulong)param_2[1];
        goto LAB_101439c20;
      }
      if (bVar1 == 2) {
        uStack_28 = (ulong)*(ushort *)(param_2 + 2);
        goto LAB_101439c20;
      }
    }
    else {
      if (bVar1 == 3) {
        uStack_28 = (ulong)*(uint *)(param_2 + 4);
        goto LAB_101439c20;
      }
      if (bVar1 == 4) {
        uStack_28 = *(ulong *)(param_2 + 8);
        goto LAB_101439c20;
      }
    }
LAB_101439c40:
    FUN_108855bf0(&lStack_88,param_2,&uStack_11,&UNK_10b21a670);
    uStack_28 = uStack_80;
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        uStack_28 = (ulong)(char)param_2[1];
      }
      else {
        if (bVar1 != 6) goto LAB_101439c40;
        uStack_28 = (ulong)*(short *)(param_2 + 2);
      }
joined_r0x000101439be8:
      if (-1 < (long)uStack_28) goto LAB_101439c20;
    }
    else {
      if (bVar1 != 7) {
        if (bVar1 == 8) {
          uStack_28 = *(ulong *)(param_2 + 8);
          goto joined_r0x000101439be8;
        }
        goto LAB_101439c40;
      }
      uStack_28 = (ulong)*(int *)(param_2 + 4);
      if (-1 < *(int *)(param_2 + 4)) goto LAB_101439c20;
    }
    auStack_30[0] = 2;
    FUN_1087e3ee8(&lStack_88,auStack_30,&uStack_11,&UNK_10b21a670);
    uStack_28 = uStack_80;
  }
  if (lStack_88 != 2) {
    param_1[5] = lStack_60;
    param_1[4] = lStack_68;
    param_1[7] = lStack_50;
    param_1[6] = lStack_58;
    param_1[9] = lStack_40;
    param_1[8] = lStack_48;
    param_1[10] = lStack_38;
    param_1[1] = uStack_28;
    *param_1 = lStack_88;
    param_1[3] = lStack_70;
    param_1[2] = lStack_78;
    return;
  }
LAB_101439c20:
  param_1[2] = uStack_28;
  param_1[1] = 1;
  *param_1 = 2;
  return;
}

