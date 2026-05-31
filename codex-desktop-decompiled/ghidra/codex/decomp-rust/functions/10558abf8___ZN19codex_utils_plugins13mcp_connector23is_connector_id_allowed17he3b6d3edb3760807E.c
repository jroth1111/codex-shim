
byte __ZN19codex_utils_plugins13mcp_connector23is_connector_id_allowed17he3b6d3edb3760807E
               (undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lStack_80;
  ulong *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  __ZN11codex_login4auth14default_client10originator17h4cdfc414e6d2fa8eE(&lStack_80);
  if (lStack_70 == 0xb) {
    uVar3 = 0x636f6465785f6174;
    uVar4 = (*puStack_78 & 0xff00ff00ff00ff00) >> 8 | (*puStack_78 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar4 == 0x636f6465785f6174) {
      uVar3 = 0x65785f61746c6173;
      uVar4 = (*(ulong *)((long)puStack_78 + 3) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)((long)puStack_78 + 3) & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      if (uVar4 != 0x65785f61746c6173) goto LAB_10558ad08;
    }
    else {
LAB_10558ad08:
      iVar2 = 1;
      if (uVar4 < uVar3) {
        iVar2 = -1;
      }
      if (iVar2 != 0) goto LAB_10558ad18;
    }
LAB_10558ace8:
    puVar5 = (undefined8 *)&UNK_10b390280;
    bVar1 = true;
    if (param_2 != 0x2a) goto LAB_10558ad00;
LAB_10558ad30:
    iVar2 = _memcmp(*puVar5,param_1,param_2);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    bVar6 = -(iVar2 != 0);
    if (bVar1) goto joined_r0x00010558ae40;
LAB_10558ad50:
    if ((((((puVar5[3] == param_2) && (iVar2 = _memcmp(puVar5[2],param_1,param_2), iVar2 == 0)) ||
          ((puVar5[5] == param_2 && (iVar2 = _memcmp(puVar5[4],param_1,param_2), iVar2 == 0)))) ||
         ((puVar5[7] == param_2 && (iVar2 = _memcmp(puVar5[6],param_1,param_2), iVar2 == 0)))) ||
        ((puVar5[9] == param_2 && (iVar2 = _memcmp(puVar5[8],param_1,param_2), iVar2 == 0)))) ||
       ((puVar5[0xb] == param_2 && (iVar2 = _memcmp(puVar5[10],param_1,param_2), iVar2 == 0)))) {
      bVar6 = 0;
      goto joined_r0x00010558ae40;
    }
  }
  else {
    if (lStack_70 == 0x15) {
      uVar3 = (*puStack_78 & 0xff00ff00ff00ff00) >> 8 | (*puStack_78 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar3 = 0x636f6465785f6368;
      if (uVar4 == 0x636f6465785f6368) {
        uVar3 = 0x61746770745f6465;
        uVar4 = (puStack_78[1] & 0xff00ff00ff00ff00) >> 8 | (puStack_78[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        if (uVar4 == 0x61746770745f6465) {
          uVar3 = 0x5f6465736b746f70;
          uVar4 = (*(ulong *)((long)puStack_78 + 0xd) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)((long)puStack_78 + 0xd) & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          if (uVar4 == 0x5f6465736b746f70) goto LAB_10558ace8;
        }
      }
      goto LAB_10558ad08;
    }
LAB_10558ad18:
    bVar1 = false;
    puVar5 = (undefined8 *)&UNK_10b390220;
    if (param_2 == 0x29) goto LAB_10558ad30;
LAB_10558ad00:
    if (!bVar1) goto LAB_10558ad50;
  }
  bVar6 = 1;
joined_r0x00010558ae40:
  if (lStack_80 != 0) {
    _free(puStack_78);
  }
  (**(code **)(lStack_68 + 0x20))(auStack_50,uStack_60,uStack_58);
  return bVar6 & 1;
}

