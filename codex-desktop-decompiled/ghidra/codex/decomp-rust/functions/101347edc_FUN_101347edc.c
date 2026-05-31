
void FUN_101347edc(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
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
  if (bVar1 == 0x10) {
LAB_101347f04:
    lVar2 = 0;
  }
  else {
    if (bVar1 == 0x11) {
      param_2 = *(byte **)(param_2 + 8);
      bVar1 = *param_2;
      if (bVar1 < 5) {
        if (bVar1 < 3) {
          if (bVar1 == 1) goto LAB_101347f58;
LAB_101347f30:
          if (bVar1 != 2) goto LAB_101348064;
          uStack_28 = (ulong)*(ushort *)(param_2 + 2);
        }
        else {
          if (bVar1 != 3) {
            if (bVar1 != 4) goto LAB_101348064;
            uStack_28 = *(ulong *)(param_2 + 8);
            if (-1 < (long)uStack_28) goto LAB_101348048;
LAB_101347ff8:
            auStack_30[0] = 1;
            FUN_1087e3ee8(&lStack_88,auStack_30,&uStack_11,&UNK_10b2199d0);
            goto LAB_10134807c;
          }
LAB_10134803c:
          uStack_28 = (ulong)*(uint *)(param_2 + 4);
        }
      }
      else if (bVar1 < 7) {
        if (bVar1 == 5) goto LAB_101347f90;
LAB_101347f70:
        if (bVar1 != 6) goto LAB_101348064;
        uStack_28 = (long)*(short *)(param_2 + 2);
      }
      else if (bVar1 == 7) {
LAB_101348044:
        uStack_28 = (long)*(int *)(param_2 + 4);
      }
      else {
        if (bVar1 != 8) goto LAB_101348064;
LAB_101348034:
        uStack_28 = *(ulong *)(param_2 + 8);
      }
    }
    else {
      if (bVar1 == 0x12) goto LAB_101347f04;
      if (bVar1 < 5) {
        if (bVar1 < 3) {
          if (bVar1 != 1) goto LAB_101347f30;
LAB_101347f58:
          uStack_28 = (ulong)param_2[1];
        }
        else {
          if (bVar1 == 3) goto LAB_10134803c;
          if (bVar1 == 4) {
            uStack_28 = *(ulong *)(param_2 + 8);
            if ((long)uStack_28 < 0) goto LAB_101347ff8;
            goto LAB_101348048;
          }
LAB_101348064:
          FUN_108855bf0(&lStack_88,param_2,&uStack_11,&UNK_10b2199d0);
LAB_10134807c:
          uStack_28 = uStack_80;
          if (lStack_88 != 2) {
            param_1[5] = lStack_60;
            param_1[4] = lStack_68;
            param_1[7] = lStack_50;
            param_1[6] = lStack_58;
            param_1[9] = lStack_40;
            param_1[8] = lStack_48;
            param_1[10] = lStack_38;
            param_1[1] = uStack_80;
            *param_1 = lStack_88;
            param_1[3] = lStack_70;
            param_1[2] = lStack_78;
            return;
          }
        }
      }
      else {
        if (6 < bVar1) {
          if (bVar1 == 7) goto LAB_101348044;
          if (bVar1 == 8) goto LAB_101348034;
          goto LAB_101348064;
        }
        if (bVar1 != 5) goto LAB_101347f70;
LAB_101347f90:
        uStack_28 = (long)(char)param_2[1];
      }
    }
LAB_101348048:
    param_1[2] = uStack_28;
    lVar2 = 1;
  }
  param_1[1] = lVar2;
  *param_1 = 2;
  return;
}

