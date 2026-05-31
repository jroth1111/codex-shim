
void FUN_101368bfc(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      uVar8 = FUN_108855b04(param_2,auStack_69,&UNK_10b20c040);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar8;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar16 = pbStack_d0 + lVar12;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar16;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar21 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      bVar13 = 2;
      puVar20 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar18 = pbVar1 + 0x40;
        bVar14 = *pbVar1;
        pbVar19 = pbVar18;
        lVar22 = lVar21;
        if (bVar14 == 0x16) break;
        uVar8 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar8;
        uVar8 = *(undefined8 *)(pbVar1 + 1);
        puVar15[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar15 = uVar8;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        lStack_e0 = *(long *)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar14;
        if (0xc < bVar14) {
          if (bVar14 == 0xd) {
            if (plVar4 == (long *)0xc) {
              uVar11 = 1;
              if (*plVar3 != 0x546564756c636e69 || (int)plVar3[1] != 0x736e7275) {
                uVar11 = 2;
              }
            }
            else if (plVar4 == (long *)0x8) {
              uVar11 = 2;
              if (*plVar3 == 0x6449646165726874) {
                uVar11 = 0;
              }
            }
            else {
              uVar11 = 2;
            }
            goto LAB_101368ea0;
          }
          if (bVar14 == 0xe) {
            func_0x000100bacaa4(&uStack_a8,plVar4);
joined_r0x000101368d9c:
            pbVar1 = pbStack_f0;
            puVar5 = uStack_a8;
            bVar14 = bStack_8f;
            if (plVar3 != (long *)0x0) {
              _free(plVar4);
              pbVar1 = pbStack_f0;
              puVar5 = uStack_a8;
              bVar14 = bStack_8f;
            }
            goto joined_r0x000101368eb4;
          }
          if (bVar14 == 0xf) {
            func_0x000100bacaa4(&uStack_a8,plVar3,plVar4);
            goto LAB_101368ea8;
          }
LAB_101368f9c:
          uStack_a0 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b211680);
          uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
LAB_101368fc4:
          lStack_b0 = lVar21 + 1;
          uVar8 = uStack_a0;
          pbStack_c8 = pbVar18;
LAB_101368fe0:
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar8;
          puVar20 = (undefined *)((ulong)puVar20 & 0x7fffffffffffffff);
joined_r0x000101369338:
          if (puVar20 != (undefined *)0x0) {
            _free(uStack_f8);
          }
          goto LAB_101369160;
        }
        if (bVar14 == 1) {
          uVar10 = 1;
          if (bStack_8f != 1) {
            uVar10 = 2;
          }
          uVar11 = 0;
          if (bStack_8f != 0) {
            uVar11 = uVar10;
          }
        }
        else {
          if (bVar14 != 4) {
            if (bVar14 != 0xc) goto LAB_101368f9c;
            if (lStack_78 == 0xc) {
              uVar10 = 1;
              if (*plVar4 != 0x546564756c636e69 || (int)plVar4[1] != 0x736e7275) {
                uVar10 = 2;
              }
              uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar10) << 8);
            }
            else if (lStack_78 == 8) {
              uVar10 = 2;
              if (*plVar4 == 0x6449646165726874) {
                uVar10 = 0;
              }
              uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar10) << 8);
            }
            else {
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
            }
            goto joined_r0x000101368d9c;
          }
          uVar10 = 1;
          if (plVar3 != (long *)0x1) {
            uVar10 = 2;
          }
          uVar11 = 0;
          if (plVar3 != (long *)0x0) {
            uVar11 = uVar10;
          }
        }
LAB_101368ea0:
        uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar11) << 8);
LAB_101368ea8:
        FUN_100e077ec(&bStack_90);
        pbVar1 = pbStack_f0;
        puVar5 = uStack_a8;
        bVar14 = bStack_8f;
joined_r0x000101368eb4:
        pbStack_f0 = pbVar1;
        uStack_a8 = puVar5;
        bStack_8f = bVar14;
        if (((ulong)puVar5 & 1) != 0) goto LAB_101368fc4;
        uStack_a8._1_1_ = (char)((ulong)puVar5 >> 8);
        pbStack_f0._0_1_ = (byte)pbVar1;
        bVar6 = (byte)pbStack_f0;
        pbStack_f0._1_7_ = (undefined7)((ulong)pbVar1 >> 8);
        if (uStack_a8._1_1_ == '\0') {
          if (puVar20 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar21 + 1;
            uStack_a8 = &UNK_108c982f8;
            uStack_a0 = 8;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar18;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar8;
            goto joined_r0x000101369338;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar6 == 0x16) {
            lStack_b0 = lVar21 + 1;
            pbStack_c8 = pbVar18;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101369370;
          }
          uVar8 = *puVar17;
          puVar15[1] = puVar17[1];
          *puVar15 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar8;
          bStack_90 = bVar6;
          FUN_1004b62d4(&uStack_a8,&bStack_90);
          uStack_f8 = uStack_a0;
          if (uStack_a8 != (undefined *)0x8000000000000000) {
            uStack_108 = uStack_98;
            puVar20 = uStack_a8;
            goto LAB_101368ca4;
          }
          lStack_b0 = lVar21 + 1;
          uVar8 = uStack_a0;
          pbStack_c8 = pbVar18;
          goto LAB_101369158;
        }
        if (uStack_a8._1_1_ == '\x01') {
          if (bVar13 == 2) {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar6 == 0x16) goto LAB_101369264;
            uVar8 = *puVar17;
            puVar15[1] = puVar17[1];
            *puVar15 = uVar8;
            uVar8 = *(undefined8 *)((long)puVar17 + 0xf);
            *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
            *(undefined8 *)((long)puVar15 + 0xf) = uVar8;
            bStack_90 = bVar6;
            if (bVar6 == 0) {
              FUN_100e077ec(&bStack_90);
              bVar13 = bVar14;
              goto LAB_101368ca4;
            }
            lStack_b0 = lVar21 + 1;
            pbStack_c8 = pbVar18;
            uVar8 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
          }
          else {
            lStack_b0 = lVar21 + 1;
            uStack_a8 = &UNK_108cc01e3;
            uStack_a0 = 0xc;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar18;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          }
          goto LAB_101368fe0;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar6 == 0x16) {
LAB_101369264:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar21 + 1;
          pbStack_c8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101369370:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101369374);
          (*pcVar7)();
        }
        uVar8 = *puVar17;
        puVar15[1] = puVar17[1];
        *puVar15 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar8;
        bStack_90 = bVar6;
        FUN_100e077ec(&bStack_90);
LAB_101368ca4:
        lVar21 = lVar21 + 1;
        pbVar19 = pbVar16;
        lVar22 = (lVar12 - 0x40U >> 6) + 1;
        pbVar1 = pbVar18;
      } while (pbVar18 != pbVar16);
      pbStack_c8 = pbVar19;
      lStack_b0 = lVar22;
      if (puVar20 != (undefined *)0x8000000000000000) {
        *param_1 = puVar20;
        param_1[1] = uStack_f8;
        param_1[2] = uStack_108;
        *(byte *)(param_1 + 3) = bVar13 & 1;
        FUN_100d34830(&pbStack_d0);
        if (pbVar16 != pbVar19) {
          bStack_90 = (byte)lVar22;
          bStack_8f = (byte)((ulong)lVar22 >> 8);
          uStack_8e = (undefined6)((ulong)lVar22 >> 0x10);
          uVar8 = FUN_1087e422c(((ulong)((long)pbVar16 - (long)pbVar19) >> 6) + lVar22,&bStack_90,
                                &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar8;
          if (puVar20 != (undefined *)0x0) {
            _free(uStack_f8);
          }
        }
        goto LAB_1013691b0;
      }
    }
    uStack_a8 = &UNK_108c982f8;
    uStack_a0 = 8;
    bStack_90 = (byte)&uStack_a8;
    bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_101369158:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
LAB_101369160:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    goto LAB_1013691b0;
  }
  lVar12 = *(long *)(param_2 + 8);
  pbVar19 = *(byte **)(param_2 + 0x10);
  lVar21 = *(long *)(param_2 + 0x18);
  pbVar1 = pbVar19 + lVar21 * 0x20;
  pbStack_d0 = (byte *)0x0;
  pbVar16 = pbVar19;
  pbStack_f0 = pbVar19;
  lStack_e0 = lVar12;
  pbStack_d8 = pbVar1;
  if (lVar21 == 0) {
LAB_101369030:
    pbStack_e8 = pbVar16;
    uVar8 = FUN_1087e422c(0,&UNK_10b2318b8,&UNK_10b20a590);
LAB_10136904c:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
  }
  else {
    pbVar16 = pbVar19 + 0x20;
    if (*pbVar19 == 0x16) goto LAB_101369030;
    uVar8 = *(undefined8 *)(pbVar19 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar19 + 9);
    bStack_8f = (byte)uVar8;
    uStack_8e = (undefined6)((ulong)uVar8 >> 8);
    uStack_88 = (undefined1)((ulong)uVar8 >> 0x38);
    lStack_78 = *(long *)(pbVar19 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar19 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x10) >> 8);
    pbStack_d0 = (byte *)0x1;
    pbStack_e8 = pbVar16;
    bStack_90 = *pbVar19;
    FUN_1004b62d4(&uStack_a8,&bStack_90);
    uVar8 = uStack_a0;
    puVar20 = uStack_a8;
    if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_10136904c;
    if (lVar21 == 1) {
LAB_1013690f0:
      bVar14 = 0;
LAB_10136922c:
      *param_1 = puVar20;
      param_1[1] = uVar8;
      param_1[2] = uStack_98;
      *(byte *)(param_1 + 3) = bVar14;
      lVar12 = FUN_100fbc738(&pbStack_f0);
      if (lVar12 != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar12;
        if (puVar20 != (undefined *)0x0) {
          _free(uVar8);
        }
      }
      goto LAB_1013691b0;
    }
    pbVar16 = pbVar19 + 0x40;
    bVar13 = pbVar19[0x20];
    pbStack_e8 = pbVar16;
    if (bVar13 == 0x16) goto LAB_1013690f0;
    uVar9 = *(undefined8 *)(pbVar19 + 0x21);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar19 + 0x29);
    bStack_8f = (byte)uVar9;
    bVar14 = bStack_8f;
    uStack_8e = (undefined6)((ulong)uVar9 >> 8);
    uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
    lStack_78 = *(long *)(pbVar19 + 0x38);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar19 + 0x30);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x30) >> 8);
    pbStack_d0 = (byte *)0x2;
    bStack_90 = bVar13;
    if (bVar13 == 0) {
      FUN_100e077ec(&bStack_90);
      goto LAB_10136922c;
    }
    uVar9 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    if (puVar20 != (undefined *)0x0) {
      _free(uVar8);
    }
  }
  lVar21 = ((ulong)((long)pbVar1 - (long)pbVar16) >> 5) + 1;
  while (lVar21 = lVar21 + -1, lVar21 != 0) {
    FUN_100e077ec(pbVar16);
    pbVar16 = pbVar16 + 0x20;
  }
  if (lVar12 != 0) {
    _free(pbVar19);
  }
LAB_1013691b0:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

