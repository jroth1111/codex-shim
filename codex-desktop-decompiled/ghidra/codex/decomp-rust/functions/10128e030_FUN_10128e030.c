
void FUN_10128e030(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  ulong *puVar5;
  code *pcVar6;
  bool bVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *unaff_x19;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  long lStack_110;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined *puStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_a8;
  undefined *puStack_a0;
  byte *pbStack_98;
  long lStack_90;
  byte bStack_88;
  char cStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  bVar3 = *param_2;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      uVar9 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20aea0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      return;
    }
    uStack_d0 = *(undefined8 *)(param_2 + 8);
    pbStack_e0 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar8 = pbStack_e0 + lVar10;
    pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
    lStack_c0 = 0;
    pbStack_d8 = pbStack_e0;
    pbStack_c8 = pbVar8;
    if (*(long *)(param_2 + 0x18) == 0) {
      puStack_b8 = (undefined *)0x8000000000000000;
    }
    else {
      lVar18 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar13 = (undefined8 *)((ulong)&pbStack_100 | 1);
      puVar17 = (undefined *)0x8000000000000000;
      puVar14 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_e0;
      do {
        pbVar20 = pbVar1 + 0x40;
        bVar2 = *pbVar1;
        lVar19 = lVar18;
        pbVar16 = pbVar20;
        if (bVar2 == 0x16) break;
        uVar9 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 1);
        puVar15[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar15 = uVar9;
        pbStack_f8 = *(byte **)(pbVar1 + 0x28);
        pbStack_100 = *(byte **)(pbVar1 + 0x20);
        pbStack_e8 = *(byte **)(pbVar1 + 0x38);
        puStack_f0 = *(undefined **)(pbVar1 + 0x30);
        plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
        puVar5 = (ulong *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar2;
        if (0xc < bVar2) {
          if (bVar2 == 0xd) {
            if (puVar5 == (ulong *)0xe) {
              bVar7 = false;
              if (*plVar4 == 0x6f6974617267696d) {
                bVar7 = *(long *)((long)plVar4 + 6) == 0x736d6574496e6f69;
              }
              goto LAB_10128e35c;
            }
LAB_10128e364:
            bVar7 = true;
            goto LAB_10128e368;
          }
          if (bVar2 != 0xe) {
            if (bVar2 != 0xf) goto LAB_10128e7d8;
            if ((((((puVar5 != (ulong *)0xe) || ((char)*plVar4 != 'm')) ||
                  (*(char *)((long)plVar4 + 1) != 'i')) ||
                 ((*(char *)((long)plVar4 + 2) != 'g' || (*(char *)((long)plVar4 + 3) != 'r')))) ||
                (*(char *)((long)plVar4 + 4) != 'a')) ||
               ((((*(char *)((long)plVar4 + 5) != 't' || (*(char *)((long)plVar4 + 6) != 'i')) ||
                 ((*(char *)((long)plVar4 + 7) != 'o' ||
                  ((((char)plVar4[1] != 'n' || (*(char *)((long)plVar4 + 9) != 'I')) ||
                   (*(char *)((long)plVar4 + 10) != 't')))))) ||
                ((*(char *)((long)plVar4 + 0xb) != 'e' || (*(char *)((long)plVar4 + 0xc) != 'm')))))
               ) goto LAB_10128e364;
            bVar7 = *(char *)((long)plVar4 + 0xd) == 's';
            goto LAB_10128e35c;
          }
          if ((((lStack_70 == 0xe) && ((char)*puVar5 == 'm')) &&
              ((*(char *)((long)puVar5 + 1) == 'i' &&
               (((*(char *)((long)puVar5 + 2) == 'g' && (*(char *)((long)puVar5 + 3) == 'r')) &&
                (*(char *)((long)puVar5 + 4) == 'a')))))) &&
             (((*(char *)((long)puVar5 + 5) == 't' && (*(char *)((long)puVar5 + 6) == 'i')) &&
              ((*(char *)((long)puVar5 + 7) == 'o' &&
               ((((char)puVar5[1] == 'n' && (*(char *)((long)puVar5 + 9) == 'I')) &&
                ((*(char *)((long)puVar5 + 10) == 't' &&
                 ((*(char *)((long)puVar5 + 0xb) == 'e' && (*(char *)((long)puVar5 + 0xc) == 'm'))))
                )))))))) {
            bVar7 = *(char *)((long)puVar5 + 0xd) != 's';
          }
          else {
            bVar7 = true;
          }
          if (plVar4 == (long *)0x0) goto LAB_10128e370;
          _free();
          if (bVar7) goto LAB_10128e374;
LAB_10128e3b8:
          if (puVar17 != (undefined *)0x8000000000000000) {
            lStack_c0 = lVar18 + 1;
            lStack_a8 = lStack_110;
            puStack_a0 = &UNK_108cc1a1c;
            pbStack_98 = (byte *)0xe;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_d8 = pbVar20;
            puStack_b8 = puVar14;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
LAB_10128e724:
            if (lStack_110 != 0) {
              pbVar8 = unaff_x19 + 0x30;
              do {
                if (*(long *)(pbVar8 + -0x30) != 0) {
                  _free(*(undefined8 *)(pbVar8 + -0x28));
                }
                if (*(long *)(pbVar8 + -0x18) == -0x8000000000000000 ||
                    *(long *)(pbVar8 + -0x18) == 0) {
                  lVar10 = *(long *)pbVar8;
                }
                else {
                  _free(*(undefined8 *)(pbVar8 + -0x10));
                  lVar10 = *(long *)pbVar8;
                }
                if (lVar10 != -0x8000000000000000) {
                  FUN_100e589f4(pbVar8);
                }
                pbVar8 = pbVar8 + 200;
                lStack_110 = lStack_110 + -1;
              } while (lStack_110 != 0);
            }
            if (puVar17 != (undefined *)0x0) {
              _free(unaff_x19);
            }
            goto LAB_10128e5f4;
          }
          bVar2 = (byte)pbStack_100;
          pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
          if (bVar2 == 0x16) {
            lStack_c0 = lVar18 + 1;
            lStack_a8 = lStack_110;
            pbStack_d8 = pbVar20;
            puStack_b8 = puVar14;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10128e7d4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10128e7d8);
            (*pcVar6)();
          }
          uVar9 = *puVar13;
          puVar15[1] = puVar13[1];
          *puVar15 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
          bStack_88 = bVar2;
          func_0x0001012f6e08(&puStack_a0,&bStack_88);
          if (puStack_a0 != (undefined *)0x8000000000000000) {
            lStack_110 = lStack_90;
            unaff_x19 = pbStack_98;
            puVar14 = puStack_a0;
            puVar17 = puStack_a0;
            goto LAB_10128e0d4;
          }
          lStack_c0 = lVar18 + 1;
          pbVar8 = pbStack_98;
          pbStack_d8 = pbVar20;
          goto LAB_10128e5ec;
        }
        if (bVar2 != 1) {
          if (bVar2 == 4) {
            bVar7 = plVar4 == (long *)0x0;
            goto LAB_10128e35c;
          }
          if (bVar2 == 0xc) {
            if (lStack_70 == 0xe) {
              uVar11 = *puVar5;
              uVar12 = *(ulong *)((long)puVar5 + 6) ^ 0x736d6574496e6f69;
              bVar7 = (uVar11 ^ 0x6f6974617267696d) != 0 || uVar12 != 0;
              if (plVar4 == (long *)0x0) goto LAB_10128e370;
              _free();
              if ((uVar11 ^ 0x6f6974617267696d) == 0 && uVar12 == 0) goto LAB_10128e3b8;
            }
            else if (plVar4 != (long *)0x0) {
              _free();
            }
            goto LAB_10128e374;
          }
LAB_10128e7d8:
          lStack_c0 = lVar18 + 1;
          lStack_a8 = lStack_110;
          pbStack_d8 = pbVar20;
          puStack_b8 = puVar14;
          uVar9 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20d440);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          if (puVar17 != (undefined *)0x8000000000000000) goto LAB_10128e724;
          goto LAB_10128e5f4;
        }
        bVar7 = cStack_87 == '\0';
LAB_10128e35c:
        bVar7 = !bVar7;
LAB_10128e368:
        FUN_100e077ec(&bStack_88);
LAB_10128e370:
        if (!bVar7) goto LAB_10128e3b8;
LAB_10128e374:
        bVar2 = (byte)pbStack_100;
        pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_c0 = lVar18 + 1;
          lStack_a8 = lStack_110;
          pbStack_d8 = pbVar20;
          puStack_b8 = puVar14;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10128e7d4;
        }
        uVar9 = *puVar13;
        puVar15[1] = puVar13[1];
        *puVar15 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
        bStack_88 = bVar2;
        FUN_100e077ec(&bStack_88);
LAB_10128e0d4:
        lVar18 = lVar18 + 1;
        lVar19 = (lVar10 - 0x40U >> 6) + 1;
        pbVar16 = pbVar8;
        pbVar1 = pbVar20;
      } while (pbVar20 != pbVar8);
      lStack_a8 = lStack_110;
      pbStack_d8 = pbVar16;
      lStack_c0 = lVar19;
      puStack_b8 = puVar14;
      if (puVar17 != (undefined *)0x8000000000000000) {
        *param_1 = puVar17;
        param_1[1] = unaff_x19;
        param_1[2] = lStack_110;
        FUN_100d34830(&pbStack_e0);
        if (pbVar8 != pbVar16) {
          bStack_88 = (byte)lVar19;
          cStack_87 = (char)((ulong)lVar19 >> 8);
          uStack_86 = (undefined6)((ulong)lVar19 >> 0x10);
          uVar9 = FUN_1087e422c(((ulong)((long)pbVar8 - (long)pbVar16) >> 6) + lVar19,&bStack_88,
                                &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          if (lStack_110 != 0) {
            pbVar8 = unaff_x19 + 0x30;
            do {
              if (*(long *)(pbVar8 + -0x30) != 0) {
                _free(*(undefined8 *)(pbVar8 + -0x28));
              }
              if (*(long *)(pbVar8 + -0x18) == -0x8000000000000000 || *(long *)(pbVar8 + -0x18) == 0
                 ) {
                lVar10 = *(long *)pbVar8;
              }
              else {
                _free(*(undefined8 *)(pbVar8 + -0x10));
                lVar10 = *(long *)pbVar8;
              }
              if (lVar10 != -0x8000000000000000) {
                FUN_100e589f4(pbVar8);
              }
              pbVar8 = pbVar8 + 200;
              lStack_110 = lStack_110 + -1;
            } while (lStack_110 != 0);
          }
          if (puVar17 != (undefined *)0x0) {
            _free(unaff_x19);
          }
        }
        goto LAB_10128e63c;
      }
    }
    puStack_a0 = &UNK_108cc1a1c;
    pbStack_98 = (byte *)0xe;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_10128e5ec:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar8;
LAB_10128e5f4:
    FUN_100d34830(&pbStack_e0);
    if ((byte)pbStack_100 != '\x16') {
      FUN_100e077ec(&pbStack_100);
    }
    goto LAB_10128e63c;
  }
  puVar14 = *(undefined **)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  pbVar8 = pbVar1 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_e0 = (byte *)0x0;
  pbVar16 = pbVar1;
  pbStack_100 = pbVar1;
  puStack_f0 = puVar14;
  pbStack_e8 = pbVar8;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_10128e45c:
    pbStack_f8 = pbVar16;
    pbVar20 = (byte *)FUN_1087e422c(0,&UNK_10b232510,&UNK_10b20a590);
LAB_10128e478:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar20;
    lVar10 = ((ulong)((long)pbVar8 - (long)pbVar16) >> 5) + 1;
    while (lVar10 = lVar10 + -1, pbVar20 = pbVar1, puVar17 = puVar14, lVar10 != 0) {
      FUN_100e077ec(pbVar16);
      pbVar16 = pbVar16 + 0x20;
    }
  }
  else {
    pbVar16 = pbVar1 + 0x20;
    if (*pbVar1 == 0x16) goto LAB_10128e45c;
    uVar9 = *(undefined8 *)(pbVar1 + 1);
    uStack_7f = (undefined7)*(undefined8 *)(pbVar1 + 9);
    cStack_87 = (char)uVar9;
    uStack_86 = (undefined6)((ulong)uVar9 >> 8);
    uStack_80 = (undefined1)((ulong)uVar9 >> 0x38);
    lStack_70 = *(long *)(pbVar1 + 0x18);
    uStack_78 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
    uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
    pbStack_e0 = (byte *)0x1;
    pbStack_f8 = pbVar16;
    bStack_88 = *pbVar1;
    func_0x0001012f6e08(&puStack_a0,&bStack_88);
    pbVar20 = pbStack_98;
    puVar17 = puStack_a0;
    if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10128e478;
    *param_1 = puStack_a0;
    param_1[1] = pbStack_98;
    param_1[2] = lStack_90;
    lVar10 = FUN_100fbc738(&pbStack_100);
    if (lVar10 == 0) goto LAB_10128e63c;
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar10;
    if (lStack_90 != 0) {
      pbVar8 = pbVar20 + 0x30;
      lVar10 = lStack_90;
      do {
        if (*(long *)(pbVar8 + -0x30) != 0) {
          _free(*(undefined8 *)(pbVar8 + -0x28));
        }
        if (*(long *)(pbVar8 + -0x18) == -0x8000000000000000 || *(long *)(pbVar8 + -0x18) == 0) {
          lVar18 = *(long *)pbVar8;
        }
        else {
          _free(*(undefined8 *)(pbVar8 + -0x10));
          lVar18 = *(long *)pbVar8;
        }
        if (lVar18 != -0x8000000000000000) {
          FUN_100e589f4(pbVar8);
        }
        pbVar8 = pbVar8 + 200;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  if (puVar17 != (undefined *)0x0) {
    _free(pbVar20);
  }
LAB_10128e63c:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

