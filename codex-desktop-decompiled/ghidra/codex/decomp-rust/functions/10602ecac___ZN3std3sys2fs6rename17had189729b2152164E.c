
undefined *
__ZN3std3sys2fs6rename17had189729b2152164E
          (ulong *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  ulong **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puStack_360;
  ulong uStack_358;
  ulong auStack_350 [48];
  ulong *puStack_1d0;
  ulong uStack_1c8;
  ulong auStack_1c0 [48];
  
  ppuVar4 = &puStack_360;
  puStack_360 = param_3;
  uStack_358 = param_4;
  if (0x17f < param_2) {
    puVar3 = &DAT_10602ef70;
    goto LAB_10602ef50;
  }
  _memcpy(auStack_350,param_1,param_2);
  *(undefined1 *)((long)auStack_350 + param_2) = 0;
  uStack_1c8 = param_2 + 1;
  if (param_2 < 0xf) {
    uVar6 = 0;
    while (*(char *)((long)auStack_350 + uVar6) != '\0') {
      uVar6 = uVar6 + 1;
      if (uStack_1c8 == uVar6) {
        return &UNK_10b4add80;
      }
    }
  }
  else {
    uVar7 = (long)auStack_350 - (long)auStack_350;
    if (uVar7 == 0) {
LAB_10602ed38:
      do {
        uVar6 = *(ulong *)((long)auStack_350 + uVar7 + 8);
        if ((((0x101010101010100 - *(ulong *)((long)auStack_350 + uVar7) |
              *(ulong *)((long)auStack_350 + uVar7)) & (0x101010101010100 - uVar6 | uVar6) ^
             0xffffffffffffffff) & 0x8080808080808080) != 0) break;
        uVar7 = uVar7 + 0x10;
      } while (uVar7 <= param_2 - 0xf);
    }
    else {
      uVar6 = 0;
      do {
        if (*(char *)((long)auStack_350 + uVar6) == '\0') goto LAB_10602edd4;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
      if (uVar7 <= param_2 - 0xf) goto LAB_10602ed38;
    }
    if (uStack_1c8 == uVar7) goto LAB_10602ef08;
    while (uVar6 = uVar7, *(char *)((long)auStack_350 + uVar7) != '\0') {
      uVar7 = uVar7 + 1;
      if (uStack_1c8 == uVar7) {
        return &UNK_10b4add80;
      }
    }
  }
LAB_10602edd4:
  if (uVar6 != param_2) goto LAB_10602ef08;
  puStack_1d0 = auStack_350;
  if (0x17f < param_4) {
    puVar3 = &DAT_10602f0fc;
    ppuVar4 = &puStack_1d0;
    param_1 = param_3;
    param_2 = param_4;
LAB_10602ef50:
    puVar3 = (undefined *)FUN_108a81b90(param_1,param_2,ppuVar4,puVar3);
    return puVar3;
  }
  _memcpy(auStack_1c0,param_3,param_4);
  *(undefined1 *)((long)auStack_1c0 + param_4) = 0;
  uVar6 = param_4 + 1;
  if (param_4 < 0xf) {
    uVar7 = 0;
    while (*(char *)((long)auStack_1c0 + uVar7) != '\0') {
      uVar7 = uVar7 + 1;
      if (uVar6 == uVar7) {
        return &UNK_10b4add80;
      }
    }
  }
  else {
    uVar5 = (long)auStack_1c0 - (long)auStack_1c0;
    if (uVar5 == 0) {
LAB_10602ee48:
      do {
        uVar7 = *(ulong *)((long)auStack_1c0 + uVar5 + 8);
        if ((((0x101010101010100 - *(ulong *)((long)auStack_1c0 + uVar5) |
              *(ulong *)((long)auStack_1c0 + uVar5)) & (0x101010101010100 - uVar7 | uVar7) ^
             0xffffffffffffffff) & 0x8080808080808080) != 0) break;
        uVar5 = uVar5 + 0x10;
      } while (uVar5 <= param_4 - 0xf);
    }
    else {
      uVar7 = 0;
      do {
        if (*(char *)((long)auStack_1c0 + uVar7) == '\0') goto LAB_10602eee4;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      if (uVar5 <= param_4 - 0xf) goto LAB_10602ee48;
    }
    if (uVar6 == uVar5) goto LAB_10602ef08;
    while (uVar7 = uVar5, *(char *)((long)auStack_1c0 + uVar5) != '\0') {
      uVar5 = uVar5 + 1;
      if (uVar6 == uVar5) {
        return &UNK_10b4add80;
      }
    }
  }
LAB_10602eee4:
  if (uVar7 == param_4) {
    iVar1 = _rename(auStack_350,auStack_1c0);
    if (iVar1 != -1) {
      return (undefined *)0x0;
    }
    puVar2 = (uint *)___error();
    return (undefined *)((ulong)*puVar2 << 0x20 | 2);
  }
LAB_10602ef08:
  return &UNK_10b4add80;
}

