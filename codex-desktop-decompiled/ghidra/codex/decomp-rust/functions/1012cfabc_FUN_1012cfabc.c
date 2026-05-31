
/* WARNING: Type propagation algorithm not settling */

void FUN_1012cfabc(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte *pbVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long in_x12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte bVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  long lStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined *puStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined *puStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  byte *pbStack_a0;
  long lStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    puVar17 = *(undefined **)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    pbVar14 = pbVar1 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbStack_110 = pbVar1;
    puStack_100 = puVar17;
    pbStack_f8 = pbVar14;
    pbVar20 = pbStack_f0;
    bVar19 = bStack_90;
    if (*(long *)(param_2 + 0x18) == 0) {
      puStack_c0 = (undefined *)0x0;
      pbStack_b8 = (byte *)0x8;
      lStack_b0 = 0;
      pbVar21 = pbVar1;
      pbStack_108 = pbVar1;
      pbVar22 = (byte *)0x1;
      puVar18 = puStack_c0;
      pbVar5 = pbStack_b8;
      lVar11 = lStack_b0;
joined_r0x0001012d0008:
      pbStack_f0 = pbVar22;
      puStack_c0 = puVar18;
      pbStack_b8 = pbVar5;
      lStack_b0 = lVar11;
      if (pbVar21 == pbVar14) {
        bVar16 = 0;
        pbVar22 = pbVar14;
        pbStack_f0 = pbVar20;
        bStack_90 = bVar19;
      }
      else {
        pbVar22 = pbVar21 + 0x20;
        bStack_90 = *pbVar21;
        pbStack_108 = pbVar22;
        if (bStack_90 == 0x16) {
          bVar16 = 0;
          pbStack_f0 = pbVar20;
          bStack_90 = bVar19;
        }
        else {
          uVar9 = *(undefined8 *)(pbVar21 + 1);
          uStack_87 = (undefined7)*(undefined8 *)(pbVar21 + 9);
          bStack_8f = (byte)uVar9;
          bVar16 = bStack_8f;
          uStack_8e = (undefined6)((ulong)uVar9 >> 8);
          uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
          lStack_78 = *(long *)(pbVar21 + 0x18);
          uStack_80 = (undefined1)*(undefined8 *)(pbVar21 + 0x10);
          uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x10) >> 8);
          if (bStack_90 != 0) {
            uVar9 = FUN_108855b04(&bStack_90,&puStack_a8,&UNK_10b20a560);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            if (lVar11 != 0) {
              pbVar20 = pbVar5 + 8;
              do {
                if (*(long *)(pbVar20 + -8) != 0) {
                  _free(*(undefined8 *)pbVar20);
                }
                pbVar20 = pbVar20 + 0x18;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            if (puVar18 != (undefined *)0x0) {
              _free(pbVar5);
            }
            goto LAB_1012d0100;
          }
          FUN_100e077ec(&bStack_90);
        }
      }
      param_1[1] = pbStack_b8;
      *param_1 = puStack_c0;
      param_1[2] = lStack_b0;
      *(byte *)(param_1 + 3) = bVar16;
      puVar18 = (undefined *)*param_1;
      if (puVar18 != (undefined *)0x8000000000000000) {
        pbVar1 = (byte *)param_1[1];
        lVar11 = param_1[2];
        lVar23 = FUN_100fbc738(&pbStack_110);
        if (lVar23 == 0) goto LAB_1012d0294;
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar23;
        puVar17 = puVar18;
        if (lVar11 != 0) {
          pbVar14 = pbVar1 + 8;
          do {
            if (*(long *)(pbVar14 + -8) != 0) {
              _free(*(undefined8 *)pbVar14);
            }
            pbVar14 = pbVar14 + 0x18;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto joined_r0x0001012d016c;
      }
    }
    else {
      pbVar22 = pbVar1 + 0x20;
      pbStack_108 = pbVar22;
      pbVar21 = pbVar22;
      if (*pbVar1 == 0x16) {
        puStack_c0 = (undefined *)0x0;
        pbStack_b8 = (byte *)0x8;
        lStack_b0 = 0;
        pbVar22 = (byte *)0x1;
        puVar18 = puStack_c0;
        pbVar5 = pbStack_b8;
        lVar11 = lStack_b0;
        goto joined_r0x0001012d0008;
      }
      uVar9 = *(undefined8 *)(pbVar1 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar1 + 9);
      bStack_8f = (byte)uVar9;
      uStack_8e = (undefined6)((ulong)uVar9 >> 8);
      uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
      lStack_78 = *(long *)(pbVar1 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      bStack_90 = *pbVar1;
      FUN_10061cfd8(&puStack_a8,&bStack_90);
      if (puStack_a8 != (undefined *)0x8000000000000000) {
        pbVar22 = (byte *)0x2;
        pbVar20 = pbStack_f0;
        puVar18 = puStack_a8;
        pbVar5 = pbStack_a0;
        lVar11 = lStack_98;
        bVar19 = bStack_90;
        goto joined_r0x0001012d0008;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = pbStack_a0;
    }
LAB_1012d0100:
    lVar11 = ((ulong)((long)pbVar14 - (long)pbVar22) >> 5) + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100e077ec(pbVar22);
      pbVar22 = pbVar22 + 0x20;
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar9 = FUN_108855b04(param_2,&puStack_a8,&UNK_10b20b5a0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar14 = pbVar20 + lVar11;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_f0 = pbVar20;
    pbStack_d8 = pbVar14;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar19 = 0;
      puVar18 = (undefined *)0x8000000000000000;
      pbStack_118 = (byte *)0x0;
      lStack_120 = in_x12;
    }
    else {
      lVar23 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar13 = (undefined8 *)((ulong)&pbStack_110 | 1);
      bVar19 = 2;
      puVar18 = (undefined *)0x8000000000000000;
      puVar17 = (undefined *)0x8000000000000000;
      pbVar1 = pbVar20;
      pbStack_e8 = pbVar20;
      do {
        pbVar21 = pbVar1 + 0x40;
        bVar16 = *pbVar1;
        pbVar20 = pbVar21;
        lVar24 = lVar23;
        if (bVar16 == 0x16) break;
        uVar9 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 1);
        puVar15[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar15 = uVar9;
        pbStack_108 = *(byte **)(pbVar1 + 0x28);
        pbStack_110 = *(byte **)(pbVar1 + 0x20);
        pbStack_f8 = *(byte **)(pbVar1 + 0x38);
        puStack_100 = *(undefined **)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar16;
        if (bVar16 < 0xd) {
          if (bVar16 == 1) {
            iVar12 = 1;
            if (bStack_8f != 1) {
              iVar12 = 2;
            }
            iVar10 = 0;
            if (bStack_8f != 0) {
              iVar10 = iVar12;
            }
            goto LAB_1012cfeb4;
          }
          if (bVar16 == 4) {
            iVar12 = 1;
            if (plVar3 != (long *)0x1) {
              iVar12 = 2;
            }
            iVar10 = 0;
            if (plVar3 != (long *)0x0) {
              iVar10 = iVar12;
            }
            goto LAB_1012cfeb4;
          }
          if (bVar16 == 0xc) {
            if (lStack_78 == 0xb) {
              iVar10 = 1;
              if (*plVar4 != 0x6c65526563726f66 || *(long *)((long)plVar4 + 3) != 0x64616f6c65526563
                 ) {
                iVar10 = 2;
              }
            }
            else if (lStack_78 == 4) {
              iVar10 = 2;
              if ((int)*plVar4 == 0x73647763) {
                iVar10 = 0;
              }
            }
            else {
              iVar10 = 2;
            }
            goto joined_r0x0001012cfd90;
          }
LAB_1012d0410:
          lStack_d0 = lVar23 + 1;
          pbStack_b8 = pbStack_118;
          lStack_b0 = lStack_120;
          pbStack_e8 = pbVar21;
          puStack_c0 = puVar17;
          uVar9 = FUN_108855b04(&bStack_90,&puStack_a8,&UNK_10b211be0);
LAB_1012d043c:
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          if (puVar18 != (undefined *)0x8000000000000000) {
LAB_1012d0458:
            if (lStack_120 != 0) {
              pbVar14 = pbStack_118 + 8;
              do {
                if (*(long *)(pbVar14 + -8) != 0) {
                  _free(*(undefined8 *)pbVar14);
                }
                pbVar14 = pbVar14 + 0x18;
                lStack_120 = lStack_120 + -1;
              } while (lStack_120 != 0);
            }
            if (puVar18 != (undefined *)0x0) {
              _free(pbStack_118);
            }
          }
LAB_1012d0248:
          FUN_100d34830(&pbStack_f0);
          if ((byte)pbStack_110 != '\x16') {
            FUN_100e077ec(&pbStack_110);
          }
          goto LAB_1012d0294;
        }
        if (bVar16 == 0xd) {
          if (plVar4 == (long *)0xb) {
            iVar10 = 1;
            if (*plVar3 != 0x6c65526563726f66 || *(long *)((long)plVar3 + 3) != 0x64616f6c65526563)
            {
              iVar10 = 2;
            }
          }
          else {
            if (plVar4 != (long *)0x4) goto LAB_1012cfe6c;
            iVar10 = 2;
            if ((int)*plVar3 == 0x73647763) {
              iVar10 = 0;
            }
          }
LAB_1012cfeb4:
          FUN_100e077ec(&bStack_90);
        }
        else {
          if (bVar16 != 0xe) {
            if (bVar16 != 0xf) goto LAB_1012d0410;
            if (plVar4 == (long *)0xb) {
              if ((((((char)*plVar3 != 'f') || (*(char *)((long)plVar3 + 1) != 'o')) ||
                   (*(char *)((long)plVar3 + 2) != 'r')) ||
                  (((*(char *)((long)plVar3 + 3) != 'c' || (*(char *)((long)plVar3 + 4) != 'e')) ||
                   ((*(char *)((long)plVar3 + 5) != 'R' ||
                    ((*(char *)((long)plVar3 + 6) != 'e' || (*(char *)((long)plVar3 + 7) != 'l')))))
                   ))) || (((char)plVar3[1] != 'o' ||
                           ((*(char *)((long)plVar3 + 9) != 'a' ||
                            (*(char *)((long)plVar3 + 10) != 'd')))))) goto LAB_1012cfe6c;
              iVar10 = 1;
            }
            else if ((((plVar4 == (long *)0x4) && ((char)*plVar3 == 'c')) &&
                     (*(char *)((long)plVar3 + 1) == 'w')) &&
                    ((*(char *)((long)plVar3 + 2) == 'd' && (*(char *)((long)plVar3 + 3) == 's'))))
            {
              iVar10 = 0;
            }
            else {
LAB_1012cfe6c:
              iVar10 = 2;
            }
            goto LAB_1012cfeb4;
          }
          if (lStack_78 == 0xb) {
            if ((((((char)*plVar4 != 'f') || (*(char *)((long)plVar4 + 1) != 'o')) ||
                 ((*(char *)((long)plVar4 + 2) != 'r' ||
                  (((*(char *)((long)plVar4 + 3) != 'c' || (*(char *)((long)plVar4 + 4) != 'e')) ||
                   (*(char *)((long)plVar4 + 5) != 'R')))))) ||
                ((*(char *)((long)plVar4 + 6) != 'e' || (*(char *)((long)plVar4 + 7) != 'l')))) ||
               (((char)plVar4[1] != 'o' ||
                ((*(char *)((long)plVar4 + 9) != 'a' || (*(char *)((long)plVar4 + 10) != 'd'))))))
            goto LAB_1012cfd8c;
            iVar10 = 1;
          }
          else if ((((lStack_78 == 4) && ((char)*plVar4 == 'c')) &&
                   (*(char *)((long)plVar4 + 1) == 'w')) &&
                  ((*(char *)((long)plVar4 + 2) == 'd' && (*(char *)((long)plVar4 + 3) == 's')))) {
            iVar10 = 0;
          }
          else {
LAB_1012cfd8c:
            iVar10 = 2;
          }
joined_r0x0001012cfd90:
          if (plVar3 != (long *)0x0) {
            _free();
          }
        }
        bVar6 = bStack_8f;
        bVar16 = (byte)pbStack_110;
        if (iVar10 == 0) {
          if (puVar18 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar23 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            puStack_a8 = &UNK_108cde460;
            pbStack_a0 = (byte *)0x4;
            bStack_90 = (byte)&puStack_a8;
            bStack_8f = (byte)((ulong)&puStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar21;
            puStack_c0 = puVar17;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            goto LAB_1012d0458;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar16 == 0x16) {
            lStack_d0 = lVar23 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            pbStack_e8 = pbVar21;
            puStack_c0 = puVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012d03dc;
          }
          uVar9 = *puVar13;
          puVar15[1] = puVar13[1];
          *puVar15 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
          bStack_90 = bVar16;
          FUN_10061cfd8(&puStack_a8,&bStack_90);
          pbStack_118 = pbStack_a0;
          if (puStack_a8 == (undefined *)0x8000000000000000) {
            lStack_d0 = lVar23 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a0;
            pbStack_e8 = pbVar21;
            goto LAB_1012d0248;
          }
          lStack_120 = lStack_98;
          puVar17 = puStack_a8;
          puVar18 = puStack_a8;
        }
        else {
          if (iVar10 == 1) {
            if (bVar19 == 2) {
              pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
              if (bVar16 == 0x16) goto LAB_1012d02c8;
              uVar9 = *puVar13;
              puVar15[1] = puVar13[1];
              *puVar15 = uVar9;
              uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
              *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
              *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
              bStack_90 = bVar16;
              if (bVar16 == 0) {
                FUN_100e077ec(&bStack_90);
                bVar19 = bVar6;
                goto LAB_1012cfb64;
              }
              lStack_d0 = lVar23 + 1;
              pbStack_b8 = pbStack_118;
              lStack_b0 = lStack_120;
              pbStack_e8 = pbVar21;
              puStack_c0 = puVar17;
              uVar9 = FUN_108855b04(&bStack_90,&puStack_a8,&UNK_10b20a560);
            }
            else {
              lStack_d0 = lVar23 + 1;
              pbStack_b8 = pbStack_118;
              lStack_b0 = lStack_120;
              puStack_a8 = &UNK_108cc00f3;
              pbStack_a0 = (byte *)0xb;
              bStack_90 = (byte)&puStack_a8;
              bStack_8f = (byte)((ulong)&puStack_a8 >> 8);
              uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbStack_e8 = pbVar21;
              puStack_c0 = puVar17;
              uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            }
            goto LAB_1012d043c;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar16 == 0x16) {
LAB_1012d02c8:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            lStack_d0 = lVar23 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            pbStack_e8 = pbVar21;
            puStack_c0 = puVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012d03dc:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1012d03e0);
            (*pcVar7)();
          }
          uVar9 = *puVar13;
          puVar15[1] = puVar13[1];
          *puVar15 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
          bStack_90 = bVar16;
          FUN_100e077ec(&bStack_90);
        }
LAB_1012cfb64:
        lVar23 = lVar23 + 1;
        pbVar20 = pbVar14;
        lVar24 = (lVar11 - 0x40U >> 6) + 1;
        pbVar1 = pbVar21;
      } while (pbVar21 != pbVar14);
      bVar19 = bVar19 & 1;
      lStack_d0 = lVar24;
    }
    lVar11 = lStack_d0;
    bVar8 = puVar18 != (undefined *)0x8000000000000000;
    puVar17 = (undefined *)0x0;
    if (bVar8) {
      puVar17 = puVar18;
    }
    pbVar1 = (byte *)0x8;
    if (bVar8) {
      pbVar1 = pbStack_118;
    }
    *param_1 = puVar17;
    param_1[1] = pbVar1;
    lVar23 = 0;
    if (bVar8) {
      lVar23 = lStack_120;
    }
    param_1[2] = lVar23;
    *(byte *)(param_1 + 3) = bVar19;
    pbStack_e8 = pbVar20;
    FUN_100d34830(&pbStack_f0);
    if (pbVar14 == pbVar20) goto LAB_1012d0294;
    bStack_90 = (byte)lVar11;
    bStack_8f = (byte)((ulong)lVar11 >> 8);
    uStack_8e = (undefined6)((ulong)lVar11 >> 0x10);
    uVar9 = FUN_1087e422c(((ulong)((long)pbVar14 - (long)pbVar20) >> 6) + lVar11,&bStack_90,
                          &UNK_10b23a190);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    if (lVar23 != 0) {
      pbVar14 = pbVar1 + 8;
      do {
        if (*(long *)(pbVar14 + -8) != 0) {
          _free(*(undefined8 *)pbVar14);
        }
        pbVar14 = pbVar14 + 0x18;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
  }
joined_r0x0001012d016c:
  if (puVar17 != (undefined *)0x0) {
    _free(pbVar1);
  }
LAB_1012d0294:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

