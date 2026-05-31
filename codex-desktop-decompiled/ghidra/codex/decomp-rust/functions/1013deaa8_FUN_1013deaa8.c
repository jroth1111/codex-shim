
/* WARNING: Type propagation algorithm not settling */

void FUN_1013deaa8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  byte bVar5;
  long *plVar6;
  char cVar7;
  undefined *puVar8;
  undefined1 uVar9;
  code *pcVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte bVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
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
  
  bVar5 = *param_2;
  if (bVar5 != 0x14) {
    if (bVar5 != 0x15) {
      uVar12 = FUN_108855b04(param_2,auStack_69,&UNK_10b20c5a0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar11 = pbStack_d0 + lVar14;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar11;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar20 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar16 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      cVar3 = '\x03';
      cVar7 = '\x03';
      puVar19 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar17 = pbVar1 + 0x40;
        bVar13 = *pbVar1;
        pbVar18 = pbVar17;
        lVar21 = lVar20;
        if (bVar13 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar1 + 1);
        puVar15[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar15 = uVar12;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        puStack_e0 = *(undefined **)(pbVar1 + 0x30);
        plVar4 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar6 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar13;
        if (bVar13 < 0xd) {
          if (bVar13 == 1) {
            bVar13 = bStack_8f;
            if (2 < bStack_8f) {
              bVar13 = 3;
            }
LAB_1013ded68:
            uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,bVar13);
            uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
            goto LAB_1013ded6c;
          }
          if (bVar13 == 4) {
            if ((long *)0x2 < plVar4) {
              plVar4 = (long *)0x3;
            }
            bVar13 = (byte)plVar4;
            goto LAB_1013ded68;
          }
          if (bVar13 == 0xc) {
            if (lStack_78 == 9) {
              if (*plVar6 != 0x7669737275636572 || (char)plVar6[1] != 'e') goto LAB_1013decf4;
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x100);
            }
            else if (lStack_78 == 5) {
              if ((int)*plVar6 != 0x63726f66 || *(char *)((long)plVar6 + 4) != 'e')
              goto LAB_1013decf4;
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
            }
            else if ((lStack_78 == 4) && ((int)*plVar6 == 0x68746170)) {
              uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
            }
            else {
LAB_1013decf4:
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x300);
            }
joined_r0x0001013deee8:
            if (plVar4 != (long *)0x0) {
              _free(plVar6);
            }
          }
          else {
LAB_1013deef8:
            pbStack_a0 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20d260);
            uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
          }
        }
        else {
          if (bVar13 == 0xd) {
            if (plVar6 == (long *)0x9) {
              if (*plVar4 != 0x7669737275636572 || (char)plVar4[1] != 'e') goto LAB_1013ded60;
              bVar13 = 1;
            }
            else if (plVar6 == (long *)0x5) {
              if ((int)*plVar4 != 0x63726f66 || *(char *)((long)plVar4 + 4) != 'e')
              goto LAB_1013ded60;
              bVar13 = 2;
            }
            else if ((plVar6 == (long *)0x4) && ((int)*plVar4 == 0x68746170)) {
              bVar13 = 0;
            }
            else {
LAB_1013ded60:
              bVar13 = 3;
            }
            goto LAB_1013ded68;
          }
          if (bVar13 == 0xe) {
            func_0x000100b72efc(&uStack_a8,plVar6);
            goto joined_r0x0001013deee8;
          }
          if (bVar13 != 0xf) goto LAB_1013deef8;
          func_0x000100b72efc(&uStack_a8,plVar4,plVar6);
LAB_1013ded6c:
          FUN_100e077ec(&bStack_90);
        }
        if (((ulong)uStack_a8 & 1) != 0) {
LAB_1013df048:
          lStack_b0 = lVar20 + 1;
          pbVar11 = pbStack_a0;
          pbStack_c8 = pbVar17;
LAB_1013df064:
          *param_1 = 0x8000000000000000;
          param_1[1] = pbVar11;
          puVar19 = (undefined *)((ulong)puVar19 & 0x7fffffffffffffff);
joined_r0x0001013df070:
          if (puVar19 != (undefined *)0x0) {
            _free(pbStack_108);
          }
          goto LAB_1013df0e4;
        }
        bVar13 = (byte)pbStack_f0;
        if (uStack_a8._1_1_ < 2) {
          if (uStack_a8._1_1_ == 0) {
            if (puVar19 != (undefined *)0x8000000000000000) {
              lStack_b0 = lVar20 + 1;
              uStack_a8 = &UNK_108c61038;
              pbStack_a0 = (byte *)0x4;
              bStack_90 = (byte)&uStack_a8;
              bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_c8 = pbVar17;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar12;
              goto joined_r0x0001013df070;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar13 == 0x16) {
              lStack_b0 = lVar20 + 1;
              pbStack_c8 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1013df3c8;
            }
            uVar12 = *puVar16;
            puVar15[1] = puVar16[1];
            *puVar15 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar16 + 0xf);
            *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
            *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
            bStack_90 = bVar13;
            FUN_1014a868c(&uStack_a8,&bStack_90);
            pbStack_108 = pbStack_a0;
            if (uStack_a8 == (undefined *)0x8000000000000000) {
              lStack_b0 = lVar20 + 1;
              pbVar11 = pbStack_a0;
              pbStack_c8 = pbVar17;
              goto LAB_1013df0dc;
            }
            uStack_110 = uStack_98;
            puVar19 = uStack_a8;
          }
          else {
            if (cVar3 != '\x03') {
              lStack_b0 = lVar20 + 1;
              uStack_a8 = &UNK_108cbc2d3;
              pbStack_a0 = (byte *)0x9;
              bStack_90 = (byte)&uStack_a8;
              bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_c8 = pbVar17;
              pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto LAB_1013df064;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar13 == 0x16) goto LAB_1013df280;
            uVar12 = *puVar16;
            puVar15[1] = puVar16[1];
            *puVar15 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar16 + 0xf);
            *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
            *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
            bStack_90 = bVar13;
            FUN_101226150(&uStack_a8,&bStack_90);
            if ((char)uStack_a8 == '\x01') goto LAB_1013df048;
            cVar3 = uStack_a8._1_1_;
          }
        }
        else if (uStack_a8._1_1_ == 2) {
          if (cVar7 != '\x03') {
            lStack_b0 = lVar20 + 1;
            uStack_a8 = &UNK_108cbdf01;
            pbStack_a0 = (byte *)0x5;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar17;
            pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_1013df064;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar13 == 0x16) goto LAB_1013df280;
          uVar12 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
          bStack_90 = bVar13;
          FUN_101226150(&uStack_a8,&bStack_90);
          if ((char)uStack_a8 == '\x01') goto LAB_1013df048;
          cVar7 = uStack_a8._1_1_;
        }
        else {
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar13 == 0x16) {
LAB_1013df280:
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013df3c8:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1013df3cc);
            (*pcVar10)();
          }
          uVar12 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
          bStack_90 = bVar13;
          FUN_100e077ec(&bStack_90);
        }
        lVar20 = lVar20 + 1;
        pbVar18 = pbVar11;
        lVar21 = (lVar14 - 0x40U >> 6) + 1;
        pbVar1 = pbVar17;
      } while (pbVar17 != pbVar11);
      pbStack_c8 = pbVar18;
      lStack_b0 = lVar21;
      if (puVar19 != (undefined *)0x8000000000000000) {
        cVar2 = '\x02';
        if (cVar3 != '\x03') {
          cVar2 = cVar3;
        }
        *param_1 = puVar19;
        param_1[1] = pbStack_108;
        cVar3 = '\x02';
        if (cVar7 != '\x03') {
          cVar3 = cVar7;
        }
        param_1[2] = uStack_110;
        *(char *)(param_1 + 3) = cVar2;
        *(char *)((long)param_1 + 0x19) = cVar3;
        FUN_100d34830(&pbStack_d0);
        if (pbVar11 != pbVar18) {
          bStack_90 = (byte)lVar21;
          bStack_8f = (byte)((ulong)lVar21 >> 8);
          uStack_8e = (undefined6)((ulong)lVar21 >> 0x10);
          uVar12 = FUN_1087e422c(((ulong)((long)pbVar11 - (long)pbVar18) >> 6) + lVar21,&bStack_90,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          if (puVar19 != (undefined *)0x0) {
            _free(pbStack_108);
          }
        }
        goto LAB_1013df148;
      }
    }
    uStack_a8 = &UNK_108c61038;
    pbStack_a0 = (byte *)0x4;
    bStack_90 = (byte)&uStack_a8;
    bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_1013df0dc:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar11;
LAB_1013df0e4:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    goto LAB_1013df148;
  }
  puVar19 = *(undefined **)(param_2 + 8);
  pbVar18 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18);
  pbVar1 = pbVar18 + lVar14 * 0x20;
  pbStack_d0 = (byte *)0x0;
  pbVar11 = pbVar18;
  pbStack_f0 = pbVar18;
  puStack_e0 = puVar19;
  pbStack_d8 = pbVar1;
  if (lVar14 == 0) {
LAB_1013def50:
    pbStack_e8 = pbVar11;
    pbVar17 = (byte *)FUN_1087e422c(0,&UNK_10b22fc58,&UNK_10b20a590);
LAB_1013def6c:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar17;
LAB_1013def74:
    lVar14 = ((ulong)((long)pbVar1 - (long)pbVar11) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(pbVar11);
      pbVar11 = pbVar11 + 0x20;
    }
  }
  else {
    pbVar11 = pbVar18 + 0x20;
    if (*pbVar18 == 0x16) goto LAB_1013def50;
    uVar12 = *(undefined8 *)(pbVar18 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar18 + 9);
    bStack_8f = (byte)uVar12;
    uStack_8e = (undefined6)((ulong)uVar12 >> 8);
    uStack_88 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_78 = *(long *)(pbVar18 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar18 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x10) >> 8);
    pbStack_d0 = (byte *)0x1;
    pbStack_e8 = pbVar11;
    bStack_90 = *pbVar18;
    FUN_1014a868c(&uStack_a8,&bStack_90);
    pbVar17 = pbStack_a0;
    puVar8 = uStack_a8;
    if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_1013def6c;
    if (lVar14 == 1) {
LAB_1013df010:
      uVar12 = 1;
LAB_1013df014:
      uVar12 = FUN_1087e422c(uVar12,&UNK_10b22fc58,&UNK_10b20a590);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
joined_r0x0001013df038:
      if (puVar8 != (undefined *)0x0) {
        _free(pbVar17);
      }
      goto LAB_1013def74;
    }
    pbVar11 = pbVar18 + 0x40;
    pbStack_e8 = pbVar11;
    if (pbVar18[0x20] == 0x16) goto LAB_1013df010;
    uVar12 = *(undefined8 *)(pbVar18 + 0x21);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar18 + 0x29);
    bStack_8f = (byte)uVar12;
    uStack_8e = (undefined6)((ulong)uVar12 >> 8);
    uStack_88 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_78 = *(long *)(pbVar18 + 0x38);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar18 + 0x30);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x30) >> 8);
    pbStack_d0 = (byte *)0x2;
    bStack_90 = pbVar18[0x20];
    FUN_101226150(&uStack_a8,&bStack_90);
    if (((ulong)uStack_a8 & 1) != 0) {
LAB_1013df1c8:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbStack_a0;
      goto joined_r0x0001013df038;
    }
    if (lVar14 == 2) {
LAB_1013df204:
      uVar12 = 2;
      goto LAB_1013df014;
    }
    uVar9 = uStack_a8._1_1_;
    pbVar11 = pbVar18 + 0x60;
    pbStack_e8 = pbVar11;
    if (pbVar18[0x40] == 0x16) goto LAB_1013df204;
    uVar12 = *(undefined8 *)(pbVar18 + 0x41);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar18 + 0x49);
    bStack_8f = (byte)uVar12;
    uStack_8e = (undefined6)((ulong)uVar12 >> 8);
    uStack_88 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_78 = *(long *)(pbVar18 + 0x58);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar18 + 0x50);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x50) >> 8);
    pbStack_d0 = (byte *)0x3;
    bStack_90 = pbVar18[0x40];
    FUN_101226150(&uStack_a8,&bStack_90);
    if ((char)uStack_a8 == '\x01') goto LAB_1013df1c8;
    *param_1 = puVar8;
    param_1[1] = pbVar17;
    param_1[2] = uStack_98;
    *(undefined1 *)(param_1 + 3) = uVar9;
    *(byte *)((long)param_1 + 0x19) = uStack_a8._1_1_;
    lVar14 = FUN_100fbc738(&pbStack_f0);
    if (lVar14 == 0) goto LAB_1013df148;
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar14;
    pbVar18 = pbVar17;
    puVar19 = puVar8;
  }
  if (puVar19 != (undefined *)0x0) {
    _free(pbVar18);
  }
LAB_1013df148:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

