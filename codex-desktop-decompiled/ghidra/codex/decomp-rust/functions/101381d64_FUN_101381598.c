
void FUN_101381598(long *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar11;
  byte bVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_130;
  long lStack_128;
  char *pcStack_120;
  char *pcStack_118;
  long lStack_110;
  char *pcStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  char cStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char *pcStack_78;
  undefined1 auStack_69 [9];
  byte *pbVar10;
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    lStack_110 = *(long *)(param_2 + 8);
    pcStack_120 = *(char **)(param_2 + 0x10);
    pcStack_108 = pcStack_120 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_100 = (byte *)0x0;
    pcStack_118 = pcStack_120;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101381ac0:
      bVar12 = 0;
LAB_101381b00:
      FUN_100f2ea54(&cStack_90,&pcStack_120);
      lVar15 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,cStack_90));
      pcVar6 = (char *)CONCAT71(uStack_87,uStack_88);
      if (lVar15 != -0x7ffffffffffffffe) {
        if (lVar15 != -0x7fffffffffffffff) {
          lVar19 = CONCAT71(uStack_7f,uStack_80);
          *param_1 = lVar15;
          param_1[1] = (long)pcVar6;
          param_1[2] = lVar19;
          *(byte *)(param_1 + 3) = bVar12;
          lVar13 = FUN_100fbc738(&pcStack_120);
          if (lVar13 == 0) goto LAB_101381ca8;
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lVar13;
          if (lVar15 == -0x8000000000000000) goto LAB_101381ca8;
          if (lVar19 != 0) {
            pcVar4 = pcVar6 + 8;
            do {
              if (*(long *)(pcVar4 + -8) != 0) {
                _free(*(undefined8 *)pcVar4);
              }
              pcVar4 = pcVar4 + 0x18;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          goto joined_r0x000101381c9c;
        }
        pcVar6 = (char *)FUN_1087e422c(1,&UNK_10b232500,&UNK_10b20a590);
      }
    }
    else {
      pcStack_118 = pcStack_120 + 0x20;
      cVar1 = *pcStack_120;
      if (cVar1 == '\x16') goto LAB_101381ac0;
      uVar20 = *(undefined8 *)(pcStack_120 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pcStack_120 + 9);
      bStack_8f = (byte)uVar20;
      bVar12 = bStack_8f;
      uStack_8e = (undefined6)((ulong)uVar20 >> 8);
      uStack_88 = (undefined1)((ulong)uVar20 >> 0x38);
      pcStack_78 = *(char **)(pcStack_120 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pcStack_120 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pcStack_120 + 0x10) >> 8);
      pbStack_100 = (byte *)0x1;
      cStack_90 = cVar1;
      if (cVar1 == '\0') {
        FUN_100e077ec(&cStack_90);
        goto LAB_101381b00;
      }
      pcVar6 = (char *)FUN_108855b04(&cStack_90,auStack_69,&UNK_10b20a560);
    }
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = (long)pcVar6;
    lVar19 = ((ulong)((long)pcStack_108 - (long)pcStack_118) >> 5) + 1;
    pcVar4 = pcStack_118;
    while (lVar19 = lVar19 + -1, pcVar6 = pcStack_120, lVar15 = lStack_110, lVar19 != 0) {
      FUN_100e077ec(pcVar4);
      pcVar4 = pcVar4 + 0x20;
    }
  }
  else {
    if (bVar2 != 0x15) {
      lVar15 = FUN_108855b04(param_2,auStack_69,&UNK_10b20c9e0);
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar15;
      return;
    }
    uStack_f0 = *(undefined8 *)(param_2 + 8);
    pbVar9 = *(byte **)(param_2 + 0x10);
    pbVar5 = pbVar9 + *(long *)(param_2 + 0x18) * 0x40;
    pcStack_120 = (char *)CONCAT71(pcStack_120._1_7_,0x16);
    lStack_e0 = 0;
    lStack_d8 = -0x7fffffffffffffff;
    pbStack_100 = pbVar9;
    pbStack_e8 = pbVar5;
    if (*(long *)(param_2 + 0x18) == 0) {
      lVar15 = -0x8000000000000000;
      bVar12 = 0;
      pbStack_f8 = pbVar9;
    }
    else {
      puVar14 = (undefined8 *)((ulong)&uStack_b0 | 1);
      puVar18 = (undefined8 *)((ulong)&pcStack_120 | 1);
      puVar16 = (undefined8 *)((ulong)&cStack_90 | 1);
      lVar15 = -0x7fffffffffffffff;
      lVar19 = -0x7fffffffffffffff;
      pbVar10 = pbVar9;
      pbVar17 = pbVar5;
      bVar12 = 2;
      do {
        pbVar5 = pbVar17;
        pbVar9 = pbVar10 + 0x40;
        bVar11 = *pbVar10;
        pbStack_f8 = pbVar9;
        if (bVar11 == 0x16) break;
        lStack_e0 = lStack_e0 + 1;
        uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,bVar11);
        uVar20 = *(undefined8 *)(pbVar10 + 1);
        uVar22 = *(undefined8 *)(pbVar10 + 0x18);
        uVar21 = *(undefined8 *)(pbVar10 + 0x10);
        uVar24 = *(undefined8 *)(pbVar10 + 0x28);
        uVar23 = *(undefined8 *)(pbVar10 + 0x20);
        puVar14[1] = *(undefined8 *)(pbVar10 + 9);
        *puVar14 = uVar20;
        *(undefined8 *)((long)puVar14 + 0x17) = uVar22;
        *(undefined8 *)((long)puVar14 + 0xf) = uVar21;
        pcStack_78 = *(char **)(pbVar10 + 0x38);
        uStack_88 = (undefined1)uVar24;
        uStack_87 = (undefined7)((ulong)uVar24 >> 8);
        cStack_90 = (char)uVar23;
        bStack_8f = (byte)((ulong)uVar23 >> 8);
        uStack_8e = (undefined6)((ulong)uVar23 >> 0x10);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar10 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 0x30) >> 8);
        if ((char)pcStack_120 != '\x16') {
          FUN_100e077ec(&pcStack_120);
        }
        pcStack_118 = (char *)CONCAT71(uStack_87,uStack_88);
        pcStack_120 = (char *)CONCAT62(uStack_8e,CONCAT11(bStack_8f,cStack_90));
        lStack_110 = CONCAT71(uStack_7f,uStack_80);
        pcStack_108 = pcStack_78;
        if (bVar11 < 0xd) {
          if (bVar11 == 1) {
            iVar8 = 1;
            if (uStack_b0._1_1_ != '\x01') {
              iVar8 = 2;
            }
            iVar7 = 0;
            if (uStack_b0._1_1_ != '\0') {
              iVar7 = iVar8;
            }
            goto LAB_1013819ac;
          }
          if (bVar11 == 4) {
            iVar8 = 1;
            if (plStack_a8 != (long *)0x1) {
              iVar8 = 2;
            }
            iVar7 = 0;
            if (plStack_a8 != (long *)0x0) {
              iVar7 = iVar8;
            }
            goto LAB_1013819ac;
          }
          if (bVar11 == 0xc) {
            if (lStack_98 == 4) {
              iVar7 = 1;
              if ((int)*plStack_a0 != 0x73647763) {
                iVar7 = 2;
              }
            }
            else if (lStack_98 == 0xb) {
              iVar7 = 2;
              if (*plStack_a0 == 0x486564756c636e69 &&
                  *(long *)((long)plStack_a0 + 3) == 0x656d6f486564756c) {
                iVar7 = 0;
              }
            }
            else {
              iVar7 = 2;
            }
            goto joined_r0x00010138194c;
          }
LAB_101381e00:
          lStack_d0 = lStack_128;
          lStack_c8 = lStack_130;
          lStack_d8 = lVar19;
          lVar19 = FUN_108855b04(&uStack_b0,auStack_69,&UNK_10b20d1a0);
LAB_101381e20:
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lVar19;
          if (-0x7fffffffffffffff < lVar15) {
LAB_101381e48:
            if (lStack_130 != 0) {
              puVar14 = (undefined8 *)(lStack_128 + 8);
              do {
                if (puVar14[-1] != 0) {
                  _free(*puVar14);
                }
                puVar14 = puVar14 + 3;
                lStack_130 = lStack_130 + -1;
              } while (lStack_130 != 0);
            }
            if (lVar15 != 0) {
              _free(lStack_128);
            }
          }
LAB_101381cf0:
          FUN_100d34830(&pbStack_100);
          if ((char)pcStack_120 != '\x16') {
            FUN_100e077ec(&pcStack_120);
          }
          goto LAB_101381ca8;
        }
        if (bVar11 == 0xd) {
          if (plStack_a0 == (long *)0x4) {
            iVar7 = 1;
            if ((int)*plStack_a8 != 0x73647763) {
              iVar7 = 2;
            }
          }
          else {
            if (plStack_a0 != (long *)0xb) goto LAB_10138198c;
            iVar7 = 2;
            if (*plStack_a8 == 0x486564756c636e69 &&
                *(long *)((long)plStack_a8 + 3) == 0x656d6f486564756c) {
              iVar7 = 0;
            }
          }
LAB_1013819ac:
          FUN_100e077ec(&uStack_b0);
        }
        else {
          if (bVar11 != 0xe) {
            if (bVar11 != 0xf) goto LAB_101381e00;
            if (plStack_a0 == (long *)0x4) {
              if (((((char)*plStack_a8 != 'c') || (*(char *)((long)plStack_a8 + 1) != 'w')) ||
                  (*(char *)((long)plStack_a8 + 2) != 'd')) ||
                 (*(char *)((long)plStack_a8 + 3) != 's')) goto LAB_10138198c;
              iVar7 = 1;
            }
            else if ((((plStack_a0 == (long *)0xb) && ((char)*plStack_a8 == 'i')) &&
                     ((*(char *)((long)plStack_a8 + 1) == 'n' &&
                      ((*(char *)((long)plStack_a8 + 2) == 'c' &&
                       (*(char *)((long)plStack_a8 + 3) == 'l')))))) &&
                    ((*(char *)((long)plStack_a8 + 4) == 'u' &&
                     (((((*(char *)((long)plStack_a8 + 5) == 'd' &&
                         (*(char *)((long)plStack_a8 + 6) == 'e')) &&
                        (*(char *)((long)plStack_a8 + 7) == 'H')) &&
                       (((char)plStack_a8[1] == 'o' && (*(char *)((long)plStack_a8 + 9) == 'm'))))
                      && (*(char *)((long)plStack_a8 + 10) == 'e')))))) {
              iVar7 = 0;
            }
            else {
LAB_10138198c:
              iVar7 = 2;
            }
            goto LAB_1013819ac;
          }
          if (lStack_98 == 4) {
            if ((((char)*plStack_a0 != 'c') || (*(char *)((long)plStack_a0 + 1) != 'w')) ||
               ((*(char *)((long)plStack_a0 + 2) != 'd' || (*(char *)((long)plStack_a0 + 3) != 's'))
               )) goto LAB_101381928;
            iVar7 = 1;
          }
          else if (((((lStack_98 == 0xb) && ((char)*plStack_a0 == 'i')) &&
                    (*(char *)((long)plStack_a0 + 1) == 'n')) &&
                   ((*(char *)((long)plStack_a0 + 2) == 'c' &&
                    (*(char *)((long)plStack_a0 + 3) == 'l')))) &&
                  ((((*(char *)((long)plStack_a0 + 4) == 'u' &&
                     ((*(char *)((long)plStack_a0 + 5) == 'd' &&
                      (*(char *)((long)plStack_a0 + 6) == 'e')))) &&
                    (*(char *)((long)plStack_a0 + 7) == 'H')) &&
                   ((((char)plStack_a0[1] == 'o' && (*(char *)((long)plStack_a0 + 9) == 'm')) &&
                    (*(char *)((long)plStack_a0 + 10) == 'e')))))) {
            iVar7 = 0;
          }
          else {
LAB_101381928:
            iVar7 = 2;
          }
joined_r0x00010138194c:
          if (plStack_a8 != (long *)0x0) {
            _free();
          }
        }
        bVar11 = bStack_8f;
        cVar1 = (char)pcStack_120;
        pbVar17 = pbVar5;
        if (iVar7 == 0) {
          if (bVar12 == 2) {
            pcStack_120 = (char *)CONCAT71(pcStack_120._1_7_,0x16);
            if (cVar1 == '\x16') goto LAB_101381d10;
            uVar20 = *puVar18;
            puVar16[1] = puVar18[1];
            *puVar16 = uVar20;
            uVar20 = *(undefined8 *)((long)puVar18 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar20;
            cStack_90 = cVar1;
            if (cVar1 == '\0') {
              FUN_100e077ec(&cStack_90);
              goto LAB_101381634;
            }
            lStack_d0 = lStack_128;
            lStack_c8 = lStack_130;
            lStack_d8 = lVar19;
            lVar19 = FUN_108855b04(&cStack_90,auStack_69,&UNK_10b20a560);
          }
          else {
            lStack_d0 = lStack_128;
            lStack_c8 = lStack_130;
            uStack_b0 = &UNK_108cc19db;
            plStack_a8 = (long *)0xb;
            cStack_90 = (char)&uStack_b0;
            bStack_8f = (byte)((ulong)&uStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            lStack_d8 = lVar19;
            lVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
          }
          goto LAB_101381e20;
        }
        bVar11 = bVar12;
        if (iVar7 == 1) {
          if (lVar15 == -0x7fffffffffffffff) {
            func_0x000100f1ef50(&cStack_90,&pcStack_120);
            lVar15 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,cStack_90));
            lStack_128 = CONCAT71(uStack_87,uStack_88);
            if (lVar15 != -0x7fffffffffffffff) {
              lStack_130 = CONCAT71(uStack_7f,uStack_80);
              pbVar9 = pbStack_f8;
              pbVar17 = pbStack_e8;
              lVar19 = lVar15;
              goto LAB_101381634;
            }
            *param_1 = -0x7fffffffffffffff;
            param_1[1] = lStack_128;
          }
          else {
            lStack_d0 = lStack_128;
            lStack_c8 = lStack_130;
            uStack_b0 = &UNK_108cde460;
            plStack_a8 = (long *)0x4;
            cStack_90 = (char)&uStack_b0;
            bStack_8f = (byte)((ulong)&uStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            lStack_d8 = lVar19;
            lVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
            *param_1 = -0x7fffffffffffffff;
            param_1[1] = lVar19;
            if (lVar15 != -0x8000000000000000) goto LAB_101381e48;
          }
          goto LAB_101381cf0;
        }
        pcStack_120 = (char *)CONCAT71(pcStack_120._1_7_,0x16);
        if (cVar1 == '\x16') {
LAB_101381d10:
          pcStack_120 = (char *)CONCAT71(pcStack_120._1_7_,0x16);
          lStack_d0 = lStack_128;
          lStack_c8 = lStack_130;
          lStack_d8 = lVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101381d38);
          (*pcVar3)();
        }
        uVar20 = *puVar18;
        puVar16[1] = puVar18[1];
        *puVar16 = uVar20;
        uVar20 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar20;
        cStack_90 = cVar1;
        FUN_100e077ec(&cStack_90);
LAB_101381634:
        pbVar5 = pbVar9;
        pbVar10 = pbVar5;
        pbVar9 = pbVar5;
        bVar12 = bVar11;
      } while (pbVar5 != pbVar17);
      lStack_d0 = lStack_128;
      lStack_c8 = lStack_130;
      if (lVar15 == -0x7fffffffffffffff) {
        lVar15 = -0x8000000000000000;
      }
      else {
        lStack_b8 = lStack_130;
        lStack_c0 = lStack_128;
      }
    }
    *param_1 = lVar15;
    param_1[2] = lStack_b8;
    param_1[1] = lStack_c0;
    *(byte *)(param_1 + 3) = bVar12 & 1;
    pcVar6 = (char *)param_1[1];
    lVar19 = param_1[2];
    FUN_100d34830(&pbStack_100);
    if (pbVar5 == pbVar9) {
      lVar13 = 0;
    }
    else {
      cStack_90 = (char)lStack_e0;
      bStack_8f = (byte)((ulong)lStack_e0 >> 8);
      uStack_8e = (undefined6)((ulong)lStack_e0 >> 0x10);
      lVar13 = FUN_1087e422c(lStack_e0 + ((ulong)((long)pbVar5 - (long)pbVar9) >> 6),&cStack_90,
                             &UNK_10b23a190);
    }
    if ((char)pcStack_120 != '\x16') {
      FUN_100e077ec(&pcStack_120);
    }
    if (lVar13 == 0) goto LAB_101381ca8;
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = lVar13;
    if (lVar15 == -0x8000000000000000) goto LAB_101381ca8;
    if (lVar19 != 0) {
      pcVar4 = pcVar6 + 8;
      do {
        if (*(long *)(pcVar4 + -8) != 0) {
          _free(*(undefined8 *)pcVar4);
        }
        pcVar4 = pcVar4 + 0x18;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
joined_r0x000101381c9c:
  if (lVar15 != 0) {
    _free(pcVar6);
  }
LAB_101381ca8:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

