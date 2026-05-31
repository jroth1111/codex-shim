
undefined8 FUN_1016ff3d4(long param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 auStack_28 [3];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (uVar1 <= uVar6) {
LAB_1016ff600:
    auStack_28[0] = 0xd;
    uVar4 = func_0x000108873e70(param_1,auStack_28);
    return uVar4;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  bVar2 = *(byte *)(lVar5 + uVar6);
  uVar6 = uVar6 + 1;
  *(ulong *)(param_1 + 0x28) = uVar6;
  if (bVar2 == 0x30) {
    if ((uVar6 < uVar1) && (*(byte *)(lVar5 + uVar6) - 0x30 < 10)) goto LAB_1016ff41c;
  }
  else {
    if (8 < bVar2 - 0x31) goto LAB_1016ff600;
    if (uVar6 < uVar1) {
      while (*(byte *)(lVar5 + uVar6) - 0x30 < 10) {
        uVar6 = uVar6 + 1;
        *(ulong *)(param_1 + 0x28) = uVar6;
        if (uVar1 == uVar6) {
          return 0;
        }
      }
    }
  }
  if (uVar6 < uVar1) {
    cVar3 = *(char *)(lVar5 + uVar6);
    if ((cVar3 == 'e') || (cVar3 == 'E')) {
      uVar7 = uVar6 + 1;
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar7 < uVar1) &&
         ((*(char *)(lVar5 + uVar7) == '+' || (*(char *)(lVar5 + uVar7) == '-')))) {
        uVar7 = uVar6 + 2;
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
      if (uVar7 < uVar1) {
        bVar2 = *(byte *)(lVar5 + uVar7);
        uVar7 = uVar7 + 1;
        *(ulong *)(param_1 + 0x28) = uVar7;
        if (bVar2 - 0x30 < 10) {
          if (uVar1 <= uVar7) {
            return 0;
          }
          do {
            if (9 < *(byte *)(lVar5 + uVar7) - 0x30) {
              return 0;
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(param_1 + 0x28) = uVar7;
          } while (uVar1 != uVar7);
          return 0;
        }
      }
      goto LAB_1016ff600;
    }
    if (cVar3 == '.') {
      uVar7 = uVar6 + 1;
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar1 <= uVar7) || (9 < *(byte *)(lVar5 + uVar7) - 0x30)) {
LAB_1016ff41c:
        auStack_28[0] = 0xd;
        uVar4 = FUN_108873af4(param_1,auStack_28);
        return uVar4;
      }
      uVar6 = uVar6 + 3;
      do {
        uVar7 = uVar6;
        if ((2 - uVar1) + uVar7 == 3) {
          *(ulong *)(param_1 + 0x28) = uVar1;
          return 0;
        }
        uVar8 = (uint)*(byte *)(lVar5 + uVar7 + -1);
        uVar6 = uVar7 + 1;
      } while (uVar8 - 0x30 < 10);
      *(ulong *)(param_1 + 0x28) = uVar7 - 1;
      if ((uVar8 | 0x20) == 0x65) {
        *(ulong *)(param_1 + 0x28) = uVar7;
        if ((uVar7 < uVar1) &&
           ((cVar3 = *(char *)(lVar5 + uVar6 + -1), cVar3 == '+' || (cVar3 == '-')))) {
          *(ulong *)(param_1 + 0x28) = uVar6;
          uVar7 = uVar6;
        }
        if (uVar7 < uVar1) {
          bVar2 = *(byte *)(lVar5 + uVar7);
          uVar7 = uVar7 + 1;
          *(ulong *)(param_1 + 0x28) = uVar7;
          if (bVar2 - 0x30 < 10) {
            if (uVar1 <= uVar7) {
              return 0;
            }
            do {
              if (9 < *(byte *)(lVar5 + uVar7) - 0x30) {
                return 0;
              }
              uVar7 = uVar7 + 1;
              *(ulong *)(param_1 + 0x28) = uVar7;
            } while (uVar1 != uVar7);
            return 0;
          }
        }
        goto LAB_1016ff600;
      }
    }
  }
  return 0;
}

