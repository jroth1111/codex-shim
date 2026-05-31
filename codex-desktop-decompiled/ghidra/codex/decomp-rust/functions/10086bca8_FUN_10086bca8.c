
long FUN_10086bca8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uStack_1798;
  long lStack_1790;
  long lStack_1788;
  long lStack_1780;
  long lStack_1778;
  long lStack_1770;
  long lStack_1768;
  long lStack_1760;
  long lStack_1758;
  long lStack_1750;
  long lStack_1748;
  long lStack_1740;
  ulong uStack_1738;
  long lStack_1730;
  long lStack_1728;
  long lStack_1720;
  ulong uStack_1718;
  long lStack_1710;
  undefined *puStack_1708;
  long lStack_1700;
  long lStack_16f8;
  long lStack_16f0;
  undefined *puStack_16e8;
  undefined *puStack_16e0;
  long lStack_16d8;
  long lStack_16d0;
  long lStack_16c8;
  long lStack_16c0;
  long lStack_16b8;
  long lStack_16b0;
  undefined1 uStack_16a8;
  long lStack_16a0;
  long lStack_1698;
  long lStack_1690;
  long lStack_1688;
  long lStack_1680;
  undefined1 auStack_1678 [280];
  long *plStack_1560;
  undefined8 uStack_1040;
  undefined1 uStack_160;
  undefined1 auStack_158 [280];
  
  uStack_1040 = 0;
  lVar1 = *param_2;
  lVar4 = param_2[1];
  if (lVar1 == 3) {
    return lVar4;
  }
  lVar14 = param_2[0x1d];
  lStack_16b8 = param_2[0x1b];
  lStack_16c0 = param_2[0x1a];
  lVar9 = param_2[7];
  lVar6 = param_2[6];
  lVar15 = param_2[9];
  lVar12 = param_2[8];
  lVar10 = param_2[0xb];
  lVar7 = param_2[10];
  lVar11 = param_2[3];
  lVar8 = param_2[2];
  lVar16 = param_2[5];
  lVar13 = param_2[4];
  lStack_1698 = param_2[0x1f];
  lStack_16a0 = param_2[0x1e];
  lStack_1688 = param_2[0x21];
  lStack_1690 = param_2[0x20];
  lStack_16d0 = 0;
  lStack_16d8 = 1;
  lStack_16f8 = 0;
  lStack_16f0 = 0;
  lStack_1680 = param_2[0x22];
  lStack_1790 = 0;
  lStack_1768 = 0;
  lStack_1760 = 0;
  lStack_1778 = 0;
  lStack_1770 = 8;
  lStack_1758 = 8;
  lStack_1750 = 0;
  lStack_1748 = 2;
  lStack_1740 = 0;
  uStack_1738 = uStack_1738 & 0xffffffffffff0000;
  lStack_1730 = 0;
  lStack_1728 = 8;
  lStack_1720 = 0;
  uStack_1718 = uStack_1718 & 0xffffffffffffff00;
  puStack_1708 = &UNK_10b408b60;
  lStack_1700 = 1;
  puStack_16e8 = &UNK_10b408b60;
  puStack_16e0 = &UNK_109b1a087;
  lStack_16c8 = CONCAT62(lStack_16c8._2_6_,0xffff);
  uStack_16a8 = 2;
  lStack_16b0 = param_2[0x1c];
  FUN_100dd512c(&uStack_1718);
  lStack_16f0 = param_2[0x14];
  lStack_16f8 = param_2[0x13];
  puStack_16e0 = (undefined *)param_2[0x16];
  puStack_16e8 = (undefined *)param_2[0x15];
  lStack_16d0 = param_2[0x18];
  lStack_16d8 = param_2[0x17];
  lStack_16c8 = param_2[0x19];
  lStack_1710 = param_2[0x10];
  uStack_1718 = param_2[0xf];
  lStack_1700 = param_2[0x12];
  puStack_1708 = (undefined *)param_2[0x11];
  FUN_100def764(&lStack_1790);
  uStack_1798 = (undefined1)lVar14;
  uStack_16a8 = uStack_1798;
  lStack_1790 = lVar1;
  lStack_1788 = lVar4;
  lStack_1780 = lVar8;
  lStack_1778 = lVar11;
  lStack_1770 = lVar13;
  lStack_1768 = lVar16;
  lStack_1760 = lVar6;
  lStack_1758 = lVar9;
  lStack_1750 = lVar12;
  lStack_1748 = lVar15;
  lStack_1740 = lVar7;
  uStack_1738 = lVar10;
  func_0x000100e3c8d4(&lStack_1730);
  lStack_1728 = param_2[0xd];
  lStack_1730 = param_2[0xc];
  lStack_1720 = param_2[0xe];
  _memcpy(auStack_158,&lStack_1790,0x118);
  plVar3 = (long *)*param_1;
  lVar1 = *plVar3;
  *plVar3 = lVar1 + 1;
  if (-1 < lVar1) {
    _memcpy(auStack_1678,auStack_158,0x118);
    uStack_160 = 0;
    plStack_1560 = plVar3;
    lVar1 = _malloc(0x1520);
    if (lVar1 != 0) {
      _memcpy(lVar1,auStack_1678,0x1520);
      lVar4 = param_1[1];
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)param_1[2];
        pcVar2 = (code *)*puVar5;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(lVar4);
        }
        if (puVar5[1] != 0) {
          _free(lVar4);
        }
      }
      param_1[1] = lVar1;
      param_1[2] = &UNK_10b2241f8;
      return 0;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1520);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10086beec);
  (*pcVar2)();
}

