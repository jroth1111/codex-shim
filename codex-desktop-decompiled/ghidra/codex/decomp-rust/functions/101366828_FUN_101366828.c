
/* WARNING: Type propagation algorithm not settling */

void FUN_101366828(undefined8 *param_1,ulong *******param_2)

{
  ulong ******ppppppuVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  byte bVar11;
  ulong ******ppppppuVar12;
  ulong ******ppppppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong ******ppppppuVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong ******ppppppuVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  ulong *******pppppppuVar25;
  ulong *******pppppppuVar26;
  ulong *******pppppppuVar27;
  long lVar28;
  long lVar29;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  ulong *******pppppppuStack_1d8;
  undefined1 uStack_1d0;
  ulong *******pppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  ulong *******pppppppuStack_190;
  ulong *******pppppppuStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  undefined8 uStack_150;
  ulong *******pppppppuStack_148;
  ulong *******pppppppuStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  undefined1 uStack_120;
  ulong *******pppppppuStack_118;
  ulong *******pppppppuStack_110;
  ulong *******pppppppuStack_108;
  ulong ******ppppppuStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  undefined8 uStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  ppppppuVar13 = param_2[5];
  if (ppppppuVar13 < param_2[4]) {
    do {
      bVar11 = *(byte *)((long)param_2[3] + (long)ppppppuVar13);
      if (0x20 < bVar11 || (1L << ((ulong)bVar11 & 0x3f) & 0x100002600U) == 0) {
        if (bVar11 != 0x5b) {
          pppppppuVar25 = (ulong *******)FUN_108831eec(param_2,auStack_71,&UNK_10b24ec38);
          goto LAB_101367924;
        }
        bVar11 = *(byte *)(param_2 + 7);
        *(byte *)(param_2 + 7) = bVar11 - 1;
        if ((byte)(bVar11 - 1) != 0) {
          pppppppuStack_1b8 = (ulong *******)0x0;
          param_2[5] = (ulong ******)((long)ppppppuVar13 + 1);
          pppppppuVar25 = (ulong *******)0x1;
          puVar21 = (undefined8 *)((ulong)&ppppppuStack_100 | 1);
          uStack_1d0 = 1;
          puVar18 = (undefined8 *)((ulong)&pppppppuStack_e0 | 1);
          pppppppuStack_1c8 = (ulong *******)0x0;
          pppppppuStack_1c0 = (ulong *******)0x8;
          puVar14 = (undefined8 *)((ulong)&uStack_150 | 1);
          puVar15 = (undefined8 *)((ulong)&uStack_c0 | 1);
          pppppppuStack_1d8 = param_2;
          goto LAB_101366930;
        }
        uStack_c0 = (ulong *******)0x18;
        goto LAB_101366898;
      }
      ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
      param_2[5] = ppppppuVar13;
    } while (param_2[4] != ppppppuVar13);
  }
  uStack_c0 = (ulong *******)0x5;
LAB_101366898:
  uVar5 = FUN_108831e2c(param_2,&uStack_c0);
  goto LAB_101367930;
LAB_101366930:
  FUN_1011de2a4(&uStack_c0,&pppppppuStack_1d8);
  pppppppuVar9 = pppppppuStack_1d8;
  pppppppuVar8 = pppppppuStack_b8;
  if ((byte)uStack_c0 == '\x01') goto LAB_101367768;
  pppppppuVar10 = pppppppuStack_1c8;
  pppppppuVar26 = pppppppuStack_1b8;
  pppppppuVar8 = pppppppuStack_1c0;
  if (uStack_c0._1_1_ != '\x01') goto LAB_1013677b0;
  ppppppuVar13 = pppppppuStack_1d8[4];
  if (ppppppuVar13 <= pppppppuStack_1d8[5]) {
LAB_101367750:
    uStack_c0 = (ulong *******)0x5;
    pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_1d8,&uStack_c0);
    goto LAB_101367768;
  }
  ppppppuVar16 = pppppppuStack_1d8[3];
  ppppppuVar12 = (ulong ******)((long)pppppppuStack_1d8[5] + 5);
  while (bVar11 = *(byte *)((long)ppppppuVar16 + (long)ppppppuVar12 + -5),
        bVar11 < 0x21 && (1L << ((ulong)bVar11 & 0x3f) & 0x100002600U) != 0) {
    pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -4);
    ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + 1);
    if ((long)ppppppuVar12 - (long)ppppppuVar13 == 5) goto LAB_101367750;
  }
  uVar20 = (uint)bVar11;
  if (bVar11 < 0x66) {
    if (bVar11 == 0x5b) {
      bVar11 = *(byte *)(pppppppuStack_1d8 + 7);
      *(byte *)(pppppppuStack_1d8 + 7) = bVar11 - 1;
      if ((byte)(bVar11 - 1) == 0) {
        uStack_c0 = (ulong *******)0x18;
        pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_1d8,&uStack_c0);
        goto LAB_101367768;
      }
      pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -4);
      pppppppuStack_118 = pppppppuStack_1d8;
      pppppppuStack_110 = (ulong *******)CONCAT71(pppppppuStack_110._1_7_,1);
      FUN_1011de2a4(&uStack_150,&pppppppuStack_118);
      pppppppuVar8 = pppppppuStack_118;
      if ((char)uStack_150 != '\x01') {
        if (uStack_150._1_1_ == '\x01') {
          ppppppuVar13 = pppppppuStack_118[5];
          if (ppppppuVar13 < pppppppuStack_118[4]) {
            do {
              bVar11 = *(byte *)((long)pppppppuStack_118[3] + (long)ppppppuVar13);
              if (0x22 < bVar11) {
LAB_1013676f4:
                uVar5 = FUN_108831eec(pppppppuStack_118,auStack_71,&UNK_10b24ecf8);
                pppppppuStack_148 = (ulong *******)FUN_108832dfc(uVar5,pppppppuVar8);
                goto LAB_101366d04;
              }
              if ((1L << ((ulong)bVar11 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar11 != 0x22) goto LAB_1013676f4;
                pppppppuStack_118[5] = (ulong ******)((long)ppppppuVar13 + 1);
                pppppppuStack_118[2] = (ulong ******)0x0;
                __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                          (&uStack_150,pppppppuStack_118 + 3,pppppppuStack_118);
                if (uStack_150 == (ulong *******)0x2) goto LAB_101366d04;
                if (pppppppuStack_140 == (ulong *******)0x2) {
                  pppppppuVar26 = (ulong *******)(ulong)(*(short *)pppppppuStack_148 != 0x7270);
                }
                else {
                  pppppppuVar26 = (ulong *******)0x1;
                }
                FUN_1013efb8c(&uStack_c0,pppppppuVar8,(ulong)pppppppuStack_110 & 0xff);
                if ((byte)uStack_c0 == '\x16') {
                  pppppppuVar26 = (ulong *******)0x2;
                  pppppppuStack_148 = pppppppuStack_b8;
                }
                else {
                  pppppppuStack_d8 = pppppppuStack_b0;
                  pppppppuStack_e0 = pppppppuStack_b8;
                  pppppppuStack_d0 = pppppppuStack_a8;
                  pppppppuStack_148 = uStack_c0;
                }
                goto LAB_101366d08;
              }
              ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
              pppppppuStack_118[5] = ppppppuVar13;
            } while (pppppppuStack_118[4] != ppppppuVar13);
          }
          uStack_150 = (ulong *******)0x5;
          pppppppuStack_148 = (ulong *******)FUN_108831e2c(pppppppuStack_118,&uStack_150);
        }
        else {
          ppppppuStack_100 = (ulong ******)&UNK_108cde34c;
          pppppppuStack_f8 = (ulong *******)0x4;
          uStack_150 = &ppppppuStack_100;
          pppppppuStack_148 = (ulong *******)&DAT_100c7b3a0;
          pppppppuStack_148 =
               (ulong *******)FUN_108856088(s_missing_field_____108ac28f7,&uStack_150);
        }
      }
LAB_101366d04:
      pppppppuVar26 = (ulong *******)0x2;
LAB_101366d08:
      *(byte *)(pppppppuVar9 + 7) = *(byte *)(pppppppuVar9 + 7) + 1;
      uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,(char)pppppppuVar26);
      pppppppuStack_138 = pppppppuStack_d8;
      pppppppuStack_140 = pppppppuStack_e0;
      pppppppuStack_130 = pppppppuStack_d0;
      pppppppuVar6 = (ulong *******)FUN_100654840(pppppppuVar9);
      pppppppuVar10 = pppppppuStack_148;
      pppppppuStack_b8 = pppppppuStack_148;
      uStack_c0 = uStack_150;
      pppppppuVar8 = uStack_c0;
      pppppppuStack_a8 = pppppppuStack_138;
      pppppppuStack_b0 = pppppppuStack_140;
      pppppppuStack_a0 = pppppppuStack_130;
      uStack_c0._0_1_ = (byte)uStack_150;
      uStack_c0 = pppppppuVar8;
      pppppppuStack_98 = pppppppuVar6;
      if ((byte)uStack_c0 == 2) {
        if (pppppppuVar6 != (ulong *******)0x0) {
          ppppppuVar13 = *pppppppuVar6;
          if (ppppppuVar13 != (ulong ******)0x1) goto LAB_101366e1c;
          FUN_100de21d4(pppppppuVar6 + 1);
          goto LAB_101366ec0;
        }
        goto LAB_101366ec8;
      }
      if (pppppppuVar6 != (ulong *******)0x0) {
        FUN_100e077ec(&pppppppuStack_b8);
        goto LAB_101366e44;
      }
LAB_101366e50:
      pppppppuStack_188 = pppppppuStack_138;
      pppppppuStack_190 = pppppppuStack_140;
      pppppppuStack_180 = pppppppuStack_130;
      pppppppuVar10 = pppppppuStack_148;
      uStack_c0 = uStack_150;
      pppppppuStack_b8 = pppppppuStack_148;
      pppppppuStack_b0 = pppppppuStack_140;
      pppppppuStack_a8 = pppppppuStack_138;
      pppppppuStack_a0 = pppppppuStack_130;
      bVar11 = (byte)uStack_c0;
LAB_101366ecc:
      pppppppuVar6 = pppppppuStack_188;
      pppppppuVar23 = pppppppuStack_190;
      if (bVar11 == 2) goto LAB_101367d78;
      pppppppuStack_1a0 = pppppppuStack_188;
      pppppppuStack_1a8 = pppppppuStack_190;
      pppppppuStack_198 = pppppppuStack_180;
      pppppppuStack_1b0 = pppppppuVar10;
      if ((bVar11 & 1) == 0) {
        uVar20 = (uint)pppppppuVar10 & 0xff;
        if (uVar20 == 0x14) {
          pppppppuVar9 = pppppppuStack_188 + (long)pppppppuStack_180 * 4;
          uStack_c0 = pppppppuStack_188;
          pppppppuStack_b0 = pppppppuStack_190;
          pppppppuStack_a0 = (ulong *******)0x0;
          pppppppuVar24 = pppppppuStack_188;
          pppppppuStack_a8 = pppppppuVar9;
          if (pppppppuStack_180 == (ulong *******)0x0) {
LAB_1013672e4:
            pppppppuStack_b8 = pppppppuVar24;
            pppppppuVar7 = (ulong *******)FUN_1087e422c(0,&UNK_10b22c938,&UNK_10b20a590);
LAB_101367300:
            lVar17 = ((ulong)((long)pppppppuVar9 - (long)pppppppuVar24) >> 5) + 1;
            while (lVar17 = lVar17 + -1, pppppppuVar8 = pppppppuVar6, pppppppuVar27 = pppppppuVar23,
                  lVar17 != 0) {
              FUN_100e077ec(pppppppuVar24);
              pppppppuVar24 = pppppppuVar24 + 4;
            }
joined_r0x00010136732c:
            pppppppuVar9 = pppppppuStack_208;
            if (pppppppuVar27 != (ulong *******)0x0) goto LAB_101367344;
          }
          else {
            pppppppuVar24 = pppppppuStack_188 + 4;
            bVar11 = *(byte *)pppppppuStack_188;
            if (bVar11 == 0x16) goto LAB_1013672e4;
            uVar5 = *(undefined8 *)((long)pppppppuStack_188 + 1);
            puVar14[1] = *(undefined8 *)((long)pppppppuStack_188 + 9);
            *puVar14 = uVar5;
            ppppppuVar13 = pppppppuStack_188[2];
            *(ulong *******)((long)puVar14 + 0x17) = pppppppuStack_188[3];
            *(ulong *******)((long)puVar14 + 0xf) = ppppppuVar13;
            pppppppuStack_a0 = (ulong *******)0x1;
            uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,bVar11);
            pppppppuStack_b8 = pppppppuVar24;
            func_0x0001012913a0(&pppppppuStack_e0,&uStack_150);
            pppppppuVar26 = pppppppuStack_d0;
            pppppppuVar8 = pppppppuStack_d8;
            pppppppuVar27 = pppppppuStack_e0;
            pppppppuVar7 = pppppppuStack_d8;
            if (pppppppuStack_e0 == (ulong *******)0x8000000000000000) goto LAB_101367300;
            pppppppuVar9 = pppppppuStack_d0;
            pppppppuVar7 = (ulong *******)FUN_100fbc738(&uStack_c0);
            if (pppppppuVar7 == (ulong *******)0x0) goto joined_r0x000101367384;
            if (pppppppuVar27 == (ulong *******)0x0) {
              pppppppuVar27 = (ulong *******)0x8000000000000000;
              pppppppuVar8 = pppppppuVar7;
              goto joined_r0x000101367384;
            }
LAB_101367344:
            pppppppuStack_208 = pppppppuVar9;
            _free(pppppppuVar8);
            pppppppuVar6 = pppppppuStack_208;
          }
          pppppppuVar27 = (ulong *******)0x8000000000000000;
          pppppppuVar8 = pppppppuVar7;
          pppppppuVar26 = pppppppuVar6;
        }
        else {
          if (uVar20 != 0x15) {
            pppppppuVar8 = (ulong *******)
                           FUN_108855b04(&pppppppuStack_1b0,auStack_71,&UNK_10b20b6a0);
            goto LAB_101367768;
          }
          lVar17 = (long)pppppppuStack_180 * 0x40;
          pppppppuVar8 = pppppppuStack_188 + (long)pppppppuStack_180 * 8;
          pppppppuStack_a0 = pppppppuStack_188;
          pppppppuStack_98 = pppppppuStack_188;
          pppppppuStack_90 = pppppppuStack_190;
          uStack_c0 = (ulong *******)CONCAT71(uStack_c0._1_7_,0x16);
          lStack_80 = 0;
          pppppppuStack_88 = pppppppuVar8;
          if (pppppppuStack_180 != (ulong *******)0x0) {
            lVar28 = 0;
            pppppppuVar27 = (ulong *******)0x8000000000000000;
            pppppppuVar26 = pppppppuStack_188;
            do {
              pppppppuVar9 = uStack_150;
              pppppppuVar23 = pppppppuVar26 + 8;
              bVar11 = *(byte *)pppppppuVar26;
              pppppppuVar6 = pppppppuVar23;
              lVar29 = lVar28;
              if (bVar11 == 0x16) break;
              uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,bVar11);
              pppppppuVar6 = uStack_150;
              ppppppuVar13 = pppppppuVar26[2];
              *(ulong *******)((long)puVar14 + 0x17) = pppppppuVar26[3];
              *(ulong *******)((long)puVar14 + 0xf) = ppppppuVar13;
              uVar5 = *(undefined8 *)((long)pppppppuVar26 + 1);
              puVar14[1] = *(undefined8 *)((long)pppppppuVar26 + 9);
              *puVar14 = uVar5;
              pppppppuStack_b8 = (ulong *******)pppppppuVar26[5];
              uStack_c0 = (ulong *******)pppppppuVar26[4];
              pppppppuStack_a8 = (ulong *******)pppppppuVar26[7];
              pppppppuStack_b0 = (ulong *******)pppppppuVar26[6];
              if (bVar11 < 0xd) {
                if (bVar11 != 1) {
                  if (bVar11 == 4) {
                    bVar4 = pppppppuStack_148 == (ulong *******)0x0;
                    goto LAB_1013671dc;
                  }
                  if (bVar11 == 0xc) {
                    if (pppppppuStack_138 == (ulong *******)0xb) {
                      ppppppuVar13 = *pppppppuStack_140;
                      uVar19 = *(ulong *)((long)pppppppuStack_140 + 3) ^ 0x666669645f747570;
                      bVar4 = ((ulong)ppppppuVar13 ^ 0x645f74757074756f) != 0 || uVar19 != 0;
                      if (pppppppuStack_148 == (ulong *******)0x0) goto LAB_1013671f0;
                      _free();
                      if (((ulong)ppppppuVar13 ^ 0x645f74757074756f) == 0 && uVar19 == 0)
                      goto LAB_10136723c;
                    }
                    else if (pppppppuStack_148 != (ulong *******)0x0) {
                      _free();
                    }
                    goto LAB_1013671f4;
                  }
LAB_1013676bc:
                  lStack_80 = lVar28 + 1;
                  pppppppuStack_98 = pppppppuVar23;
                  pppppppuVar8 = (ulong *******)FUN_108855b04(&uStack_150,auStack_71,&UNK_10b210c00)
                  ;
                  pppppppuVar27 = (ulong *******)((ulong)pppppppuVar27 & 0x7fffffffffffffff);
                  goto joined_r0x0001013676ec;
                }
                uStack_150._1_1_ = SUB81(pppppppuVar9,1);
                bVar4 = uStack_150._1_1_ == '\0';
LAB_1013671dc:
                bVar4 = !bVar4;
LAB_1013671e8:
                uStack_150 = pppppppuVar6;
                FUN_100e077ec(&uStack_150);
LAB_1013671f0:
                if (!bVar4) goto LAB_10136723c;
LAB_1013671f4:
                cVar2 = (byte)uStack_c0;
                uStack_c0 = (ulong *******)CONCAT71(uStack_c0._1_7_,0x16);
                if (cVar2 == '\x16') {
                  lStack_80 = lVar28 + 1;
                  pppppppuStack_98 = pppppppuVar23;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_101367dd8;
                }
                uVar5 = *puVar15;
                puVar14[1] = puVar15[1];
                *puVar14 = uVar5;
                uVar5 = *(undefined8 *)((long)puVar15 + 0xf);
                *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
                *(undefined8 *)((long)puVar14 + 0xf) = uVar5;
                uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,cVar2);
                FUN_100e077ec(&uStack_150);
              }
              else {
                if (bVar11 == 0xd) {
                  if (pppppppuStack_140 == (ulong *******)0xb) {
                    bVar4 = false;
                    if (*pppppppuStack_148 == (ulong ******)0x645f74757074756f) {
                      bVar4 = *(long *)((long)pppppppuStack_148 + 3) == 0x666669645f747570;
                    }
                    goto LAB_1013671dc;
                  }
LAB_1013671e4:
                  bVar4 = true;
                  goto LAB_1013671e8;
                }
                if (bVar11 != 0xe) {
                  if (bVar11 != 0xf) goto LAB_1013676bc;
                  if ((((((pppppppuStack_140 != (ulong *******)0xb) ||
                         (*(byte *)pppppppuStack_148 != 0x6f)) ||
                        (*(byte *)((long)pppppppuStack_148 + 1) != 0x75)) ||
                       ((*(byte *)((long)pppppppuStack_148 + 2) != 0x74 ||
                        (*(byte *)((long)pppppppuStack_148 + 3) != 0x70)))) ||
                      (((*(byte *)((long)pppppppuStack_148 + 4) != 0x75 ||
                        ((*(byte *)((long)pppppppuStack_148 + 5) != 0x74 ||
                         (*(byte *)((long)pppppppuStack_148 + 6) != 0x5f)))) ||
                       (*(byte *)((long)pppppppuStack_148 + 7) != 100)))) ||
                     (*(byte *)(pppppppuStack_148 + 1) != 0x69)) goto LAB_1013671e4;
                  bVar4 = *(byte *)((long)pppppppuStack_148 + 9) == 0x66 &&
                          *(byte *)((long)pppppppuStack_148 + 10) == 0x66;
                  goto LAB_1013671dc;
                }
                if (((((pppppppuStack_138 == (ulong *******)0xb) &&
                      (*(byte *)pppppppuStack_140 == 0x6f)) &&
                     (*(byte *)((long)pppppppuStack_140 + 1) == 0x75)) &&
                    (((*(byte *)((long)pppppppuStack_140 + 2) == 0x74 &&
                      (*(byte *)((long)pppppppuStack_140 + 3) == 0x70)) &&
                     ((*(byte *)((long)pppppppuStack_140 + 4) == 0x75 &&
                      ((*(byte *)((long)pppppppuStack_140 + 5) == 0x74 &&
                       (*(byte *)((long)pppppppuStack_140 + 6) == 0x5f)))))))) &&
                   ((*(byte *)((long)pppppppuStack_140 + 7) == 100 &&
                    (*(byte *)(pppppppuStack_140 + 1) == 0x69)))) {
                  bVar4 = *(byte *)((long)pppppppuStack_140 + 9) != 0x66 ||
                          *(byte *)((long)pppppppuStack_140 + 10) != 0x66;
                }
                else {
                  bVar4 = true;
                }
                if (pppppppuStack_148 == (ulong *******)0x0) goto LAB_1013671f0;
                _free();
                if (bVar4) goto LAB_1013671f4;
LAB_10136723c:
                if (pppppppuVar27 != (ulong *******)0x8000000000000000) {
                  lStack_80 = lVar28 + 1;
                  pppppppuStack_e0 = (ulong *******)&UNK_108cad126;
                  pppppppuStack_d8 = (ulong *******)0xb;
                  uStack_150 = (ulong *******)&pppppppuStack_e0;
                  pppppppuStack_148 = (ulong *******)&DAT_100c7b3a0;
                  pppppppuStack_98 = pppppppuVar23;
                  pppppppuVar8 = (ulong *******)
                                 FUN_108856088(s_duplicate_field_____108ac2973,&uStack_150);
joined_r0x0001013676ec:
                  pppppppuVar26 = pppppppuStack_210;
                  if (pppppppuVar27 != (ulong *******)0x0) {
                    _free(pppppppuStack_210);
                  }
                  goto LAB_10136745c;
                }
                cVar2 = (byte)uStack_c0;
                uStack_c0 = (ulong *******)CONCAT71(uStack_c0._1_7_,0x16);
                if (cVar2 == '\x16') {
                  lStack_80 = lVar28 + 1;
                  pppppppuStack_98 = pppppppuVar23;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101367dd8:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101367ddc);
                  (*pcVar3)();
                }
                uVar5 = *puVar15;
                puVar14[1] = puVar15[1];
                *puVar14 = uVar5;
                uVar5 = *(undefined8 *)((long)puVar15 + 0xf);
                *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
                *(undefined8 *)((long)puVar14 + 0xf) = uVar5;
                uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,cVar2);
                func_0x0001012913a0(&pppppppuStack_e0,&uStack_150);
                pppppppuStack_210 = pppppppuStack_d8;
                if (pppppppuStack_e0 == (ulong *******)0x8000000000000000) {
                  lStack_80 = lVar28 + 1;
                  pppppppuVar8 = pppppppuStack_d8;
                  pppppppuStack_98 = pppppppuVar23;
                  goto LAB_10136745c;
                }
                pppppppuStack_208 = pppppppuStack_d0;
                pppppppuVar27 = pppppppuStack_e0;
              }
              lVar28 = lVar28 + 1;
              pppppppuVar6 = pppppppuVar8;
              lVar29 = (lVar17 - 0x40U >> 6) + 1;
              pppppppuVar26 = pppppppuVar23;
            } while (pppppppuVar23 != pppppppuVar8);
            pppppppuVar26 = pppppppuStack_210;
            pppppppuStack_98 = pppppppuVar6;
            lStack_80 = lVar29;
            if (pppppppuVar27 == (ulong *******)0x8000000000000000) goto LAB_101367420;
            pppppppuVar7 = (ulong *******)FUN_100fbc67c(&uStack_c0);
            pppppppuVar8 = pppppppuStack_210;
            pppppppuVar26 = pppppppuStack_208;
            pppppppuVar6 = pppppppuStack_208;
            if (pppppppuVar7 == (ulong *******)0x0) goto joined_r0x000101367384;
            goto joined_r0x00010136732c;
          }
LAB_101367420:
          pppppppuStack_e0 = (ulong *******)&UNK_108cad126;
          pppppppuStack_d8 = (ulong *******)0xb;
          uStack_150 = (ulong *******)&pppppppuStack_e0;
          pppppppuStack_148 = (ulong *******)&DAT_100c7b3a0;
          pppppppuVar8 = (ulong *******)FUN_108856088(s_missing_field_____108ac28f7,&uStack_150);
LAB_10136745c:
          FUN_100d34830(&pppppppuStack_a0);
          if ((byte)uStack_c0 != '\x16') {
            FUN_100e077ec(&uStack_c0);
          }
          pppppppuVar27 = (ulong *******)0x8000000000000000;
        }
joined_r0x000101367384:
        if (((uint)pppppppuVar10 & 0x1e) != 0x14) {
          FUN_100e077ec(&pppppppuStack_1b0);
        }
        if (pppppppuVar27 == (ulong *******)0x8000000000000000) goto LAB_101367768;
      }
      else {
        uStack_c0 = (ulong *******)&UNK_108cad131;
        pppppppuStack_b8 = (ulong *******)0xa;
        pppppppuStack_b0 = (ulong *******)&UNK_108ca11fb;
        pppppppuStack_a8 = (ulong *******)0x5;
        pppppppuVar8 = (ulong *******)FUN_100490e6c(&pppppppuStack_1b0,&uStack_c0);
        if (pppppppuVar8 != (ulong *******)0x0) goto LAB_101367768;
        pppppppuVar27 = (ulong *******)0x8000000000000000;
        pppppppuVar8 = (ulong *******)0x0;
      }
      pppppppuVar9 = pppppppuStack_1b8;
      if (pppppppuStack_1b8 == pppppppuStack_1c8) {
        func_0x0001088ed264(&pppppppuStack_1c8);
      }
      pppppppuVar10 = pppppppuStack_1c0 + (long)pppppppuVar9 * 3;
      *pppppppuVar10 = (ulong ******)pppppppuVar27;
      pppppppuVar10[1] = (ulong ******)pppppppuVar8;
      pppppppuVar10[2] = (ulong ******)pppppppuVar26;
      pppppppuStack_1b8 = (ulong *******)((long)pppppppuVar9 + 1);
      goto LAB_101366930;
    }
    if (bVar11 == 0x22) {
      pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -4);
      pppppppuStack_1d8[2] = (ulong ******)0x0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&pppppppuStack_e0,pppppppuStack_1d8 + 3,pppppppuStack_1d8);
      pppppppuVar8 = pppppppuStack_d8;
      if (pppppppuStack_e0 != (ulong *******)0x2) {
        if (((ulong)pppppppuStack_e0 & 1) == 0) {
          uStack_c0 = (ulong *******)&UNK_108cde34c;
          pppppppuStack_b8 = (ulong *******)0x4;
          pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
          pppppppuStack_a8 = (ulong *******)0x21;
          pppppppuStack_148 = pppppppuStack_d8;
          pppppppuStack_140 = pppppppuStack_d0;
          uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,5);
          pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
        }
        else {
          uStack_c0 = (ulong *******)&UNK_108cde34c;
          pppppppuStack_b8 = (ulong *******)0x4;
          pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
          pppppppuStack_a8 = (ulong *******)0x21;
          pppppppuStack_148 = pppppppuStack_d8;
          pppppppuStack_140 = pppppppuStack_d0;
          uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,5);
          pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
        }
        goto LAB_101367d78;
      }
      goto LAB_101367768;
    }
    if (uVar20 != 0x2d) goto LAB_101367a28;
    pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -4);
    FUN_100652540(&pppppppuStack_e0,pppppppuStack_1d8,0);
    pppppppuVar8 = pppppppuStack_d8;
    if (pppppppuStack_e0 == (ulong *******)0x3) goto LAB_101367768;
    uStack_c0 = (ulong *******)&UNK_108cde34c;
    pppppppuStack_b8 = (ulong *******)0x4;
    pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
    pppppppuStack_a8 = (ulong *******)0x21;
    if (pppppppuStack_e0 == (ulong *******)0x0) {
      pppppppuStack_148 = pppppppuStack_d8;
      uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,3);
      pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
    }
    else if (pppppppuStack_e0 == (ulong *******)0x1) {
      pppppppuStack_148 = pppppppuStack_d8;
      uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,1);
      pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
    }
    else {
      pppppppuStack_148 = pppppppuStack_d8;
      uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,2);
      pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
    }
  }
  else {
    if (bVar11 < 0x7b) {
      if (uVar20 == 0x66) {
        ppppppuVar22 = (ulong ******)((long)ppppppuVar12 + -4);
        pppppppuStack_1d8[5] = ppppppuVar22;
        ppppppuVar1 = ppppppuVar22;
        if (ppppppuVar22 <= ppppppuVar13) {
          ppppppuVar1 = ppppppuVar13;
        }
        if (ppppppuVar22 < ppppppuVar13) {
          cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -4);
          pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 3U);
          if (cVar2 == 'a') {
            if ((ulong ******)((long)ppppppuVar12 - 3U) == ppppppuVar1) goto LAB_101367acc;
            cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -3);
            pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 2U);
            if (cVar2 == 'l') {
              if ((ulong ******)((long)ppppppuVar12 - 2U) == ppppppuVar1) goto LAB_101367acc;
              cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -2);
              pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 1U);
              if (cVar2 == 's') {
                if ((ulong ******)((long)ppppppuVar12 - 1U) == ppppppuVar1) goto LAB_101367acc;
                cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -1);
                pppppppuStack_1d8[5] = ppppppuVar12;
                if (cVar2 == 'e') {
                  uStack_c0 = (ulong *******)&UNK_108cde34c;
                  pppppppuStack_b8 = (ulong *******)0x4;
                  pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
                  pppppppuStack_a8 = (ulong *******)0x21;
                  uStack_150 = (ulong *******)((ulong)uStack_150._2_6_ << 0x10);
                  pppppppuVar10 =
                       (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
                  goto LAB_101367d78;
                }
              }
            }
          }
          uStack_c0 = (ulong *******)0x9;
          pppppppuVar8 = (ulong *******)FUN_108832904(pppppppuStack_1d8,&uStack_c0);
        }
        else {
LAB_101367acc:
          uStack_c0 = (ulong *******)0x5;
          pppppppuVar8 = (ulong *******)FUN_108832904(pppppppuStack_1d8,&uStack_c0);
        }
      }
      else if (uVar20 == 0x6e) {
        ppppppuVar22 = (ulong ******)((long)ppppppuVar12 + -4);
        pppppppuStack_1d8[5] = ppppppuVar22;
        ppppppuVar1 = ppppppuVar22;
        if (ppppppuVar22 <= ppppppuVar13) {
          ppppppuVar1 = ppppppuVar13;
        }
        if (ppppppuVar22 < ppppppuVar13) {
          cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -4);
          pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 3U);
          if (cVar2 == 'u') {
            if ((ulong ******)((long)ppppppuVar12 - 3U) == ppppppuVar1) goto LAB_101367b38;
            cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -3);
            pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 2U);
            if (cVar2 == 'l') {
              if ((ulong ******)((long)ppppppuVar12 - 2U) == ppppppuVar1) goto LAB_101367b38;
              cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -2);
              pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -1);
              if (cVar2 == 'l') {
                uStack_c0 = (ulong *******)&UNK_108cde34c;
                pppppppuStack_b8 = (ulong *******)0x4;
                pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
                pppppppuStack_a8 = (ulong *******)0x21;
                uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,7);
                pppppppuVar10 =
                     (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
                goto LAB_101367d78;
              }
            }
          }
          uStack_c0 = (ulong *******)0x9;
          pppppppuVar8 = (ulong *******)FUN_108832904(pppppppuStack_1d8,&uStack_c0);
        }
        else {
LAB_101367b38:
          uStack_c0 = (ulong *******)0x5;
          pppppppuVar8 = (ulong *******)FUN_108832904(pppppppuStack_1d8,&uStack_c0);
        }
      }
      else {
        if (uVar20 != 0x74) goto LAB_101367a28;
        ppppppuVar22 = (ulong ******)((long)ppppppuVar12 + -4);
        pppppppuStack_1d8[5] = ppppppuVar22;
        ppppppuVar1 = ppppppuVar22;
        if (ppppppuVar22 <= ppppppuVar13) {
          ppppppuVar1 = ppppppuVar13;
        }
        if (ppppppuVar22 < ppppppuVar13) {
          cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -4);
          pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 3U);
          if (cVar2 == 'r') {
            if ((ulong ******)((long)ppppppuVar12 - 3U) == ppppppuVar1) goto LAB_1013678fc;
            cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -3);
            pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 - 2U);
            if (cVar2 == 'u') {
              if ((ulong ******)((long)ppppppuVar12 - 2U) == ppppppuVar1) goto LAB_1013678fc;
              cVar2 = *(char *)((long)ppppppuVar16 + (long)ppppppuVar12 + -2);
              pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -1);
              if (cVar2 == 'e') {
                uStack_c0 = (ulong *******)&UNK_108cde34c;
                pppppppuStack_b8 = (ulong *******)0x4;
                pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
                pppppppuStack_a8 = (ulong *******)0x21;
                uStack_150 = (ulong *******)CONCAT62(uStack_150._2_6_,0x100);
                pppppppuVar10 =
                     (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
                goto LAB_101367d78;
              }
            }
          }
          uStack_c0 = (ulong *******)0x9;
          pppppppuVar8 = (ulong *******)FUN_108832904(pppppppuStack_1d8,&uStack_c0);
        }
        else {
LAB_1013678fc:
          uStack_c0 = (ulong *******)0x5;
          pppppppuVar8 = (ulong *******)FUN_108832904(pppppppuStack_1d8,&uStack_c0);
        }
      }
      goto LAB_101367768;
    }
    if (uVar20 == 0x7b) {
      bVar11 = *(byte *)(pppppppuStack_1d8 + 7);
      *(byte *)(pppppppuStack_1d8 + 7) = bVar11 - 1;
      if ((byte)(bVar11 - 1) != 0) {
        pppppppuStack_1d8[5] = (ulong ******)((long)ppppppuVar12 + -4);
        pppppppuStack_128 = pppppppuStack_1d8;
        uStack_120 = 1;
        pppppppuStack_118 = (ulong *******)0x0;
        pppppppuStack_110 = (ulong *******)0x8;
        pppppppuVar26 = (ulong *******)0x2;
        pppppppuStack_108 = (ulong *******)0x0;
LAB_101366a30:
        while( true ) {
          FUN_1011dde1c(&ppppppuStack_100,&pppppppuStack_128);
          pppppppuVar8 = pppppppuStack_128;
          if ((char)ppppppuStack_100 != '\x16') break;
          if ((int)pppppppuVar26 != 2) {
            uStack_150 = (ulong *******)&UNK_108cde34c;
            pppppppuStack_148 = (ulong *******)0x4;
            uStack_c0 = (ulong *******)&uStack_150;
            pppppppuStack_b8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuVar8 = (ulong *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
            goto LAB_101366da8;
          }
          ppppppuVar12 = pppppppuStack_128[4];
          ppppppuVar13 = pppppppuStack_128[5];
          if (ppppppuVar12 <= ppppppuVar13) {
LAB_101366cc0:
            uStack_c0 = (ulong *******)0x3;
            pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_128,&uStack_c0);
            goto LAB_101366da8;
          }
          while( true ) {
            bVar11 = *(byte *)((long)pppppppuStack_128[3] + (long)ppppppuVar13);
            if (0x3a < bVar11) goto LAB_101367680;
            if ((1L << ((ulong)bVar11 & 0x3f) & 0x100002600U) == 0) break;
            ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
            pppppppuStack_128[5] = ppppppuVar13;
            if (ppppppuVar12 == ppppppuVar13) goto LAB_101366cc0;
          }
          if ((ulong)bVar11 != 0x3a) {
LAB_101367680:
            uStack_c0 = (ulong *******)0x6;
            pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_128,&uStack_c0);
            goto LAB_101366da8;
          }
          ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
          pppppppuStack_128[5] = ppppppuVar13;
          if (ppppppuVar12 <= ppppppuVar13) {
LAB_101366d90:
            uStack_c0 = (ulong *******)0x5;
            pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_128,&uStack_c0);
            goto LAB_101366da8;
          }
          while( true ) {
            bVar11 = *(byte *)((long)pppppppuStack_128[3] + (long)ppppppuVar13);
            if (0x22 < bVar11) goto LAB_101367698;
            if ((1L << ((ulong)bVar11 & 0x3f) & 0x100002600U) == 0) break;
            ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
            pppppppuStack_128[5] = ppppppuVar13;
            if (ppppppuVar12 == ppppppuVar13) goto LAB_101366d90;
          }
          if ((ulong)bVar11 != 0x22) {
LAB_101367698:
            uVar5 = FUN_108831eec(pppppppuStack_128,auStack_71,&UNK_10b24ecf8);
            pppppppuVar8 = (ulong *******)FUN_108832dfc(uVar5,pppppppuVar8);
            goto LAB_101366da8;
          }
          pppppppuStack_128[5] = (ulong ******)((long)ppppppuVar13 + 1);
          pppppppuStack_128[2] = (ulong ******)0x0;
          __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                    (&uStack_c0);
          pppppppuVar8 = pppppppuStack_b8;
          if (uStack_c0 == (ulong *******)0x2) goto LAB_101366da8;
          if (pppppppuStack_b0 == (ulong *******)0x2) {
            pppppppuVar26 = (ulong *******)(ulong)(*(short *)pppppppuStack_b8 != 0x7270);
          }
          else {
            pppppppuVar26 = (ulong *******)0x1;
          }
        }
        if ((char)ppppppuStack_100 == '\x17') {
          if ((int)pppppppuVar26 != 2) {
            pppppppuStack_168 = pppppppuStack_110;
            pppppppuStack_170 = pppppppuStack_118;
            pppppppuStack_160 = pppppppuStack_108;
            pppppppuVar8 = (ulong *******)0x15;
            goto LAB_101366db4;
          }
          uStack_150 = (ulong *******)&UNK_108cde34c;
          pppppppuStack_148 = (ulong *******)0x4;
          uStack_c0 = (ulong *******)&uStack_150;
          pppppppuStack_b8 = (ulong *******)&DAT_100c7b3a0;
          pppppppuVar8 = (ulong *******)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
          FUN_100d03040(&pppppppuStack_118);
          goto LAB_101366db0;
        }
        pppppppuVar8 = pppppppuStack_f8;
        if ((char)ppppppuStack_100 == '\x18') goto LAB_101366da8;
        pppppppuStack_e0 = (ulong *******)CONCAT71(pppppppuStack_e0._1_7_,(char)ppppppuStack_100);
        uVar5 = *puVar21;
        puVar18[1] = puVar21[1];
        *puVar18 = uVar5;
        uVar5 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar5;
        ppppppuVar13 = pppppppuStack_128[5];
        if (ppppppuVar13 < pppppppuStack_128[4]) {
          while( true ) {
            bVar11 = *(byte *)((long)pppppppuStack_128[3] + (long)ppppppuVar13);
            if (0x3a < bVar11) goto LAB_101367668;
            if ((1L << ((ulong)bVar11 & 0x3f) & 0x100002600U) == 0) break;
            ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
            pppppppuStack_128[5] = ppppppuVar13;
            if (pppppppuStack_128[4] == ppppppuVar13) goto LAB_101366c9c;
          }
          if ((ulong)bVar11 != 0x3a) {
LAB_101367668:
            uStack_c0 = (ulong *******)0x6;
            pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_128,&uStack_c0);
            goto LAB_101366cb4;
          }
          pppppppuStack_128[5] = (ulong ******)((long)ppppppuVar13 + 1);
          FUN_101604bc0(&uStack_150);
          pppppppuVar10 = pppppppuStack_108;
          pppppppuVar8 = pppppppuStack_148;
          if ((char)uStack_150 == '\x16') goto LAB_101366cb4;
          pppppppuStack_98 = pppppppuStack_148;
          pppppppuStack_a0 = uStack_150;
          pppppppuStack_88 = pppppppuStack_138;
          pppppppuStack_90 = pppppppuStack_140;
          pppppppuStack_b8 = pppppppuStack_d8;
          uStack_c0 = pppppppuStack_e0;
          pppppppuStack_a8 = pppppppuStack_c8;
          pppppppuStack_b0 = pppppppuStack_d0;
          if (pppppppuStack_108 == pppppppuStack_118) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&pppppppuStack_118)
            ;
          }
          pppppppuVar8 = pppppppuStack_110 + (long)pppppppuVar10 * 8;
          pppppppuVar8[1] = (ulong ******)pppppppuStack_b8;
          *pppppppuVar8 = (ulong ******)uStack_c0;
          pppppppuVar8[3] = (ulong ******)pppppppuStack_a8;
          pppppppuVar8[2] = (ulong ******)pppppppuStack_b0;
          pppppppuVar8[5] = (ulong ******)pppppppuStack_98;
          pppppppuVar8[4] = (ulong ******)pppppppuStack_a0;
          pppppppuVar8[7] = (ulong ******)pppppppuStack_88;
          pppppppuVar8[6] = (ulong ******)pppppppuStack_90;
          pppppppuStack_108 = (ulong *******)((long)pppppppuVar10 + 1);
          goto LAB_101366a30;
        }
LAB_101366c9c:
        uStack_c0 = (ulong *******)0x3;
        pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_128,&uStack_c0);
LAB_101366cb4:
        FUN_100e077ec(&pppppppuStack_e0);
LAB_101366da8:
        FUN_100d03040(&pppppppuStack_118);
LAB_101366db0:
        pppppppuVar26 = (ulong *******)0x2;
LAB_101366db4:
        *(byte *)(pppppppuVar9 + 7) = *(byte *)(pppppppuVar9 + 7) + 1;
        uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,(char)pppppppuVar26);
        pppppppuStack_138 = pppppppuStack_168;
        pppppppuStack_140 = pppppppuStack_170;
        pppppppuStack_130 = pppppppuStack_160;
        pppppppuStack_148 = pppppppuVar8;
        pppppppuVar6 = (ulong *******)FUN_1006546a8(pppppppuVar9);
        pppppppuVar10 = pppppppuStack_148;
        pppppppuStack_b8 = pppppppuStack_148;
        uStack_c0 = uStack_150;
        pppppppuVar8 = uStack_c0;
        pppppppuStack_a8 = pppppppuStack_138;
        pppppppuStack_b0 = pppppppuStack_140;
        pppppppuStack_a0 = pppppppuStack_130;
        uStack_c0._0_1_ = (byte)uStack_150;
        uStack_c0 = pppppppuVar8;
        pppppppuStack_98 = pppppppuVar6;
        if ((byte)uStack_c0 == 2) {
          if (pppppppuVar6 != (ulong *******)0x0) {
            ppppppuVar13 = *pppppppuVar6;
            if (ppppppuVar13 == (ulong ******)0x1) {
              FUN_100de21d4(pppppppuVar6 + 1);
            }
            else {
LAB_101366e1c:
              pppppppuVar10 = pppppppuStack_148;
              uStack_c0 = uStack_150;
              pppppppuStack_b8 = pppppppuStack_148;
              pppppppuStack_b0 = pppppppuStack_140;
              pppppppuStack_a8 = pppppppuStack_138;
              pppppppuStack_a0 = pppppppuStack_130;
              pppppppuStack_98 = pppppppuVar6;
              if ((ppppppuVar13 == (ulong ******)0x0) && (pppppppuVar6[2] != (ulong ******)0x0)) {
                _free(pppppppuVar6[1]);
              }
            }
LAB_101366ec0:
            _free(pppppppuVar6);
          }
LAB_101366ec8:
          bVar11 = 2;
        }
        else {
          if (pppppppuVar6 == (ulong *******)0x0) goto LAB_101366e50;
          FUN_100e077ec(&pppppppuStack_b8);
LAB_101366e44:
          pppppppuVar10 = pppppppuVar6;
          bVar11 = 2;
        }
        goto LAB_101366ecc;
      }
      uStack_c0 = (ulong *******)0x18;
      pppppppuVar8 = (ulong *******)FUN_108831e2c(pppppppuStack_1d8,&uStack_c0);
      goto LAB_101367768;
    }
LAB_101367a28:
    if (uVar20 - 0x30 < 10) {
      FUN_100652540(&pppppppuStack_e0,pppppppuStack_1d8,1);
      pppppppuVar8 = pppppppuStack_d8;
      if (pppppppuStack_e0 == (ulong *******)0x3) goto LAB_101367768;
      uStack_c0 = (ulong *******)&UNK_108cde34c;
      pppppppuStack_b8 = (ulong *******)0x4;
      pppppppuStack_b0 = (ulong *******)&UNK_108cad105;
      pppppppuStack_a8 = (ulong *******)0x21;
      if (pppppppuStack_e0 == (ulong *******)0x2) {
        pppppppuStack_148 = pppppppuStack_d8;
        uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,2);
        pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
      }
      else if (pppppppuStack_e0 == (ulong *******)0x1) {
        pppppppuStack_148 = pppppppuStack_d8;
        uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,1);
        pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
      }
      else {
        pppppppuStack_148 = pppppppuStack_d8;
        uStack_150 = (ulong *******)CONCAT71(uStack_150._1_7_,3);
        pppppppuVar10 = (ulong *******)func_0x000108a4a50c(&uStack_150,&uStack_c0,&UNK_10b21abf0);
      }
    }
    else {
      uStack_c0 = (ulong *******)0xa;
      pppppppuVar10 = (ulong *******)FUN_108831e2c(pppppppuStack_1d8,&uStack_c0);
    }
  }
LAB_101367d78:
  pppppppuVar8 = (ulong *******)FUN_108832dfc(pppppppuVar10,pppppppuVar9);
LAB_101367768:
  pppppppuVar9 = pppppppuStack_1c0;
  if (pppppppuStack_1b8 != (ulong *******)0x0) {
    pppppppuVar25 = pppppppuStack_1c0 + 1;
    pppppppuVar26 = pppppppuStack_1b8;
    do {
      if (((ulong)pppppppuVar25[-1] & 0x7fffffffffffffff) != 0) {
        _free(*pppppppuVar25);
      }
      pppppppuVar25 = pppppppuVar25 + 3;
      pppppppuVar26 = (ulong *******)((long)pppppppuVar26 + -1);
    } while (pppppppuVar26 != (ulong *******)0x0);
  }
  if (pppppppuStack_1c8 != (ulong *******)0x0) {
    _free(pppppppuVar9);
  }
  pppppppuVar10 = (ulong *******)0x8000000000000000;
  pppppppuVar26 = pppppppuVar25;
LAB_1013677b0:
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) + 1;
  uStack_c0 = pppppppuVar10;
  pppppppuStack_b8 = pppppppuVar8;
  pppppppuStack_b0 = pppppppuVar26;
  pppppppuVar9 = (ulong *******)FUN_100654840(param_2);
  if (pppppppuVar10 == (ulong *******)0x8000000000000000) {
    pppppppuVar25 = pppppppuVar8;
    if (pppppppuVar9 != (ulong *******)0x0) {
      if (*pppppppuVar9 == (ulong ******)0x1) {
        FUN_100de21d4(pppppppuVar9 + 1);
      }
      else if ((*pppppppuVar9 == (ulong ******)0x0) && (pppppppuVar9[2] != (ulong ******)0x0)) {
        _free(pppppppuVar9[1]);
      }
      _free(pppppppuVar9);
    }
  }
  else {
    if (pppppppuVar9 == (ulong *******)0x0) {
      *param_1 = pppppppuVar10;
      param_1[1] = pppppppuVar8;
      param_1[2] = pppppppuVar26;
      return;
    }
    if (pppppppuVar26 != (ulong *******)0x0) {
      pppppppuVar25 = pppppppuVar8 + 1;
      do {
        if (((ulong)pppppppuVar25[-1] & 0x7fffffffffffffff) != 0) {
          _free(*pppppppuVar25);
        }
        pppppppuVar25 = pppppppuVar25 + 3;
        pppppppuVar26 = (ulong *******)((long)pppppppuVar26 + -1);
      } while (pppppppuVar26 != (ulong *******)0x0);
    }
    pppppppuVar25 = pppppppuVar9;
    if (pppppppuVar10 != (ulong *******)0x0) {
      _free(pppppppuVar8);
    }
  }
LAB_101367924:
  uVar5 = FUN_108832dfc(pppppppuVar25,param_2);
LAB_101367930:
  *param_1 = 0x8000000000000000;
  param_1[1] = uVar5;
  return;
}

