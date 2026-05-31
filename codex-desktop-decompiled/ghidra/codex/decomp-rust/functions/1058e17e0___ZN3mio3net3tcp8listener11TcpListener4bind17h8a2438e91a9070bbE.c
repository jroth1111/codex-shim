
void __ZN3mio3net3tcp8listener11TcpListener4bind17h8a2438e91a9070bbE
               (undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  uint extraout_w9_00;
  undefined1 uVar7;
  uint uVar8;
  undefined4 extraout_w12;
  ulong uVar9;
  undefined8 extraout_x14;
  undefined4 extraout_w15;
  ulong uVar10;
  undefined1 uStack_118;
  char cStack_117;
  ushort uStack_116;
  uint uStack_114;
  ushort uStack_110;
  ushort uStack_10e;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_94;
  uint *puStack_90;
  ushort *puStack_88;
  ulong uStack_80;
  undefined4 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  int iStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar3 = (uint *)(param_2 + 1);
  uVar1 = *param_2;
  uVar6 = 0x1e;
  if ((uVar1 & 1) == 0) {
    uVar6 = 2;
  }
  FUN_1058e2194(&iStack_60,uVar6,1);
  uVar8 = uStack_5c;
  if (iStack_60 == 1) {
    *(undefined8 *)(param_1 + 2) = uStack_58;
    *param_1 = 1;
    return;
  }
  uVar10 = (ulong)uStack_5c;
  if (uStack_5c != 0xffffffff) {
    iStack_60 = 1;
    iVar2 = _setsockopt(uVar10,0xffff,4,&iStack_60,4);
    if (-1 < iVar2) {
      if ((uVar1 & 1) == 0) {
        uVar1 = param_2[3] >> 8 | param_2[3] << 8;
        uStack_58 = 0;
        uStack_50 = 0;
        uVar5 = 0x10;
        uVar7 = 2;
        uStack_48 = extraout_w9;
      }
      else {
        uVar1 = param_2[0xe] >> 8 | param_2[0xe] << 8;
        uStack_50 = *(undefined8 *)(param_2 + 6);
        uStack_58 = *(undefined8 *)(param_2 + 2);
        puVar3 = (uint *)(param_2 + 10);
        uStack_48 = *(undefined4 *)(param_2 + 0xc);
        uVar5 = 0x1c;
        uVar7 = 0x1e;
      }
      uStack_5c = *puVar3;
      iStack_60 = (uint)CONCAT21(uVar1,uVar7) << 8;
      iVar2 = _bind(uVar10,&iStack_60,uVar5);
      if ((-1 < iVar2) && (iVar2 = _listen(uVar10,0xffffffff), -1 < iVar2)) {
        *param_1 = 0;
        param_1[1] = uVar8;
        return;
      }
    }
    puVar3 = (uint *)___error();
    *(ulong *)(param_1 + 2) = (ulong)*puVar3 << 0x20 | 2;
    *param_1 = 1;
    _close(uVar10);
    return;
  }
  puVar4 = (undefined4 *)func_0x000108a079f0(&UNK_109ae6db0,8,&UNK_10b3d1768);
  uStack_68 = 0x1058e17e0;
  uStack_94 = 0x80;
  puStack_90 = puVar3;
  puStack_88 = param_2;
  uStack_80 = uVar10;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  uVar5 = _accept(*puVar4,&uStack_118,&uStack_94);
  if ((int)uVar5 < 0) {
    puVar3 = (uint *)___error();
    uVar8 = *puVar3;
LAB_1058e1870:
    uVar10 = (ulong)uVar8 << 0x20 | 2;
  }
  else {
    iVar2 = _fcntl(uVar5,2);
    if (iVar2 < 0) {
      puVar3 = (uint *)___error();
      uVar8 = *puVar3;
      _close(uVar5);
      goto LAB_1058e1870;
    }
    if (cStack_117 == '\x1e') {
      uStack_116 = uStack_116 >> 8 | uStack_116 << 8;
      uVar8 = (uint)uStack_110 << 0x10;
      uVar10 = (ulong)uStack_10e;
      uVar9 = 1;
LAB_1058e18a8:
      uVar6 = 0;
      extraout_x8[1] = (int)uVar5;
      *(ulong *)(extraout_x8 + 2) = uVar9 | (ulong)uVar8 << 0x10 | uVar10 << 0x30;
      *(undefined8 *)(extraout_x8 + 4) = uStack_10c;
      extraout_x8[6] = uStack_104;
      extraout_x8[7] = uStack_114;
      extraout_x8[8] = uStack_100;
      *(ushort *)(extraout_x8 + 9) = uStack_116;
      goto LAB_1058e18cc;
    }
    if (cStack_117 == '\x02') {
      uVar9 = 0;
      uVar10 = (ulong)((uint)(uStack_116 >> 8) | (uStack_116 & 0xff00ff) << 8);
      uStack_10c = extraout_x14;
      uVar8 = uStack_114;
      uStack_114 = extraout_w9_00;
      uStack_104 = extraout_w15;
      uStack_100 = extraout_w12;
      goto LAB_1058e18a8;
    }
    _close(uVar5);
    uVar10 = 0x1400000003;
  }
  *(ulong *)(extraout_x8 + 2) = uVar10;
  uVar6 = 1;
LAB_1058e18cc:
  *extraout_x8 = uVar6;
  return;
}

