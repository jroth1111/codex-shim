
undefined8 FUN_10121eff0(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  long lVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_61;
  
  if (*param_1 == '\x14') {
    uStack_c0 = *(undefined8 *)(param_1 + 8);
    lStack_d0 = *(long *)(param_1 + 0x10);
    lStack_b8 = lStack_d0 + *(long *)(param_1 + 0x18) * 0x20;
    pbStack_b0 = (byte *)0x0;
    lStack_c8 = lStack_d0;
    uVar11 = FUN_100fbc738(&lStack_d0);
  }
  else if (*param_1 == '\x15') {
    uStack_a0 = *(undefined8 *)(param_1 + 8);
    pbStack_b0 = *(byte **)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18) * 0x40;
    pbVar1 = pbStack_b0 + lVar8;
    lStack_d0 = CONCAT71(lStack_d0._1_7_,0x16);
    lStack_90 = 0;
    lVar12 = 0;
    pbVar10 = pbStack_b0;
    pbStack_98 = pbVar1;
    lVar5 = lStack_90;
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar13 = (undefined8 *)((ulong)&lStack_88 | 1);
      puVar14 = (undefined8 *)((ulong)&lStack_d0 | 1);
      pbVar3 = pbStack_b0;
      pbStack_a8 = pbStack_b0;
      do {
        pbVar9 = pbVar3 + 0x40;
        bVar2 = *pbVar3;
        pbVar10 = pbVar9;
        lVar5 = lVar12;
        if (bVar2 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar3 + 1);
        puVar13[1] = *(undefined8 *)(pbVar3 + 9);
        *puVar13 = uVar11;
        uVar11 = *(undefined8 *)(pbVar3 + 0x10);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar3 + 0x18);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar11;
        lStack_c8 = *(long *)(pbVar3 + 0x28);
        lStack_d0 = *(long *)(pbVar3 + 0x20);
        lStack_b8 = *(long *)(pbVar3 + 0x38);
        uStack_c0 = *(undefined8 *)(pbVar3 + 0x30);
        uVar7 = (uint)bVar2;
        lStack_88._0_1_ = bVar2;
        if (0xf < uVar7) {
LAB_10121f1c8:
          lStack_90 = lVar12 + 1;
          pbStack_a8 = pbVar9;
          uVar11 = FUN_108855b04(&lStack_88,&uStack_61,&UNK_10b212780);
          FUN_100d34830(&pbStack_b0);
          if ((char)lStack_d0 == '\x16') {
            return uVar11;
          }
          FUN_100e077ec(&lStack_d0);
          return uVar11;
        }
        if ((1 << (ulong)(uVar7 & 0x1f) & 0xa012U) == 0) {
          if ((uVar7 != 0xc) && (bVar2 != 0xe)) goto LAB_10121f1c8;
          if (lStack_80 != 0) {
            _free(uStack_78);
          }
        }
        else {
          FUN_100e077ec(&lStack_88);
        }
        cVar4 = (char)lStack_d0;
        lStack_d0 = CONCAT71(lStack_d0._1_7_,0x16);
        if (cVar4 == '\x16') {
          lStack_90 = lVar12 + 1;
          pbStack_a8 = pbVar9;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10121f1c8);
          (*pcVar6)();
        }
        uVar11 = *puVar14;
        puVar13[1] = puVar14[1];
        *puVar13 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar11;
        lStack_88 = CONCAT71(lStack_88._1_7_,cVar4);
        FUN_100e077ec(&lStack_88);
        lVar12 = lVar12 + 1;
        pbVar10 = pbVar1;
        pbVar3 = pbVar9;
        lVar5 = (lVar8 - 0x40U >> 6) + 1;
      } while (pbVar9 != pbVar1);
    }
    lStack_90 = lVar5;
    lVar12 = lStack_90;
    pbStack_a8 = pbVar10;
    FUN_100d34830(&pbStack_b0);
    if (pbVar1 == pbVar10) {
      uVar11 = 0;
    }
    else {
      lStack_88 = lVar12;
      uVar11 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar10) >> 6) + lVar12,&lStack_88,
                             &UNK_10b23a190);
    }
  }
  else {
    uVar11 = FUN_108855b04(param_1,&uStack_61,&UNK_10b20c060);
  }
  return uVar11;
}

