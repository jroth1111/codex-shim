
void FUN_103992e08(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_2 + 0x28) < uVar2) {
    lVar5 = *(ulong *)(param_2 + 0x28) + 4;
    lVar6 = *(long *)(param_2 + 0x18);
    do {
      bVar3 = *(byte *)(lVar6 + lVar5 + -4);
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if (bVar3 == 0x6e) {
          uVar7 = lVar5 - 3;
          *(ulong *)(param_2 + 0x28) = uVar7;
          uVar1 = uVar7;
          if (uVar7 <= uVar2) {
            uVar1 = uVar2;
          }
          if (uVar7 < uVar2) {
            cVar4 = *(char *)(lVar6 + lVar5 + -3);
            *(ulong *)(param_2 + 0x28) = lVar5 - 2U;
            if (cVar4 == 'u') {
              if (lVar5 - 2U == uVar1) goto LAB_103992f58;
              cVar4 = *(char *)(lVar6 + lVar5 + -2);
              *(ulong *)(param_2 + 0x28) = lVar5 - 1U;
              if (cVar4 == 'l') {
                if (lVar5 - 1U == uVar1) goto LAB_103992f58;
                cVar4 = *(char *)(lVar6 + lVar5 + -1);
                *(long *)(param_2 + 0x28) = lVar5;
                if (cVar4 == 'l') {
                  lVar5 = -0x7ffffffffffffffb;
                  goto LAB_103992ef4;
                }
              }
            }
            lStack_68 = 9;
          }
          else {
LAB_103992f58:
            lStack_68 = 5;
          }
          lVar6 = FUN_1089500cc(param_2,&lStack_68);
          lVar5 = -0x7ffffffffffffffa;
          param_1[1] = lVar6;
LAB_103992ef4:
          *param_1 = lVar5;
          return;
        }
        break;
      }
      *(long *)(param_2 + 0x28) = lVar5 + -3;
      lVar5 = lVar5 + 1;
    } while (lVar5 - uVar2 != 4);
  }
  func_0x0001039b1414(&lStack_68);
  if (lStack_68 == -0x7ffffffffffffffb) {
    *param_1 = -0x7ffffffffffffffa;
    param_1[1] = lStack_60;
  }
  else {
    param_1[5] = lStack_40;
    param_1[4] = lStack_48;
    param_1[7] = lStack_30;
    param_1[6] = lStack_38;
    param_1[8] = lStack_28;
    param_1[1] = lStack_60;
    *param_1 = lStack_68;
    param_1[3] = lStack_50;
    param_1[2] = lStack_58;
  }
  return;
}

