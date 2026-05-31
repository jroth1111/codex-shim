
void FUN_106052cc4(undefined2 *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  
  pbVar1 = (byte *)*param_2;
  lVar5 = param_2[1];
  pbVar7 = pbVar1;
  if (lVar5 != 0) {
    pbVar7 = pbVar1 + 1;
    bVar4 = *pbVar1;
    *param_2 = (long)pbVar7;
    param_2[1] = lVar5 + -1;
    uVar3 = (ulong)bVar4 & 0x7f;
    if ((char)bVar4 < '\0') {
      if (lVar5 + -1 == 0) goto LAB_106052d44;
      pbVar7 = pbVar1 + 2;
      *param_2 = (long)pbVar7;
      param_2[1] = lVar5 + -2;
      bVar4 = pbVar1[1];
      uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 7;
      if ((char)bVar4 < '\0') {
        if (lVar5 + -2 == 0) {
LAB_106052e04:
          *param_1 = 0x13;
          param_1[3] = 0;
          *(undefined4 *)(param_1 + 1) = 0;
          *(byte **)(param_1 + 4) = pbVar7;
          return;
        }
        pbVar7 = pbVar1 + 3;
        *param_2 = (long)pbVar7;
        param_2[1] = lVar5 + -3;
        bVar4 = pbVar1[2];
        uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 0xe;
        if ((char)bVar4 < '\0') {
          if (lVar5 + -3 == 0) goto LAB_106052e04;
          pbVar7 = pbVar1 + 4;
          *param_2 = (long)pbVar7;
          param_2[1] = lVar5 + -4;
          bVar4 = pbVar1[3];
          uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 0x15;
          if ((char)bVar4 < '\0') {
            if (lVar5 + -4 == 0) goto LAB_106052e04;
            pbVar7 = pbVar1 + 5;
            *param_2 = (long)pbVar7;
            param_2[1] = lVar5 + -5;
            bVar4 = pbVar1[4];
            uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 0x1c;
            if ((char)bVar4 < '\0') {
              if (lVar5 + -5 == 0) goto LAB_106052e04;
              pbVar7 = pbVar1 + 6;
              *param_2 = (long)pbVar7;
              param_2[1] = lVar5 + -6;
              bVar4 = pbVar1[5];
              uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x23;
              if ((char)bVar4 < 0) {
                if (lVar5 + -6 == 0) {
LAB_106052edc:
                  *param_1 = 0x13;
                  param_1[3] = 0;
                  *(undefined4 *)(param_1 + 1) = 0;
                  *(byte **)(param_1 + 4) = pbVar7;
                  return;
                }
                pbVar7 = pbVar1 + 7;
                *param_2 = (long)pbVar7;
                param_2[1] = lVar5 + -7;
                bVar4 = pbVar1[6];
                uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x2a;
                if ((char)bVar4 < 0) {
                  if (lVar5 + -7 == 0) goto LAB_106052edc;
                  pbVar7 = pbVar1 + 8;
                  *param_2 = (long)pbVar7;
                  param_2[1] = lVar5 + -8;
                  bVar4 = pbVar1[7];
                  uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x31;
                  if ((char)bVar4 < 0) {
                    if (lVar5 + -8 == 0) goto LAB_106052edc;
                    pbVar7 = pbVar1 + 9;
                    *param_2 = (long)pbVar7;
                    param_2[1] = lVar5 + -9;
                    bVar4 = pbVar1[8];
                    uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x38;
                    if ((char)bVar4 < 0) {
                      if (lVar5 + -9 == 0) goto LAB_106052edc;
                      *param_2 = (long)(pbVar1 + 10);
                      param_2[1] = lVar5 + -10;
                      bVar4 = pbVar1[9];
                      if ((bVar4 != 0x7f) && (bVar4 != 0)) {
                        *(undefined1 *)param_1 = 7;
                        return;
                      }
                      bVar2 = 0;
                      uVar3 = uVar3 | (ulong)bVar4 << 0x3f;
                      lVar5 = 6;
                    }
                    else {
                      bVar2 = 1;
                      lVar5 = 0x3f;
                    }
                  }
                  else {
                    bVar2 = 1;
                    lVar5 = 0x38;
                  }
                }
                else {
                  bVar2 = 1;
                  lVar5 = 0x31;
                }
              }
              else {
                bVar2 = 1;
                lVar5 = 0x2a;
              }
            }
            else {
              bVar2 = 1;
              lVar5 = 0x23;
            }
          }
          else {
            bVar2 = 1;
            lVar5 = 0x1c;
          }
        }
        else {
          bVar2 = 1;
          lVar5 = 0x15;
        }
      }
      else {
        bVar2 = 1;
        lVar5 = 0xe;
      }
    }
    else {
      bVar2 = 1;
      lVar5 = 7;
    }
    uVar6 = -1L << lVar5;
    if (!(bool)(0x3f < bVar4 & bVar2)) {
      uVar6 = 0;
    }
    *(ulong *)(param_1 + 4) = uVar6 | uVar3;
    *(undefined1 *)param_1 = 0x52;
    return;
  }
LAB_106052d44:
  *param_1 = 0x13;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(byte **)(param_1 + 4) = pbVar7;
  return;
}

