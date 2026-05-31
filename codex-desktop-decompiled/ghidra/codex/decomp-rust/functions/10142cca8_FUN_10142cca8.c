
/* WARNING: Type propagation algorithm not settling */

void FUN_10142cca8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  byte bVar5;
  code *pcVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  byte *unaff_x21;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  undefined *puVar16;
  byte bVar17;
  undefined *puVar18;
  undefined8 uVar19;
  byte *pbStack_110;
  long lStack_108;
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
  long lStack_a0;
  byte *pbStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lVar8 = *(long *)(param_2 + 8);
    pbStack_110 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar1 = pbStack_110 + lVar13 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar15 = pbStack_110;
    pbStack_f0 = pbStack_110;
    lStack_e0 = lVar8;
    pbStack_d8 = pbVar1;
    if (lVar13 == 0) {
LAB_10142d17c:
      pbStack_e8 = pbVar15;
      lStack_108 = FUN_1087e422c(0,&UNK_10b22d2d0,&UNK_10b20a590);
    }
    else {
      pbVar15 = pbStack_110 + 0x20;
      bVar7 = *pbStack_110;
      if (bVar7 == 0x16) goto LAB_10142d17c;
      uVar19 = *(undefined8 *)(pbStack_110 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbStack_110 + 9);
      bStack_8f = (byte)uVar19;
      bVar10 = bStack_8f;
      uStack_8e = (undefined6)((ulong)uVar19 >> 8);
      uStack_88 = (undefined1)((ulong)uVar19 >> 0x38);
      lStack_78 = *(long *)(pbStack_110 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbStack_110 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_110 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar15;
      bStack_90 = bVar7;
      if (bVar7 != 0) {
        lStack_108 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
        goto LAB_10142d210;
      }
      FUN_100e077ec(&bStack_90);
      if (lVar13 == 1) {
LAB_10142d1ec:
        lStack_108 = FUN_1087e422c(1,&UNK_10b22d2d0,&UNK_10b20a590);
      }
      else {
        pbVar15 = pbStack_110 + 0x40;
        bVar7 = pbStack_110[0x20];
        pbStack_e8 = pbVar15;
        if (bVar7 == 0x16) goto LAB_10142d1ec;
        uVar19 = *(undefined8 *)(pbStack_110 + 0x21);
        uStack_87 = (undefined7)*(undefined8 *)(pbStack_110 + 0x29);
        bStack_8f = (byte)uVar19;
        bVar17 = bStack_8f;
        uStack_8e = (undefined6)((ulong)uVar19 >> 8);
        uStack_88 = (undefined1)((ulong)uVar19 >> 0x38);
        lStack_78 = *(long *)(pbStack_110 + 0x38);
        uStack_80 = (undefined1)*(undefined8 *)(pbStack_110 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_110 + 0x30) >> 8);
        pbStack_d0 = (byte *)0x2;
        bStack_90 = bVar7;
        if (bVar7 == 0) {
          FUN_100e077ec(&bStack_90);
          if (lVar13 != 2) {
            pbVar15 = pbStack_110 + 0x60;
            pbStack_e8 = pbVar15;
            if (pbStack_110[0x40] != 0x16) {
              uVar19 = *(undefined8 *)(pbStack_110 + 0x41);
              uStack_87 = (undefined7)*(undefined8 *)(pbStack_110 + 0x49);
              bStack_8f = (byte)uVar19;
              uStack_8e = (undefined6)((ulong)uVar19 >> 8);
              uStack_88 = (undefined1)((ulong)uVar19 >> 0x38);
              lStack_78 = *(long *)(pbStack_110 + 0x58);
              uStack_80 = (undefined1)*(undefined8 *)(pbStack_110 + 0x50);
              uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbStack_110 + 0x50) >> 8);
              pbStack_d0 = (byte *)0x3;
              bStack_90 = pbStack_110[0x40];
              FUN_1004b60cc(&uStack_a8,&bStack_90);
              lStack_108 = lStack_a0;
              puVar16 = uStack_a8;
              if (uStack_a8 != (undefined *)0x8000000000000001) {
                lVar8 = FUN_100fbc738(&pbStack_f0);
                pbStack_110 = pbStack_98;
                if (lVar8 != 0) {
                  if (((ulong)puVar16 & 0x7fffffffffffffff) == 0) {
                    puVar16 = (undefined *)0x8000000000000001;
                    lStack_108 = lVar8;
                  }
                  else {
                    _free(lStack_108);
                    puVar16 = (undefined *)0x8000000000000001;
                    lStack_108 = lVar8;
                  }
                }
                goto LAB_10142d338;
              }
              goto LAB_10142d210;
            }
          }
          lStack_108 = FUN_1087e422c(2,&UNK_10b22d2d0,&UNK_10b20a590);
        }
        else {
          lStack_108 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
        }
      }
    }
LAB_10142d210:
    lVar13 = ((ulong)((long)pbVar1 - (long)pbVar15) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
    if (lVar8 != 0) {
      _free(pbStack_110);
    }
    bVar10 = 0;
    bVar17 = 0;
    puVar16 = (undefined *)0x8000000000000001;
  }
  else {
    if (bVar3 != 0x15) {
      lStack_108 = FUN_108855b04(param_2,auStack_69,&UNK_10b20ac80);
      goto LAB_10142d358;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar15 = pbStack_d0 + lVar8;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar15;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar18 = (undefined *)0x8000000000000001;
LAB_10142d2bc:
      uStack_a8 = &UNK_108cb022c;
      lStack_a0 = 0xb;
      bStack_90 = (byte)&uStack_a8;
      bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
      uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      lVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
      pbVar12 = unaff_x21;
joined_r0x00010142d28c:
      pbStack_110 = pbVar12;
      if (-0x7fffffffffffffff < (long)puVar18) {
joined_r0x00010142d59c:
        pbStack_110 = pbVar12;
        if (puVar18 != (undefined *)0x0) {
          _free(lStack_108);
        }
      }
LAB_10142d30c:
      FUN_100d34830(&pbStack_d0);
      if ((byte)pbStack_f0 != '\x16') {
        FUN_100e077ec(&pbStack_f0);
      }
      bVar17 = 0;
      bVar10 = 0;
      puVar16 = (undefined *)0x8000000000000001;
      lStack_108 = lVar8;
    }
    else {
      lVar13 = 0;
      puVar9 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar11 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      bVar10 = 2;
      bVar17 = 2;
      puVar18 = (undefined *)0x8000000000000001;
      pbVar1 = pbStack_d0;
      do {
        pbVar12 = pbVar1 + 0x40;
        bVar7 = *pbVar1;
        unaff_x21 = pbVar12;
        lVar14 = lVar13;
        if (bVar7 == 0x16) break;
        uVar19 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar9 + 0xf) = uVar19;
        uVar19 = *(undefined8 *)(pbVar1 + 1);
        puVar9[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar9 = uVar19;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        lStack_e0 = *(long *)(pbVar1 + 0x30);
        plVar2 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar7;
        if (bVar7 < 0xd) {
          if (bVar7 == 1) {
            bVar7 = bStack_8f;
            if (2 < bStack_8f) {
              bVar7 = 3;
            }
LAB_10142cfb4:
            uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,bVar7);
            uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
            goto LAB_10142cfb8;
          }
          if (bVar7 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bVar7 = (byte)plVar2;
            goto LAB_10142cfb4;
          }
          if (bVar7 == 0xc) {
            if (lStack_78 == 7) {
              if ((int)*plVar4 != 0x616c6162 || *(int *)((long)plVar4 + 3) != 0x65636e61)
              goto LAB_10142cf3c;
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
            }
            else if (lStack_78 == 9) {
              if (*plVar4 != 0x6574696d696c6e75 || (char)plVar4[1] != 'd') goto LAB_10142cf3c;
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x100);
            }
            else if ((lStack_78 == 0xb) &&
                    (*plVar4 == 0x646572635f736168 &&
                     *(long *)((long)plVar4 + 3) == 0x737469646572635f)) {
              uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
            }
            else {
LAB_10142cf3c:
              uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x300);
            }
joined_r0x00010142cf10:
            if (plVar2 != (long *)0x0) {
              _free(plVar4);
            }
          }
          else {
LAB_10142d124:
            lStack_a0 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20ef80);
            uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
          }
        }
        else {
          if (bVar7 == 0xd) {
            if (plVar4 == (long *)0x7) {
              if ((int)*plVar2 != 0x616c6162 || *(int *)((long)plVar2 + 3) != 0x65636e61)
              goto LAB_10142cfac;
              bVar7 = 2;
            }
            else if (plVar4 == (long *)0x9) {
              if (*plVar2 != 0x6574696d696c6e75 || (char)plVar2[1] != 'd') goto LAB_10142cfac;
              bVar7 = 1;
            }
            else if ((plVar4 == (long *)0xb) &&
                    (*plVar2 == 0x646572635f736168 &&
                     *(long *)((long)plVar2 + 3) == 0x737469646572635f)) {
              bVar7 = 0;
            }
            else {
LAB_10142cfac:
              bVar7 = 3;
            }
            goto LAB_10142cfb4;
          }
          if (bVar7 == 0xe) {
            func_0x000100b1a964(&uStack_a8,plVar4);
            goto joined_r0x00010142cf10;
          }
          if (bVar7 != 0xf) goto LAB_10142d124;
          func_0x000100b1a964(&uStack_a8,plVar2,plVar4);
LAB_10142cfb8:
          FUN_100e077ec(&bStack_90);
        }
        bVar7 = bStack_8f;
        if (((ulong)uStack_a8 & 1) != 0) {
          lStack_b0 = lVar13 + 1;
          pbStack_c8 = pbVar12;
          lVar8 = lStack_a0;
          goto joined_r0x00010142d28c;
        }
        bVar5 = (byte)pbStack_f0;
        if (uStack_a8._1_1_ < 2) {
          if (uStack_a8._1_1_ == 0) {
            if (bVar10 != 2) {
              lStack_b0 = lVar13 + 1;
              uStack_a8 = &UNK_108cb022c;
              lStack_a0 = 0xb;
              bStack_90 = (byte)&uStack_a8;
              bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_c8 = pbVar12;
              lVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto joined_r0x00010142d28c;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar5 == 0x16) {
LAB_10142d500:
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              lStack_b0 = lVar13 + 1;
              pbStack_c8 = pbVar12;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10142d668:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10142d66c);
              (*pcVar6)();
            }
            uVar19 = *puVar11;
            puVar9[1] = puVar11[1];
            *puVar9 = uVar19;
            uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
            *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
            *(undefined8 *)((long)puVar9 + 0xf) = uVar19;
            bStack_90 = bVar5;
            if (bVar5 != 0) {
              lStack_b0 = lVar13 + 1;
              pbStack_c8 = pbVar12;
              lVar8 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
              goto joined_r0x00010142d28c;
            }
            FUN_100e077ec(&bStack_90);
            bVar10 = bVar7;
          }
          else {
            if (bVar17 != 2) {
              lStack_b0 = lVar13 + 1;
              uStack_a8 = &UNK_108cb0237;
              lStack_a0 = 9;
              bStack_90 = (byte)&uStack_a8;
              bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_c8 = pbVar12;
              lVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
              goto joined_r0x00010142d28c;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar5 == 0x16) goto LAB_10142d500;
            uVar19 = *puVar11;
            puVar9[1] = puVar11[1];
            *puVar9 = uVar19;
            uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
            *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
            *(undefined8 *)((long)puVar9 + 0xf) = uVar19;
            bStack_90 = bVar5;
            if (bVar5 != 0) {
              lStack_b0 = lVar13 + 1;
              pbStack_c8 = pbVar12;
              lVar8 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
              goto joined_r0x00010142d28c;
            }
            FUN_100e077ec(&bStack_90);
            bVar17 = bVar7;
          }
        }
        else if (uStack_a8._1_1_ == 2) {
          if (puVar18 != (undefined *)0x8000000000000001) {
            lStack_b0 = lVar13 + 1;
            uStack_a8 = &UNK_108cb0240;
            lStack_a0 = 7;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar12;
            lVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            puVar18 = (undefined *)((ulong)puVar18 & 0x7fffffffffffffff);
            goto joined_r0x00010142d59c;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_b0 = lVar13 + 1;
            pbStack_c8 = pbVar12;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10142d668;
          }
          uVar19 = *puVar11;
          puVar9[1] = puVar11[1];
          *puVar9 = uVar19;
          uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
          *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
          *(undefined8 *)((long)puVar9 + 0xf) = uVar19;
          bStack_90 = bVar5;
          FUN_1004b60cc(&uStack_a8,&bStack_90);
          lStack_108 = lStack_a0;
          if (uStack_a8 == (undefined *)0x8000000000000001) {
            lStack_b0 = lVar13 + 1;
            pbStack_110 = pbVar12;
            lVar8 = lStack_a0;
            pbStack_c8 = pbVar12;
            goto LAB_10142d30c;
          }
          pbStack_110 = pbStack_98;
          puVar18 = uStack_a8;
        }
        else {
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_10142d500;
          uVar19 = *puVar11;
          puVar9[1] = puVar11[1];
          *puVar9 = uVar19;
          uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
          *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
          *(undefined8 *)((long)puVar9 + 0xf) = uVar19;
          bStack_90 = bVar5;
          FUN_100e077ec(&bStack_90);
        }
        lVar13 = lVar13 + 1;
        unaff_x21 = pbVar15;
        lVar14 = (lVar8 - 0x40U >> 6) + 1;
        pbVar1 = pbVar12;
      } while (pbVar12 != pbVar15);
      pbStack_c8 = unaff_x21;
      lStack_b0 = lVar14;
      if (bVar10 == 2) goto LAB_10142d2bc;
      if (bVar17 == 2) {
        uStack_a8 = &UNK_108cb0237;
        lStack_a0 = 9;
        bStack_90 = (byte)&uStack_a8;
        bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
        uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
        uStack_88 = 0xa0;
        uStack_87 = 0x100c7b3;
        lVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
        pbVar12 = unaff_x21;
        goto joined_r0x00010142d28c;
      }
      puVar16 = (undefined *)0x8000000000000000;
      if (puVar18 != (undefined *)0x8000000000000001) {
        puVar16 = puVar18;
      }
      FUN_100d34830(&pbStack_d0);
      if (pbVar15 != unaff_x21) {
        bStack_90 = (byte)lVar14;
        bStack_8f = (byte)((ulong)lVar14 >> 8);
        uStack_8e = (undefined6)((ulong)lVar14 >> 0x10);
        lVar8 = FUN_1087e422c(((ulong)((long)pbVar15 - (long)unaff_x21) >> 6) + lVar14,&bStack_90,
                              &UNK_10b23a190);
        if (((ulong)puVar16 & 0x7fffffffffffffff) != 0) {
          _free(lStack_108);
        }
        puVar16 = (undefined *)0x8000000000000001;
        lStack_108 = lVar8;
      }
    }
  }
LAB_10142d338:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (puVar16 != (undefined *)0x8000000000000001) {
    *param_1 = puVar16;
    param_1[1] = lStack_108;
    param_1[2] = pbStack_110;
    *(byte *)(param_1 + 3) = bVar10;
    *(byte *)((long)param_1 + 0x19) = bVar17;
    return;
  }
LAB_10142d358:
  *param_1 = 0x8000000000000002;
  param_1[1] = lStack_108;
  return;
}

