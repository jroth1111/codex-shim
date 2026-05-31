
uint * __ZN5tokio7process5Child10start_kill17h75a945fbc82a47e7E(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  long *extraout_x8_00;
  long lVar10;
  uint unaff_w22;
  long lVar11;
  ulong unaff_x24;
  long lVar12;
  ulong unaff_x26;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long lStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long alStack_160 [2];
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  uint uStack_70;
  uint uStack_64;
  
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 == 3) {
    return (uint *)0x0;
  }
  if (iVar3 != 2) {
    if ((iVar3 == 0) && (iVar3 = _kill(*(undefined4 *)(param_1 + 0x68),9), iVar3 == -1)) {
      puVar5 = (uint *)___error();
      return (uint *)((ulong)*puVar5 << 0x20 | 2);
    }
    *(undefined1 *)(param_1 + 0x88) = 0;
    return (uint *)0x0;
  }
  lVar6 = func_0x000108a079f0(&UNK_109beb6a8,0x13,&UNK_10b4cd768);
  if (*(int *)(lVar6 + 0x60) == 3) {
    return (uint *)0x0;
  }
  if (*(int *)(lVar6 + 0x60) != 2) {
    return (uint *)0x1;
  }
  puVar5 = (uint *)func_0x000108a079f0(&UNK_109beb6a8,0x13,&UNK_10b4cd750);
  uVar1 = puVar5[0x18];
  if (uVar1 == 3) {
    *(uint *)(extraout_x8 + 1) = puVar5[0x19];
    *extraout_x8 = 0x100000000;
    return puVar5;
  }
  if (uVar1 != 2) {
    if ((uVar1 & 1) == 0) {
      uStack_64 = 0;
      puVar7 = (uint *)_waitpid(puVar5[0x1a],&uStack_64,1);
      if ((int)puVar7 == -1) {
        puVar7 = (uint *)___error();
        uVar9 = (ulong)*puVar7 << 0x20 | 2;
        uVar13 = 0x100000001;
        goto LAB_1060fe3ec;
      }
      if ((int)puVar7 == 0) {
        if (((ulong)puVar7 & 1) == 0) {
          uVar9 = 0;
          uVar13 = 0;
          goto LAB_1060fe3ec;
        }
      }
      else {
        puVar5[0x18] = 1;
        puVar5[0x19] = uStack_64;
        uStack_70 = uStack_64;
      }
    }
    else {
      uStack_70 = puVar5[0x19];
    }
    *(undefined1 *)(puVar5 + 0x22) = 0;
    puVar7 = (uint *)FUN_1060f3278(puVar5 + 0x18);
    uVar9 = (ulong)uStack_70;
    puVar5[0x18] = 3;
    puVar5[0x19] = uStack_70;
    uVar13 = 0x100000000;
LAB_1060fe3ec:
    *extraout_x8 = uVar13;
    extraout_x8[1] = uVar9;
    return puVar7;
  }
  func_0x000108a079f0(&UNK_109beb6a8,0x13,&UNK_10b4cd768);
  puVar5[0x18] = 3;
  puVar5[0x19] = unaff_w22;
  auVar14 = __Unwind_Resume();
  plVar8 = auVar14._8_8_;
  iVar3 = *(int *)((long)plVar8 + 0xc);
  *(undefined4 *)((long)plVar8 + 0xc) = 0xffffffff;
  if (iVar3 != -1) {
    iVar4 = _fcntl(iVar3,3);
    if ((iVar4 == -1) || (iVar4 = _fcntl(iVar3,4), iVar4 == -1)) {
      puVar5 = (uint *)___error();
      uVar9 = (ulong)*puVar5 << 0x20 | 2;
      _close(iVar3);
    }
    else {
      FUN_1060f8198(&lStack_f0,iVar3);
      uVar9 = uStack_e8;
      if (lStack_f0 != 2) {
        uStack_118 = uStack_d8;
        lStack_120 = lStack_e0;
        lVar6 = lStack_f0;
        unaff_x24 = uStack_e8;
        goto LAB_1060fe4f4;
      }
    }
    if ((int)plVar8[2] != -1) {
      _close();
    }
    goto LAB_1060fe630;
  }
  lVar6 = 2;
LAB_1060fe4f4:
  uStack_148 = uStack_118;
  lStack_150 = lStack_120;
  iVar3 = (int)plVar8[2];
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  alStack_160[0] = lVar6;
  if (iVar3 == -1) {
    lVar12 = 2;
LAB_1060fe584:
    uStack_128 = uStack_118;
    lStack_130 = lStack_120;
    iVar3 = *(int *)((long)plVar8 + 0x14);
    *(undefined4 *)((long)plVar8 + 0x14) = 0xffffffff;
    lStack_140 = lVar12;
    uStack_138 = unaff_x26;
    if (iVar3 == -1) {
      lVar11 = 2;
LAB_1060fe66c:
      uStack_108 = uStack_f8;
      lStack_110 = lStack_100;
      lStack_120 = lVar11;
      uStack_118 = unaff_x26;
      puVar5 = (uint *)__ZN5tokio6signal4unix6signal17h0eb8e985e7a70e48E
                                 (&lStack_f0,0x14,&UNK_10b4cd738);
      if (lStack_f0 != 0) {
        if (lVar6 == 2) {
          lStack_150 = lStack_200;
          uStack_148 = uStack_1f8;
        }
        if (lVar12 == 2) {
          uVar2 = *(undefined1 *)(auVar14._0_8_ + 200);
          uStack_128 = uStack_1e0;
          uStack_138 = uStack_1f0;
          lStack_130 = lStack_1e8;
        }
        else {
          uVar2 = *(undefined1 *)(auVar14._0_8_ + 200);
        }
        if (lVar11 != 2) {
          lStack_1c8 = lStack_110;
          uStack_1d0 = uStack_118;
          uStack_1c0 = uStack_108;
        }
        lVar10 = *plVar8;
        extraout_x8_00[0xd] = plVar8[1];
        extraout_x8_00[0xc] = lVar10;
        lVar10 = plVar8[2];
        *extraout_x8_00 = lVar6;
        extraout_x8_00[1] = unaff_x24;
        extraout_x8_00[3] = uStack_148;
        extraout_x8_00[2] = lStack_150;
        extraout_x8_00[4] = lVar12;
        extraout_x8_00[6] = lStack_130;
        extraout_x8_00[5] = uStack_138;
        extraout_x8_00[7] = uStack_128;
        extraout_x8_00[8] = lVar11;
        extraout_x8_00[0xb] = uStack_1c0;
        extraout_x8_00[10] = lStack_1c8;
        extraout_x8_00[9] = uStack_1d0;
        extraout_x8_00[0xe] = lVar10;
        extraout_x8_00[0xf] = lStack_f0;
        extraout_x8_00[0x10] = uStack_e8;
        *(undefined1 *)(extraout_x8_00 + 0x11) = uVar2;
        return puVar5;
      }
      uVar9 = uStack_e8;
      if (lVar11 != 2) {
        FUN_1060f5bec(&lStack_120);
      }
    }
    else {
      iVar4 = _fcntl(iVar3,3);
      if ((iVar4 == -1) || (iVar4 = _fcntl(iVar3,4), iVar4 == -1)) {
        puVar5 = (uint *)___error();
        uVar9 = (ulong)*puVar5 << 0x20 | 2;
        _close(iVar3);
      }
      else {
        FUN_1060f8198(&lStack_f0,iVar3);
        uVar9 = uStack_e8;
        if (lStack_f0 != 2) {
          uStack_f8 = uStack_d8;
          lStack_100 = lStack_e0;
          lVar11 = lStack_f0;
          unaff_x26 = uStack_e8;
          goto LAB_1060fe66c;
        }
      }
    }
    if (lVar12 != 2) {
      FUN_1060f5bec(&lStack_140);
    }
  }
  else {
    iVar4 = _fcntl(iVar3,3);
    if ((iVar4 == -1) || (iVar4 = _fcntl(iVar3,4), iVar4 == -1)) {
      puVar5 = (uint *)___error();
      uVar9 = (ulong)*puVar5 << 0x20 | 2;
      _close(iVar3);
    }
    else {
      FUN_1060f8198(&lStack_f0,iVar3);
      uVar9 = uStack_e8;
      if (lStack_f0 != 2) {
        uStack_118 = uStack_d8;
        lStack_120 = lStack_e0;
        lVar12 = lStack_f0;
        unaff_x26 = uStack_e8;
        goto LAB_1060fe584;
      }
    }
  }
  if (lVar6 != 2) {
    FUN_1060f5bec(alStack_160);
  }
LAB_1060fe630:
  puVar5 = (uint *)(ulong)*(uint *)((long)plVar8 + 0x14);
  if (*(uint *)((long)plVar8 + 0x14) != 0xffffffff) {
    puVar5 = (uint *)_close();
  }
  *extraout_x8_00 = 3;
  extraout_x8_00[1] = uVar9;
  return puVar5;
}

