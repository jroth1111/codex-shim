
void FUN_1012d24d8(undefined2 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_2 + 0x28) < uVar2) {
    lVar6 = *(ulong *)(param_2 + 0x28) + 4;
    lVar7 = *(long *)(param_2 + 0x18);
    do {
      bVar3 = *(byte *)(lVar7 + lVar6 + -4);
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if (bVar3 == 0x6e) {
          uVar8 = lVar6 - 3;
          *(ulong *)(param_2 + 0x28) = uVar8;
          uVar1 = uVar8;
          if (uVar8 <= uVar2) {
            uVar1 = uVar2;
          }
          if (uVar8 < uVar2) {
            cVar4 = *(char *)(lVar7 + lVar6 + -3);
            *(ulong *)(param_2 + 0x28) = lVar6 - 2U;
            if (cVar4 == 'u') {
              if (lVar6 - 2U == uVar1) goto LAB_1012d260c;
              cVar4 = *(char *)(lVar7 + lVar6 + -2);
              *(ulong *)(param_2 + 0x28) = lVar6 - 1U;
              if (cVar4 == 'l') {
                if (lVar6 - 1U == uVar1) goto LAB_1012d260c;
                cVar4 = *(char *)(lVar7 + lVar6 + -1);
                *(long *)(param_2 + 0x28) = lVar6;
                if (cVar4 == 'l') {
                  *param_1 = 0x200;
                  return;
                }
              }
            }
            uStack_38 = 9;
          }
          else {
LAB_1012d260c:
            uStack_38 = 5;
          }
          uVar5 = FUN_108832904(param_2,&uStack_38);
          *(undefined8 *)(param_1 + 4) = uVar5;
          goto LAB_1012d25e4;
        }
        break;
      }
      *(long *)(param_2 + 0x28) = lVar6 + -3;
      lVar6 = lVar6 + 1;
    } while (lVar6 - uVar2 != 4);
  }
  FUN_100616a68(&uStack_38);
  if ((char)uStack_38 == '\x01') {
    *(undefined8 *)(param_1 + 4) = uStack_30;
LAB_1012d25e4:
    *(undefined1 *)param_1 = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 1) = uStack_38._1_1_;
    *(undefined1 *)param_1 = 0;
  }
  return;
}

