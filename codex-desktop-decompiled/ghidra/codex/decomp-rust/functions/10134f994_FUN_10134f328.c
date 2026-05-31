
/* WARNING: Removing unreachable block (ram,0x00010134fb50) */

void FUN_10134f328(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lStack_130;
  byte *pbStack_128;
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
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  if (*param_2 != '\x14') {
    if (*param_2 != '\x15') {
      uVar6 = FUN_108855b04(param_2,&puStack_a8,&UNK_10b20caa0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar6;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbStack_f0 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar12 = pbStack_f0 + lVar9;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_d8 = pbVar12;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar17 = (undefined *)0x8000000000000000;
      puStack_c0 = (undefined *)0x8000000000000000;
      lStack_120 = unaff_x19;
      pbStack_e8 = pbStack_f0;
    }
    else {
      lVar18 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar10 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar17 = (undefined *)0x8000000000000000;
      puVar14 = (undefined *)0x8000000000000000;
      puVar16 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_f0;
      pbStack_e8 = pbStack_f0;
      do {
        pbVar11 = pbVar1 + 0x40;
        bVar2 = *pbVar1;
        pbVar13 = pbVar11;
        lVar19 = lVar18;
        if (bVar2 == 0x16) break;
        uVar6 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar6;
        uVar6 = *(undefined8 *)(pbVar1 + 1);
        puVar15[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar15 = uVar6;
        pbStack_108 = *(byte **)(pbVar1 + 0x28);
        pbStack_110 = *(byte **)(pbVar1 + 0x20);
        pbStack_f8 = *(byte **)(pbVar1 + 0x38);
        puStack_100 = *(undefined **)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
        bStack_90 = bVar2;
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            iVar8 = 1;
            if (cStack_8f != '\x01') {
              iVar8 = 2;
            }
            iVar7 = 0;
            if (cStack_8f != '\0') {
              iVar7 = iVar8;
            }
          }
          else {
            if (bVar2 != 4) {
              if (bVar2 == 0xc) {
                if (lStack_78 == 5) {
                  iVar7 = 1;
                  if ((int)*plVar4 != 0x6d657469 || *(char *)((long)plVar4 + 4) != 's') {
                    iVar7 = 2;
                  }
                }
                else if (lStack_78 == 8) {
                  iVar7 = 2;
                  if (*plVar4 == 0x6449646165726874) {
                    iVar7 = 0;
                  }
                }
                else {
                  iVar7 = 2;
                }
                goto joined_r0x00010134f660;
              }
LAB_10134fd80:
              lStack_d0 = lVar18 + 1;
              pbStack_b8 = pbStack_118;
              lStack_b0 = lStack_120;
              pbStack_e8 = pbVar11;
              puStack_c0 = puVar16;
              uVar6 = FUN_108855b04(&bStack_90,&puStack_a8,&UNK_10b20f500);
              goto LAB_10134f9a4;
            }
            iVar8 = 1;
            if (plVar3 != (long *)0x1) {
              iVar8 = 2;
            }
            iVar7 = 0;
            if (plVar3 != (long *)0x0) {
              iVar7 = iVar8;
            }
          }
LAB_10134f6e0:
          FUN_100e077ec(&bStack_90);
        }
        else {
          if (bVar2 == 0xd) {
            if (plVar4 == (long *)0x5) {
              iVar7 = 1;
              if ((int)*plVar3 != 0x6d657469 || *(char *)((long)plVar3 + 4) != 's') {
                iVar7 = 2;
              }
            }
            else {
              if (plVar4 != (long *)0x8) goto LAB_10134f6ac;
              iVar7 = 2;
              if (*plVar3 == 0x6449646165726874) {
                iVar7 = 0;
              }
            }
            goto LAB_10134f6e0;
          }
          if (bVar2 != 0xe) {
            if (bVar2 != 0xf) goto LAB_10134fd80;
            if (plVar4 == (long *)0x5) {
              if (((((char)*plVar3 != 'i') || (*(char *)((long)plVar3 + 1) != 't')) ||
                  (*(char *)((long)plVar3 + 2) != 'e')) ||
                 ((*(char *)((long)plVar3 + 3) != 'm' || (*(char *)((long)plVar3 + 4) != 's'))))
              goto LAB_10134f6ac;
              iVar7 = 1;
            }
            else if (((((plVar4 == (long *)0x8) && ((char)*plVar3 == 't')) &&
                      ((*(char *)((long)plVar3 + 1) == 'h' &&
                       (((*(char *)((long)plVar3 + 2) == 'r' && (*(char *)((long)plVar3 + 3) == 'e')
                         ) && (*(char *)((long)plVar3 + 4) == 'a')))))) &&
                     ((*(char *)((long)plVar3 + 5) == 'd' && (*(char *)((long)plVar3 + 6) == 'I'))))
                    && (*(char *)((long)plVar3 + 7) == 'd')) {
              iVar7 = 0;
            }
            else {
LAB_10134f6ac:
              iVar7 = 2;
            }
            goto LAB_10134f6e0;
          }
          if (lStack_78 == 5) {
            if ((((char)*plVar4 != 'i') || (*(char *)((long)plVar4 + 1) != 't')) ||
               ((*(char *)((long)plVar4 + 2) != 'e' ||
                ((*(char *)((long)plVar4 + 3) != 'm' || (*(char *)((long)plVar4 + 4) != 's'))))))
            goto LAB_10134f628;
            iVar7 = 1;
          }
          else if (((((lStack_78 == 8) && ((char)*plVar4 == 't')) &&
                    (*(char *)((long)plVar4 + 1) == 'h')) &&
                   ((*(char *)((long)plVar4 + 2) == 'r' && (*(char *)((long)plVar4 + 3) == 'e'))))
                  && (((*(char *)((long)plVar4 + 4) == 'a' &&
                       ((*(char *)((long)plVar4 + 5) == 'd' && (*(char *)((long)plVar4 + 6) == 'I'))
                       )) && (*(char *)((long)plVar4 + 7) == 'd')))) {
            iVar7 = 0;
          }
          else {
LAB_10134f628:
            iVar7 = 2;
          }
joined_r0x00010134f660:
          if (plVar3 != (long *)0x0) {
            _free();
          }
        }
        bVar2 = (byte)pbStack_110;
        if (iVar7 == 0) {
          if (puVar14 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar18 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            puStack_a8 = &UNK_108c982f8;
            pbStack_a0 = (byte *)0x8;
            bStack_90 = (byte)&puStack_a8;
            cStack_8f = (char)((ulong)&puStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar11;
            puStack_c0 = puVar16;
            uVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_10134f9a4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar2 == 0x16) {
            lStack_d0 = lVar18 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            pbStack_e8 = pbVar11;
            puStack_c0 = puVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10134fd7c;
          }
          uVar6 = *puVar10;
          puVar15[1] = puVar10[1];
          *puVar15 = uVar6;
          uVar6 = *(undefined8 *)((long)puVar10 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar10 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar6;
          bStack_90 = bVar2;
          FUN_1004b62d4(&puStack_a8,&bStack_90);
          if (puStack_a8 == (undefined *)0x8000000000000000) {
            lStack_d0 = lVar18 + 1;
            puVar14 = (undefined *)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a0;
            lStack_b0 = lStack_120;
            pbStack_b8 = pbStack_118;
            pbStack_e8 = pbVar11;
            puStack_c0 = puVar16;
            goto joined_r0x00010134fb18;
          }
          pbStack_128 = pbStack_a0;
          lStack_130 = lStack_98;
          puVar14 = puStack_a8;
        }
        else if (iVar7 == 1) {
          if (puVar17 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar18 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            puStack_a8 = &UNK_108cbbc01;
            pbStack_a0 = (byte *)0x5;
            bStack_90 = (byte)&puStack_a8;
            cStack_8f = (char)((ulong)&puStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar11;
            puStack_c0 = puVar16;
            uVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar6;
            goto LAB_10134f9b4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar2 == 0x16) {
            lStack_d0 = lVar18 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            pbStack_e8 = pbVar11;
            puStack_c0 = puVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10134fd7c;
          }
          uVar6 = *puVar10;
          puVar15[1] = puVar10[1];
          *puVar15 = uVar6;
          uVar6 = *(undefined8 *)((long)puVar10 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar10 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar6;
          bStack_90 = bVar2;
          FUN_10132fb4c(&puStack_a8,&bStack_90);
          if (puStack_a8 == (undefined *)0x8000000000000000) {
            lStack_d0 = lVar18 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a0;
            pbStack_e8 = pbVar11;
            goto LAB_10134fb1c;
          }
          lStack_120 = lStack_98;
          pbStack_118 = pbStack_a0;
          puVar16 = puStack_a8;
          puVar17 = puStack_a8;
        }
        else {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar2 == 0x16) {
            lStack_d0 = lVar18 + 1;
            pbStack_b8 = pbStack_118;
            lStack_b0 = lStack_120;
            pbStack_e8 = pbVar11;
            puStack_c0 = puVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10134fd7c:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10134fd80);
            (*pcVar5)();
          }
          uVar6 = *puVar10;
          puVar15[1] = puVar10[1];
          *puVar15 = uVar6;
          uVar6 = *(undefined8 *)((long)puVar10 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar10 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar6;
          bStack_90 = bVar2;
          FUN_100e077ec(&bStack_90);
        }
        lVar18 = lVar18 + 1;
        pbVar13 = pbVar12;
        lVar19 = (lVar9 - 0x40U >> 6) + 1;
        pbVar1 = pbVar11;
      } while (pbVar11 != pbVar12);
      pbStack_b8 = pbStack_118;
      lStack_b0 = lStack_120;
      pbStack_e8 = pbVar13;
      lStack_d0 = lVar19;
      puStack_c0 = puVar16;
      if (puVar14 != (undefined *)0x8000000000000000) {
        if (puVar17 != (undefined *)0x8000000000000000) {
          *param_1 = puVar14;
          param_1[1] = pbStack_128;
          param_1[2] = lStack_130;
          param_1[3] = puVar17;
          param_1[4] = pbStack_118;
          param_1[5] = lStack_120;
          FUN_100d34830(&pbStack_f0);
          if (pbVar12 == pbVar13) {
            return;
          }
          bStack_90 = (byte)lVar19;
          cStack_8f = (char)((ulong)lVar19 >> 8);
          uStack_8e = (undefined6)((ulong)lVar19 >> 0x10);
          uVar6 = FUN_1087e422c(((ulong)((long)pbVar12 - (long)pbVar13) >> 6) + lVar19,&bStack_90,
                                &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar6;
          if (puVar14 != (undefined *)0x0) {
            _free(pbStack_128);
          }
          lVar9 = lStack_120 + 1;
          pbVar12 = pbStack_118;
          while (lVar9 = lVar9 + -1, lVar9 != 0) {
            FUN_100de6690(pbVar12);
            pbVar12 = pbVar12 + 0x48;
          }
          if (puVar17 == (undefined *)0x0) {
            return;
          }
          _free(pbStack_118);
          return;
        }
        puStack_a8 = &UNK_108cbbc01;
        pbStack_a0 = (byte *)0x5;
        bStack_90 = (byte)&puStack_a8;
        cStack_8f = (char)((ulong)&puStack_a8 >> 8);
        uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
        uStack_88 = 0xa0;
        uStack_87 = 0x100c7b3;
        uVar6 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar6;
        goto joined_r0x00010134fa2c;
      }
    }
    puStack_a8 = &UNK_108c982f8;
    pbStack_a0 = (byte *)0x8;
    bStack_90 = (byte)&puStack_a8;
    cStack_8f = (char)((ulong)&puStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    puVar14 = (undefined *)0x0;
    uVar6 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_10134f9a4:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar6;
joined_r0x00010134fb18:
    if (puVar17 != (undefined *)0x8000000000000000) {
LAB_10134f9b4:
      lVar9 = lStack_120 + 1;
      pbVar12 = pbStack_118;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100de6690(pbVar12);
        pbVar12 = pbVar12 + 0x48;
      }
      if (puVar17 != (undefined *)0x0) {
        _free(pbStack_118);
      }
    }
LAB_10134fb1c:
    puVar14 = (undefined *)((ulong)puVar14 & 0x7fffffffffffffff);
joined_r0x00010134fa2c:
    if (puVar14 != (undefined *)0x0) {
      _free(pbStack_128);
    }
    FUN_100d34830(&pbStack_f0);
    if ((byte)pbStack_110 == '\x16') {
      return;
    }
    FUN_100e077ec(&pbStack_110);
    return;
  }
  puVar17 = *(undefined **)(param_2 + 8);
  pbVar13 = *(byte **)(param_2 + 0x10);
  lVar9 = *(long *)(param_2 + 0x18);
  pbVar1 = pbVar13 + lVar9 * 0x20;
  pbStack_f0 = (byte *)0x0;
  pbVar12 = pbVar13;
  pbStack_110 = pbVar13;
  puStack_100 = puVar17;
  pbStack_f8 = pbVar1;
  if (lVar9 == 0) {
LAB_10134f82c:
    pbStack_108 = pbVar12;
    pbStack_a0 = (byte *)FUN_1087e422c(0,&UNK_10b232168,&UNK_10b20a590);
LAB_10134f848:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbStack_a0;
  }
  else {
    pbVar12 = pbVar13 + 0x20;
    if (*pbVar13 == 0x16) goto LAB_10134f82c;
    uVar6 = *(undefined8 *)(pbVar13 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar13 + 9);
    cStack_8f = (char)uVar6;
    uStack_8e = (undefined6)((ulong)uVar6 >> 8);
    uStack_88 = (undefined1)((ulong)uVar6 >> 0x38);
    lStack_78 = *(long *)(pbVar13 + 0x18);
    uStack_80 = (undefined1)*(undefined8 *)(pbVar13 + 0x10);
    uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x10) >> 8);
    pbStack_f0 = (byte *)0x1;
    pbStack_108 = pbVar12;
    bStack_90 = *pbVar13;
    FUN_1004b62d4(&puStack_a8,&bStack_90);
    lVar18 = lStack_98;
    pbVar11 = pbStack_a0;
    puVar14 = puStack_a8;
    if (puStack_a8 == (undefined *)0x8000000000000000) goto LAB_10134f848;
    if (lVar9 == 1) {
LAB_10134f904:
      pbStack_a0 = (byte *)FUN_1087e422c(1,&UNK_10b232168,&UNK_10b20a590);
    }
    else {
      pbVar12 = pbVar13 + 0x40;
      pbStack_108 = pbVar12;
      if (pbVar13[0x20] == 0x16) goto LAB_10134f904;
      uVar6 = *(undefined8 *)(pbVar13 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar13 + 0x29);
      cStack_8f = (char)uVar6;
      uStack_8e = (undefined6)((ulong)uVar6 >> 8);
      uStack_88 = (undefined1)((ulong)uVar6 >> 0x38);
      lStack_78 = *(long *)(pbVar13 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar13 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 0x30) >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_90 = pbVar13[0x20];
      FUN_10132fb4c(&puStack_a8,&bStack_90);
      if (puStack_a8 != (undefined *)0x8000000000000000) {
        *param_1 = puVar14;
        param_1[1] = pbVar11;
        param_1[2] = lVar18;
        param_1[3] = puStack_a8;
        param_1[4] = pbStack_a0;
        param_1[5] = lStack_98;
        lVar9 = FUN_100fbc738(&pbStack_110);
        if (lVar9 == 0) {
          return;
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar9;
        if (puVar14 != (undefined *)0x0) {
          _free(pbVar11);
        }
        lVar9 = lStack_98 + 1;
        pbVar12 = pbStack_a0;
        while (lVar9 = lVar9 + -1, lVar9 != 0) {
          FUN_100de6690(pbVar12);
          pbVar12 = pbVar12 + 0x48;
        }
        goto joined_r0x00010134f878;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = pbStack_a0;
    if (puVar14 != (undefined *)0x0) {
      _free(pbVar11);
    }
  }
  lVar9 = ((ulong)((long)pbVar1 - (long)pbVar12) >> 5) + 1;
  while (lVar9 = lVar9 + -1, pbStack_a0 = pbVar13, puStack_a8 = puVar17, lVar9 != 0) {
    FUN_100e077ec(pbVar12);
    pbVar12 = pbVar12 + 0x20;
  }
joined_r0x00010134f878:
  if (puStack_a8 != (undefined *)0x0) {
    _free(pbStack_a0);
  }
  return;
}

