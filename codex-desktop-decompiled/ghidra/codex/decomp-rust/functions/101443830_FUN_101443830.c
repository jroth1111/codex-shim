
void FUN_101443830(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  code *pcVar9;
  bool bVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  byte *pbVar26;
  long lVar27;
  byte *pbVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  long lStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte abStack_110 [8];
  byte *pbStack_108;
  byte *pbStack_100;
  long lStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  int *piStack_80;
  int *piStack_78;
  long lStack_70;
  
  if (*param_2 == '\x14') {
    pbVar1 = *(byte **)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar15 = *(byte **)(param_2 + 0x18);
    pbVar14 = pbVar2 + (long)pbVar15 * 0x20;
    lStack_130 = 0;
    pbVar21 = pbVar15;
    if ((byte *)0xaaa9 < pbVar15) {
      pbVar21 = (byte *)0xaaaa;
    }
    pbStack_150 = pbVar2;
    pbStack_140 = pbVar1;
    pbStack_138 = pbVar14;
    if (pbVar15 == (byte *)0x0) {
      pbStack_128 = (byte *)0x0;
      pbStack_120 = (byte *)0x8;
      pbStack_118 = (byte *)0x0;
      pbVar17 = pbVar2;
      lVar16 = lStack_130;
    }
    else {
      pbStack_148 = pbVar2;
      pbVar11 = (byte *)_malloc((long)pbVar21 * 0x18);
      if (pbVar11 == (byte *)0x0) {
        func_0x0001087c9084(8,(long)pbVar21 * 0x18);
LAB_1014440e8:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1014440ec);
        (*pcVar9)();
      }
      pbStack_118 = (byte *)0x0;
      bVar4 = *pbVar2;
      lVar27 = 0;
      pbVar17 = pbVar2 + 0x20;
      lVar16 = lVar27;
      pbStack_128 = pbVar21;
      pbStack_120 = pbVar11;
      if (bVar4 != 0x16) {
        puVar18 = (undefined8 *)((ulong)abStack_110 | 1);
        puVar20 = (undefined8 *)((ulong)&uStack_88 | 1);
        puVar19 = (undefined8 *)((ulong)&pbStack_f0 | 1);
        pbVar21 = pbVar2;
LAB_1014438f8:
        pbVar22 = pbVar17;
        pbVar17 = pbStack_100;
        pbVar11 = pbStack_108;
        uVar30 = *(undefined8 *)(pbVar21 + 9);
        uVar29 = *(undefined8 *)(pbVar21 + 1);
        uVar31 = *(undefined8 *)(pbVar21 + 0x10);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar21 + 0x18);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar31;
        puVar18[1] = uVar30;
        *puVar18 = uVar29;
        lVar27 = lVar27 + 1;
        abStack_110[0] = bVar4;
        if (bVar4 != 0x14) {
          if (bVar4 == 0x15) {
            lVar16 = lStack_f8 * 0x40;
            pbVar21 = pbStack_100 + lVar16;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            pbStack_c0 = pbStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            ppuStack_b0 = (undefined **)0x0;
            ppuVar23 = (undefined **)0x0;
            pbStack_b8 = pbVar21;
            if (lStack_f8 == 0) {
              puVar24 = (undefined *)0x8000000000000001;
              ppuVar8 = ppuStack_b0;
            }
            else {
              puVar24 = (undefined *)0x8000000000000001;
              pbVar11 = pbStack_100;
              do {
                ppuVar7 = uStack_88;
                pbVar26 = pbVar11 + 0x40;
                bVar5 = *pbVar11;
                pbVar17 = pbVar26;
                ppuVar8 = ppuVar23;
                if (bVar5 == 0x16) break;
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar5);
                ppuVar8 = uStack_88;
                uVar29 = *(undefined8 *)(pbVar11 + 0x10);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar11 + 0x18);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                uVar29 = *(undefined8 *)(pbVar11 + 1);
                puVar20[1] = *(undefined8 *)(pbVar11 + 9);
                *puVar20 = uVar29;
                pbStack_e8 = *(byte **)(pbVar11 + 0x28);
                pbStack_f0 = *(byte **)(pbVar11 + 0x20);
                pbStack_d8 = *(byte **)(pbVar11 + 0x38);
                pbStack_e0 = *(byte **)(pbVar11 + 0x30);
                if (0xc < bVar5) {
                  if (bVar5 == 0xd) {
                    if (piStack_78 == (int *)0x4) {
                      bVar10 = *piStack_80 == 0x656d616e;
                      goto LAB_101443ad8;
                    }
LAB_101443ae0:
                    bVar10 = true;
                    goto LAB_101443ae4;
                  }
                  if (bVar5 != 0xe) {
                    if (bVar5 != 0xf) goto LAB_101443e28;
                    if ((((piStack_78 != (int *)0x4) || ((char)*piStack_80 != 'n')) ||
                        (*(char *)((long)piStack_80 + 1) != 'a')) ||
                       (*(char *)((long)piStack_80 + 2) != 'm')) goto LAB_101443ae0;
                    bVar10 = *(char *)((long)piStack_80 + 3) == 'e';
                    goto LAB_101443ad8;
                  }
                  if (((lStack_70 == 4) && ((char)*piStack_78 == 'n')) &&
                     ((*(char *)((long)piStack_78 + 1) == 'a' &&
                      (*(char *)((long)piStack_78 + 2) == 'm')))) {
                    bVar10 = *(char *)((long)piStack_78 + 3) != 'e';
                  }
                  else {
                    bVar10 = true;
                  }
                  if (piStack_80 == (int *)0x0) goto LAB_101443aec;
                  _free();
                  if (bVar10) goto LAB_101443af0;
LAB_101443b54:
                  if (puVar24 == (undefined *)0x8000000000000001) {
                    cVar6 = (char)pbStack_f0;
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar6 == '\x16') {
                      ppuStack_b0 = (undefined **)((long)ppuVar23 + 1);
                      pbStack_148 = pbVar22;
                      lStack_130 = lVar27;
                      pbStack_c8 = pbVar26;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_1014440e8;
                    }
                    uVar29 = *puVar19;
                    puVar20[1] = puVar19[1];
                    *puVar20 = uVar29;
                    uVar29 = *(undefined8 *)((long)puVar19 + 0xf);
                    *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                    *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                    uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar6);
                    FUN_1004b60cc(&puStack_a0,&uStack_88);
                    pbStack_160 = pbStack_98;
                    if (puStack_a0 != (undefined *)0x8000000000000001) {
                      pbStack_168 = pbStack_90;
                      puVar24 = puStack_a0;
                      goto LAB_10144397c;
                    }
                    ppuStack_b0 = (undefined **)((long)ppuVar23 + 1);
                    pbVar13 = pbStack_98;
                    pbStack_c8 = pbVar26;
                  }
                  else {
                    ppuStack_b0 = (undefined **)((long)ppuVar23 + 1);
                    puStack_a0 = &UNK_108c61018;
                    pbStack_98 = (byte *)0x4;
                    uStack_88 = &puStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar26;
                    pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    puVar24 = (undefined *)((ulong)puVar24 & 0x7fffffffffffffff);
joined_r0x000101443e20:
                    if (puVar24 != (undefined *)0x0) {
                      _free(pbStack_160);
                    }
                  }
LAB_101443d98:
                  FUN_100d34830(&pbStack_d0);
                  if ((char)pbStack_f0 != '\x16') {
                    FUN_100e077ec(&pbStack_f0);
                  }
                  puVar25 = (undefined *)0x8000000000000001;
                  pbVar26 = pbVar21;
                  goto LAB_101443ce8;
                }
                if (bVar5 != 1) {
                  if (bVar5 == 4) {
                    bVar10 = piStack_80 == (int *)0x0;
                    goto LAB_101443ad8;
                  }
                  if (bVar5 == 0xc) {
                    if (lStack_70 == 4) {
                      iVar3 = *piStack_78;
                      if (piStack_80 != (int *)0x0) {
                        _free();
                      }
                      if (iVar3 == 0x656d616e) goto LAB_101443b54;
                    }
                    else if (piStack_80 != (int *)0x0) {
                      _free();
                    }
                    goto LAB_101443af0;
                  }
LAB_101443e28:
                  ppuStack_b0 = (undefined **)((long)ppuVar23 + 1);
                  pbStack_c8 = pbVar26;
                  pbVar13 = (byte *)FUN_108855b04(&uStack_88,&puStack_a0,&UNK_10b20e180);
                  if ((long)puVar24 < -0x7ffffffffffffffe) goto LAB_101443d98;
                  goto joined_r0x000101443e20;
                }
                uStack_88._1_1_ = SUB81(ppuVar7,1);
                bVar10 = uStack_88._1_1_ == '\0';
LAB_101443ad8:
                bVar10 = !bVar10;
LAB_101443ae4:
                uStack_88 = ppuVar8;
                FUN_100e077ec(&uStack_88);
LAB_101443aec:
                if (!bVar10) goto LAB_101443b54;
LAB_101443af0:
                cVar6 = (char)pbStack_f0;
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (cVar6 == '\x16') {
                  ppuStack_b0 = (undefined **)((long)ppuVar23 + 1);
                  pbStack_148 = pbVar22;
                  lStack_130 = lVar27;
                  pbStack_c8 = pbVar26;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_1014440e8;
                }
                uVar29 = *puVar19;
                puVar20[1] = puVar19[1];
                *puVar20 = uVar29;
                uVar29 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar6);
                FUN_100e077ec(&uStack_88);
LAB_10144397c:
                ppuVar23 = (undefined **)((long)ppuVar23 + 1);
                pbVar17 = pbVar21;
                pbVar11 = pbVar26;
                ppuVar8 = (undefined **)((lVar16 - 0x40U >> 6) + 1);
              } while (pbVar26 != pbVar21);
            }
            ppuStack_b0 = ppuVar8;
            ppuVar23 = ppuStack_b0;
            puVar25 = (undefined *)0x8000000000000000;
            if (puVar24 != (undefined *)0x8000000000000001) {
              puVar25 = puVar24;
            }
            pbStack_c8 = pbVar17;
            FUN_100d34830(&pbStack_d0);
            pbVar13 = pbStack_160;
            pbVar26 = pbStack_168;
            if (pbVar21 != pbVar17) {
              uStack_88 = ppuVar23;
              pbVar13 = (byte *)FUN_1087e422c(((ulong)((long)pbVar21 - (long)pbVar17) >> 6) +
                                              (long)ppuVar23,&uStack_88,&UNK_10b23a190);
              if (((ulong)puVar25 & 0x7fffffffffffffff) != 0) {
                _free(pbStack_160);
              }
              puVar25 = (undefined *)0x8000000000000001;
            }
            goto LAB_101443ce8;
          }
          pbStack_148 = pbVar22;
          lStack_130 = lVar27;
          pbVar13 = (byte *)FUN_108855b04(abStack_110,&puStack_a0,&UNK_10b20c880);
          pbVar17 = pbStack_148;
          lVar27 = lStack_130;
          pbVar11 = pbStack_120;
          pbVar21 = pbStack_118;
joined_r0x0001014440a8:
          lStack_130 = lVar27;
          pbStack_148 = pbVar17;
          pbStack_e8 = pbVar13;
          pbStack_120 = pbVar11;
          pbStack_118 = pbVar21;
          if (pbVar21 != (byte *)0x0) {
            pbVar15 = pbVar11 + 8;
            do {
              if ((*(ulong *)(pbVar15 + -8) & 0x7fffffffffffffff) != 0) {
                _free(*(undefined8 *)pbVar15);
              }
              pbVar15 = pbVar15 + 0x18;
              pbVar21 = pbVar21 + -1;
            } while (pbVar21 != (byte *)0x0);
          }
          if (pbStack_128 != (byte *)0x0) {
            _free(pbVar11);
          }
          goto LAB_101443f44;
        }
        pbVar21 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        pbStack_e0 = pbStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar28 = pbStack_100;
        pbStack_d8 = pbVar21;
        if (lStack_f8 == 0) {
LAB_101443be8:
          pbStack_e8 = pbVar28;
          pbVar12 = (byte *)FUN_1087e422c(0,&UNK_10b224290,&UNK_10b20a590);
LAB_101443c08:
          lVar16 = ((ulong)((long)pbVar21 - (long)pbVar28) >> 5) + 1;
          pbVar26 = pbVar28;
          while (lVar16 = lVar16 + -1, lVar16 != 0) {
            FUN_100e077ec(pbVar26);
            pbVar26 = pbVar26 + 0x20;
          }
          pbVar13 = pbVar17;
          if (pbVar11 == (byte *)0x0) {
            puVar25 = (undefined *)0x8000000000000001;
            pbVar13 = pbVar12;
          }
          else {
LAB_101443c3c:
            _free(pbVar13);
            puVar25 = (undefined *)0x8000000000000001;
            pbVar13 = pbVar12;
          }
        }
        else {
          pbVar28 = pbStack_100 + 0x20;
          bVar5 = *pbStack_100;
          if (bVar5 == 0x16) goto LAB_101443be8;
          uVar29 = *(undefined8 *)(pbStack_100 + 1);
          puVar20[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar20 = uVar29;
          uVar29 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
          pbStack_d0 = (byte *)0x1;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar5);
          pbStack_e8 = pbVar28;
          FUN_1004b60cc(&puStack_a0,&uStack_88);
          pbVar26 = pbStack_90;
          pbVar13 = pbStack_98;
          puVar25 = puStack_a0;
          pbVar12 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000001) goto LAB_101443c08;
          pbVar12 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar12 != (byte *)0x0) {
            if (((ulong)puVar25 & 0x7fffffffffffffff) == 0) {
              puVar25 = (undefined *)0x8000000000000001;
              pbVar13 = pbVar12;
              goto LAB_101443ce8;
            }
            goto LAB_101443c3c;
          }
        }
LAB_101443ce8:
        if ((bVar4 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_110);
        }
        pbVar21 = pbStack_118;
        pbVar17 = pbVar22;
        pbVar11 = pbStack_120;
        if (puVar25 + 0x7fffffffffffffff < (undefined *)0x2) goto joined_r0x0001014440a8;
        if (pbStack_118 == pbStack_128) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h4a4d38ddd142ec51E(&pbStack_128);
        }
        pbVar11 = pbStack_120 + (long)pbVar21 * 0x18;
        *(undefined **)pbVar11 = puVar25;
        *(byte **)(pbVar11 + 8) = pbVar13;
        *(byte **)(pbVar11 + 0x10) = pbVar26;
        pbStack_118 = pbVar21 + 1;
        pbVar17 = pbVar14;
        lVar16 = ((long)pbVar15 * 0x20 - 0x20U >> 5) + 1;
        if (pbVar22 != pbVar14) goto code_r0x000101443d48;
      }
    }
LAB_101443f20:
    lStack_130 = lVar16;
    pbVar21 = pbStack_118;
    pbVar15 = pbStack_120;
    pbVar11 = pbStack_128;
    pbStack_e8 = pbStack_120;
    pbStack_f0 = pbStack_128;
    pbStack_e0 = pbStack_118;
    pbVar22 = pbVar17;
    pbStack_148 = pbVar17;
    if (pbStack_128 == (byte *)0x8000000000000000) {
LAB_101443f44:
      lVar27 = ((ulong)((long)pbVar14 - (long)pbVar22) >> 5) + 1;
      while (lVar27 = lVar27 + -1, pbVar15 = pbVar2, pbVar11 = pbVar1, lVar27 != 0) {
        FUN_100e077ec(pbVar22);
        pbVar22 = pbVar22 + 0x20;
      }
    }
    else {
      pbVar14 = (byte *)FUN_100fbc738(&pbStack_150);
      if (pbVar14 == (byte *)0x0) {
        param_1[1] = pbStack_e8;
        *param_1 = pbStack_f0;
        param_1[2] = pbStack_e0;
        return;
      }
      pbStack_e8 = pbVar14;
      if (pbVar21 != (byte *)0x0) {
        pbVar14 = pbVar15 + 8;
        do {
          if ((*(ulong *)(pbVar14 + -8) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)pbVar14);
          }
          pbVar14 = pbVar14 + 0x18;
          pbVar21 = pbVar21 + -1;
        } while (pbVar21 != (byte *)0x0);
      }
    }
    if (pbVar11 != (byte *)0x0) {
      _free(pbVar15);
    }
  }
  else {
    pbStack_e8 = (byte *)FUN_108855b04(param_2,&puStack_a0,&UNK_10b20a220);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = pbStack_e8;
  return;
code_r0x000101443d48:
  pbVar17 = pbVar22 + 0x20;
  bVar4 = *pbVar22;
  pbVar21 = pbVar22;
  lVar16 = lVar27;
  if (bVar4 == 0x16) goto LAB_101443f20;
  goto LAB_1014438f8;
}

