
void FUN_10142e300(long *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *unaff_x27;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  int *piStack_80;
  long lStack_78;
  byte *pbVar16;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puStack_200 = *(undefined8 **)(param_2 + 8);
    puStack_210 = *(undefined8 **)(param_2 + 0x10);
    puStack_1f8 = puStack_210 + *(long *)(param_2 + 0x18) * 4;
    pbStack_1f0 = (byte *)0x0;
    puStack_208 = puStack_210;
    FUN_100f2abac(&puStack_120,&puStack_210);
    puVar12 = puStack_120;
    if (puStack_120 != (undefined8 *)0x8000000000000002) {
      puStack_1b8 = puStack_108;
      puStack_1c0 = puStack_110;
      puStack_1a8 = puStack_f8;
      puStack_1b0 = puStack_100;
      puStack_198 = puStack_e8;
      puStack_1a0 = puStack_f0;
      puStack_190 = puStack_e0;
      if (puStack_120 != (undefined8 *)0x8000000000000001) {
        puStack_148 = puStack_f8;
        puStack_150 = puStack_100;
        puStack_138 = puStack_e8;
        puStack_140 = puStack_f0;
        puStack_130 = puStack_e0;
        puStack_168 = puStack_118;
        puStack_170 = puStack_120;
        puStack_158 = puStack_108;
        puStack_160 = puStack_110;
        puVar13 = (undefined8 *)FUN_100fbc738(&puStack_210);
        if (puVar13 != (undefined8 *)0x0) {
          puStack_120 = (undefined8 *)0x8000000000000001;
          puStack_118 = puVar13;
          if (puStack_170 != (undefined8 *)0x8000000000000000) {
            if ((puStack_150 != (undefined8 *)0x0) && ((long)puStack_150 * 9 != -0x11)) {
              _free(puStack_158 + (-1 - (long)puStack_150));
            }
            func_0x000100cd7284(&puStack_170);
          }
LAB_10142e8bc:
          puVar12 = (undefined8 *)0x8000000000000001;
        }
        goto joined_r0x00010142e8cc;
      }
      puStack_118 = (undefined8 *)FUN_1087e422c(0,&UNK_10b22e188,&UNK_10b20a590);
    }
    puStack_120 = (undefined8 *)0x8000000000000001;
    lVar9 = ((ulong)((long)puStack_1f8 - (long)puStack_208) >> 5) + 1;
    puVar12 = puStack_208;
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
      FUN_100e077ec(puVar12);
      puVar12 = puVar12 + 4;
    }
    if (puStack_200 != (undefined8 *)0x0) {
      _free(puStack_210);
    }
    puVar12 = (undefined8 *)0x8000000000000001;
  }
  else {
    if (bVar3 != 0x15) {
      puStack_118 = (undefined8 *)FUN_108855b04(param_2,&puStack_120,&UNK_10b20bce0);
      goto LAB_10142e848;
    }
    uStack_1e0 = *(undefined8 *)(param_2 + 8);
    pbVar15 = *(byte **)(param_2 + 0x10);
    pbVar7 = pbVar15 + *(long *)(param_2 + 0x18) * 0x40;
    puStack_210 = (undefined8 *)CONCAT71(puStack_210._1_7_,0x16);
    puStack_1d0 = (undefined8 *)0x0;
    puStack_170 = (undefined8 *)0x8000000000000001;
    pbStack_1f0 = pbVar15;
    pbStack_1d8 = pbVar7;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar12 = (undefined8 *)0x8000000000000000;
      pbStack_1e8 = pbVar15;
    }
    else {
      puVar11 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar10 = (undefined8 *)((ulong)&puStack_210 | 1);
      puVar8 = (undefined8 *)((ulong)&puStack_120 | 1);
      puVar12 = (undefined8 *)0x8000000000000001;
      puVar13 = (undefined8 *)0x8000000000000001;
      pbVar14 = pbVar7;
      pbVar16 = pbVar15;
      do {
        pbVar7 = pbVar14;
        pbVar15 = pbVar16 + 0x40;
        bVar2 = *pbVar16;
        pbStack_1e8 = pbVar15;
        if (bVar2 == 0x16) break;
        puStack_1d0 = (undefined8 *)((long)puStack_1d0 + 1);
        uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,bVar2);
        uVar17 = *(undefined8 *)(pbVar16 + 1);
        uVar19 = *(undefined8 *)(pbVar16 + 0x18);
        uVar18 = *(undefined8 *)(pbVar16 + 0x10);
        puStack_118 = *(undefined8 **)(pbVar16 + 0x28);
        puStack_120 = *(undefined8 **)(pbVar16 + 0x20);
        puVar11[1] = *(undefined8 *)(pbVar16 + 9);
        *puVar11 = uVar17;
        *(undefined8 *)((long)puVar11 + 0x17) = uVar19;
        *(undefined8 *)((long)puVar11 + 0xf) = uVar18;
        puStack_108 = *(undefined8 **)(pbVar16 + 0x38);
        puStack_110 = *(undefined8 **)(pbVar16 + 0x30);
        if ((char)puStack_210 != '\x16') {
          FUN_100e077ec(&puStack_210);
        }
        puStack_208 = puStack_118;
        puStack_210 = puStack_120;
        puStack_1f8 = puStack_108;
        puStack_200 = puStack_110;
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            bVar6 = uStack_90._1_1_ == '\0';
LAB_10142e518:
            bVar6 = !bVar6;
            goto LAB_10142e524;
          }
          if (bVar2 == 4) {
            bVar6 = piStack_88 == (int *)0x0;
            goto LAB_10142e518;
          }
          if (bVar2 != 0xc) goto LAB_10142e980;
          if (lStack_78 != 4) {
            if (piStack_88 != (int *)0x0) {
              _free();
            }
            goto LAB_10142e530;
          }
          iVar1 = *piStack_80;
          bVar6 = iVar1 != 0x6c6c6163;
          if (piStack_88 == (int *)0x0) goto joined_r0x00010142e570;
          _free();
          if (iVar1 != 0x6c6c6163) goto LAB_10142e530;
LAB_10142e574:
          if (puVar12 == (undefined8 *)0x8000000000000001) {
            func_0x000100f21ca8(&puStack_120,&puStack_210);
            if (puStack_120 != (undefined8 *)0x8000000000000001) {
              puStack_158 = puStack_108;
              puStack_160 = puStack_110;
              puStack_148 = puStack_f8;
              puStack_150 = puStack_100;
              puStack_138 = puStack_e8;
              puStack_140 = puStack_f0;
              puStack_130 = puStack_e0;
              puVar12 = puStack_120;
              puVar13 = puStack_120;
              pbVar14 = pbStack_1d8;
              pbVar7 = pbStack_1e8;
              unaff_x27 = puStack_118;
              goto LAB_10142e3a0;
            }
            puStack_120 = (undefined8 *)0x8000000000000001;
          }
          else {
            uStack_90 = &UNK_108cde458;
            piStack_88 = (int *)0x4;
            puStack_120 = &uStack_90;
            puStack_118 = (undefined8 *)&DAT_100c7b3a0;
            puStack_170 = puVar13;
            puStack_168 = unaff_x27;
            puStack_118 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&puStack_120);
LAB_10142e940:
            puStack_120 = (undefined8 *)0x8000000000000001;
            if (puVar12 != (undefined8 *)0x8000000000000000) {
              if ((puStack_150 != (undefined8 *)0x0) && ((long)puStack_150 * 9 != -0x11)) {
                _free(puStack_158 + (-1 - (long)puStack_150));
              }
              func_0x000100cd7284(&puStack_170);
            }
          }
LAB_10142e8a0:
          FUN_100d34830(&pbStack_1f0);
          if ((char)puStack_210 != '\x16') {
            FUN_100e077ec(&puStack_210);
          }
          goto LAB_10142e8bc;
        }
        if (bVar2 != 0xd) {
          if (bVar2 == 0xe) {
            if (((lStack_78 == 4) && ((char)*piStack_80 == 'c')) &&
               (*(char *)((long)piStack_80 + 1) == 'a')) {
              bVar6 = *(char *)((long)piStack_80 + 2) != 'l' ||
                      *(char *)((long)piStack_80 + 3) != 'l';
            }
            else {
              bVar6 = true;
            }
            if (piStack_88 != (int *)0x0) {
              _free();
            }
            goto joined_r0x00010142e570;
          }
          if (bVar2 == 0xf) {
            if (((piStack_80 == (int *)0x4) && ((char)*piStack_88 == 'c')) &&
               (*(char *)((long)piStack_88 + 1) == 'a')) {
              bVar6 = *(char *)((long)piStack_88 + 2) == 'l' &&
                      *(char *)((long)piStack_88 + 3) == 'l';
              goto LAB_10142e518;
            }
            goto LAB_10142e520;
          }
LAB_10142e980:
          puStack_170 = puVar13;
          puStack_168 = unaff_x27;
          puStack_118 = (undefined8 *)FUN_108855b04(&uStack_90,&puStack_120,&UNK_10b212580);
          puStack_120 = (undefined8 *)0x8000000000000001;
          if (puVar12 == (undefined8 *)0x8000000000000001) goto LAB_10142e8a0;
          goto LAB_10142e940;
        }
        if (piStack_80 == (int *)0x4) {
          bVar6 = *piStack_88 == 0x6c6c6163;
          goto LAB_10142e518;
        }
LAB_10142e520:
        bVar6 = true;
LAB_10142e524:
        FUN_100e077ec(&uStack_90);
joined_r0x00010142e570:
        if (!bVar6) goto LAB_10142e574;
LAB_10142e530:
        cVar4 = (char)puStack_210;
        puStack_210 = (undefined8 *)CONCAT71(puStack_210._1_7_,0x16);
        if (cVar4 == '\x16') {
          puStack_170 = puVar13;
          puStack_168 = unaff_x27;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10142e8f4);
          (*pcVar5)();
        }
        uVar17 = *puVar10;
        puVar8[1] = puVar10[1];
        *puVar8 = uVar17;
        uVar17 = *(undefined8 *)((long)puVar10 + 0xf);
        *(undefined8 *)((long)puVar8 + 0x17) = *(undefined8 *)((long)puVar10 + 0x17);
        *(undefined8 *)((long)puVar8 + 0xf) = uVar17;
        puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,cVar4);
        FUN_100e077ec(&puStack_120);
        pbVar14 = pbVar7;
        pbVar7 = pbVar15;
LAB_10142e3a0:
        pbVar16 = pbVar7;
        pbVar15 = pbVar7;
      } while (pbVar7 != pbVar14);
      puStack_168 = unaff_x27;
      if (puVar12 == (undefined8 *)0x8000000000000001) {
        puVar12 = (undefined8 *)0x8000000000000000;
      }
      else {
        puStack_c8 = puStack_160;
        puStack_b8 = puStack_150;
        puStack_c0 = puStack_158;
        puStack_a8 = puStack_140;
        puStack_b0 = puStack_148;
        puStack_98 = puStack_130;
        puStack_a0 = puStack_138;
        puStack_d0 = unaff_x27;
      }
    }
    puStack_e0 = puStack_98;
    puStack_e8 = puStack_a0;
    puStack_110 = puStack_c8;
    puStack_118 = puStack_d0;
    puStack_f0 = puStack_a8;
    puStack_f8 = puStack_b0;
    puStack_100 = puStack_b8;
    puStack_108 = puStack_c0;
    puStack_198 = puStack_b0;
    puStack_1a0 = puStack_b8;
    puStack_188 = puStack_a0;
    puStack_190 = puStack_a8;
    puStack_180 = puStack_98;
    puStack_1b8 = puStack_d0;
    puStack_1a8 = puStack_c0;
    puStack_1b0 = puStack_c8;
    puStack_1c0 = puVar12;
    puStack_120 = puVar12;
    FUN_100d34830(&pbStack_1f0);
    if (pbVar7 == pbVar15) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      puStack_170 = puStack_1d0;
      puVar13 = (undefined8 *)
                FUN_1087e422c((long)puStack_1d0 + ((ulong)((long)pbVar7 - (long)pbVar15) >> 6),
                              &puStack_170,&UNK_10b23a190);
    }
    if ((char)puStack_210 != '\x16') {
      FUN_100e077ec(&puStack_210);
    }
    if (puVar13 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x8000000000000001;
      puStack_120 = (undefined8 *)0x8000000000000001;
      puStack_118 = puVar13;
      if (puStack_1c0 != (undefined8 *)0x8000000000000000) {
        if ((puStack_1a0 != (undefined8 *)0x0) && ((long)puStack_1a0 * 9 != -0x11)) {
          _free(puStack_1a8 + (-1 - (long)puStack_1a0));
        }
        func_0x000100cd7284(&puStack_1c0);
      }
    }
joined_r0x00010142e8cc:
    if ((bVar3 & 0x1e) != 0x14) {
      FUN_100e077ec(param_2);
    }
  }
  if (puVar12 != (undefined8 *)0x8000000000000001) {
    param_1[5] = (long)puStack_f8;
    param_1[4] = (long)puStack_100;
    param_1[7] = (long)puStack_e8;
    param_1[6] = (long)puStack_f0;
    param_1[8] = (long)puStack_e0;
    param_1[1] = (long)puStack_118;
    *param_1 = (long)puStack_120;
    param_1[3] = (long)puStack_108;
    param_1[2] = (long)puStack_110;
    return;
  }
LAB_10142e848:
  *param_1 = -0x7ffffffffffffffe;
  param_1[1] = (long)puStack_118;
  return;
}

