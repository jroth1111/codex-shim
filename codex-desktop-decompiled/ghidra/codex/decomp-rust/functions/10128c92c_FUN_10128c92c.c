
void FUN_10128c92c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  char cStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puVar19 = *(undefined **)(param_2 + 8);
    pbVar18 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar18 + lVar12 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar14 = pbVar18;
    pbStack_f0 = pbVar18;
    puStack_e0 = puVar19;
    pbStack_d8 = pbVar1;
    if (lVar12 == 0) {
LAB_10128cde0:
      pbStack_e8 = pbVar14;
      pbVar17 = (byte *)FUN_1087e422c(0,&UNK_10b231d68,&UNK_10b20a590);
LAB_10128cdfc:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar17;
LAB_10128ce04:
      lVar12 = ((ulong)((long)pbVar1 - (long)pbVar14) >> 5) + 1;
      while (lVar12 = lVar12 + -1, pbVar8 = pbVar18, puVar6 = puVar19, lVar12 != 0) {
        FUN_100e077ec(pbVar14);
        pbVar14 = pbVar14 + 0x20;
      }
    }
    else {
      pbVar14 = pbVar18 + 0x20;
      if (*pbVar18 == 0x16) goto LAB_10128cde0;
      uVar9 = *(undefined8 *)(pbVar18 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar18 + 9);
      cStack_87 = (char)uVar9;
      uStack_86 = (undefined6)((ulong)uVar9 >> 8);
      uStack_80 = (undefined1)((ulong)uVar9 >> 0x38);
      lStack_70 = *(long *)(pbVar18 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar18 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar14;
      bStack_88 = *pbVar18;
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      uVar9 = uStack_90;
      pbVar17 = pbStack_98;
      puVar15 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10128cdfc;
      if (lVar12 == 1) {
LAB_10128cea4:
        pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b231d68,&UNK_10b20a590);
LAB_10128cebc:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar8;
        if (puVar15 != (undefined *)0x0) {
          _free(pbVar17);
        }
        goto LAB_10128ce04;
      }
      pbVar14 = pbVar18 + 0x40;
      pbStack_e8 = pbVar14;
      if (pbVar18[0x20] == 0x16) goto LAB_10128cea4;
      uVar22 = *(undefined8 *)(pbVar18 + 0x21);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar18 + 0x29);
      cStack_87 = (char)uVar22;
      uStack_86 = (undefined6)((ulong)uVar22 >> 8);
      uStack_80 = (undefined1)((ulong)uVar22 >> 0x38);
      lStack_70 = *(long *)(pbVar18 + 0x38);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar18 + 0x30);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_88 = pbVar18[0x20];
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar8 = pbStack_98;
      puVar6 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10128cebc;
      *param_1 = puVar15;
      param_1[1] = pbVar17;
      param_1[2] = uVar9;
      param_1[3] = puStack_a0;
      param_1[4] = pbStack_98;
      param_1[5] = uStack_90;
      lVar12 = FUN_100fbc738(&pbStack_f0);
      if (lVar12 == 0) goto LAB_10128d0a0;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar12;
      if (puVar15 != (undefined *)0x0) {
        _free(pbVar17);
      }
    }
    if (puVar6 != (undefined *)0x0) {
      _free(pbVar8);
    }
    goto LAB_10128d0a0;
  }
  if (bVar3 != 0x15) {
    uVar9 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20bd80);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar14 = pbStack_d0 + lVar12;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_b8 = pbVar14;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar19 = (undefined *)0x0;
    pbStack_c8 = pbStack_d0;
LAB_10128cf00:
    puStack_a0 = &UNK_108c982f8;
    pbStack_98 = (byte *)0x8;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    puVar15 = (undefined *)0x0;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_10128cf34:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
joined_r0x00010128d074:
    puVar19 = (undefined *)((ulong)puVar19 & 0x7fffffffffffffff);
joined_r0x00010128d1b0:
    if (puVar19 != (undefined *)0x0) {
      _free(pbStack_100);
    }
LAB_10128d078:
    puVar15 = (undefined *)((ulong)puVar15 & 0x7fffffffffffffff);
  }
  else {
    lVar20 = 0;
    puVar16 = (undefined8 *)((ulong)&bStack_88 | 1);
    puVar13 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar15 = (undefined *)0x8000000000000000;
    puVar19 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar17 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      pbVar18 = pbVar17;
      lVar21 = lVar20;
      if (bVar2 == 0x16) break;
      uVar9 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar16 + 0xf) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 1);
      puVar16[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar16 = uVar9;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
      plVar5 = (long *)CONCAT71(uStack_77,uStack_78);
      bStack_88 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          iVar11 = 1;
          if (cStack_87 != '\x01') {
            iVar11 = 2;
          }
          iVar10 = 0;
          if (cStack_87 != '\0') {
            iVar10 = iVar11;
          }
        }
        else {
          if (bVar2 != 4) {
            if (bVar2 == 0xc) {
              if (lStack_70 == 4) {
                iVar10 = 1;
                if ((int)*plVar5 != 0x656d616e) {
                  iVar10 = 2;
                }
              }
              else if (lStack_70 == 8) {
                iVar10 = 2;
                if (*plVar5 == 0x6449646165726874) {
                  iVar10 = 0;
                }
              }
              else {
                iVar10 = 2;
              }
              goto joined_r0x00010128cc44;
            }
LAB_10128d290:
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar17;
            uVar9 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20ce60);
            goto LAB_10128cf34;
          }
          iVar11 = 1;
          if (plVar4 != (long *)0x1) {
            iVar11 = 2;
          }
          iVar10 = 0;
          if (plVar4 != (long *)0x0) {
            iVar10 = iVar11;
          }
        }
LAB_10128cca4:
        FUN_100e077ec(&bStack_88);
      }
      else {
        if (bVar2 == 0xd) {
          if (plVar5 == (long *)0x4) {
            iVar10 = 1;
            if ((int)*plVar4 != 0x656d616e) {
              iVar10 = 2;
            }
          }
          else {
            if (plVar5 != (long *)0x8) goto LAB_10128cc84;
            iVar10 = 2;
            if (*plVar4 == 0x6449646165726874) {
              iVar10 = 0;
            }
          }
          goto LAB_10128cca4;
        }
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_10128d290;
          if (plVar5 == (long *)0x4) {
            if (((((char)*plVar4 != 'n') || (*(char *)((long)plVar4 + 1) != 'a')) ||
                (*(char *)((long)plVar4 + 2) != 'm')) || (*(char *)((long)plVar4 + 3) != 'e'))
            goto LAB_10128cc84;
            iVar10 = 1;
          }
          else if (((((plVar5 == (long *)0x8) && ((char)*plVar4 == 't')) &&
                    ((*(char *)((long)plVar4 + 1) == 'h' &&
                     ((*(char *)((long)plVar4 + 2) == 'r' && (*(char *)((long)plVar4 + 3) == 'e'))))
                    )) && (*(char *)((long)plVar4 + 4) == 'a')) &&
                  (((*(char *)((long)plVar4 + 5) == 'd' && (*(char *)((long)plVar4 + 6) == 'I')) &&
                   (*(char *)((long)plVar4 + 7) == 'd')))) {
            iVar10 = 0;
          }
          else {
LAB_10128cc84:
            iVar10 = 2;
          }
          goto LAB_10128cca4;
        }
        if (lStack_70 == 4) {
          if ((((char)*plVar5 != 'n') || (*(char *)((long)plVar5 + 1) != 'a')) ||
             ((*(char *)((long)plVar5 + 2) != 'm' || (*(char *)((long)plVar5 + 3) != 'e'))))
          goto LAB_10128cc20;
          iVar10 = 1;
        }
        else if ((((lStack_70 == 8) && ((char)*plVar5 == 't')) &&
                 ((*(char *)((long)plVar5 + 1) == 'h' &&
                  ((((*(char *)((long)plVar5 + 2) == 'r' && (*(char *)((long)plVar5 + 3) == 'e')) &&
                    (*(char *)((long)plVar5 + 4) == 'a')) &&
                   ((*(char *)((long)plVar5 + 5) == 'd' && (*(char *)((long)plVar5 + 6) == 'I'))))))
                 )) && (*(char *)((long)plVar5 + 7) == 'd')) {
          iVar10 = 0;
        }
        else {
LAB_10128cc20:
          iVar10 = 2;
        }
joined_r0x00010128cc44:
        if (plVar4 != (long *)0x0) {
          _free();
        }
      }
      bVar2 = (byte)pbStack_f0;
      if (iVar10 == 0) {
        if (puVar15 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          puStack_a0 = &UNK_108c982f8;
          pbStack_98 = (byte *)0x8;
          bStack_88 = (byte)&puStack_a0;
          cStack_87 = (char)((ulong)&puStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar17;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          goto LAB_10128cf34;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10128d28c;
        }
        uVar9 = *puVar13;
        puVar16[1] = puVar13[1];
        *puVar16 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar9;
        bStack_88 = bVar2;
        FUN_1004b62d4(&puStack_a0,&bStack_88);
        if (puStack_a0 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          puVar15 = (undefined *)0x0;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_98;
          pbStack_c8 = pbVar17;
          goto joined_r0x00010128d074;
        }
        pbStack_f8 = pbStack_98;
        uStack_108 = uStack_90;
        puVar15 = puStack_a0;
      }
      else if (iVar10 == 1) {
        if (puVar19 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          puStack_a0 = &UNK_108c61018;
          pbStack_98 = (byte *)0x4;
          bStack_88 = (byte)&puStack_a0;
          cStack_87 = (char)((ulong)&puStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar17;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          goto joined_r0x00010128d1b0;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10128d28c;
        }
        uVar9 = *puVar13;
        puVar16[1] = puVar13[1];
        *puVar16 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar9;
        bStack_88 = bVar2;
        FUN_1004b62d4(&puStack_a0,&bStack_88);
        if (puStack_a0 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_98;
          pbStack_c8 = pbVar17;
          goto LAB_10128d078;
        }
        pbStack_100 = pbStack_98;
        uStack_110 = uStack_90;
        puVar19 = puStack_a0;
      }
      else {
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10128d28c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10128d290);
          (*pcVar7)();
        }
        uVar9 = *puVar13;
        puVar16[1] = puVar13[1];
        *puVar16 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar9;
        bStack_88 = bVar2;
        FUN_100e077ec(&bStack_88);
      }
      lVar20 = lVar20 + 1;
      pbVar18 = pbVar14;
      lVar21 = (lVar12 - 0x40U >> 6) + 1;
      pbVar1 = pbVar17;
    } while (pbVar17 != pbVar14);
    pbStack_c8 = pbVar18;
    lStack_b0 = lVar21;
    if (puVar15 == (undefined *)0x8000000000000000) goto LAB_10128cf00;
    if (puVar19 != (undefined *)0x8000000000000000) {
      *param_1 = puVar15;
      param_1[1] = pbStack_f8;
      param_1[2] = uStack_108;
      param_1[3] = puVar19;
      param_1[4] = pbStack_100;
      param_1[5] = uStack_110;
      FUN_100d34830(&pbStack_d0);
      if (pbVar14 != pbVar18) {
        bStack_88 = (byte)lVar21;
        cStack_87 = (char)((ulong)lVar21 >> 8);
        uStack_86 = (undefined6)((ulong)lVar21 >> 0x10);
        uVar9 = FUN_1087e422c(((ulong)((long)pbVar14 - (long)pbVar18) >> 6) + lVar21,&bStack_88,
                              &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar9;
        if (puVar15 != (undefined *)0x0) {
          _free(pbStack_f8);
        }
        if (puVar19 != (undefined *)0x0) {
          _free(pbStack_100);
        }
      }
      goto LAB_10128d0a0;
    }
    puStack_a0 = &UNK_108c61018;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
  }
  if (puVar15 != (undefined *)0x0) {
    _free(pbStack_f8);
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_10128d0a0:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

