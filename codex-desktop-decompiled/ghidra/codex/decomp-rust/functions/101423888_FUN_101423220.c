
void FUN_101423220(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte *pbVar8;
  long *plVar9;
  ulong *puVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  byte *pbStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  byte bStack_98;
  char cStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  bVar6 = *param_2;
  if (bVar6 == 0x14) {
    lVar14 = *(long *)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    pbVar1 = pbVar16 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar18 = pbVar16;
    pbStack_e0 = pbVar16;
    lStack_d0 = lVar14;
    pbStack_c8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101423674:
      pbStack_d8 = pbVar18;
      lVar19 = FUN_1087e422c(0,&UNK_10b22e788,&UNK_10b20a590);
    }
    else {
      pbVar18 = pbVar16 + 0x20;
      if (*pbVar16 == 0x16) goto LAB_101423674;
      uVar23 = *(undefined8 *)(pbVar16 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar16 + 9);
      cStack_97 = (char)uVar23;
      uStack_96 = (undefined6)((ulong)uVar23 >> 8);
      uStack_90 = (undefined1)((ulong)uVar23 >> 0x38);
      lStack_80 = *(long *)(pbVar16 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar16 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar16 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar18;
      bStack_98 = *pbVar16;
      FUN_101226150(&puStack_78,&bStack_98);
      lVar19 = lStack_70;
      if ((char)puStack_78 != '\x01') {
        pbVar16 = (byte *)((ulong)puStack_78 >> 8 & 0xff);
        lVar19 = FUN_100fbc738(&pbStack_e0);
        goto LAB_1014237c8;
      }
    }
    lVar20 = ((ulong)((long)pbVar1 - (long)pbVar18) >> 5) + 1;
    while (lVar20 = lVar20 + -1, lVar20 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
    if (lVar14 == 0) {
LAB_101423820:
      bVar12 = true;
      if ((bVar6 & 0x1e) != 0x14) {
LAB_101423778:
        FUN_100e077ec(param_2);
      }
    }
    else {
      _free(pbVar16);
      bVar12 = true;
    }
LAB_101423780:
    if (!bVar12) {
      uVar13 = 0;
      param_1[1] = (char)pbVar16;
      goto LAB_101423798;
    }
  }
  else {
    if (bVar6 == 0x15) {
      uStack_b0 = *(undefined8 *)(param_2 + 8);
      pbVar18 = *(byte **)(param_2 + 0x10);
      lVar14 = *(long *)(param_2 + 0x18) * 0x40;
      pbVar1 = pbVar18 + lVar14;
      pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
      lStack_a0 = 0;
      pbStack_c0 = pbVar18;
      pbStack_a8 = pbVar1;
      if (*(long *)(param_2 + 0x18) == 0) {
        pbVar16 = (byte *)0x2;
      }
      else {
        lVar19 = 0;
        puVar21 = (undefined8 *)((ulong)&bStack_98 | 1);
        puVar22 = (undefined8 *)((ulong)&pbStack_e0 | 1);
        pbVar16 = (byte *)0x3;
        pbVar8 = pbVar18;
        pbStack_b8 = pbVar18;
        do {
          cVar7 = cStack_97;
          uVar15 = (uint)pbVar16;
          pbVar17 = pbVar8 + 0x40;
          bVar5 = *pbVar8;
          pbVar18 = pbVar17;
          lVar20 = lVar19;
          if (bVar5 == 0x16) break;
          uVar23 = *(undefined8 *)(pbVar8 + 0x10);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbVar8 + 0x18);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar23;
          uVar23 = *(undefined8 *)(pbVar8 + 1);
          puVar21[1] = *(undefined8 *)(pbVar8 + 9);
          *puVar21 = uVar23;
          pbStack_d8 = *(byte **)(pbVar8 + 0x28);
          pbStack_e0 = *(byte **)(pbVar8 + 0x20);
          pbStack_c8 = *(byte **)(pbVar8 + 0x38);
          lStack_d0 = *(long *)(pbVar8 + 0x30);
          plVar9 = (long *)CONCAT71(uStack_8f,uStack_90);
          puVar10 = (ulong *)CONCAT71(uStack_87,uStack_88);
          bStack_98 = bVar5;
          if (0xc < bVar5) {
            if (bVar5 == 0xd) {
              if (puVar10 != (ulong *)0x10) {
LAB_101423598:
                FUN_100e077ec(&bStack_98);
                goto LAB_10142360c;
              }
              cVar7 = *plVar9 != 0x6156616d65686373 || plVar9[1] != 0x6e6f69746164696c;
              FUN_100e077ec(&bStack_98);
              goto LAB_101423590;
            }
            if (bVar5 == 0xe) {
              if ((((((lStack_80 == 0x10) && ((char)*puVar10 == 's')) &&
                    (*(char *)((long)puVar10 + 1) == 'c')) &&
                   (((*(char *)((long)puVar10 + 2) == 'h' && (*(char *)((long)puVar10 + 3) == 'e'))
                    && ((*(char *)((long)puVar10 + 4) == 'm' &&
                        ((*(char *)((long)puVar10 + 5) == 'a' &&
                         (*(char *)((long)puVar10 + 6) == 'V')))))))) &&
                  ((*(char *)((long)puVar10 + 7) == 'a' &&
                   ((((char)puVar10[1] == 'l' && (*(char *)((long)puVar10 + 9) == 'i')) &&
                    (*(char *)((long)puVar10 + 10) == 'd')))))) &&
                 (((*(char *)((long)puVar10 + 0xb) == 'a' && (*(char *)((long)puVar10 + 0xc) == 't')
                   ) && ((*(char *)((long)puVar10 + 0xd) == 'i' &&
                         (*(char *)((long)puVar10 + 0xe) == 'o')))))) {
                bVar12 = *(char *)((long)puVar10 + 0xf) != 'n';
              }
              else {
                bVar12 = true;
              }
              if (plVar9 != (long *)0x0) {
                _free();
              }
LAB_1014235b0:
              if (bVar12) goto LAB_10142360c;
            }
            else {
              if (bVar5 != 0xf) goto LAB_10142389c;
              if ((((puVar10 != (ulong *)0x10) || ((char)*plVar9 != 's')) ||
                  ((*(char *)((long)plVar9 + 1) != 'c' ||
                   ((((*(char *)((long)plVar9 + 2) != 'h' || (*(char *)((long)plVar9 + 3) != 'e'))
                     || (*(char *)((long)plVar9 + 4) != 'm')) ||
                    ((*(char *)((long)plVar9 + 5) != 'a' || (*(char *)((long)plVar9 + 6) != 'V')))))
                   ))) || (((*(char *)((long)plVar9 + 7) != 'a' ||
                            (((char)plVar9[1] != 'l' || (*(char *)((long)plVar9 + 9) != 'i')))) ||
                           (((*(char *)((long)plVar9 + 10) != 'd' ||
                             (((*(char *)((long)plVar9 + 0xb) != 'a' ||
                               (*(char *)((long)plVar9 + 0xc) != 't')) ||
                              (*(char *)((long)plVar9 + 0xd) != 'i')))) ||
                            (*(char *)((long)plVar9 + 0xe) != 'o')))))) goto LAB_101423598;
              cVar7 = *(char *)((long)plVar9 + 0xf);
              FUN_100e077ec(&bStack_98);
              if (cVar7 != 'n') goto LAB_10142360c;
            }
LAB_1014235b4:
            if (uVar15 == 3) {
              bVar5 = (byte)pbStack_e0;
              pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
              if (bVar5 == 0x16) {
LAB_101423834:
                lStack_a0 = lVar19 + 1;
                pbStack_b8 = pbVar17;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10142385c);
                (*pcVar11)();
              }
              uVar23 = *puVar22;
              puVar21[1] = puVar22[1];
              *puVar21 = uVar23;
              uVar23 = *(undefined8 *)((long)puVar22 + 0xf);
              *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
              *(undefined8 *)((long)puVar21 + 0xf) = uVar23;
              bStack_98 = bVar5;
              FUN_101226150(&puStack_78,&bStack_98);
              if (((ulong)puStack_78 & 1) == 0) {
                pbVar16 = (byte *)((ulong)puStack_78 >> 8 & 0xff);
                goto LAB_1014232c0;
              }
              lStack_a0 = lVar19 + 1;
              lVar19 = lStack_70;
              pbStack_b8 = pbVar17;
            }
            else {
              lStack_a0 = lVar19 + 1;
              puStack_78 = &UNK_108cdd010;
              lStack_70 = 0x10;
              bStack_98 = (byte)&puStack_78;
              cStack_97 = (char)((ulong)&puStack_78 >> 8);
              uStack_96 = (undefined6)((ulong)&puStack_78 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              pbStack_b8 = pbVar17;
              lVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
            }
LAB_1014237f4:
            FUN_100d34830(&pbStack_c0);
            if ((byte)pbStack_e0 != '\x16') {
              FUN_100e077ec(&pbStack_e0);
            }
            goto LAB_101423820;
          }
          if (bVar5 == 1) {
            FUN_100e077ec(&bStack_98);
LAB_101423590:
            if (cVar7 != '\0') goto LAB_10142360c;
            goto LAB_1014235b4;
          }
          if (bVar5 != 4) {
            if (bVar5 == 0xc) {
              if (lStack_80 == 0x10) {
                uVar3 = *puVar10;
                uVar4 = puVar10[1];
                bVar12 = (uVar3 ^ 0x6156616d65686373) != 0 || (uVar4 ^ 0x6e6f69746164696c) != 0;
                if (plVar9 == (long *)0x0) goto LAB_1014235b0;
                _free();
                if ((uVar3 ^ 0x6156616d65686373) == 0 && (uVar4 ^ 0x6e6f69746164696c) == 0)
                goto LAB_1014235b4;
              }
              else if (plVar9 != (long *)0x0) {
                _free();
              }
              goto LAB_10142360c;
            }
LAB_10142389c:
            lStack_a0 = lVar19 + 1;
            pbStack_b8 = pbVar17;
            lVar19 = FUN_108855b04(&bStack_98,&puStack_78,&UNK_10b210100);
            goto LAB_1014237f4;
          }
          FUN_100e077ec(&bStack_98);
          if (plVar9 == (long *)0x0) goto LAB_1014235b4;
LAB_10142360c:
          bVar5 = (byte)pbStack_e0;
          pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_101423834;
          uVar23 = *puVar22;
          puVar21[1] = puVar22[1];
          *puVar21 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar22 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar22 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar23;
          bStack_98 = bVar5;
          FUN_100e077ec(&bStack_98);
LAB_1014232c0:
          uVar15 = (uint)pbVar16;
          lVar19 = lVar19 + 1;
          pbVar18 = pbVar1;
          lVar20 = (lVar14 - 0x40U >> 6) + 1;
          pbVar8 = pbVar17;
        } while (pbVar17 != pbVar1);
        uVar2 = 2;
        if (uVar15 != 3) {
          uVar2 = uVar15;
        }
        pbVar16 = (byte *)(ulong)uVar2;
        lStack_a0 = lVar20;
      }
      lVar14 = lStack_a0;
      pbStack_b8 = pbVar18;
      FUN_100d34830(&pbStack_c0);
      if (pbVar1 != pbVar18) {
        bStack_98 = (byte)lVar14;
        cStack_97 = (char)((ulong)lVar14 >> 8);
        uStack_96 = (undefined6)((ulong)lVar14 >> 0x10);
        lVar19 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar18) >> 6) + lVar14,&bStack_98,
                               &UNK_10b23a190);
LAB_1014237c8:
        bVar12 = lVar19 != 0;
        if ((bVar6 & 0x1e) == 0x14) goto LAB_101423780;
        goto LAB_101423778;
      }
      lVar19 = 0;
      bVar12 = false;
      goto LAB_101423780;
    }
    lVar19 = FUN_108855b04(param_2,&puStack_78,&UNK_10b20b760);
  }
  *(long *)(param_1 + 8) = lVar19;
  uVar13 = 1;
LAB_101423798:
  *param_1 = uVar13;
  return;
}

