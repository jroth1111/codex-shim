
void FUN_104a5a524(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 auStack_38 [3];
  
  lVar5 = *param_2;
  uVar1 = *(ulong *)(lVar5 + 0x20);
  uVar6 = *(ulong *)(lVar5 + 0x28);
  if (uVar6 < uVar1) {
    do {
      bVar2 = *(byte *)(*(long *)(lVar5 + 0x18) + uVar6);
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if (bVar2 == 0x7d) {
          uVar4 = 0;
          param_1[1] = 0;
          goto LAB_104a5a640;
        }
        if ((*(byte *)(param_2 + 1) & 1) == 0) {
          if (bVar2 != 0x2c) {
            auStack_38[0] = 8;
            goto LAB_104a5a58c;
          }
          uVar6 = uVar6 + 1;
          *(ulong *)(lVar5 + 0x28) = uVar6;
          if (uVar1 <= uVar6) goto LAB_104a5a624;
          goto LAB_104a5a5fc;
        }
        *(undefined1 *)(param_2 + 1) = 0;
        if (bVar2 == 0x22) goto LAB_104a5a634;
        auStack_38[0] = 0x11;
        goto LAB_104a5a58c;
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(lVar5 + 0x28) = uVar6;
    } while (uVar1 != uVar6);
  }
  auStack_38[0] = 3;
LAB_104a5a58c:
  uVar3 = FUN_1089a7aec(lVar5,auStack_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar4 = 1;
LAB_104a5a640:
  *param_1 = uVar4;
  return;
LAB_104a5a5fc:
  bVar2 = *(byte *)(*(long *)(lVar5 + 0x18) + uVar6);
  if (0x22 < bVar2) {
LAB_104a5a654:
    if (bVar2 == 0x7d) {
      auStack_38[0] = 0x15;
    }
    else {
      auStack_38[0] = 0x11;
    }
    goto LAB_104a5a58c;
  }
  if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
    uVar6 = uVar6 + 1;
    *(ulong *)(lVar5 + 0x28) = uVar6;
    if (uVar1 == uVar6) goto LAB_104a5a624;
    goto LAB_104a5a5fc;
  }
  if ((ulong)bVar2 != 0x22) goto LAB_104a5a654;
LAB_104a5a634:
  uVar4 = 0;
  param_1[1] = 1;
  goto LAB_104a5a640;
LAB_104a5a624:
  auStack_38[0] = 5;
  goto LAB_104a5a58c;
}

